#include <qubit/platform/platform.h>
#include <qubit/platform/platform_xlib.h>

#include <X11/Xlib.h>

#include <glad/glx.h>
#include <qubit/qubit.h>

static void
_qb_platform_xlib_setup(void)
{
	Screen* screen;

	_platform.display = XOpenDisplay(NULL);
	if (_platform.display == NULL) {
		QB_FATAL_ERROR("[XLIB] Failed to open display.");
	}
	screen = XDefaultScreenOfDisplay(_platform.display);

	_platform.screen_width = XWidthOfScreen(screen);
	_platform.screen_height = XHeightOfScreen(screen);

	qb_log_info("[XLIB] Connected to display.");
}

static void
_qb_platform_glx_setup(void)
{
	int screen_id;

	screen_id = XDefaultScreen(_platform.display);
	gladLoaderLoadGLX(_platform.display, screen_id);
	if (GLAD_GLX_VERSION_1_4 == 0) {
		QB_FATAL_ERROR("[GLAD] Failed to load GLX.");
	}

	qb_log_info("[GLAD] Loaded GLX.");

	if (GLAD_GLX_ARB_create_context == 0 ||
		GLAD_GLX_ARB_create_context_profile == 0) {
		QB_FATAL_ERROR("[GLAD] GLAD_GLX_ARB_create_context not supported");
	}

	qb_log_info("[GLAD] GLAD_GLX_ARB_create_context supported.");

	if (GLAD_GLX_EXT_swap_control == 0) {
		qb_log_warn("[GLAD] GLAD_GLX_EXT_swap_control not supported.");
	} else {
		qb_log_info("[GLAD] GLAD_GLX_EXT_swap_control supported.");
	}
}

void
qb_platform_xlib_sync(void)
{
	XSync(_platform.display, False);
}

void
qb_platform_setup(void)
{
	_qb_platform_xlib_setup();
	_qb_platform_glx_setup();
}

void
qb_platform_terminate(void)
{
	XCloseDisplay(_platform.display);
	gladLoaderUnloadGLX();
}
