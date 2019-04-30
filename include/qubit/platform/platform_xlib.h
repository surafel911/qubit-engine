#ifndef QUBIT_PLATFORM_XLIB_H
#define QUBIT_PLATFORM_XLIB_H

#include <stdbool.h>

#include <X11/Xlib.h>

#include <glad/glx.h>

struct qb_platform {
	Display* display;

	unsigned int screen_width, screen_height;
};

struct qb_platform _platform;

void
qb_platform_xlib_sync(void);

GLXFBConfig
qb_platform_xlib_window_get_fb_config(void);

Atom
qb_platform_xlib_window_meta_get_delete_window_atom(void);

void
qb_platform_xlib_window_meta_get_size(unsigned int* width, unsigned int* height);

void
qb_platform_xlib_window_meta_set_size(const unsigned int width, const unsigned int height);

#endif // QUBIT_PLATFORM_XLIB_H
