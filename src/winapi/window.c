#include <qubit/platform/platform.h>
#include <qubit/platform/platform_winapi.h>

#include <stdio.h>
#include <stdbool.h>

#include <windows.h>

#include <qubit/qubit.h>

#define QB_WINDOW_CLASS_NAME	"Qubit"
#define QB_WINDOW_STYLE_WINDOWED	(WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | \
	WS_MINIMIZEBOX | WS_MAXIMIZEBOX)
#define QB_WINDOW_STYLE_FULLSCREEN	(WS_POPUP | WS_VISIBLE)
#define QB_WINDOW_STYLE_MASK		(QB_WINDOW_STYLE_WINDOWED | QB_WINDOW_STYLE_FULLSCREEN)

struct _qb_platform_rect {
	unsigned int x, y, w, h;
};

struct _qb_platform_window {
	HWND window;
	bool fullscreen;
	unsigned int screen_width, screen_height;
};

static struct _qb_platform_window _window;

HWND
qb_platform_window_get_window(void)
{
	return _window.window;
}

void
qb_platform_window_create(const char* title, const unsigned int width,
	const unsigned int height, const bool fullscreen)
{
	WNDCLASSEXA window_class;

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

	_window.screen_width = GetSystemMetrics(SM_CXSCREEN);
	_window.screen_height = GetSystemMetrics(SM_CYSCREEN); 

	_window.window = CreateWindowExA(0, QB_WINDOW_CLASS_NAME, title,
		QB_WINDOW_STYLE_WINDOWED, 0, 0, width, height, NULL, NULL, _platform.instance, NULL);
	if (_window.window == NULL) {
		QB_FATAL_ERROR("[WINAPI] Failed to create window.");
	}

	qb_log_info("[WINAPI] Created window.");

	ShowWindow(_window.window, SW_SHOW);
	SetForegroundWindow(_window.window);

	qb_platform_window_set_fullscreen(fullscreen);
}

void
qb_platform_window_destroy(void)
{
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
	UINT flags;
	DWORD style;
	
	struct _qb_platform_rect bounds;

	style = GetWindowLongA(_window.window, GWL_STYLE);
	style &= ~QB_WINDOW_STYLE_MASK;

	flags = SWP_SHOWWINDOW | SWP_NOCOPYBITS | SWP_FRAMECHANGED;

	_window.fullscreen = fullscreen;
	if (fullscreen) {
		bounds.x = 0;
		bounds.y = 0;
		bounds.w = _window.screen_width;
		bounds.h = _window.screen_height;

		style |= QB_WINDOW_STYLE_FULLSCREEN;
	} else {
		flags |= SWP_NOMOVE | SWP_NOSIZE;

		style |= QB_WINDOW_STYLE_WINDOWED;
	}

	SetWindowLongA(_window.window, GWL_STYLE, style);
	SetWindowPos(_window.window, HWND_TOP, bounds.x, bounds.y,
		bounds.w, bounds.h, flags);
}

void
qb_platform_window_get_size(unsigned int* width, unsigned int* height)
{
	RECT rect;

	GetWindowRect(_window.window, &rect);

	*width = rect.right - rect.left;
	*height = rect.bottom - rect.top;
}

void
qb_platform_window_set_size(const unsigned int width, const unsigned int height)
{
	struct _qb_platform_rect bounds;

	if (!_window.fullscreen) {
		bounds.w = width;
		bounds.h = height;
		bounds.x = _window.screen_width / 2 - bounds.w / 2;
		bounds.y = _window.screen_height / 2 - bounds.h / 2;

		SetWindowPos(_window.window, HWND_TOP, bounds.x, bounds.y,
			bounds.w, bounds.h, SWP_SHOWWINDOW | SWP_NOCOPYBITS);
	}
}

void
qb_platform_window_get_max_size(unsigned int* width, unsigned int* height)
{
	*width = _window.screen_width;
	*height = _window.screen_height;
}