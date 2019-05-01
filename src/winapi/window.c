#include <qubit/platform/platform.h>
#include <qubit/platform/platform_winapi.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <windows.h>

#include <qubit/qubit.h>

#define QB_WINDOW_CLASS_NAME	"Qubit"
#define QB_WINDOW_STYLE_FULLSCREEN	WS_POPUP
#define QB_WINDOW_STYLE_WINDOWED	WS_OVERLAPPEDWINDOW
#define QB_WINDOW_STYLE_MASK		(QB_WINDOW_STYLE_WINDOWED | QB_WINDOW_STYLE_FULLSCREEN)

struct _qb_platform_rect {
	unsigned int width, height;
	unsigned int x, y, w, h;
};

struct _qb_platfom_dimensions {
	unsigned width, height;
};

struct _qb_platform_window {
	HWND window;
	HDC device_context;
	bool fullscreen;
	struct _qb_platfom_dimensions window_dimensions, screen_dimensions;
};

static struct _qb_platform_window _window;

static void
_qb_platform_window_set_style(struct _qb_platform_rect* bounds, DWORD style)
{
	SetWindowLongA(_window.window, GWL_STYLE, style);
	SetWindowPos(_window.window, HWND_TOPMOST, bounds->x, bounds->y,
		bounds->w, bounds->h, SWP_SHOWWINDOW | SWP_NOACTIVATE |
		SWP_NOCOPYBITS);
}

HDC
qb_platform_window_get_device_context(void)
{
	return _window.device_context;
}

void
qb_platform_window_create(const char* title, const unsigned int width,
	const unsigned int height, const bool fullscreen)
{
	DWORD style;
	WNDCLASSEXA window_class;

	struct _qb_platform_rect bounds;

	window_class.cbSize = sizeof(window_class);
	window_class.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
	window_class.lpfnWndProc = WndProc;
	window_class.cbClsExtra = 0;
	window_class.cbWndExtra = 0;
	window_class.hInstance = _platform.instance;
	window_class.hIcon = LoadIconA(NULL, IDI_WINLOGO);
	window_class.hCursor = LoadCursor(NULL, IDC_ARROW);
	window_class.hbrBackground = NULL;
	window_class.lpszMenuName = NULL;
	window_class.lpszClassName = QB_WINDOW_CLASS_NAME;
	window_class.hIconSm = NULL;

	if(RegisterClassExA(&window_class) == 0) {
		QB_FATAL_ERROR("[WINAPI] Failed to register window class.");
	}

	_window.window_dimensions.width = width;
	_window.window_dimensions.height = height;
	_window.screen_dimensions.width = GetSystemMetrics(SM_CXSCREEN);
	_window.screen_dimensions.height = GetSystemMetrics(SM_CYSCREEN); 

	_window.fullscreen = fullscreen;
	if (fullscreen) {
		style = QB_WINDOW_STYLE_FULLSCREEN;

		bounds.x = 0;
		bounds.y = 0;
		bounds.w = _window.screen_dimensions.width;
		bounds.h = _window.screen_dimensions.height;

		_window.window = CreateWindowExA(0, QB_WINDOW_CLASS_NAME, title,
			style, bounds.x, bounds.y, bounds.w, bounds.h, NULL, NULL,
			_platform.instance, NULL);
	} else {
		style = QB_WINDOW_STYLE_WINDOWED;

		bounds.x = _window.screen_dimensions.width / 2 - width / 2;
		bounds.y = _window.screen_dimensions.height / 2 - height / 2;
		bounds.w = width;
		bounds.h = height;

		_window.window = CreateWindowExA(0, QB_WINDOW_CLASS_NAME, title,
			style, bounds.x, bounds.y, bounds.w, bounds.h, NULL, NULL,
			_platform.instance, NULL);
	}
	if (_window.window == NULL) {
		QB_FATAL_ERROR("[WINAPI] Failed to create window.");
	}

	_window.device_context = GetWindowDC(_window.window);
	if (_window.device_context == NULL) {
		QB_FATAL_ERROR("[WINAPI] Failed to get device context.");
	}

	ShowWindow(_window.window, SW_SHOW);
	SetForegroundWindow(_window.window);
}

void
qb_platform_window_destroy(void)
{
	ReleaseDC(_window.window, _window.device_context);
	DestroyWindow(_window.window);
	UnregisterClass(QB_WINDOW_CLASS_NAME, _platform.instance);
}

bool
qb_platform_window_has_focus(void)
{
	return (_window.window = GetFocus());
}

void
qb_platform_window_take_focus(void)
{
	SetFocus(_window.window);
}

bool
qb_platform_window_get_fullscreen(void)
{
	return _window.fullscreen;
}

void
qb_platform_window_set_fullscreen(const bool fullscreen)
{
	DWORD style;
	
	struct _qb_platform_rect bounds;

	style = GetWindowLongA(_window.window, GWL_STYLE);
	style &= ~QB_WINDOW_STYLE_MASK;

	_window.fullscreen = fullscreen;
	if (fullscreen) {
		style |= QB_WINDOW_STYLE_FULLSCREEN;

		bounds.x = 0;
		bounds.x = 0;
		bounds.w = _window.screen_dimensions.width;
		bounds.h = _window.screen_dimensions.height;

		_qb_platform_window_set_style(&bounds, style);
	} else {
		style |= QB_WINDOW_STYLE_WINDOWED;
		
		bounds.x = _window.screen_dimensions.width / 2 - _window.window_dimensions.width / 2;
		bounds.y = _window.screen_dimensions.height / 2 - _window.window_dimensions.height / 2;
		bounds.w = _window.window_dimensions.width;
		bounds.h = _window.window_dimensions.height;

		_qb_platform_window_set_style(&bounds, style);
	}
}

void
qb_platform_window_get_size(unsigned int* width, unsigned int* height)
{
	*width = _window.window_dimensions.width;
	*height = _window.window_dimensions.height;
}

void
qb_platform_window_set_size(const unsigned int width, const unsigned int height)
{
	struct _qb_platform_rect bounds;

	if (!_window.fullscreen) {
		bounds.x = _window.screen_dimensions.width / 2 - width / 2;
		bounds.y = _window.screen_dimensions.height / 2 - height / 2;
		bounds.w = width;
		bounds.h = height;

		SetWindowPos(_window.window, HWND_TOPMOST, bounds.x, bounds.y,
			bounds.w, bounds.h, SWP_SHOWWINDOW | SWP_NOACTIVATE |
			SWP_NOCOPYBITS);
	}
}

void
qb_platform_window_get_max_size(unsigned int* width, unsigned int* height)
{
	*width = _window.screen_dimensions.width;
	*height = _window.screen_dimensions.height;
}
