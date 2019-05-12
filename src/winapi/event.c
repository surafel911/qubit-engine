#include <qubit/platform/platform.h>
#include <qubit/platform/platform_winapi.h>

#include <windows.h>

#include <qubit/qubit.h>

#define WM_MOUSEHWHEEL	0x20E

#define QB_GET_SCANCODE(param)		(param & ((255ULL >> 1) << 15))
#define QB_GET_LOW_WORD(param)		(param & ((1ULL << 32) - 1))
#define QB_GET_HIGH_WORD(param)		(param >> 32)

static MSG message;

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
	switch(QB_GET_LOW_WORD(message.message)) {
	case WM_KEYDOWN:
		break;
	case WM_KEYUP:
		break;
	case WM_MOUSEWHEEL:
	case WM_MOUSEHWHEEL:
		break;
	case WM_MOUSEMOVE:
		break;
	case WM_LBUTTONDOWN:
		break;
	case WM_MBUTTONDOWN:
		break;
	case WM_RBUTTONDOWN:
		break;
	case WM_LBUTTONUP:
		break;
	case WM_MBUTTONUP:
		break;
	case WM_RBUTTONUP:
		break;
	case WM_SETFOCUS:
		break;
	case WM_KILLFOCUS:
		break;
	case WM_SIZING:
		break;
	default:
		break;
	}

	TranslateMessage(&message);
	DispatchMessage(&message);
}
