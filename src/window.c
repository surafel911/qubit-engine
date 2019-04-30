#include <qubit/qubit.h>

#include <qubit/platform/platform.h>

void
qb_window_create(const char* title, const unsigned int width,
	const unsigned int height, const bool fullscreen)
{
	qb_platform_window_create(title, width, height, fullscreen);
}

void
qb_window_destroy(void)
{
	qb_platform_window_destroy();
}

bool
qb_window_has_focus(void)
{
	return qb_platform_window_has_focus();
}

void
qb_window_take_focus(void)
{
	qb_platform_window_take_focus();
}

bool
qb_window_get_fullscreen(void)
{
	return qb_platform_window_get_fullscreen();
}

void
qb_window_set_fullscreen(const bool fullscreen)
{
	qb_platform_window_set_fullscreen(fullscreen);
}

void
qb_window_get_size(unsigned int* width, unsigned int* height)
{
	qb_platform_window_get_size(width, height);
}

void
qb_window_set_size(const unsigned int width, const unsigned int height)
{
	qb_platform_window_set_size(width, height);
}

void
qb_window_get_max_size(unsigned int* width, unsigned int* height)
{
	qb_platform_window_get_max_size(width, height);
}
