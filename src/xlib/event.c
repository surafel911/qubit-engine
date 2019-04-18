#include <qubit/platform/platform.h>
#include <qubit/platform/platform_xlib.h>

#include <stdbool.h>

#include <X11/Xlib.h>

#include <qubit/qubit.h>

static XEvent _event;

bool
qb_platform_event_pending(void)
{
	return XPending(_platform.display);
}

void
qb_platform_event_process_next(void)
{
	XNextEvent(_platform.display, &_event);

	switch (_event.type) {
	case ClientMessage:
		if (_event.xclient.data.l[0] == _platform.atoms.wm_delete_window) {
			qb_request_exit();
		}
		break;
	default:
		break;
	}
}
