#ifndef _WX_EVENT_H_EXT_
#define _WX_EVENT_H_EXT_

#include <wx/event.h>
#include <wx/vidmode.h>

class wxEventFunctorExt;
typedef void (*wxEventFunctorExt_operator_callFunc)(const wxEventFunctorExt* self, wxEvtHandler* param0, wxEvent& param1);
typedef bool (*wxEventFunctorExtIsMatchingFunc)(const wxEventFunctorExt* self, wxEventFunctor const& functor);
class wxObjectEventFunctorExt;
typedef void (*wxObjectEventFunctorExt_operator_callFunc)(const wxObjectEventFunctorExt* self, wxEvtHandler* handler, wxEvent& event);
class wxEventExt;
typedef wxEvent* (*wxEventExtCloneFunc)(const wxEventExt* self);
typedef wxClassInfo* (*wxEventExtGetClassInfoFunc)(const wxEventExt* self);
class wxPropagationDisablerExt;
class wxPropagateOnceExt;
class wxEventObjectOriginSetterExt;
class wxEventProcessInHandlerOnlyExt;
class wxEventBasicPayloadMixinExt;
class wxEventAnyPayloadMixinExt;
class wxIdleEventExt;
typedef wxClassInfo* (*wxIdleEventExtGetClassInfoFunc)(const wxIdleEventExt* self);
class wxThreadEventExt;
typedef wxClassInfo* (*wxThreadEventExtGetClassInfoFunc)(const wxThreadEventExt* self);
class wxAsyncMethodCallEventExt;
typedef void (*wxAsyncMethodCallEventExtExecuteFunc)(const wxAsyncMethodCallEventExt* self);
class wxCommandEventExt;
typedef wxClassInfo* (*wxCommandEventExtGetClassInfoFunc)(const wxCommandEventExt* self);
class wxNotifyEventExt;
typedef wxClassInfo* (*wxNotifyEventExtGetClassInfoFunc)(const wxNotifyEventExt* self);
class wxScrollEventExt;
typedef wxClassInfo* (*wxScrollEventExtGetClassInfoFunc)(const wxScrollEventExt* self);
class wxScrollWinEventExt;
typedef wxClassInfo* (*wxScrollWinEventExtGetClassInfoFunc)(const wxScrollWinEventExt* self);
class wxMouseEventExt;
typedef wxClassInfo* (*wxMouseEventExtGetClassInfoFunc)(const wxMouseEventExt* self);
class wxSetCursorEventExt;
typedef wxClassInfo* (*wxSetCursorEventExtGetClassInfoFunc)(const wxSetCursorEventExt* self);
class wxGestureEventExt;
typedef wxClassInfo* (*wxGestureEventExtGetClassInfoFunc)(const wxGestureEventExt* self);
class wxPanGestureEventExt;
typedef wxClassInfo* (*wxPanGestureEventExtGetClassInfoFunc)(const wxPanGestureEventExt* self);
class wxZoomGestureEventExt;
typedef wxClassInfo* (*wxZoomGestureEventExtGetClassInfoFunc)(const wxZoomGestureEventExt* self);
class wxRotateGestureEventExt;
typedef wxClassInfo* (*wxRotateGestureEventExtGetClassInfoFunc)(const wxRotateGestureEventExt* self);
class wxTwoFingerTapEventExt;
typedef wxClassInfo* (*wxTwoFingerTapEventExtGetClassInfoFunc)(const wxTwoFingerTapEventExt* self);
class wxLongPressEventExt;
typedef wxClassInfo* (*wxLongPressEventExtGetClassInfoFunc)(const wxLongPressEventExt* self);
class wxPressAndTapEventExt;
typedef wxClassInfo* (*wxPressAndTapEventExtGetClassInfoFunc)(const wxPressAndTapEventExt* self);
class wxKeyEventExt;
typedef wxClassInfo* (*wxKeyEventExtGetClassInfoFunc)(const wxKeyEventExt* self);
class wxSizeEventExt;
typedef wxClassInfo* (*wxSizeEventExtGetClassInfoFunc)(const wxSizeEventExt* self);
class wxMoveEventExt;
typedef wxClassInfo* (*wxMoveEventExtGetClassInfoFunc)(const wxMoveEventExt* self);
class wxPaintEventExt;
typedef wxClassInfo* (*wxPaintEventExtGetClassInfoFunc)(const wxPaintEventExt* self);
class wxNcPaintEventExt;
typedef wxClassInfo* (*wxNcPaintEventExtGetClassInfoFunc)(const wxNcPaintEventExt* self);
class wxEraseEventExt;
typedef wxClassInfo* (*wxEraseEventExtGetClassInfoFunc)(const wxEraseEventExt* self);
class wxFocusEventExt;
typedef wxClassInfo* (*wxFocusEventExtGetClassInfoFunc)(const wxFocusEventExt* self);
class wxChildFocusEventExt;
typedef wxClassInfo* (*wxChildFocusEventExtGetClassInfoFunc)(const wxChildFocusEventExt* self);
class wxActivateEventExt;
typedef wxClassInfo* (*wxActivateEventExtGetClassInfoFunc)(const wxActivateEventExt* self);
class wxInitDialogEventExt;
typedef wxClassInfo* (*wxInitDialogEventExtGetClassInfoFunc)(const wxInitDialogEventExt* self);
class wxMenuEventExt;
typedef wxClassInfo* (*wxMenuEventExtGetClassInfoFunc)(const wxMenuEventExt* self);
class wxCloseEventExt;
typedef wxClassInfo* (*wxCloseEventExtGetClassInfoFunc)(const wxCloseEventExt* self);
class wxShowEventExt;
typedef wxClassInfo* (*wxShowEventExtGetClassInfoFunc)(const wxShowEventExt* self);
class wxIconizeEventExt;
typedef wxClassInfo* (*wxIconizeEventExtGetClassInfoFunc)(const wxIconizeEventExt* self);
class wxMaximizeEventExt;
typedef wxClassInfo* (*wxMaximizeEventExtGetClassInfoFunc)(const wxMaximizeEventExt* self);
class wxFullScreenEventExt;
typedef wxClassInfo* (*wxFullScreenEventExtGetClassInfoFunc)(const wxFullScreenEventExt* self);
class wxJoystickEventExt;
typedef wxClassInfo* (*wxJoystickEventExtGetClassInfoFunc)(const wxJoystickEventExt* self);
class wxDropFilesEventExt;
typedef wxClassInfo* (*wxDropFilesEventExtGetClassInfoFunc)(const wxDropFilesEventExt* self);
class wxUpdateUIEventExt;
typedef wxClassInfo* (*wxUpdateUIEventExtGetClassInfoFunc)(const wxUpdateUIEventExt* self);
class wxSysColourChangedEventExt;
typedef wxClassInfo* (*wxSysColourChangedEventExtGetClassInfoFunc)(const wxSysColourChangedEventExt* self);
class wxMouseCaptureChangedEventExt;
typedef wxClassInfo* (*wxMouseCaptureChangedEventExtGetClassInfoFunc)(const wxMouseCaptureChangedEventExt* self);
class wxMouseCaptureLostEventExt;
typedef wxClassInfo* (*wxMouseCaptureLostEventExtGetClassInfoFunc)(const wxMouseCaptureLostEventExt* self);
class wxDisplayChangedEventExt;
typedef wxClassInfo* (*wxDisplayChangedEventExtGetClassInfoFunc)(const wxDisplayChangedEventExt* self);
class wxDPIChangedEventExt;
typedef wxClassInfo* (*wxDPIChangedEventExtGetClassInfoFunc)(const wxDPIChangedEventExt* self);
class wxPaletteChangedEventExt;
typedef wxClassInfo* (*wxPaletteChangedEventExtGetClassInfoFunc)(const wxPaletteChangedEventExt* self);
class wxQueryNewPaletteEventExt;
typedef wxClassInfo* (*wxQueryNewPaletteEventExtGetClassInfoFunc)(const wxQueryNewPaletteEventExt* self);
class wxNavigationKeyEventExt;
typedef wxClassInfo* (*wxNavigationKeyEventExtGetClassInfoFunc)(const wxNavigationKeyEventExt* self);
class wxWindowCreateEventExt;
typedef wxClassInfo* (*wxWindowCreateEventExtGetClassInfoFunc)(const wxWindowCreateEventExt* self);
class wxWindowDestroyEventExt;
typedef wxClassInfo* (*wxWindowDestroyEventExtGetClassInfoFunc)(const wxWindowDestroyEventExt* self);
class wxHelpEventExt;
typedef wxClassInfo* (*wxHelpEventExtGetClassInfoFunc)(const wxHelpEventExt* self);
class wxClipboardTextEventExt;
typedef wxClassInfo* (*wxClipboardTextEventExtGetClassInfoFunc)(const wxClipboardTextEventExt* self);
class wxContextMenuEventExt;
typedef wxClassInfo* (*wxContextMenuEventExtGetClassInfoFunc)(const wxContextMenuEventExt* self);
class wxEventTableEntryBaseExt;
class wxEventTableEntryExt;
class wxDynamicEventTableEntryExt;
class wxEventTableExt;
class wxEventTableEntryPointerArrayExt;
class wxEventHashTableExt;
class wxEvtHandlerExt;
typedef bool (*wxEvtHandlerExtProcessEventFunc)(const wxEvtHandlerExt* self, wxEvent& event);
typedef void (*wxEvtHandlerExtQueueEventFunc)(const wxEvtHandlerExt* self, wxEvent* event);
typedef bool (*wxEvtHandlerExtSearchEventTableFunc)(const wxEvtHandlerExt* self, wxEventTable& table, wxEvent& event);
typedef bool (*wxEvtHandlerExtTryBeforeFunc)(const wxEvtHandlerExt* self, wxEvent& event);
typedef bool (*wxEvtHandlerExtTryAfterFunc)(const wxEvtHandlerExt* self, wxEvent& event);
typedef wxEventTable const* (*wxEvtHandlerExtGetEventTableFunc)(const wxEvtHandlerExt* self);
typedef wxEventHashTable& (*wxEvtHandlerExtGetEventHashTableFunc)(const wxEvtHandlerExt* self);
typedef void (*wxEvtHandlerExtDoSetClientObjectFunc)(const wxEvtHandlerExt* self, wxClientData* data);
typedef wxClientData* (*wxEvtHandlerExtDoGetClientObjectFunc)(const wxEvtHandlerExt* self);
typedef void (*wxEvtHandlerExtDoSetClientDataFunc)(const wxEvtHandlerExt* self, void* data);
typedef void* (*wxEvtHandlerExtDoGetClientDataFunc)(const wxEvtHandlerExt* self);
typedef void* (*wxEvtHandlerExtWXReservedEvtHandler1Func)(const wxEvtHandlerExt* self, void* param0);
typedef void* (*wxEvtHandlerExtWXReservedEvtHandler2Func)(const wxEvtHandlerExt* self, void* param0);
typedef wxClassInfo* (*wxEvtHandlerExtGetClassInfoFunc)(const wxEvtHandlerExt* self);
class wxEvtHandlerArrayExt;
class wxEventConnectionRefExt;
class wxEventBlockerExt;
typedef bool (*wxEventBlockerExtProcessEventFunc)(const wxEventBlockerExt* self, wxEvent& event);

class wxEventFunctorExt: public wxEventFunctor
{
public:
  virtual ~wxEventFunctorExt()  {  }
  wxEventFunctorExt_operator_callFunc m_wxEventFunctorExt_operator_call = NULL;
  virtual void operator()(wxEvtHandler* param0, wxEvent& param1) override
  {
    wxEventFunctor::operator()(param0, param1);
    if (*m_wxEventFunctorExt_operator_call != NULL){
      return m_wxEventFunctorExt_operator_call(this, param0, param1);
    }
  }
  wxEventFunctorExtIsMatchingFunc m_wxEventFunctorExtIsMatching = NULL;
  virtual bool IsMatching(wxEventFunctor const& functor) const override
  {
    bool res = wxEventFunctor::IsMatching(functor);
    if (*m_wxEventFunctorExtIsMatching != NULL){
      return m_wxEventFunctorExtIsMatching(this, functor);
    }
    else {
      return res;
    }
  }
  wxEventFunctorExt(wxEventFunctorExt_operator_callFunc a__operator_call, wxEventFunctorExtIsMatchingFunc a_IsMatching): wxEventFunctor() {
    m_wxEventFunctorExt_operator_call = a__operator_call;
    m_wxEventFunctorExtIsMatching = a_IsMatching;
  }
};

class wxObjectEventFunctorExt: public wxObjectEventFunctor
{
public:
  wxObjectEventFunctorExt(wxObjectEventFunction method, wxEvtHandler* handler): wxObjectEventFunctor(method, handler)  {  }
  wxObjectEventFunctorExt_operator_callFunc m_wxObjectEventFunctorExt_operator_call = NULL;
  virtual void operator()(wxEvtHandler* handler, wxEvent& event) override
  {
    wxObjectEventFunctor::operator()(handler, event);
    if (*m_wxObjectEventFunctorExt_operator_call != NULL){
      return m_wxObjectEventFunctorExt_operator_call(this, handler, event);
    }
  }
  wxObjectEventFunctorExt(wxObjectEventFunctorExt_operator_callFunc a__operator_call, wxObjectEventFunction method, wxEvtHandler* handler): wxObjectEventFunctor(method, handler) {
    m_wxObjectEventFunctorExt_operator_call = a__operator_call;
  }
};

class wxEventExt: public wxEvent
{
public:
  wxEventExt(int winid = 0, wxEventType commandType = wxEVT_NULL): wxEvent(winid, commandType)  {  }
  wxEventExtCloneFunc m_wxEventExtClone = NULL;
  virtual wxEvent* Clone() const override
  {
    wxEvent* res = wxEvent::Clone();
    if (*m_wxEventExtClone != NULL){
      return m_wxEventExtClone(this);
    }
    else {
      return res;
    }
  }
  wxEventExt(wxEvent const& param0): wxEvent(param0)  {  }
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
  wxEventExt(wxEventExtCloneFunc a_Clone, wxEventExtGetClassInfoFunc a_GetClassInfo): wxEvent() {
    m_wxEventExtClone = a_Clone;
    m_wxEventExtGetClassInfo = a_GetClassInfo;
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
  wxIdleEventExt(wxIdleEventExtGetClassInfoFunc a_GetClassInfo): wxIdleEvent() {
    m_wxIdleEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxThreadEventExt: public wxThreadEvent
{
public:
  wxThreadEventExt(wxEventType eventType, int id = wxID_ANY): wxThreadEvent(eventType, id)  {  }
  wxThreadEventExt(wxThreadEvent const& event): wxThreadEvent(event)  {  }
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
  wxThreadEventExt(wxThreadEventExtGetClassInfoFunc a_GetClassInfo): wxThreadEvent() {
    m_wxThreadEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxAsyncMethodCallEventExt: public wxAsyncMethodCallEvent
{
public:
  wxAsyncMethodCallEventExt(wxObject* object): wxAsyncMethodCallEvent(object)  {  }
  wxAsyncMethodCallEventExt(wxAsyncMethodCallEvent const& other): wxAsyncMethodCallEvent(other)  {  }
  wxAsyncMethodCallEventExtExecuteFunc m_wxAsyncMethodCallEventExtExecute = NULL;
  virtual void Execute() override
  {
    wxAsyncMethodCallEvent::Execute();
    if (*m_wxAsyncMethodCallEventExtExecute != NULL){
      return m_wxAsyncMethodCallEventExtExecute(this);
    }
  }
  wxAsyncMethodCallEventExt(wxAsyncMethodCallEventExtExecuteFunc a_Execute, wxObject* object): wxAsyncMethodCallEvent(object) {
    m_wxAsyncMethodCallEventExtExecute = a_Execute;
  }
  wxAsyncMethodCallEventExt(wxAsyncMethodCallEventExtExecuteFunc a_Execute, wxAsyncMethodCallEvent const& other): wxAsyncMethodCallEvent(other) {
    m_wxAsyncMethodCallEventExtExecute = a_Execute;
  }
};

class wxCommandEventExt: public wxCommandEvent
{
public:
  wxCommandEventExt(wxEventType commandType = wxEVT_NULL, int winid = 0): wxCommandEvent(commandType, winid)  {  }
  wxCommandEventExt(wxCommandEvent const& event): wxCommandEvent(event)  {  }
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
  wxCommandEventExt(wxCommandEventExtGetClassInfoFunc a_GetClassInfo): wxCommandEvent() {
    m_wxCommandEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxNotifyEventExt: public wxNotifyEvent
{
public:
  wxNotifyEventExt(wxEventType commandType = wxEVT_NULL, int winid = 0): wxNotifyEvent(commandType, winid)  {  }
  wxNotifyEventExt(wxNotifyEvent const& event): wxNotifyEvent(event)  {  }
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
  wxNotifyEventExt(wxNotifyEventExtGetClassInfoFunc a_GetClassInfo): wxNotifyEvent() {
    m_wxNotifyEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxScrollEventExt: public wxScrollEvent
{
public:
  wxScrollEventExt(wxEventType commandType = wxEVT_NULL, int winid = 0, int pos = 0, int orient = 0): wxScrollEvent(commandType, winid, pos, orient)  {  }
  wxScrollEventExt(wxScrollEvent const& param0): wxScrollEvent(param0)  {  }
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
  wxScrollEventExt(wxScrollEventExtGetClassInfoFunc a_GetClassInfo): wxScrollEvent() {
    m_wxScrollEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxScrollWinEventExt: public wxScrollWinEvent
{
public:
  wxScrollWinEventExt(wxEventType commandType = wxEVT_NULL, int pos = 0, int orient = 0): wxScrollWinEvent(commandType, pos, orient)  {  }
  wxScrollWinEventExt(wxScrollWinEvent const& event): wxScrollWinEvent(event)  {  }
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
  wxScrollWinEventExt(wxScrollWinEventExtGetClassInfoFunc a_GetClassInfo): wxScrollWinEvent() {
    m_wxScrollWinEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxMouseEventExt: public wxMouseEvent
{
public:
  wxMouseEventExt(wxEventType mouseType = wxEVT_NULL): wxMouseEvent(mouseType)  {  }
  wxMouseEventExt(wxMouseEvent const& event): wxMouseEvent(event)  {  }
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
  wxMouseEventExt(wxMouseEventExtGetClassInfoFunc a_GetClassInfo): wxMouseEvent() {
    m_wxMouseEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxSetCursorEventExt: public wxSetCursorEvent
{
public:
  wxSetCursorEventExt(wxCoord x = 0, wxCoord y = 0): wxSetCursorEvent(x, y)  {  }
  wxSetCursorEventExt(wxSetCursorEvent const& event): wxSetCursorEvent(event)  {  }
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
  wxSetCursorEventExt(wxSetCursorEventExtGetClassInfoFunc a_GetClassInfo): wxSetCursorEvent() {
    m_wxSetCursorEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxGestureEventExt: public wxGestureEvent
{
public:
  wxGestureEventExt(wxWindowID winid = 0, wxEventType type = wxEVT_NULL): wxGestureEvent(winid, type)  {  }
  wxGestureEventExt(wxGestureEvent const& event): wxGestureEvent(event)  {  }
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
  wxGestureEventExt(wxGestureEventExtGetClassInfoFunc a_GetClassInfo): wxGestureEvent() {
    m_wxGestureEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxPanGestureEventExt: public wxPanGestureEvent
{
public:
  wxPanGestureEventExt(wxWindowID winid = 0): wxPanGestureEvent(winid)  {  }
  wxPanGestureEventExt(wxPanGestureEvent const& event): wxPanGestureEvent(event)  {  }
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
  wxPanGestureEventExt(wxPanGestureEventExtGetClassInfoFunc a_GetClassInfo): wxPanGestureEvent() {
    m_wxPanGestureEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxZoomGestureEventExt: public wxZoomGestureEvent
{
public:
  wxZoomGestureEventExt(wxWindowID winid = 0): wxZoomGestureEvent(winid)  {  }
  wxZoomGestureEventExt(wxZoomGestureEvent const& event): wxZoomGestureEvent(event)  {  }
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
  wxZoomGestureEventExt(wxZoomGestureEventExtGetClassInfoFunc a_GetClassInfo): wxZoomGestureEvent() {
    m_wxZoomGestureEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxRotateGestureEventExt: public wxRotateGestureEvent
{
public:
  wxRotateGestureEventExt(wxWindowID winid = 0): wxRotateGestureEvent(winid)  {  }
  wxRotateGestureEventExt(wxRotateGestureEvent const& event): wxRotateGestureEvent(event)  {  }
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
  wxRotateGestureEventExt(wxRotateGestureEventExtGetClassInfoFunc a_GetClassInfo): wxRotateGestureEvent() {
    m_wxRotateGestureEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxTwoFingerTapEventExt: public wxTwoFingerTapEvent
{
public:
  wxTwoFingerTapEventExt(wxWindowID winid = 0): wxTwoFingerTapEvent(winid)  {  }
  wxTwoFingerTapEventExt(wxTwoFingerTapEvent const& event): wxTwoFingerTapEvent(event)  {  }
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
  wxTwoFingerTapEventExt(wxTwoFingerTapEventExtGetClassInfoFunc a_GetClassInfo): wxTwoFingerTapEvent() {
    m_wxTwoFingerTapEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxLongPressEventExt: public wxLongPressEvent
{
public:
  wxLongPressEventExt(wxWindowID winid = 0): wxLongPressEvent(winid)  {  }
  wxLongPressEventExt(wxLongPressEvent const& event): wxLongPressEvent(event)  {  }
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
  wxLongPressEventExt(wxLongPressEventExtGetClassInfoFunc a_GetClassInfo): wxLongPressEvent() {
    m_wxLongPressEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxPressAndTapEventExt: public wxPressAndTapEvent
{
public:
  wxPressAndTapEventExt(wxWindowID winid = 0): wxPressAndTapEvent(winid)  {  }
  wxPressAndTapEventExt(wxPressAndTapEvent const& event): wxPressAndTapEvent(event)  {  }
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
  wxPressAndTapEventExt(wxPressAndTapEventExtGetClassInfoFunc a_GetClassInfo): wxPressAndTapEvent() {
    m_wxPressAndTapEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxKeyEventExt: public wxKeyEvent
{
public:
  wxKeyEventExt(wxEventType keyType = wxEVT_NULL): wxKeyEvent(keyType)  {  }
  wxKeyEventExt(wxKeyEvent const& evt): wxKeyEvent(evt)  {  }
  wxKeyEventExt(wxEventType eventType, wxKeyEvent const& evt): wxKeyEvent(eventType, evt)  {  }
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
  wxKeyEventExt(wxKeyEventExtGetClassInfoFunc a_GetClassInfo): wxKeyEvent() {
    m_wxKeyEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxSizeEventExt: public wxSizeEvent
{
public:
  wxSizeEventExt(): wxSizeEvent()  {  }
  wxSizeEventExt(wxSize const& sz, int winid = 0): wxSizeEvent(sz, winid)  {  }
  wxSizeEventExt(wxSizeEvent const& event): wxSizeEvent(event)  {  }
  wxSizeEventExt(wxRect const& rect, int id = 0): wxSizeEvent(rect, id)  {  }
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
  wxSizeEventExt(wxSizeEventExtGetClassInfoFunc a_GetClassInfo): wxSizeEvent() {
    m_wxSizeEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxMoveEventExt: public wxMoveEvent
{
public:
  wxMoveEventExt(): wxMoveEvent()  {  }
  wxMoveEventExt(wxPoint const& pos, int winid = 0): wxMoveEvent(pos, winid)  {  }
  wxMoveEventExt(wxMoveEvent const& event): wxMoveEvent(event)  {  }
  wxMoveEventExt(wxRect const& rect, int id = 0): wxMoveEvent(rect, id)  {  }
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
  wxMoveEventExt(wxMoveEventExtGetClassInfoFunc a_GetClassInfo): wxMoveEvent() {
    m_wxMoveEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxPaintEventExt: public wxPaintEvent
{
public:
  wxPaintEventExt(wxPaintEvent const& param0): wxPaintEvent(param0)  {  }
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
  wxPaintEventExt(wxPaintEventExtGetClassInfoFunc a_GetClassInfo, wxPaintEvent const& param0): wxPaintEvent(param0) {
    m_wxPaintEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxNcPaintEventExt: public wxNcPaintEvent
{
public:
  wxNcPaintEventExt(wxNcPaintEvent const& param0): wxNcPaintEvent(param0)  {  }
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
  wxNcPaintEventExt(wxNcPaintEventExtGetClassInfoFunc a_GetClassInfo, wxNcPaintEvent const& param0): wxNcPaintEvent(param0) {
    m_wxNcPaintEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxEraseEventExt: public wxEraseEvent
{
public:
  wxEraseEventExt(int Id = 0, wxDC* dc = __null): wxEraseEvent(Id, dc)  {  }
  wxEraseEventExt(wxEraseEvent const& event): wxEraseEvent(event)  {  }
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
  wxEraseEventExt(wxEraseEventExtGetClassInfoFunc a_GetClassInfo): wxEraseEvent() {
    m_wxEraseEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxFocusEventExt: public wxFocusEvent
{
public:
  wxFocusEventExt(wxEventType type = wxEVT_NULL, int winid = 0): wxFocusEvent(type, winid)  {  }
  wxFocusEventExt(wxFocusEvent const& event): wxFocusEvent(event)  {  }
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
  wxFocusEventExt(wxFocusEventExtGetClassInfoFunc a_GetClassInfo): wxFocusEvent() {
    m_wxFocusEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxChildFocusEventExt: public wxChildFocusEvent
{
public:
  wxChildFocusEventExt(wxWindow* win = __null): wxChildFocusEvent(win)  {  }
  wxChildFocusEventExt(wxChildFocusEvent const& param0): wxChildFocusEvent(param0)  {  }
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
  wxChildFocusEventExt(wxChildFocusEventExtGetClassInfoFunc a_GetClassInfo): wxChildFocusEvent() {
    m_wxChildFocusEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxActivateEventExt: public wxActivateEvent
{
public:
  wxActivateEventExt(wxEventType type = wxEVT_NULL, bool active = true, int Id = 0, wxActivateEvent::Reason activationReason = Reason_Unknown): wxActivateEvent(type, active, Id, activationReason)  {  }
  wxActivateEventExt(wxActivateEvent const& event): wxActivateEvent(event)  {  }
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
  wxActivateEventExt(wxActivateEventExtGetClassInfoFunc a_GetClassInfo): wxActivateEvent() {
    m_wxActivateEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxInitDialogEventExt: public wxInitDialogEvent
{
public:
  wxInitDialogEventExt(int Id = 0): wxInitDialogEvent(Id)  {  }
  wxInitDialogEventExt(wxInitDialogEvent const& param0): wxInitDialogEvent(param0)  {  }
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
  wxInitDialogEventExt(wxInitDialogEventExtGetClassInfoFunc a_GetClassInfo): wxInitDialogEvent() {
    m_wxInitDialogEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxMenuEventExt: public wxMenuEvent
{
public:
  wxMenuEventExt(wxEventType type = wxEVT_NULL, int winid = 0, wxMenu* menu = __null): wxMenuEvent(type, winid, menu)  {  }
  wxMenuEventExt(wxMenuEvent const& event): wxMenuEvent(event)  {  }
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
  wxMenuEventExt(wxMenuEventExtGetClassInfoFunc a_GetClassInfo): wxMenuEvent() {
    m_wxMenuEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxCloseEventExt: public wxCloseEvent
{
public:
  wxCloseEventExt(wxEventType type = wxEVT_NULL, int winid = 0): wxCloseEvent(type, winid)  {  }
  wxCloseEventExt(wxCloseEvent const& event): wxCloseEvent(event)  {  }
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
  wxCloseEventExt(wxCloseEventExtGetClassInfoFunc a_GetClassInfo): wxCloseEvent() {
    m_wxCloseEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxShowEventExt: public wxShowEvent
{
public:
  wxShowEventExt(int winid = 0, bool show = false): wxShowEvent(winid, show)  {  }
  wxShowEventExt(wxShowEvent const& event): wxShowEvent(event)  {  }
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
  wxShowEventExt(wxShowEventExtGetClassInfoFunc a_GetClassInfo): wxShowEvent() {
    m_wxShowEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxIconizeEventExt: public wxIconizeEvent
{
public:
  wxIconizeEventExt(int winid = 0, bool iconized = true): wxIconizeEvent(winid, iconized)  {  }
  wxIconizeEventExt(wxIconizeEvent const& event): wxIconizeEvent(event)  {  }
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
  wxIconizeEventExt(wxIconizeEventExtGetClassInfoFunc a_GetClassInfo): wxIconizeEvent() {
    m_wxIconizeEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxMaximizeEventExt: public wxMaximizeEvent
{
public:
  wxMaximizeEventExt(int winid = 0): wxMaximizeEvent(winid)  {  }
  wxMaximizeEventExt(wxMaximizeEvent const& param0): wxMaximizeEvent(param0)  {  }
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
  wxMaximizeEventExt(wxMaximizeEventExtGetClassInfoFunc a_GetClassInfo): wxMaximizeEvent() {
    m_wxMaximizeEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxFullScreenEventExt: public wxFullScreenEvent
{
public:
  wxFullScreenEventExt(int winid = 0, bool fullscreen = true): wxFullScreenEvent(winid, fullscreen)  {  }
  wxFullScreenEventExt(wxFullScreenEvent const& event): wxFullScreenEvent(event)  {  }
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
  wxFullScreenEventExt(wxFullScreenEventExtGetClassInfoFunc a_GetClassInfo): wxFullScreenEvent() {
    m_wxFullScreenEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxJoystickEventExt: public wxJoystickEvent
{
public:
  wxJoystickEventExt(wxEventType type = wxEVT_NULL, int state = 0, int joystick = wxJOYSTICK1, int change = 0): wxJoystickEvent(type, state, joystick, change)  {  }
  wxJoystickEventExt(wxJoystickEvent const& event): wxJoystickEvent(event)  {  }
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
  wxJoystickEventExt(wxJoystickEventExtGetClassInfoFunc a_GetClassInfo): wxJoystickEvent() {
    m_wxJoystickEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxDropFilesEventExt: public wxDropFilesEvent
{
public:
  wxDropFilesEventExt(wxEventType type = wxEVT_NULL, int noFiles = 0, wxString* files = __null): wxDropFilesEvent(type, noFiles, files)  {  }
  wxDropFilesEventExt(wxDropFilesEvent const& other): wxDropFilesEvent(other)  {  }
  virtual ~wxDropFilesEventExt()  {  }
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
  wxDropFilesEventExt(wxDropFilesEventExtGetClassInfoFunc a_GetClassInfo): wxDropFilesEvent() {
    m_wxDropFilesEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxUpdateUIEventExt: public wxUpdateUIEvent
{
public:
  wxUpdateUIEventExt(wxWindowID commandId = 0): wxUpdateUIEvent(commandId)  {  }
  wxUpdateUIEventExt(wxUpdateUIEvent const& event): wxUpdateUIEvent(event)  {  }
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
  wxUpdateUIEventExt(wxUpdateUIEventExtGetClassInfoFunc a_GetClassInfo): wxUpdateUIEvent() {
    m_wxUpdateUIEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxSysColourChangedEventExt: public wxSysColourChangedEvent
{
public:
  wxSysColourChangedEventExt(): wxSysColourChangedEvent()  {  }
  wxSysColourChangedEventExt(wxSysColourChangedEvent const& param0): wxSysColourChangedEvent(param0)  {  }
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
  wxSysColourChangedEventExt(wxSysColourChangedEventExtGetClassInfoFunc a_GetClassInfo): wxSysColourChangedEvent() {
    m_wxSysColourChangedEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxMouseCaptureChangedEventExt: public wxMouseCaptureChangedEvent
{
public:
  wxMouseCaptureChangedEventExt(wxWindowID winid = 0, wxWindow* gainedCapture = __null): wxMouseCaptureChangedEvent(winid, gainedCapture)  {  }
  wxMouseCaptureChangedEventExt(wxMouseCaptureChangedEvent const& event): wxMouseCaptureChangedEvent(event)  {  }
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
  wxMouseCaptureChangedEventExt(wxMouseCaptureChangedEventExtGetClassInfoFunc a_GetClassInfo): wxMouseCaptureChangedEvent() {
    m_wxMouseCaptureChangedEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxMouseCaptureLostEventExt: public wxMouseCaptureLostEvent
{
public:
  wxMouseCaptureLostEventExt(wxWindowID winid = 0): wxMouseCaptureLostEvent(winid)  {  }
  wxMouseCaptureLostEventExt(wxMouseCaptureLostEvent const& event): wxMouseCaptureLostEvent(event)  {  }
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
  wxMouseCaptureLostEventExt(wxMouseCaptureLostEventExtGetClassInfoFunc a_GetClassInfo): wxMouseCaptureLostEvent() {
    m_wxMouseCaptureLostEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxDisplayChangedEventExt: public wxDisplayChangedEvent
{
public:
  wxDisplayChangedEventExt(): wxDisplayChangedEvent()  {  }
  wxDisplayChangedEventExt(wxDisplayChangedEvent const& param0): wxDisplayChangedEvent(param0)  {  }
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
  wxDisplayChangedEventExt(wxDisplayChangedEventExtGetClassInfoFunc a_GetClassInfo): wxDisplayChangedEvent() {
    m_wxDisplayChangedEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxDPIChangedEventExt: public wxDPIChangedEvent
{
public:
  explicit wxDPIChangedEventExt(wxSize const& oldDPI = wxDefaultSize, wxSize const& newDPI = wxDefaultSize): wxDPIChangedEvent(oldDPI, newDPI)  {  }
  wxDPIChangedEventExt(wxDPIChangedEvent const& param0): wxDPIChangedEvent(param0)  {  }
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
  wxDPIChangedEventExt(wxDPIChangedEventExtGetClassInfoFunc a_GetClassInfo): wxDPIChangedEvent() {
    m_wxDPIChangedEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxPaletteChangedEventExt: public wxPaletteChangedEvent
{
public:
  wxPaletteChangedEventExt(wxWindowID winid = 0): wxPaletteChangedEvent(winid)  {  }
  wxPaletteChangedEventExt(wxPaletteChangedEvent const& event): wxPaletteChangedEvent(event)  {  }
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
  wxPaletteChangedEventExt(wxPaletteChangedEventExtGetClassInfoFunc a_GetClassInfo): wxPaletteChangedEvent() {
    m_wxPaletteChangedEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxQueryNewPaletteEventExt: public wxQueryNewPaletteEvent
{
public:
  wxQueryNewPaletteEventExt(wxWindowID winid = 0): wxQueryNewPaletteEvent(winid)  {  }
  wxQueryNewPaletteEventExt(wxQueryNewPaletteEvent const& event): wxQueryNewPaletteEvent(event)  {  }
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
  wxQueryNewPaletteEventExt(wxQueryNewPaletteEventExtGetClassInfoFunc a_GetClassInfo): wxQueryNewPaletteEvent() {
    m_wxQueryNewPaletteEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxNavigationKeyEventExt: public wxNavigationKeyEvent
{
public:
  wxNavigationKeyEventExt(): wxNavigationKeyEvent()  {  }
  wxNavigationKeyEventExt(wxNavigationKeyEvent const& event): wxNavigationKeyEvent(event)  {  }
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
  wxNavigationKeyEventExt(wxNavigationKeyEventExtGetClassInfoFunc a_GetClassInfo): wxNavigationKeyEvent() {
    m_wxNavigationKeyEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxWindowCreateEventExt: public wxWindowCreateEvent
{
public:
  wxWindowCreateEventExt(wxWindow* win = __null): wxWindowCreateEvent(win)  {  }
  wxWindowCreateEventExt(wxWindowCreateEvent const& param0): wxWindowCreateEvent(param0)  {  }
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
  wxWindowCreateEventExt(wxWindowCreateEventExtGetClassInfoFunc a_GetClassInfo): wxWindowCreateEvent() {
    m_wxWindowCreateEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxWindowDestroyEventExt: public wxWindowDestroyEvent
{
public:
  wxWindowDestroyEventExt(wxWindow* win = __null): wxWindowDestroyEvent(win)  {  }
  wxWindowDestroyEventExt(wxWindowDestroyEvent const& param0): wxWindowDestroyEvent(param0)  {  }
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
  wxWindowDestroyEventExt(wxWindowDestroyEventExtGetClassInfoFunc a_GetClassInfo): wxWindowDestroyEvent() {
    m_wxWindowDestroyEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxHelpEventExt: public wxHelpEvent
{
public:
  wxHelpEventExt(wxEventType type = wxEVT_NULL, wxWindowID winid = 0, wxPoint const& pt = wxDefaultPosition, wxHelpEvent::Origin origin = Origin_Unknown): wxHelpEvent(type, winid, pt, origin)  {  }
  wxHelpEventExt(wxHelpEvent const& event): wxHelpEvent(event)  {  }
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
  wxHelpEventExt(wxHelpEventExtGetClassInfoFunc a_GetClassInfo): wxHelpEvent() {
    m_wxHelpEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxClipboardTextEventExt: public wxClipboardTextEvent
{
public:
  wxClipboardTextEventExt(wxEventType type = wxEVT_NULL, wxWindowID winid = 0): wxClipboardTextEvent(type, winid)  {  }
  wxClipboardTextEventExt(wxClipboardTextEvent const& event): wxClipboardTextEvent(event)  {  }
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
  wxClipboardTextEventExt(wxClipboardTextEventExtGetClassInfoFunc a_GetClassInfo): wxClipboardTextEvent() {
    m_wxClipboardTextEventExtGetClassInfo = a_GetClassInfo;
  }
};

class wxContextMenuEventExt: public wxContextMenuEvent
{
public:
  wxContextMenuEventExt(wxEventType type = wxEVT_NULL, wxWindowID winid = 0, wxPoint const& pt = wxDefaultPosition): wxContextMenuEvent(type, winid, pt)  {  }
  wxContextMenuEventExt(wxContextMenuEvent const& event): wxContextMenuEvent(event)  {  }
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
  wxContextMenuEventExt(wxContextMenuEventExtGetClassInfoFunc a_GetClassInfo): wxContextMenuEvent() {
    m_wxContextMenuEventExtGetClassInfo = a_GetClassInfo;
  }
};

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
    using wxEventTableEntryPointerArray::wxEventTableEntryPointerArray;
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
  wxEvtHandlerExtProcessEventFunc m_wxEvtHandlerExtProcessEvent = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxEvtHandler::ProcessEvent(event);
    if (*m_wxEvtHandlerExtProcessEvent != NULL){
      return m_wxEvtHandlerExtProcessEvent(this, event);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtQueueEventFunc m_wxEvtHandlerExtQueueEvent = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxEvtHandler::QueueEvent(event);
    if (*m_wxEvtHandlerExtQueueEvent != NULL){
      return m_wxEvtHandlerExtQueueEvent(this, event);
    }
  }
  wxEvtHandlerExtSearchEventTableFunc m_wxEvtHandlerExtSearchEventTable = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxEvtHandler::SearchEventTable(table, event);
    if (*m_wxEvtHandlerExtSearchEventTable != NULL){
      return m_wxEvtHandlerExtSearchEventTable(this, table, event);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtTryBeforeFunc m_wxEvtHandlerExtTryBefore = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxEvtHandler::TryBefore(event);
    if (*m_wxEvtHandlerExtTryBefore != NULL){
      return m_wxEvtHandlerExtTryBefore(this, event);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtTryAfterFunc m_wxEvtHandlerExtTryAfter = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxEvtHandler::TryAfter(event);
    if (*m_wxEvtHandlerExtTryAfter != NULL){
      return m_wxEvtHandlerExtTryAfter(this, event);
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
  wxEvtHandlerExtDoSetClientObjectFunc m_wxEvtHandlerExtDoSetClientObject = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxEvtHandler::DoSetClientObject(data);
    if (*m_wxEvtHandlerExtDoSetClientObject != NULL){
      return m_wxEvtHandlerExtDoSetClientObject(this, data);
    }
  }
  wxEvtHandlerExtDoGetClientObjectFunc m_wxEvtHandlerExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxEvtHandler::DoGetClientObject();
    if (*m_wxEvtHandlerExtDoGetClientObject != NULL){
      return m_wxEvtHandlerExtDoGetClientObject(this);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtDoSetClientDataFunc m_wxEvtHandlerExtDoSetClientData = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxEvtHandler::DoSetClientData(data);
    if (*m_wxEvtHandlerExtDoSetClientData != NULL){
      return m_wxEvtHandlerExtDoSetClientData(this, data);
    }
  }
  wxEvtHandlerExtDoGetClientDataFunc m_wxEvtHandlerExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxEvtHandler::DoGetClientData();
    if (*m_wxEvtHandlerExtDoGetClientData != NULL){
      return m_wxEvtHandlerExtDoGetClientData(this);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtWXReservedEvtHandler1Func m_wxEvtHandlerExtWXReservedEvtHandler1 = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxEvtHandler::WXReservedEvtHandler1(param0);
    if (*m_wxEvtHandlerExtWXReservedEvtHandler1 != NULL){
      return m_wxEvtHandlerExtWXReservedEvtHandler1(this, param0);
    }
    else {
      return res;
    }
  }
  wxEvtHandlerExtWXReservedEvtHandler2Func m_wxEvtHandlerExtWXReservedEvtHandler2 = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxEvtHandler::WXReservedEvtHandler2(param0);
    if (*m_wxEvtHandlerExtWXReservedEvtHandler2 != NULL){
      return m_wxEvtHandlerExtWXReservedEvtHandler2(this, param0);
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
  wxEvtHandlerExt(wxEvtHandlerExtProcessEventFunc a_ProcessEvent, wxEvtHandlerExtQueueEventFunc a_QueueEvent, wxEvtHandlerExtSearchEventTableFunc a_SearchEventTable, wxEvtHandlerExtTryBeforeFunc a_TryBefore, wxEvtHandlerExtTryAfterFunc a_TryAfter, wxEvtHandlerExtGetEventTableFunc a_GetEventTable, wxEvtHandlerExtGetEventHashTableFunc a_GetEventHashTable, wxEvtHandlerExtDoSetClientObjectFunc a_DoSetClientObject, wxEvtHandlerExtDoGetClientObjectFunc a_DoGetClientObject, wxEvtHandlerExtDoSetClientDataFunc a_DoSetClientData, wxEvtHandlerExtDoGetClientDataFunc a_DoGetClientData, wxEvtHandlerExtWXReservedEvtHandler1Func a_WXReservedEvtHandler1, wxEvtHandlerExtWXReservedEvtHandler2Func a_WXReservedEvtHandler2, wxEvtHandlerExtGetClassInfoFunc a_GetClassInfo): wxEvtHandler() {
    m_wxEvtHandlerExtProcessEvent = a_ProcessEvent;
    m_wxEvtHandlerExtQueueEvent = a_QueueEvent;
    m_wxEvtHandlerExtSearchEventTable = a_SearchEventTable;
    m_wxEvtHandlerExtTryBefore = a_TryBefore;
    m_wxEvtHandlerExtTryAfter = a_TryAfter;
    m_wxEvtHandlerExtGetEventTable = a_GetEventTable;
    m_wxEvtHandlerExtGetEventHashTable = a_GetEventHashTable;
    m_wxEvtHandlerExtDoSetClientObject = a_DoSetClientObject;
    m_wxEvtHandlerExtDoGetClientObject = a_DoGetClientObject;
    m_wxEvtHandlerExtDoSetClientData = a_DoSetClientData;
    m_wxEvtHandlerExtDoGetClientData = a_DoGetClientData;
    m_wxEvtHandlerExtWXReservedEvtHandler1 = a_WXReservedEvtHandler1;
    m_wxEvtHandlerExtWXReservedEvtHandler2 = a_WXReservedEvtHandler2;
    m_wxEvtHandlerExtGetClassInfo = a_GetClassInfo;
  }
};

class wxEvtHandlerArrayExt: public wxEvtHandlerArray
{
public:
    using wxEvtHandlerArray::wxEvtHandlerArray;
};

class wxEventConnectionRefExt: public wxEventConnectionRef
{
public:
  wxEventConnectionRefExt(): wxEventConnectionRef()  {  }
  wxEventConnectionRefExt(wxEvtHandler* src, wxEvtHandler* sink): wxEventConnectionRef(src, sink)  {  }
};

class wxEventBlockerExt: public wxEventBlocker
{
public:
  wxEventBlockerExt(wxWindow* win, wxEventType type = ((wxEventType)-1)): wxEventBlocker(win, type)  {  }
  virtual ~wxEventBlockerExt() override  {  }
  wxEventBlockerExtProcessEventFunc m_wxEventBlockerExtProcessEvent = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxEventBlocker::ProcessEvent(event);
    if (*m_wxEventBlockerExtProcessEvent != NULL){
      return m_wxEventBlockerExtProcessEvent(this, event);
    }
    else {
      return res;
    }
  }
  wxEventBlockerExt(wxEventBlockerExtProcessEventFunc a_ProcessEvent, wxWindow* win, wxEventType type = ((wxEventType)-1)): wxEventBlocker(win, type) {
    m_wxEventBlockerExtProcessEvent = a_ProcessEvent;
  }
};



#endif
