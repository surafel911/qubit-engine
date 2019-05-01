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
	TranslateMessage(&message);
	DispatchMessage(&message);
}
