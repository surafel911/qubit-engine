#include <qubit/qubit.h>

#include <stdio.h>
#include <stdlib.h>

static char _buffer[512];
static qb_abort_fn _abort_fn;

void
qb_abort(const char* format, ...)
{
	va_list args;

	va_start(args, format);

	if (_abort_fn == NULL) {
		fprintf(stderr, "ABORT: ");
		vfprintf(stderr, format, args);
		fprintf(stderr, "\n");
	} else {
		vsnprintf(_buffer, sizeof(_buffer), format, args);
		_abort_fn(_buffer);
	}

	va_end(args);
	abort();
}

void
qb_abort_set_fn(const qb_abort_fn abort_fn)
{
	_abort_fn = abort_fn;
}
