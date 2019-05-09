#include <qubit/platform/platform.h>
#include <qubit/platform/platform_xlib.h>

#include <X11/Xlib.h>

#include <glad/gl.h>
#include <glad/glx.h>

#include <qubit/qubit.h>

struct _qb_platform_opengl_context {
	GLXWindow window;
	GLXContext context;
};

static struct _qb_platform_opengl_context _context;

void
qb_platform_opengl_setup(void)
{
	const int context_attribs[] = {
		GLX_CONTEXT_MAJOR_VERSION_ARB, 4,
		GLX_CONTEXT_MINOR_VERSION_ARB, 0,
		None,
	};

	Window window;
	GLXFBConfig fb_config;

	window = qb_platform_xlib_window_get_window();
	fb_config = qb_platform_xlib_window_get_fb_config();

	_context.context = glXCreateContextAttribsARB(_platform.display,
		fb_config, NULL, True, context_attribs);
	if (_context.context == None) {
		QB_FATAL_ERROR("[GLX] Failed to create context.");
	}

	qb_log_info("[GLX] Created context.");

	if (glXIsDirect(_platform.display, _context.context) == False) {
		QB_FATAL_ERROR("[GLX] Indirect rendering context.");
	} else {
		qb_log_info("[GLX] Direct rendering context.");
	}

	_context.window = glXCreateWindow(_platform.display,
		fb_config, window, NULL);
	if (_context.window == None) {
		QB_FATAL_ERROR("[GLX] Failed to create drawable window.");
	}

	qb_log_info("[GLX] Created drawable window.");

	glXMakeContextCurrent(_platform.display, (GLXDrawable)_context.window,
		(GLXDrawable)_context.window, _context.context);

	gladLoaderLoadGL();
	if (GLAD_GL_VERSION_4_0 == 0) {
		QB_FATAL_ERROR("[GLAD] Failed to load GL version 4.0.");
	}

	qb_log_info("[GLAD] Loader GL version 4.0.");
}

void
qb_platform_opengl_terminate(void)
{
	glXMakeContextCurrent(_platform.display, None, None, NULL);
	glXDestroyWindow(_platform.display, _context.window);
	glXDestroyContext(_platform.display, _context.context);
}

void
qb_platform_opengl_swap_buffers(void)
{
	glXSwapBuffers(_platform.display, (GLXDrawable)_context.window);
}

void
qb_platform_opengl_swap_interval(const int interval)
{
	if (GLAD_GLX_EXT_swap_control != 0) {
		glXSwapIntervalEXT(_platform.display, (GLXDrawable)_context.window,
			interval);
	}
}
