#include <qubit/platform/platform.h>
#include <qubit/platform/platform_xlib.h>

#include <glad/glx.h>
#include <X11/Xlib.h>

#include <qubit/qubit.h>

static void
_qb_platform_xlib_setup(void)
{
	_platform.display = XOpenDisplay(NULL);
	if (_platform.display == NULL) {
		QB_FATAL("[XLIB] Failed to open display.");
	}

	qb_log_info("[XLIB] Connected to display.");

	_platform.screen_id = XDefaultScreen(_platform.display);
}

static void
_qb_platform_atoms_setup(void)
{
	_platform.atoms._net_wm_state = XInternAtom(_platform.display,
		"_NET_WM_STATE", false);
	_platform.atoms._net_wm_delete_window = XInternAtom(_platform.display,
		"WM_DELETE_WINDOW", false);
	_platform.atoms._net_wm_state_fullscreen = XInternAtom(_platform.display,
		"_NET_WM_FULLSCREEN", false);
	_platform.atoms._net_wm_state_maximized_horz = XInternAtom(_platform.display,
		"_NET_WM_MAXIMIZED_HORZ", false);
	_platform.atoms._net_wm_state_maximized_vert = XInternAtom(_platform.display,
		"_NET_WM_MAXIMIZED_VERT", false);

	qb_log_info("[XLIB] Atoms created.");
}

static void
_qb_platform_glx_setup(void)
{
	gladLoaderLoadGLX(_platform.display, _platform.screen_id);
	if (GLAD_GLX_VERSION_1_4 == 0) {
		QB_FATAL("[GLAD] Failed to load GLX.");
	}

	qb_log_info("[GLAD] Loaded GLX.");

	if (GLAD_GLX_ARB_create_context == 0 ||
		GLAD_GLX_ARB_create_context_profile == 0) {
		QB_FATAL("[GLAD] GLAD_GLX_ARB_create_context not supported");
	}

	qb_log_info("[GLAD] GLAD_GLX_ARB_create_context supported.");

	if (GLAD_GLX_EXT_swap_control == 0) {
		qb_log_warn("[GLAD] GLAD_GLX_EXT_swap_control not supported.");
	} else {
		qb_log_info("[GLAD] GLAD_GLX_EXT_swap_control supported.");
	}
}

void
qb_platform_setup(void)
{
	_qb_platform_xlib_setup();
	_qb_platform_atoms_setup();
	_qb_platform_glx_setup();
}

void
qb_platform_terminate(void)
{
	XCloseDisplay(_platform.display);
	gladLoaderUnloadGLX();
}
