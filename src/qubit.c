#include <qubit/qubit.h>

#include <time.h>
#include <stdio.h>
#include <stdbool.h>

static double _delta;
static bool _exit_requested;
static struct timespec _end, _start;

static inline void
update_delta(void)
{
	static long difference;

	clock_gettime(CLOCK_MONOTONIC, &_end);

	difference = _end.tv_nsec - _start.tv_nsec;
	if (difference < 0) {
		_delta = (difference + 1000000000) / 1000000000.0;
	} else {
		_delta = difference / 1000000000.0;
	}


	clock_gettime(CLOCK_MONOTONIC, &_start);
}

void
qb_setup(void)
{
}

void
qb_terminate(void)
{
}

void
qb_update(void)
{
	update_delta();
}

double
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
