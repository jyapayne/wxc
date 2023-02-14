%module event
%{
#include <wx/event.h>

#include "wxext/event_ext.h"
#include "wxext/eventfilter_ext.h"
#if defined(__WXMAC__)
#include <objc/runtime.h>
#endif

%}

%include <common.i>

%ignore wxObject::ms_classInfo;

%ignore wxEventTableEntryPointerArray::wxEventTableEntryPointerArray(size_t n, Base::const_reference v);
%ignore wxEvtHandlerArray::wxEvtHandlerArray(size_t n, Base::const_reference v);


%rename(toEventType) operator const wxEventType&;

%import "wx/setup.h"
#undef HAVE_VISIBILITY
#undef wxUSE_STD_CONTAINERS
#define wxUSE_STD_CONTAINERS 1
%import "wx/compiler.h"
%import "wx/dlimpexp.h"
%import "wx/platform.h"
%import "wx/object.h"
%import "wx/typeinfo.h"
%import "wx/defs.h"
%import "wx/vector.h"
%import "wx/dynarray.h"
%import "wx/list.h"
%import "wx/kbdstate.h"
%import "wx/mousestate.h"
%import "wx/tracker.h"
%include "wx/event.h"
%include "wx/eventfilter.h"
%include "wxext/event_ext.h"
%include "wxext/eventfilter_ext.h"

%template(wxEventTypeTagwxCommandEvent) wxEventTypeTag<wxCommandEvent>;
%template(wxEventTypeTagwxScrollEvent) wxEventTypeTag<wxScrollEvent>;
%template(wxEventTypeTagwxScrollWinEvent) wxEventTypeTag<wxScrollWinEvent>;
%template(wxEventTypeTagwxSizeEvent) wxEventTypeTag<wxSizeEvent>;
%template(wxEventTypeTagwxMoveEvent) wxEventTypeTag<wxMoveEvent>;
%template(wxEventTypeTagwxPaintEvent) wxEventTypeTag<wxPaintEvent>;
%template(wxEventTypeTagwxNcPaintEvent) wxEventTypeTag<wxNcPaintEvent>;
%template(wxEventTypeTagwxEraseEvent) wxEventTypeTag<wxEraseEvent>;
%template(wxEventTypeTagwxMouseEvent) wxEventTypeTag<wxMouseEvent>;
%template(wxEventTypeTagwxKeyEvent) wxEventTypeTag<wxKeyEvent>;
%template(wxEventTypeTagwxFocusEvent) wxEventTypeTag<wxFocusEvent>;
%template(wxEventTypeTagwxChildFocusEvent) wxEventTypeTag<wxChildFocusEvent>;
%template(wxEventTypeTagwxActivateEvent) wxEventTypeTag<wxActivateEvent>;
%template(wxEventTypeTagwxMenuEvent) wxEventTypeTag<wxMenuEvent>;
%template(wxEventTypeTagwxJoystickEvent) wxEventTypeTag<wxJoystickEvent>;
%template(wxEventTypeTagwxDropFilesEvent) wxEventTypeTag<wxDropFilesEvent>;
%template(wxEventTypeTagwxInitDialogEvent) wxEventTypeTag<wxInitDialogEvent>;
%template(wxEventTypeTagwxSysColourChangedEvent) wxEventTypeTag<wxSysColourChangedEvent>;
%template(wxEventTypeTagwxDisplayChangedEvent) wxEventTypeTag<wxDisplayChangedEvent>;
%template(wxEventTypeTagwxDPIChangedEvent) wxEventTypeTag<wxDPIChangedEvent>;
%template(wxEventTypeTagwxUpdateUIEvent) wxEventTypeTag<wxUpdateUIEvent>;
%template(wxEventTypeTagwxCloseEvent) wxEventTypeTag<wxCloseEvent>;
%template(wxEventTypeTagwxShowEvent) wxEventTypeTag<wxShowEvent>;
%template(wxEventTypeTagwxIconizeEvent) wxEventTypeTag<wxIconizeEvent>;
%template(wxEventTypeTagwxMaximizeEvent) wxEventTypeTag<wxMaximizeEvent>;
%template(wxEventTypeTagwxNavigationKeyEvent) wxEventTypeTag<wxNavigationKeyEvent>;
%template(wxEventTypeTagwxPaletteChangedEvent) wxEventTypeTag<wxPaletteChangedEvent>;
%template(wxEventTypeTagwxQueryNewPaletteEvent) wxEventTypeTag<wxQueryNewPaletteEvent>;
%template(wxEventTypeTagwxWindowCreateEvent) wxEventTypeTag<wxWindowCreateEvent>;
%template(wxEventTypeTagwxWindowDestroyEvent) wxEventTypeTag<wxWindowDestroyEvent>;
%template(wxEventTypeTagwxSetCursorEvent) wxEventTypeTag<wxSetCursorEvent>;
%template(wxEventTypeTagwxNotifyEvent) wxEventTypeTag<wxNotifyEvent>;
%template(wxEventTypeTagwxHelpEvent) wxEventTypeTag<wxHelpEvent>;
%template(wxEventTypeTagwxContextMenuEvent) wxEventTypeTag<wxContextMenuEvent>;
%template(wxEventTypeTagwxMouseCaptureChangedEvent) wxEventTypeTag<wxMouseCaptureChangedEvent>;
%template(wxEventTypeTagwxMouseCaptureLostEvent) wxEventTypeTag<wxMouseCaptureLostEvent>;
%template(wxEventTypeTagwxClipboardTextEvent) wxEventTypeTag<wxClipboardTextEvent>;
%template(wxEventTypeTagwxPanGestureEvent) wxEventTypeTag<wxPanGestureEvent>;
%template(wxEventTypeTagwxZoomGestureEvent) wxEventTypeTag<wxZoomGestureEvent>;
%template(wxEventTypeTagwxRotateGestureEvent) wxEventTypeTag<wxRotateGestureEvent>;
%template(wxEventTypeTagwxTwoFingerTapEvent) wxEventTypeTag<wxTwoFingerTapEvent>;
%template(wxEventTypeTagwxLongPressEvent) wxEventTypeTag<wxLongPressEvent>;
%template(wxEventTypeTagwxPressAndTapEvent) wxEventTypeTag<wxPressAndTapEvent>;

/* For some reason this doesn't work. Figure out why */

/* %template(wxBaseArrayForwxEventTableEntryPointerArray) wxBaseArray<wxEvtHandler*>; */
/* %template(wxBaseArrayForwxEvtHandlerArray) wxBaseArray<wxEvtHandler*>; */

/* %extend wxEventTableEntryPointerArray { */
/*   wxEventTableEntryPointerArray(size_t n, wxBaseArrayForwxEventTableEntryPointerArray::const_reference v) { */
/*     return new wxEventTableEntryPointerArray(n, v); */
/*   } */
/* } */
/* %extend wxEvtHandlerArray { */
/*   wxEvtHandlerArray(size_t n, wxBaseArrayForwxEvtHandlerArray::const_reference v) { */
/*     return new wxEvtHandlerArray(n, v); */
/*   } */
/* } */
