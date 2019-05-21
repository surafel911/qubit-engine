#ifndef QB_PLATFORM_EVENT_H
#define QB_PLATFORM_EVENT_H

void
qb_platform_event_key_press_fn(const unsigned int keysym, const unsigned int keycode,
	const unsigned int mod_mask);

void
qb_platform_event_key_release_fn(const unsigned int keysym, const unsigned int keycode,
	const unsigned int mod_mask);

void 
qb_platform_event_mouse_wheel_fn(const unsigned int x, const unsigned int y,
	const unsigned int wheel, const unsigned int mod_mask);

void
qb_platform_event_mouse_motion_fn(const unsigned int x, const unsigned int y,
	const unsigned int mod_mask);

void
qb_platform_event_button_press_fn(const unsigned int x, const unsigned int y,
	const unsigned int button, const unsigned int mod_mask);

void
qb_platform_event_button_release_fn(const unsigned int x, const unsigned int y,
	const unsigned int button, const unsigned int mod_mask);

void
qb_platform_event_window_focus_gain_fn(void);

void
qb_platform_event_window_focus_lost_fn(void);

void
qb_platform_event_window_resize_fn(const unsigned int width, const unsigned height);

#endif // QB_PLATFORM_EVENT_H
