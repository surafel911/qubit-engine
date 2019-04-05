#include <qubit/qubit.h>

#include <stdio.h>
#include <stdarg.h>

static char _buffer[512];
static qb_log_fn _info_log_fn;
static qb_log_fn _warn_log_fn;
static qb_log_fn _error_log_fn;

void
qb_log_info(const char* format, ...)
{
	if (_info_log_fn == NULL) {
		return;
	}

	va_list args;
	va_start(args, format);

	vsnprintf(_buffer, sizeof(_buffer), format, args);
	va_end(args);

	_info_log_fn(_buffer);
}

void
qb_log_warn(const char* format, ...)
{
	if (_warn_log_fn == NULL) {
		return;
	}

	va_list args;
	va_start(args, format);

	vsnprintf(_buffer, sizeof(_buffer), format, args);
	va_end(args);

	_warn_log_fn(_buffer);
}

void
qb_log_error(const char* format, ...)
{
	if (_error_log_fn == NULL) {
		return;
	}

	va_list args;
	va_start(args, format);

	vsnprintf(_buffer, sizeof(_buffer), format, args);
	va_end(args);

	_error_log_fn(_buffer);
}

void
qb_log_info_set_fn(qb_log_fn log_fn)
{
	_info_log_fn = log_fn;
}

void
qb_log_warn_set_fn(qb_log_fn log_fn)
{
	_warn_log_fn = log_fn;
}

void
qb_log_error_set_fn(qb_log_fn log_fn)
{
	_error_log_fn = log_fn;
}
