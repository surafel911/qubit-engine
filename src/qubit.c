#include <qubit/qubit.h>

#include <time.h>
#include <stdio.h>
#include <stdbool.h>

static double _delta;
static bool _exit_requested;

static inline void
update_delta(void)
{
	static clock_t begin, end;

	end = clock();
	_delta = (end - begin) / (double)CLOCKS_PER_SEC;
	begin = clock();
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
