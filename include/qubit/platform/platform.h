#ifndef QUBIT_PLATFORM_H
#define QUBIT_PLATFORM_H

#include <stdbool.h>

struct qb_platform;

void
qb_platform_setup(void);

void
qb_platform_terminate(void);

bool
qb_platform_event_pending(void);

void
qb_platform_event_process_next(void);

void
qb_platform_opengl_setup(void);

void
qb_platform_opengl_terminate(void);

void
qb_platform_opengl_swap_buffers(void);

void
qb_platform_opengl_swap_interval(const int interval);

void
qb_platform_window_create(const char* title, const unsigned int width,
	const unsigned height, const bool fullscreen);

void
qb_platform_window_destroy(void);

bool
qb_platform_window_has_focus(void);

void
qb_platform_window_take_focus(void);

bool
qb_platform_window_get_fullscreen(void);

void
qb_platform_window_set_fullscreen(const bool fullscreen);

void
qb_platform_window_get_size(unsigned int* width, unsigned int* height);

void
qb_platform_window_set_size(const unsigned int width, const unsigned int height);

void
qb_platform_window_get_max_size(unsigned int* width, unsigned int* height);

#endif // QUBIT_PLATFORM_H
