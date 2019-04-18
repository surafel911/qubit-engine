#ifndef QUBIT_PLATFORM_XLIB_H
#define QUBIT_PLATFORM_XLIB_H

#include <stdbool.h>

#include <X11/Xlib.h>

#include <glad/glx.h>

struct qb_platform_atoms {
	Atom wm_delete_window;
	Atom _net_wm_state;
	Atom _net_wm_state_fullscreen;
	Atom _net_wm_state_maximized_horz;
	Atom _net_wm_state_maximized_vert;
};

struct qb_platform {
	Display* display;
	int screen_id;
	struct qb_platform_atoms atoms;
};

struct qb_platform _platform;

void
qb_platform_xlib_sync(void);

GLXFBConfig
qb_platform_xlib_window_get_fb_config(void);

void
qb_platform_xlib_window_meta_get_size(unsigned int* width, unsigned int* height);

void
qb_platform_xlib_window_meta_set_size(const unsigned int width, const unsigned int height);

#endif // QUBIT_PLATFORM_XLIB_H
