#include <qubit/platform/platform.h>
#include <qubit/platform/platform_xlib.h>

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include <X11/Xlib.h>
#include <X11/Xatom.h>

#include <glad/glx.h>
#include <qubit/qubit.h>

struct _qb_platform_window_atoms {
	Atom _net_wm_state, _net_wm_state_above, _net_wm_state_modal,
	_net_wm_state_fullscreen, wm_delete_window;
};

struct _qb_platform_window {
	Window window;
	GLXFBConfig fb_config;
	bool fullscreen;
	unsigned int width, height;
	struct _qb_platform_window_atoms atoms;
};

struct _qb_platform_window _window;

static void
_qb_platform_window_set_atoms(void)
{
	_window.atoms._net_wm_state = XInternAtom(_platform.display,
		"_NET_WM_STATE", False);
	_window.atoms._net_wm_state_modal = XInternAtom(_platform.display,
		"_NET_WM_STATE_MODAL", False);
	_window.atoms._net_wm_state_above = XInternAtom(_platform.display,
		"_NET_WM_STATE_ABOVE", False);
	_window.atoms._net_wm_state_fullscreen = XInternAtom(_platform.display,
		"_NET_WM_STATE_FULLSCREEN", False);
	_window.atoms.wm_delete_window = XInternAtom(_platform.display,
		"WM_DELETE_WINDOW", False);

	qb_platform_xlib_sync();
}

static void
_qb_platform_window_set_fb_config(const int screen_id)
{
	static const GLint fb_attribs[] = {
		GLX_X_RENDERABLE, True,
		GLX_DRAWABLE_TYPE, GLX_WINDOW_BIT,
		GLX_RENDER_TYPE, GLX_RGBA_BIT,
		GLX_X_VISUAL_TYPE, GLX_TRUE_COLOR,
		GLX_RED_SIZE, 8,
		GLX_GREEN_SIZE, 8,
		GLX_BLUE_SIZE, 8,
		GLX_ALPHA_SIZE, 8,
		GLX_DEPTH_SIZE, 24,
		GLX_STENCIL_SIZE, 8,
		GLX_DOUBLEBUFFER, True,
		GLX_SAMPLES, 4,
		GLX_SAMPLE_BUFFERS, 1,
		None,
	};

	GLXFBConfig* fb_configs;

	int tmp;

	fb_configs = glXChooseFBConfig(_platform.display, screen_id,
		fb_attribs, &tmp);
	if (fb_configs == NULL) {
		QB_FATAL_ERROR("[GLX] No suitable GLXFBConfigs found.");
	}

	qb_log_info("[GLX] Suitable GLXFBConfig found.");

	_window.fb_config = *fb_configs;
	XFree(fb_configs);

	qb_platform_xlib_sync();
}

static void
_qb_platform_window_create(const int screen_id, const char* title, const unsigned int width,
	const unsigned int height, const bool fullscreen)
{
	XSizeHints* size_hints;
	XVisualInfo* visual_info;

	Atom _net_wm_bypass_compositor;
	Window root_window;
	Colormap colormap;
	XSetWindowAttributes window_attribs;

	long supplied;
	unsigned int x, y;
	unsigned long compositor;

	visual_info = glXGetVisualFromFBConfig(_platform.display, _window.fb_config);
	if (visual_info == NULL) {
		QB_FATAL_ERROR("[GLX] Failed to get visual.");
	}
	
	root_window = XRootWindow(_platform.display, screen_id);

	colormap = XCreateColormap(_platform.display, root_window,
		visual_info->visual, AllocNone);
	if (colormap == None) {
		QB_FATAL_ERROR("[XLIB] Failed to create colormap.");
	}

	x = _platform.screen_width / 2 - width / 2;
	y = _platform.screen_height / 2 - height / 2;
	_window.width = width;
	_window.height = height;

	window_attribs.colormap = colormap;
	window_attribs.override_redirect = False;
	window_attribs.event_mask = KeyPressMask | KeyReleaseMask | EnterWindowMask
		| LeaveWindowMask | ButtonPressMask | ButtonReleaseMask | PointerMotionMask
		| ExposureMask | FocusChangeMask | PropertyChangeMask | StructureNotifyMask;

	_window.window = XCreateWindow(_platform.display, root_window,
		x, y, _window.width, _window.height, 0, visual_info->depth, InputOutput,
		visual_info->visual, CWOverrideRedirect | CWEventMask | CWColormap,
		&window_attribs);
	if (_window.window == None) {
		QB_FATAL_ERROR("[XLIB] Failed to create window.");
	}

	XFree(visual_info);
	XFreeColormap(_platform.display, colormap);

	XSetWMProtocols(_platform.display, _window.window,
		&_window.atoms.wm_delete_window, 1);
	XStoreName(_platform.display, _window.window, title);

	size_hints = XAllocSizeHints();
	XGetWMNormalHints(_platform.display, _window.window, size_hints, &supplied);

	size_hints->min_width = 0;
	size_hints->min_height = 0;
	size_hints->max_width = _platform.screen_width;
	size_hints->max_height = _platform.screen_height;
	size_hints->flags = PMinSize | PMaxSize;

	XSetWMNormalHints(_platform.display, _window.window, size_hints);
	XFree(size_hints);

	compositor = 1;
	_net_wm_bypass_compositor = XInternAtom(_platform.display,
		"_NET_WM_BYPASS_COMPOSITOR", False);
	XChangeProperty(_platform.display, _window.window,
		_net_wm_bypass_compositor, XA_CARDINAL, 32, PropModeReplace,
		(unsigned char*)&compositor, 1);

	qb_platform_window_set_fullscreen(fullscreen);

	XClearWindow(_platform.display, _window.window);
	XRaiseWindow(_platform.display, _window.window);
	XMapWindow(_platform.display, _window.window);
	qb_platform_xlib_sync();

	XMoveResizeWindow(_platform.display, _window.window, x, y,
		_window.width, _window.height);

	qb_platform_xlib_sync();
}

GLXFBConfig
qb_platform_xlib_window_get_fb_config(void)
{
	return _window.fb_config;
}

Atom
qb_platform_xlib_window_meta_get_delete_window_atom(void)
{
	return _window.atoms.wm_delete_window;
}

void
qb_platform_xlib_window_meta_get_size(unsigned int* width, unsigned int* height)
{
	*width = _window.width;
	*height = _window.height;
}

void
qb_platform_xlib_window_meta_set_size(const unsigned int width, const unsigned int height)
{
	_window.width = width;
	_window.height = height;
}

void
qb_platform_window_create(const char* title, const unsigned int width,
	const unsigned height, const bool fullscreen)
{
	int screen_id;

	_qb_platform_window_set_atoms();

	screen_id = XDefaultScreen(_platform.display);
	_qb_platform_window_set_fb_config(screen_id);
	_qb_platform_window_create(screen_id, title, width, height, fullscreen);

	qb_platform_xlib_sync();
}

void
qb_platform_window_destroy(void)
{
	XDestroyWindow(_platform.display, _window.window);
	
	qb_platform_xlib_sync();
}

bool
qb_platform_window_has_focus(void)
{
	Window focus_window;

	int revert_to;

	XGetInputFocus(_platform.display, &focus_window, &revert_to);

	qb_platform_xlib_sync();

	return _window.window == focus_window;
}
void
qb_platform_window_take_focus(void)
{
	XSetInputFocus(_platform.display, _window.window, RevertToParent,
		CurrentTime);

	qb_platform_xlib_sync();
}

bool
qb_platform_window_get_fullscreen(void)
{
	return _window.fullscreen;
}

void
qb_platform_window_set_fullscreen(const bool fullscreen)
{
	Atom atoms[] = {
		_window.atoms._net_wm_state_above,
		_window.atoms._net_wm_state_modal,
		_window.atoms._net_wm_state_fullscreen,
	};

	_window.fullscreen = fullscreen;
	if(fullscreen) {
		XChangeProperty(_platform.display, _window.window,
			_window.atoms._net_wm_state, XA_ATOM, 32, PropModeReplace,
			(unsigned char*)atoms, QB_ARRAY_SIZE(atoms));
	} else {
		XChangeProperty(_platform.display, _window.window,
			_window.atoms._net_wm_state, XA_ATOM, 32, PropModeReplace,
			(unsigned char*)atoms, QB_ARRAY_SIZE(atoms) - 1);
	}

	qb_platform_xlib_sync();
}

void
qb_platform_window_get_size(unsigned int* width, unsigned int* height)
{
	qb_platform_xlib_window_meta_get_size(width, height);
}

void
qb_platform_window_set_size(const unsigned int width, const unsigned int height)
{
	unsigned int x, y;

	x = _platform.screen_width / 2 - width / 2;
	y = _platform.screen_height / 2 - height / 2;

	XMoveResizeWindow(_platform.display, _window.window, x, y,
		width, height);
	XRaiseWindow(_platform.display, _window.window);

	qb_platform_xlib_window_meta_set_size(width, height);

	qb_platform_xlib_sync();
}

void
qb_platform_window_get_max_size(unsigned int* width, unsigned int* height)
{
	Screen* screen;

	screen = XDefaultScreenOfDisplay(_platform.display);

	*width = XWidthOfScreen(screen);
	*height = XHeightOfScreen(screen);

	qb_platform_xlib_sync();
}
