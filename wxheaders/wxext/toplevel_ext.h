#ifndef _WX_TOPLEVEL_H_EXT_
#define _WX_TOPLEVEL_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxTopLevelWindowBaseExt;
typedef bool (*wxTopLevelWindowBaseExtDestroyFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef void (*wxTopLevelWindowBaseExtDoCentre__intFunc)(const wxTopLevelWindowBaseExt* self, int dir);
typedef void (*wxTopLevelWindowBaseExtDoClientToScreen__intPintPFunc)(const wxTopLevelWindowBaseExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowBaseExtDoGetScreenPosition__intPintPFunc)(const wxTopLevelWindowBaseExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowBaseExtDoScreenToClient__intPintPFunc)(const wxTopLevelWindowBaseExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxTopLevelWindowBaseExt* self, wxUpdateUIEvent& event);
typedef bool (*wxTopLevelWindowBaseExtEnableCloseButton__boolFunc)(const wxTopLevelWindowBaseExt* self, bool enable, bool res);
typedef bool (*wxTopLevelWindowBaseExtEnableFullScreenView__boollongFunc)(const wxTopLevelWindowBaseExt* self, bool enable, long style, bool res);
typedef bool (*wxTopLevelWindowBaseExtEnableMaximizeButton__boolFunc)(const wxTopLevelWindowBaseExt* self, bool enable, bool res);
typedef bool (*wxTopLevelWindowBaseExtEnableMinimizeButton__boolFunc)(const wxTopLevelWindowBaseExt* self, bool enable, bool res);
typedef wxContentProtection (*wxTopLevelWindowBaseExtGetContentProtectionFunc)(const wxTopLevelWindowBaseExt* self, wxContentProtection res);
typedef wxEventHashTable& (*wxTopLevelWindowBaseExtGetEventHashTableFunc)(const wxTopLevelWindowBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxTopLevelWindowBaseExtGetEventTableFunc)(const wxTopLevelWindowBaseExt* self, wxEventTable const* res);
typedef void (*wxTopLevelWindowBaseExtGetRectForTopLevelChildren__intPintPintPintPFunc)(const wxTopLevelWindowBaseExt* self, int* x, int* y, int* w, int* h);
typedef wxString (*wxTopLevelWindowBaseExtGetTitleFunc)(const wxTopLevelWindowBaseExt* self);
typedef void (*wxTopLevelWindowBaseExtIconize__boolFunc)(const wxTopLevelWindowBaseExt* self, bool iconize);
typedef bool (*wxTopLevelWindowBaseExtIsActiveFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef bool (*wxTopLevelWindowBaseExtIsAlwaysMaximizedFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef bool (*wxTopLevelWindowBaseExtIsFullScreenFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtIsIconizedFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtIsMaximizedFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtIsOneOfBars__wxWindowCPFunc)(const wxTopLevelWindowBaseExt* self, wxWindow const* win, bool res);
typedef bool (*wxTopLevelWindowBaseExtIsTopLevelFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef bool (*wxTopLevelWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxTopLevelWindowBaseExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxTopLevelWindowBaseExtIsVisibleFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef bool (*wxTopLevelWindowBaseExtLayoutFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef void (*wxTopLevelWindowBaseExtMaximize__boolFunc)(const wxTopLevelWindowBaseExt* self, bool maximize);
typedef bool (*wxTopLevelWindowBaseExtOSXIsModifiedFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef void (*wxTopLevelWindowBaseExtOSXSetModified__boolFunc)(const wxTopLevelWindowBaseExt* self, bool modified);
typedef void (*wxTopLevelWindowBaseExtRequestUserAttention__intFunc)(const wxTopLevelWindowBaseExt* self, int flags);
typedef void (*wxTopLevelWindowBaseExtRestoreFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtSetContentProtection__wxContentProtectionFunc)(const wxTopLevelWindowBaseExt* self, wxContentProtection contentProtection, bool res);
typedef void (*wxTopLevelWindowBaseExtSetIcons__wxIconBundleCRFunc)(const wxTopLevelWindowBaseExt* self, wxIconBundle const& icons);
typedef void (*wxTopLevelWindowBaseExtSetMaxSize__wxSizeCRFunc)(const wxTopLevelWindowBaseExt* self, wxSize const& maxSize);
typedef void (*wxTopLevelWindowBaseExtSetMinSize__wxSizeCRFunc)(const wxTopLevelWindowBaseExt* self, wxSize const& minSize);
typedef void (*wxTopLevelWindowBaseExtSetRepresentedFilename__wxStringCRFunc)(const wxTopLevelWindowBaseExt* self, wxString const& filename);
typedef void (*wxTopLevelWindowBaseExtSetTitle__wxStringCRFunc)(const wxTopLevelWindowBaseExt* self, wxString const& title);
typedef bool (*wxTopLevelWindowBaseExtShouldPreventAppExitFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef bool (*wxTopLevelWindowBaseExtShowFullScreen__boollongFunc)(const wxTopLevelWindowBaseExt* self, bool show, long style);
typedef void (*wxTopLevelWindowBaseExtShowWithoutActivatingFunc)(const wxTopLevelWindowBaseExt* self);
typedef void* (*wxTopLevelWindowBaseExtWXReservedTLW1__voidPFunc)(const wxTopLevelWindowBaseExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowBaseExtWXReservedTLW2__voidPFunc)(const wxTopLevelWindowBaseExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowBaseExtWXReservedTLW3__voidPFunc)(const wxTopLevelWindowBaseExt* self, void* param0, void* res);
class wxTopLevelWindowNativeExt;
typedef bool (*wxTopLevelWindowNativeExtDestroyFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef void (*wxTopLevelWindowNativeExtDoCentre__intFunc)(const wxTopLevelWindowNativeExt* self, int dir);
typedef void (*wxTopLevelWindowNativeExtDoClientToScreen__intPintPFunc)(const wxTopLevelWindowNativeExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowNativeExtDoGetScreenPosition__intPintPFunc)(const wxTopLevelWindowNativeExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowNativeExtDoScreenToClient__intPintPFunc)(const wxTopLevelWindowNativeExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowNativeExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxTopLevelWindowNativeExt* self, wxUpdateUIEvent& event);
typedef bool (*wxTopLevelWindowNativeExtEnableCloseButton__boolFunc)(const wxTopLevelWindowNativeExt* self, bool enable, bool res);
typedef bool (*wxTopLevelWindowNativeExtEnableFullScreenView__boollongFunc)(const wxTopLevelWindowNativeExt* self, bool enable, long style, bool res);
typedef bool (*wxTopLevelWindowNativeExtEnableMaximizeButton__boolFunc)(const wxTopLevelWindowNativeExt* self, bool enable, bool res);
typedef bool (*wxTopLevelWindowNativeExtEnableMinimizeButton__boolFunc)(const wxTopLevelWindowNativeExt* self, bool enable, bool res);
typedef wxPoint (*wxTopLevelWindowNativeExtGetClientAreaOriginFunc)(const wxTopLevelWindowNativeExt* self, wxPoint res);
typedef wxContentProtection (*wxTopLevelWindowNativeExtGetContentProtectionFunc)(const wxTopLevelWindowNativeExt* self, wxContentProtection res);
typedef wxEventHashTable& (*wxTopLevelWindowNativeExtGetEventHashTableFunc)(const wxTopLevelWindowNativeExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxTopLevelWindowNativeExtGetEventTableFunc)(const wxTopLevelWindowNativeExt* self, wxEventTable const* res);
typedef wxString (*wxTopLevelWindowNativeExtGetLabelFunc)(const wxTopLevelWindowNativeExt* self, wxString res);
typedef void (*wxTopLevelWindowNativeExtGetRectForTopLevelChildren__intPintPintPintPFunc)(const wxTopLevelWindowNativeExt* self, int* x, int* y, int* w, int* h);
typedef wxString (*wxTopLevelWindowNativeExtGetTitleFunc)(const wxTopLevelWindowNativeExt* self);
typedef void (*wxTopLevelWindowNativeExtIconize__boolFunc)(const wxTopLevelWindowNativeExt* self, bool iconize);
typedef bool (*wxTopLevelWindowNativeExtIsActiveFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef bool (*wxTopLevelWindowNativeExtIsAlwaysMaximizedFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef bool (*wxTopLevelWindowNativeExtIsFullScreenFunc)(const wxTopLevelWindowNativeExt* self);
typedef bool (*wxTopLevelWindowNativeExtIsIconizedFunc)(const wxTopLevelWindowNativeExt* self);
typedef bool (*wxTopLevelWindowNativeExtIsMaximizedFunc)(const wxTopLevelWindowNativeExt* self);
typedef bool (*wxTopLevelWindowNativeExtIsOneOfBars__wxWindowCPFunc)(const wxTopLevelWindowNativeExt* self, wxWindow const* win, bool res);
typedef bool (*wxTopLevelWindowNativeExtIsTopLevelFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef bool (*wxTopLevelWindowNativeExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxTopLevelWindowNativeExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxTopLevelWindowNativeExtIsVisibleFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef bool (*wxTopLevelWindowNativeExtLayoutFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef void (*wxTopLevelWindowNativeExtMaximize__boolFunc)(const wxTopLevelWindowNativeExt* self, bool maximize);
typedef bool (*wxTopLevelWindowNativeExtOSXIsModifiedFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef void (*wxTopLevelWindowNativeExtOSXSetModified__boolFunc)(const wxTopLevelWindowNativeExt* self, bool modified);
typedef void (*wxTopLevelWindowNativeExtRequestUserAttention__intFunc)(const wxTopLevelWindowNativeExt* self, int flags);
typedef void (*wxTopLevelWindowNativeExtRestoreFunc)(const wxTopLevelWindowNativeExt* self);
typedef bool (*wxTopLevelWindowNativeExtSetContentProtection__wxContentProtectionFunc)(const wxTopLevelWindowNativeExt* self, wxContentProtection contentProtection, bool res);
typedef void (*wxTopLevelWindowNativeExtSetIcons__wxIconBundleCRFunc)(const wxTopLevelWindowNativeExt* self, wxIconBundle const& icons);
typedef void (*wxTopLevelWindowNativeExtSetLabel__wxStringCRFunc)(const wxTopLevelWindowNativeExt* self, wxString const& label);
typedef void (*wxTopLevelWindowNativeExtSetMaxSize__wxSizeCRFunc)(const wxTopLevelWindowNativeExt* self, wxSize const& maxSize);
typedef void (*wxTopLevelWindowNativeExtSetMinSize__wxSizeCRFunc)(const wxTopLevelWindowNativeExt* self, wxSize const& minSize);
typedef void (*wxTopLevelWindowNativeExtSetRepresentedFilename__wxStringCRFunc)(const wxTopLevelWindowNativeExt* self, wxString const& filename);
typedef void (*wxTopLevelWindowNativeExtSetTitle__wxStringCRFunc)(const wxTopLevelWindowNativeExt* self, wxString const& title);
typedef bool (*wxTopLevelWindowNativeExtShouldPreventAppExitFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef bool (*wxTopLevelWindowNativeExtShowFullScreen__boollongFunc)(const wxTopLevelWindowNativeExt* self, bool show, long style);
typedef void (*wxTopLevelWindowNativeExtShowWithoutActivatingFunc)(const wxTopLevelWindowNativeExt* self);
typedef void* (*wxTopLevelWindowNativeExtWXReservedTLW1__voidPFunc)(const wxTopLevelWindowNativeExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowNativeExtWXReservedTLW2__voidPFunc)(const wxTopLevelWindowNativeExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowNativeExtWXReservedTLW3__voidPFunc)(const wxTopLevelWindowNativeExt* self, void* param0, void* res);
class wxTopLevelWindowExt;
typedef bool (*wxTopLevelWindowExtDestroyFunc)(const wxTopLevelWindowExt* self, bool res);
typedef void (*wxTopLevelWindowExtDoCentre__intFunc)(const wxTopLevelWindowExt* self, int dir);
typedef void (*wxTopLevelWindowExtDoClientToScreen__intPintPFunc)(const wxTopLevelWindowExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowExtDoGetScreenPosition__intPintPFunc)(const wxTopLevelWindowExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowExtDoScreenToClient__intPintPFunc)(const wxTopLevelWindowExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxTopLevelWindowExt* self, wxUpdateUIEvent& event);
typedef bool (*wxTopLevelWindowExtEnableCloseButton__boolFunc)(const wxTopLevelWindowExt* self, bool enable, bool res);
typedef bool (*wxTopLevelWindowExtEnableFullScreenView__boollongFunc)(const wxTopLevelWindowExt* self, bool enable, long style, bool res);
typedef bool (*wxTopLevelWindowExtEnableMaximizeButton__boolFunc)(const wxTopLevelWindowExt* self, bool enable, bool res);
typedef bool (*wxTopLevelWindowExtEnableMinimizeButton__boolFunc)(const wxTopLevelWindowExt* self, bool enable, bool res);
typedef wxClassInfo* (*wxTopLevelWindowExtGetClassInfoFunc)(const wxTopLevelWindowExt* self, wxClassInfo* res);
typedef wxPoint (*wxTopLevelWindowExtGetClientAreaOriginFunc)(const wxTopLevelWindowExt* self, wxPoint res);
typedef wxContentProtection (*wxTopLevelWindowExtGetContentProtectionFunc)(const wxTopLevelWindowExt* self, wxContentProtection res);
typedef wxEventHashTable& (*wxTopLevelWindowExtGetEventHashTableFunc)(const wxTopLevelWindowExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxTopLevelWindowExtGetEventTableFunc)(const wxTopLevelWindowExt* self, wxEventTable const* res);
typedef wxString (*wxTopLevelWindowExtGetLabelFunc)(const wxTopLevelWindowExt* self, wxString res);
typedef void (*wxTopLevelWindowExtGetRectForTopLevelChildren__intPintPintPintPFunc)(const wxTopLevelWindowExt* self, int* x, int* y, int* w, int* h);
typedef wxString (*wxTopLevelWindowExtGetTitleFunc)(const wxTopLevelWindowExt* self, wxString res);
typedef void (*wxTopLevelWindowExtIconize__boolFunc)(const wxTopLevelWindowExt* self, bool iconize);
typedef bool (*wxTopLevelWindowExtIsActiveFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsAlwaysMaximizedFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsFullScreenFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsIconizedFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsMaximizedFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsOneOfBars__wxWindowCPFunc)(const wxTopLevelWindowExt* self, wxWindow const* win, bool res);
typedef bool (*wxTopLevelWindowExtIsTopLevelFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxTopLevelWindowExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxTopLevelWindowExtIsVisibleFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtLayoutFunc)(const wxTopLevelWindowExt* self, bool res);
typedef void (*wxTopLevelWindowExtMaximize__boolFunc)(const wxTopLevelWindowExt* self, bool maximize);
typedef bool (*wxTopLevelWindowExtOSXIsModifiedFunc)(const wxTopLevelWindowExt* self, bool res);
typedef void (*wxTopLevelWindowExtOSXSetModified__boolFunc)(const wxTopLevelWindowExt* self, bool modified);
typedef void (*wxTopLevelWindowExtRequestUserAttention__intFunc)(const wxTopLevelWindowExt* self, int flags);
typedef void (*wxTopLevelWindowExtRestoreFunc)(const wxTopLevelWindowExt* self);
typedef bool (*wxTopLevelWindowExtSetContentProtection__wxContentProtectionFunc)(const wxTopLevelWindowExt* self, wxContentProtection contentProtection, bool res);
typedef void (*wxTopLevelWindowExtSetIcons__wxIconBundleCRFunc)(const wxTopLevelWindowExt* self, wxIconBundle const& icons);
typedef void (*wxTopLevelWindowExtSetLabel__wxStringCRFunc)(const wxTopLevelWindowExt* self, wxString const& label);
typedef void (*wxTopLevelWindowExtSetMaxSize__wxSizeCRFunc)(const wxTopLevelWindowExt* self, wxSize const& maxSize);
typedef void (*wxTopLevelWindowExtSetMinSize__wxSizeCRFunc)(const wxTopLevelWindowExt* self, wxSize const& minSize);
typedef void (*wxTopLevelWindowExtSetRepresentedFilename__wxStringCRFunc)(const wxTopLevelWindowExt* self, wxString const& filename);
typedef void (*wxTopLevelWindowExtSetTitle__wxStringCRFunc)(const wxTopLevelWindowExt* self, wxString const& title);
typedef bool (*wxTopLevelWindowExtShouldPreventAppExitFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtShowFullScreen__boollongFunc)(const wxTopLevelWindowExt* self, bool show, long style, bool res);
typedef void (*wxTopLevelWindowExtShowWithoutActivatingFunc)(const wxTopLevelWindowExt* self);
typedef void* (*wxTopLevelWindowExtWXReservedTLW1__voidPFunc)(const wxTopLevelWindowExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowExtWXReservedTLW2__voidPFunc)(const wxTopLevelWindowExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowExtWXReservedTLW3__voidPFunc)(const wxTopLevelWindowExt* self, void* param0, void* res);

class wxTopLevelWindowBaseExt: public wxTopLevelWindowBase
{
public:
  wxTopLevelWindowBaseExt(): wxTopLevelWindowBase()  {  }
  virtual ~wxTopLevelWindowBaseExt() override  {  }
  wxTopLevelWindowBaseExtDestroyFunc m_wxTopLevelWindowBaseExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxTopLevelWindowBase::Destroy();
    if (*m_wxTopLevelWindowBaseExtDestroy != NULL){
      return m_wxTopLevelWindowBaseExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtDoCentre__intFunc m_wxTopLevelWindowBaseExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxTopLevelWindowBase::DoCentre(dir);
    if (*m_wxTopLevelWindowBaseExtDoCentre__int != NULL){
      return m_wxTopLevelWindowBaseExtDoCentre__int(this, dir);
    }
  }
  wxTopLevelWindowBaseExtDoClientToScreen__intPintPFunc m_wxTopLevelWindowBaseExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxTopLevelWindowBase::DoClientToScreen(x, y);
    if (*m_wxTopLevelWindowBaseExtDoClientToScreen__intPintP != NULL){
      return m_wxTopLevelWindowBaseExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxTopLevelWindowBaseExtDoGetScreenPosition__intPintPFunc m_wxTopLevelWindowBaseExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxTopLevelWindowBase::DoGetScreenPosition(x, y);
    if (*m_wxTopLevelWindowBaseExtDoGetScreenPosition__intPintP != NULL){
      return m_wxTopLevelWindowBaseExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxTopLevelWindowBaseExtDoScreenToClient__intPintPFunc m_wxTopLevelWindowBaseExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxTopLevelWindowBase::DoScreenToClient(x, y);
    if (*m_wxTopLevelWindowBaseExtDoScreenToClient__intPintP != NULL){
      return m_wxTopLevelWindowBaseExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxTopLevelWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxTopLevelWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxTopLevelWindowBase::DoUpdateWindowUI(event);
    if (*m_wxTopLevelWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxTopLevelWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxTopLevelWindowBaseExtEnableCloseButton__boolFunc m_wxTopLevelWindowBaseExtEnableCloseButton__bool = NULL;
  virtual bool EnableCloseButton(bool enable = true) override
  {
    bool res = wxTopLevelWindowBase::EnableCloseButton(enable);
    if (*m_wxTopLevelWindowBaseExtEnableCloseButton__bool != NULL){
      return m_wxTopLevelWindowBaseExtEnableCloseButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtEnableFullScreenView__boollongFunc m_wxTopLevelWindowBaseExtEnableFullScreenView__boollong = NULL;
  virtual bool EnableFullScreenView(bool enable = true, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindowBase::EnableFullScreenView(enable, style);
    if (*m_wxTopLevelWindowBaseExtEnableFullScreenView__boollong != NULL){
      return m_wxTopLevelWindowBaseExtEnableFullScreenView__boollong(this, enable, style, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtEnableMaximizeButton__boolFunc m_wxTopLevelWindowBaseExtEnableMaximizeButton__bool = NULL;
  virtual bool EnableMaximizeButton(bool enable = true) override
  {
    bool res = wxTopLevelWindowBase::EnableMaximizeButton(enable);
    if (*m_wxTopLevelWindowBaseExtEnableMaximizeButton__bool != NULL){
      return m_wxTopLevelWindowBaseExtEnableMaximizeButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtEnableMinimizeButton__boolFunc m_wxTopLevelWindowBaseExtEnableMinimizeButton__bool = NULL;
  virtual bool EnableMinimizeButton(bool enable = true) override
  {
    bool res = wxTopLevelWindowBase::EnableMinimizeButton(enable);
    if (*m_wxTopLevelWindowBaseExtEnableMinimizeButton__bool != NULL){
      return m_wxTopLevelWindowBaseExtEnableMinimizeButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtGetContentProtectionFunc m_wxTopLevelWindowBaseExtGetContentProtection = NULL;
  virtual wxContentProtection GetContentProtection() const override
  {
    wxContentProtection res = wxTopLevelWindowBase::GetContentProtection();
    if (*m_wxTopLevelWindowBaseExtGetContentProtection != NULL){
      return m_wxTopLevelWindowBaseExtGetContentProtection(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtGetEventHashTableFunc m_wxTopLevelWindowBaseExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxTopLevelWindowBase::GetEventHashTable();
    if (*m_wxTopLevelWindowBaseExtGetEventHashTable != NULL){
      return m_wxTopLevelWindowBaseExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtGetEventTableFunc m_wxTopLevelWindowBaseExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxTopLevelWindowBase::GetEventTable();
    if (*m_wxTopLevelWindowBaseExtGetEventTable != NULL){
      return m_wxTopLevelWindowBaseExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtGetRectForTopLevelChildren__intPintPintPintPFunc m_wxTopLevelWindowBaseExtGetRectForTopLevelChildren__intPintPintPintP = NULL;
  virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h) override
  {
    wxTopLevelWindowBase::GetRectForTopLevelChildren(x, y, w, h);
    if (*m_wxTopLevelWindowBaseExtGetRectForTopLevelChildren__intPintPintPintP != NULL){
      return m_wxTopLevelWindowBaseExtGetRectForTopLevelChildren__intPintPintPintP(this, x, y, w, h);
    }
  }
  wxTopLevelWindowBaseExtGetTitleFunc m_wxTopLevelWindowBaseExtGetTitle = NULL;
  virtual wxString GetTitle() const override
  {
    if (*m_wxTopLevelWindowBaseExtGetTitle != NULL){
      return m_wxTopLevelWindowBaseExtGetTitle(this);
    }
    else {
      return "";
    }
  }
  wxTopLevelWindowBaseExtIconize__boolFunc m_wxTopLevelWindowBaseExtIconize__bool = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    if (*m_wxTopLevelWindowBaseExtIconize__bool != NULL){
      return m_wxTopLevelWindowBaseExtIconize__bool(this, iconize);
    }
  }
  wxTopLevelWindowBaseExtIsActiveFunc m_wxTopLevelWindowBaseExtIsActive = NULL;
  virtual bool IsActive() override
  {
    bool res = wxTopLevelWindowBase::IsActive();
    if (*m_wxTopLevelWindowBaseExtIsActive != NULL){
      return m_wxTopLevelWindowBaseExtIsActive(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtIsAlwaysMaximizedFunc m_wxTopLevelWindowBaseExtIsAlwaysMaximized = NULL;
  virtual bool IsAlwaysMaximized() const override
  {
    bool res = wxTopLevelWindowBase::IsAlwaysMaximized();
    if (*m_wxTopLevelWindowBaseExtIsAlwaysMaximized != NULL){
      return m_wxTopLevelWindowBaseExtIsAlwaysMaximized(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtIsFullScreenFunc m_wxTopLevelWindowBaseExtIsFullScreen = NULL;
  virtual bool IsFullScreen() const override
  {
    if (*m_wxTopLevelWindowBaseExtIsFullScreen != NULL){
      return m_wxTopLevelWindowBaseExtIsFullScreen(this);
    }
    else {
      return false;
    }
  }
  wxTopLevelWindowBaseExtIsIconizedFunc m_wxTopLevelWindowBaseExtIsIconized = NULL;
  virtual bool IsIconized() const override
  {
    if (*m_wxTopLevelWindowBaseExtIsIconized != NULL){
      return m_wxTopLevelWindowBaseExtIsIconized(this);
    }
    else {
      return false;
    }
  }
  wxTopLevelWindowBaseExtIsMaximizedFunc m_wxTopLevelWindowBaseExtIsMaximized = NULL;
  virtual bool IsMaximized() const override
  {
    if (*m_wxTopLevelWindowBaseExtIsMaximized != NULL){
      return m_wxTopLevelWindowBaseExtIsMaximized(this);
    }
    else {
      return false;
    }
  }
  wxTopLevelWindowBaseExtIsOneOfBars__wxWindowCPFunc m_wxTopLevelWindowBaseExtIsOneOfBars__wxWindowCP = NULL;
  virtual bool IsOneOfBars(wxWindow const* win) const override
  {
    bool res = wxTopLevelWindowBase::IsOneOfBars(win);
    if (*m_wxTopLevelWindowBaseExtIsOneOfBars__wxWindowCP != NULL){
      return m_wxTopLevelWindowBaseExtIsOneOfBars__wxWindowCP(this, win, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtIsTopLevelFunc m_wxTopLevelWindowBaseExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxTopLevelWindowBase::IsTopLevel();
    if (*m_wxTopLevelWindowBaseExtIsTopLevel != NULL){
      return m_wxTopLevelWindowBaseExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxTopLevelWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxTopLevelWindowBase::IsTopNavigationDomain(kind);
    if (*m_wxTopLevelWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxTopLevelWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtIsVisibleFunc m_wxTopLevelWindowBaseExtIsVisible = NULL;
  virtual bool IsVisible() const override
  {
    bool res = wxTopLevelWindowBase::IsVisible();
    if (*m_wxTopLevelWindowBaseExtIsVisible != NULL){
      return m_wxTopLevelWindowBaseExtIsVisible(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtLayoutFunc m_wxTopLevelWindowBaseExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxTopLevelWindowBase::Layout();
    if (*m_wxTopLevelWindowBaseExtLayout != NULL){
      return m_wxTopLevelWindowBaseExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtMaximize__boolFunc m_wxTopLevelWindowBaseExtMaximize__bool = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    if (*m_wxTopLevelWindowBaseExtMaximize__bool != NULL){
      return m_wxTopLevelWindowBaseExtMaximize__bool(this, maximize);
    }
  }
  wxTopLevelWindowBaseExtOSXIsModifiedFunc m_wxTopLevelWindowBaseExtOSXIsModified = NULL;
  virtual bool OSXIsModified() const override
  {
    bool res = wxTopLevelWindowBase::OSXIsModified();
    if (*m_wxTopLevelWindowBaseExtOSXIsModified != NULL){
      return m_wxTopLevelWindowBaseExtOSXIsModified(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtOSXSetModified__boolFunc m_wxTopLevelWindowBaseExtOSXSetModified__bool = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxTopLevelWindowBase::OSXSetModified(modified);
    if (*m_wxTopLevelWindowBaseExtOSXSetModified__bool != NULL){
      return m_wxTopLevelWindowBaseExtOSXSetModified__bool(this, modified);
    }
  }
  wxTopLevelWindowBaseExtRequestUserAttention__intFunc m_wxTopLevelWindowBaseExtRequestUserAttention__int = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxTopLevelWindowBase::RequestUserAttention(flags);
    if (*m_wxTopLevelWindowBaseExtRequestUserAttention__int != NULL){
      return m_wxTopLevelWindowBaseExtRequestUserAttention__int(this, flags);
    }
  }
  wxTopLevelWindowBaseExtRestoreFunc m_wxTopLevelWindowBaseExtRestore = NULL;
  virtual void Restore() override
  {
    if (*m_wxTopLevelWindowBaseExtRestore != NULL){
      return m_wxTopLevelWindowBaseExtRestore(this);
    }
  }
  wxTopLevelWindowBaseExtSetContentProtection__wxContentProtectionFunc m_wxTopLevelWindowBaseExtSetContentProtection__wxContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection contentProtection) override
  {
    bool res = wxTopLevelWindowBase::SetContentProtection(contentProtection);
    if (*m_wxTopLevelWindowBaseExtSetContentProtection__wxContentProtection != NULL){
      return m_wxTopLevelWindowBaseExtSetContentProtection__wxContentProtection(this, contentProtection, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtSetIcons__wxIconBundleCRFunc m_wxTopLevelWindowBaseExtSetIcons__wxIconBundleCR = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxTopLevelWindowBase::SetIcons(icons);
    if (*m_wxTopLevelWindowBaseExtSetIcons__wxIconBundleCR != NULL){
      return m_wxTopLevelWindowBaseExtSetIcons__wxIconBundleCR(this, icons);
    }
  }
  wxTopLevelWindowBaseExtSetMaxSize__wxSizeCRFunc m_wxTopLevelWindowBaseExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxTopLevelWindowBase::SetMaxSize(maxSize);
    if (*m_wxTopLevelWindowBaseExtSetMaxSize__wxSizeCR != NULL){
      return m_wxTopLevelWindowBaseExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxTopLevelWindowBaseExtSetMinSize__wxSizeCRFunc m_wxTopLevelWindowBaseExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxTopLevelWindowBase::SetMinSize(minSize);
    if (*m_wxTopLevelWindowBaseExtSetMinSize__wxSizeCR != NULL){
      return m_wxTopLevelWindowBaseExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxTopLevelWindowBaseExtSetRepresentedFilename__wxStringCRFunc m_wxTopLevelWindowBaseExtSetRepresentedFilename__wxStringCR = NULL;
  virtual void SetRepresentedFilename(wxString const& filename) override
  {
    wxTopLevelWindowBase::SetRepresentedFilename(filename);
    if (*m_wxTopLevelWindowBaseExtSetRepresentedFilename__wxStringCR != NULL){
      return m_wxTopLevelWindowBaseExtSetRepresentedFilename__wxStringCR(this, filename);
    }
  }
  wxTopLevelWindowBaseExtSetTitle__wxStringCRFunc m_wxTopLevelWindowBaseExtSetTitle__wxStringCR = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    if (*m_wxTopLevelWindowBaseExtSetTitle__wxStringCR != NULL){
      return m_wxTopLevelWindowBaseExtSetTitle__wxStringCR(this, title);
    }
  }
  wxTopLevelWindowBaseExtShouldPreventAppExitFunc m_wxTopLevelWindowBaseExtShouldPreventAppExit = NULL;
  virtual bool ShouldPreventAppExit() const override
  {
    bool res = wxTopLevelWindowBase::ShouldPreventAppExit();
    if (*m_wxTopLevelWindowBaseExtShouldPreventAppExit != NULL){
      return m_wxTopLevelWindowBaseExtShouldPreventAppExit(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtShowFullScreen__boollongFunc m_wxTopLevelWindowBaseExtShowFullScreen__boollong = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    if (*m_wxTopLevelWindowBaseExtShowFullScreen__boollong != NULL){
      return m_wxTopLevelWindowBaseExtShowFullScreen__boollong(this, show, style);
    }
    else {
      return false;
    }
  }
  wxTopLevelWindowBaseExtShowWithoutActivatingFunc m_wxTopLevelWindowBaseExtShowWithoutActivating = NULL;
  virtual void ShowWithoutActivating() override
  {
    wxTopLevelWindowBase::ShowWithoutActivating();
    if (*m_wxTopLevelWindowBaseExtShowWithoutActivating != NULL){
      return m_wxTopLevelWindowBaseExtShowWithoutActivating(this);
    }
  }
  wxTopLevelWindowBaseExtWXReservedTLW1__voidPFunc m_wxTopLevelWindowBaseExtWXReservedTLW1__voidP = NULL;
  virtual void* WXReservedTLW1(void* param0) override
  {
    void* res = wxTopLevelWindowBase::WXReservedTLW1(param0);
    if (*m_wxTopLevelWindowBaseExtWXReservedTLW1__voidP != NULL){
      return m_wxTopLevelWindowBaseExtWXReservedTLW1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtWXReservedTLW2__voidPFunc m_wxTopLevelWindowBaseExtWXReservedTLW2__voidP = NULL;
  virtual void* WXReservedTLW2(void* param0) override
  {
    void* res = wxTopLevelWindowBase::WXReservedTLW2(param0);
    if (*m_wxTopLevelWindowBaseExtWXReservedTLW2__voidP != NULL){
      return m_wxTopLevelWindowBaseExtWXReservedTLW2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtWXReservedTLW3__voidPFunc m_wxTopLevelWindowBaseExtWXReservedTLW3__voidP = NULL;
  virtual void* WXReservedTLW3(void* param0) override
  {
    void* res = wxTopLevelWindowBase::WXReservedTLW3(param0);
    if (*m_wxTopLevelWindowBaseExtWXReservedTLW3__voidP != NULL){
      return m_wxTopLevelWindowBaseExtWXReservedTLW3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExt(wxTopLevelWindowBaseExtDestroyFunc a_Destroy, wxTopLevelWindowBaseExtDoCentre__intFunc a_DoCentre__int, wxTopLevelWindowBaseExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxTopLevelWindowBaseExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxTopLevelWindowBaseExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxTopLevelWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxTopLevelWindowBaseExtEnableCloseButton__boolFunc a_EnableCloseButton__bool, wxTopLevelWindowBaseExtEnableFullScreenView__boollongFunc a_EnableFullScreenView__boollong, wxTopLevelWindowBaseExtEnableMaximizeButton__boolFunc a_EnableMaximizeButton__bool, wxTopLevelWindowBaseExtEnableMinimizeButton__boolFunc a_EnableMinimizeButton__bool, wxTopLevelWindowBaseExtGetContentProtectionFunc a_GetContentProtection, wxTopLevelWindowBaseExtGetEventHashTableFunc a_GetEventHashTable, wxTopLevelWindowBaseExtGetEventTableFunc a_GetEventTable, wxTopLevelWindowBaseExtGetRectForTopLevelChildren__intPintPintPintPFunc a_GetRectForTopLevelChildren__intPintPintPintP, wxTopLevelWindowBaseExtGetTitleFunc a_GetTitle, wxTopLevelWindowBaseExtIconize__boolFunc a_Iconize__bool, wxTopLevelWindowBaseExtIsActiveFunc a_IsActive, wxTopLevelWindowBaseExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxTopLevelWindowBaseExtIsFullScreenFunc a_IsFullScreen, wxTopLevelWindowBaseExtIsIconizedFunc a_IsIconized, wxTopLevelWindowBaseExtIsMaximizedFunc a_IsMaximized, wxTopLevelWindowBaseExtIsOneOfBars__wxWindowCPFunc a_IsOneOfBars__wxWindowCP, wxTopLevelWindowBaseExtIsTopLevelFunc a_IsTopLevel, wxTopLevelWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxTopLevelWindowBaseExtIsVisibleFunc a_IsVisible, wxTopLevelWindowBaseExtLayoutFunc a_Layout, wxTopLevelWindowBaseExtMaximize__boolFunc a_Maximize__bool, wxTopLevelWindowBaseExtOSXIsModifiedFunc a_OSXIsModified, wxTopLevelWindowBaseExtOSXSetModified__boolFunc a_OSXSetModified__bool, wxTopLevelWindowBaseExtRequestUserAttention__intFunc a_RequestUserAttention__int, wxTopLevelWindowBaseExtRestoreFunc a_Restore, wxTopLevelWindowBaseExtSetContentProtection__wxContentProtectionFunc a_SetContentProtection__wxContentProtection, wxTopLevelWindowBaseExtSetIcons__wxIconBundleCRFunc a_SetIcons__wxIconBundleCR, wxTopLevelWindowBaseExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxTopLevelWindowBaseExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxTopLevelWindowBaseExtSetRepresentedFilename__wxStringCRFunc a_SetRepresentedFilename__wxStringCR, wxTopLevelWindowBaseExtSetTitle__wxStringCRFunc a_SetTitle__wxStringCR, wxTopLevelWindowBaseExtShouldPreventAppExitFunc a_ShouldPreventAppExit, wxTopLevelWindowBaseExtShowFullScreen__boollongFunc a_ShowFullScreen__boollong, wxTopLevelWindowBaseExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxTopLevelWindowBaseExtWXReservedTLW1__voidPFunc a_WXReservedTLW1__voidP, wxTopLevelWindowBaseExtWXReservedTLW2__voidPFunc a_WXReservedTLW2__voidP, wxTopLevelWindowBaseExtWXReservedTLW3__voidPFunc a_WXReservedTLW3__voidP): wxTopLevelWindowBase() {
    m_wxTopLevelWindowBaseExtDestroy = a_Destroy;
    m_wxTopLevelWindowBaseExtDoCentre__int = a_DoCentre__int;
    m_wxTopLevelWindowBaseExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxTopLevelWindowBaseExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxTopLevelWindowBaseExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxTopLevelWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxTopLevelWindowBaseExtEnableCloseButton__bool = a_EnableCloseButton__bool;
    m_wxTopLevelWindowBaseExtEnableFullScreenView__boollong = a_EnableFullScreenView__boollong;
    m_wxTopLevelWindowBaseExtEnableMaximizeButton__bool = a_EnableMaximizeButton__bool;
    m_wxTopLevelWindowBaseExtEnableMinimizeButton__bool = a_EnableMinimizeButton__bool;
    m_wxTopLevelWindowBaseExtGetContentProtection = a_GetContentProtection;
    m_wxTopLevelWindowBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxTopLevelWindowBaseExtGetEventTable = a_GetEventTable;
    m_wxTopLevelWindowBaseExtGetRectForTopLevelChildren__intPintPintPintP = a_GetRectForTopLevelChildren__intPintPintPintP;
    m_wxTopLevelWindowBaseExtGetTitle = a_GetTitle;
    m_wxTopLevelWindowBaseExtIconize__bool = a_Iconize__bool;
    m_wxTopLevelWindowBaseExtIsActive = a_IsActive;
    m_wxTopLevelWindowBaseExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxTopLevelWindowBaseExtIsFullScreen = a_IsFullScreen;
    m_wxTopLevelWindowBaseExtIsIconized = a_IsIconized;
    m_wxTopLevelWindowBaseExtIsMaximized = a_IsMaximized;
    m_wxTopLevelWindowBaseExtIsOneOfBars__wxWindowCP = a_IsOneOfBars__wxWindowCP;
    m_wxTopLevelWindowBaseExtIsTopLevel = a_IsTopLevel;
    m_wxTopLevelWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxTopLevelWindowBaseExtIsVisible = a_IsVisible;
    m_wxTopLevelWindowBaseExtLayout = a_Layout;
    m_wxTopLevelWindowBaseExtMaximize__bool = a_Maximize__bool;
    m_wxTopLevelWindowBaseExtOSXIsModified = a_OSXIsModified;
    m_wxTopLevelWindowBaseExtOSXSetModified__bool = a_OSXSetModified__bool;
    m_wxTopLevelWindowBaseExtRequestUserAttention__int = a_RequestUserAttention__int;
    m_wxTopLevelWindowBaseExtRestore = a_Restore;
    m_wxTopLevelWindowBaseExtSetContentProtection__wxContentProtection = a_SetContentProtection__wxContentProtection;
    m_wxTopLevelWindowBaseExtSetIcons__wxIconBundleCR = a_SetIcons__wxIconBundleCR;
    m_wxTopLevelWindowBaseExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxTopLevelWindowBaseExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxTopLevelWindowBaseExtSetRepresentedFilename__wxStringCR = a_SetRepresentedFilename__wxStringCR;
    m_wxTopLevelWindowBaseExtSetTitle__wxStringCR = a_SetTitle__wxStringCR;
    m_wxTopLevelWindowBaseExtShouldPreventAppExit = a_ShouldPreventAppExit;
    m_wxTopLevelWindowBaseExtShowFullScreen__boollong = a_ShowFullScreen__boollong;
    m_wxTopLevelWindowBaseExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxTopLevelWindowBaseExtWXReservedTLW1__voidP = a_WXReservedTLW1__voidP;
    m_wxTopLevelWindowBaseExtWXReservedTLW2__voidP = a_WXReservedTLW2__voidP;
    m_wxTopLevelWindowBaseExtWXReservedTLW3__voidP = a_WXReservedTLW3__voidP;
  }
};

class wxTopLevelWindowNativeExt: public wxTopLevelWindowNative
{
public:
  wxTopLevelWindowNativeExt(): wxTopLevelWindowNative()  {  }
  wxTopLevelWindowNativeExt(wxWindow* parent, wxWindowID id, wxString const& title, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = (0x0800 | 0x0040 | 0x0400 | 0x0200 | 0x1000 | 0x20000000 | 0x00400000), wxString const& name = wxString::FromAscii(wxFrameNameStr)): wxTopLevelWindowNative(parent, id, title, pos, size, style, name)  {  }
  virtual ~wxTopLevelWindowNativeExt() override  {  }
  wxTopLevelWindowNativeExtDestroyFunc m_wxTopLevelWindowNativeExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxTopLevelWindowNative::Destroy();
    if (*m_wxTopLevelWindowNativeExtDestroy != NULL){
      return m_wxTopLevelWindowNativeExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtDoCentre__intFunc m_wxTopLevelWindowNativeExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxTopLevelWindowNative::DoCentre(dir);
    if (*m_wxTopLevelWindowNativeExtDoCentre__int != NULL){
      return m_wxTopLevelWindowNativeExtDoCentre__int(this, dir);
    }
  }
  wxTopLevelWindowNativeExtDoClientToScreen__intPintPFunc m_wxTopLevelWindowNativeExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxTopLevelWindowNative::DoClientToScreen(x, y);
    if (*m_wxTopLevelWindowNativeExtDoClientToScreen__intPintP != NULL){
      return m_wxTopLevelWindowNativeExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxTopLevelWindowNativeExtDoGetScreenPosition__intPintPFunc m_wxTopLevelWindowNativeExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxTopLevelWindowNative::DoGetScreenPosition(x, y);
    if (*m_wxTopLevelWindowNativeExtDoGetScreenPosition__intPintP != NULL){
      return m_wxTopLevelWindowNativeExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxTopLevelWindowNativeExtDoScreenToClient__intPintPFunc m_wxTopLevelWindowNativeExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxTopLevelWindowNative::DoScreenToClient(x, y);
    if (*m_wxTopLevelWindowNativeExtDoScreenToClient__intPintP != NULL){
      return m_wxTopLevelWindowNativeExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxTopLevelWindowNativeExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxTopLevelWindowNativeExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxTopLevelWindowNative::DoUpdateWindowUI(event);
    if (*m_wxTopLevelWindowNativeExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxTopLevelWindowNativeExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxTopLevelWindowNativeExtEnableCloseButton__boolFunc m_wxTopLevelWindowNativeExtEnableCloseButton__bool = NULL;
  virtual bool EnableCloseButton(bool enable = true) override
  {
    bool res = wxTopLevelWindowNative::EnableCloseButton(enable);
    if (*m_wxTopLevelWindowNativeExtEnableCloseButton__bool != NULL){
      return m_wxTopLevelWindowNativeExtEnableCloseButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtEnableFullScreenView__boollongFunc m_wxTopLevelWindowNativeExtEnableFullScreenView__boollong = NULL;
  virtual bool EnableFullScreenView(bool enable = true, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindowNative::EnableFullScreenView(enable, style);
    if (*m_wxTopLevelWindowNativeExtEnableFullScreenView__boollong != NULL){
      return m_wxTopLevelWindowNativeExtEnableFullScreenView__boollong(this, enable, style, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtEnableMaximizeButton__boolFunc m_wxTopLevelWindowNativeExtEnableMaximizeButton__bool = NULL;
  virtual bool EnableMaximizeButton(bool enable = true) override
  {
    bool res = wxTopLevelWindowNative::EnableMaximizeButton(enable);
    if (*m_wxTopLevelWindowNativeExtEnableMaximizeButton__bool != NULL){
      return m_wxTopLevelWindowNativeExtEnableMaximizeButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtEnableMinimizeButton__boolFunc m_wxTopLevelWindowNativeExtEnableMinimizeButton__bool = NULL;
  virtual bool EnableMinimizeButton(bool enable = true) override
  {
    bool res = wxTopLevelWindowNative::EnableMinimizeButton(enable);
    if (*m_wxTopLevelWindowNativeExtEnableMinimizeButton__bool != NULL){
      return m_wxTopLevelWindowNativeExtEnableMinimizeButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtGetClientAreaOriginFunc m_wxTopLevelWindowNativeExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxTopLevelWindowNative::GetClientAreaOrigin();
    if (*m_wxTopLevelWindowNativeExtGetClientAreaOrigin != NULL){
      return m_wxTopLevelWindowNativeExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtGetContentProtectionFunc m_wxTopLevelWindowNativeExtGetContentProtection = NULL;
  virtual wxContentProtection GetContentProtection() const override
  {
    wxContentProtection res = wxTopLevelWindowNative::GetContentProtection();
    if (*m_wxTopLevelWindowNativeExtGetContentProtection != NULL){
      return m_wxTopLevelWindowNativeExtGetContentProtection(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtGetEventHashTableFunc m_wxTopLevelWindowNativeExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxTopLevelWindowNative::GetEventHashTable();
    if (*m_wxTopLevelWindowNativeExtGetEventHashTable != NULL){
      return m_wxTopLevelWindowNativeExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtGetEventTableFunc m_wxTopLevelWindowNativeExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxTopLevelWindowNative::GetEventTable();
    if (*m_wxTopLevelWindowNativeExtGetEventTable != NULL){
      return m_wxTopLevelWindowNativeExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtGetLabelFunc m_wxTopLevelWindowNativeExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxTopLevelWindowNative::GetLabel();
    if (*m_wxTopLevelWindowNativeExtGetLabel != NULL){
      return m_wxTopLevelWindowNativeExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtGetRectForTopLevelChildren__intPintPintPintPFunc m_wxTopLevelWindowNativeExtGetRectForTopLevelChildren__intPintPintPintP = NULL;
  virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h) override
  {
    wxTopLevelWindowNative::GetRectForTopLevelChildren(x, y, w, h);
    if (*m_wxTopLevelWindowNativeExtGetRectForTopLevelChildren__intPintPintPintP != NULL){
      return m_wxTopLevelWindowNativeExtGetRectForTopLevelChildren__intPintPintPintP(this, x, y, w, h);
    }
  }
  wxTopLevelWindowNativeExtGetTitleFunc m_wxTopLevelWindowNativeExtGetTitle = NULL;
  virtual wxString GetTitle() const override
  {
    if (*m_wxTopLevelWindowNativeExtGetTitle != NULL){
      return m_wxTopLevelWindowNativeExtGetTitle(this);
    }
    else {
      return "";
    }
  }
  wxTopLevelWindowNativeExtIconize__boolFunc m_wxTopLevelWindowNativeExtIconize__bool = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    if (*m_wxTopLevelWindowNativeExtIconize__bool != NULL){
      return m_wxTopLevelWindowNativeExtIconize__bool(this, iconize);
    }
  }
  wxTopLevelWindowNativeExtIsActiveFunc m_wxTopLevelWindowNativeExtIsActive = NULL;
  virtual bool IsActive() override
  {
    bool res = wxTopLevelWindowNative::IsActive();
    if (*m_wxTopLevelWindowNativeExtIsActive != NULL){
      return m_wxTopLevelWindowNativeExtIsActive(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtIsAlwaysMaximizedFunc m_wxTopLevelWindowNativeExtIsAlwaysMaximized = NULL;
  virtual bool IsAlwaysMaximized() const override
  {
    bool res = wxTopLevelWindowNative::IsAlwaysMaximized();
    if (*m_wxTopLevelWindowNativeExtIsAlwaysMaximized != NULL){
      return m_wxTopLevelWindowNativeExtIsAlwaysMaximized(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtIsFullScreenFunc m_wxTopLevelWindowNativeExtIsFullScreen = NULL;
  virtual bool IsFullScreen() const override
  {
    if (*m_wxTopLevelWindowNativeExtIsFullScreen != NULL){
      return m_wxTopLevelWindowNativeExtIsFullScreen(this);
    }
    else {
      return false;
    }
  }
  wxTopLevelWindowNativeExtIsIconizedFunc m_wxTopLevelWindowNativeExtIsIconized = NULL;
  virtual bool IsIconized() const override
  {
    if (*m_wxTopLevelWindowNativeExtIsIconized != NULL){
      return m_wxTopLevelWindowNativeExtIsIconized(this);
    }
    else {
      return false;
    }
  }
  wxTopLevelWindowNativeExtIsMaximizedFunc m_wxTopLevelWindowNativeExtIsMaximized = NULL;
  virtual bool IsMaximized() const override
  {
    if (*m_wxTopLevelWindowNativeExtIsMaximized != NULL){
      return m_wxTopLevelWindowNativeExtIsMaximized(this);
    }
    else {
      return false;
    }
  }
  wxTopLevelWindowNativeExtIsOneOfBars__wxWindowCPFunc m_wxTopLevelWindowNativeExtIsOneOfBars__wxWindowCP = NULL;
  virtual bool IsOneOfBars(wxWindow const* win) const override
  {
    bool res = wxTopLevelWindowNative::IsOneOfBars(win);
    if (*m_wxTopLevelWindowNativeExtIsOneOfBars__wxWindowCP != NULL){
      return m_wxTopLevelWindowNativeExtIsOneOfBars__wxWindowCP(this, win, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtIsTopLevelFunc m_wxTopLevelWindowNativeExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxTopLevelWindowNative::IsTopLevel();
    if (*m_wxTopLevelWindowNativeExtIsTopLevel != NULL){
      return m_wxTopLevelWindowNativeExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxTopLevelWindowNativeExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxTopLevelWindowNative::IsTopNavigationDomain(kind);
    if (*m_wxTopLevelWindowNativeExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxTopLevelWindowNativeExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtIsVisibleFunc m_wxTopLevelWindowNativeExtIsVisible = NULL;
  virtual bool IsVisible() const override
  {
    bool res = wxTopLevelWindowNative::IsVisible();
    if (*m_wxTopLevelWindowNativeExtIsVisible != NULL){
      return m_wxTopLevelWindowNativeExtIsVisible(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtLayoutFunc m_wxTopLevelWindowNativeExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxTopLevelWindowNative::Layout();
    if (*m_wxTopLevelWindowNativeExtLayout != NULL){
      return m_wxTopLevelWindowNativeExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtMaximize__boolFunc m_wxTopLevelWindowNativeExtMaximize__bool = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    if (*m_wxTopLevelWindowNativeExtMaximize__bool != NULL){
      return m_wxTopLevelWindowNativeExtMaximize__bool(this, maximize);
    }
  }
  wxTopLevelWindowNativeExtOSXIsModifiedFunc m_wxTopLevelWindowNativeExtOSXIsModified = NULL;
  virtual bool OSXIsModified() const override
  {
    bool res = wxTopLevelWindowNative::OSXIsModified();
    if (*m_wxTopLevelWindowNativeExtOSXIsModified != NULL){
      return m_wxTopLevelWindowNativeExtOSXIsModified(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtOSXSetModified__boolFunc m_wxTopLevelWindowNativeExtOSXSetModified__bool = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxTopLevelWindowNative::OSXSetModified(modified);
    if (*m_wxTopLevelWindowNativeExtOSXSetModified__bool != NULL){
      return m_wxTopLevelWindowNativeExtOSXSetModified__bool(this, modified);
    }
  }
  wxTopLevelWindowNativeExtRequestUserAttention__intFunc m_wxTopLevelWindowNativeExtRequestUserAttention__int = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxTopLevelWindowNative::RequestUserAttention(flags);
    if (*m_wxTopLevelWindowNativeExtRequestUserAttention__int != NULL){
      return m_wxTopLevelWindowNativeExtRequestUserAttention__int(this, flags);
    }
  }
  wxTopLevelWindowNativeExtRestoreFunc m_wxTopLevelWindowNativeExtRestore = NULL;
  virtual void Restore() override
  {
    if (*m_wxTopLevelWindowNativeExtRestore != NULL){
      return m_wxTopLevelWindowNativeExtRestore(this);
    }
  }
  wxTopLevelWindowNativeExtSetContentProtection__wxContentProtectionFunc m_wxTopLevelWindowNativeExtSetContentProtection__wxContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection contentProtection) override
  {
    bool res = wxTopLevelWindowNative::SetContentProtection(contentProtection);
    if (*m_wxTopLevelWindowNativeExtSetContentProtection__wxContentProtection != NULL){
      return m_wxTopLevelWindowNativeExtSetContentProtection__wxContentProtection(this, contentProtection, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtSetIcons__wxIconBundleCRFunc m_wxTopLevelWindowNativeExtSetIcons__wxIconBundleCR = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxTopLevelWindowNative::SetIcons(icons);
    if (*m_wxTopLevelWindowNativeExtSetIcons__wxIconBundleCR != NULL){
      return m_wxTopLevelWindowNativeExtSetIcons__wxIconBundleCR(this, icons);
    }
  }
  wxTopLevelWindowNativeExtSetLabel__wxStringCRFunc m_wxTopLevelWindowNativeExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxTopLevelWindowNative::SetLabel(label);
    if (*m_wxTopLevelWindowNativeExtSetLabel__wxStringCR != NULL){
      return m_wxTopLevelWindowNativeExtSetLabel__wxStringCR(this, label);
    }
  }
  wxTopLevelWindowNativeExtSetMaxSize__wxSizeCRFunc m_wxTopLevelWindowNativeExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxTopLevelWindowNative::SetMaxSize(maxSize);
    if (*m_wxTopLevelWindowNativeExtSetMaxSize__wxSizeCR != NULL){
      return m_wxTopLevelWindowNativeExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxTopLevelWindowNativeExtSetMinSize__wxSizeCRFunc m_wxTopLevelWindowNativeExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxTopLevelWindowNative::SetMinSize(minSize);
    if (*m_wxTopLevelWindowNativeExtSetMinSize__wxSizeCR != NULL){
      return m_wxTopLevelWindowNativeExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxTopLevelWindowNativeExtSetRepresentedFilename__wxStringCRFunc m_wxTopLevelWindowNativeExtSetRepresentedFilename__wxStringCR = NULL;
  virtual void SetRepresentedFilename(wxString const& filename) override
  {
    wxTopLevelWindowNative::SetRepresentedFilename(filename);
    if (*m_wxTopLevelWindowNativeExtSetRepresentedFilename__wxStringCR != NULL){
      return m_wxTopLevelWindowNativeExtSetRepresentedFilename__wxStringCR(this, filename);
    }
  }
  wxTopLevelWindowNativeExtSetTitle__wxStringCRFunc m_wxTopLevelWindowNativeExtSetTitle__wxStringCR = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    if (*m_wxTopLevelWindowNativeExtSetTitle__wxStringCR != NULL){
      return m_wxTopLevelWindowNativeExtSetTitle__wxStringCR(this, title);
    }
  }
  wxTopLevelWindowNativeExtShouldPreventAppExitFunc m_wxTopLevelWindowNativeExtShouldPreventAppExit = NULL;
  virtual bool ShouldPreventAppExit() const override
  {
    bool res = wxTopLevelWindowNative::ShouldPreventAppExit();
    if (*m_wxTopLevelWindowNativeExtShouldPreventAppExit != NULL){
      return m_wxTopLevelWindowNativeExtShouldPreventAppExit(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtShowFullScreen__boollongFunc m_wxTopLevelWindowNativeExtShowFullScreen__boollong = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    if (*m_wxTopLevelWindowNativeExtShowFullScreen__boollong != NULL){
      return m_wxTopLevelWindowNativeExtShowFullScreen__boollong(this, show, style);
    }
    else {
      return false;
    }
  }
  wxTopLevelWindowNativeExtShowWithoutActivatingFunc m_wxTopLevelWindowNativeExtShowWithoutActivating = NULL;
  virtual void ShowWithoutActivating() override
  {
    wxTopLevelWindowNative::ShowWithoutActivating();
    if (*m_wxTopLevelWindowNativeExtShowWithoutActivating != NULL){
      return m_wxTopLevelWindowNativeExtShowWithoutActivating(this);
    }
  }
  wxTopLevelWindowNativeExtWXReservedTLW1__voidPFunc m_wxTopLevelWindowNativeExtWXReservedTLW1__voidP = NULL;
  virtual void* WXReservedTLW1(void* param0) override
  {
    void* res = wxTopLevelWindowNative::WXReservedTLW1(param0);
    if (*m_wxTopLevelWindowNativeExtWXReservedTLW1__voidP != NULL){
      return m_wxTopLevelWindowNativeExtWXReservedTLW1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtWXReservedTLW2__voidPFunc m_wxTopLevelWindowNativeExtWXReservedTLW2__voidP = NULL;
  virtual void* WXReservedTLW2(void* param0) override
  {
    void* res = wxTopLevelWindowNative::WXReservedTLW2(param0);
    if (*m_wxTopLevelWindowNativeExtWXReservedTLW2__voidP != NULL){
      return m_wxTopLevelWindowNativeExtWXReservedTLW2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtWXReservedTLW3__voidPFunc m_wxTopLevelWindowNativeExtWXReservedTLW3__voidP = NULL;
  virtual void* WXReservedTLW3(void* param0) override
  {
    void* res = wxTopLevelWindowNative::WXReservedTLW3(param0);
    if (*m_wxTopLevelWindowNativeExtWXReservedTLW3__voidP != NULL){
      return m_wxTopLevelWindowNativeExtWXReservedTLW3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExt(wxTopLevelWindowNativeExtDestroyFunc a_Destroy, wxTopLevelWindowNativeExtDoCentre__intFunc a_DoCentre__int, wxTopLevelWindowNativeExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxTopLevelWindowNativeExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxTopLevelWindowNativeExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxTopLevelWindowNativeExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxTopLevelWindowNativeExtEnableCloseButton__boolFunc a_EnableCloseButton__bool, wxTopLevelWindowNativeExtEnableFullScreenView__boollongFunc a_EnableFullScreenView__boollong, wxTopLevelWindowNativeExtEnableMaximizeButton__boolFunc a_EnableMaximizeButton__bool, wxTopLevelWindowNativeExtEnableMinimizeButton__boolFunc a_EnableMinimizeButton__bool, wxTopLevelWindowNativeExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxTopLevelWindowNativeExtGetContentProtectionFunc a_GetContentProtection, wxTopLevelWindowNativeExtGetEventHashTableFunc a_GetEventHashTable, wxTopLevelWindowNativeExtGetEventTableFunc a_GetEventTable, wxTopLevelWindowNativeExtGetLabelFunc a_GetLabel, wxTopLevelWindowNativeExtGetRectForTopLevelChildren__intPintPintPintPFunc a_GetRectForTopLevelChildren__intPintPintPintP, wxTopLevelWindowNativeExtGetTitleFunc a_GetTitle, wxTopLevelWindowNativeExtIconize__boolFunc a_Iconize__bool, wxTopLevelWindowNativeExtIsActiveFunc a_IsActive, wxTopLevelWindowNativeExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxTopLevelWindowNativeExtIsFullScreenFunc a_IsFullScreen, wxTopLevelWindowNativeExtIsIconizedFunc a_IsIconized, wxTopLevelWindowNativeExtIsMaximizedFunc a_IsMaximized, wxTopLevelWindowNativeExtIsOneOfBars__wxWindowCPFunc a_IsOneOfBars__wxWindowCP, wxTopLevelWindowNativeExtIsTopLevelFunc a_IsTopLevel, wxTopLevelWindowNativeExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxTopLevelWindowNativeExtIsVisibleFunc a_IsVisible, wxTopLevelWindowNativeExtLayoutFunc a_Layout, wxTopLevelWindowNativeExtMaximize__boolFunc a_Maximize__bool, wxTopLevelWindowNativeExtOSXIsModifiedFunc a_OSXIsModified, wxTopLevelWindowNativeExtOSXSetModified__boolFunc a_OSXSetModified__bool, wxTopLevelWindowNativeExtRequestUserAttention__intFunc a_RequestUserAttention__int, wxTopLevelWindowNativeExtRestoreFunc a_Restore, wxTopLevelWindowNativeExtSetContentProtection__wxContentProtectionFunc a_SetContentProtection__wxContentProtection, wxTopLevelWindowNativeExtSetIcons__wxIconBundleCRFunc a_SetIcons__wxIconBundleCR, wxTopLevelWindowNativeExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxTopLevelWindowNativeExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxTopLevelWindowNativeExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxTopLevelWindowNativeExtSetRepresentedFilename__wxStringCRFunc a_SetRepresentedFilename__wxStringCR, wxTopLevelWindowNativeExtSetTitle__wxStringCRFunc a_SetTitle__wxStringCR, wxTopLevelWindowNativeExtShouldPreventAppExitFunc a_ShouldPreventAppExit, wxTopLevelWindowNativeExtShowFullScreen__boollongFunc a_ShowFullScreen__boollong, wxTopLevelWindowNativeExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxTopLevelWindowNativeExtWXReservedTLW1__voidPFunc a_WXReservedTLW1__voidP, wxTopLevelWindowNativeExtWXReservedTLW2__voidPFunc a_WXReservedTLW2__voidP, wxTopLevelWindowNativeExtWXReservedTLW3__voidPFunc a_WXReservedTLW3__voidP): wxTopLevelWindowNative() {
    m_wxTopLevelWindowNativeExtDestroy = a_Destroy;
    m_wxTopLevelWindowNativeExtDoCentre__int = a_DoCentre__int;
    m_wxTopLevelWindowNativeExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxTopLevelWindowNativeExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxTopLevelWindowNativeExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxTopLevelWindowNativeExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxTopLevelWindowNativeExtEnableCloseButton__bool = a_EnableCloseButton__bool;
    m_wxTopLevelWindowNativeExtEnableFullScreenView__boollong = a_EnableFullScreenView__boollong;
    m_wxTopLevelWindowNativeExtEnableMaximizeButton__bool = a_EnableMaximizeButton__bool;
    m_wxTopLevelWindowNativeExtEnableMinimizeButton__bool = a_EnableMinimizeButton__bool;
    m_wxTopLevelWindowNativeExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxTopLevelWindowNativeExtGetContentProtection = a_GetContentProtection;
    m_wxTopLevelWindowNativeExtGetEventHashTable = a_GetEventHashTable;
    m_wxTopLevelWindowNativeExtGetEventTable = a_GetEventTable;
    m_wxTopLevelWindowNativeExtGetLabel = a_GetLabel;
    m_wxTopLevelWindowNativeExtGetRectForTopLevelChildren__intPintPintPintP = a_GetRectForTopLevelChildren__intPintPintPintP;
    m_wxTopLevelWindowNativeExtGetTitle = a_GetTitle;
    m_wxTopLevelWindowNativeExtIconize__bool = a_Iconize__bool;
    m_wxTopLevelWindowNativeExtIsActive = a_IsActive;
    m_wxTopLevelWindowNativeExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxTopLevelWindowNativeExtIsFullScreen = a_IsFullScreen;
    m_wxTopLevelWindowNativeExtIsIconized = a_IsIconized;
    m_wxTopLevelWindowNativeExtIsMaximized = a_IsMaximized;
    m_wxTopLevelWindowNativeExtIsOneOfBars__wxWindowCP = a_IsOneOfBars__wxWindowCP;
    m_wxTopLevelWindowNativeExtIsTopLevel = a_IsTopLevel;
    m_wxTopLevelWindowNativeExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxTopLevelWindowNativeExtIsVisible = a_IsVisible;
    m_wxTopLevelWindowNativeExtLayout = a_Layout;
    m_wxTopLevelWindowNativeExtMaximize__bool = a_Maximize__bool;
    m_wxTopLevelWindowNativeExtOSXIsModified = a_OSXIsModified;
    m_wxTopLevelWindowNativeExtOSXSetModified__bool = a_OSXSetModified__bool;
    m_wxTopLevelWindowNativeExtRequestUserAttention__int = a_RequestUserAttention__int;
    m_wxTopLevelWindowNativeExtRestore = a_Restore;
    m_wxTopLevelWindowNativeExtSetContentProtection__wxContentProtection = a_SetContentProtection__wxContentProtection;
    m_wxTopLevelWindowNativeExtSetIcons__wxIconBundleCR = a_SetIcons__wxIconBundleCR;
    m_wxTopLevelWindowNativeExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxTopLevelWindowNativeExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxTopLevelWindowNativeExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxTopLevelWindowNativeExtSetRepresentedFilename__wxStringCR = a_SetRepresentedFilename__wxStringCR;
    m_wxTopLevelWindowNativeExtSetTitle__wxStringCR = a_SetTitle__wxStringCR;
    m_wxTopLevelWindowNativeExtShouldPreventAppExit = a_ShouldPreventAppExit;
    m_wxTopLevelWindowNativeExtShowFullScreen__boollong = a_ShowFullScreen__boollong;
    m_wxTopLevelWindowNativeExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxTopLevelWindowNativeExtWXReservedTLW1__voidP = a_WXReservedTLW1__voidP;
    m_wxTopLevelWindowNativeExtWXReservedTLW2__voidP = a_WXReservedTLW2__voidP;
    m_wxTopLevelWindowNativeExtWXReservedTLW3__voidP = a_WXReservedTLW3__voidP;
  }
};

class wxTopLevelWindowExt: public wxTopLevelWindow
{
public:
  wxTopLevelWindowExt(): wxTopLevelWindow()  {  }
  wxTopLevelWindowExt(wxWindow* parent, wxWindowID winid, wxString const& title, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = (0x0800 | 0x0040 | 0x0400 | 0x0200 | 0x1000 | 0x20000000 | 0x00400000), wxString const& name = wxString::FromAscii(wxFrameNameStr)): wxTopLevelWindow(parent, winid, title, pos, size, style, name)  {  }
  wxTopLevelWindowExtDestroyFunc m_wxTopLevelWindowExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxTopLevelWindow::Destroy();
    if (*m_wxTopLevelWindowExtDestroy != NULL){
      return m_wxTopLevelWindowExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtDoCentre__intFunc m_wxTopLevelWindowExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxTopLevelWindow::DoCentre(dir);
    if (*m_wxTopLevelWindowExtDoCentre__int != NULL){
      return m_wxTopLevelWindowExtDoCentre__int(this, dir);
    }
  }
  wxTopLevelWindowExtDoClientToScreen__intPintPFunc m_wxTopLevelWindowExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxTopLevelWindow::DoClientToScreen(x, y);
    if (*m_wxTopLevelWindowExtDoClientToScreen__intPintP != NULL){
      return m_wxTopLevelWindowExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxTopLevelWindowExtDoGetScreenPosition__intPintPFunc m_wxTopLevelWindowExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxTopLevelWindow::DoGetScreenPosition(x, y);
    if (*m_wxTopLevelWindowExtDoGetScreenPosition__intPintP != NULL){
      return m_wxTopLevelWindowExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxTopLevelWindowExtDoScreenToClient__intPintPFunc m_wxTopLevelWindowExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxTopLevelWindow::DoScreenToClient(x, y);
    if (*m_wxTopLevelWindowExtDoScreenToClient__intPintP != NULL){
      return m_wxTopLevelWindowExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxTopLevelWindowExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxTopLevelWindowExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxTopLevelWindow::DoUpdateWindowUI(event);
    if (*m_wxTopLevelWindowExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxTopLevelWindowExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxTopLevelWindowExtEnableCloseButton__boolFunc m_wxTopLevelWindowExtEnableCloseButton__bool = NULL;
  virtual bool EnableCloseButton(bool enable = true) override
  {
    bool res = wxTopLevelWindow::EnableCloseButton(enable);
    if (*m_wxTopLevelWindowExtEnableCloseButton__bool != NULL){
      return m_wxTopLevelWindowExtEnableCloseButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtEnableFullScreenView__boollongFunc m_wxTopLevelWindowExtEnableFullScreenView__boollong = NULL;
  virtual bool EnableFullScreenView(bool enable = true, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindow::EnableFullScreenView(enable, style);
    if (*m_wxTopLevelWindowExtEnableFullScreenView__boollong != NULL){
      return m_wxTopLevelWindowExtEnableFullScreenView__boollong(this, enable, style, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtEnableMaximizeButton__boolFunc m_wxTopLevelWindowExtEnableMaximizeButton__bool = NULL;
  virtual bool EnableMaximizeButton(bool enable = true) override
  {
    bool res = wxTopLevelWindow::EnableMaximizeButton(enable);
    if (*m_wxTopLevelWindowExtEnableMaximizeButton__bool != NULL){
      return m_wxTopLevelWindowExtEnableMaximizeButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtEnableMinimizeButton__boolFunc m_wxTopLevelWindowExtEnableMinimizeButton__bool = NULL;
  virtual bool EnableMinimizeButton(bool enable = true) override
  {
    bool res = wxTopLevelWindow::EnableMinimizeButton(enable);
    if (*m_wxTopLevelWindowExtEnableMinimizeButton__bool != NULL){
      return m_wxTopLevelWindowExtEnableMinimizeButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtGetClassInfoFunc m_wxTopLevelWindowExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxTopLevelWindow::GetClassInfo();
    if (*m_wxTopLevelWindowExtGetClassInfo != NULL){
      return m_wxTopLevelWindowExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtGetClientAreaOriginFunc m_wxTopLevelWindowExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxTopLevelWindow::GetClientAreaOrigin();
    if (*m_wxTopLevelWindowExtGetClientAreaOrigin != NULL){
      return m_wxTopLevelWindowExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtGetContentProtectionFunc m_wxTopLevelWindowExtGetContentProtection = NULL;
  virtual wxContentProtection GetContentProtection() const override
  {
    wxContentProtection res = wxTopLevelWindow::GetContentProtection();
    if (*m_wxTopLevelWindowExtGetContentProtection != NULL){
      return m_wxTopLevelWindowExtGetContentProtection(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtGetEventHashTableFunc m_wxTopLevelWindowExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxTopLevelWindow::GetEventHashTable();
    if (*m_wxTopLevelWindowExtGetEventHashTable != NULL){
      return m_wxTopLevelWindowExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtGetEventTableFunc m_wxTopLevelWindowExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxTopLevelWindow::GetEventTable();
    if (*m_wxTopLevelWindowExtGetEventTable != NULL){
      return m_wxTopLevelWindowExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtGetLabelFunc m_wxTopLevelWindowExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxTopLevelWindow::GetLabel();
    if (*m_wxTopLevelWindowExtGetLabel != NULL){
      return m_wxTopLevelWindowExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtGetRectForTopLevelChildren__intPintPintPintPFunc m_wxTopLevelWindowExtGetRectForTopLevelChildren__intPintPintPintP = NULL;
  virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h) override
  {
    wxTopLevelWindow::GetRectForTopLevelChildren(x, y, w, h);
    if (*m_wxTopLevelWindowExtGetRectForTopLevelChildren__intPintPintPintP != NULL){
      return m_wxTopLevelWindowExtGetRectForTopLevelChildren__intPintPintPintP(this, x, y, w, h);
    }
  }
  wxTopLevelWindowExtGetTitleFunc m_wxTopLevelWindowExtGetTitle = NULL;
  virtual wxString GetTitle() const override
  {
    wxString res = wxTopLevelWindow::GetTitle();
    if (*m_wxTopLevelWindowExtGetTitle != NULL){
      return m_wxTopLevelWindowExtGetTitle(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtIconize__boolFunc m_wxTopLevelWindowExtIconize__bool = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    wxTopLevelWindow::Iconize(iconize);
    if (*m_wxTopLevelWindowExtIconize__bool != NULL){
      return m_wxTopLevelWindowExtIconize__bool(this, iconize);
    }
  }
  wxTopLevelWindowExtIsActiveFunc m_wxTopLevelWindowExtIsActive = NULL;
  virtual bool IsActive() override
  {
    bool res = wxTopLevelWindow::IsActive();
    if (*m_wxTopLevelWindowExtIsActive != NULL){
      return m_wxTopLevelWindowExtIsActive(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtIsAlwaysMaximizedFunc m_wxTopLevelWindowExtIsAlwaysMaximized = NULL;
  virtual bool IsAlwaysMaximized() const override
  {
    bool res = wxTopLevelWindow::IsAlwaysMaximized();
    if (*m_wxTopLevelWindowExtIsAlwaysMaximized != NULL){
      return m_wxTopLevelWindowExtIsAlwaysMaximized(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtIsFullScreenFunc m_wxTopLevelWindowExtIsFullScreen = NULL;
  virtual bool IsFullScreen() const override
  {
    bool res = wxTopLevelWindow::IsFullScreen();
    if (*m_wxTopLevelWindowExtIsFullScreen != NULL){
      return m_wxTopLevelWindowExtIsFullScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtIsIconizedFunc m_wxTopLevelWindowExtIsIconized = NULL;
  virtual bool IsIconized() const override
  {
    bool res = wxTopLevelWindow::IsIconized();
    if (*m_wxTopLevelWindowExtIsIconized != NULL){
      return m_wxTopLevelWindowExtIsIconized(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtIsMaximizedFunc m_wxTopLevelWindowExtIsMaximized = NULL;
  virtual bool IsMaximized() const override
  {
    bool res = wxTopLevelWindow::IsMaximized();
    if (*m_wxTopLevelWindowExtIsMaximized != NULL){
      return m_wxTopLevelWindowExtIsMaximized(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtIsOneOfBars__wxWindowCPFunc m_wxTopLevelWindowExtIsOneOfBars__wxWindowCP = NULL;
  virtual bool IsOneOfBars(wxWindow const* win) const override
  {
    bool res = wxTopLevelWindow::IsOneOfBars(win);
    if (*m_wxTopLevelWindowExtIsOneOfBars__wxWindowCP != NULL){
      return m_wxTopLevelWindowExtIsOneOfBars__wxWindowCP(this, win, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtIsTopLevelFunc m_wxTopLevelWindowExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxTopLevelWindow::IsTopLevel();
    if (*m_wxTopLevelWindowExtIsTopLevel != NULL){
      return m_wxTopLevelWindowExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxTopLevelWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxTopLevelWindow::IsTopNavigationDomain(kind);
    if (*m_wxTopLevelWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxTopLevelWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtIsVisibleFunc m_wxTopLevelWindowExtIsVisible = NULL;
  virtual bool IsVisible() const override
  {
    bool res = wxTopLevelWindow::IsVisible();
    if (*m_wxTopLevelWindowExtIsVisible != NULL){
      return m_wxTopLevelWindowExtIsVisible(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtLayoutFunc m_wxTopLevelWindowExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxTopLevelWindow::Layout();
    if (*m_wxTopLevelWindowExtLayout != NULL){
      return m_wxTopLevelWindowExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtMaximize__boolFunc m_wxTopLevelWindowExtMaximize__bool = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    wxTopLevelWindow::Maximize(maximize);
    if (*m_wxTopLevelWindowExtMaximize__bool != NULL){
      return m_wxTopLevelWindowExtMaximize__bool(this, maximize);
    }
  }
  wxTopLevelWindowExtOSXIsModifiedFunc m_wxTopLevelWindowExtOSXIsModified = NULL;
  virtual bool OSXIsModified() const override
  {
    bool res = wxTopLevelWindow::OSXIsModified();
    if (*m_wxTopLevelWindowExtOSXIsModified != NULL){
      return m_wxTopLevelWindowExtOSXIsModified(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtOSXSetModified__boolFunc m_wxTopLevelWindowExtOSXSetModified__bool = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxTopLevelWindow::OSXSetModified(modified);
    if (*m_wxTopLevelWindowExtOSXSetModified__bool != NULL){
      return m_wxTopLevelWindowExtOSXSetModified__bool(this, modified);
    }
  }
  wxTopLevelWindowExtRequestUserAttention__intFunc m_wxTopLevelWindowExtRequestUserAttention__int = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxTopLevelWindow::RequestUserAttention(flags);
    if (*m_wxTopLevelWindowExtRequestUserAttention__int != NULL){
      return m_wxTopLevelWindowExtRequestUserAttention__int(this, flags);
    }
  }
  wxTopLevelWindowExtRestoreFunc m_wxTopLevelWindowExtRestore = NULL;
  virtual void Restore() override
  {
    wxTopLevelWindow::Restore();
    if (*m_wxTopLevelWindowExtRestore != NULL){
      return m_wxTopLevelWindowExtRestore(this);
    }
  }
  wxTopLevelWindowExtSetContentProtection__wxContentProtectionFunc m_wxTopLevelWindowExtSetContentProtection__wxContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection contentProtection) override
  {
    bool res = wxTopLevelWindow::SetContentProtection(contentProtection);
    if (*m_wxTopLevelWindowExtSetContentProtection__wxContentProtection != NULL){
      return m_wxTopLevelWindowExtSetContentProtection__wxContentProtection(this, contentProtection, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtSetIcons__wxIconBundleCRFunc m_wxTopLevelWindowExtSetIcons__wxIconBundleCR = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxTopLevelWindow::SetIcons(icons);
    if (*m_wxTopLevelWindowExtSetIcons__wxIconBundleCR != NULL){
      return m_wxTopLevelWindowExtSetIcons__wxIconBundleCR(this, icons);
    }
  }
  wxTopLevelWindowExtSetLabel__wxStringCRFunc m_wxTopLevelWindowExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxTopLevelWindow::SetLabel(label);
    if (*m_wxTopLevelWindowExtSetLabel__wxStringCR != NULL){
      return m_wxTopLevelWindowExtSetLabel__wxStringCR(this, label);
    }
  }
  wxTopLevelWindowExtSetMaxSize__wxSizeCRFunc m_wxTopLevelWindowExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxTopLevelWindow::SetMaxSize(maxSize);
    if (*m_wxTopLevelWindowExtSetMaxSize__wxSizeCR != NULL){
      return m_wxTopLevelWindowExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxTopLevelWindowExtSetMinSize__wxSizeCRFunc m_wxTopLevelWindowExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxTopLevelWindow::SetMinSize(minSize);
    if (*m_wxTopLevelWindowExtSetMinSize__wxSizeCR != NULL){
      return m_wxTopLevelWindowExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxTopLevelWindowExtSetRepresentedFilename__wxStringCRFunc m_wxTopLevelWindowExtSetRepresentedFilename__wxStringCR = NULL;
  virtual void SetRepresentedFilename(wxString const& filename) override
  {
    wxTopLevelWindow::SetRepresentedFilename(filename);
    if (*m_wxTopLevelWindowExtSetRepresentedFilename__wxStringCR != NULL){
      return m_wxTopLevelWindowExtSetRepresentedFilename__wxStringCR(this, filename);
    }
  }
  wxTopLevelWindowExtSetTitle__wxStringCRFunc m_wxTopLevelWindowExtSetTitle__wxStringCR = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    wxTopLevelWindow::SetTitle(title);
    if (*m_wxTopLevelWindowExtSetTitle__wxStringCR != NULL){
      return m_wxTopLevelWindowExtSetTitle__wxStringCR(this, title);
    }
  }
  wxTopLevelWindowExtShouldPreventAppExitFunc m_wxTopLevelWindowExtShouldPreventAppExit = NULL;
  virtual bool ShouldPreventAppExit() const override
  {
    bool res = wxTopLevelWindow::ShouldPreventAppExit();
    if (*m_wxTopLevelWindowExtShouldPreventAppExit != NULL){
      return m_wxTopLevelWindowExtShouldPreventAppExit(this, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtShowFullScreen__boollongFunc m_wxTopLevelWindowExtShowFullScreen__boollong = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindow::ShowFullScreen(show, style);
    if (*m_wxTopLevelWindowExtShowFullScreen__boollong != NULL){
      return m_wxTopLevelWindowExtShowFullScreen__boollong(this, show, style, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtShowWithoutActivatingFunc m_wxTopLevelWindowExtShowWithoutActivating = NULL;
  virtual void ShowWithoutActivating() override
  {
    wxTopLevelWindow::ShowWithoutActivating();
    if (*m_wxTopLevelWindowExtShowWithoutActivating != NULL){
      return m_wxTopLevelWindowExtShowWithoutActivating(this);
    }
  }
  wxTopLevelWindowExtWXReservedTLW1__voidPFunc m_wxTopLevelWindowExtWXReservedTLW1__voidP = NULL;
  virtual void* WXReservedTLW1(void* param0) override
  {
    void* res = wxTopLevelWindow::WXReservedTLW1(param0);
    if (*m_wxTopLevelWindowExtWXReservedTLW1__voidP != NULL){
      return m_wxTopLevelWindowExtWXReservedTLW1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtWXReservedTLW2__voidPFunc m_wxTopLevelWindowExtWXReservedTLW2__voidP = NULL;
  virtual void* WXReservedTLW2(void* param0) override
  {
    void* res = wxTopLevelWindow::WXReservedTLW2(param0);
    if (*m_wxTopLevelWindowExtWXReservedTLW2__voidP != NULL){
      return m_wxTopLevelWindowExtWXReservedTLW2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtWXReservedTLW3__voidPFunc m_wxTopLevelWindowExtWXReservedTLW3__voidP = NULL;
  virtual void* WXReservedTLW3(void* param0) override
  {
    void* res = wxTopLevelWindow::WXReservedTLW3(param0);
    if (*m_wxTopLevelWindowExtWXReservedTLW3__voidP != NULL){
      return m_wxTopLevelWindowExtWXReservedTLW3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExt(wxTopLevelWindowExtDestroyFunc a_Destroy, wxTopLevelWindowExtDoCentre__intFunc a_DoCentre__int, wxTopLevelWindowExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxTopLevelWindowExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxTopLevelWindowExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxTopLevelWindowExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxTopLevelWindowExtEnableCloseButton__boolFunc a_EnableCloseButton__bool, wxTopLevelWindowExtEnableFullScreenView__boollongFunc a_EnableFullScreenView__boollong, wxTopLevelWindowExtEnableMaximizeButton__boolFunc a_EnableMaximizeButton__bool, wxTopLevelWindowExtEnableMinimizeButton__boolFunc a_EnableMinimizeButton__bool, wxTopLevelWindowExtGetClassInfoFunc a_GetClassInfo, wxTopLevelWindowExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxTopLevelWindowExtGetContentProtectionFunc a_GetContentProtection, wxTopLevelWindowExtGetEventHashTableFunc a_GetEventHashTable, wxTopLevelWindowExtGetEventTableFunc a_GetEventTable, wxTopLevelWindowExtGetLabelFunc a_GetLabel, wxTopLevelWindowExtGetRectForTopLevelChildren__intPintPintPintPFunc a_GetRectForTopLevelChildren__intPintPintPintP, wxTopLevelWindowExtGetTitleFunc a_GetTitle, wxTopLevelWindowExtIconize__boolFunc a_Iconize__bool, wxTopLevelWindowExtIsActiveFunc a_IsActive, wxTopLevelWindowExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxTopLevelWindowExtIsFullScreenFunc a_IsFullScreen, wxTopLevelWindowExtIsIconizedFunc a_IsIconized, wxTopLevelWindowExtIsMaximizedFunc a_IsMaximized, wxTopLevelWindowExtIsOneOfBars__wxWindowCPFunc a_IsOneOfBars__wxWindowCP, wxTopLevelWindowExtIsTopLevelFunc a_IsTopLevel, wxTopLevelWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxTopLevelWindowExtIsVisibleFunc a_IsVisible, wxTopLevelWindowExtLayoutFunc a_Layout, wxTopLevelWindowExtMaximize__boolFunc a_Maximize__bool, wxTopLevelWindowExtOSXIsModifiedFunc a_OSXIsModified, wxTopLevelWindowExtOSXSetModified__boolFunc a_OSXSetModified__bool, wxTopLevelWindowExtRequestUserAttention__intFunc a_RequestUserAttention__int, wxTopLevelWindowExtRestoreFunc a_Restore, wxTopLevelWindowExtSetContentProtection__wxContentProtectionFunc a_SetContentProtection__wxContentProtection, wxTopLevelWindowExtSetIcons__wxIconBundleCRFunc a_SetIcons__wxIconBundleCR, wxTopLevelWindowExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxTopLevelWindowExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxTopLevelWindowExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxTopLevelWindowExtSetRepresentedFilename__wxStringCRFunc a_SetRepresentedFilename__wxStringCR, wxTopLevelWindowExtSetTitle__wxStringCRFunc a_SetTitle__wxStringCR, wxTopLevelWindowExtShouldPreventAppExitFunc a_ShouldPreventAppExit, wxTopLevelWindowExtShowFullScreen__boollongFunc a_ShowFullScreen__boollong, wxTopLevelWindowExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxTopLevelWindowExtWXReservedTLW1__voidPFunc a_WXReservedTLW1__voidP, wxTopLevelWindowExtWXReservedTLW2__voidPFunc a_WXReservedTLW2__voidP, wxTopLevelWindowExtWXReservedTLW3__voidPFunc a_WXReservedTLW3__voidP): wxTopLevelWindow() {
    m_wxTopLevelWindowExtDestroy = a_Destroy;
    m_wxTopLevelWindowExtDoCentre__int = a_DoCentre__int;
    m_wxTopLevelWindowExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxTopLevelWindowExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxTopLevelWindowExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxTopLevelWindowExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxTopLevelWindowExtEnableCloseButton__bool = a_EnableCloseButton__bool;
    m_wxTopLevelWindowExtEnableFullScreenView__boollong = a_EnableFullScreenView__boollong;
    m_wxTopLevelWindowExtEnableMaximizeButton__bool = a_EnableMaximizeButton__bool;
    m_wxTopLevelWindowExtEnableMinimizeButton__bool = a_EnableMinimizeButton__bool;
    m_wxTopLevelWindowExtGetClassInfo = a_GetClassInfo;
    m_wxTopLevelWindowExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxTopLevelWindowExtGetContentProtection = a_GetContentProtection;
    m_wxTopLevelWindowExtGetEventHashTable = a_GetEventHashTable;
    m_wxTopLevelWindowExtGetEventTable = a_GetEventTable;
    m_wxTopLevelWindowExtGetLabel = a_GetLabel;
    m_wxTopLevelWindowExtGetRectForTopLevelChildren__intPintPintPintP = a_GetRectForTopLevelChildren__intPintPintPintP;
    m_wxTopLevelWindowExtGetTitle = a_GetTitle;
    m_wxTopLevelWindowExtIconize__bool = a_Iconize__bool;
    m_wxTopLevelWindowExtIsActive = a_IsActive;
    m_wxTopLevelWindowExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxTopLevelWindowExtIsFullScreen = a_IsFullScreen;
    m_wxTopLevelWindowExtIsIconized = a_IsIconized;
    m_wxTopLevelWindowExtIsMaximized = a_IsMaximized;
    m_wxTopLevelWindowExtIsOneOfBars__wxWindowCP = a_IsOneOfBars__wxWindowCP;
    m_wxTopLevelWindowExtIsTopLevel = a_IsTopLevel;
    m_wxTopLevelWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxTopLevelWindowExtIsVisible = a_IsVisible;
    m_wxTopLevelWindowExtLayout = a_Layout;
    m_wxTopLevelWindowExtMaximize__bool = a_Maximize__bool;
    m_wxTopLevelWindowExtOSXIsModified = a_OSXIsModified;
    m_wxTopLevelWindowExtOSXSetModified__bool = a_OSXSetModified__bool;
    m_wxTopLevelWindowExtRequestUserAttention__int = a_RequestUserAttention__int;
    m_wxTopLevelWindowExtRestore = a_Restore;
    m_wxTopLevelWindowExtSetContentProtection__wxContentProtection = a_SetContentProtection__wxContentProtection;
    m_wxTopLevelWindowExtSetIcons__wxIconBundleCR = a_SetIcons__wxIconBundleCR;
    m_wxTopLevelWindowExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxTopLevelWindowExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxTopLevelWindowExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxTopLevelWindowExtSetRepresentedFilename__wxStringCR = a_SetRepresentedFilename__wxStringCR;
    m_wxTopLevelWindowExtSetTitle__wxStringCR = a_SetTitle__wxStringCR;
    m_wxTopLevelWindowExtShouldPreventAppExit = a_ShouldPreventAppExit;
    m_wxTopLevelWindowExtShowFullScreen__boollong = a_ShowFullScreen__boollong;
    m_wxTopLevelWindowExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxTopLevelWindowExtWXReservedTLW1__voidP = a_WXReservedTLW1__voidP;
    m_wxTopLevelWindowExtWXReservedTLW2__voidP = a_WXReservedTLW2__voidP;
    m_wxTopLevelWindowExtWXReservedTLW3__voidP = a_WXReservedTLW3__voidP;
  }
};



#endif
