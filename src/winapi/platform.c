#include <qubit/platform/platform.h>
#include <qubit/platform/platform_winapi.h>

#include <windows.h>
#include <qubit/qubit.h>

void
qb_platform_setup(void)
{
	_platform.instance = GetModuleHandle(NULL);
	if (platform.instance == NULL) {
		QB_FATAL("[WINAPI] Failed to get application handle.");
	}

	qb_log_info("[WINAPI] Retrieved application handle.");
}

void
qb_platform_terminate(void)
{
}
