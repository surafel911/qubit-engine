#include <qubit/platform/platform.h>
#include <qubit/platform/platform_xlib.h>

#include <stdbool.h>

#include <X11/Xlib.h>
#include <X11/keysym.h>

#include <qubit/qubit.h>
#include <qubit/platform/platform_input.h>

static XEvent _event;

bool
qb_platform_event_pending(void)
{
	return XPending(_platform.display);
}

void
qb_platform_event_process_next(void)
{
	static unsigned int width, height;

	XNextEvent(_platform.display, &_event);

	switch (_event.type) {
	case ClientMessage:
		if (_event.xclient.data.l[0] ==
			qb_platform_xlib_window_meta_get_delete_window_atom()) {
			qb_request_exit();
		}
		break;
	case KeyPress:
		qb_platform_event_key_press_fn((
			const unsigned int)XLookupKeysym(&_event.xkey, 1),
			(const unsigned int)_event.xkey.keycode,		
	 		(const unsigned int)_event.xkey.state);
		break;
	case KeyRelease:
		qb_platform_event_key_release_fn(
			(const unsigned int)XLookupKeysym(&_event.xkey, 1),
			(const unsigned int)_event.xkey.keycode,
			(const unsigned int)_event.xkey.state);
		break;
	case MotionNotify:
		qb_platform_event_mouse_motion_fn((const unsigned int)_event.xmotion.x,
			(const unsigned int)_event.xmotion.y,
			(const unsigned int)_event.xmotion.state);
		break;
	case ButtonPress:
		if (_event.xbutton.button > 3) {
			qb_platform_event_mouse_wheel_fn(_event.xbutton.x, _event.xbutton.y,
				(const unsigned int)_event.xbutton.button,
				(const unsigned int)_event.xbutton.state);
		} else {
			qb_platform_event_button_press_fn(_event.xbutton.x, _event.xbutton.y,
				(const unsigned int)_event.xbutton.button,
				(const unsigned int)_event.xbutton.state);
		}
		break;
	case ButtonRelease:
		if (_event.xbutton.button < 3) {
			qb_platform_event_button_release_fn(_event.xbutton.x, _event.xbutton.y,
				(const unsigned int)_event.xbutton.button,
				(const unsigned int)_event.xbutton.state);
		}
		break;
	case FocusIn:
		qb_platform_event_window_focus_gain_fn();
		break;
	case FocusOut:
		qb_platform_event_window_focus_lost_fn();
		break;
	case ConfigureNotify:
		qb_platform_xlib_window_meta_get_size(&width, &height);

		if (width != _event.xconfigure.width || height != _event.xconfigure.height) {
			qb_platform_xlib_window_meta_set_size(_event.xconfigure.width,
				_event.xconfigure.height);
			qb_platform_event_window_resize_fn(_event.xconfigure.width,
				_event.xconfigure.height);
		}
		break;
	default:
		break;
	}
}
