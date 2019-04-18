#include <qubit/qubit.h>

#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#include <qubit/platform/platform.h>

static double _delta;
static bool _exit_requested;

static void
_qb_update_delta(void)
{
	static clock_t begin, end;

	end = clock();
	_delta = (end - begin) / (double)CLOCKS_PER_SEC;
	begin = clock();
}

void
qb_setup(void)
{
	qb_platform_setup();
}

void
qb_terminate(void)
{
	qb_platform_terminate();
}

void
qb_update(void)
{
	_qb_update_delta();

	while (qb_platform_event_pending()) {
		qb_platform_event_process_next();
	}
}

const double
qb_delta(void)
{
	return _delta;
}

void
qb_request_exit(void)
{
	_exit_requested = true;
}

bool
qb_exit_requested(void)
{
	return _exit_requested;
}
