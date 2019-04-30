#include <math.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

#include <qubit/hash.h>
#include <qubit/qubit.h>

int
main(int argc, char* argv[])
{
	qb_setup();
	qb_window_create("qubit", 2550, 1440, false);

	while (!qb_exit_requested()) {
		qb_update();
	}

	qb_window_destroy();
	qb_terminate();
}
