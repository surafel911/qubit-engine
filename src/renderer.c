#include <qubit/qubit.h>

#include <stdbool.h>

#include <glad/gl.h>
#include <qubit/platform/platform.h>

typedef void (*_qb_renderer_clear)(void);
typedef void (*_qb_renderer_present)(void);
typedef void (*_qb_renderer_set_vsync)(const bool);

struct _qb_renderer_fn_table {
	_qb_renderer_clear renderer_clear;
	_qb_renderer_present renderer_present;
	_qb_renderer_set_vsync renderer_set_vsync;
};

struct _qb_renderer {
	bool vsync;
	enum qb_render_api active_api;
	struct _qb_renderer_fn_table fn_table;
};

static struct _qb_renderer _renderer;

static void
_qb_renderer_clear_gl(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

static void
_qb_renderer_present_gl(void)
{
	qb_platform_opengl_swap_buffers();
}

static void
_qb_renderer_set_vsync_gl(const bool vsync)
{
	qb_platform_opengl_swap_interval((const int)vsync);
}

static void
_qb_renderer_clear_vk(void)
{
}

static void
_qb_renderer_present_vk(void)
{
}

static void
_qb_renderer_set_vsync_vk(const bool vsync)
{
}

void
qb_renderer_create(const enum qb_render_api api)
{
	_renderer.active_api = api;
	if (api == QB_RENDER_GL) {
		_renderer.fn_table.renderer_clear = _qb_renderer_clear_gl;
		_renderer.fn_table.renderer_present = _qb_renderer_present_gl;
		_renderer.fn_table.renderer_set_vsync = _qb_renderer_set_vsync_gl;

		qb_platform_opengl_setup();

		_qb_renderer_set_vsync_gl(false);
	} else {
		_renderer.fn_table.renderer_clear = _qb_renderer_clear_vk;
		_renderer.fn_table.renderer_present = _qb_renderer_present_vk;
		_renderer.fn_table.renderer_set_vsync = _qb_renderer_set_vsync_vk;
		
		_qb_renderer_set_vsync_vk(false);
	}
}

void
qb_renderer_destroy(void)
{
	if (_renderer.active_api == QB_RENDER_GL) {
		qb_platform_opengl_terminate();
	} else {
	}
}

void
qb_renderer_clear(void)
{
	_renderer.fn_table.renderer_clear();
}

void
qb_renderer_present(void)
{
	_renderer.fn_table.renderer_present();
}

bool
qb_renderer_get_vsync(void)
{
	return _renderer.vsync;
}

void
qb_renderer_set_vsync(const bool vsync)
{
	_renderer.vsync = vsync;
	_renderer.fn_table.renderer_set_vsync(vsync);
}
