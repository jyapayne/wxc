#ifndef _WX_EVENT_H_EXT_
#define _WX_EVENT_H_EXT_

#include <wx/wx.h>

class wxEventFunctorExt;
typedef wxEvtHandler* (*wxEventFunctorExtGetEvtHandlerFunc)(const wxEventFunctorExt* self);
typedef wxEventFunction (*wxEventFunctorExtGetEvtMethodFunc)(const wxEventFunctorExt* self);
typedef bool (*wxEventFunctorExtIsMatchingwxEventFunctorCRFunc)(const wxEventFunctorExt* self, wxEventFunctor const& functor);
typedef void (*wxEventFunctorExt_operator_callwxEvtHandlerPwxEventRFunc)(const wxEventFunctorExt* self, wxEvtHandler* param0, wxEvent& param1);
class wxObjectEventFunctorExt;
typedef wxEvtHandler* (*wxObjectEventFunctorExtGetEvtHandlerFunc)(const wxObjectEventFunctorExt* self);
typedef wxEventFunction (*wxObjectEventFunctorExtGetEvtMethodFunc)(const wxObjectEventFunctorExt* self);
typedef bool (*wxObjectEventFunctorExtIsMatchingwxEventFunctorCRFunc)(const wxObjectEventFunctorExt* self, wxEventFunctor const& functor);
typedef void (*wxObjectEventFunctorExt_operator_callwxEvtHandlerPwxEventRFunc)(const wxObjectEventFunctorExt* self, wxEvtHandler* param0, wxEvent& param1);
class wxEventExt;
typedef wxEvent* (*wxEventExtCloneFunc)(const wxEventExt* self);
typedef wxObjectRefData* (*wxEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxEventExtCreateRefDataFunc)(const wxEventExt* self);
typedef wxClassInfo* (*wxEventExtGetClassInfoFunc)(const wxEventExt* self);
typedef wxEventCategory (*wxEventExtGetEventCategoryFunc)(const wxEventExt* self);
class wxPropagationDisablerExt;
class wxPropagateOnceExt;
class wxEventObjectOriginSetterExt;
class wxEventProcessInHandlerOnlyExt;
class wxEventBasicPayloadMixinExt;
class wxEventAnyPayloadMixinExt;
class wxIdleEventExt;
typedef wxEvent* (*wxIdleEventExtCloneFunc)(const wxIdleEventExt* self);
typedef wxObjectRefData* (*wxIdleEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxIdleEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxIdleEventExtCreateRefDataFunc)(const wxIdleEventExt* self);
typedef wxClassInfo* (*wxIdleEventExtGetClassInfoFunc)(const wxIdleEventExt* self);
typedef wxEventCategory (*wxIdleEventExtGetEventCategoryFunc)(const wxIdleEventExt* self);
class wxThreadEventExt;
typedef wxEvent* (*wxThreadEventExtCloneFunc)(const wxThreadEventExt* self);
typedef wxObjectRefData* (*wxThreadEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxThreadEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxThreadEventExtCreateRefDataFunc)(const wxThreadEventExt* self);
typedef wxClassInfo* (*wxThreadEventExtGetClassInfoFunc)(const wxThreadEventExt* self);
typedef wxEventCategory (*wxThreadEventExtGetEventCategoryFunc)(const wxThreadEventExt* self);
class wxAsyncMethodCallEventExt;
typedef wxEvent* (*wxAsyncMethodCallEventExtCloneFunc)(const wxAsyncMethodCallEventExt* self);
typedef wxObjectRefData* (*wxAsyncMethodCallEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxAsyncMethodCallEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxAsyncMethodCallEventExtCreateRefDataFunc)(const wxAsyncMethodCallEventExt* self);
typedef void (*wxAsyncMethodCallEventExtExecuteFunc)(const wxAsyncMethodCallEventExt* self);
typedef wxClassInfo* (*wxAsyncMethodCallEventExtGetClassInfoFunc)(const wxAsyncMethodCallEventExt* self);
typedef wxEventCategory (*wxAsyncMethodCallEventExtGetEventCategoryFunc)(const wxAsyncMethodCallEventExt* self);
class wxCommandEventExt;
typedef wxEvent* (*wxCommandEventExtCloneFunc)(const wxCommandEventExt* self);
typedef wxObjectRefData* (*wxCommandEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxCommandEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxCommandEventExtCreateRefDataFunc)(const wxCommandEventExt* self);
typedef wxClassInfo* (*wxCommandEventExtGetClassInfoFunc)(const wxCommandEventExt* self);
typedef wxEventCategory (*wxCommandEventExtGetEventCategoryFunc)(const wxCommandEventExt* self);
class wxNotifyEventExt;
typedef wxEvent* (*wxNotifyEventExtCloneFunc)(const wxNotifyEventExt* self);
typedef wxObjectRefData* (*wxNotifyEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxNotifyEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxNotifyEventExtCreateRefDataFunc)(const wxNotifyEventExt* self);
typedef wxClassInfo* (*wxNotifyEventExtGetClassInfoFunc)(const wxNotifyEventExt* self);
typedef wxEventCategory (*wxNotifyEventExtGetEventCategoryFunc)(const wxNotifyEventExt* self);
class wxScrollEventExt;
typedef wxEvent* (*wxScrollEventExtCloneFunc)(const wxScrollEventExt* self);
typedef wxObjectRefData* (*wxScrollEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxScrollEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxScrollEventExtCreateRefDataFunc)(const wxScrollEventExt* self);
typedef wxClassInfo* (*wxScrollEventExtGetClassInfoFunc)(const wxScrollEventExt* self);
typedef wxEventCategory (*wxScrollEventExtGetEventCategoryFunc)(const wxScrollEventExt* self);
class wxScrollWinEventExt;
typedef wxEvent* (*wxScrollWinEventExtCloneFunc)(const wxScrollWinEventExt* self);
typedef wxObjectRefData* (*wxScrollWinEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxScrollWinEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxScrollWinEventExtCreateRefDataFunc)(const wxScrollWinEventExt* self);
typedef wxClassInfo* (*wxScrollWinEventExtGetClassInfoFunc)(const wxScrollWinEventExt* self);
typedef wxEventCategory (*wxScrollWinEventExtGetEventCategoryFunc)(const wxScrollWinEventExt* self);
class wxMouseEventExt;
typedef wxEvent* (*wxMouseEventExtCloneFunc)(const wxMouseEventExt* self);
typedef wxObjectRefData* (*wxMouseEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxMouseEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxMouseEventExtCreateRefDataFunc)(const wxMouseEventExt* self);
typedef wxClassInfo* (*wxMouseEventExtGetClassInfoFunc)(const wxMouseEventExt* self);
typedef wxEventCategory (*wxMouseEventExtGetEventCategoryFunc)(const wxMouseEventExt* self);
class wxSetCursorEventExt;
typedef wxEvent* (*wxSetCursorEventExtCloneFunc)(const wxSetCursorEventExt* self);
typedef wxObjectRefData* (*wxSetCursorEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxSetCursorEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxSetCursorEventExtCreateRefDataFunc)(const wxSetCursorEventExt* self);
typedef wxClassInfo* (*wxSetCursorEventExtGetClassInfoFunc)(const wxSetCursorEventExt* self);
typedef wxEventCategory (*wxSetCursorEventExtGetEventCategoryFunc)(const wxSetCursorEventExt* self);
class wxGestureEventExt;
typedef wxEvent* (*wxGestureEventExtCloneFunc)(const wxGestureEventExt* self);
typedef wxObjectRefData* (*wxGestureEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxGestureEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxGestureEventExtCreateRefDataFunc)(const wxGestureEventExt* self);
typedef wxClassInfo* (*wxGestureEventExtGetClassInfoFunc)(const wxGestureEventExt* self);
typedef wxEventCategory (*wxGestureEventExtGetEventCategoryFunc)(const wxGestureEventExt* self);
class wxPanGestureEventExt;
typedef wxEvent* (*wxPanGestureEventExtCloneFunc)(const wxPanGestureEventExt* self);
typedef wxObjectRefData* (*wxPanGestureEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxPanGestureEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxPanGestureEventExtCreateRefDataFunc)(const wxPanGestureEventExt* self);
typedef wxClassInfo* (*wxPanGestureEventExtGetClassInfoFunc)(const wxPanGestureEventExt* self);
typedef wxEventCategory (*wxPanGestureEventExtGetEventCategoryFunc)(const wxPanGestureEventExt* self);
class wxZoomGestureEventExt;
typedef wxEvent* (*wxZoomGestureEventExtCloneFunc)(const wxZoomGestureEventExt* self);
typedef wxObjectRefData* (*wxZoomGestureEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxZoomGestureEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxZoomGestureEventExtCreateRefDataFunc)(const wxZoomGestureEventExt* self);
typedef wxClassInfo* (*wxZoomGestureEventExtGetClassInfoFunc)(const wxZoomGestureEventExt* self);
typedef wxEventCategory (*wxZoomGestureEventExtGetEventCategoryFunc)(const wxZoomGestureEventExt* self);
class wxRotateGestureEventExt;
typedef wxEvent* (*wxRotateGestureEventExtCloneFunc)(const wxRotateGestureEventExt* self);
typedef wxObjectRefData* (*wxRotateGestureEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxRotateGestureEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxRotateGestureEventExtCreateRefDataFunc)(const wxRotateGestureEventExt* self);
typedef wxClassInfo* (*wxRotateGestureEventExtGetClassInfoFunc)(const wxRotateGestureEventExt* self);
typedef wxEventCategory (*wxRotateGestureEventExtGetEventCategoryFunc)(const wxRotateGestureEventExt* self);
class wxTwoFingerTapEventExt;
typedef wxEvent* (*wxTwoFingerTapEventExtCloneFunc)(const wxTwoFingerTapEventExt* self);
typedef wxObjectRefData* (*wxTwoFingerTapEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxTwoFingerTapEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxTwoFingerTapEventExtCreateRefDataFunc)(const wxTwoFingerTapEventExt* self);
typedef wxClassInfo* (*wxTwoFingerTapEventExtGetClassInfoFunc)(const wxTwoFingerTapEventExt* self);
typedef wxEventCategory (*wxTwoFingerTapEventExtGetEventCategoryFunc)(const wxTwoFingerTapEventExt* self);
class wxLongPressEventExt;
typedef wxEvent* (*wxLongPressEventExtCloneFunc)(const wxLongPressEventExt* self);
typedef wxObjectRefData* (*wxLongPressEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxLongPressEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxLongPressEventExtCreateRefDataFunc)(const wxLongPressEventExt* self);
typedef wxClassInfo* (*wxLongPressEventExtGetClassInfoFunc)(const wxLongPressEventExt* self);
typedef wxEventCategory (*wxLongPressEventExtGetEventCategoryFunc)(const wxLongPressEventExt* self);
class wxPressAndTapEventExt;
typedef wxEvent* (*wxPressAndTapEventExtCloneFunc)(const wxPressAndTapEventExt* self);
typedef wxObjectRefData* (*wxPressAndTapEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxPressAndTapEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxPressAndTapEventExtCreateRefDataFunc)(const wxPressAndTapEventExt* self);
typedef wxClassInfo* (*wxPressAndTapEventExtGetClassInfoFunc)(const wxPressAndTapEventExt* self);
typedef wxEventCategory (*wxPressAndTapEventExtGetEventCategoryFunc)(const wxPressAndTapEventExt* self);
class wxKeyEventExt;
typedef wxEvent* (*wxKeyEventExtCloneFunc)(const wxKeyEventExt* self);
typedef wxObjectRefData* (*wxKeyEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxKeyEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxKeyEventExtCreateRefDataFunc)(const wxKeyEventExt* self);
typedef wxClassInfo* (*wxKeyEventExtGetClassInfoFunc)(const wxKeyEventExt* self);
typedef wxEventCategory (*wxKeyEventExtGetEventCategoryFunc)(const wxKeyEventExt* self);
class wxSizeEventExt;
typedef wxEvent* (*wxSizeEventExtCloneFunc)(const wxSizeEventExt* self);
typedef wxObjectRefData* (*wxSizeEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxSizeEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxSizeEventExtCreateRefDataFunc)(const wxSizeEventExt* self);
typedef wxClassInfo* (*wxSizeEventExtGetClassInfoFunc)(const wxSizeEventExt* self);
typedef wxEventCategory (*wxSizeEventExtGetEventCategoryFunc)(const wxSizeEventExt* self);
class wxMoveEventExt;
typedef wxEvent* (*wxMoveEventExtCloneFunc)(const wxMoveEventExt* self);
typedef wxObjectRefData* (*wxMoveEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxMoveEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxMoveEventExtCreateRefDataFunc)(const wxMoveEventExt* self);
typedef wxClassInfo* (*wxMoveEventExtGetClassInfoFunc)(const wxMoveEventExt* self);
typedef wxEventCategory (*wxMoveEventExtGetEventCategoryFunc)(const wxMoveEventExt* self);
class wxPaintEventExt;
typedef wxEvent* (*wxPaintEventExtCloneFunc)(const wxPaintEventExt* self);
typedef wxObjectRefData* (*wxPaintEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxPaintEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxPaintEventExtCreateRefDataFunc)(const wxPaintEventExt* self);
typedef wxClassInfo* (*wxPaintEventExtGetClassInfoFunc)(const wxPaintEventExt* self);
typedef wxEventCategory (*wxPaintEventExtGetEventCategoryFunc)(const wxPaintEventExt* self);
class wxNcPaintEventExt;
typedef wxEvent* (*wxNcPaintEventExtCloneFunc)(const wxNcPaintEventExt* self);
typedef wxObjectRefData* (*wxNcPaintEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxNcPaintEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxNcPaintEventExtCreateRefDataFunc)(const wxNcPaintEventExt* self);
typedef wxClassInfo* (*wxNcPaintEventExtGetClassInfoFunc)(const wxNcPaintEventExt* self);
typedef wxEventCategory (*wxNcPaintEventExtGetEventCategoryFunc)(const wxNcPaintEventExt* self);
class wxEraseEventExt;
typedef wxEvent* (*wxEraseEventExtCloneFunc)(const wxEraseEventExt* self);
typedef wxObjectRefData* (*wxEraseEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxEraseEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxEraseEventExtCreateRefDataFunc)(const wxEraseEventExt* self);
typedef wxClassInfo* (*wxEraseEventExtGetClassInfoFunc)(const wxEraseEventExt* self);
typedef wxEventCategory (*wxEraseEventExtGetEventCategoryFunc)(const wxEraseEventExt* self);
class wxFocusEventExt;
typedef wxEvent* (*wxFocusEventExtCloneFunc)(const wxFocusEventExt* self);
typedef wxObjectRefData* (*wxFocusEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxFocusEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxFocusEventExtCreateRefDataFunc)(const wxFocusEventExt* self);
typedef wxClassInfo* (*wxFocusEventExtGetClassInfoFunc)(const wxFocusEventExt* self);
typedef wxEventCategory (*wxFocusEventExtGetEventCategoryFunc)(const wxFocusEventExt* self);
class wxChildFocusEventExt;
typedef wxEvent* (*wxChildFocusEventExtCloneFunc)(const wxChildFocusEventExt* self);
typedef wxObjectRefData* (*wxChildFocusEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxChildFocusEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxChildFocusEventExtCreateRefDataFunc)(const wxChildFocusEventExt* self);
typedef wxClassInfo* (*wxChildFocusEventExtGetClassInfoFunc)(const wxChildFocusEventExt* self);
typedef wxEventCategory (*wxChildFocusEventExtGetEventCategoryFunc)(const wxChildFocusEventExt* self);
class wxActivateEventExt;
typedef wxEvent* (*wxActivateEventExtCloneFunc)(const wxActivateEventExt* self);
typedef wxObjectRefData* (*wxActivateEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxActivateEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxActivateEventExtCreateRefDataFunc)(const wxActivateEventExt* self);
typedef wxClassInfo* (*wxActivateEventExtGetClassInfoFunc)(const wxActivateEventExt* self);
typedef wxEventCategory (*wxActivateEventExtGetEventCategoryFunc)(const wxActivateEventExt* self);
class wxInitDialogEventExt;
typedef wxEvent* (*wxInitDialogEventExtCloneFunc)(const wxInitDialogEventExt* self);
typedef wxObjectRefData* (*wxInitDialogEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxInitDialogEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxInitDialogEventExtCreateRefDataFunc)(const wxInitDialogEventExt* self);
typedef wxClassInfo* (*wxInitDialogEventExtGetClassInfoFunc)(const wxInitDialogEventExt* self);
typedef wxEventCategory (*wxInitDialogEventExtGetEventCategoryFunc)(const wxInitDialogEventExt* self);
class wxMenuEventExt;
typedef wxEvent* (*wxMenuEventExtCloneFunc)(const wxMenuEventExt* self);
typedef wxObjectRefData* (*wxMenuEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxMenuEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxMenuEventExtCreateRefDataFunc)(const wxMenuEventExt* self);
typedef wxClassInfo* (*wxMenuEventExtGetClassInfoFunc)(const wxMenuEventExt* self);
typedef wxEventCategory (*wxMenuEventExtGetEventCategoryFunc)(const wxMenuEventExt* self);
class wxCloseEventExt;
typedef wxEvent* (*wxCloseEventExtCloneFunc)(const wxCloseEventExt* self);
typedef wxObjectRefData* (*wxCloseEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxCloseEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxCloseEventExtCreateRefDataFunc)(const wxCloseEventExt* self);
typedef wxClassInfo* (*wxCloseEventExtGetClassInfoFunc)(const wxCloseEventExt* self);
typedef wxEventCategory (*wxCloseEventExtGetEventCategoryFunc)(const wxCloseEventExt* self);
class wxShowEventExt;
typedef wxEvent* (*wxShowEventExtCloneFunc)(const wxShowEventExt* self);
typedef wxObjectRefData* (*wxShowEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxShowEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxShowEventExtCreateRefDataFunc)(const wxShowEventExt* self);
typedef wxClassInfo* (*wxShowEventExtGetClassInfoFunc)(const wxShowEventExt* self);
typedef wxEventCategory (*wxShowEventExtGetEventCategoryFunc)(const wxShowEventExt* self);
class wxIconizeEventExt;
typedef wxEvent* (*wxIconizeEventExtCloneFunc)(const wxIconizeEventExt* self);
typedef wxObjectRefData* (*wxIconizeEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxIconizeEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxIconizeEventExtCreateRefDataFunc)(const wxIconizeEventExt* self);
typedef wxClassInfo* (*wxIconizeEventExtGetClassInfoFunc)(const wxIconizeEventExt* self);
typedef wxEventCategory (*wxIconizeEventExtGetEventCategoryFunc)(const wxIconizeEventExt* self);
class wxMaximizeEventExt;
typedef wxEvent* (*wxMaximizeEventExtCloneFunc)(const wxMaximizeEventExt* self);
typedef wxObjectRefData* (*wxMaximizeEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxMaximizeEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxMaximizeEventExtCreateRefDataFunc)(const wxMaximizeEventExt* self);
typedef wxClassInfo* (*wxMaximizeEventExtGetClassInfoFunc)(const wxMaximizeEventExt* self);
typedef wxEventCategory (*wxMaximizeEventExtGetEventCategoryFunc)(const wxMaximizeEventExt* self);
class wxFullScreenEventExt;
typedef wxEvent* (*wxFullScreenEventExtCloneFunc)(const wxFullScreenEventExt* self);
typedef wxObjectRefData* (*wxFullScreenEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxFullScreenEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxFullScreenEventExtCreateRefDataFunc)(const wxFullScreenEventExt* self);
typedef wxClassInfo* (*wxFullScreenEventExtGetClassInfoFunc)(const wxFullScreenEventExt* self);
typedef wxEventCategory (*wxFullScreenEventExtGetEventCategoryFunc)(const wxFullScreenEventExt* self);
class wxJoystickEventExt;
typedef wxEvent* (*wxJoystickEventExtCloneFunc)(const wxJoystickEventExt* self);
typedef wxObjectRefData* (*wxJoystickEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxJoystickEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxJoystickEventExtCreateRefDataFunc)(const wxJoystickEventExt* self);
typedef wxClassInfo* (*wxJoystickEventExtGetClassInfoFunc)(const wxJoystickEventExt* self);
typedef wxEventCategory (*wxJoystickEventExtGetEventCategoryFunc)(const wxJoystickEventExt* self);
class wxDropFilesEventExt;
typedef wxEvent* (*wxDropFilesEventExtCloneFunc)(const wxDropFilesEventExt* self);
typedef wxObjectRefData* (*wxDropFilesEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxDropFilesEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxDropFilesEventExtCreateRefDataFunc)(const wxDropFilesEventExt* self);
typedef wxClassInfo* (*wxDropFilesEventExtGetClassInfoFunc)(const wxDropFilesEventExt* self);
typedef wxEventCategory (*wxDropFilesEventExtGetEventCategoryFunc)(const wxDropFilesEventExt* self);
class wxUpdateUIEventExt;
typedef wxEvent* (*wxUpdateUIEventExtCloneFunc)(const wxUpdateUIEventExt* self);
typedef wxObjectRefData* (*wxUpdateUIEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxUpdateUIEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxUpdateUIEventExtCreateRefDataFunc)(const wxUpdateUIEventExt* self);
typedef wxClassInfo* (*wxUpdateUIEventExtGetClassInfoFunc)(const wxUpdateUIEventExt* self);
typedef wxEventCategory (*wxUpdateUIEventExtGetEventCategoryFunc)(const wxUpdateUIEventExt* self);
class wxSysColourChangedEventExt;
typedef wxEvent* (*wxSysColourChangedEventExtCloneFunc)(const wxSysColourChangedEventExt* self);
typedef wxObjectRefData* (*wxSysColourChangedEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxSysColourChangedEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxSysColourChangedEventExtCreateRefDataFunc)(const wxSysColourChangedEventExt* self);
typedef wxClassInfo* (*wxSysColourChangedEventExtGetClassInfoFunc)(const wxSysColourChangedEventExt* self);
typedef wxEventCategory (*wxSysColourChangedEventExtGetEventCategoryFunc)(const wxSysColourChangedEventExt* self);
class wxMouseCaptureChangedEventExt;
typedef wxEvent* (*wxMouseCaptureChangedEventExtCloneFunc)(const wxMouseCaptureChangedEventExt* self);
typedef wxObjectRefData* (*wxMouseCaptureChangedEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxMouseCaptureChangedEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxMouseCaptureChangedEventExtCreateRefDataFunc)(const wxMouseCaptureChangedEventExt* self);
typedef wxClassInfo* (*wxMouseCaptureChangedEventExtGetClassInfoFunc)(const wxMouseCaptureChangedEventExt* self);
typedef wxEventCategory (*wxMouseCaptureChangedEventExtGetEventCategoryFunc)(const wxMouseCaptureChangedEventExt* self);
class wxMouseCaptureLostEventExt;
typedef wxEvent* (*wxMouseCaptureLostEventExtCloneFunc)(const wxMouseCaptureLostEventExt* self);
typedef wxObjectRefData* (*wxMouseCaptureLostEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxMouseCaptureLostEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxMouseCaptureLostEventExtCreateRefDataFunc)(const wxMouseCaptureLostEventExt* self);
typedef wxClassInfo* (*wxMouseCaptureLostEventExtGetClassInfoFunc)(const wxMouseCaptureLostEventExt* self);
typedef wxEventCategory (*wxMouseCaptureLostEventExtGetEventCategoryFunc)(const wxMouseCaptureLostEventExt* self);
class wxDisplayChangedEventExt;
typedef wxEvent* (*wxDisplayChangedEventExtCloneFunc)(const wxDisplayChangedEventExt* self);
typedef wxObjectRefData* (*wxDisplayChangedEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxDisplayChangedEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxDisplayChangedEventExtCreateRefDataFunc)(const wxDisplayChangedEventExt* self);
typedef wxClassInfo* (*wxDisplayChangedEventExtGetClassInfoFunc)(const wxDisplayChangedEventExt* self);
typedef wxEventCategory (*wxDisplayChangedEventExtGetEventCategoryFunc)(const wxDisplayChangedEventExt* self);
class wxDPIChangedEventExt;
typedef wxEvent* (*wxDPIChangedEventExtCloneFunc)(const wxDPIChangedEventExt* self);
typedef wxObjectRefData* (*wxDPIChangedEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxDPIChangedEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxDPIChangedEventExtCreateRefDataFunc)(const wxDPIChangedEventExt* self);
typedef wxClassInfo* (*wxDPIChangedEventExtGetClassInfoFunc)(const wxDPIChangedEventExt* self);
typedef wxEventCategory (*wxDPIChangedEventExtGetEventCategoryFunc)(const wxDPIChangedEventExt* self);
class wxPaletteChangedEventExt;
typedef wxEvent* (*wxPaletteChangedEventExtCloneFunc)(const wxPaletteChangedEventExt* self);
typedef wxObjectRefData* (*wxPaletteChangedEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxPaletteChangedEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxPaletteChangedEventExtCreateRefDataFunc)(const wxPaletteChangedEventExt* self);
typedef wxClassInfo* (*wxPaletteChangedEventExtGetClassInfoFunc)(const wxPaletteChangedEventExt* self);
typedef wxEventCategory (*wxPaletteChangedEventExtGetEventCategoryFunc)(const wxPaletteChangedEventExt* self);
class wxQueryNewPaletteEventExt;
typedef wxEvent* (*wxQueryNewPaletteEventExtCloneFunc)(const wxQueryNewPaletteEventExt* self);
typedef wxObjectRefData* (*wxQueryNewPaletteEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxQueryNewPaletteEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxQueryNewPaletteEventExtCreateRefDataFunc)(const wxQueryNewPaletteEventExt* self);
typedef wxClassInfo* (*wxQueryNewPaletteEventExtGetClassInfoFunc)(const wxQueryNewPaletteEventExt* self);
typedef wxEventCategory (*wxQueryNewPaletteEventExtGetEventCategoryFunc)(const wxQueryNewPaletteEventExt* self);
class wxNavigationKeyEventExt;
typedef wxEvent* (*wxNavigationKeyEventExtCloneFunc)(const wxNavigationKeyEventExt* self);
typedef wxObjectRefData* (*wxNavigationKeyEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxNavigationKeyEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxNavigationKeyEventExtCreateRefDataFunc)(const wxNavigationKeyEventExt* self);
typedef wxClassInfo* (*wxNavigationKeyEventExtGetClassInfoFunc)(const wxNavigationKeyEventExt* self);
typedef wxEventCategory (*wxNavigationKeyEventExtGetEventCategoryFunc)(const wxNavigationKeyEventExt* self);
class wxWindowCreateEventExt;
typedef wxEvent* (*wxWindowCreateEventExtCloneFunc)(const wxWindowCreateEventExt* self);
typedef wxObjectRefData* (*wxWindowCreateEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxWindowCreateEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxWindowCreateEventExtCreateRefDataFunc)(const wxWindowCreateEventExt* self);
typedef wxClassInfo* (*wxWindowCreateEventExtGetClassInfoFunc)(const wxWindowCreateEventExt* self);
typedef wxEventCategory (*wxWindowCreateEventExtGetEventCategoryFunc)(const wxWindowCreateEventExt* self);
class wxWindowDestroyEventExt;
typedef wxEvent* (*wxWindowDestroyEventExtCloneFunc)(const wxWindowDestroyEventExt* self);
typedef wxObjectRefData* (*wxWindowDestroyEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxWindowDestroyEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxWindowDestroyEventExtCreateRefDataFunc)(const wxWindowDestroyEventExt* self);
typedef wxClassInfo* (*wxWindowDestroyEventExtGetClassInfoFunc)(const wxWindowDestroyEventExt* self);
typedef wxEventCategory (*wxWindowDestroyEventExtGetEventCategoryFunc)(const wxWindowDestroyEventExt* self);
class wxHelpEventExt;
typedef wxEvent* (*wxHelpEventExtCloneFunc)(const wxHelpEventExt* self);
typedef wxObjectRefData* (*wxHelpEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxHelpEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxHelpEventExtCreateRefDataFunc)(const wxHelpEventExt* self);
typedef wxClassInfo* (*wxHelpEventExtGetClassInfoFunc)(const wxHelpEventExt* self);
typedef wxEventCategory (*wxHelpEventExtGetEventCategoryFunc)(const wxHelpEventExt* self);
class wxClipboardTextEventExt;
typedef wxEvent* (*wxClipboardTextEventExtCloneFunc)(const wxClipboardTextEventExt* self);
typedef wxObjectRefData* (*wxClipboardTextEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxClipboardTextEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxClipboardTextEventExtCreateRefDataFunc)(const wxClipboardTextEventExt* self);
typedef wxClassInfo* (*wxClipboardTextEventExtGetClassInfoFunc)(const wxClipboardTextEventExt* self);
typedef wxEventCategory (*wxClipboardTextEventExtGetEventCategoryFunc)(const wxClipboardTextEventExt* self);
class wxContextMenuEventExt;
typedef wxEvent* (*wxContextMenuEventExtCloneFunc)(const wxContextMenuEventExt* self);
typedef wxObjectRefData* (*wxContextMenuEventExtCloneRefDatawxObjectRefDataCPFunc)(const wxContextMenuEventExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxContextMenuEventExtCreateRefDataFunc)(const wxContextMenuEventExt* self);
typedef wxClassInfo* (*wxContextMenuEventExtGetClassInfoFunc)(const wxContextMenuEventExt* self);
typedef wxEventCategory (*wxContextMenuEventExtGetEventCategoryFunc)(const wxContextMenuEventExt* self);
class wxEventTableEntryBaseExt;
class wxEventTableEntryExt;
class wxDynamicEventTableEntryExt;
class wxEventTableExt;
class wxEventTableEntryPointerArrayExt;
class wxEventHashTableExt;
class wxEvtHandlerExt;
typedef void (*wxEvtHandlerExtAddPendingEventwxEventCRFunc)(const wxEvtHandlerExt* self, wxEvent const& event);
typedef wxObjectRefData* (*wxEvtHandlerExtCloneRefDatawxObjectRefDataCPFunc)(const wxEvtHandlerExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxEvtHandlerExtCreateRefDataFunc)(const wxEvtHandlerExt* self);
typedef wxClassInfo* (*wxEvtHandlerExtGetClassInfoFunc)(const wxEvtHandlerExt* self);
typedef wxEventHashTable& (*wxEvtHandlerExtGetEventHashTableFunc)(const wxEvtHandlerExt* self);
typedef wxEventTable const* (*wxEvtHandlerExtGetEventTableFunc)(const wxEvtHandlerExt* self);
typedef bool (*wxEvtHandlerExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxEvtHandlerExt* self, wxDynamicEventTableEntry& param0);
typedef bool (*wxEvtHandlerExtProcessEventwxEventRFunc)(const wxEvtHandlerExt* self, wxEvent& event);
typedef void (*wxEvtHandlerExtQueueEventwxEventPFunc)(const wxEvtHandlerExt* self, wxEvent* event);
typedef bool (*wxEvtHandlerExtSearchEventTablewxEventTableRwxEventRFunc)(const wxEvtHandlerExt* self, wxEventTable& table, wxEvent& event);
typedef void (*wxEvtHandlerExtSetNextHandlerwxEvtHandlerPFunc)(const wxEvtHandlerExt* self, wxEvtHandler* handler);
typedef void (*wxEvtHandlerExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxEvtHandlerExt* self, wxEvtHandler* handler);
typedef bool (*wxEvtHandlerExtTryAfterwxEventRFunc)(const wxEvtHandlerExt* self, wxEvent& event);
typedef bool (*wxEvtHandlerExtTryBeforewxEventRFunc)(const wxEvtHandlerExt* self, wxEvent& event);
class wxEvtHandlerArrayExt;
class wxEventConnectionRefExt;
typedef void (*wxEventConnectionRefExtOnObjectDestroyFunc)(const wxEventConnectionRefExt* self);
typedef wxEventConnectionRef* (*wxEventConnectionRefExtToEventConnectionFunc)(const wxEventConnectionRefExt* self);
class wxEventBlockerExt;
typedef void (*wxEventBlockerExtAddPendingEventwxEventCRFunc)(const wxEventBlockerExt* self, wxEvent const& event);
typedef wxObjectRefData* (*wxEventBlockerExtCloneRefDatawxObjectRefDataCPFunc)(const wxEventBlockerExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxEventBlockerExtCreateRefDataFunc)(const wxEventBlockerExt* self);
typedef void* (*wxEventBlockerExtDoGetClientDataFunc)(const wxEventBlockerExt* self);
typedef wxClientData* (*wxEventBlockerExtDoGetClientObjectFunc)(const wxEventBlockerExt* self);
typedef void (*wxEventBlockerExtDoSetClientDatavoidPFunc)(const wxEventBlockerExt* self, void* data);
typedef void (*wxEventBlockerExtDoSetClientObjectwxClientDataPFunc)(const wxEventBlockerExt* self, wxClientData* data);
typedef wxClassInfo* (*wxEventBlockerExtGetClassInfoFunc)(const wxEventBlockerExt* self);
typedef wxEventHashTable& (*wxEventBlockerExtGetEventHashTableFunc)(const wxEventBlockerExt* self);
typedef wxEventTable const* (*wxEventBlockerExtGetEventTableFunc)(const wxEventBlockerExt* self);
typedef bool (*wxEventBlockerExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxEventBlockerExt* self, wxDynamicEventTableEntry& param0);
typedef bool (*wxEventBlockerExtProcessEventwxEventRFunc)(const wxEventBlockerExt* self, wxEvent& event);
typedef void (*wxEventBlockerExtQueueEventwxEventPFunc)(const wxEventBlockerExt* self, wxEvent* event);
typedef bool (*wxEventBlockerExtSearchEventTablewxEventTableRwxEventRFunc)(const wxEventBlockerExt* self, wxEventTable& table, wxEvent& event);
typedef void (*wxEventBlockerExtSetNextHandlerwxEvtHandlerPFunc)(const wxEventBlockerExt* self, wxEvtHandler* handler);
typedef void (*wxEventBlockerExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxEventBlockerExt* self, wxEvtHandler* handler);
typedef bool (*wxEventBlockerExtTryAfterwxEventRFunc)(const wxEventBlockerExt* self, wxEvent& event);
typedef bool (*wxEventBlockerExtTryBeforewxEventRFunc)(const wxEventBlockerExt* self, wxEvent& event);
typedef void* (*wxEventBlockerExtWXReservedEvtHandler1voidPFunc)(const wxEventBlockerExt* self, void* param0);
typedef void* (*wxEventBlockerExtWXReservedEvtHandler2voidPFunc)(const wxEventBlockerExt* self, void* param0);

class wxEventFunctorExt: public wxEventFunctor
{
public:
  virtual ~wxEventFunctorExt()  {  }
  wxEventFunctorExtGetEvtHandlerFunc m_wxEventFunctorExtGetEvtHandler = NULL;
  virtual wxEvtHandler* GetEvtHandler() const override
  {
    wxEvtHandler* res = wxEventFunctor::GetEvtHandler();
    if (*m_wxEventFunctorExtGetEvtHandler != NULL){
      return m_wxEventFunctorExtGetEvtHandler(this);
    }
    else {
      return res;
    }
  }
  wxEventFunctorExtGetEvtMethodFunc m_wxEventFunctorExtGetEvtMethod = NULL;
  virtual wxEventFunction GetEvtMethod() const override
  {
    wxEventFunction res = wxEventFunctor::GetEvtMethod();
    if (*m_wxEventFunctorExtGetEvtMethod != NULL){
      return m_wxEventFunctorExtGetEvtMethod(this);
    }
    else {
      return res;
    }
  }
  wxEventFunctorExtIsMatchingwxEventFunctorCRFunc m_wxEventFunctorExtIsMatchingwxEventFunctorCR = NULL;
  virtual bool IsMatching(wxEventFunctor const& functor) const override
  {
    if (*m_wxEventFunctorExtIsMatchingwxEventFunctorCR != NULL){
      return m_wxEventFunctorExtIsMatchingwxEventFunctorCR(this, functor);
    }
    else {
      return false;
    }
  }
  wxEventFunctorExt_operator_callwxEvtHandlerPwxEventRFunc m_wxEventFunctorExt_operator_callwxEvtHandlerPwxEventR = NULL;
  virtual void operator()(wxEvtHandler* param0, wxEvent& param1) override
  {
    if (*m_wxEventFunctorExt_operator_callwxEvtHandlerPwxEventR != NULL){
      return m_wxEventFunctorExt_operator_callwxEvtHandlerPwxEventR(this, param0, param1);
    }
  }
  wxEventFunctorExt(wxEventFunctorExtGetEvtHandlerFunc a_GetEvtHandler, wxEventFunctorExtGetEvtMethodFunc a_GetEvtMethod, wxEventFunctorExtIsMatchingwxEventFunctorCRFunc a_IsMatchingwxEventFunctorCR, wxEventFunctorExt_operator_callwxEvtHandlerPwxEventRFunc a__operator_callwxEvtHandlerPwxEventR): wxEventFunctor() {
    m_wxEventFunctorExtGetEvtHandler = a_GetEvtHandler;
    m_wxEventFunctorExtGetEvtMethod = a_GetEvtMethod;
    m_wxEventFunctorExtIsMatchingwxEventFunctorCR = a_IsMatchingwxEventFunctorCR;
    m_wxEventFunctorExt_operator_callwxEvtHandlerPwxEventR = a__operator_callwxEvtHandlerPwxEventR;
  }
};

class wxObjectEventFunctorExt: public wxObjectEventFunctor
{
public:
  wxObjectEventFunctorExt(wxObjectEventFunction method, wxEvtHandler* handler): wxObjectEventFunctor(method, handler)  {  }
  wxObjectEventFunctorExtGetEvtHandlerFunc m_wxObjectEventFunctorExtGetEvtHandler = NULL;
  virtual wxEvtHandler* GetEvtHandler() const override
  {
    wxEvtHandler* res = wxObjectEventFunctor::GetEvtHandler();
    if (*m_wxObjectEventFunctorExtGetEvtHandler != NULL){
      return m_wxObjectEventFunctorExtGetEvtHandler(this);
    }
    else {
      return res;
    }
  }
  wxObjectEventFunctorExtGetEvtMethodFunc m_wxObjectEventFunctorExtGetEvtMethod = NULL;
  virtual wxEventFunction GetEvtMethod() const override
  {
    wxEventFunction res = wxObjectEventFunctor::GetEvtMethod();
    if (*m_wxObjectEventFunctorExtGetEvtMethod != NULL){
      return m_wxObjectEventFunctorExtGetEvtMethod(this);
    }
    else {
      return res;
    }
  }
  wxObjectEventFunctorExtIsMatchingwxEventFunctorCRFunc m_wxObjectEventFunctorExtIsMatchingwxEventFunctorCR = NULL;
  virtual bool IsMatching(wxEventFunctor const& functor) const override
  {
    bool res = wxObjectEventFunctor::IsMatching(functor);
    if (*m_wxObjectEventFunctorExtIsMatchingwxEventFunctorCR != NULL){
      return m_wxObjectEventFunctorExtIsMatchingwxEventFunctorCR(this, functor);
    }
    else {
      return res;
    }
  }
  wxObjectEventFunctorExt_operator_callwxEvtHandlerPwxEventRFunc m_wxObjectEventFunctorExt_operator_callwxEvtHandlerPwxEventR = NULL;
  virtual void operator()(wxEvtHandler* param0, wxEvent& param1) override
  {
    wxObjectEventFunctor::operator()(param0, param1);
    if (*m_wxObjectEventFunctorExt_operator_callwxEvtHandlerPwxEventR != NULL){
      return m_wxObjectEventFunctorExt_operator_callwxEvtHandlerPwxEventR(this, param0, param1);
    }
  }
  wxObjectEventFunctorExt(wxObjectEventFunction method, wxEvtHandler* handler, wxObjectEventFunctorExtGetEvtHandlerFunc a_GetEvtHandler, wxObjectEventFunctorExtGetEvtMethodFunc a_GetEvtMethod, wxObjectEventFunctorExtIsMatchingwxEventFunctorCRFunc a_IsMatchingwxEventFunctorCR, wxObjectEventFunctorExt_operator_callwxEvtHandlerPwxEventRFunc a__operator_callwxEvtHandlerPwxEventR): wxObjectEventFunctor(method, handler) {
    m_wxObjectEventFunctorExtGetEvtHandler = a_GetEvtHandler;
    m_wxObjectEventFunctorExtGetEvtMethod = a_GetEvtMethod;
    m_wxObjectEventFunctorExtIsMatchingwxEventFunctorCR = a_IsMatchingwxEventFunctorCR;
    m_wxObjectEventFunctorExt_operator_callwxEvtHandlerPwxEventR = a__operator_callwxEvtHandlerPwxEventR;
  }
};

class wxEventExt: public wxEvent
{
public:
  wxEventExt(int winid = 0, wxEventType commandType = wxEVT_NULL): wxEvent(winid, commandType)  {  }
  wxEventExt(wxEvent const& param0): wxEvent(param0)  {  }
  wxEventExtCloneFunc m_wxEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    if (*m_wxEventExtClone != NULL){
      return m_wxEventExtClone(this);
    }
    else {
      return NULL;
    }
  }
  wxEventExtCloneRefDatawxObjectRefDataCPFunc m_wxEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxEvent::CloneRefData(data);
    if (*m_wxEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxEventExtCreateRefDataFunc m_wxEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxEvent::CreateRefData();
    if (*m_wxEventExtCreateRefData != NULL){
      return m_wxEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxEventExtGetClassInfoFunc m_wxEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxEvent::GetClassInfo();
    if (*m_wxEventExtGetClassInfo != NULL){
      return m_wxEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxEventExtGetEventCategoryFunc m_wxEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxEvent::GetEventCategory();
    if (*m_wxEventExtGetEventCategory != NULL){
      return m_wxEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxEventExt(wxEventExtCloneFunc a_Clone, wxEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxEventExtCreateRefDataFunc a_CreateRefData, wxEventExtGetClassInfoFunc a_GetClassInfo, wxEventExtGetEventCategoryFunc a_GetEventCategory): wxEvent() {
    m_wxEventExtClone = a_Clone;
    m_wxEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxEventExtCreateRefData = a_CreateRefData;
    m_wxEventExtGetClassInfo = a_GetClassInfo;
    m_wxEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxPropagationDisablerExt: public wxPropagationDisabler
{
public:
  wxPropagationDisablerExt(wxEvent& event): wxPropagationDisabler(event)  {  }
};

class wxPropagateOnceExt: public wxPropagateOnce
{
public:
  wxPropagateOnceExt(wxEvent& event, wxEvtHandler* handler = __null): wxPropagateOnce(event, handler)  {  }
};

class wxEventObjectOriginSetterExt: public wxEventObjectOriginSetter
{
public:
  wxEventObjectOriginSetterExt(wxEvent& event, wxObject* source, int winid = 0): wxEventObjectOriginSetter(event, source, winid)  {  }
};

class wxEventProcessInHandlerOnlyExt: public wxEventProcessInHandlerOnly
{
public:
  wxEventProcessInHandlerOnlyExt(wxEvent& event, wxEvtHandler* handler): wxEventProcessInHandlerOnly(event, handler)  {  }
};

class wxEventBasicPayloadMixinExt: public wxEventBasicPayloadMixin
{
public:
  wxEventBasicPayloadMixinExt(): wxEventBasicPayloadMixin()  {  }
  wxEventBasicPayloadMixinExt(wxEventBasicPayloadMixin const& param0): wxEventBasicPayloadMixin(param0)  {  }
};

class wxEventAnyPayloadMixinExt: public wxEventAnyPayloadMixin
{
public:
  wxEventAnyPayloadMixinExt(): wxEventAnyPayloadMixin()  {  }
};

class wxIdleEventExt: public wxIdleEvent
{
public:
  wxIdleEventExt(): wxIdleEvent()  {  }
  wxIdleEventExt(wxIdleEvent const& event): wxIdleEvent(event)  {  }
  wxIdleEventExtCloneFunc m_wxIdleEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxIdleEvent::Clone();
    if (*m_wxIdleEventExtClone != NULL){
      return m_wxIdleEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxIdleEventExtCloneRefDatawxObjectRefDataCPFunc m_wxIdleEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxIdleEvent::CloneRefData(data);
    if (*m_wxIdleEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxIdleEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxIdleEventExtCreateRefDataFunc m_wxIdleEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxIdleEvent::CreateRefData();
    if (*m_wxIdleEventExtCreateRefData != NULL){
      return m_wxIdleEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxIdleEventExtGetClassInfoFunc m_wxIdleEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxIdleEvent::GetClassInfo();
    if (*m_wxIdleEventExtGetClassInfo != NULL){
      return m_wxIdleEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxIdleEventExtGetEventCategoryFunc m_wxIdleEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxIdleEvent::GetEventCategory();
    if (*m_wxIdleEventExtGetEventCategory != NULL){
      return m_wxIdleEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxIdleEventExt(wxIdleEventExtCloneFunc a_Clone, wxIdleEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxIdleEventExtCreateRefDataFunc a_CreateRefData, wxIdleEventExtGetClassInfoFunc a_GetClassInfo, wxIdleEventExtGetEventCategoryFunc a_GetEventCategory): wxIdleEvent() {
    m_wxIdleEventExtClone = a_Clone;
    m_wxIdleEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxIdleEventExtCreateRefData = a_CreateRefData;
    m_wxIdleEventExtGetClassInfo = a_GetClassInfo;
    m_wxIdleEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxThreadEventExt: public wxThreadEvent
{
public:
  wxThreadEventExt(wxEventType eventType, int id = wxID_ANY): wxThreadEvent(eventType, id)  {  }
  wxThreadEventExt(wxThreadEvent const& event): wxThreadEvent(event)  {  }
  wxThreadEventExtCloneFunc m_wxThreadEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxThreadEvent::Clone();
    if (*m_wxThreadEventExtClone != NULL){
      return m_wxThreadEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxThreadEventExtCloneRefDatawxObjectRefDataCPFunc m_wxThreadEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxThreadEvent::CloneRefData(data);
    if (*m_wxThreadEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxThreadEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxThreadEventExtCreateRefDataFunc m_wxThreadEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxThreadEvent::CreateRefData();
    if (*m_wxThreadEventExtCreateRefData != NULL){
      return m_wxThreadEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxThreadEventExtGetClassInfoFunc m_wxThreadEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxThreadEvent::GetClassInfo();
    if (*m_wxThreadEventExtGetClassInfo != NULL){
      return m_wxThreadEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxThreadEventExtGetEventCategoryFunc m_wxThreadEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxThreadEvent::GetEventCategory();
    if (*m_wxThreadEventExtGetEventCategory != NULL){
      return m_wxThreadEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxThreadEventExt(wxThreadEventExtCloneFunc a_Clone, wxThreadEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxThreadEventExtCreateRefDataFunc a_CreateRefData, wxThreadEventExtGetClassInfoFunc a_GetClassInfo, wxThreadEventExtGetEventCategoryFunc a_GetEventCategory): wxThreadEvent() {
    m_wxThreadEventExtClone = a_Clone;
    m_wxThreadEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxThreadEventExtCreateRefData = a_CreateRefData;
    m_wxThreadEventExtGetClassInfo = a_GetClassInfo;
    m_wxThreadEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxAsyncMethodCallEventExt: public wxAsyncMethodCallEvent
{
public:
  wxAsyncMethodCallEventExt(wxObject* object): wxAsyncMethodCallEvent(object)  {  }
  wxAsyncMethodCallEventExt(wxAsyncMethodCallEvent const& other): wxAsyncMethodCallEvent(other)  {  }
  wxAsyncMethodCallEventExtCloneFunc m_wxAsyncMethodCallEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    if (*m_wxAsyncMethodCallEventExtClone != NULL){
      return m_wxAsyncMethodCallEventExtClone(this);
    }
    else {
      return NULL;
    }
  }
  wxAsyncMethodCallEventExtCloneRefDatawxObjectRefDataCPFunc m_wxAsyncMethodCallEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAsyncMethodCallEvent::CloneRefData(data);
    if (*m_wxAsyncMethodCallEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxAsyncMethodCallEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxAsyncMethodCallEventExtCreateRefDataFunc m_wxAsyncMethodCallEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxAsyncMethodCallEvent::CreateRefData();
    if (*m_wxAsyncMethodCallEventExtCreateRefData != NULL){
      return m_wxAsyncMethodCallEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxAsyncMethodCallEventExtExecuteFunc m_wxAsyncMethodCallEventExtExecute = NULL;
  virtual void Execute() override
  {
    if (*m_wxAsyncMethodCallEventExtExecute != NULL){
      return m_wxAsyncMethodCallEventExtExecute(this);
    }
  }
  wxAsyncMethodCallEventExtGetClassInfoFunc m_wxAsyncMethodCallEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxAsyncMethodCallEvent::GetClassInfo();
    if (*m_wxAsyncMethodCallEventExtGetClassInfo != NULL){
      return m_wxAsyncMethodCallEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxAsyncMethodCallEventExtGetEventCategoryFunc m_wxAsyncMethodCallEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxAsyncMethodCallEvent::GetEventCategory();
    if (*m_wxAsyncMethodCallEventExtGetEventCategory != NULL){
      return m_wxAsyncMethodCallEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxAsyncMethodCallEventExt(wxObject* object, wxAsyncMethodCallEventExtCloneFunc a_Clone, wxAsyncMethodCallEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxAsyncMethodCallEventExtCreateRefDataFunc a_CreateRefData, wxAsyncMethodCallEventExtExecuteFunc a_Execute, wxAsyncMethodCallEventExtGetClassInfoFunc a_GetClassInfo, wxAsyncMethodCallEventExtGetEventCategoryFunc a_GetEventCategory): wxAsyncMethodCallEvent(object) {
    m_wxAsyncMethodCallEventExtClone = a_Clone;
    m_wxAsyncMethodCallEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxAsyncMethodCallEventExtCreateRefData = a_CreateRefData;
    m_wxAsyncMethodCallEventExtExecute = a_Execute;
    m_wxAsyncMethodCallEventExtGetClassInfo = a_GetClassInfo;
    m_wxAsyncMethodCallEventExtGetEventCategory = a_GetEventCategory;
  }
};

#if wxUSE_GUI
class wxCommandEventExt: public wxCommandEvent
{
public:
  wxCommandEventExt(wxEventType commandType = wxEVT_NULL, int winid = 0): wxCommandEvent(commandType, winid)  {  }
  wxCommandEventExt(wxCommandEvent const& event): wxCommandEvent(event)  {  }
  wxCommandEventExtCloneFunc m_wxCommandEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxCommandEvent::Clone();
    if (*m_wxCommandEventExtClone != NULL){
      return m_wxCommandEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxCommandEventExtCloneRefDatawxObjectRefDataCPFunc m_wxCommandEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxCommandEvent::CloneRefData(data);
    if (*m_wxCommandEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxCommandEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxCommandEventExtCreateRefDataFunc m_wxCommandEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxCommandEvent::CreateRefData();
    if (*m_wxCommandEventExtCreateRefData != NULL){
      return m_wxCommandEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxCommandEventExtGetClassInfoFunc m_wxCommandEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxCommandEvent::GetClassInfo();
    if (*m_wxCommandEventExtGetClassInfo != NULL){
      return m_wxCommandEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxCommandEventExtGetEventCategoryFunc m_wxCommandEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxCommandEvent::GetEventCategory();
    if (*m_wxCommandEventExtGetEventCategory != NULL){
      return m_wxCommandEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxCommandEventExt(wxCommandEventExtCloneFunc a_Clone, wxCommandEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxCommandEventExtCreateRefDataFunc a_CreateRefData, wxCommandEventExtGetClassInfoFunc a_GetClassInfo, wxCommandEventExtGetEventCategoryFunc a_GetEventCategory): wxCommandEvent() {
    m_wxCommandEventExtClone = a_Clone;
    m_wxCommandEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxCommandEventExtCreateRefData = a_CreateRefData;
    m_wxCommandEventExtGetClassInfo = a_GetClassInfo;
    m_wxCommandEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxNotifyEventExt: public wxNotifyEvent
{
public:
  wxNotifyEventExt(wxEventType commandType = wxEVT_NULL, int winid = 0): wxNotifyEvent(commandType, winid)  {  }
  wxNotifyEventExt(wxNotifyEvent const& event): wxNotifyEvent(event)  {  }
  wxNotifyEventExtCloneFunc m_wxNotifyEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxNotifyEvent::Clone();
    if (*m_wxNotifyEventExtClone != NULL){
      return m_wxNotifyEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxNotifyEventExtCloneRefDatawxObjectRefDataCPFunc m_wxNotifyEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxNotifyEvent::CloneRefData(data);
    if (*m_wxNotifyEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxNotifyEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxNotifyEventExtCreateRefDataFunc m_wxNotifyEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxNotifyEvent::CreateRefData();
    if (*m_wxNotifyEventExtCreateRefData != NULL){
      return m_wxNotifyEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxNotifyEventExtGetClassInfoFunc m_wxNotifyEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxNotifyEvent::GetClassInfo();
    if (*m_wxNotifyEventExtGetClassInfo != NULL){
      return m_wxNotifyEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxNotifyEventExtGetEventCategoryFunc m_wxNotifyEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxNotifyEvent::GetEventCategory();
    if (*m_wxNotifyEventExtGetEventCategory != NULL){
      return m_wxNotifyEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxNotifyEventExt(wxNotifyEventExtCloneFunc a_Clone, wxNotifyEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxNotifyEventExtCreateRefDataFunc a_CreateRefData, wxNotifyEventExtGetClassInfoFunc a_GetClassInfo, wxNotifyEventExtGetEventCategoryFunc a_GetEventCategory): wxNotifyEvent() {
    m_wxNotifyEventExtClone = a_Clone;
    m_wxNotifyEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxNotifyEventExtCreateRefData = a_CreateRefData;
    m_wxNotifyEventExtGetClassInfo = a_GetClassInfo;
    m_wxNotifyEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxScrollEventExt: public wxScrollEvent
{
public:
  wxScrollEventExt(wxEventType commandType = wxEVT_NULL, int winid = 0, int pos = 0, int orient = 0): wxScrollEvent(commandType, winid, pos, orient)  {  }
  wxScrollEventExt(wxScrollEvent const& param0): wxScrollEvent(param0)  {  }
  wxScrollEventExtCloneFunc m_wxScrollEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxScrollEvent::Clone();
    if (*m_wxScrollEventExtClone != NULL){
      return m_wxScrollEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxScrollEventExtCloneRefDatawxObjectRefDataCPFunc m_wxScrollEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxScrollEvent::CloneRefData(data);
    if (*m_wxScrollEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxScrollEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxScrollEventExtCreateRefDataFunc m_wxScrollEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxScrollEvent::CreateRefData();
    if (*m_wxScrollEventExtCreateRefData != NULL){
      return m_wxScrollEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxScrollEventExtGetClassInfoFunc m_wxScrollEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxScrollEvent::GetClassInfo();
    if (*m_wxScrollEventExtGetClassInfo != NULL){
      return m_wxScrollEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxScrollEventExtGetEventCategoryFunc m_wxScrollEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxScrollEvent::GetEventCategory();
    if (*m_wxScrollEventExtGetEventCategory != NULL){
      return m_wxScrollEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxScrollEventExt(wxScrollEventExtCloneFunc a_Clone, wxScrollEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxScrollEventExtCreateRefDataFunc a_CreateRefData, wxScrollEventExtGetClassInfoFunc a_GetClassInfo, wxScrollEventExtGetEventCategoryFunc a_GetEventCategory): wxScrollEvent() {
    m_wxScrollEventExtClone = a_Clone;
    m_wxScrollEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxScrollEventExtCreateRefData = a_CreateRefData;
    m_wxScrollEventExtGetClassInfo = a_GetClassInfo;
    m_wxScrollEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxScrollWinEventExt: public wxScrollWinEvent
{
public:
  wxScrollWinEventExt(wxEventType commandType = wxEVT_NULL, int pos = 0, int orient = 0): wxScrollWinEvent(commandType, pos, orient)  {  }
  wxScrollWinEventExt(wxScrollWinEvent const& event): wxScrollWinEvent(event)  {  }
  wxScrollWinEventExtCloneFunc m_wxScrollWinEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxScrollWinEvent::Clone();
    if (*m_wxScrollWinEventExtClone != NULL){
      return m_wxScrollWinEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxScrollWinEventExtCloneRefDatawxObjectRefDataCPFunc m_wxScrollWinEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxScrollWinEvent::CloneRefData(data);
    if (*m_wxScrollWinEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxScrollWinEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxScrollWinEventExtCreateRefDataFunc m_wxScrollWinEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxScrollWinEvent::CreateRefData();
    if (*m_wxScrollWinEventExtCreateRefData != NULL){
      return m_wxScrollWinEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxScrollWinEventExtGetClassInfoFunc m_wxScrollWinEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxScrollWinEvent::GetClassInfo();
    if (*m_wxScrollWinEventExtGetClassInfo != NULL){
      return m_wxScrollWinEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxScrollWinEventExtGetEventCategoryFunc m_wxScrollWinEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxScrollWinEvent::GetEventCategory();
    if (*m_wxScrollWinEventExtGetEventCategory != NULL){
      return m_wxScrollWinEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxScrollWinEventExt(wxScrollWinEventExtCloneFunc a_Clone, wxScrollWinEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxScrollWinEventExtCreateRefDataFunc a_CreateRefData, wxScrollWinEventExtGetClassInfoFunc a_GetClassInfo, wxScrollWinEventExtGetEventCategoryFunc a_GetEventCategory): wxScrollWinEvent() {
    m_wxScrollWinEventExtClone = a_Clone;
    m_wxScrollWinEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxScrollWinEventExtCreateRefData = a_CreateRefData;
    m_wxScrollWinEventExtGetClassInfo = a_GetClassInfo;
    m_wxScrollWinEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxMouseEventExt: public wxMouseEvent
{
public:
  wxMouseEventExt(wxEventType mouseType = wxEVT_NULL): wxMouseEvent(mouseType)  {  }
  wxMouseEventExt(wxMouseEvent const& event): wxMouseEvent(event)  {  }
  wxMouseEventExtCloneFunc m_wxMouseEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxMouseEvent::Clone();
    if (*m_wxMouseEventExtClone != NULL){
      return m_wxMouseEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxMouseEventExtCloneRefDatawxObjectRefDataCPFunc m_wxMouseEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxMouseEvent::CloneRefData(data);
    if (*m_wxMouseEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxMouseEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxMouseEventExtCreateRefDataFunc m_wxMouseEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxMouseEvent::CreateRefData();
    if (*m_wxMouseEventExtCreateRefData != NULL){
      return m_wxMouseEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxMouseEventExtGetClassInfoFunc m_wxMouseEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxMouseEvent::GetClassInfo();
    if (*m_wxMouseEventExtGetClassInfo != NULL){
      return m_wxMouseEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxMouseEventExtGetEventCategoryFunc m_wxMouseEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxMouseEvent::GetEventCategory();
    if (*m_wxMouseEventExtGetEventCategory != NULL){
      return m_wxMouseEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxMouseEventExt(wxMouseEventExtCloneFunc a_Clone, wxMouseEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxMouseEventExtCreateRefDataFunc a_CreateRefData, wxMouseEventExtGetClassInfoFunc a_GetClassInfo, wxMouseEventExtGetEventCategoryFunc a_GetEventCategory): wxMouseEvent() {
    m_wxMouseEventExtClone = a_Clone;
    m_wxMouseEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxMouseEventExtCreateRefData = a_CreateRefData;
    m_wxMouseEventExtGetClassInfo = a_GetClassInfo;
    m_wxMouseEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxSetCursorEventExt: public wxSetCursorEvent
{
public:
  wxSetCursorEventExt(wxCoord x = 0, wxCoord y = 0): wxSetCursorEvent(x, y)  {  }
  wxSetCursorEventExt(wxSetCursorEvent const& event): wxSetCursorEvent(event)  {  }
  wxSetCursorEventExtCloneFunc m_wxSetCursorEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxSetCursorEvent::Clone();
    if (*m_wxSetCursorEventExtClone != NULL){
      return m_wxSetCursorEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxSetCursorEventExtCloneRefDatawxObjectRefDataCPFunc m_wxSetCursorEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxSetCursorEvent::CloneRefData(data);
    if (*m_wxSetCursorEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxSetCursorEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxSetCursorEventExtCreateRefDataFunc m_wxSetCursorEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxSetCursorEvent::CreateRefData();
    if (*m_wxSetCursorEventExtCreateRefData != NULL){
      return m_wxSetCursorEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxSetCursorEventExtGetClassInfoFunc m_wxSetCursorEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxSetCursorEvent::GetClassInfo();
    if (*m_wxSetCursorEventExtGetClassInfo != NULL){
      return m_wxSetCursorEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxSetCursorEventExtGetEventCategoryFunc m_wxSetCursorEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxSetCursorEvent::GetEventCategory();
    if (*m_wxSetCursorEventExtGetEventCategory != NULL){
      return m_wxSetCursorEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxSetCursorEventExt(wxSetCursorEventExtCloneFunc a_Clone, wxSetCursorEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxSetCursorEventExtCreateRefDataFunc a_CreateRefData, wxSetCursorEventExtGetClassInfoFunc a_GetClassInfo, wxSetCursorEventExtGetEventCategoryFunc a_GetEventCategory): wxSetCursorEvent() {
    m_wxSetCursorEventExtClone = a_Clone;
    m_wxSetCursorEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxSetCursorEventExtCreateRefData = a_CreateRefData;
    m_wxSetCursorEventExtGetClassInfo = a_GetClassInfo;
    m_wxSetCursorEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxGestureEventExt: public wxGestureEvent
{
public:
  wxGestureEventExt(wxWindowID winid = 0, wxEventType type = wxEVT_NULL): wxGestureEvent(winid, type)  {  }
  wxGestureEventExt(wxGestureEvent const& event): wxGestureEvent(event)  {  }
  wxGestureEventExtCloneFunc m_wxGestureEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxGestureEvent::Clone();
    if (*m_wxGestureEventExtClone != NULL){
      return m_wxGestureEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxGestureEventExtCloneRefDatawxObjectRefDataCPFunc m_wxGestureEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxGestureEvent::CloneRefData(data);
    if (*m_wxGestureEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxGestureEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxGestureEventExtCreateRefDataFunc m_wxGestureEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxGestureEvent::CreateRefData();
    if (*m_wxGestureEventExtCreateRefData != NULL){
      return m_wxGestureEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxGestureEventExtGetClassInfoFunc m_wxGestureEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxGestureEvent::GetClassInfo();
    if (*m_wxGestureEventExtGetClassInfo != NULL){
      return m_wxGestureEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxGestureEventExtGetEventCategoryFunc m_wxGestureEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxGestureEvent::GetEventCategory();
    if (*m_wxGestureEventExtGetEventCategory != NULL){
      return m_wxGestureEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxGestureEventExt(wxGestureEventExtCloneFunc a_Clone, wxGestureEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxGestureEventExtCreateRefDataFunc a_CreateRefData, wxGestureEventExtGetClassInfoFunc a_GetClassInfo, wxGestureEventExtGetEventCategoryFunc a_GetEventCategory): wxGestureEvent() {
    m_wxGestureEventExtClone = a_Clone;
    m_wxGestureEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxGestureEventExtCreateRefData = a_CreateRefData;
    m_wxGestureEventExtGetClassInfo = a_GetClassInfo;
    m_wxGestureEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxPanGestureEventExt: public wxPanGestureEvent
{
public:
  wxPanGestureEventExt(wxWindowID winid = 0): wxPanGestureEvent(winid)  {  }
  wxPanGestureEventExt(wxPanGestureEvent const& event): wxPanGestureEvent(event)  {  }
  wxPanGestureEventExtCloneFunc m_wxPanGestureEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxPanGestureEvent::Clone();
    if (*m_wxPanGestureEventExtClone != NULL){
      return m_wxPanGestureEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxPanGestureEventExtCloneRefDatawxObjectRefDataCPFunc m_wxPanGestureEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxPanGestureEvent::CloneRefData(data);
    if (*m_wxPanGestureEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxPanGestureEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxPanGestureEventExtCreateRefDataFunc m_wxPanGestureEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxPanGestureEvent::CreateRefData();
    if (*m_wxPanGestureEventExtCreateRefData != NULL){
      return m_wxPanGestureEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxPanGestureEventExtGetClassInfoFunc m_wxPanGestureEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxPanGestureEvent::GetClassInfo();
    if (*m_wxPanGestureEventExtGetClassInfo != NULL){
      return m_wxPanGestureEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxPanGestureEventExtGetEventCategoryFunc m_wxPanGestureEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxPanGestureEvent::GetEventCategory();
    if (*m_wxPanGestureEventExtGetEventCategory != NULL){
      return m_wxPanGestureEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxPanGestureEventExt(wxPanGestureEventExtCloneFunc a_Clone, wxPanGestureEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxPanGestureEventExtCreateRefDataFunc a_CreateRefData, wxPanGestureEventExtGetClassInfoFunc a_GetClassInfo, wxPanGestureEventExtGetEventCategoryFunc a_GetEventCategory): wxPanGestureEvent() {
    m_wxPanGestureEventExtClone = a_Clone;
    m_wxPanGestureEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxPanGestureEventExtCreateRefData = a_CreateRefData;
    m_wxPanGestureEventExtGetClassInfo = a_GetClassInfo;
    m_wxPanGestureEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxZoomGestureEventExt: public wxZoomGestureEvent
{
public:
  wxZoomGestureEventExt(wxWindowID winid = 0): wxZoomGestureEvent(winid)  {  }
  wxZoomGestureEventExt(wxZoomGestureEvent const& event): wxZoomGestureEvent(event)  {  }
  wxZoomGestureEventExtCloneFunc m_wxZoomGestureEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxZoomGestureEvent::Clone();
    if (*m_wxZoomGestureEventExtClone != NULL){
      return m_wxZoomGestureEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxZoomGestureEventExtCloneRefDatawxObjectRefDataCPFunc m_wxZoomGestureEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxZoomGestureEvent::CloneRefData(data);
    if (*m_wxZoomGestureEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxZoomGestureEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxZoomGestureEventExtCreateRefDataFunc m_wxZoomGestureEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxZoomGestureEvent::CreateRefData();
    if (*m_wxZoomGestureEventExtCreateRefData != NULL){
      return m_wxZoomGestureEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxZoomGestureEventExtGetClassInfoFunc m_wxZoomGestureEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxZoomGestureEvent::GetClassInfo();
    if (*m_wxZoomGestureEventExtGetClassInfo != NULL){
      return m_wxZoomGestureEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxZoomGestureEventExtGetEventCategoryFunc m_wxZoomGestureEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxZoomGestureEvent::GetEventCategory();
    if (*m_wxZoomGestureEventExtGetEventCategory != NULL){
      return m_wxZoomGestureEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxZoomGestureEventExt(wxZoomGestureEventExtCloneFunc a_Clone, wxZoomGestureEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxZoomGestureEventExtCreateRefDataFunc a_CreateRefData, wxZoomGestureEventExtGetClassInfoFunc a_GetClassInfo, wxZoomGestureEventExtGetEventCategoryFunc a_GetEventCategory): wxZoomGestureEvent() {
    m_wxZoomGestureEventExtClone = a_Clone;
    m_wxZoomGestureEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxZoomGestureEventExtCreateRefData = a_CreateRefData;
    m_wxZoomGestureEventExtGetClassInfo = a_GetClassInfo;
    m_wxZoomGestureEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxRotateGestureEventExt: public wxRotateGestureEvent
{
public:
  wxRotateGestureEventExt(wxWindowID winid = 0): wxRotateGestureEvent(winid)  {  }
  wxRotateGestureEventExt(wxRotateGestureEvent const& event): wxRotateGestureEvent(event)  {  }
  wxRotateGestureEventExtCloneFunc m_wxRotateGestureEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxRotateGestureEvent::Clone();
    if (*m_wxRotateGestureEventExtClone != NULL){
      return m_wxRotateGestureEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxRotateGestureEventExtCloneRefDatawxObjectRefDataCPFunc m_wxRotateGestureEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxRotateGestureEvent::CloneRefData(data);
    if (*m_wxRotateGestureEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxRotateGestureEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxRotateGestureEventExtCreateRefDataFunc m_wxRotateGestureEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxRotateGestureEvent::CreateRefData();
    if (*m_wxRotateGestureEventExtCreateRefData != NULL){
      return m_wxRotateGestureEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxRotateGestureEventExtGetClassInfoFunc m_wxRotateGestureEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxRotateGestureEvent::GetClassInfo();
    if (*m_wxRotateGestureEventExtGetClassInfo != NULL){
      return m_wxRotateGestureEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxRotateGestureEventExtGetEventCategoryFunc m_wxRotateGestureEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxRotateGestureEvent::GetEventCategory();
    if (*m_wxRotateGestureEventExtGetEventCategory != NULL){
      return m_wxRotateGestureEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxRotateGestureEventExt(wxRotateGestureEventExtCloneFunc a_Clone, wxRotateGestureEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxRotateGestureEventExtCreateRefDataFunc a_CreateRefData, wxRotateGestureEventExtGetClassInfoFunc a_GetClassInfo, wxRotateGestureEventExtGetEventCategoryFunc a_GetEventCategory): wxRotateGestureEvent() {
    m_wxRotateGestureEventExtClone = a_Clone;
    m_wxRotateGestureEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxRotateGestureEventExtCreateRefData = a_CreateRefData;
    m_wxRotateGestureEventExtGetClassInfo = a_GetClassInfo;
    m_wxRotateGestureEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxTwoFingerTapEventExt: public wxTwoFingerTapEvent
{
public:
  wxTwoFingerTapEventExt(wxWindowID winid = 0): wxTwoFingerTapEvent(winid)  {  }
  wxTwoFingerTapEventExt(wxTwoFingerTapEvent const& event): wxTwoFingerTapEvent(event)  {  }
  wxTwoFingerTapEventExtCloneFunc m_wxTwoFingerTapEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxTwoFingerTapEvent::Clone();
    if (*m_wxTwoFingerTapEventExtClone != NULL){
      return m_wxTwoFingerTapEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxTwoFingerTapEventExtCloneRefDatawxObjectRefDataCPFunc m_wxTwoFingerTapEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxTwoFingerTapEvent::CloneRefData(data);
    if (*m_wxTwoFingerTapEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxTwoFingerTapEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxTwoFingerTapEventExtCreateRefDataFunc m_wxTwoFingerTapEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxTwoFingerTapEvent::CreateRefData();
    if (*m_wxTwoFingerTapEventExtCreateRefData != NULL){
      return m_wxTwoFingerTapEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxTwoFingerTapEventExtGetClassInfoFunc m_wxTwoFingerTapEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxTwoFingerTapEvent::GetClassInfo();
    if (*m_wxTwoFingerTapEventExtGetClassInfo != NULL){
      return m_wxTwoFingerTapEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxTwoFingerTapEventExtGetEventCategoryFunc m_wxTwoFingerTapEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxTwoFingerTapEvent::GetEventCategory();
    if (*m_wxTwoFingerTapEventExtGetEventCategory != NULL){
      return m_wxTwoFingerTapEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxTwoFingerTapEventExt(wxTwoFingerTapEventExtCloneFunc a_Clone, wxTwoFingerTapEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxTwoFingerTapEventExtCreateRefDataFunc a_CreateRefData, wxTwoFingerTapEventExtGetClassInfoFunc a_GetClassInfo, wxTwoFingerTapEventExtGetEventCategoryFunc a_GetEventCategory): wxTwoFingerTapEvent() {
    m_wxTwoFingerTapEventExtClone = a_Clone;
    m_wxTwoFingerTapEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxTwoFingerTapEventExtCreateRefData = a_CreateRefData;
    m_wxTwoFingerTapEventExtGetClassInfo = a_GetClassInfo;
    m_wxTwoFingerTapEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxLongPressEventExt: public wxLongPressEvent
{
public:
  wxLongPressEventExt(wxWindowID winid = 0): wxLongPressEvent(winid)  {  }
  wxLongPressEventExt(wxLongPressEvent const& event): wxLongPressEvent(event)  {  }
  wxLongPressEventExtCloneFunc m_wxLongPressEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxLongPressEvent::Clone();
    if (*m_wxLongPressEventExtClone != NULL){
      return m_wxLongPressEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxLongPressEventExtCloneRefDatawxObjectRefDataCPFunc m_wxLongPressEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxLongPressEvent::CloneRefData(data);
    if (*m_wxLongPressEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxLongPressEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxLongPressEventExtCreateRefDataFunc m_wxLongPressEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxLongPressEvent::CreateRefData();
    if (*m_wxLongPressEventExtCreateRefData != NULL){
      return m_wxLongPressEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxLongPressEventExtGetClassInfoFunc m_wxLongPressEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxLongPressEvent::GetClassInfo();
    if (*m_wxLongPressEventExtGetClassInfo != NULL){
      return m_wxLongPressEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxLongPressEventExtGetEventCategoryFunc m_wxLongPressEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxLongPressEvent::GetEventCategory();
    if (*m_wxLongPressEventExtGetEventCategory != NULL){
      return m_wxLongPressEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxLongPressEventExt(wxLongPressEventExtCloneFunc a_Clone, wxLongPressEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxLongPressEventExtCreateRefDataFunc a_CreateRefData, wxLongPressEventExtGetClassInfoFunc a_GetClassInfo, wxLongPressEventExtGetEventCategoryFunc a_GetEventCategory): wxLongPressEvent() {
    m_wxLongPressEventExtClone = a_Clone;
    m_wxLongPressEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxLongPressEventExtCreateRefData = a_CreateRefData;
    m_wxLongPressEventExtGetClassInfo = a_GetClassInfo;
    m_wxLongPressEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxPressAndTapEventExt: public wxPressAndTapEvent
{
public:
  wxPressAndTapEventExt(wxWindowID winid = 0): wxPressAndTapEvent(winid)  {  }
  wxPressAndTapEventExt(wxPressAndTapEvent const& event): wxPressAndTapEvent(event)  {  }
  wxPressAndTapEventExtCloneFunc m_wxPressAndTapEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxPressAndTapEvent::Clone();
    if (*m_wxPressAndTapEventExtClone != NULL){
      return m_wxPressAndTapEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxPressAndTapEventExtCloneRefDatawxObjectRefDataCPFunc m_wxPressAndTapEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxPressAndTapEvent::CloneRefData(data);
    if (*m_wxPressAndTapEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxPressAndTapEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxPressAndTapEventExtCreateRefDataFunc m_wxPressAndTapEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxPressAndTapEvent::CreateRefData();
    if (*m_wxPressAndTapEventExtCreateRefData != NULL){
      return m_wxPressAndTapEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxPressAndTapEventExtGetClassInfoFunc m_wxPressAndTapEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxPressAndTapEvent::GetClassInfo();
    if (*m_wxPressAndTapEventExtGetClassInfo != NULL){
      return m_wxPressAndTapEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxPressAndTapEventExtGetEventCategoryFunc m_wxPressAndTapEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxPressAndTapEvent::GetEventCategory();
    if (*m_wxPressAndTapEventExtGetEventCategory != NULL){
      return m_wxPressAndTapEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxPressAndTapEventExt(wxPressAndTapEventExtCloneFunc a_Clone, wxPressAndTapEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxPressAndTapEventExtCreateRefDataFunc a_CreateRefData, wxPressAndTapEventExtGetClassInfoFunc a_GetClassInfo, wxPressAndTapEventExtGetEventCategoryFunc a_GetEventCategory): wxPressAndTapEvent() {
    m_wxPressAndTapEventExtClone = a_Clone;
    m_wxPressAndTapEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxPressAndTapEventExtCreateRefData = a_CreateRefData;
    m_wxPressAndTapEventExtGetClassInfo = a_GetClassInfo;
    m_wxPressAndTapEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxKeyEventExt: public wxKeyEvent
{
public:
  wxKeyEventExt(wxEventType keyType = wxEVT_NULL): wxKeyEvent(keyType)  {  }
  wxKeyEventExt(wxKeyEvent const& evt): wxKeyEvent(evt)  {  }
  wxKeyEventExt(wxEventType eventType, wxKeyEvent const& evt): wxKeyEvent(eventType, evt)  {  }
  wxKeyEventExtCloneFunc m_wxKeyEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxKeyEvent::Clone();
    if (*m_wxKeyEventExtClone != NULL){
      return m_wxKeyEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxKeyEventExtCloneRefDatawxObjectRefDataCPFunc m_wxKeyEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxKeyEvent::CloneRefData(data);
    if (*m_wxKeyEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxKeyEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxKeyEventExtCreateRefDataFunc m_wxKeyEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxKeyEvent::CreateRefData();
    if (*m_wxKeyEventExtCreateRefData != NULL){
      return m_wxKeyEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxKeyEventExtGetClassInfoFunc m_wxKeyEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxKeyEvent::GetClassInfo();
    if (*m_wxKeyEventExtGetClassInfo != NULL){
      return m_wxKeyEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxKeyEventExtGetEventCategoryFunc m_wxKeyEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxKeyEvent::GetEventCategory();
    if (*m_wxKeyEventExtGetEventCategory != NULL){
      return m_wxKeyEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxKeyEventExt(wxKeyEventExtCloneFunc a_Clone, wxKeyEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxKeyEventExtCreateRefDataFunc a_CreateRefData, wxKeyEventExtGetClassInfoFunc a_GetClassInfo, wxKeyEventExtGetEventCategoryFunc a_GetEventCategory): wxKeyEvent() {
    m_wxKeyEventExtClone = a_Clone;
    m_wxKeyEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxKeyEventExtCreateRefData = a_CreateRefData;
    m_wxKeyEventExtGetClassInfo = a_GetClassInfo;
    m_wxKeyEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxSizeEventExt: public wxSizeEvent
{
public:
  wxSizeEventExt(): wxSizeEvent()  {  }
  wxSizeEventExt(wxSize const& sz, int winid = 0): wxSizeEvent(sz, winid)  {  }
  wxSizeEventExt(wxSizeEvent const& event): wxSizeEvent(event)  {  }
  wxSizeEventExt(wxRect const& rect, int id = 0): wxSizeEvent(rect, id)  {  }
  wxSizeEventExtCloneFunc m_wxSizeEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxSizeEvent::Clone();
    if (*m_wxSizeEventExtClone != NULL){
      return m_wxSizeEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxSizeEventExtCloneRefDatawxObjectRefDataCPFunc m_wxSizeEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxSizeEvent::CloneRefData(data);
    if (*m_wxSizeEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxSizeEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxSizeEventExtCreateRefDataFunc m_wxSizeEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxSizeEvent::CreateRefData();
    if (*m_wxSizeEventExtCreateRefData != NULL){
      return m_wxSizeEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxSizeEventExtGetClassInfoFunc m_wxSizeEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxSizeEvent::GetClassInfo();
    if (*m_wxSizeEventExtGetClassInfo != NULL){
      return m_wxSizeEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxSizeEventExtGetEventCategoryFunc m_wxSizeEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxSizeEvent::GetEventCategory();
    if (*m_wxSizeEventExtGetEventCategory != NULL){
      return m_wxSizeEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxSizeEventExt(wxSizeEventExtCloneFunc a_Clone, wxSizeEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxSizeEventExtCreateRefDataFunc a_CreateRefData, wxSizeEventExtGetClassInfoFunc a_GetClassInfo, wxSizeEventExtGetEventCategoryFunc a_GetEventCategory): wxSizeEvent() {
    m_wxSizeEventExtClone = a_Clone;
    m_wxSizeEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxSizeEventExtCreateRefData = a_CreateRefData;
    m_wxSizeEventExtGetClassInfo = a_GetClassInfo;
    m_wxSizeEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxMoveEventExt: public wxMoveEvent
{
public:
  wxMoveEventExt(): wxMoveEvent()  {  }
  wxMoveEventExt(wxPoint const& pos, int winid = 0): wxMoveEvent(pos, winid)  {  }
  wxMoveEventExt(wxMoveEvent const& event): wxMoveEvent(event)  {  }
  wxMoveEventExt(wxRect const& rect, int id = 0): wxMoveEvent(rect, id)  {  }
  wxMoveEventExtCloneFunc m_wxMoveEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxMoveEvent::Clone();
    if (*m_wxMoveEventExtClone != NULL){
      return m_wxMoveEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxMoveEventExtCloneRefDatawxObjectRefDataCPFunc m_wxMoveEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxMoveEvent::CloneRefData(data);
    if (*m_wxMoveEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxMoveEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxMoveEventExtCreateRefDataFunc m_wxMoveEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxMoveEvent::CreateRefData();
    if (*m_wxMoveEventExtCreateRefData != NULL){
      return m_wxMoveEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxMoveEventExtGetClassInfoFunc m_wxMoveEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxMoveEvent::GetClassInfo();
    if (*m_wxMoveEventExtGetClassInfo != NULL){
      return m_wxMoveEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxMoveEventExtGetEventCategoryFunc m_wxMoveEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxMoveEvent::GetEventCategory();
    if (*m_wxMoveEventExtGetEventCategory != NULL){
      return m_wxMoveEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxMoveEventExt(wxMoveEventExtCloneFunc a_Clone, wxMoveEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxMoveEventExtCreateRefDataFunc a_CreateRefData, wxMoveEventExtGetClassInfoFunc a_GetClassInfo, wxMoveEventExtGetEventCategoryFunc a_GetEventCategory): wxMoveEvent() {
    m_wxMoveEventExtClone = a_Clone;
    m_wxMoveEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxMoveEventExtCreateRefData = a_CreateRefData;
    m_wxMoveEventExtGetClassInfo = a_GetClassInfo;
    m_wxMoveEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxPaintEventExt: public wxPaintEvent
{
public:
  wxPaintEventExt(wxPaintEvent const& param0): wxPaintEvent(param0)  {  }
  wxPaintEventExtCloneFunc m_wxPaintEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxPaintEvent::Clone();
    if (*m_wxPaintEventExtClone != NULL){
      return m_wxPaintEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxPaintEventExtCloneRefDatawxObjectRefDataCPFunc m_wxPaintEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxPaintEvent::CloneRefData(data);
    if (*m_wxPaintEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxPaintEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxPaintEventExtCreateRefDataFunc m_wxPaintEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxPaintEvent::CreateRefData();
    if (*m_wxPaintEventExtCreateRefData != NULL){
      return m_wxPaintEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxPaintEventExtGetClassInfoFunc m_wxPaintEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxPaintEvent::GetClassInfo();
    if (*m_wxPaintEventExtGetClassInfo != NULL){
      return m_wxPaintEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxPaintEventExtGetEventCategoryFunc m_wxPaintEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxPaintEvent::GetEventCategory();
    if (*m_wxPaintEventExtGetEventCategory != NULL){
      return m_wxPaintEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxPaintEventExt(wxPaintEvent const& param0, wxPaintEventExtCloneFunc a_Clone, wxPaintEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxPaintEventExtCreateRefDataFunc a_CreateRefData, wxPaintEventExtGetClassInfoFunc a_GetClassInfo, wxPaintEventExtGetEventCategoryFunc a_GetEventCategory): wxPaintEvent(param0) {
    m_wxPaintEventExtClone = a_Clone;
    m_wxPaintEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxPaintEventExtCreateRefData = a_CreateRefData;
    m_wxPaintEventExtGetClassInfo = a_GetClassInfo;
    m_wxPaintEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxNcPaintEventExt: public wxNcPaintEvent
{
public:
  wxNcPaintEventExt(wxNcPaintEvent const& param0): wxNcPaintEvent(param0)  {  }
  wxNcPaintEventExtCloneFunc m_wxNcPaintEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxNcPaintEvent::Clone();
    if (*m_wxNcPaintEventExtClone != NULL){
      return m_wxNcPaintEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxNcPaintEventExtCloneRefDatawxObjectRefDataCPFunc m_wxNcPaintEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxNcPaintEvent::CloneRefData(data);
    if (*m_wxNcPaintEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxNcPaintEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxNcPaintEventExtCreateRefDataFunc m_wxNcPaintEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxNcPaintEvent::CreateRefData();
    if (*m_wxNcPaintEventExtCreateRefData != NULL){
      return m_wxNcPaintEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxNcPaintEventExtGetClassInfoFunc m_wxNcPaintEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxNcPaintEvent::GetClassInfo();
    if (*m_wxNcPaintEventExtGetClassInfo != NULL){
      return m_wxNcPaintEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxNcPaintEventExtGetEventCategoryFunc m_wxNcPaintEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxNcPaintEvent::GetEventCategory();
    if (*m_wxNcPaintEventExtGetEventCategory != NULL){
      return m_wxNcPaintEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxNcPaintEventExt(wxNcPaintEvent const& param0, wxNcPaintEventExtCloneFunc a_Clone, wxNcPaintEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxNcPaintEventExtCreateRefDataFunc a_CreateRefData, wxNcPaintEventExtGetClassInfoFunc a_GetClassInfo, wxNcPaintEventExtGetEventCategoryFunc a_GetEventCategory): wxNcPaintEvent(param0) {
    m_wxNcPaintEventExtClone = a_Clone;
    m_wxNcPaintEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxNcPaintEventExtCreateRefData = a_CreateRefData;
    m_wxNcPaintEventExtGetClassInfo = a_GetClassInfo;
    m_wxNcPaintEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxEraseEventExt: public wxEraseEvent
{
public:
  wxEraseEventExt(int Id = 0, wxDC* dc = __null): wxEraseEvent(Id, dc)  {  }
  wxEraseEventExt(wxEraseEvent const& event): wxEraseEvent(event)  {  }
  wxEraseEventExtCloneFunc m_wxEraseEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxEraseEvent::Clone();
    if (*m_wxEraseEventExtClone != NULL){
      return m_wxEraseEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxEraseEventExtCloneRefDatawxObjectRefDataCPFunc m_wxEraseEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxEraseEvent::CloneRefData(data);
    if (*m_wxEraseEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxEraseEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxEraseEventExtCreateRefDataFunc m_wxEraseEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxEraseEvent::CreateRefData();
    if (*m_wxEraseEventExtCreateRefData != NULL){
      return m_wxEraseEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxEraseEventExtGetClassInfoFunc m_wxEraseEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxEraseEvent::GetClassInfo();
    if (*m_wxEraseEventExtGetClassInfo != NULL){
      return m_wxEraseEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxEraseEventExtGetEventCategoryFunc m_wxEraseEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxEraseEvent::GetEventCategory();
    if (*m_wxEraseEventExtGetEventCategory != NULL){
      return m_wxEraseEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxEraseEventExt(wxEraseEventExtCloneFunc a_Clone, wxEraseEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxEraseEventExtCreateRefDataFunc a_CreateRefData, wxEraseEventExtGetClassInfoFunc a_GetClassInfo, wxEraseEventExtGetEventCategoryFunc a_GetEventCategory): wxEraseEvent() {
    m_wxEraseEventExtClone = a_Clone;
    m_wxEraseEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxEraseEventExtCreateRefData = a_CreateRefData;
    m_wxEraseEventExtGetClassInfo = a_GetClassInfo;
    m_wxEraseEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxFocusEventExt: public wxFocusEvent
{
public:
  wxFocusEventExt(wxEventType type = wxEVT_NULL, int winid = 0): wxFocusEvent(type, winid)  {  }
  wxFocusEventExt(wxFocusEvent const& event): wxFocusEvent(event)  {  }
  wxFocusEventExtCloneFunc m_wxFocusEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxFocusEvent::Clone();
    if (*m_wxFocusEventExtClone != NULL){
      return m_wxFocusEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxFocusEventExtCloneRefDatawxObjectRefDataCPFunc m_wxFocusEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxFocusEvent::CloneRefData(data);
    if (*m_wxFocusEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxFocusEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxFocusEventExtCreateRefDataFunc m_wxFocusEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxFocusEvent::CreateRefData();
    if (*m_wxFocusEventExtCreateRefData != NULL){
      return m_wxFocusEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxFocusEventExtGetClassInfoFunc m_wxFocusEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxFocusEvent::GetClassInfo();
    if (*m_wxFocusEventExtGetClassInfo != NULL){
      return m_wxFocusEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxFocusEventExtGetEventCategoryFunc m_wxFocusEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxFocusEvent::GetEventCategory();
    if (*m_wxFocusEventExtGetEventCategory != NULL){
      return m_wxFocusEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxFocusEventExt(wxFocusEventExtCloneFunc a_Clone, wxFocusEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxFocusEventExtCreateRefDataFunc a_CreateRefData, wxFocusEventExtGetClassInfoFunc a_GetClassInfo, wxFocusEventExtGetEventCategoryFunc a_GetEventCategory): wxFocusEvent() {
    m_wxFocusEventExtClone = a_Clone;
    m_wxFocusEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxFocusEventExtCreateRefData = a_CreateRefData;
    m_wxFocusEventExtGetClassInfo = a_GetClassInfo;
    m_wxFocusEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxChildFocusEventExt: public wxChildFocusEvent
{
public:
  wxChildFocusEventExt(wxWindow* win = __null): wxChildFocusEvent(win)  {  }
  wxChildFocusEventExt(wxChildFocusEvent const& param0): wxChildFocusEvent(param0)  {  }
  wxChildFocusEventExtCloneFunc m_wxChildFocusEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxChildFocusEvent::Clone();
    if (*m_wxChildFocusEventExtClone != NULL){
      return m_wxChildFocusEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxChildFocusEventExtCloneRefDatawxObjectRefDataCPFunc m_wxChildFocusEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxChildFocusEvent::CloneRefData(data);
    if (*m_wxChildFocusEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxChildFocusEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxChildFocusEventExtCreateRefDataFunc m_wxChildFocusEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxChildFocusEvent::CreateRefData();
    if (*m_wxChildFocusEventExtCreateRefData != NULL){
      return m_wxChildFocusEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxChildFocusEventExtGetClassInfoFunc m_wxChildFocusEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxChildFocusEvent::GetClassInfo();
    if (*m_wxChildFocusEventExtGetClassInfo != NULL){
      return m_wxChildFocusEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxChildFocusEventExtGetEventCategoryFunc m_wxChildFocusEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxChildFocusEvent::GetEventCategory();
    if (*m_wxChildFocusEventExtGetEventCategory != NULL){
      return m_wxChildFocusEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxChildFocusEventExt(wxChildFocusEventExtCloneFunc a_Clone, wxChildFocusEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxChildFocusEventExtCreateRefDataFunc a_CreateRefData, wxChildFocusEventExtGetClassInfoFunc a_GetClassInfo, wxChildFocusEventExtGetEventCategoryFunc a_GetEventCategory): wxChildFocusEvent() {
    m_wxChildFocusEventExtClone = a_Clone;
    m_wxChildFocusEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxChildFocusEventExtCreateRefData = a_CreateRefData;
    m_wxChildFocusEventExtGetClassInfo = a_GetClassInfo;
    m_wxChildFocusEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxActivateEventExt: public wxActivateEvent
{
public:
  wxActivateEventExt(wxEventType type = wxEVT_NULL, bool active = true, int Id = 0, wxActivateEvent::Reason activationReason = Reason_Unknown): wxActivateEvent(type, active, Id, activationReason)  {  }
  wxActivateEventExt(wxActivateEvent const& event): wxActivateEvent(event)  {  }
  wxActivateEventExtCloneFunc m_wxActivateEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxActivateEvent::Clone();
    if (*m_wxActivateEventExtClone != NULL){
      return m_wxActivateEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxActivateEventExtCloneRefDatawxObjectRefDataCPFunc m_wxActivateEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxActivateEvent::CloneRefData(data);
    if (*m_wxActivateEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxActivateEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxActivateEventExtCreateRefDataFunc m_wxActivateEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxActivateEvent::CreateRefData();
    if (*m_wxActivateEventExtCreateRefData != NULL){
      return m_wxActivateEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxActivateEventExtGetClassInfoFunc m_wxActivateEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxActivateEvent::GetClassInfo();
    if (*m_wxActivateEventExtGetClassInfo != NULL){
      return m_wxActivateEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxActivateEventExtGetEventCategoryFunc m_wxActivateEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxActivateEvent::GetEventCategory();
    if (*m_wxActivateEventExtGetEventCategory != NULL){
      return m_wxActivateEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxActivateEventExt(wxActivateEventExtCloneFunc a_Clone, wxActivateEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxActivateEventExtCreateRefDataFunc a_CreateRefData, wxActivateEventExtGetClassInfoFunc a_GetClassInfo, wxActivateEventExtGetEventCategoryFunc a_GetEventCategory): wxActivateEvent() {
    m_wxActivateEventExtClone = a_Clone;
    m_wxActivateEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxActivateEventExtCreateRefData = a_CreateRefData;
    m_wxActivateEventExtGetClassInfo = a_GetClassInfo;
    m_wxActivateEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxInitDialogEventExt: public wxInitDialogEvent
{
public:
  wxInitDialogEventExt(int Id = 0): wxInitDialogEvent(Id)  {  }
  wxInitDialogEventExt(wxInitDialogEvent const& param0): wxInitDialogEvent(param0)  {  }
  wxInitDialogEventExtCloneFunc m_wxInitDialogEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxInitDialogEvent::Clone();
    if (*m_wxInitDialogEventExtClone != NULL){
      return m_wxInitDialogEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxInitDialogEventExtCloneRefDatawxObjectRefDataCPFunc m_wxInitDialogEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxInitDialogEvent::CloneRefData(data);
    if (*m_wxInitDialogEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxInitDialogEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxInitDialogEventExtCreateRefDataFunc m_wxInitDialogEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxInitDialogEvent::CreateRefData();
    if (*m_wxInitDialogEventExtCreateRefData != NULL){
      return m_wxInitDialogEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxInitDialogEventExtGetClassInfoFunc m_wxInitDialogEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxInitDialogEvent::GetClassInfo();
    if (*m_wxInitDialogEventExtGetClassInfo != NULL){
      return m_wxInitDialogEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxInitDialogEventExtGetEventCategoryFunc m_wxInitDialogEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxInitDialogEvent::GetEventCategory();
    if (*m_wxInitDialogEventExtGetEventCategory != NULL){
      return m_wxInitDialogEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxInitDialogEventExt(wxInitDialogEventExtCloneFunc a_Clone, wxInitDialogEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxInitDialogEventExtCreateRefDataFunc a_CreateRefData, wxInitDialogEventExtGetClassInfoFunc a_GetClassInfo, wxInitDialogEventExtGetEventCategoryFunc a_GetEventCategory): wxInitDialogEvent() {
    m_wxInitDialogEventExtClone = a_Clone;
    m_wxInitDialogEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxInitDialogEventExtCreateRefData = a_CreateRefData;
    m_wxInitDialogEventExtGetClassInfo = a_GetClassInfo;
    m_wxInitDialogEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxMenuEventExt: public wxMenuEvent
{
public:
  wxMenuEventExt(wxEventType type = wxEVT_NULL, int winid = 0, wxMenu* menu = __null): wxMenuEvent(type, winid, menu)  {  }
  wxMenuEventExt(wxMenuEvent const& event): wxMenuEvent(event)  {  }
  wxMenuEventExtCloneFunc m_wxMenuEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxMenuEvent::Clone();
    if (*m_wxMenuEventExtClone != NULL){
      return m_wxMenuEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxMenuEventExtCloneRefDatawxObjectRefDataCPFunc m_wxMenuEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxMenuEvent::CloneRefData(data);
    if (*m_wxMenuEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxMenuEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxMenuEventExtCreateRefDataFunc m_wxMenuEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxMenuEvent::CreateRefData();
    if (*m_wxMenuEventExtCreateRefData != NULL){
      return m_wxMenuEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxMenuEventExtGetClassInfoFunc m_wxMenuEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxMenuEvent::GetClassInfo();
    if (*m_wxMenuEventExtGetClassInfo != NULL){
      return m_wxMenuEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxMenuEventExtGetEventCategoryFunc m_wxMenuEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxMenuEvent::GetEventCategory();
    if (*m_wxMenuEventExtGetEventCategory != NULL){
      return m_wxMenuEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxMenuEventExt(wxMenuEventExtCloneFunc a_Clone, wxMenuEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxMenuEventExtCreateRefDataFunc a_CreateRefData, wxMenuEventExtGetClassInfoFunc a_GetClassInfo, wxMenuEventExtGetEventCategoryFunc a_GetEventCategory): wxMenuEvent() {
    m_wxMenuEventExtClone = a_Clone;
    m_wxMenuEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxMenuEventExtCreateRefData = a_CreateRefData;
    m_wxMenuEventExtGetClassInfo = a_GetClassInfo;
    m_wxMenuEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxCloseEventExt: public wxCloseEvent
{
public:
  wxCloseEventExt(wxEventType type = wxEVT_NULL, int winid = 0): wxCloseEvent(type, winid)  {  }
  wxCloseEventExt(wxCloseEvent const& event): wxCloseEvent(event)  {  }
  wxCloseEventExtCloneFunc m_wxCloseEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxCloseEvent::Clone();
    if (*m_wxCloseEventExtClone != NULL){
      return m_wxCloseEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxCloseEventExtCloneRefDatawxObjectRefDataCPFunc m_wxCloseEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxCloseEvent::CloneRefData(data);
    if (*m_wxCloseEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxCloseEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxCloseEventExtCreateRefDataFunc m_wxCloseEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxCloseEvent::CreateRefData();
    if (*m_wxCloseEventExtCreateRefData != NULL){
      return m_wxCloseEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxCloseEventExtGetClassInfoFunc m_wxCloseEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxCloseEvent::GetClassInfo();
    if (*m_wxCloseEventExtGetClassInfo != NULL){
      return m_wxCloseEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxCloseEventExtGetEventCategoryFunc m_wxCloseEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxCloseEvent::GetEventCategory();
    if (*m_wxCloseEventExtGetEventCategory != NULL){
      return m_wxCloseEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxCloseEventExt(wxCloseEventExtCloneFunc a_Clone, wxCloseEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxCloseEventExtCreateRefDataFunc a_CreateRefData, wxCloseEventExtGetClassInfoFunc a_GetClassInfo, wxCloseEventExtGetEventCategoryFunc a_GetEventCategory): wxCloseEvent() {
    m_wxCloseEventExtClone = a_Clone;
    m_wxCloseEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxCloseEventExtCreateRefData = a_CreateRefData;
    m_wxCloseEventExtGetClassInfo = a_GetClassInfo;
    m_wxCloseEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxShowEventExt: public wxShowEvent
{
public:
  wxShowEventExt(int winid = 0, bool show = false): wxShowEvent(winid, show)  {  }
  wxShowEventExt(wxShowEvent const& event): wxShowEvent(event)  {  }
  wxShowEventExtCloneFunc m_wxShowEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxShowEvent::Clone();
    if (*m_wxShowEventExtClone != NULL){
      return m_wxShowEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxShowEventExtCloneRefDatawxObjectRefDataCPFunc m_wxShowEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxShowEvent::CloneRefData(data);
    if (*m_wxShowEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxShowEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxShowEventExtCreateRefDataFunc m_wxShowEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxShowEvent::CreateRefData();
    if (*m_wxShowEventExtCreateRefData != NULL){
      return m_wxShowEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxShowEventExtGetClassInfoFunc m_wxShowEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxShowEvent::GetClassInfo();
    if (*m_wxShowEventExtGetClassInfo != NULL){
      return m_wxShowEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxShowEventExtGetEventCategoryFunc m_wxShowEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxShowEvent::GetEventCategory();
    if (*m_wxShowEventExtGetEventCategory != NULL){
      return m_wxShowEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxShowEventExt(wxShowEventExtCloneFunc a_Clone, wxShowEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxShowEventExtCreateRefDataFunc a_CreateRefData, wxShowEventExtGetClassInfoFunc a_GetClassInfo, wxShowEventExtGetEventCategoryFunc a_GetEventCategory): wxShowEvent() {
    m_wxShowEventExtClone = a_Clone;
    m_wxShowEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxShowEventExtCreateRefData = a_CreateRefData;
    m_wxShowEventExtGetClassInfo = a_GetClassInfo;
    m_wxShowEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxIconizeEventExt: public wxIconizeEvent
{
public:
  wxIconizeEventExt(int winid = 0, bool iconized = true): wxIconizeEvent(winid, iconized)  {  }
  wxIconizeEventExt(wxIconizeEvent const& event): wxIconizeEvent(event)  {  }
  wxIconizeEventExtCloneFunc m_wxIconizeEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxIconizeEvent::Clone();
    if (*m_wxIconizeEventExtClone != NULL){
      return m_wxIconizeEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxIconizeEventExtCloneRefDatawxObjectRefDataCPFunc m_wxIconizeEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxIconizeEvent::CloneRefData(data);
    if (*m_wxIconizeEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxIconizeEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxIconizeEventExtCreateRefDataFunc m_wxIconizeEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxIconizeEvent::CreateRefData();
    if (*m_wxIconizeEventExtCreateRefData != NULL){
      return m_wxIconizeEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxIconizeEventExtGetClassInfoFunc m_wxIconizeEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxIconizeEvent::GetClassInfo();
    if (*m_wxIconizeEventExtGetClassInfo != NULL){
      return m_wxIconizeEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxIconizeEventExtGetEventCategoryFunc m_wxIconizeEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxIconizeEvent::GetEventCategory();
    if (*m_wxIconizeEventExtGetEventCategory != NULL){
      return m_wxIconizeEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxIconizeEventExt(wxIconizeEventExtCloneFunc a_Clone, wxIconizeEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxIconizeEventExtCreateRefDataFunc a_CreateRefData, wxIconizeEventExtGetClassInfoFunc a_GetClassInfo, wxIconizeEventExtGetEventCategoryFunc a_GetEventCategory): wxIconizeEvent() {
    m_wxIconizeEventExtClone = a_Clone;
    m_wxIconizeEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxIconizeEventExtCreateRefData = a_CreateRefData;
    m_wxIconizeEventExtGetClassInfo = a_GetClassInfo;
    m_wxIconizeEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxMaximizeEventExt: public wxMaximizeEvent
{
public:
  wxMaximizeEventExt(int winid = 0): wxMaximizeEvent(winid)  {  }
  wxMaximizeEventExt(wxMaximizeEvent const& param0): wxMaximizeEvent(param0)  {  }
  wxMaximizeEventExtCloneFunc m_wxMaximizeEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxMaximizeEvent::Clone();
    if (*m_wxMaximizeEventExtClone != NULL){
      return m_wxMaximizeEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxMaximizeEventExtCloneRefDatawxObjectRefDataCPFunc m_wxMaximizeEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxMaximizeEvent::CloneRefData(data);
    if (*m_wxMaximizeEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxMaximizeEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxMaximizeEventExtCreateRefDataFunc m_wxMaximizeEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxMaximizeEvent::CreateRefData();
    if (*m_wxMaximizeEventExtCreateRefData != NULL){
      return m_wxMaximizeEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxMaximizeEventExtGetClassInfoFunc m_wxMaximizeEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxMaximizeEvent::GetClassInfo();
    if (*m_wxMaximizeEventExtGetClassInfo != NULL){
      return m_wxMaximizeEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxMaximizeEventExtGetEventCategoryFunc m_wxMaximizeEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxMaximizeEvent::GetEventCategory();
    if (*m_wxMaximizeEventExtGetEventCategory != NULL){
      return m_wxMaximizeEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxMaximizeEventExt(wxMaximizeEventExtCloneFunc a_Clone, wxMaximizeEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxMaximizeEventExtCreateRefDataFunc a_CreateRefData, wxMaximizeEventExtGetClassInfoFunc a_GetClassInfo, wxMaximizeEventExtGetEventCategoryFunc a_GetEventCategory): wxMaximizeEvent() {
    m_wxMaximizeEventExtClone = a_Clone;
    m_wxMaximizeEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxMaximizeEventExtCreateRefData = a_CreateRefData;
    m_wxMaximizeEventExtGetClassInfo = a_GetClassInfo;
    m_wxMaximizeEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxFullScreenEventExt: public wxFullScreenEvent
{
public:
  wxFullScreenEventExt(int winid = 0, bool fullscreen = true): wxFullScreenEvent(winid, fullscreen)  {  }
  wxFullScreenEventExt(wxFullScreenEvent const& event): wxFullScreenEvent(event)  {  }
  wxFullScreenEventExtCloneFunc m_wxFullScreenEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxFullScreenEvent::Clone();
    if (*m_wxFullScreenEventExtClone != NULL){
      return m_wxFullScreenEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxFullScreenEventExtCloneRefDatawxObjectRefDataCPFunc m_wxFullScreenEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxFullScreenEvent::CloneRefData(data);
    if (*m_wxFullScreenEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxFullScreenEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxFullScreenEventExtCreateRefDataFunc m_wxFullScreenEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxFullScreenEvent::CreateRefData();
    if (*m_wxFullScreenEventExtCreateRefData != NULL){
      return m_wxFullScreenEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxFullScreenEventExtGetClassInfoFunc m_wxFullScreenEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxFullScreenEvent::GetClassInfo();
    if (*m_wxFullScreenEventExtGetClassInfo != NULL){
      return m_wxFullScreenEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxFullScreenEventExtGetEventCategoryFunc m_wxFullScreenEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxFullScreenEvent::GetEventCategory();
    if (*m_wxFullScreenEventExtGetEventCategory != NULL){
      return m_wxFullScreenEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxFullScreenEventExt(wxFullScreenEventExtCloneFunc a_Clone, wxFullScreenEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxFullScreenEventExtCreateRefDataFunc a_CreateRefData, wxFullScreenEventExtGetClassInfoFunc a_GetClassInfo, wxFullScreenEventExtGetEventCategoryFunc a_GetEventCategory): wxFullScreenEvent() {
    m_wxFullScreenEventExtClone = a_Clone;
    m_wxFullScreenEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxFullScreenEventExtCreateRefData = a_CreateRefData;
    m_wxFullScreenEventExtGetClassInfo = a_GetClassInfo;
    m_wxFullScreenEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxJoystickEventExt: public wxJoystickEvent
{
public:
  wxJoystickEventExt(wxEventType type = wxEVT_NULL, int state = 0, int joystick = wxJOYSTICK1, int change = 0): wxJoystickEvent(type, state, joystick, change)  {  }
  wxJoystickEventExt(wxJoystickEvent const& event): wxJoystickEvent(event)  {  }
  wxJoystickEventExtCloneFunc m_wxJoystickEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxJoystickEvent::Clone();
    if (*m_wxJoystickEventExtClone != NULL){
      return m_wxJoystickEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxJoystickEventExtCloneRefDatawxObjectRefDataCPFunc m_wxJoystickEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxJoystickEvent::CloneRefData(data);
    if (*m_wxJoystickEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxJoystickEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxJoystickEventExtCreateRefDataFunc m_wxJoystickEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxJoystickEvent::CreateRefData();
    if (*m_wxJoystickEventExtCreateRefData != NULL){
      return m_wxJoystickEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxJoystickEventExtGetClassInfoFunc m_wxJoystickEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxJoystickEvent::GetClassInfo();
    if (*m_wxJoystickEventExtGetClassInfo != NULL){
      return m_wxJoystickEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxJoystickEventExtGetEventCategoryFunc m_wxJoystickEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxJoystickEvent::GetEventCategory();
    if (*m_wxJoystickEventExtGetEventCategory != NULL){
      return m_wxJoystickEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxJoystickEventExt(wxJoystickEventExtCloneFunc a_Clone, wxJoystickEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxJoystickEventExtCreateRefDataFunc a_CreateRefData, wxJoystickEventExtGetClassInfoFunc a_GetClassInfo, wxJoystickEventExtGetEventCategoryFunc a_GetEventCategory): wxJoystickEvent() {
    m_wxJoystickEventExtClone = a_Clone;
    m_wxJoystickEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxJoystickEventExtCreateRefData = a_CreateRefData;
    m_wxJoystickEventExtGetClassInfo = a_GetClassInfo;
    m_wxJoystickEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxDropFilesEventExt: public wxDropFilesEvent
{
public:
  wxDropFilesEventExt(wxEventType type = wxEVT_NULL, int noFiles = 0, wxString* files = __null): wxDropFilesEvent(type, noFiles, files)  {  }
  wxDropFilesEventExt(wxDropFilesEvent const& other): wxDropFilesEvent(other)  {  }
  virtual ~wxDropFilesEventExt()  {  }
  wxDropFilesEventExtCloneFunc m_wxDropFilesEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxDropFilesEvent::Clone();
    if (*m_wxDropFilesEventExtClone != NULL){
      return m_wxDropFilesEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxDropFilesEventExtCloneRefDatawxObjectRefDataCPFunc m_wxDropFilesEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxDropFilesEvent::CloneRefData(data);
    if (*m_wxDropFilesEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxDropFilesEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxDropFilesEventExtCreateRefDataFunc m_wxDropFilesEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxDropFilesEvent::CreateRefData();
    if (*m_wxDropFilesEventExtCreateRefData != NULL){
      return m_wxDropFilesEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxDropFilesEventExtGetClassInfoFunc m_wxDropFilesEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxDropFilesEvent::GetClassInfo();
    if (*m_wxDropFilesEventExtGetClassInfo != NULL){
      return m_wxDropFilesEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxDropFilesEventExtGetEventCategoryFunc m_wxDropFilesEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxDropFilesEvent::GetEventCategory();
    if (*m_wxDropFilesEventExtGetEventCategory != NULL){
      return m_wxDropFilesEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxDropFilesEventExt(wxDropFilesEventExtCloneFunc a_Clone, wxDropFilesEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxDropFilesEventExtCreateRefDataFunc a_CreateRefData, wxDropFilesEventExtGetClassInfoFunc a_GetClassInfo, wxDropFilesEventExtGetEventCategoryFunc a_GetEventCategory): wxDropFilesEvent() {
    m_wxDropFilesEventExtClone = a_Clone;
    m_wxDropFilesEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxDropFilesEventExtCreateRefData = a_CreateRefData;
    m_wxDropFilesEventExtGetClassInfo = a_GetClassInfo;
    m_wxDropFilesEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxUpdateUIEventExt: public wxUpdateUIEvent
{
public:
  wxUpdateUIEventExt(wxWindowID commandId = 0): wxUpdateUIEvent(commandId)  {  }
  wxUpdateUIEventExt(wxUpdateUIEvent const& event): wxUpdateUIEvent(event)  {  }
  wxUpdateUIEventExtCloneFunc m_wxUpdateUIEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxUpdateUIEvent::Clone();
    if (*m_wxUpdateUIEventExtClone != NULL){
      return m_wxUpdateUIEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxUpdateUIEventExtCloneRefDatawxObjectRefDataCPFunc m_wxUpdateUIEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxUpdateUIEvent::CloneRefData(data);
    if (*m_wxUpdateUIEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxUpdateUIEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxUpdateUIEventExtCreateRefDataFunc m_wxUpdateUIEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxUpdateUIEvent::CreateRefData();
    if (*m_wxUpdateUIEventExtCreateRefData != NULL){
      return m_wxUpdateUIEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxUpdateUIEventExtGetClassInfoFunc m_wxUpdateUIEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxUpdateUIEvent::GetClassInfo();
    if (*m_wxUpdateUIEventExtGetClassInfo != NULL){
      return m_wxUpdateUIEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxUpdateUIEventExtGetEventCategoryFunc m_wxUpdateUIEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxUpdateUIEvent::GetEventCategory();
    if (*m_wxUpdateUIEventExtGetEventCategory != NULL){
      return m_wxUpdateUIEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxUpdateUIEventExt(wxUpdateUIEventExtCloneFunc a_Clone, wxUpdateUIEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxUpdateUIEventExtCreateRefDataFunc a_CreateRefData, wxUpdateUIEventExtGetClassInfoFunc a_GetClassInfo, wxUpdateUIEventExtGetEventCategoryFunc a_GetEventCategory): wxUpdateUIEvent() {
    m_wxUpdateUIEventExtClone = a_Clone;
    m_wxUpdateUIEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxUpdateUIEventExtCreateRefData = a_CreateRefData;
    m_wxUpdateUIEventExtGetClassInfo = a_GetClassInfo;
    m_wxUpdateUIEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxSysColourChangedEventExt: public wxSysColourChangedEvent
{
public:
  wxSysColourChangedEventExt(): wxSysColourChangedEvent()  {  }
  wxSysColourChangedEventExt(wxSysColourChangedEvent const& param0): wxSysColourChangedEvent(param0)  {  }
  wxSysColourChangedEventExtCloneFunc m_wxSysColourChangedEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxSysColourChangedEvent::Clone();
    if (*m_wxSysColourChangedEventExtClone != NULL){
      return m_wxSysColourChangedEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxSysColourChangedEventExtCloneRefDatawxObjectRefDataCPFunc m_wxSysColourChangedEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxSysColourChangedEvent::CloneRefData(data);
    if (*m_wxSysColourChangedEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxSysColourChangedEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxSysColourChangedEventExtCreateRefDataFunc m_wxSysColourChangedEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxSysColourChangedEvent::CreateRefData();
    if (*m_wxSysColourChangedEventExtCreateRefData != NULL){
      return m_wxSysColourChangedEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxSysColourChangedEventExtGetClassInfoFunc m_wxSysColourChangedEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxSysColourChangedEvent::GetClassInfo();
    if (*m_wxSysColourChangedEventExtGetClassInfo != NULL){
      return m_wxSysColourChangedEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxSysColourChangedEventExtGetEventCategoryFunc m_wxSysColourChangedEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxSysColourChangedEvent::GetEventCategory();
    if (*m_wxSysColourChangedEventExtGetEventCategory != NULL){
      return m_wxSysColourChangedEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxSysColourChangedEventExt(wxSysColourChangedEventExtCloneFunc a_Clone, wxSysColourChangedEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxSysColourChangedEventExtCreateRefDataFunc a_CreateRefData, wxSysColourChangedEventExtGetClassInfoFunc a_GetClassInfo, wxSysColourChangedEventExtGetEventCategoryFunc a_GetEventCategory): wxSysColourChangedEvent() {
    m_wxSysColourChangedEventExtClone = a_Clone;
    m_wxSysColourChangedEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxSysColourChangedEventExtCreateRefData = a_CreateRefData;
    m_wxSysColourChangedEventExtGetClassInfo = a_GetClassInfo;
    m_wxSysColourChangedEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxMouseCaptureChangedEventExt: public wxMouseCaptureChangedEvent
{
public:
  wxMouseCaptureChangedEventExt(wxWindowID winid = 0, wxWindow* gainedCapture = __null): wxMouseCaptureChangedEvent(winid, gainedCapture)  {  }
  wxMouseCaptureChangedEventExt(wxMouseCaptureChangedEvent const& event): wxMouseCaptureChangedEvent(event)  {  }
  wxMouseCaptureChangedEventExtCloneFunc m_wxMouseCaptureChangedEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxMouseCaptureChangedEvent::Clone();
    if (*m_wxMouseCaptureChangedEventExtClone != NULL){
      return m_wxMouseCaptureChangedEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxMouseCaptureChangedEventExtCloneRefDatawxObjectRefDataCPFunc m_wxMouseCaptureChangedEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxMouseCaptureChangedEvent::CloneRefData(data);
    if (*m_wxMouseCaptureChangedEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxMouseCaptureChangedEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxMouseCaptureChangedEventExtCreateRefDataFunc m_wxMouseCaptureChangedEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxMouseCaptureChangedEvent::CreateRefData();
    if (*m_wxMouseCaptureChangedEventExtCreateRefData != NULL){
      return m_wxMouseCaptureChangedEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxMouseCaptureChangedEventExtGetClassInfoFunc m_wxMouseCaptureChangedEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxMouseCaptureChangedEvent::GetClassInfo();
    if (*m_wxMouseCaptureChangedEventExtGetClassInfo != NULL){
      return m_wxMouseCaptureChangedEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxMouseCaptureChangedEventExtGetEventCategoryFunc m_wxMouseCaptureChangedEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxMouseCaptureChangedEvent::GetEventCategory();
    if (*m_wxMouseCaptureChangedEventExtGetEventCategory != NULL){
      return m_wxMouseCaptureChangedEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxMouseCaptureChangedEventExt(wxMouseCaptureChangedEventExtCloneFunc a_Clone, wxMouseCaptureChangedEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxMouseCaptureChangedEventExtCreateRefDataFunc a_CreateRefData, wxMouseCaptureChangedEventExtGetClassInfoFunc a_GetClassInfo, wxMouseCaptureChangedEventExtGetEventCategoryFunc a_GetEventCategory): wxMouseCaptureChangedEvent() {
    m_wxMouseCaptureChangedEventExtClone = a_Clone;
    m_wxMouseCaptureChangedEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxMouseCaptureChangedEventExtCreateRefData = a_CreateRefData;
    m_wxMouseCaptureChangedEventExtGetClassInfo = a_GetClassInfo;
    m_wxMouseCaptureChangedEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxMouseCaptureLostEventExt: public wxMouseCaptureLostEvent
{
public:
  wxMouseCaptureLostEventExt(wxWindowID winid = 0): wxMouseCaptureLostEvent(winid)  {  }
  wxMouseCaptureLostEventExt(wxMouseCaptureLostEvent const& event): wxMouseCaptureLostEvent(event)  {  }
  wxMouseCaptureLostEventExtCloneFunc m_wxMouseCaptureLostEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxMouseCaptureLostEvent::Clone();
    if (*m_wxMouseCaptureLostEventExtClone != NULL){
      return m_wxMouseCaptureLostEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxMouseCaptureLostEventExtCloneRefDatawxObjectRefDataCPFunc m_wxMouseCaptureLostEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxMouseCaptureLostEvent::CloneRefData(data);
    if (*m_wxMouseCaptureLostEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxMouseCaptureLostEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxMouseCaptureLostEventExtCreateRefDataFunc m_wxMouseCaptureLostEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxMouseCaptureLostEvent::CreateRefData();
    if (*m_wxMouseCaptureLostEventExtCreateRefData != NULL){
      return m_wxMouseCaptureLostEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxMouseCaptureLostEventExtGetClassInfoFunc m_wxMouseCaptureLostEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxMouseCaptureLostEvent::GetClassInfo();
    if (*m_wxMouseCaptureLostEventExtGetClassInfo != NULL){
      return m_wxMouseCaptureLostEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxMouseCaptureLostEventExtGetEventCategoryFunc m_wxMouseCaptureLostEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxMouseCaptureLostEvent::GetEventCategory();
    if (*m_wxMouseCaptureLostEventExtGetEventCategory != NULL){
      return m_wxMouseCaptureLostEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxMouseCaptureLostEventExt(wxMouseCaptureLostEventExtCloneFunc a_Clone, wxMouseCaptureLostEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxMouseCaptureLostEventExtCreateRefDataFunc a_CreateRefData, wxMouseCaptureLostEventExtGetClassInfoFunc a_GetClassInfo, wxMouseCaptureLostEventExtGetEventCategoryFunc a_GetEventCategory): wxMouseCaptureLostEvent() {
    m_wxMouseCaptureLostEventExtClone = a_Clone;
    m_wxMouseCaptureLostEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxMouseCaptureLostEventExtCreateRefData = a_CreateRefData;
    m_wxMouseCaptureLostEventExtGetClassInfo = a_GetClassInfo;
    m_wxMouseCaptureLostEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxDisplayChangedEventExt: public wxDisplayChangedEvent
{
public:
  wxDisplayChangedEventExt(): wxDisplayChangedEvent()  {  }
  wxDisplayChangedEventExt(wxDisplayChangedEvent const& param0): wxDisplayChangedEvent(param0)  {  }
  wxDisplayChangedEventExtCloneFunc m_wxDisplayChangedEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxDisplayChangedEvent::Clone();
    if (*m_wxDisplayChangedEventExtClone != NULL){
      return m_wxDisplayChangedEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxDisplayChangedEventExtCloneRefDatawxObjectRefDataCPFunc m_wxDisplayChangedEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxDisplayChangedEvent::CloneRefData(data);
    if (*m_wxDisplayChangedEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxDisplayChangedEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxDisplayChangedEventExtCreateRefDataFunc m_wxDisplayChangedEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxDisplayChangedEvent::CreateRefData();
    if (*m_wxDisplayChangedEventExtCreateRefData != NULL){
      return m_wxDisplayChangedEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxDisplayChangedEventExtGetClassInfoFunc m_wxDisplayChangedEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxDisplayChangedEvent::GetClassInfo();
    if (*m_wxDisplayChangedEventExtGetClassInfo != NULL){
      return m_wxDisplayChangedEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxDisplayChangedEventExtGetEventCategoryFunc m_wxDisplayChangedEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxDisplayChangedEvent::GetEventCategory();
    if (*m_wxDisplayChangedEventExtGetEventCategory != NULL){
      return m_wxDisplayChangedEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxDisplayChangedEventExt(wxDisplayChangedEventExtCloneFunc a_Clone, wxDisplayChangedEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxDisplayChangedEventExtCreateRefDataFunc a_CreateRefData, wxDisplayChangedEventExtGetClassInfoFunc a_GetClassInfo, wxDisplayChangedEventExtGetEventCategoryFunc a_GetEventCategory): wxDisplayChangedEvent() {
    m_wxDisplayChangedEventExtClone = a_Clone;
    m_wxDisplayChangedEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxDisplayChangedEventExtCreateRefData = a_CreateRefData;
    m_wxDisplayChangedEventExtGetClassInfo = a_GetClassInfo;
    m_wxDisplayChangedEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxDPIChangedEventExt: public wxDPIChangedEvent
{
public:
  explicit wxDPIChangedEventExt(wxSize const& oldDPI = wxDefaultSize, wxSize const& newDPI = wxDefaultSize): wxDPIChangedEvent(oldDPI, newDPI)  {  }
  wxDPIChangedEventExt(wxDPIChangedEvent const& param0): wxDPIChangedEvent(param0)  {  }
  wxDPIChangedEventExtCloneFunc m_wxDPIChangedEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxDPIChangedEvent::Clone();
    if (*m_wxDPIChangedEventExtClone != NULL){
      return m_wxDPIChangedEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxDPIChangedEventExtCloneRefDatawxObjectRefDataCPFunc m_wxDPIChangedEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxDPIChangedEvent::CloneRefData(data);
    if (*m_wxDPIChangedEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxDPIChangedEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxDPIChangedEventExtCreateRefDataFunc m_wxDPIChangedEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxDPIChangedEvent::CreateRefData();
    if (*m_wxDPIChangedEventExtCreateRefData != NULL){
      return m_wxDPIChangedEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxDPIChangedEventExtGetClassInfoFunc m_wxDPIChangedEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxDPIChangedEvent::GetClassInfo();
    if (*m_wxDPIChangedEventExtGetClassInfo != NULL){
      return m_wxDPIChangedEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxDPIChangedEventExtGetEventCategoryFunc m_wxDPIChangedEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxDPIChangedEvent::GetEventCategory();
    if (*m_wxDPIChangedEventExtGetEventCategory != NULL){
      return m_wxDPIChangedEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxDPIChangedEventExt(wxDPIChangedEventExtCloneFunc a_Clone, wxDPIChangedEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxDPIChangedEventExtCreateRefDataFunc a_CreateRefData, wxDPIChangedEventExtGetClassInfoFunc a_GetClassInfo, wxDPIChangedEventExtGetEventCategoryFunc a_GetEventCategory): wxDPIChangedEvent() {
    m_wxDPIChangedEventExtClone = a_Clone;
    m_wxDPIChangedEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxDPIChangedEventExtCreateRefData = a_CreateRefData;
    m_wxDPIChangedEventExtGetClassInfo = a_GetClassInfo;
    m_wxDPIChangedEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxPaletteChangedEventExt: public wxPaletteChangedEvent
{
public:
  wxPaletteChangedEventExt(wxWindowID winid = 0): wxPaletteChangedEvent(winid)  {  }
  wxPaletteChangedEventExt(wxPaletteChangedEvent const& event): wxPaletteChangedEvent(event)  {  }
  wxPaletteChangedEventExtCloneFunc m_wxPaletteChangedEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxPaletteChangedEvent::Clone();
    if (*m_wxPaletteChangedEventExtClone != NULL){
      return m_wxPaletteChangedEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxPaletteChangedEventExtCloneRefDatawxObjectRefDataCPFunc m_wxPaletteChangedEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxPaletteChangedEvent::CloneRefData(data);
    if (*m_wxPaletteChangedEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxPaletteChangedEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxPaletteChangedEventExtCreateRefDataFunc m_wxPaletteChangedEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxPaletteChangedEvent::CreateRefData();
    if (*m_wxPaletteChangedEventExtCreateRefData != NULL){
      return m_wxPaletteChangedEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxPaletteChangedEventExtGetClassInfoFunc m_wxPaletteChangedEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxPaletteChangedEvent::GetClassInfo();
    if (*m_wxPaletteChangedEventExtGetClassInfo != NULL){
      return m_wxPaletteChangedEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxPaletteChangedEventExtGetEventCategoryFunc m_wxPaletteChangedEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxPaletteChangedEvent::GetEventCategory();
    if (*m_wxPaletteChangedEventExtGetEventCategory != NULL){
      return m_wxPaletteChangedEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxPaletteChangedEventExt(wxPaletteChangedEventExtCloneFunc a_Clone, wxPaletteChangedEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxPaletteChangedEventExtCreateRefDataFunc a_CreateRefData, wxPaletteChangedEventExtGetClassInfoFunc a_GetClassInfo, wxPaletteChangedEventExtGetEventCategoryFunc a_GetEventCategory): wxPaletteChangedEvent() {
    m_wxPaletteChangedEventExtClone = a_Clone;
    m_wxPaletteChangedEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxPaletteChangedEventExtCreateRefData = a_CreateRefData;
    m_wxPaletteChangedEventExtGetClassInfo = a_GetClassInfo;
    m_wxPaletteChangedEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxQueryNewPaletteEventExt: public wxQueryNewPaletteEvent
{
public:
  wxQueryNewPaletteEventExt(wxWindowID winid = 0): wxQueryNewPaletteEvent(winid)  {  }
  wxQueryNewPaletteEventExt(wxQueryNewPaletteEvent const& event): wxQueryNewPaletteEvent(event)  {  }
  wxQueryNewPaletteEventExtCloneFunc m_wxQueryNewPaletteEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxQueryNewPaletteEvent::Clone();
    if (*m_wxQueryNewPaletteEventExtClone != NULL){
      return m_wxQueryNewPaletteEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxQueryNewPaletteEventExtCloneRefDatawxObjectRefDataCPFunc m_wxQueryNewPaletteEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxQueryNewPaletteEvent::CloneRefData(data);
    if (*m_wxQueryNewPaletteEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxQueryNewPaletteEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxQueryNewPaletteEventExtCreateRefDataFunc m_wxQueryNewPaletteEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxQueryNewPaletteEvent::CreateRefData();
    if (*m_wxQueryNewPaletteEventExtCreateRefData != NULL){
      return m_wxQueryNewPaletteEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxQueryNewPaletteEventExtGetClassInfoFunc m_wxQueryNewPaletteEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxQueryNewPaletteEvent::GetClassInfo();
    if (*m_wxQueryNewPaletteEventExtGetClassInfo != NULL){
      return m_wxQueryNewPaletteEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxQueryNewPaletteEventExtGetEventCategoryFunc m_wxQueryNewPaletteEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxQueryNewPaletteEvent::GetEventCategory();
    if (*m_wxQueryNewPaletteEventExtGetEventCategory != NULL){
      return m_wxQueryNewPaletteEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxQueryNewPaletteEventExt(wxQueryNewPaletteEventExtCloneFunc a_Clone, wxQueryNewPaletteEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxQueryNewPaletteEventExtCreateRefDataFunc a_CreateRefData, wxQueryNewPaletteEventExtGetClassInfoFunc a_GetClassInfo, wxQueryNewPaletteEventExtGetEventCategoryFunc a_GetEventCategory): wxQueryNewPaletteEvent() {
    m_wxQueryNewPaletteEventExtClone = a_Clone;
    m_wxQueryNewPaletteEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxQueryNewPaletteEventExtCreateRefData = a_CreateRefData;
    m_wxQueryNewPaletteEventExtGetClassInfo = a_GetClassInfo;
    m_wxQueryNewPaletteEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxNavigationKeyEventExt: public wxNavigationKeyEvent
{
public:
  wxNavigationKeyEventExt(): wxNavigationKeyEvent()  {  }
  wxNavigationKeyEventExt(wxNavigationKeyEvent const& event): wxNavigationKeyEvent(event)  {  }
  wxNavigationKeyEventExtCloneFunc m_wxNavigationKeyEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxNavigationKeyEvent::Clone();
    if (*m_wxNavigationKeyEventExtClone != NULL){
      return m_wxNavigationKeyEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxNavigationKeyEventExtCloneRefDatawxObjectRefDataCPFunc m_wxNavigationKeyEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxNavigationKeyEvent::CloneRefData(data);
    if (*m_wxNavigationKeyEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxNavigationKeyEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxNavigationKeyEventExtCreateRefDataFunc m_wxNavigationKeyEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxNavigationKeyEvent::CreateRefData();
    if (*m_wxNavigationKeyEventExtCreateRefData != NULL){
      return m_wxNavigationKeyEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxNavigationKeyEventExtGetClassInfoFunc m_wxNavigationKeyEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxNavigationKeyEvent::GetClassInfo();
    if (*m_wxNavigationKeyEventExtGetClassInfo != NULL){
      return m_wxNavigationKeyEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxNavigationKeyEventExtGetEventCategoryFunc m_wxNavigationKeyEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxNavigationKeyEvent::GetEventCategory();
    if (*m_wxNavigationKeyEventExtGetEventCategory != NULL){
      return m_wxNavigationKeyEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxNavigationKeyEventExt(wxNavigationKeyEventExtCloneFunc a_Clone, wxNavigationKeyEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxNavigationKeyEventExtCreateRefDataFunc a_CreateRefData, wxNavigationKeyEventExtGetClassInfoFunc a_GetClassInfo, wxNavigationKeyEventExtGetEventCategoryFunc a_GetEventCategory): wxNavigationKeyEvent() {
    m_wxNavigationKeyEventExtClone = a_Clone;
    m_wxNavigationKeyEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxNavigationKeyEventExtCreateRefData = a_CreateRefData;
    m_wxNavigationKeyEventExtGetClassInfo = a_GetClassInfo;
    m_wxNavigationKeyEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxWindowCreateEventExt: public wxWindowCreateEvent
{
public:
  wxWindowCreateEventExt(wxWindow* win = __null): wxWindowCreateEvent(win)  {  }
  wxWindowCreateEventExt(wxWindowCreateEvent const& param0): wxWindowCreateEvent(param0)  {  }
  wxWindowCreateEventExtCloneFunc m_wxWindowCreateEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxWindowCreateEvent::Clone();
    if (*m_wxWindowCreateEventExtClone != NULL){
      return m_wxWindowCreateEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxWindowCreateEventExtCloneRefDatawxObjectRefDataCPFunc m_wxWindowCreateEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxWindowCreateEvent::CloneRefData(data);
    if (*m_wxWindowCreateEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxWindowCreateEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxWindowCreateEventExtCreateRefDataFunc m_wxWindowCreateEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxWindowCreateEvent::CreateRefData();
    if (*m_wxWindowCreateEventExtCreateRefData != NULL){
      return m_wxWindowCreateEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxWindowCreateEventExtGetClassInfoFunc m_wxWindowCreateEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxWindowCreateEvent::GetClassInfo();
    if (*m_wxWindowCreateEventExtGetClassInfo != NULL){
      return m_wxWindowCreateEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxWindowCreateEventExtGetEventCategoryFunc m_wxWindowCreateEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxWindowCreateEvent::GetEventCategory();
    if (*m_wxWindowCreateEventExtGetEventCategory != NULL){
      return m_wxWindowCreateEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxWindowCreateEventExt(wxWindowCreateEventExtCloneFunc a_Clone, wxWindowCreateEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxWindowCreateEventExtCreateRefDataFunc a_CreateRefData, wxWindowCreateEventExtGetClassInfoFunc a_GetClassInfo, wxWindowCreateEventExtGetEventCategoryFunc a_GetEventCategory): wxWindowCreateEvent() {
    m_wxWindowCreateEventExtClone = a_Clone;
    m_wxWindowCreateEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxWindowCreateEventExtCreateRefData = a_CreateRefData;
    m_wxWindowCreateEventExtGetClassInfo = a_GetClassInfo;
    m_wxWindowCreateEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxWindowDestroyEventExt: public wxWindowDestroyEvent
{
public:
  wxWindowDestroyEventExt(wxWindow* win = __null): wxWindowDestroyEvent(win)  {  }
  wxWindowDestroyEventExt(wxWindowDestroyEvent const& param0): wxWindowDestroyEvent(param0)  {  }
  wxWindowDestroyEventExtCloneFunc m_wxWindowDestroyEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxWindowDestroyEvent::Clone();
    if (*m_wxWindowDestroyEventExtClone != NULL){
      return m_wxWindowDestroyEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxWindowDestroyEventExtCloneRefDatawxObjectRefDataCPFunc m_wxWindowDestroyEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxWindowDestroyEvent::CloneRefData(data);
    if (*m_wxWindowDestroyEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxWindowDestroyEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxWindowDestroyEventExtCreateRefDataFunc m_wxWindowDestroyEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxWindowDestroyEvent::CreateRefData();
    if (*m_wxWindowDestroyEventExtCreateRefData != NULL){
      return m_wxWindowDestroyEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxWindowDestroyEventExtGetClassInfoFunc m_wxWindowDestroyEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxWindowDestroyEvent::GetClassInfo();
    if (*m_wxWindowDestroyEventExtGetClassInfo != NULL){
      return m_wxWindowDestroyEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxWindowDestroyEventExtGetEventCategoryFunc m_wxWindowDestroyEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxWindowDestroyEvent::GetEventCategory();
    if (*m_wxWindowDestroyEventExtGetEventCategory != NULL){
      return m_wxWindowDestroyEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxWindowDestroyEventExt(wxWindowDestroyEventExtCloneFunc a_Clone, wxWindowDestroyEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxWindowDestroyEventExtCreateRefDataFunc a_CreateRefData, wxWindowDestroyEventExtGetClassInfoFunc a_GetClassInfo, wxWindowDestroyEventExtGetEventCategoryFunc a_GetEventCategory): wxWindowDestroyEvent() {
    m_wxWindowDestroyEventExtClone = a_Clone;
    m_wxWindowDestroyEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxWindowDestroyEventExtCreateRefData = a_CreateRefData;
    m_wxWindowDestroyEventExtGetClassInfo = a_GetClassInfo;
    m_wxWindowDestroyEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxHelpEventExt: public wxHelpEvent
{
public:
  wxHelpEventExt(wxEventType type = wxEVT_NULL, wxWindowID winid = 0, wxPoint const& pt = wxDefaultPosition, wxHelpEvent::Origin origin = Origin_Unknown): wxHelpEvent(type, winid, pt, origin)  {  }
  wxHelpEventExt(wxHelpEvent const& event): wxHelpEvent(event)  {  }
  wxHelpEventExtCloneFunc m_wxHelpEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxHelpEvent::Clone();
    if (*m_wxHelpEventExtClone != NULL){
      return m_wxHelpEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxHelpEventExtCloneRefDatawxObjectRefDataCPFunc m_wxHelpEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxHelpEvent::CloneRefData(data);
    if (*m_wxHelpEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxHelpEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxHelpEventExtCreateRefDataFunc m_wxHelpEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxHelpEvent::CreateRefData();
    if (*m_wxHelpEventExtCreateRefData != NULL){
      return m_wxHelpEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxHelpEventExtGetClassInfoFunc m_wxHelpEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxHelpEvent::GetClassInfo();
    if (*m_wxHelpEventExtGetClassInfo != NULL){
      return m_wxHelpEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxHelpEventExtGetEventCategoryFunc m_wxHelpEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxHelpEvent::GetEventCategory();
    if (*m_wxHelpEventExtGetEventCategory != NULL){
      return m_wxHelpEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxHelpEventExt(wxHelpEventExtCloneFunc a_Clone, wxHelpEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxHelpEventExtCreateRefDataFunc a_CreateRefData, wxHelpEventExtGetClassInfoFunc a_GetClassInfo, wxHelpEventExtGetEventCategoryFunc a_GetEventCategory): wxHelpEvent() {
    m_wxHelpEventExtClone = a_Clone;
    m_wxHelpEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxHelpEventExtCreateRefData = a_CreateRefData;
    m_wxHelpEventExtGetClassInfo = a_GetClassInfo;
    m_wxHelpEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxClipboardTextEventExt: public wxClipboardTextEvent
{
public:
  wxClipboardTextEventExt(wxEventType type = wxEVT_NULL, wxWindowID winid = 0): wxClipboardTextEvent(type, winid)  {  }
  wxClipboardTextEventExt(wxClipboardTextEvent const& event): wxClipboardTextEvent(event)  {  }
  wxClipboardTextEventExtCloneFunc m_wxClipboardTextEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxClipboardTextEvent::Clone();
    if (*m_wxClipboardTextEventExtClone != NULL){
      return m_wxClipboardTextEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxClipboardTextEventExtCloneRefDatawxObjectRefDataCPFunc m_wxClipboardTextEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxClipboardTextEvent::CloneRefData(data);
    if (*m_wxClipboardTextEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxClipboardTextEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxClipboardTextEventExtCreateRefDataFunc m_wxClipboardTextEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxClipboardTextEvent::CreateRefData();
    if (*m_wxClipboardTextEventExtCreateRefData != NULL){
      return m_wxClipboardTextEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxClipboardTextEventExtGetClassInfoFunc m_wxClipboardTextEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxClipboardTextEvent::GetClassInfo();
    if (*m_wxClipboardTextEventExtGetClassInfo != NULL){
      return m_wxClipboardTextEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxClipboardTextEventExtGetEventCategoryFunc m_wxClipboardTextEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxClipboardTextEvent::GetEventCategory();
    if (*m_wxClipboardTextEventExtGetEventCategory != NULL){
      return m_wxClipboardTextEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxClipboardTextEventExt(wxClipboardTextEventExtCloneFunc a_Clone, wxClipboardTextEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxClipboardTextEventExtCreateRefDataFunc a_CreateRefData, wxClipboardTextEventExtGetClassInfoFunc a_GetClassInfo, wxClipboardTextEventExtGetEventCategoryFunc a_GetEventCategory): wxClipboardTextEvent() {
    m_wxClipboardTextEventExtClone = a_Clone;
    m_wxClipboardTextEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxClipboardTextEventExtCreateRefData = a_CreateRefData;
    m_wxClipboardTextEventExtGetClassInfo = a_GetClassInfo;
    m_wxClipboardTextEventExtGetEventCategory = a_GetEventCategory;
  }
};

class wxContextMenuEventExt: public wxContextMenuEvent
{
public:
  wxContextMenuEventExt(wxEventType type = wxEVT_NULL, wxWindowID winid = 0, wxPoint const& pt = wxDefaultPosition): wxContextMenuEvent(type, winid, pt)  {  }
  wxContextMenuEventExt(wxContextMenuEvent const& event): wxContextMenuEvent(event)  {  }
  wxContextMenuEventExtCloneFunc m_wxContextMenuEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxContextMenuEvent::Clone();
    if (*m_wxContextMenuEventExtClone != NULL){
      return m_wxContextMenuEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxContextMenuEventExtCloneRefDatawxObjectRefDataCPFunc m_wxContextMenuEventExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxContextMenuEvent::CloneRefData(data);
    if (*m_wxContextMenuEventExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxContextMenuEventExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxContextMenuEventExtCreateRefDataFunc m_wxContextMenuEventExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxContextMenuEvent::CreateRefData();
    if (*m_wxContextMenuEventExtCreateRefData != NULL){
      return m_wxContextMenuEventExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxContextMenuEventExtGetClassInfoFunc m_wxContextMenuEventExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxContextMenuEvent::GetClassInfo();
    if (*m_wxContextMenuEventExtGetClassInfo != NULL){
      return m_wxContextMenuEventExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxContextMenuEventExtGetEventCategoryFunc m_wxContextMenuEventExtGetEventCategory = NULL;
  virtual wxEventCategory GetEventCategory() const override
  {
    wxEventCategory res = wxContextMenuEvent::GetEventCategory();
    if (*m_wxContextMenuEventExtGetEventCategory != NULL){
      return m_wxContextMenuEventExtGetEventCategory(this);
    }
    else {
      return res;
    }
  }
  wxContextMenuEventExt(wxContextMenuEventExtCloneFunc a_Clone, wxContextMenuEventExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxContextMenuEventExtCreateRefDataFunc a_CreateRefData, wxContextMenuEventExtGetClassInfoFunc a_GetClassInfo, wxContextMenuEventExtGetEventCategoryFunc a_GetEventCategory): wxContextMenuEvent() {
    m_wxContextMenuEventExtClone = a_Clone;
    m_wxContextMenuEventExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxContextMenuEventExtCreateRefData = a_CreateRefData;
    m_wxContextMenuEventExtGetClassInfo = a_GetClassInfo;
    m_wxContextMenuEventExtGetEventCategory = a_GetEventCategory;
  }
};
#endif // wxUSE_GUI

class wxEventTableEntryBaseExt: public wxEventTableEntryBase
{
public:
  wxEventTableEntryBaseExt(int winid, int idLast, wxEventFunctor* fn, wxObject* data): wxEventTableEntryBase(winid, idLast, fn, data)  {  }
  wxEventTableEntryBaseExt(wxEventTableEntryBase const& entry): wxEventTableEntryBase(entry)  {  }
};

class wxEventTableEntryExt: public wxEventTableEntry
{
public:
  wxEventTableEntryExt(int const& evType, int winid, int idLast, wxEventFunctor* fn, wxObject* data): wxEventTableEntry(evType, winid, idLast, fn, data)  {  }
};

class wxDynamicEventTableEntryExt: public wxDynamicEventTableEntry
{
public:
  wxDynamicEventTableEntryExt(int evType, int winid, int idLast, wxEventFunctor* fn, wxObject* data): wxDynamicEventTableEntry(evType, winid, idLast, fn, data)  {  }
};

class wxEventTableExt: public wxEventTable
{
public:
};

class wxEventTableEntryPointerArrayExt: public wxEventTableEntryPointerArray
{
public:
  wxEventTableEntryPointerArrayExt(): wxEventTableEntryPointerArray()  {  }
  explicit wxEventTableEntryPointerArrayExt(size_t n): wxEventTableEntryPointerArray(n)  {  }
};

class wxEventHashTableExt: public wxEventHashTable
{
public:
  wxEventHashTableExt(wxEventTable const& table): wxEventHashTable(table)  {  }
};

class wxEvtHandlerExt: public wxEvtHandler
{
public:
  wxEvtHandlerExt(): wxEvtHandler()  {  }
  virtual ~wxEvtHandlerExt() override  {  }
  wxEvtHandlerExtAddPendingEventwxEventCRFunc m_wxEvtHandlerExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxEvtHandler::AddPendingEvent(event);
    if (*m_wxEvtHandlerExtAddPendingEventwxEventCR != NULL){
      return m_wxEvtHandlerExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxEvtHandlerExtCloneRefDatawxObjectRefDataCPFunc m_wxEvtHandlerExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxEvtHandler::CloneRefData(data);
    if (*m_wxEvtHandlerExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxEvtHandlerExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtCreateRefDataFunc m_wxEvtHandlerExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxEvtHandler::CreateRefData();
    if (*m_wxEvtHandlerExtCreateRefData != NULL){
      return m_wxEvtHandlerExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtGetClassInfoFunc m_wxEvtHandlerExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxEvtHandler::GetClassInfo();
    if (*m_wxEvtHandlerExtGetClassInfo != NULL){
      return m_wxEvtHandlerExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtGetEventHashTableFunc m_wxEvtHandlerExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxEvtHandler::GetEventHashTable();
    if (*m_wxEvtHandlerExtGetEventHashTable != NULL){
      return m_wxEvtHandlerExtGetEventHashTable(this);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtGetEventTableFunc m_wxEvtHandlerExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxEvtHandler::GetEventTable();
    if (*m_wxEvtHandlerExtGetEventTable != NULL){
      return m_wxEvtHandlerExtGetEventTable(this);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxEvtHandlerExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxEvtHandler::OnDynamicBind(param0);
    if (*m_wxEvtHandlerExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxEvtHandlerExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtProcessEventwxEventRFunc m_wxEvtHandlerExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxEvtHandler::ProcessEvent(event);
    if (*m_wxEvtHandlerExtProcessEventwxEventR != NULL){
      return m_wxEvtHandlerExtProcessEventwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtQueueEventwxEventPFunc m_wxEvtHandlerExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxEvtHandler::QueueEvent(event);
    if (*m_wxEvtHandlerExtQueueEventwxEventP != NULL){
      return m_wxEvtHandlerExtQueueEventwxEventP(this, event);
    }
  }
  wxEvtHandlerExtSearchEventTablewxEventTableRwxEventRFunc m_wxEvtHandlerExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxEvtHandler::SearchEventTable(table, event);
    if (*m_wxEvtHandlerExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxEvtHandlerExtSearchEventTablewxEventTableRwxEventR(this, table, event);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtSetNextHandlerwxEvtHandlerPFunc m_wxEvtHandlerExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxEvtHandler::SetNextHandler(handler);
    if (*m_wxEvtHandlerExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxEvtHandlerExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxEvtHandlerExtSetPreviousHandlerwxEvtHandlerPFunc m_wxEvtHandlerExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxEvtHandler::SetPreviousHandler(handler);
    if (*m_wxEvtHandlerExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxEvtHandlerExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxEvtHandlerExtTryAfterwxEventRFunc m_wxEvtHandlerExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxEvtHandler::TryAfter(event);
    if (*m_wxEvtHandlerExtTryAfterwxEventR != NULL){
      return m_wxEvtHandlerExtTryAfterwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtTryBeforewxEventRFunc m_wxEvtHandlerExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxEvtHandler::TryBefore(event);
    if (*m_wxEvtHandlerExtTryBeforewxEventR != NULL){
      return m_wxEvtHandlerExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExt(wxEvtHandlerExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxEvtHandlerExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxEvtHandlerExtCreateRefDataFunc a_CreateRefData, wxEvtHandlerExtGetClassInfoFunc a_GetClassInfo, wxEvtHandlerExtGetEventHashTableFunc a_GetEventHashTable, wxEvtHandlerExtGetEventTableFunc a_GetEventTable, wxEvtHandlerExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxEvtHandlerExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxEvtHandlerExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxEvtHandlerExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxEvtHandlerExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxEvtHandlerExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxEvtHandlerExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxEvtHandlerExtTryBeforewxEventRFunc a_TryBeforewxEventR): wxEvtHandler() {
    m_wxEvtHandlerExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxEvtHandlerExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxEvtHandlerExtCreateRefData = a_CreateRefData;
    m_wxEvtHandlerExtGetClassInfo = a_GetClassInfo;
    m_wxEvtHandlerExtGetEventHashTable = a_GetEventHashTable;
    m_wxEvtHandlerExtGetEventTable = a_GetEventTable;
    m_wxEvtHandlerExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxEvtHandlerExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxEvtHandlerExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxEvtHandlerExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxEvtHandlerExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxEvtHandlerExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxEvtHandlerExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxEvtHandlerExtTryBeforewxEventR = a_TryBeforewxEventR;
  }
};

class wxEvtHandlerArrayExt: public wxEvtHandlerArray
{
public:
  wxEvtHandlerArrayExt(): wxEvtHandlerArray()  {  }
  explicit wxEvtHandlerArrayExt(size_t n): wxEvtHandlerArray(n)  {  }
};

class wxEventConnectionRefExt: public wxEventConnectionRef
{
public:
  wxEventConnectionRefExt(): wxEventConnectionRef()  {  }
  wxEventConnectionRefExt(wxEvtHandler* src, wxEvtHandler* sink): wxEventConnectionRef(src, sink)  {  }
  wxEventConnectionRefExtOnObjectDestroyFunc m_wxEventConnectionRefExtOnObjectDestroy = NULL;
  virtual void OnObjectDestroy() override
  {
    wxEventConnectionRef::OnObjectDestroy();
    if (*m_wxEventConnectionRefExtOnObjectDestroy != NULL){
      return m_wxEventConnectionRefExtOnObjectDestroy(this);
    }
  }
  wxEventConnectionRefExtToEventConnectionFunc m_wxEventConnectionRefExtToEventConnection = NULL;
  virtual wxEventConnectionRef* ToEventConnection() override
  {
    wxEventConnectionRef* res = wxEventConnectionRef::ToEventConnection();
    if (*m_wxEventConnectionRefExtToEventConnection != NULL){
      return m_wxEventConnectionRefExtToEventConnection(this);
    }
    else {
      return res;
    }
  }
  wxEventConnectionRefExt(wxEventConnectionRefExtOnObjectDestroyFunc a_OnObjectDestroy, wxEventConnectionRefExtToEventConnectionFunc a_ToEventConnection): wxEventConnectionRef() {
    m_wxEventConnectionRefExtOnObjectDestroy = a_OnObjectDestroy;
    m_wxEventConnectionRefExtToEventConnection = a_ToEventConnection;
  }
};

#if wxUSE_GUI
class wxEventBlockerExt: public wxEventBlocker
{
public:
  wxEventBlockerExt(wxWindow* win, wxEventType type = ((wxEventType)-1)): wxEventBlocker(win, type)  {  }
  virtual ~wxEventBlockerExt() override  {  }
  wxEventBlockerExtAddPendingEventwxEventCRFunc m_wxEventBlockerExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxEventBlocker::AddPendingEvent(event);
    if (*m_wxEventBlockerExtAddPendingEventwxEventCR != NULL){
      return m_wxEventBlockerExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxEventBlockerExtCloneRefDatawxObjectRefDataCPFunc m_wxEventBlockerExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxEventBlocker::CloneRefData(data);
    if (*m_wxEventBlockerExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxEventBlockerExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtCreateRefDataFunc m_wxEventBlockerExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxEventBlocker::CreateRefData();
    if (*m_wxEventBlockerExtCreateRefData != NULL){
      return m_wxEventBlockerExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtDoGetClientDataFunc m_wxEventBlockerExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxEventBlocker::DoGetClientData();
    if (*m_wxEventBlockerExtDoGetClientData != NULL){
      return m_wxEventBlockerExtDoGetClientData(this);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtDoGetClientObjectFunc m_wxEventBlockerExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxEventBlocker::DoGetClientObject();
    if (*m_wxEventBlockerExtDoGetClientObject != NULL){
      return m_wxEventBlockerExtDoGetClientObject(this);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtDoSetClientDatavoidPFunc m_wxEventBlockerExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxEventBlocker::DoSetClientData(data);
    if (*m_wxEventBlockerExtDoSetClientDatavoidP != NULL){
      return m_wxEventBlockerExtDoSetClientDatavoidP(this, data);
    }
  }
  wxEventBlockerExtDoSetClientObjectwxClientDataPFunc m_wxEventBlockerExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxEventBlocker::DoSetClientObject(data);
    if (*m_wxEventBlockerExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxEventBlockerExtDoSetClientObjectwxClientDataP(this, data);
    }
  }
  wxEventBlockerExtGetClassInfoFunc m_wxEventBlockerExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxEventBlocker::GetClassInfo();
    if (*m_wxEventBlockerExtGetClassInfo != NULL){
      return m_wxEventBlockerExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtGetEventHashTableFunc m_wxEventBlockerExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxEventBlocker::GetEventHashTable();
    if (*m_wxEventBlockerExtGetEventHashTable != NULL){
      return m_wxEventBlockerExtGetEventHashTable(this);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtGetEventTableFunc m_wxEventBlockerExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxEventBlocker::GetEventTable();
    if (*m_wxEventBlockerExtGetEventTable != NULL){
      return m_wxEventBlockerExtGetEventTable(this);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxEventBlockerExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxEventBlocker::OnDynamicBind(param0);
    if (*m_wxEventBlockerExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxEventBlockerExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtProcessEventwxEventRFunc m_wxEventBlockerExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxEventBlocker::ProcessEvent(event);
    if (*m_wxEventBlockerExtProcessEventwxEventR != NULL){
      return m_wxEventBlockerExtProcessEventwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtQueueEventwxEventPFunc m_wxEventBlockerExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxEventBlocker::QueueEvent(event);
    if (*m_wxEventBlockerExtQueueEventwxEventP != NULL){
      return m_wxEventBlockerExtQueueEventwxEventP(this, event);
    }
  }
  wxEventBlockerExtSearchEventTablewxEventTableRwxEventRFunc m_wxEventBlockerExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxEventBlocker::SearchEventTable(table, event);
    if (*m_wxEventBlockerExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxEventBlockerExtSearchEventTablewxEventTableRwxEventR(this, table, event);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtSetNextHandlerwxEvtHandlerPFunc m_wxEventBlockerExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxEventBlocker::SetNextHandler(handler);
    if (*m_wxEventBlockerExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxEventBlockerExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxEventBlockerExtSetPreviousHandlerwxEvtHandlerPFunc m_wxEventBlockerExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxEventBlocker::SetPreviousHandler(handler);
    if (*m_wxEventBlockerExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxEventBlockerExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxEventBlockerExtTryAfterwxEventRFunc m_wxEventBlockerExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxEventBlocker::TryAfter(event);
    if (*m_wxEventBlockerExtTryAfterwxEventR != NULL){
      return m_wxEventBlockerExtTryAfterwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtTryBeforewxEventRFunc m_wxEventBlockerExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxEventBlocker::TryBefore(event);
    if (*m_wxEventBlockerExtTryBeforewxEventR != NULL){
      return m_wxEventBlockerExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtWXReservedEvtHandler1voidPFunc m_wxEventBlockerExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxEventBlocker::WXReservedEvtHandler1(param0);
    if (*m_wxEventBlockerExtWXReservedEvtHandler1voidP != NULL){
      return m_wxEventBlockerExtWXReservedEvtHandler1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExtWXReservedEvtHandler2voidPFunc m_wxEventBlockerExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxEventBlocker::WXReservedEvtHandler2(param0);
    if (*m_wxEventBlockerExtWXReservedEvtHandler2voidP != NULL){
      return m_wxEventBlockerExtWXReservedEvtHandler2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExt(wxWindow* win, wxEventBlockerExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxEventBlockerExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxEventBlockerExtCreateRefDataFunc a_CreateRefData, wxEventBlockerExtDoGetClientDataFunc a_DoGetClientData, wxEventBlockerExtDoGetClientObjectFunc a_DoGetClientObject, wxEventBlockerExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxEventBlockerExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxEventBlockerExtGetClassInfoFunc a_GetClassInfo, wxEventBlockerExtGetEventHashTableFunc a_GetEventHashTable, wxEventBlockerExtGetEventTableFunc a_GetEventTable, wxEventBlockerExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxEventBlockerExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxEventBlockerExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxEventBlockerExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxEventBlockerExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxEventBlockerExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxEventBlockerExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxEventBlockerExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxEventBlockerExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxEventBlockerExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP): wxEventBlocker(win) {
    m_wxEventBlockerExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxEventBlockerExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxEventBlockerExtCreateRefData = a_CreateRefData;
    m_wxEventBlockerExtDoGetClientData = a_DoGetClientData;
    m_wxEventBlockerExtDoGetClientObject = a_DoGetClientObject;
    m_wxEventBlockerExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxEventBlockerExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxEventBlockerExtGetClassInfo = a_GetClassInfo;
    m_wxEventBlockerExtGetEventHashTable = a_GetEventHashTable;
    m_wxEventBlockerExtGetEventTable = a_GetEventTable;
    m_wxEventBlockerExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxEventBlockerExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxEventBlockerExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxEventBlockerExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxEventBlockerExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxEventBlockerExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxEventBlockerExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxEventBlockerExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxEventBlockerExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxEventBlockerExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
  }
};

#endif // wxUSE_GUI


#endif
