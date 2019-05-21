#include <qubit/platform/platform.h>
#include <qubit/platform/platform_winapi.h>

#include <windows.h>

#include <qubit/platform/platform_input.h>

#define WM_MOUSEHWHEEL	0x20E

#define QB_GET_SCANCODE(param)		(param & (255ULL << 15))
#define QB_GET_LOW_WORD(param)		(param & ((1ULL << 32) - 1))
#define QB_GET_HIGH_WORD(param)		(param >> 32)

static MSG _message;

LRESULT CALLBACK
WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg) {
	case WM_CLOSE:
	case WM_QUIT:
		qb_request_exit();
	default:
		return DefWindowProcA(hWnd, uMsg, wParam, lParam);
	}

	return TRUE;
}

bool
qb_platform_event_pending(void)
{
	return PeekMessageA(&message, NULL, 0, 0, PM_REMOVE);
}

void
qb_platform_event_process_next(void)
{
	switch(QB_GET_LOW_WORD(_message.message)) {
	case WM_KEYDOWN:
		qb_platform_event_key_press_fn(_message.wParam,
			QB_GET_SCANCODE(_message.lParam), 0);
		break;
	case WM_KEYUP:
		qb_platform_event_key_release_fn(_message.wParam,
			QB_GET_SCANCODE(_message.lParam), 0);
		break;
	case WM_MOUSEWHEEL:
	case WM_MOUSEHWHEEL:
		qb_platform_event_mouse_wheel_fn(
			QB_GET_LOW_WORD(_message.lParam),
			QB_GET_HIGH_WORD(_message.lParam),
			QB_GET_HIGH_WORD(_message.wParam) > 0 ? 1 : -1,
			QB_GET_LOW_WORD(_message.wParam));
		break;
	case WM_MOUSEMOVE:
		qb_platform_event_mouse_motion_fn(
			QB_GET_LOW_WORD(_message.lParam),
			QB_GET_HIGH_WORD(_message.lParam),
			_message.wParam);
		break;
	case WM_LBUTTONDOWN:
		qb_platform_event_button_press_fn(
			QB_GET_LOW_WORD(_message.lParam),
			QB_GET_HIGH_WORD(_message.lParam), 1, _message.wParam);
		break;
	case WM_MBUTTONDOWN:
		qb_platform_event_button_press_fn(
			QB_GET_LOW_WORD(_message.lParam),
			QB_GET_HIGH_WORD(_message.lParam), 2, _message.wParam);
		break;
	case WM_RBUTTONDOWN:
		qb_platform_event_button_press_fn(
			QB_GET_LOW_WORD(_message.lParam),
			QB_GET_HIGH_WORD(_message.lParam), 3, _message.wParam);
		break;
	case WM_LBUTTONUP:
		qb_platform_event_button_release_fn(
			QB_GET_LOW_WORD(_message.lParam),
			QB_GET_HIGH_WORD(_message.lParam), 1, _message.wParam);
		break;
	case WM_MBUTTONUP:
		qb_platform_event_button_release_fn(
			QB_GET_LOW_WORD(_message.lParam),
			QB_GET_HIGH_WORD(_message.lParam), 2, _message.wParam);
		break;
	case WM_RBUTTONUP:
		qb_platform_event_button_release_fn(
			QB_GET_LOW_WORD(_message.lParam),
			QB_GET_HIGH_WORD(_message.lParam), 3, _message.wParam);
		break;
	case WM_SETFOCUS:
		qb_platform_event_window_focus_gain_fn();
		break;
	case WM_KILLFOCUS:
		qb_platform_event_window_focus_lost_fn();
		break;
	case WM_SIZE:
		qb_platform_event_window_resize_fn(
			QB_GET_LOW_WORD(_message.lParam),
			QB_GET_HIGH_WORD(_message.lParam));
		break;
	default:
		break;
	}

	TranslateMessage(&message);
	DispatchMessage(&message);
}
