#ifndef _WX_OSX_WINDOW_H_EXT_
#define _WX_OSX_WINDOW_H_EXT_

class wxWindowMacExt;
typedef wxClassInfo* (*wxWindowMacExtGetClassInfoFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtSendSizeEventFunc)(const wxWindowMacExt* self, int flags);
typedef void (*wxWindowMacExtSetLabelFunc)(const wxWindowMacExt* self, wxString const& label);
typedef wxString (*wxWindowMacExtGetLabelFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtRaiseFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtLowerFunc)(const wxWindowMacExt* self);
typedef bool (*wxWindowMacExtShowFunc)(const wxWindowMacExt* self, bool show);
typedef bool (*wxWindowMacExtShowWithEffectFunc)(const wxWindowMacExt* self, wxShowEffect effect, unsigned int timeout);
typedef bool (*wxWindowMacExtHideWithEffectFunc)(const wxWindowMacExt* self, wxShowEffect effect, unsigned int timeout);
typedef void (*wxWindowMacExtSetFocusFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtWarpPointerFunc)(const wxWindowMacExt* self, int x, int y);
typedef bool (*wxWindowMacExtEnableTouchEventsFunc)(const wxWindowMacExt* self, int eventsMask);
typedef void (*wxWindowMacExtRefreshFunc)(const wxWindowMacExt* self, bool eraseBackground, wxRect const* rect);
typedef void (*wxWindowMacExtUpdateFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtClearBackgroundFunc)(const wxWindowMacExt* self);
typedef bool (*wxWindowMacExtSetCursorFunc)(const wxWindowMacExt* self, wxCursor const& cursor);
typedef bool (*wxWindowMacExtSetFontFunc)(const wxWindowMacExt* self, wxFont const& font);
typedef bool (*wxWindowMacExtSetBackgroundColourFunc)(const wxWindowMacExt* self, wxColour const& colour);
typedef bool (*wxWindowMacExtSetForegroundColourFunc)(const wxWindowMacExt* self, wxColour const& colour);
typedef bool (*wxWindowMacExtSetBackgroundStyleFunc)(const wxWindowMacExt* self, wxBackgroundStyle style);
typedef bool (*wxWindowMacExtIsTransparentBackgroundSupportedFunc)(const wxWindowMacExt* self, wxString* reason);
typedef int (*wxWindowMacExtGetCharHeightFunc)(const wxWindowMacExt* self);
typedef int (*wxWindowMacExtGetCharWidthFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtSetScrollbarFunc)(const wxWindowMacExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxWindowMacExtSetScrollPosFunc)(const wxWindowMacExt* self, int orient, int pos, bool refresh);
typedef int (*wxWindowMacExtGetScrollPosFunc)(const wxWindowMacExt* self, int orient);
typedef int (*wxWindowMacExtGetScrollThumbFunc)(const wxWindowMacExt* self, int orient);
typedef int (*wxWindowMacExtGetScrollRangeFunc)(const wxWindowMacExt* self, int orient);
typedef void (*wxWindowMacExtScrollWindowFunc)(const wxWindowMacExt* self, int dx, int dy, wxRect const* rect);
typedef void (*wxWindowMacExtAlwaysShowScrollbarsFunc)(const wxWindowMacExt* self, bool horz, bool vert);
typedef bool (*wxWindowMacExtIsScrollbarAlwaysShownFunc)(const wxWindowMacExt* self, int orient);
typedef bool (*wxWindowMacExtReparentFunc)(const wxWindowMacExt* self, wxWindowBase* newParent);
typedef bool (*wxWindowMacExtRegisterHotKeyFunc)(const wxWindowMacExt* self, int hotkeyId, int modifiers, int keycode);
typedef bool (*wxWindowMacExtUnregisterHotKeyFunc)(const wxWindowMacExt* self, int hotkeyId);
typedef wxSize (*wxWindowMacExtGetDPIFunc)(const wxWindowMacExt* self);
typedef double (*wxWindowMacExtGetDPIScaleFactorFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtSetDropTargetFunc)(const wxWindowMacExt* self, wxDropTarget* dropTarget);
typedef wxString (*wxWindowMacExtMacGetToolTipStringFunc)(const wxWindowMacExt* self, wxPoint& where);
typedef WXWidget (*wxWindowMacExtGetHandleFunc)(const wxWindowMacExt* self);
typedef bool (*wxWindowMacExtSetTransparentFunc)(const wxWindowMacExt* self, wxByte alpha);
typedef bool (*wxWindowMacExtCanSetTransparentFunc)(const wxWindowMacExt* self);
typedef wxByte (*wxWindowMacExtGetTransparentFunc)(const wxWindowMacExt* self);
typedef bool (*wxWindowMacExtAcceptsFocusFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtEnableVisibleFocusFunc)(const wxWindowMacExt* self, bool enabled);
typedef bool (*wxWindowMacExtIsDoubleBufferedFunc)(const wxWindowMacExt* self);
typedef wxPoint (*wxWindowMacExtGetClientAreaOriginFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtTriggerScrollEventFunc)(const wxWindowMacExt* self, int scrollEvent);
typedef void (*wxWindowMacExtRemoveChildFunc)(const wxWindowMacExt* self, wxWindowBase* child);
typedef bool (*wxWindowMacExtMacDoRedrawFunc)(const wxWindowMacExt* self, long time);
typedef void (*wxWindowMacExtMacPaintChildrenBordersFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtMacPaintBordersFunc)(const wxWindowMacExt* self, int left, int top);
typedef long (*wxWindowMacExtMacGetWXBorderSizeFunc)(const wxWindowMacExt* self);
typedef long (*wxWindowMacExtMacGetLeftBorderSizeFunc)(const wxWindowMacExt* self);
typedef long (*wxWindowMacExtMacGetRightBorderSizeFunc)(const wxWindowMacExt* self);
typedef long (*wxWindowMacExtMacGetTopBorderSizeFunc)(const wxWindowMacExt* self);
typedef long (*wxWindowMacExtMacGetBottomBorderSizeFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtMacSuperChangedPositionFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtMacTopLevelWindowChangedPositionFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtMacChildAddedFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtMacVisibilityChangedFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtMacEnabledStateChangedFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtMacHiliteChangedFunc)(const wxWindowMacExt* self);
typedef wxInt32 (*wxWindowMacExtMacControlHitFunc)(const wxWindowMacExt* self, WXEVENTHANDLERREF handler, WXEVENTREF event);
typedef bool (*wxWindowMacExtMacSetupCursorFunc)(const wxWindowMacExt* self, wxPoint const& pt);
typedef bool (*wxWindowMacExtMacClipGrandChildrenFunc)(const wxWindowMacExt* self);
typedef bool (*wxWindowMacExtIsClientAreaChildFunc)(const wxWindowMacExt* self, wxWindow const* child);
typedef void* (*wxWindowMacExtOSXGetViewOrWindowFunc)(const wxWindowMacExt* self);
typedef bool (*wxWindowMacExtOSXHandleClickedFunc)(const wxWindowMacExt* self, double timestampsec);
typedef bool (*wxWindowMacExtOSXHandleKeyEventFunc)(const wxWindowMacExt* self, wxKeyEvent& event);
typedef void (*wxWindowMacExtOSXSimulateFocusEventsFunc)(const wxWindowMacExt* self);
typedef double (*wxWindowMacExtGetContentScaleFactorFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtMacOnInternalSizeFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtOSXAfterMenuEventFunc)(const wxWindowMacExt* self);
typedef bool (*wxWindowMacExtMacIsChildOfClientAreaFunc)(const wxWindowMacExt* self, wxWindow const* child);
typedef void (*wxWindowMacExtDoGetTextExtentFunc)(const wxWindowMacExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef void (*wxWindowMacExtDoEnableFunc)(const wxWindowMacExt* self, bool enable);
typedef bool (*wxWindowMacExtDoPopupMenuFunc)(const wxWindowMacExt* self, wxMenu* menu, int x, int y);
typedef void (*wxWindowMacExtDoFreezeFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtDoThawFunc)(const wxWindowMacExt* self);
typedef wxSize (*wxWindowMacExtDoGetBestSizeFunc)(const wxWindowMacExt* self);
typedef wxSize (*wxWindowMacExtDoGetSizeFromClientSizeFunc)(const wxWindowMacExt* self, wxSize const& size);
typedef void (*wxWindowMacExtDoClientToScreenFunc)(const wxWindowMacExt* self, int* x, int* y);
typedef void (*wxWindowMacExtDoScreenToClientFunc)(const wxWindowMacExt* self, int* x, int* y);
typedef void (*wxWindowMacExtDoGetPositionFunc)(const wxWindowMacExt* self, int* x, int* y);
typedef void (*wxWindowMacExtDoGetSizeFunc)(const wxWindowMacExt* self, int* width, int* height);
typedef void (*wxWindowMacExtDoGetClientSizeFunc)(const wxWindowMacExt* self, int* width, int* height);
typedef void (*wxWindowMacExtDoSetSizeFunc)(const wxWindowMacExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxWindowMacExtDoSetClientSizeFunc)(const wxWindowMacExt* self, int width, int height);
typedef void (*wxWindowMacExtDoCaptureMouseFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtDoReleaseMouseFunc)(const wxWindowMacExt* self);
typedef void (*wxWindowMacExtDoMoveWindowFunc)(const wxWindowMacExt* self, int x, int y, int width, int height);
typedef void (*wxWindowMacExtDoSetWindowVariantFunc)(const wxWindowMacExt* self, wxWindowVariant variant);
typedef void (*wxWindowMacExtDoSetToolTipFunc)(const wxWindowMacExt* self, wxToolTip* tip);
typedef bool (*wxWindowMacExtOSXShowWithEffectFunc)(const wxWindowMacExt* self, bool show, wxShowEffect effect, unsigned int timeout);

class wxWindowMacExt: public wxWindowMac
{
public:
  wxWindowMacExtGetClassInfoFunc m_wxWindowMacExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxWindowMac::GetClassInfo();
    if (*m_wxWindowMacExtGetClassInfo != NULL){
      return m_wxWindowMacExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExt(): wxWindowMac()  {  }
  wxWindowMacExt(wxWindowMac* parent, wxWindowID id, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = 0, wxString const& name = wxString::FromAscii(wxPanelNameStr)): wxWindowMac(parent, id, pos, size, style, name)  {  }
  virtual ~wxWindowMacExt()  {  }
  wxWindowMacExtSendSizeEventFunc m_wxWindowMacExtSendSizeEvent = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxWindowMac::SendSizeEvent(flags);
    if (*m_wxWindowMacExtSendSizeEvent != NULL){
      return m_wxWindowMacExtSendSizeEvent(this, flags);
    }
  }
  wxWindowMacExtSetLabelFunc m_wxWindowMacExtSetLabel = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxWindowMac::SetLabel(label);
    if (*m_wxWindowMacExtSetLabel != NULL){
      return m_wxWindowMacExtSetLabel(this, label);
    }
  }
  wxWindowMacExtGetLabelFunc m_wxWindowMacExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxWindowMac::GetLabel();
    if (*m_wxWindowMacExtGetLabel != NULL){
      return m_wxWindowMacExtGetLabel(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtRaiseFunc m_wxWindowMacExtRaise = NULL;
  virtual void Raise() override
  {
    wxWindowMac::Raise();
    if (*m_wxWindowMacExtRaise != NULL){
      return m_wxWindowMacExtRaise(this);
    }
  }
  wxWindowMacExtLowerFunc m_wxWindowMacExtLower = NULL;
  virtual void Lower() override
  {
    wxWindowMac::Lower();
    if (*m_wxWindowMacExtLower != NULL){
      return m_wxWindowMacExtLower(this);
    }
  }
  wxWindowMacExtShowFunc m_wxWindowMacExtShow = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxWindowMac::Show(show);
    if (*m_wxWindowMacExtShow != NULL){
      return m_wxWindowMacExtShow(this, show);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtShowWithEffectFunc m_wxWindowMacExtShowWithEffect = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxWindowMac::ShowWithEffect(effect, timeout);
    if (*m_wxWindowMacExtShowWithEffect != NULL){
      return m_wxWindowMacExtShowWithEffect(this, effect, timeout);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtHideWithEffectFunc m_wxWindowMacExtHideWithEffect = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxWindowMac::HideWithEffect(effect, timeout);
    if (*m_wxWindowMacExtHideWithEffect != NULL){
      return m_wxWindowMacExtHideWithEffect(this, effect, timeout);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtSetFocusFunc m_wxWindowMacExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxWindowMac::SetFocus();
    if (*m_wxWindowMacExtSetFocus != NULL){
      return m_wxWindowMacExtSetFocus(this);
    }
  }
  wxWindowMacExtWarpPointerFunc m_wxWindowMacExtWarpPointer = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxWindowMac::WarpPointer(x, y);
    if (*m_wxWindowMacExtWarpPointer != NULL){
      return m_wxWindowMacExtWarpPointer(this, x, y);
    }
  }
  wxWindowMacExtEnableTouchEventsFunc m_wxWindowMacExtEnableTouchEvents = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxWindowMac::EnableTouchEvents(eventsMask);
    if (*m_wxWindowMacExtEnableTouchEvents != NULL){
      return m_wxWindowMacExtEnableTouchEvents(this, eventsMask);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtRefreshFunc m_wxWindowMacExtRefresh = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxWindowMac::Refresh(eraseBackground, rect);
    if (*m_wxWindowMacExtRefresh != NULL){
      return m_wxWindowMacExtRefresh(this, eraseBackground, rect);
    }
  }
  wxWindowMacExtUpdateFunc m_wxWindowMacExtUpdate = NULL;
  virtual void Update() override
  {
    wxWindowMac::Update();
    if (*m_wxWindowMacExtUpdate != NULL){
      return m_wxWindowMacExtUpdate(this);
    }
  }
  wxWindowMacExtClearBackgroundFunc m_wxWindowMacExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxWindowMac::ClearBackground();
    if (*m_wxWindowMacExtClearBackground != NULL){
      return m_wxWindowMacExtClearBackground(this);
    }
  }
  wxWindowMacExtSetCursorFunc m_wxWindowMacExtSetCursor = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxWindowMac::SetCursor(cursor);
    if (*m_wxWindowMacExtSetCursor != NULL){
      return m_wxWindowMacExtSetCursor(this, cursor);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtSetFontFunc m_wxWindowMacExtSetFont = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxWindowMac::SetFont(font);
    if (*m_wxWindowMacExtSetFont != NULL){
      return m_wxWindowMacExtSetFont(this, font);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtSetBackgroundColourFunc m_wxWindowMacExtSetBackgroundColour = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxWindowMac::SetBackgroundColour(colour);
    if (*m_wxWindowMacExtSetBackgroundColour != NULL){
      return m_wxWindowMacExtSetBackgroundColour(this, colour);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtSetForegroundColourFunc m_wxWindowMacExtSetForegroundColour = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxWindowMac::SetForegroundColour(colour);
    if (*m_wxWindowMacExtSetForegroundColour != NULL){
      return m_wxWindowMacExtSetForegroundColour(this, colour);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtSetBackgroundStyleFunc m_wxWindowMacExtSetBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxWindowMac::SetBackgroundStyle(style);
    if (*m_wxWindowMacExtSetBackgroundStyle != NULL){
      return m_wxWindowMacExtSetBackgroundStyle(this, style);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtIsTransparentBackgroundSupportedFunc m_wxWindowMacExtIsTransparentBackgroundSupported = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxWindowMac::IsTransparentBackgroundSupported(reason);
    if (*m_wxWindowMacExtIsTransparentBackgroundSupported != NULL){
      return m_wxWindowMacExtIsTransparentBackgroundSupported(this, reason);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtGetCharHeightFunc m_wxWindowMacExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxWindowMac::GetCharHeight();
    if (*m_wxWindowMacExtGetCharHeight != NULL){
      return m_wxWindowMacExtGetCharHeight(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtGetCharWidthFunc m_wxWindowMacExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxWindowMac::GetCharWidth();
    if (*m_wxWindowMacExtGetCharWidth != NULL){
      return m_wxWindowMacExtGetCharWidth(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtSetScrollbarFunc m_wxWindowMacExtSetScrollbar = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxWindowMac::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxWindowMacExtSetScrollbar != NULL){
      return m_wxWindowMacExtSetScrollbar(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxWindowMacExtSetScrollPosFunc m_wxWindowMacExtSetScrollPos = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxWindowMac::SetScrollPos(orient, pos, refresh);
    if (*m_wxWindowMacExtSetScrollPos != NULL){
      return m_wxWindowMacExtSetScrollPos(this, orient, pos, refresh);
    }
  }
  wxWindowMacExtGetScrollPosFunc m_wxWindowMacExtGetScrollPos = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxWindowMac::GetScrollPos(orient);
    if (*m_wxWindowMacExtGetScrollPos != NULL){
      return m_wxWindowMacExtGetScrollPos(this, orient);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtGetScrollThumbFunc m_wxWindowMacExtGetScrollThumb = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxWindowMac::GetScrollThumb(orient);
    if (*m_wxWindowMacExtGetScrollThumb != NULL){
      return m_wxWindowMacExtGetScrollThumb(this, orient);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtGetScrollRangeFunc m_wxWindowMacExtGetScrollRange = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxWindowMac::GetScrollRange(orient);
    if (*m_wxWindowMacExtGetScrollRange != NULL){
      return m_wxWindowMacExtGetScrollRange(this, orient);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtScrollWindowFunc m_wxWindowMacExtScrollWindow = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxWindowMac::ScrollWindow(dx, dy, rect);
    if (*m_wxWindowMacExtScrollWindow != NULL){
      return m_wxWindowMacExtScrollWindow(this, dx, dy, rect);
    }
  }
  wxWindowMacExtAlwaysShowScrollbarsFunc m_wxWindowMacExtAlwaysShowScrollbars = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxWindowMac::AlwaysShowScrollbars(horz, vert);
    if (*m_wxWindowMacExtAlwaysShowScrollbars != NULL){
      return m_wxWindowMacExtAlwaysShowScrollbars(this, horz, vert);
    }
  }
  wxWindowMacExtIsScrollbarAlwaysShownFunc m_wxWindowMacExtIsScrollbarAlwaysShown = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxWindowMac::IsScrollbarAlwaysShown(orient);
    if (*m_wxWindowMacExtIsScrollbarAlwaysShown != NULL){
      return m_wxWindowMacExtIsScrollbarAlwaysShown(this, orient);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtReparentFunc m_wxWindowMacExtReparent = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxWindowMac::Reparent(newParent);
    if (*m_wxWindowMacExtReparent != NULL){
      return m_wxWindowMacExtReparent(this, newParent);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtRegisterHotKeyFunc m_wxWindowMacExtRegisterHotKey = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxWindowMac::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxWindowMacExtRegisterHotKey != NULL){
      return m_wxWindowMacExtRegisterHotKey(this, hotkeyId, modifiers, keycode);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtUnregisterHotKeyFunc m_wxWindowMacExtUnregisterHotKey = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxWindowMac::UnregisterHotKey(hotkeyId);
    if (*m_wxWindowMacExtUnregisterHotKey != NULL){
      return m_wxWindowMacExtUnregisterHotKey(this, hotkeyId);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtGetDPIFunc m_wxWindowMacExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxWindowMac::GetDPI();
    if (*m_wxWindowMacExtGetDPI != NULL){
      return m_wxWindowMacExtGetDPI(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtGetDPIScaleFactorFunc m_wxWindowMacExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxWindowMac::GetDPIScaleFactor();
    if (*m_wxWindowMacExtGetDPIScaleFactor != NULL){
      return m_wxWindowMacExtGetDPIScaleFactor(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtSetDropTargetFunc m_wxWindowMacExtSetDropTarget = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxWindowMac::SetDropTarget(dropTarget);
    if (*m_wxWindowMacExtSetDropTarget != NULL){
      return m_wxWindowMacExtSetDropTarget(this, dropTarget);
    }
  }
  wxWindowMacExtMacGetToolTipStringFunc m_wxWindowMacExtMacGetToolTipString = NULL;
  virtual wxString MacGetToolTipString(wxPoint& where) override
  {
    wxString res = wxWindowMac::MacGetToolTipString(where);
    if (*m_wxWindowMacExtMacGetToolTipString != NULL){
      return m_wxWindowMacExtMacGetToolTipString(this, where);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtGetHandleFunc m_wxWindowMacExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxWindowMac::GetHandle();
    if (*m_wxWindowMacExtGetHandle != NULL){
      return m_wxWindowMacExtGetHandle(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtSetTransparentFunc m_wxWindowMacExtSetTransparent = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxWindowMac::SetTransparent(alpha);
    if (*m_wxWindowMacExtSetTransparent != NULL){
      return m_wxWindowMacExtSetTransparent(this, alpha);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtCanSetTransparentFunc m_wxWindowMacExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxWindowMac::CanSetTransparent();
    if (*m_wxWindowMacExtCanSetTransparent != NULL){
      return m_wxWindowMacExtCanSetTransparent(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtGetTransparentFunc m_wxWindowMacExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxWindowMac::GetTransparent();
    if (*m_wxWindowMacExtGetTransparent != NULL){
      return m_wxWindowMacExtGetTransparent(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtAcceptsFocusFunc m_wxWindowMacExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxWindowMac::AcceptsFocus();
    if (*m_wxWindowMacExtAcceptsFocus != NULL){
      return m_wxWindowMacExtAcceptsFocus(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtEnableVisibleFocusFunc m_wxWindowMacExtEnableVisibleFocus = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxWindowMac::EnableVisibleFocus(enabled);
    if (*m_wxWindowMacExtEnableVisibleFocus != NULL){
      return m_wxWindowMacExtEnableVisibleFocus(this, enabled);
    }
  }
  wxWindowMacExtIsDoubleBufferedFunc m_wxWindowMacExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxWindowMac::IsDoubleBuffered();
    if (*m_wxWindowMacExtIsDoubleBuffered != NULL){
      return m_wxWindowMacExtIsDoubleBuffered(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtGetClientAreaOriginFunc m_wxWindowMacExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxWindowMac::GetClientAreaOrigin();
    if (*m_wxWindowMacExtGetClientAreaOrigin != NULL){
      return m_wxWindowMacExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtTriggerScrollEventFunc m_wxWindowMacExtTriggerScrollEvent = NULL;
  virtual void TriggerScrollEvent(int scrollEvent) override
  {
    wxWindowMac::TriggerScrollEvent(scrollEvent);
    if (*m_wxWindowMacExtTriggerScrollEvent != NULL){
      return m_wxWindowMacExtTriggerScrollEvent(this, scrollEvent);
    }
  }
  wxWindowMacExtRemoveChildFunc m_wxWindowMacExtRemoveChild = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxWindowMac::RemoveChild(child);
    if (*m_wxWindowMacExtRemoveChild != NULL){
      return m_wxWindowMacExtRemoveChild(this, child);
    }
  }
  wxWindowMacExtMacDoRedrawFunc m_wxWindowMacExtMacDoRedraw = NULL;
  virtual bool MacDoRedraw(long time) override
  {
    bool res = wxWindowMac::MacDoRedraw(time);
    if (*m_wxWindowMacExtMacDoRedraw != NULL){
      return m_wxWindowMacExtMacDoRedraw(this, time);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtMacPaintChildrenBordersFunc m_wxWindowMacExtMacPaintChildrenBorders = NULL;
  virtual void MacPaintChildrenBorders() override
  {
    wxWindowMac::MacPaintChildrenBorders();
    if (*m_wxWindowMacExtMacPaintChildrenBorders != NULL){
      return m_wxWindowMacExtMacPaintChildrenBorders(this);
    }
  }
  wxWindowMacExtMacPaintBordersFunc m_wxWindowMacExtMacPaintBorders = NULL;
  virtual void MacPaintBorders(int left, int top) override
  {
    wxWindowMac::MacPaintBorders(left, top);
    if (*m_wxWindowMacExtMacPaintBorders != NULL){
      return m_wxWindowMacExtMacPaintBorders(this, left, top);
    }
  }
  wxWindowMacExtMacGetWXBorderSizeFunc m_wxWindowMacExtMacGetWXBorderSize = NULL;
  virtual long MacGetWXBorderSize() const override
  {
    long res = wxWindowMac::MacGetWXBorderSize();
    if (*m_wxWindowMacExtMacGetWXBorderSize != NULL){
      return m_wxWindowMacExtMacGetWXBorderSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtMacGetLeftBorderSizeFunc m_wxWindowMacExtMacGetLeftBorderSize = NULL;
  virtual long MacGetLeftBorderSize() const override
  {
    long res = wxWindowMac::MacGetLeftBorderSize();
    if (*m_wxWindowMacExtMacGetLeftBorderSize != NULL){
      return m_wxWindowMacExtMacGetLeftBorderSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtMacGetRightBorderSizeFunc m_wxWindowMacExtMacGetRightBorderSize = NULL;
  virtual long MacGetRightBorderSize() const override
  {
    long res = wxWindowMac::MacGetRightBorderSize();
    if (*m_wxWindowMacExtMacGetRightBorderSize != NULL){
      return m_wxWindowMacExtMacGetRightBorderSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtMacGetTopBorderSizeFunc m_wxWindowMacExtMacGetTopBorderSize = NULL;
  virtual long MacGetTopBorderSize() const override
  {
    long res = wxWindowMac::MacGetTopBorderSize();
    if (*m_wxWindowMacExtMacGetTopBorderSize != NULL){
      return m_wxWindowMacExtMacGetTopBorderSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtMacGetBottomBorderSizeFunc m_wxWindowMacExtMacGetBottomBorderSize = NULL;
  virtual long MacGetBottomBorderSize() const override
  {
    long res = wxWindowMac::MacGetBottomBorderSize();
    if (*m_wxWindowMacExtMacGetBottomBorderSize != NULL){
      return m_wxWindowMacExtMacGetBottomBorderSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtMacSuperChangedPositionFunc m_wxWindowMacExtMacSuperChangedPosition = NULL;
  virtual void MacSuperChangedPosition() override
  {
    wxWindowMac::MacSuperChangedPosition();
    if (*m_wxWindowMacExtMacSuperChangedPosition != NULL){
      return m_wxWindowMacExtMacSuperChangedPosition(this);
    }
  }
  wxWindowMacExtMacTopLevelWindowChangedPositionFunc m_wxWindowMacExtMacTopLevelWindowChangedPosition = NULL;
  virtual void MacTopLevelWindowChangedPosition() override
  {
    wxWindowMac::MacTopLevelWindowChangedPosition();
    if (*m_wxWindowMacExtMacTopLevelWindowChangedPosition != NULL){
      return m_wxWindowMacExtMacTopLevelWindowChangedPosition(this);
    }
  }
  wxWindowMacExtMacChildAddedFunc m_wxWindowMacExtMacChildAdded = NULL;
  virtual void MacChildAdded() override
  {
    wxWindowMac::MacChildAdded();
    if (*m_wxWindowMacExtMacChildAdded != NULL){
      return m_wxWindowMacExtMacChildAdded(this);
    }
  }
  wxWindowMacExtMacVisibilityChangedFunc m_wxWindowMacExtMacVisibilityChanged = NULL;
  virtual void MacVisibilityChanged() override
  {
    wxWindowMac::MacVisibilityChanged();
    if (*m_wxWindowMacExtMacVisibilityChanged != NULL){
      return m_wxWindowMacExtMacVisibilityChanged(this);
    }
  }
  wxWindowMacExtMacEnabledStateChangedFunc m_wxWindowMacExtMacEnabledStateChanged = NULL;
  virtual void MacEnabledStateChanged() override
  {
    wxWindowMac::MacEnabledStateChanged();
    if (*m_wxWindowMacExtMacEnabledStateChanged != NULL){
      return m_wxWindowMacExtMacEnabledStateChanged(this);
    }
  }
  wxWindowMacExtMacHiliteChangedFunc m_wxWindowMacExtMacHiliteChanged = NULL;
  virtual void MacHiliteChanged() override
  {
    wxWindowMac::MacHiliteChanged();
    if (*m_wxWindowMacExtMacHiliteChanged != NULL){
      return m_wxWindowMacExtMacHiliteChanged(this);
    }
  }
  wxWindowMacExtMacControlHitFunc m_wxWindowMacExtMacControlHit = NULL;
  virtual wxInt32 MacControlHit(WXEVENTHANDLERREF handler, WXEVENTREF event) override
  {
    wxInt32 res = wxWindowMac::MacControlHit(handler, event);
    if (*m_wxWindowMacExtMacControlHit != NULL){
      return m_wxWindowMacExtMacControlHit(this, handler, event);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtMacSetupCursorFunc m_wxWindowMacExtMacSetupCursor = NULL;
  virtual bool MacSetupCursor(wxPoint const& pt) override
  {
    bool res = wxWindowMac::MacSetupCursor(pt);
    if (*m_wxWindowMacExtMacSetupCursor != NULL){
      return m_wxWindowMacExtMacSetupCursor(this, pt);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtMacClipGrandChildrenFunc m_wxWindowMacExtMacClipGrandChildren = NULL;
  virtual bool MacClipGrandChildren() const override
  {
    bool res = wxWindowMac::MacClipGrandChildren();
    if (*m_wxWindowMacExtMacClipGrandChildren != NULL){
      return m_wxWindowMacExtMacClipGrandChildren(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtIsClientAreaChildFunc m_wxWindowMacExtIsClientAreaChild = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxWindowMac::IsClientAreaChild(child);
    if (*m_wxWindowMacExtIsClientAreaChild != NULL){
      return m_wxWindowMacExtIsClientAreaChild(this, child);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtOSXGetViewOrWindowFunc m_wxWindowMacExtOSXGetViewOrWindow = NULL;
  virtual void* OSXGetViewOrWindow() const override
  {
    void* res = wxWindowMac::OSXGetViewOrWindow();
    if (*m_wxWindowMacExtOSXGetViewOrWindow != NULL){
      return m_wxWindowMacExtOSXGetViewOrWindow(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtOSXHandleClickedFunc m_wxWindowMacExtOSXHandleClicked = NULL;
  virtual bool OSXHandleClicked(double timestampsec) override
  {
    bool res = wxWindowMac::OSXHandleClicked(timestampsec);
    if (*m_wxWindowMacExtOSXHandleClicked != NULL){
      return m_wxWindowMacExtOSXHandleClicked(this, timestampsec);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtOSXHandleKeyEventFunc m_wxWindowMacExtOSXHandleKeyEvent = NULL;
  virtual bool OSXHandleKeyEvent(wxKeyEvent& event) override
  {
    bool res = wxWindowMac::OSXHandleKeyEvent(event);
    if (*m_wxWindowMacExtOSXHandleKeyEvent != NULL){
      return m_wxWindowMacExtOSXHandleKeyEvent(this, event);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtOSXSimulateFocusEventsFunc m_wxWindowMacExtOSXSimulateFocusEvents = NULL;
  virtual void OSXSimulateFocusEvents() override
  {
    wxWindowMac::OSXSimulateFocusEvents();
    if (*m_wxWindowMacExtOSXSimulateFocusEvents != NULL){
      return m_wxWindowMacExtOSXSimulateFocusEvents(this);
    }
  }
  wxWindowMacExtGetContentScaleFactorFunc m_wxWindowMacExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxWindowMac::GetContentScaleFactor();
    if (*m_wxWindowMacExtGetContentScaleFactor != NULL){
      return m_wxWindowMacExtGetContentScaleFactor(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtMacOnInternalSizeFunc m_wxWindowMacExtMacOnInternalSize = NULL;
  virtual void MacOnInternalSize() override
  {
    wxWindowMac::MacOnInternalSize();
    if (*m_wxWindowMacExtMacOnInternalSize != NULL){
      return m_wxWindowMacExtMacOnInternalSize(this);
    }
  }
  wxWindowMacExtOSXAfterMenuEventFunc m_wxWindowMacExtOSXAfterMenuEvent = NULL;
  virtual void OSXAfterMenuEvent() override
  {
    wxWindowMac::OSXAfterMenuEvent();
    if (*m_wxWindowMacExtOSXAfterMenuEvent != NULL){
      return m_wxWindowMacExtOSXAfterMenuEvent(this);
    }
  }
  wxWindowMacExtMacIsChildOfClientAreaFunc m_wxWindowMacExtMacIsChildOfClientArea = NULL;
  virtual bool MacIsChildOfClientArea(wxWindow const* child) const override
  {
    bool res = wxWindowMac::MacIsChildOfClientArea(child);
    if (*m_wxWindowMacExtMacIsChildOfClientArea != NULL){
      return m_wxWindowMacExtMacIsChildOfClientArea(this, child);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtDoGetTextExtentFunc m_wxWindowMacExtDoGetTextExtent = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxWindowMac::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxWindowMacExtDoGetTextExtent != NULL){
      return m_wxWindowMacExtDoGetTextExtent(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxWindowMacExtDoEnableFunc m_wxWindowMacExtDoEnable = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxWindowMac::DoEnable(enable);
    if (*m_wxWindowMacExtDoEnable != NULL){
      return m_wxWindowMacExtDoEnable(this, enable);
    }
  }
  wxWindowMacExtDoPopupMenuFunc m_wxWindowMacExtDoPopupMenu = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxWindowMac::DoPopupMenu(menu, x, y);
    if (*m_wxWindowMacExtDoPopupMenu != NULL){
      return m_wxWindowMacExtDoPopupMenu(this, menu, x, y);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtDoFreezeFunc m_wxWindowMacExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxWindowMac::DoFreeze();
    if (*m_wxWindowMacExtDoFreeze != NULL){
      return m_wxWindowMacExtDoFreeze(this);
    }
  }
  wxWindowMacExtDoThawFunc m_wxWindowMacExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxWindowMac::DoThaw();
    if (*m_wxWindowMacExtDoThaw != NULL){
      return m_wxWindowMacExtDoThaw(this);
    }
  }
  wxWindowMacExtDoGetBestSizeFunc m_wxWindowMacExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxWindowMac::DoGetBestSize();
    if (*m_wxWindowMacExtDoGetBestSize != NULL){
      return m_wxWindowMacExtDoGetBestSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtDoGetSizeFromClientSizeFunc m_wxWindowMacExtDoGetSizeFromClientSize = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxWindowMac::DoGetSizeFromClientSize(size);
    if (*m_wxWindowMacExtDoGetSizeFromClientSize != NULL){
      return m_wxWindowMacExtDoGetSizeFromClientSize(this, size);
    }
    else {
      return res;
    }
  }
  wxWindowMacExtDoClientToScreenFunc m_wxWindowMacExtDoClientToScreen = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxWindowMac::DoClientToScreen(x, y);
    if (*m_wxWindowMacExtDoClientToScreen != NULL){
      return m_wxWindowMacExtDoClientToScreen(this, x, y);
    }
  }
  wxWindowMacExtDoScreenToClientFunc m_wxWindowMacExtDoScreenToClient = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxWindowMac::DoScreenToClient(x, y);
    if (*m_wxWindowMacExtDoScreenToClient != NULL){
      return m_wxWindowMacExtDoScreenToClient(this, x, y);
    }
  }
  wxWindowMacExtDoGetPositionFunc m_wxWindowMacExtDoGetPosition = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxWindowMac::DoGetPosition(x, y);
    if (*m_wxWindowMacExtDoGetPosition != NULL){
      return m_wxWindowMacExtDoGetPosition(this, x, y);
    }
  }
  wxWindowMacExtDoGetSizeFunc m_wxWindowMacExtDoGetSize = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxWindowMac::DoGetSize(width, height);
    if (*m_wxWindowMacExtDoGetSize != NULL){
      return m_wxWindowMacExtDoGetSize(this, width, height);
    }
  }
  wxWindowMacExtDoGetClientSizeFunc m_wxWindowMacExtDoGetClientSize = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxWindowMac::DoGetClientSize(width, height);
    if (*m_wxWindowMacExtDoGetClientSize != NULL){
      return m_wxWindowMacExtDoGetClientSize(this, width, height);
    }
  }
  wxWindowMacExtDoSetSizeFunc m_wxWindowMacExtDoSetSize = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxWindowMac::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxWindowMacExtDoSetSize != NULL){
      return m_wxWindowMacExtDoSetSize(this, x, y, width, height, sizeFlags);
    }
  }
  wxWindowMacExtDoSetClientSizeFunc m_wxWindowMacExtDoSetClientSize = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxWindowMac::DoSetClientSize(width, height);
    if (*m_wxWindowMacExtDoSetClientSize != NULL){
      return m_wxWindowMacExtDoSetClientSize(this, width, height);
    }
  }
  wxWindowMacExtDoCaptureMouseFunc m_wxWindowMacExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxWindowMac::DoCaptureMouse();
    if (*m_wxWindowMacExtDoCaptureMouse != NULL){
      return m_wxWindowMacExtDoCaptureMouse(this);
    }
  }
  wxWindowMacExtDoReleaseMouseFunc m_wxWindowMacExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxWindowMac::DoReleaseMouse();
    if (*m_wxWindowMacExtDoReleaseMouse != NULL){
      return m_wxWindowMacExtDoReleaseMouse(this);
    }
  }
  wxWindowMacExtDoMoveWindowFunc m_wxWindowMacExtDoMoveWindow = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxWindowMac::DoMoveWindow(x, y, width, height);
    if (*m_wxWindowMacExtDoMoveWindow != NULL){
      return m_wxWindowMacExtDoMoveWindow(this, x, y, width, height);
    }
  }
  wxWindowMacExtDoSetWindowVariantFunc m_wxWindowMacExtDoSetWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxWindowMac::DoSetWindowVariant(variant);
    if (*m_wxWindowMacExtDoSetWindowVariant != NULL){
      return m_wxWindowMacExtDoSetWindowVariant(this, variant);
    }
  }
  wxWindowMacExtDoSetToolTipFunc m_wxWindowMacExtDoSetToolTip = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxWindowMac::DoSetToolTip(tip);
    if (*m_wxWindowMacExtDoSetToolTip != NULL){
      return m_wxWindowMacExtDoSetToolTip(this, tip);
    }
  }
  wxWindowMacExtOSXShowWithEffectFunc m_wxWindowMacExtOSXShowWithEffect = NULL;
  virtual bool OSXShowWithEffect(bool show, wxShowEffect effect, unsigned int timeout) override
  {
    bool res = wxWindowMac::OSXShowWithEffect(show, effect, timeout);
    if (*m_wxWindowMacExtOSXShowWithEffect != NULL){
      return m_wxWindowMacExtOSXShowWithEffect(this, show, effect, timeout);
    }
    else {
      return res;
    }
  }
  wxWindowMacExt(wxWindowMacExtGetClassInfoFunc a_GetClassInfo, wxWindowMacExtSendSizeEventFunc a_SendSizeEvent, wxWindowMacExtSetLabelFunc a_SetLabel, wxWindowMacExtGetLabelFunc a_GetLabel, wxWindowMacExtRaiseFunc a_Raise, wxWindowMacExtLowerFunc a_Lower, wxWindowMacExtShowFunc a_Show, wxWindowMacExtShowWithEffectFunc a_ShowWithEffect, wxWindowMacExtHideWithEffectFunc a_HideWithEffect, wxWindowMacExtSetFocusFunc a_SetFocus, wxWindowMacExtWarpPointerFunc a_WarpPointer, wxWindowMacExtEnableTouchEventsFunc a_EnableTouchEvents, wxWindowMacExtRefreshFunc a_Refresh, wxWindowMacExtUpdateFunc a_Update, wxWindowMacExtClearBackgroundFunc a_ClearBackground, wxWindowMacExtSetCursorFunc a_SetCursor, wxWindowMacExtSetFontFunc a_SetFont, wxWindowMacExtSetBackgroundColourFunc a_SetBackgroundColour, wxWindowMacExtSetForegroundColourFunc a_SetForegroundColour, wxWindowMacExtSetBackgroundStyleFunc a_SetBackgroundStyle, wxWindowMacExtIsTransparentBackgroundSupportedFunc a_IsTransparentBackgroundSupported, wxWindowMacExtGetCharHeightFunc a_GetCharHeight, wxWindowMacExtGetCharWidthFunc a_GetCharWidth, wxWindowMacExtSetScrollbarFunc a_SetScrollbar, wxWindowMacExtSetScrollPosFunc a_SetScrollPos, wxWindowMacExtGetScrollPosFunc a_GetScrollPos, wxWindowMacExtGetScrollThumbFunc a_GetScrollThumb, wxWindowMacExtGetScrollRangeFunc a_GetScrollRange, wxWindowMacExtScrollWindowFunc a_ScrollWindow, wxWindowMacExtAlwaysShowScrollbarsFunc a_AlwaysShowScrollbars, wxWindowMacExtIsScrollbarAlwaysShownFunc a_IsScrollbarAlwaysShown, wxWindowMacExtReparentFunc a_Reparent, wxWindowMacExtRegisterHotKeyFunc a_RegisterHotKey, wxWindowMacExtUnregisterHotKeyFunc a_UnregisterHotKey, wxWindowMacExtGetDPIFunc a_GetDPI, wxWindowMacExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxWindowMacExtSetDropTargetFunc a_SetDropTarget, wxWindowMacExtMacGetToolTipStringFunc a_MacGetToolTipString, wxWindowMacExtGetHandleFunc a_GetHandle, wxWindowMacExtSetTransparentFunc a_SetTransparent, wxWindowMacExtCanSetTransparentFunc a_CanSetTransparent, wxWindowMacExtGetTransparentFunc a_GetTransparent, wxWindowMacExtAcceptsFocusFunc a_AcceptsFocus, wxWindowMacExtEnableVisibleFocusFunc a_EnableVisibleFocus, wxWindowMacExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxWindowMacExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxWindowMacExtTriggerScrollEventFunc a_TriggerScrollEvent, wxWindowMacExtRemoveChildFunc a_RemoveChild, wxWindowMacExtMacDoRedrawFunc a_MacDoRedraw, wxWindowMacExtMacPaintChildrenBordersFunc a_MacPaintChildrenBorders, wxWindowMacExtMacPaintBordersFunc a_MacPaintBorders, wxWindowMacExtMacGetWXBorderSizeFunc a_MacGetWXBorderSize, wxWindowMacExtMacGetLeftBorderSizeFunc a_MacGetLeftBorderSize, wxWindowMacExtMacGetRightBorderSizeFunc a_MacGetRightBorderSize, wxWindowMacExtMacGetTopBorderSizeFunc a_MacGetTopBorderSize, wxWindowMacExtMacGetBottomBorderSizeFunc a_MacGetBottomBorderSize, wxWindowMacExtMacSuperChangedPositionFunc a_MacSuperChangedPosition, wxWindowMacExtMacTopLevelWindowChangedPositionFunc a_MacTopLevelWindowChangedPosition, wxWindowMacExtMacChildAddedFunc a_MacChildAdded, wxWindowMacExtMacVisibilityChangedFunc a_MacVisibilityChanged, wxWindowMacExtMacEnabledStateChangedFunc a_MacEnabledStateChanged, wxWindowMacExtMacHiliteChangedFunc a_MacHiliteChanged, wxWindowMacExtMacControlHitFunc a_MacControlHit, wxWindowMacExtMacSetupCursorFunc a_MacSetupCursor, wxWindowMacExtMacClipGrandChildrenFunc a_MacClipGrandChildren, wxWindowMacExtIsClientAreaChildFunc a_IsClientAreaChild, wxWindowMacExtOSXGetViewOrWindowFunc a_OSXGetViewOrWindow, wxWindowMacExtOSXHandleClickedFunc a_OSXHandleClicked, wxWindowMacExtOSXHandleKeyEventFunc a_OSXHandleKeyEvent, wxWindowMacExtOSXSimulateFocusEventsFunc a_OSXSimulateFocusEvents, wxWindowMacExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxWindowMacExtMacOnInternalSizeFunc a_MacOnInternalSize, wxWindowMacExtOSXAfterMenuEventFunc a_OSXAfterMenuEvent, wxWindowMacExtMacIsChildOfClientAreaFunc a_MacIsChildOfClientArea, wxWindowMacExtDoGetTextExtentFunc a_DoGetTextExtent, wxWindowMacExtDoEnableFunc a_DoEnable, wxWindowMacExtDoPopupMenuFunc a_DoPopupMenu, wxWindowMacExtDoFreezeFunc a_DoFreeze, wxWindowMacExtDoThawFunc a_DoThaw, wxWindowMacExtDoGetBestSizeFunc a_DoGetBestSize, wxWindowMacExtDoGetSizeFromClientSizeFunc a_DoGetSizeFromClientSize, wxWindowMacExtDoClientToScreenFunc a_DoClientToScreen, wxWindowMacExtDoScreenToClientFunc a_DoScreenToClient, wxWindowMacExtDoGetPositionFunc a_DoGetPosition, wxWindowMacExtDoGetSizeFunc a_DoGetSize, wxWindowMacExtDoGetClientSizeFunc a_DoGetClientSize, wxWindowMacExtDoSetSizeFunc a_DoSetSize, wxWindowMacExtDoSetClientSizeFunc a_DoSetClientSize, wxWindowMacExtDoCaptureMouseFunc a_DoCaptureMouse, wxWindowMacExtDoReleaseMouseFunc a_DoReleaseMouse, wxWindowMacExtDoMoveWindowFunc a_DoMoveWindow, wxWindowMacExtDoSetWindowVariantFunc a_DoSetWindowVariant, wxWindowMacExtDoSetToolTipFunc a_DoSetToolTip, wxWindowMacExtOSXShowWithEffectFunc a_OSXShowWithEffect): wxWindowMac() {
    m_wxWindowMacExtGetClassInfo = a_GetClassInfo;
    m_wxWindowMacExtSendSizeEvent = a_SendSizeEvent;
    m_wxWindowMacExtSetLabel = a_SetLabel;
    m_wxWindowMacExtGetLabel = a_GetLabel;
    m_wxWindowMacExtRaise = a_Raise;
    m_wxWindowMacExtLower = a_Lower;
    m_wxWindowMacExtShow = a_Show;
    m_wxWindowMacExtShowWithEffect = a_ShowWithEffect;
    m_wxWindowMacExtHideWithEffect = a_HideWithEffect;
    m_wxWindowMacExtSetFocus = a_SetFocus;
    m_wxWindowMacExtWarpPointer = a_WarpPointer;
    m_wxWindowMacExtEnableTouchEvents = a_EnableTouchEvents;
    m_wxWindowMacExtRefresh = a_Refresh;
    m_wxWindowMacExtUpdate = a_Update;
    m_wxWindowMacExtClearBackground = a_ClearBackground;
    m_wxWindowMacExtSetCursor = a_SetCursor;
    m_wxWindowMacExtSetFont = a_SetFont;
    m_wxWindowMacExtSetBackgroundColour = a_SetBackgroundColour;
    m_wxWindowMacExtSetForegroundColour = a_SetForegroundColour;
    m_wxWindowMacExtSetBackgroundStyle = a_SetBackgroundStyle;
    m_wxWindowMacExtIsTransparentBackgroundSupported = a_IsTransparentBackgroundSupported;
    m_wxWindowMacExtGetCharHeight = a_GetCharHeight;
    m_wxWindowMacExtGetCharWidth = a_GetCharWidth;
    m_wxWindowMacExtSetScrollbar = a_SetScrollbar;
    m_wxWindowMacExtSetScrollPos = a_SetScrollPos;
    m_wxWindowMacExtGetScrollPos = a_GetScrollPos;
    m_wxWindowMacExtGetScrollThumb = a_GetScrollThumb;
    m_wxWindowMacExtGetScrollRange = a_GetScrollRange;
    m_wxWindowMacExtScrollWindow = a_ScrollWindow;
    m_wxWindowMacExtAlwaysShowScrollbars = a_AlwaysShowScrollbars;
    m_wxWindowMacExtIsScrollbarAlwaysShown = a_IsScrollbarAlwaysShown;
    m_wxWindowMacExtReparent = a_Reparent;
    m_wxWindowMacExtRegisterHotKey = a_RegisterHotKey;
    m_wxWindowMacExtUnregisterHotKey = a_UnregisterHotKey;
    m_wxWindowMacExtGetDPI = a_GetDPI;
    m_wxWindowMacExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxWindowMacExtSetDropTarget = a_SetDropTarget;
    m_wxWindowMacExtMacGetToolTipString = a_MacGetToolTipString;
    m_wxWindowMacExtGetHandle = a_GetHandle;
    m_wxWindowMacExtSetTransparent = a_SetTransparent;
    m_wxWindowMacExtCanSetTransparent = a_CanSetTransparent;
    m_wxWindowMacExtGetTransparent = a_GetTransparent;
    m_wxWindowMacExtAcceptsFocus = a_AcceptsFocus;
    m_wxWindowMacExtEnableVisibleFocus = a_EnableVisibleFocus;
    m_wxWindowMacExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxWindowMacExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxWindowMacExtTriggerScrollEvent = a_TriggerScrollEvent;
    m_wxWindowMacExtRemoveChild = a_RemoveChild;
    m_wxWindowMacExtMacDoRedraw = a_MacDoRedraw;
    m_wxWindowMacExtMacPaintChildrenBorders = a_MacPaintChildrenBorders;
    m_wxWindowMacExtMacPaintBorders = a_MacPaintBorders;
    m_wxWindowMacExtMacGetWXBorderSize = a_MacGetWXBorderSize;
    m_wxWindowMacExtMacGetLeftBorderSize = a_MacGetLeftBorderSize;
    m_wxWindowMacExtMacGetRightBorderSize = a_MacGetRightBorderSize;
    m_wxWindowMacExtMacGetTopBorderSize = a_MacGetTopBorderSize;
    m_wxWindowMacExtMacGetBottomBorderSize = a_MacGetBottomBorderSize;
    m_wxWindowMacExtMacSuperChangedPosition = a_MacSuperChangedPosition;
    m_wxWindowMacExtMacTopLevelWindowChangedPosition = a_MacTopLevelWindowChangedPosition;
    m_wxWindowMacExtMacChildAdded = a_MacChildAdded;
    m_wxWindowMacExtMacVisibilityChanged = a_MacVisibilityChanged;
    m_wxWindowMacExtMacEnabledStateChanged = a_MacEnabledStateChanged;
    m_wxWindowMacExtMacHiliteChanged = a_MacHiliteChanged;
    m_wxWindowMacExtMacControlHit = a_MacControlHit;
    m_wxWindowMacExtMacSetupCursor = a_MacSetupCursor;
    m_wxWindowMacExtMacClipGrandChildren = a_MacClipGrandChildren;
    m_wxWindowMacExtIsClientAreaChild = a_IsClientAreaChild;
    m_wxWindowMacExtOSXGetViewOrWindow = a_OSXGetViewOrWindow;
    m_wxWindowMacExtOSXHandleClicked = a_OSXHandleClicked;
    m_wxWindowMacExtOSXHandleKeyEvent = a_OSXHandleKeyEvent;
    m_wxWindowMacExtOSXSimulateFocusEvents = a_OSXSimulateFocusEvents;
    m_wxWindowMacExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxWindowMacExtMacOnInternalSize = a_MacOnInternalSize;
    m_wxWindowMacExtOSXAfterMenuEvent = a_OSXAfterMenuEvent;
    m_wxWindowMacExtMacIsChildOfClientArea = a_MacIsChildOfClientArea;
    m_wxWindowMacExtDoGetTextExtent = a_DoGetTextExtent;
    m_wxWindowMacExtDoEnable = a_DoEnable;
    m_wxWindowMacExtDoPopupMenu = a_DoPopupMenu;
    m_wxWindowMacExtDoFreeze = a_DoFreeze;
    m_wxWindowMacExtDoThaw = a_DoThaw;
    m_wxWindowMacExtDoGetBestSize = a_DoGetBestSize;
    m_wxWindowMacExtDoGetSizeFromClientSize = a_DoGetSizeFromClientSize;
    m_wxWindowMacExtDoClientToScreen = a_DoClientToScreen;
    m_wxWindowMacExtDoScreenToClient = a_DoScreenToClient;
    m_wxWindowMacExtDoGetPosition = a_DoGetPosition;
    m_wxWindowMacExtDoGetSize = a_DoGetSize;
    m_wxWindowMacExtDoGetClientSize = a_DoGetClientSize;
    m_wxWindowMacExtDoSetSize = a_DoSetSize;
    m_wxWindowMacExtDoSetClientSize = a_DoSetClientSize;
    m_wxWindowMacExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxWindowMacExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxWindowMacExtDoMoveWindow = a_DoMoveWindow;
    m_wxWindowMacExtDoSetWindowVariant = a_DoSetWindowVariant;
    m_wxWindowMacExtDoSetToolTip = a_DoSetToolTip;
    m_wxWindowMacExtOSXShowWithEffect = a_OSXShowWithEffect;
  }
};



#endif
