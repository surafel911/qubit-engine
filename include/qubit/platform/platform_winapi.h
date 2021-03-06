#ifndef QUBIT_PLATFORM_WINAPI_H
#define QUBIT_PLATFORM_WINAPI_H

#include <stdbool.h>

#include <windows.h>

struct qb_platform {
	HINSTANCE instance;
};

struct qb_platform _platform;

LRESULT CALLBACK
WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

HWND
qb_platform_window_get_window(void);

#endif // QUBIT_PLATFORM_WINAPI_H
