#include <qubit/platform/platform.h>
#include <qubit/platform/platform_winapi.h>

#include <windows.h>

#include <qubit/qubit.h>

#include <glad/gl.h>
#include <glad/wgl.h>

struct _qb_platform_opengl_context {
	HGLRC opengl_context;
	HDC device_context;
};

static struct _qb_platform_opengl_context _context;

static void
_qb_platform_opengl_extension_setup(void)
{
	const PIXELFORMATDESCRIPTOR pfd = {
		sizeof(PIXELFORMATDESCRIPTOR),
		1,
		PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
		PFD_TYPE_RGBA,
		32,						// Colordepth
		0, 0, 0, 0, 0, 0,
		0,
		0,
		0,
		0, 0, 0, 0,
		24,						// Depth size
		8,
		0,
		PFD_MAIN_PLANE,
		0,
		0, 0, 0
	};

	HGLRC dummy_context;

	int pfd_id;

	pfd_id = ChoosePixelFormat(_context.device_context, &pfd);
	if (pfd_id == 0) {
		QB_FATAL_ERROR("[WGL] Failed to choose false pixel format.");
	}

	if (SetPixelFormat(_context.device_context, pfd_id, &pfd) == FALSE) {
		QB_FATAL_ERROR("[WGL] Failed to set false pixel format.");
	}

	dummy_context = wglCreateContext(_context.device_context);
	if (dummy_context == NULL) {
		QB_FATAL_ERROR("[WGL] Failed to create false context.");
	}

	wglMakeCurrent(_context.device_context, dummy_context);

	if (gladLoaderLoadWGL(_context.device_context) == 0) {
		QB_FATAL_ERROR("[WGL] Failed to load WGL.");
	}

	qb_log_info("[WGL] Loaded WGL.");

	wglMakeCurrent(_context.device_context, NULL);
	wglDeleteContext(dummy_context);

	/*
	 * There is a bug in GLAD where the flag isn't set, but the function works.
	if (GLAD_WGL_VERSION_1_0 == false) {
		qb_log_error("[GLAD] Failed to load WGL version 1.0.");
		qb_abort("[GLAD] Failed to load WGL version 1.0.");
	}

    if (GLAD_WGL_EXT_swap_control == 0) {
        // TODO: Write failure
    }

	if (GLAD_WGL_ARB_pixel_format == 0) {
        // TODO: Write failure
	 }
	*/
}

static void
_qb_platform_opengl_setup(void)
{
	const int pfd_buf[] = {
		WGL_DRAW_TO_WINDOW_ARB, GL_TRUE,
		WGL_SUPPORT_OPENGL_ARB, GL_TRUE,
		WGL_DOUBLE_BUFFER_ARB, GL_TRUE,
		WGL_PIXEL_TYPE_ARB, WGL_TYPE_RGBA_ARB,
		WGL_COLOR_BITS_ARB, 32,
		WGL_DEPTH_BITS_ARB, 24,
		WGL_STENCIL_BITS_ARB, 8,
		0,
	};

	const int context_attribs[] = {
		WGL_CONTEXT_MAJOR_VERSION_ARB, 4,
		WGL_CONTEXT_MINOR_VERSION_ARB, 0,
		WGL_CONTEXT_FLAGS_ARB, WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB,
		WGL_CONTEXT_PROFILE_MASK_ARB, WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
		0,
	};

	UINT tmp;

	int pfd_id;

	if (wglChoosePixelFormatARB(_context.device_context, pfd_buf, NULL, 1, &pfd_id, &tmp) == FALSE) {
		QB_FATAL_ERROR("[WGL] Failed to choose pixel format.");
	}

	qb_log_info("[WGL] Chose pixel format.");

	if (GLAD_WGL_ARB_create_context == 0 ||
		GLAD_WGL_ARB_create_context_profile == 0) {
		_context.opengl_context = wglCreateContext(_context.device_context);
	} else {
		_context.opengl_context = wglCreateContextAttribsARB(_context.device_context, NULL, context_attribs);
	}

	qb_log_info("[WGL] Created context.");

	if (_context.opengl_context == NULL) {
		QB_FATAL_ERROR("[WGL] Failed to create context.");
	}

	wglMakeCurrent(_context.device_context, _context.opengl_context);

	gladLoaderLoadGL();
	if (GLAD_GL_VERSION_4_0 == 0) {
		QB_FATAL_ERROR("[GLAD] Failed to load GL version 4.0.");
	}

	qb_log_info("[GLAD] Loaded GL version 4.0.");
}

static void
_qb_platform_opengl_terminate(void)
{
	wglMakeCurrent(_context.device_context, NULL);
	wglDeleteContext(_context.opengl_context);

	qb_log_info("[WGL] Destroyed context.");
}

void
qb_platform_opengl_setup(void)
{
	_context.device_context = GetDC(qb_platform_window_get_window());
	if (_context.device_context == NULL) {
		QB_FATAL_ERROR("[WINAPI] Failed to get device context.");
	}

	qb_log_info("[WINAPI] Retrieved device context.");

	_qb_platform_opengl_extension_setup();
	_qb_platform_opengl_setup();
}

void
qb_platform_opengl_terminate(void)
{
	_qb_platform_opengl_terminate();

	ReleaseDC(qb_platform_window_get_window(), _context.device_context);

	qb_log_info("[WINAPI] Released device context.");
}

void
qb_platform_opengl_swap_buffers(void)
{
	SwapBuffers(_context.device_context);
}

void
qb_platform_opengl_swap_interval(const int interval)
{
	wglSwapIntervalEXT(interval);
}