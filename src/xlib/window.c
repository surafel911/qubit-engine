#include <qubit/platform/platform.h>
#include <qubit/platform/platform_xlib.h>

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include <X11/Xlib.h>
#include <X11/Xatom.h>

#include <glad/glx.h>
#include <qubit/qubit.h>

struct _qb_platform_window {
	Window window;
	GLXFBConfig fb_config;
	bool fullscreen;
	unsigned int width, height;
};

struct _qb_platform_window _window;

static void
_qb_platform_window_set_fb_config(void)
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

	fb_configs = glXChooseFBConfig(_platform.display, _platform.screen_id,
		fb_attribs, &tmp);
	if (fb_configs == NULL) {
		QB_FATAL("[GLX] No suitable GLXFBConfigs found.");
	}

	qb_log_info("[GLX] Suitable GLXFBConfig found.");

	_window.fb_config = *fb_configs;
	XFree(fb_configs);
}

static void
_qb_platform_window_create(const char* title, const unsigned int width,
	const unsigned int height, const bool fullscreen)
{
	Screen* screen;
	XVisualInfo* visual_info;

	Window root_window;
	Colormap colormap;
	XSetWindowAttributes window_attribs;

	int screen_width, screen_height;

	visual_info = glXGetVisualFromFBConfig(_platform.display, _window.fb_config);
	if (visual_info == NULL) {
		QB_FATAL("[GLX] Failed to get visual.");
	}
	
	root_window = XRootWindow(_platform.display, _platform.screen_id);

	colormap = XCreateColormap(_platform.display, root_window,
		visual_info->visual, AllocNone);
	if (colormap == None) {
		QB_FATAL("[XLIB] Failed to create colormap.");
	}

	_window.width = width;
	_window.height = height;


	screen = XDefaultScreenOfDisplay(_platform.display);

	screen_width = XWidthOfScreen(screen);
	screen_height = XHeightOfScreen(screen);

	window_attribs.colormap = colormap;
	window_attribs.override_redirect = True;
	window_attribs.event_mask = KeyPressMask | KeyReleaseMask | EnterWindowMask
		| LeaveWindowMask | ButtonPressMask | ButtonReleaseMask | PointerMotionMask
		| ExposureMask | FocusChangeMask | PropertyChangeMask | StructureNotifyMask;

	_window.window = XCreateWindow(_platform.display, root_window,
		screen_width / 2.0f - width / 2.0f, screen_height / 2.0f - height / 2.0f, 
		width, height, 10, visual_info->depth, InputOutput, visual_info->visual,
		CWEventMask | CWColormap, &window_attribs);
	if (_window.window == None) {
		QB_FATAL("[XLIB] Failed to create window.");
	}

	XFree(visual_info);
	XFreeColormap(_platform.display, colormap);

	Atom protocols[] = {_platform.atoms.wm_delete_window};
	XSetWMProtocols(_platform.display, _window.window,
		protocols, QB_ARRAY_SIZE(protocols));
	
	XStoreName(_platform.display, _window.window, title);

	_window.fullscreen = fullscreen;
	if (fullscreen) {
		XChangeProperty(_platform.display, _window.window,
			_platform.atoms._net_wm_state, XA_ATOM, 32, PropModeReplace,
			(unsigned char*)&_platform.atoms._net_wm_state_fullscreen, 1);
	} else {
		XChangeProperty(_platform.display, _window.window,
			_platform.atoms._net_wm_state, XA_ATOM, 32, PropModeReplace,
			NULL, 0);
	}

	XMapWindow(_platform.display, _window.window);
	XRaiseWindow(_platform.display, _window.window);
	XClearWindow(_platform.display, _window.window);

	qb_platform_xlib_sync();
}

GLXFBConfig
qb_platform_xlib_window_get_fb_config(void)
{
	return _window.fb_config;
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
	_qb_platform_window_set_fb_config();
	_qb_platform_window_create(title, width, height, fullscreen);
}

void
qb_platform_window_destroy(void)
{
	XDestroyWindow(_platform.display, _window.window);
}

void
qb_platform_window_maximize(void)
{
	{
		Atom atoms[] = {
			_platform.atoms._net_wm_state_maximized_horz,
			_platform.atoms._net_wm_state_maximized_vert,
		};

		XChangeProperty(_platform.display, _window.window,
			_platform.atoms._net_wm_state, XA_ATOM, 32, PropModeReplace,
			(unsigned char*)atoms, 2);
	}
	{
		Atom* atoms;
		unsigned char* properties;

		Atom actual_type;
		int actual_format;
		long max_length = 1024;
		unsigned long count, bytes_after;

		XGetWindowProperty(_platform.display, _window.window,
			_platform.atoms._net_wm_state, 0L, max_length, False, XA_ATOM, &actual_type,
			&actual_format, &count, &bytes_after, &properties);

		atoms = (Atom*)properties;
		for (int i = 0; i < count; i++) {
			if (atoms[i] == _platform.atoms._net_wm_state_maximized_horz) {
				printf("yay");
				break;
			}
		}
		XFree(properties);
	}
}

bool
qb_platform_window_has_focus(void)
{
	return false;
}
void
qb_platform_window_get_focus(void)
{
}

bool
qb_platform_window_get_fullscreen(void)
{
	return _window.fullscreen;
}

void
qb_platform_window_set_fullscreen(const bool fullscreen)
{
	_window.fullscreen = fullscreen;
	if (fullscreen) {
		XChangeProperty(_platform.display, _window.window,
			_platform.atoms._net_wm_state, XA_ATOM, 32, PropModeReplace,
			(unsigned char*)&_platform.atoms._net_wm_state_fullscreen, 1);
	} else {
		XChangeProperty(_platform.display, _window.window,
			_platform.atoms._net_wm_state, XA_ATOM, 32, PropModeReplace,
			NULL, 0);
	}
}

void
qb_platform_window_get_size(unsigned int* width, unsigned int* height)
{
	if (_window.fullscreen) {
	} else {
	}
}

void
qb_platform_window_set_size(const unsigned int width, const unsigned int height)
{
	if (_window.fullscreen == false) {
		
	}
}
