#ifndef _WX_TOPLEVEL_H_EXT_
#define _WX_TOPLEVEL_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxTopLevelWindowBaseExt;
typedef bool (*wxTopLevelWindowBaseExtDestroyFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef void (*wxTopLevelWindowBaseExtDoCentreintFunc)(const wxTopLevelWindowBaseExt* self, int dir);
typedef void (*wxTopLevelWindowBaseExtDoClientToScreenintPintPFunc)(const wxTopLevelWindowBaseExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowBaseExtDoGetScreenPositionintPintPFunc)(const wxTopLevelWindowBaseExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowBaseExtDoScreenToClientintPintPFunc)(const wxTopLevelWindowBaseExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxTopLevelWindowBaseExt* self, wxUpdateUIEvent& event);
typedef bool (*wxTopLevelWindowBaseExtEnableCloseButtonboolFunc)(const wxTopLevelWindowBaseExt* self, bool param0, bool res);
typedef bool (*wxTopLevelWindowBaseExtEnableFullScreenViewboollongFunc)(const wxTopLevelWindowBaseExt* self, bool param0, long param1, bool res);
typedef bool (*wxTopLevelWindowBaseExtEnableMaximizeButtonboolFunc)(const wxTopLevelWindowBaseExt* self, bool param0, bool res);
typedef bool (*wxTopLevelWindowBaseExtEnableMinimizeButtonboolFunc)(const wxTopLevelWindowBaseExt* self, bool param0, bool res);
typedef wxContentProtection (*wxTopLevelWindowBaseExtGetContentProtectionFunc)(const wxTopLevelWindowBaseExt* self, wxContentProtection res);
typedef wxEventHashTable& (*wxTopLevelWindowBaseExtGetEventHashTableFunc)(const wxTopLevelWindowBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxTopLevelWindowBaseExtGetEventTableFunc)(const wxTopLevelWindowBaseExt* self, wxEventTable const* res);
typedef void (*wxTopLevelWindowBaseExtGetRectForTopLevelChildrenintPintPintPintPFunc)(const wxTopLevelWindowBaseExt* self, int* x, int* y, int* w, int* h);
typedef wxString (*wxTopLevelWindowBaseExtGetTitleFunc)(const wxTopLevelWindowBaseExt* self);
typedef void (*wxTopLevelWindowBaseExtIconizeboolFunc)(const wxTopLevelWindowBaseExt* self, bool iconize);
typedef bool (*wxTopLevelWindowBaseExtIsActiveFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef bool (*wxTopLevelWindowBaseExtIsAlwaysMaximizedFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef bool (*wxTopLevelWindowBaseExtIsFullScreenFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtIsIconizedFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtIsMaximizedFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtIsOneOfBarswxWindowCPFunc)(const wxTopLevelWindowBaseExt* self, wxWindow const* param0, bool res);
typedef bool (*wxTopLevelWindowBaseExtIsTopLevelFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef bool (*wxTopLevelWindowBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxTopLevelWindowBaseExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxTopLevelWindowBaseExtIsVisibleFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef bool (*wxTopLevelWindowBaseExtLayoutFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef void (*wxTopLevelWindowBaseExtMaximizeboolFunc)(const wxTopLevelWindowBaseExt* self, bool maximize);
typedef bool (*wxTopLevelWindowBaseExtOSXIsModifiedFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef void (*wxTopLevelWindowBaseExtOSXSetModifiedboolFunc)(const wxTopLevelWindowBaseExt* self, bool modified);
typedef void (*wxTopLevelWindowBaseExtRequestUserAttentionintFunc)(const wxTopLevelWindowBaseExt* self, int flags);
typedef void (*wxTopLevelWindowBaseExtRestoreFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtSetContentProtectionwxContentProtectionFunc)(const wxTopLevelWindowBaseExt* self, wxContentProtection param0, bool res);
typedef void (*wxTopLevelWindowBaseExtSetIconswxIconBundleCRFunc)(const wxTopLevelWindowBaseExt* self, wxIconBundle const& icons);
typedef void (*wxTopLevelWindowBaseExtSetMaxSizewxSizeCRFunc)(const wxTopLevelWindowBaseExt* self, wxSize const& maxSize);
typedef void (*wxTopLevelWindowBaseExtSetMinSizewxSizeCRFunc)(const wxTopLevelWindowBaseExt* self, wxSize const& minSize);
typedef void (*wxTopLevelWindowBaseExtSetRepresentedFilenamewxStringCRFunc)(const wxTopLevelWindowBaseExt* self, wxString const& param0);
typedef void (*wxTopLevelWindowBaseExtSetTitlewxStringCRFunc)(const wxTopLevelWindowBaseExt* self, wxString const& title);
typedef bool (*wxTopLevelWindowBaseExtShouldPreventAppExitFunc)(const wxTopLevelWindowBaseExt* self, bool res);
typedef bool (*wxTopLevelWindowBaseExtShowFullScreenboollongFunc)(const wxTopLevelWindowBaseExt* self, bool show, long style);
typedef void (*wxTopLevelWindowBaseExtShowWithoutActivatingFunc)(const wxTopLevelWindowBaseExt* self);
typedef void* (*wxTopLevelWindowBaseExtWXReservedTLW1voidPFunc)(const wxTopLevelWindowBaseExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowBaseExtWXReservedTLW2voidPFunc)(const wxTopLevelWindowBaseExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowBaseExtWXReservedTLW3voidPFunc)(const wxTopLevelWindowBaseExt* self, void* param0, void* res);
class wxTopLevelWindowNativeExt;
typedef bool (*wxTopLevelWindowNativeExtDestroyFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef void (*wxTopLevelWindowNativeExtDoCentreintFunc)(const wxTopLevelWindowNativeExt* self, int dir);
typedef void (*wxTopLevelWindowNativeExtDoClientToScreenintPintPFunc)(const wxTopLevelWindowNativeExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowNativeExtDoGetScreenPositionintPintPFunc)(const wxTopLevelWindowNativeExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowNativeExtDoScreenToClientintPintPFunc)(const wxTopLevelWindowNativeExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowNativeExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxTopLevelWindowNativeExt* self, wxUpdateUIEvent& event);
typedef bool (*wxTopLevelWindowNativeExtEnableCloseButtonboolFunc)(const wxTopLevelWindowNativeExt* self, bool param0, bool res);
typedef bool (*wxTopLevelWindowNativeExtEnableFullScreenViewboollongFunc)(const wxTopLevelWindowNativeExt* self, bool param0, long param1, bool res);
typedef bool (*wxTopLevelWindowNativeExtEnableMaximizeButtonboolFunc)(const wxTopLevelWindowNativeExt* self, bool param0, bool res);
typedef bool (*wxTopLevelWindowNativeExtEnableMinimizeButtonboolFunc)(const wxTopLevelWindowNativeExt* self, bool param0, bool res);
typedef wxPoint (*wxTopLevelWindowNativeExtGetClientAreaOriginFunc)(const wxTopLevelWindowNativeExt* self, wxPoint res);
typedef wxContentProtection (*wxTopLevelWindowNativeExtGetContentProtectionFunc)(const wxTopLevelWindowNativeExt* self, wxContentProtection res);
typedef wxEventHashTable& (*wxTopLevelWindowNativeExtGetEventHashTableFunc)(const wxTopLevelWindowNativeExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxTopLevelWindowNativeExtGetEventTableFunc)(const wxTopLevelWindowNativeExt* self, wxEventTable const* res);
typedef wxString (*wxTopLevelWindowNativeExtGetLabelFunc)(const wxTopLevelWindowNativeExt* self, wxString res);
typedef void (*wxTopLevelWindowNativeExtGetRectForTopLevelChildrenintPintPintPintPFunc)(const wxTopLevelWindowNativeExt* self, int* x, int* y, int* w, int* h);
typedef wxString (*wxTopLevelWindowNativeExtGetTitleFunc)(const wxTopLevelWindowNativeExt* self);
typedef void (*wxTopLevelWindowNativeExtIconizeboolFunc)(const wxTopLevelWindowNativeExt* self, bool iconize);
typedef bool (*wxTopLevelWindowNativeExtIsActiveFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef bool (*wxTopLevelWindowNativeExtIsAlwaysMaximizedFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef bool (*wxTopLevelWindowNativeExtIsFullScreenFunc)(const wxTopLevelWindowNativeExt* self);
typedef bool (*wxTopLevelWindowNativeExtIsIconizedFunc)(const wxTopLevelWindowNativeExt* self);
typedef bool (*wxTopLevelWindowNativeExtIsMaximizedFunc)(const wxTopLevelWindowNativeExt* self);
typedef bool (*wxTopLevelWindowNativeExtIsOneOfBarswxWindowCPFunc)(const wxTopLevelWindowNativeExt* self, wxWindow const* param0, bool res);
typedef bool (*wxTopLevelWindowNativeExtIsTopLevelFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef bool (*wxTopLevelWindowNativeExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxTopLevelWindowNativeExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxTopLevelWindowNativeExtIsVisibleFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef bool (*wxTopLevelWindowNativeExtLayoutFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef void (*wxTopLevelWindowNativeExtMaximizeboolFunc)(const wxTopLevelWindowNativeExt* self, bool maximize);
typedef bool (*wxTopLevelWindowNativeExtOSXIsModifiedFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef void (*wxTopLevelWindowNativeExtOSXSetModifiedboolFunc)(const wxTopLevelWindowNativeExt* self, bool modified);
typedef void (*wxTopLevelWindowNativeExtRequestUserAttentionintFunc)(const wxTopLevelWindowNativeExt* self, int flags);
typedef void (*wxTopLevelWindowNativeExtRestoreFunc)(const wxTopLevelWindowNativeExt* self);
typedef bool (*wxTopLevelWindowNativeExtSetContentProtectionwxContentProtectionFunc)(const wxTopLevelWindowNativeExt* self, wxContentProtection param0, bool res);
typedef void (*wxTopLevelWindowNativeExtSetIconswxIconBundleCRFunc)(const wxTopLevelWindowNativeExt* self, wxIconBundle const& icons);
typedef void (*wxTopLevelWindowNativeExtSetLabelwxStringCRFunc)(const wxTopLevelWindowNativeExt* self, wxString const& label);
typedef void (*wxTopLevelWindowNativeExtSetMaxSizewxSizeCRFunc)(const wxTopLevelWindowNativeExt* self, wxSize const& maxSize);
typedef void (*wxTopLevelWindowNativeExtSetMinSizewxSizeCRFunc)(const wxTopLevelWindowNativeExt* self, wxSize const& minSize);
typedef void (*wxTopLevelWindowNativeExtSetRepresentedFilenamewxStringCRFunc)(const wxTopLevelWindowNativeExt* self, wxString const& param0);
typedef void (*wxTopLevelWindowNativeExtSetTitlewxStringCRFunc)(const wxTopLevelWindowNativeExt* self, wxString const& title);
typedef bool (*wxTopLevelWindowNativeExtShouldPreventAppExitFunc)(const wxTopLevelWindowNativeExt* self, bool res);
typedef bool (*wxTopLevelWindowNativeExtShowFullScreenboollongFunc)(const wxTopLevelWindowNativeExt* self, bool show, long style);
typedef void (*wxTopLevelWindowNativeExtShowWithoutActivatingFunc)(const wxTopLevelWindowNativeExt* self);
typedef void* (*wxTopLevelWindowNativeExtWXReservedTLW1voidPFunc)(const wxTopLevelWindowNativeExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowNativeExtWXReservedTLW2voidPFunc)(const wxTopLevelWindowNativeExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowNativeExtWXReservedTLW3voidPFunc)(const wxTopLevelWindowNativeExt* self, void* param0, void* res);
class wxTopLevelWindowExt;
typedef bool (*wxTopLevelWindowExtDestroyFunc)(const wxTopLevelWindowExt* self, bool res);
typedef void (*wxTopLevelWindowExtDoCentreintFunc)(const wxTopLevelWindowExt* self, int dir);
typedef void (*wxTopLevelWindowExtDoClientToScreenintPintPFunc)(const wxTopLevelWindowExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowExtDoGetScreenPositionintPintPFunc)(const wxTopLevelWindowExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowExtDoScreenToClientintPintPFunc)(const wxTopLevelWindowExt* self, int* x, int* y);
typedef void (*wxTopLevelWindowExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxTopLevelWindowExt* self, wxUpdateUIEvent& event);
typedef bool (*wxTopLevelWindowExtEnableCloseButtonboolFunc)(const wxTopLevelWindowExt* self, bool enable, bool res);
typedef bool (*wxTopLevelWindowExtEnableFullScreenViewboollongFunc)(const wxTopLevelWindowExt* self, bool enable, long style, bool res);
typedef bool (*wxTopLevelWindowExtEnableMaximizeButtonboolFunc)(const wxTopLevelWindowExt* self, bool enable, bool res);
typedef bool (*wxTopLevelWindowExtEnableMinimizeButtonboolFunc)(const wxTopLevelWindowExt* self, bool enable, bool res);
typedef wxClassInfo* (*wxTopLevelWindowExtGetClassInfoFunc)(const wxTopLevelWindowExt* self, wxClassInfo* res);
typedef wxPoint (*wxTopLevelWindowExtGetClientAreaOriginFunc)(const wxTopLevelWindowExt* self, wxPoint res);
typedef wxContentProtection (*wxTopLevelWindowExtGetContentProtectionFunc)(const wxTopLevelWindowExt* self, wxContentProtection res);
typedef wxEventHashTable& (*wxTopLevelWindowExtGetEventHashTableFunc)(const wxTopLevelWindowExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxTopLevelWindowExtGetEventTableFunc)(const wxTopLevelWindowExt* self, wxEventTable const* res);
typedef wxString (*wxTopLevelWindowExtGetLabelFunc)(const wxTopLevelWindowExt* self, wxString res);
typedef void (*wxTopLevelWindowExtGetRectForTopLevelChildrenintPintPintPintPFunc)(const wxTopLevelWindowExt* self, int* x, int* y, int* w, int* h);
typedef wxString (*wxTopLevelWindowExtGetTitleFunc)(const wxTopLevelWindowExt* self, wxString res);
typedef void (*wxTopLevelWindowExtIconizeboolFunc)(const wxTopLevelWindowExt* self, bool iconize);
typedef bool (*wxTopLevelWindowExtIsActiveFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsAlwaysMaximizedFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsFullScreenFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsIconizedFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsMaximizedFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsOneOfBarswxWindowCPFunc)(const wxTopLevelWindowExt* self, wxWindow const* param0, bool res);
typedef bool (*wxTopLevelWindowExtIsTopLevelFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxTopLevelWindowExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxTopLevelWindowExtIsVisibleFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtLayoutFunc)(const wxTopLevelWindowExt* self, bool res);
typedef void (*wxTopLevelWindowExtMaximizeboolFunc)(const wxTopLevelWindowExt* self, bool maximize);
typedef bool (*wxTopLevelWindowExtOSXIsModifiedFunc)(const wxTopLevelWindowExt* self, bool res);
typedef void (*wxTopLevelWindowExtOSXSetModifiedboolFunc)(const wxTopLevelWindowExt* self, bool modified);
typedef void (*wxTopLevelWindowExtRequestUserAttentionintFunc)(const wxTopLevelWindowExt* self, int flags);
typedef void (*wxTopLevelWindowExtRestoreFunc)(const wxTopLevelWindowExt* self);
typedef bool (*wxTopLevelWindowExtSetContentProtectionwxContentProtectionFunc)(const wxTopLevelWindowExt* self, wxContentProtection contentProtection, bool res);
typedef void (*wxTopLevelWindowExtSetIconswxIconBundleCRFunc)(const wxTopLevelWindowExt* self, wxIconBundle const& icons);
typedef void (*wxTopLevelWindowExtSetLabelwxStringCRFunc)(const wxTopLevelWindowExt* self, wxString const& label);
typedef void (*wxTopLevelWindowExtSetMaxSizewxSizeCRFunc)(const wxTopLevelWindowExt* self, wxSize const& maxSize);
typedef void (*wxTopLevelWindowExtSetMinSizewxSizeCRFunc)(const wxTopLevelWindowExt* self, wxSize const& minSize);
typedef void (*wxTopLevelWindowExtSetRepresentedFilenamewxStringCRFunc)(const wxTopLevelWindowExt* self, wxString const& filename);
typedef void (*wxTopLevelWindowExtSetTitlewxStringCRFunc)(const wxTopLevelWindowExt* self, wxString const& title);
typedef bool (*wxTopLevelWindowExtShouldPreventAppExitFunc)(const wxTopLevelWindowExt* self, bool res);
typedef bool (*wxTopLevelWindowExtShowFullScreenboollongFunc)(const wxTopLevelWindowExt* self, bool show, long style, bool res);
typedef void (*wxTopLevelWindowExtShowWithoutActivatingFunc)(const wxTopLevelWindowExt* self);
typedef void* (*wxTopLevelWindowExtWXReservedTLW1voidPFunc)(const wxTopLevelWindowExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowExtWXReservedTLW2voidPFunc)(const wxTopLevelWindowExt* self, void* param0, void* res);
typedef void* (*wxTopLevelWindowExtWXReservedTLW3voidPFunc)(const wxTopLevelWindowExt* self, void* param0, void* res);

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
  wxTopLevelWindowBaseExtDoCentreintFunc m_wxTopLevelWindowBaseExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxTopLevelWindowBase::DoCentre(dir);
    if (*m_wxTopLevelWindowBaseExtDoCentreint != NULL){
      return m_wxTopLevelWindowBaseExtDoCentreint(this, dir);
    }
  }
  wxTopLevelWindowBaseExtDoClientToScreenintPintPFunc m_wxTopLevelWindowBaseExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxTopLevelWindowBase::DoClientToScreen(x, y);
    if (*m_wxTopLevelWindowBaseExtDoClientToScreenintPintP != NULL){
      return m_wxTopLevelWindowBaseExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxTopLevelWindowBaseExtDoGetScreenPositionintPintPFunc m_wxTopLevelWindowBaseExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxTopLevelWindowBase::DoGetScreenPosition(x, y);
    if (*m_wxTopLevelWindowBaseExtDoGetScreenPositionintPintP != NULL){
      return m_wxTopLevelWindowBaseExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxTopLevelWindowBaseExtDoScreenToClientintPintPFunc m_wxTopLevelWindowBaseExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxTopLevelWindowBase::DoScreenToClient(x, y);
    if (*m_wxTopLevelWindowBaseExtDoScreenToClientintPintP != NULL){
      return m_wxTopLevelWindowBaseExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxTopLevelWindowBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxTopLevelWindowBaseExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxTopLevelWindowBase::DoUpdateWindowUI(event);
    if (*m_wxTopLevelWindowBaseExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxTopLevelWindowBaseExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxTopLevelWindowBaseExtEnableCloseButtonboolFunc m_wxTopLevelWindowBaseExtEnableCloseButtonbool = NULL;
  virtual bool EnableCloseButton(bool param0 = true) override
  {
    bool res = wxTopLevelWindowBase::EnableCloseButton(param0);
    if (*m_wxTopLevelWindowBaseExtEnableCloseButtonbool != NULL){
      return m_wxTopLevelWindowBaseExtEnableCloseButtonbool(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtEnableFullScreenViewboollongFunc m_wxTopLevelWindowBaseExtEnableFullScreenViewboollong = NULL;
  virtual bool EnableFullScreenView(bool param0 = true, long param1 = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindowBase::EnableFullScreenView(param0, param1);
    if (*m_wxTopLevelWindowBaseExtEnableFullScreenViewboollong != NULL){
      return m_wxTopLevelWindowBaseExtEnableFullScreenViewboollong(this, param0, param1, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtEnableMaximizeButtonboolFunc m_wxTopLevelWindowBaseExtEnableMaximizeButtonbool = NULL;
  virtual bool EnableMaximizeButton(bool param0 = true) override
  {
    bool res = wxTopLevelWindowBase::EnableMaximizeButton(param0);
    if (*m_wxTopLevelWindowBaseExtEnableMaximizeButtonbool != NULL){
      return m_wxTopLevelWindowBaseExtEnableMaximizeButtonbool(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtEnableMinimizeButtonboolFunc m_wxTopLevelWindowBaseExtEnableMinimizeButtonbool = NULL;
  virtual bool EnableMinimizeButton(bool param0 = true) override
  {
    bool res = wxTopLevelWindowBase::EnableMinimizeButton(param0);
    if (*m_wxTopLevelWindowBaseExtEnableMinimizeButtonbool != NULL){
      return m_wxTopLevelWindowBaseExtEnableMinimizeButtonbool(this, param0, res);
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
  wxTopLevelWindowBaseExtGetRectForTopLevelChildrenintPintPintPintPFunc m_wxTopLevelWindowBaseExtGetRectForTopLevelChildrenintPintPintPintP = NULL;
  virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h) override
  {
    wxTopLevelWindowBase::GetRectForTopLevelChildren(x, y, w, h);
    if (*m_wxTopLevelWindowBaseExtGetRectForTopLevelChildrenintPintPintPintP != NULL){
      return m_wxTopLevelWindowBaseExtGetRectForTopLevelChildrenintPintPintPintP(this, x, y, w, h);
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
  wxTopLevelWindowBaseExtIconizeboolFunc m_wxTopLevelWindowBaseExtIconizebool = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    if (*m_wxTopLevelWindowBaseExtIconizebool != NULL){
      return m_wxTopLevelWindowBaseExtIconizebool(this, iconize);
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
  wxTopLevelWindowBaseExtIsOneOfBarswxWindowCPFunc m_wxTopLevelWindowBaseExtIsOneOfBarswxWindowCP = NULL;
  virtual bool IsOneOfBars(wxWindow const* param0) const override
  {
    bool res = wxTopLevelWindowBase::IsOneOfBars(param0);
    if (*m_wxTopLevelWindowBaseExtIsOneOfBarswxWindowCP != NULL){
      return m_wxTopLevelWindowBaseExtIsOneOfBarswxWindowCP(this, param0, res);
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
  wxTopLevelWindowBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxTopLevelWindowBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxTopLevelWindowBase::IsTopNavigationDomain(kind);
    if (*m_wxTopLevelWindowBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxTopLevelWindowBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, kind, res);
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
  wxTopLevelWindowBaseExtMaximizeboolFunc m_wxTopLevelWindowBaseExtMaximizebool = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    if (*m_wxTopLevelWindowBaseExtMaximizebool != NULL){
      return m_wxTopLevelWindowBaseExtMaximizebool(this, maximize);
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
  wxTopLevelWindowBaseExtOSXSetModifiedboolFunc m_wxTopLevelWindowBaseExtOSXSetModifiedbool = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxTopLevelWindowBase::OSXSetModified(modified);
    if (*m_wxTopLevelWindowBaseExtOSXSetModifiedbool != NULL){
      return m_wxTopLevelWindowBaseExtOSXSetModifiedbool(this, modified);
    }
  }
  wxTopLevelWindowBaseExtRequestUserAttentionintFunc m_wxTopLevelWindowBaseExtRequestUserAttentionint = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxTopLevelWindowBase::RequestUserAttention(flags);
    if (*m_wxTopLevelWindowBaseExtRequestUserAttentionint != NULL){
      return m_wxTopLevelWindowBaseExtRequestUserAttentionint(this, flags);
    }
  }
  wxTopLevelWindowBaseExtRestoreFunc m_wxTopLevelWindowBaseExtRestore = NULL;
  virtual void Restore() override
  {
    if (*m_wxTopLevelWindowBaseExtRestore != NULL){
      return m_wxTopLevelWindowBaseExtRestore(this);
    }
  }
  wxTopLevelWindowBaseExtSetContentProtectionwxContentProtectionFunc m_wxTopLevelWindowBaseExtSetContentProtectionwxContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection param0) override
  {
    bool res = wxTopLevelWindowBase::SetContentProtection(param0);
    if (*m_wxTopLevelWindowBaseExtSetContentProtectionwxContentProtection != NULL){
      return m_wxTopLevelWindowBaseExtSetContentProtectionwxContentProtection(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtSetIconswxIconBundleCRFunc m_wxTopLevelWindowBaseExtSetIconswxIconBundleCR = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxTopLevelWindowBase::SetIcons(icons);
    if (*m_wxTopLevelWindowBaseExtSetIconswxIconBundleCR != NULL){
      return m_wxTopLevelWindowBaseExtSetIconswxIconBundleCR(this, icons);
    }
  }
  wxTopLevelWindowBaseExtSetMaxSizewxSizeCRFunc m_wxTopLevelWindowBaseExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxTopLevelWindowBase::SetMaxSize(maxSize);
    if (*m_wxTopLevelWindowBaseExtSetMaxSizewxSizeCR != NULL){
      return m_wxTopLevelWindowBaseExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxTopLevelWindowBaseExtSetMinSizewxSizeCRFunc m_wxTopLevelWindowBaseExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxTopLevelWindowBase::SetMinSize(minSize);
    if (*m_wxTopLevelWindowBaseExtSetMinSizewxSizeCR != NULL){
      return m_wxTopLevelWindowBaseExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxTopLevelWindowBaseExtSetRepresentedFilenamewxStringCRFunc m_wxTopLevelWindowBaseExtSetRepresentedFilenamewxStringCR = NULL;
  virtual void SetRepresentedFilename(wxString const& param0) override
  {
    wxTopLevelWindowBase::SetRepresentedFilename(param0);
    if (*m_wxTopLevelWindowBaseExtSetRepresentedFilenamewxStringCR != NULL){
      return m_wxTopLevelWindowBaseExtSetRepresentedFilenamewxStringCR(this, param0);
    }
  }
  wxTopLevelWindowBaseExtSetTitlewxStringCRFunc m_wxTopLevelWindowBaseExtSetTitlewxStringCR = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    if (*m_wxTopLevelWindowBaseExtSetTitlewxStringCR != NULL){
      return m_wxTopLevelWindowBaseExtSetTitlewxStringCR(this, title);
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
  wxTopLevelWindowBaseExtShowFullScreenboollongFunc m_wxTopLevelWindowBaseExtShowFullScreenboollong = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    if (*m_wxTopLevelWindowBaseExtShowFullScreenboollong != NULL){
      return m_wxTopLevelWindowBaseExtShowFullScreenboollong(this, show, style);
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
  wxTopLevelWindowBaseExtWXReservedTLW1voidPFunc m_wxTopLevelWindowBaseExtWXReservedTLW1voidP = NULL;
  virtual void* WXReservedTLW1(void* param0) override
  {
    void* res = wxTopLevelWindowBase::WXReservedTLW1(param0);
    if (*m_wxTopLevelWindowBaseExtWXReservedTLW1voidP != NULL){
      return m_wxTopLevelWindowBaseExtWXReservedTLW1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtWXReservedTLW2voidPFunc m_wxTopLevelWindowBaseExtWXReservedTLW2voidP = NULL;
  virtual void* WXReservedTLW2(void* param0) override
  {
    void* res = wxTopLevelWindowBase::WXReservedTLW2(param0);
    if (*m_wxTopLevelWindowBaseExtWXReservedTLW2voidP != NULL){
      return m_wxTopLevelWindowBaseExtWXReservedTLW2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtWXReservedTLW3voidPFunc m_wxTopLevelWindowBaseExtWXReservedTLW3voidP = NULL;
  virtual void* WXReservedTLW3(void* param0) override
  {
    void* res = wxTopLevelWindowBase::WXReservedTLW3(param0);
    if (*m_wxTopLevelWindowBaseExtWXReservedTLW3voidP != NULL){
      return m_wxTopLevelWindowBaseExtWXReservedTLW3voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExt(wxTopLevelWindowBaseExtDestroyFunc a_Destroy, wxTopLevelWindowBaseExtDoCentreintFunc a_DoCentreint, wxTopLevelWindowBaseExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxTopLevelWindowBaseExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxTopLevelWindowBaseExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxTopLevelWindowBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxTopLevelWindowBaseExtEnableCloseButtonboolFunc a_EnableCloseButtonbool, wxTopLevelWindowBaseExtEnableFullScreenViewboollongFunc a_EnableFullScreenViewboollong, wxTopLevelWindowBaseExtEnableMaximizeButtonboolFunc a_EnableMaximizeButtonbool, wxTopLevelWindowBaseExtEnableMinimizeButtonboolFunc a_EnableMinimizeButtonbool, wxTopLevelWindowBaseExtGetContentProtectionFunc a_GetContentProtection, wxTopLevelWindowBaseExtGetEventHashTableFunc a_GetEventHashTable, wxTopLevelWindowBaseExtGetEventTableFunc a_GetEventTable, wxTopLevelWindowBaseExtGetRectForTopLevelChildrenintPintPintPintPFunc a_GetRectForTopLevelChildrenintPintPintPintP, wxTopLevelWindowBaseExtGetTitleFunc a_GetTitle, wxTopLevelWindowBaseExtIconizeboolFunc a_Iconizebool, wxTopLevelWindowBaseExtIsActiveFunc a_IsActive, wxTopLevelWindowBaseExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxTopLevelWindowBaseExtIsFullScreenFunc a_IsFullScreen, wxTopLevelWindowBaseExtIsIconizedFunc a_IsIconized, wxTopLevelWindowBaseExtIsMaximizedFunc a_IsMaximized, wxTopLevelWindowBaseExtIsOneOfBarswxWindowCPFunc a_IsOneOfBarswxWindowCP, wxTopLevelWindowBaseExtIsTopLevelFunc a_IsTopLevel, wxTopLevelWindowBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxTopLevelWindowBaseExtIsVisibleFunc a_IsVisible, wxTopLevelWindowBaseExtLayoutFunc a_Layout, wxTopLevelWindowBaseExtMaximizeboolFunc a_Maximizebool, wxTopLevelWindowBaseExtOSXIsModifiedFunc a_OSXIsModified, wxTopLevelWindowBaseExtOSXSetModifiedboolFunc a_OSXSetModifiedbool, wxTopLevelWindowBaseExtRequestUserAttentionintFunc a_RequestUserAttentionint, wxTopLevelWindowBaseExtRestoreFunc a_Restore, wxTopLevelWindowBaseExtSetContentProtectionwxContentProtectionFunc a_SetContentProtectionwxContentProtection, wxTopLevelWindowBaseExtSetIconswxIconBundleCRFunc a_SetIconswxIconBundleCR, wxTopLevelWindowBaseExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxTopLevelWindowBaseExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxTopLevelWindowBaseExtSetRepresentedFilenamewxStringCRFunc a_SetRepresentedFilenamewxStringCR, wxTopLevelWindowBaseExtSetTitlewxStringCRFunc a_SetTitlewxStringCR, wxTopLevelWindowBaseExtShouldPreventAppExitFunc a_ShouldPreventAppExit, wxTopLevelWindowBaseExtShowFullScreenboollongFunc a_ShowFullScreenboollong, wxTopLevelWindowBaseExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxTopLevelWindowBaseExtWXReservedTLW1voidPFunc a_WXReservedTLW1voidP, wxTopLevelWindowBaseExtWXReservedTLW2voidPFunc a_WXReservedTLW2voidP, wxTopLevelWindowBaseExtWXReservedTLW3voidPFunc a_WXReservedTLW3voidP): wxTopLevelWindowBase() {
    m_wxTopLevelWindowBaseExtDestroy = a_Destroy;
    m_wxTopLevelWindowBaseExtDoCentreint = a_DoCentreint;
    m_wxTopLevelWindowBaseExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxTopLevelWindowBaseExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxTopLevelWindowBaseExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxTopLevelWindowBaseExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxTopLevelWindowBaseExtEnableCloseButtonbool = a_EnableCloseButtonbool;
    m_wxTopLevelWindowBaseExtEnableFullScreenViewboollong = a_EnableFullScreenViewboollong;
    m_wxTopLevelWindowBaseExtEnableMaximizeButtonbool = a_EnableMaximizeButtonbool;
    m_wxTopLevelWindowBaseExtEnableMinimizeButtonbool = a_EnableMinimizeButtonbool;
    m_wxTopLevelWindowBaseExtGetContentProtection = a_GetContentProtection;
    m_wxTopLevelWindowBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxTopLevelWindowBaseExtGetEventTable = a_GetEventTable;
    m_wxTopLevelWindowBaseExtGetRectForTopLevelChildrenintPintPintPintP = a_GetRectForTopLevelChildrenintPintPintPintP;
    m_wxTopLevelWindowBaseExtGetTitle = a_GetTitle;
    m_wxTopLevelWindowBaseExtIconizebool = a_Iconizebool;
    m_wxTopLevelWindowBaseExtIsActive = a_IsActive;
    m_wxTopLevelWindowBaseExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxTopLevelWindowBaseExtIsFullScreen = a_IsFullScreen;
    m_wxTopLevelWindowBaseExtIsIconized = a_IsIconized;
    m_wxTopLevelWindowBaseExtIsMaximized = a_IsMaximized;
    m_wxTopLevelWindowBaseExtIsOneOfBarswxWindowCP = a_IsOneOfBarswxWindowCP;
    m_wxTopLevelWindowBaseExtIsTopLevel = a_IsTopLevel;
    m_wxTopLevelWindowBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxTopLevelWindowBaseExtIsVisible = a_IsVisible;
    m_wxTopLevelWindowBaseExtLayout = a_Layout;
    m_wxTopLevelWindowBaseExtMaximizebool = a_Maximizebool;
    m_wxTopLevelWindowBaseExtOSXIsModified = a_OSXIsModified;
    m_wxTopLevelWindowBaseExtOSXSetModifiedbool = a_OSXSetModifiedbool;
    m_wxTopLevelWindowBaseExtRequestUserAttentionint = a_RequestUserAttentionint;
    m_wxTopLevelWindowBaseExtRestore = a_Restore;
    m_wxTopLevelWindowBaseExtSetContentProtectionwxContentProtection = a_SetContentProtectionwxContentProtection;
    m_wxTopLevelWindowBaseExtSetIconswxIconBundleCR = a_SetIconswxIconBundleCR;
    m_wxTopLevelWindowBaseExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxTopLevelWindowBaseExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxTopLevelWindowBaseExtSetRepresentedFilenamewxStringCR = a_SetRepresentedFilenamewxStringCR;
    m_wxTopLevelWindowBaseExtSetTitlewxStringCR = a_SetTitlewxStringCR;
    m_wxTopLevelWindowBaseExtShouldPreventAppExit = a_ShouldPreventAppExit;
    m_wxTopLevelWindowBaseExtShowFullScreenboollong = a_ShowFullScreenboollong;
    m_wxTopLevelWindowBaseExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxTopLevelWindowBaseExtWXReservedTLW1voidP = a_WXReservedTLW1voidP;
    m_wxTopLevelWindowBaseExtWXReservedTLW2voidP = a_WXReservedTLW2voidP;
    m_wxTopLevelWindowBaseExtWXReservedTLW3voidP = a_WXReservedTLW3voidP;
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
  wxTopLevelWindowNativeExtDoCentreintFunc m_wxTopLevelWindowNativeExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxTopLevelWindowNative::DoCentre(dir);
    if (*m_wxTopLevelWindowNativeExtDoCentreint != NULL){
      return m_wxTopLevelWindowNativeExtDoCentreint(this, dir);
    }
  }
  wxTopLevelWindowNativeExtDoClientToScreenintPintPFunc m_wxTopLevelWindowNativeExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxTopLevelWindowNative::DoClientToScreen(x, y);
    if (*m_wxTopLevelWindowNativeExtDoClientToScreenintPintP != NULL){
      return m_wxTopLevelWindowNativeExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxTopLevelWindowNativeExtDoGetScreenPositionintPintPFunc m_wxTopLevelWindowNativeExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxTopLevelWindowNative::DoGetScreenPosition(x, y);
    if (*m_wxTopLevelWindowNativeExtDoGetScreenPositionintPintP != NULL){
      return m_wxTopLevelWindowNativeExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxTopLevelWindowNativeExtDoScreenToClientintPintPFunc m_wxTopLevelWindowNativeExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxTopLevelWindowNative::DoScreenToClient(x, y);
    if (*m_wxTopLevelWindowNativeExtDoScreenToClientintPintP != NULL){
      return m_wxTopLevelWindowNativeExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxTopLevelWindowNativeExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxTopLevelWindowNativeExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxTopLevelWindowNative::DoUpdateWindowUI(event);
    if (*m_wxTopLevelWindowNativeExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxTopLevelWindowNativeExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxTopLevelWindowNativeExtEnableCloseButtonboolFunc m_wxTopLevelWindowNativeExtEnableCloseButtonbool = NULL;
  virtual bool EnableCloseButton(bool param0 = true) override
  {
    bool res = wxTopLevelWindowNative::EnableCloseButton(param0);
    if (*m_wxTopLevelWindowNativeExtEnableCloseButtonbool != NULL){
      return m_wxTopLevelWindowNativeExtEnableCloseButtonbool(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtEnableFullScreenViewboollongFunc m_wxTopLevelWindowNativeExtEnableFullScreenViewboollong = NULL;
  virtual bool EnableFullScreenView(bool param0 = true, long param1 = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindowNative::EnableFullScreenView(param0, param1);
    if (*m_wxTopLevelWindowNativeExtEnableFullScreenViewboollong != NULL){
      return m_wxTopLevelWindowNativeExtEnableFullScreenViewboollong(this, param0, param1, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtEnableMaximizeButtonboolFunc m_wxTopLevelWindowNativeExtEnableMaximizeButtonbool = NULL;
  virtual bool EnableMaximizeButton(bool param0 = true) override
  {
    bool res = wxTopLevelWindowNative::EnableMaximizeButton(param0);
    if (*m_wxTopLevelWindowNativeExtEnableMaximizeButtonbool != NULL){
      return m_wxTopLevelWindowNativeExtEnableMaximizeButtonbool(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtEnableMinimizeButtonboolFunc m_wxTopLevelWindowNativeExtEnableMinimizeButtonbool = NULL;
  virtual bool EnableMinimizeButton(bool param0 = true) override
  {
    bool res = wxTopLevelWindowNative::EnableMinimizeButton(param0);
    if (*m_wxTopLevelWindowNativeExtEnableMinimizeButtonbool != NULL){
      return m_wxTopLevelWindowNativeExtEnableMinimizeButtonbool(this, param0, res);
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
  wxTopLevelWindowNativeExtGetRectForTopLevelChildrenintPintPintPintPFunc m_wxTopLevelWindowNativeExtGetRectForTopLevelChildrenintPintPintPintP = NULL;
  virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h) override
  {
    wxTopLevelWindowNative::GetRectForTopLevelChildren(x, y, w, h);
    if (*m_wxTopLevelWindowNativeExtGetRectForTopLevelChildrenintPintPintPintP != NULL){
      return m_wxTopLevelWindowNativeExtGetRectForTopLevelChildrenintPintPintPintP(this, x, y, w, h);
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
  wxTopLevelWindowNativeExtIconizeboolFunc m_wxTopLevelWindowNativeExtIconizebool = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    if (*m_wxTopLevelWindowNativeExtIconizebool != NULL){
      return m_wxTopLevelWindowNativeExtIconizebool(this, iconize);
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
  wxTopLevelWindowNativeExtIsOneOfBarswxWindowCPFunc m_wxTopLevelWindowNativeExtIsOneOfBarswxWindowCP = NULL;
  virtual bool IsOneOfBars(wxWindow const* param0) const override
  {
    bool res = wxTopLevelWindowNative::IsOneOfBars(param0);
    if (*m_wxTopLevelWindowNativeExtIsOneOfBarswxWindowCP != NULL){
      return m_wxTopLevelWindowNativeExtIsOneOfBarswxWindowCP(this, param0, res);
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
  wxTopLevelWindowNativeExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxTopLevelWindowNativeExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxTopLevelWindowNative::IsTopNavigationDomain(kind);
    if (*m_wxTopLevelWindowNativeExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxTopLevelWindowNativeExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, kind, res);
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
  wxTopLevelWindowNativeExtMaximizeboolFunc m_wxTopLevelWindowNativeExtMaximizebool = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    if (*m_wxTopLevelWindowNativeExtMaximizebool != NULL){
      return m_wxTopLevelWindowNativeExtMaximizebool(this, maximize);
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
  wxTopLevelWindowNativeExtOSXSetModifiedboolFunc m_wxTopLevelWindowNativeExtOSXSetModifiedbool = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxTopLevelWindowNative::OSXSetModified(modified);
    if (*m_wxTopLevelWindowNativeExtOSXSetModifiedbool != NULL){
      return m_wxTopLevelWindowNativeExtOSXSetModifiedbool(this, modified);
    }
  }
  wxTopLevelWindowNativeExtRequestUserAttentionintFunc m_wxTopLevelWindowNativeExtRequestUserAttentionint = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxTopLevelWindowNative::RequestUserAttention(flags);
    if (*m_wxTopLevelWindowNativeExtRequestUserAttentionint != NULL){
      return m_wxTopLevelWindowNativeExtRequestUserAttentionint(this, flags);
    }
  }
  wxTopLevelWindowNativeExtRestoreFunc m_wxTopLevelWindowNativeExtRestore = NULL;
  virtual void Restore() override
  {
    if (*m_wxTopLevelWindowNativeExtRestore != NULL){
      return m_wxTopLevelWindowNativeExtRestore(this);
    }
  }
  wxTopLevelWindowNativeExtSetContentProtectionwxContentProtectionFunc m_wxTopLevelWindowNativeExtSetContentProtectionwxContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection param0) override
  {
    bool res = wxTopLevelWindowNative::SetContentProtection(param0);
    if (*m_wxTopLevelWindowNativeExtSetContentProtectionwxContentProtection != NULL){
      return m_wxTopLevelWindowNativeExtSetContentProtectionwxContentProtection(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtSetIconswxIconBundleCRFunc m_wxTopLevelWindowNativeExtSetIconswxIconBundleCR = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxTopLevelWindowNative::SetIcons(icons);
    if (*m_wxTopLevelWindowNativeExtSetIconswxIconBundleCR != NULL){
      return m_wxTopLevelWindowNativeExtSetIconswxIconBundleCR(this, icons);
    }
  }
  wxTopLevelWindowNativeExtSetLabelwxStringCRFunc m_wxTopLevelWindowNativeExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxTopLevelWindowNative::SetLabel(label);
    if (*m_wxTopLevelWindowNativeExtSetLabelwxStringCR != NULL){
      return m_wxTopLevelWindowNativeExtSetLabelwxStringCR(this, label);
    }
  }
  wxTopLevelWindowNativeExtSetMaxSizewxSizeCRFunc m_wxTopLevelWindowNativeExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxTopLevelWindowNative::SetMaxSize(maxSize);
    if (*m_wxTopLevelWindowNativeExtSetMaxSizewxSizeCR != NULL){
      return m_wxTopLevelWindowNativeExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxTopLevelWindowNativeExtSetMinSizewxSizeCRFunc m_wxTopLevelWindowNativeExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxTopLevelWindowNative::SetMinSize(minSize);
    if (*m_wxTopLevelWindowNativeExtSetMinSizewxSizeCR != NULL){
      return m_wxTopLevelWindowNativeExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxTopLevelWindowNativeExtSetRepresentedFilenamewxStringCRFunc m_wxTopLevelWindowNativeExtSetRepresentedFilenamewxStringCR = NULL;
  virtual void SetRepresentedFilename(wxString const& param0) override
  {
    wxTopLevelWindowNative::SetRepresentedFilename(param0);
    if (*m_wxTopLevelWindowNativeExtSetRepresentedFilenamewxStringCR != NULL){
      return m_wxTopLevelWindowNativeExtSetRepresentedFilenamewxStringCR(this, param0);
    }
  }
  wxTopLevelWindowNativeExtSetTitlewxStringCRFunc m_wxTopLevelWindowNativeExtSetTitlewxStringCR = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    if (*m_wxTopLevelWindowNativeExtSetTitlewxStringCR != NULL){
      return m_wxTopLevelWindowNativeExtSetTitlewxStringCR(this, title);
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
  wxTopLevelWindowNativeExtShowFullScreenboollongFunc m_wxTopLevelWindowNativeExtShowFullScreenboollong = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    if (*m_wxTopLevelWindowNativeExtShowFullScreenboollong != NULL){
      return m_wxTopLevelWindowNativeExtShowFullScreenboollong(this, show, style);
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
  wxTopLevelWindowNativeExtWXReservedTLW1voidPFunc m_wxTopLevelWindowNativeExtWXReservedTLW1voidP = NULL;
  virtual void* WXReservedTLW1(void* param0) override
  {
    void* res = wxTopLevelWindowNative::WXReservedTLW1(param0);
    if (*m_wxTopLevelWindowNativeExtWXReservedTLW1voidP != NULL){
      return m_wxTopLevelWindowNativeExtWXReservedTLW1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtWXReservedTLW2voidPFunc m_wxTopLevelWindowNativeExtWXReservedTLW2voidP = NULL;
  virtual void* WXReservedTLW2(void* param0) override
  {
    void* res = wxTopLevelWindowNative::WXReservedTLW2(param0);
    if (*m_wxTopLevelWindowNativeExtWXReservedTLW2voidP != NULL){
      return m_wxTopLevelWindowNativeExtWXReservedTLW2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExtWXReservedTLW3voidPFunc m_wxTopLevelWindowNativeExtWXReservedTLW3voidP = NULL;
  virtual void* WXReservedTLW3(void* param0) override
  {
    void* res = wxTopLevelWindowNative::WXReservedTLW3(param0);
    if (*m_wxTopLevelWindowNativeExtWXReservedTLW3voidP != NULL){
      return m_wxTopLevelWindowNativeExtWXReservedTLW3voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowNativeExt(wxTopLevelWindowNativeExtDestroyFunc a_Destroy, wxTopLevelWindowNativeExtDoCentreintFunc a_DoCentreint, wxTopLevelWindowNativeExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxTopLevelWindowNativeExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxTopLevelWindowNativeExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxTopLevelWindowNativeExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxTopLevelWindowNativeExtEnableCloseButtonboolFunc a_EnableCloseButtonbool, wxTopLevelWindowNativeExtEnableFullScreenViewboollongFunc a_EnableFullScreenViewboollong, wxTopLevelWindowNativeExtEnableMaximizeButtonboolFunc a_EnableMaximizeButtonbool, wxTopLevelWindowNativeExtEnableMinimizeButtonboolFunc a_EnableMinimizeButtonbool, wxTopLevelWindowNativeExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxTopLevelWindowNativeExtGetContentProtectionFunc a_GetContentProtection, wxTopLevelWindowNativeExtGetEventHashTableFunc a_GetEventHashTable, wxTopLevelWindowNativeExtGetEventTableFunc a_GetEventTable, wxTopLevelWindowNativeExtGetLabelFunc a_GetLabel, wxTopLevelWindowNativeExtGetRectForTopLevelChildrenintPintPintPintPFunc a_GetRectForTopLevelChildrenintPintPintPintP, wxTopLevelWindowNativeExtGetTitleFunc a_GetTitle, wxTopLevelWindowNativeExtIconizeboolFunc a_Iconizebool, wxTopLevelWindowNativeExtIsActiveFunc a_IsActive, wxTopLevelWindowNativeExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxTopLevelWindowNativeExtIsFullScreenFunc a_IsFullScreen, wxTopLevelWindowNativeExtIsIconizedFunc a_IsIconized, wxTopLevelWindowNativeExtIsMaximizedFunc a_IsMaximized, wxTopLevelWindowNativeExtIsOneOfBarswxWindowCPFunc a_IsOneOfBarswxWindowCP, wxTopLevelWindowNativeExtIsTopLevelFunc a_IsTopLevel, wxTopLevelWindowNativeExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxTopLevelWindowNativeExtIsVisibleFunc a_IsVisible, wxTopLevelWindowNativeExtLayoutFunc a_Layout, wxTopLevelWindowNativeExtMaximizeboolFunc a_Maximizebool, wxTopLevelWindowNativeExtOSXIsModifiedFunc a_OSXIsModified, wxTopLevelWindowNativeExtOSXSetModifiedboolFunc a_OSXSetModifiedbool, wxTopLevelWindowNativeExtRequestUserAttentionintFunc a_RequestUserAttentionint, wxTopLevelWindowNativeExtRestoreFunc a_Restore, wxTopLevelWindowNativeExtSetContentProtectionwxContentProtectionFunc a_SetContentProtectionwxContentProtection, wxTopLevelWindowNativeExtSetIconswxIconBundleCRFunc a_SetIconswxIconBundleCR, wxTopLevelWindowNativeExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxTopLevelWindowNativeExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxTopLevelWindowNativeExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxTopLevelWindowNativeExtSetRepresentedFilenamewxStringCRFunc a_SetRepresentedFilenamewxStringCR, wxTopLevelWindowNativeExtSetTitlewxStringCRFunc a_SetTitlewxStringCR, wxTopLevelWindowNativeExtShouldPreventAppExitFunc a_ShouldPreventAppExit, wxTopLevelWindowNativeExtShowFullScreenboollongFunc a_ShowFullScreenboollong, wxTopLevelWindowNativeExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxTopLevelWindowNativeExtWXReservedTLW1voidPFunc a_WXReservedTLW1voidP, wxTopLevelWindowNativeExtWXReservedTLW2voidPFunc a_WXReservedTLW2voidP, wxTopLevelWindowNativeExtWXReservedTLW3voidPFunc a_WXReservedTLW3voidP): wxTopLevelWindowNative() {
    m_wxTopLevelWindowNativeExtDestroy = a_Destroy;
    m_wxTopLevelWindowNativeExtDoCentreint = a_DoCentreint;
    m_wxTopLevelWindowNativeExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxTopLevelWindowNativeExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxTopLevelWindowNativeExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxTopLevelWindowNativeExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxTopLevelWindowNativeExtEnableCloseButtonbool = a_EnableCloseButtonbool;
    m_wxTopLevelWindowNativeExtEnableFullScreenViewboollong = a_EnableFullScreenViewboollong;
    m_wxTopLevelWindowNativeExtEnableMaximizeButtonbool = a_EnableMaximizeButtonbool;
    m_wxTopLevelWindowNativeExtEnableMinimizeButtonbool = a_EnableMinimizeButtonbool;
    m_wxTopLevelWindowNativeExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxTopLevelWindowNativeExtGetContentProtection = a_GetContentProtection;
    m_wxTopLevelWindowNativeExtGetEventHashTable = a_GetEventHashTable;
    m_wxTopLevelWindowNativeExtGetEventTable = a_GetEventTable;
    m_wxTopLevelWindowNativeExtGetLabel = a_GetLabel;
    m_wxTopLevelWindowNativeExtGetRectForTopLevelChildrenintPintPintPintP = a_GetRectForTopLevelChildrenintPintPintPintP;
    m_wxTopLevelWindowNativeExtGetTitle = a_GetTitle;
    m_wxTopLevelWindowNativeExtIconizebool = a_Iconizebool;
    m_wxTopLevelWindowNativeExtIsActive = a_IsActive;
    m_wxTopLevelWindowNativeExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxTopLevelWindowNativeExtIsFullScreen = a_IsFullScreen;
    m_wxTopLevelWindowNativeExtIsIconized = a_IsIconized;
    m_wxTopLevelWindowNativeExtIsMaximized = a_IsMaximized;
    m_wxTopLevelWindowNativeExtIsOneOfBarswxWindowCP = a_IsOneOfBarswxWindowCP;
    m_wxTopLevelWindowNativeExtIsTopLevel = a_IsTopLevel;
    m_wxTopLevelWindowNativeExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxTopLevelWindowNativeExtIsVisible = a_IsVisible;
    m_wxTopLevelWindowNativeExtLayout = a_Layout;
    m_wxTopLevelWindowNativeExtMaximizebool = a_Maximizebool;
    m_wxTopLevelWindowNativeExtOSXIsModified = a_OSXIsModified;
    m_wxTopLevelWindowNativeExtOSXSetModifiedbool = a_OSXSetModifiedbool;
    m_wxTopLevelWindowNativeExtRequestUserAttentionint = a_RequestUserAttentionint;
    m_wxTopLevelWindowNativeExtRestore = a_Restore;
    m_wxTopLevelWindowNativeExtSetContentProtectionwxContentProtection = a_SetContentProtectionwxContentProtection;
    m_wxTopLevelWindowNativeExtSetIconswxIconBundleCR = a_SetIconswxIconBundleCR;
    m_wxTopLevelWindowNativeExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxTopLevelWindowNativeExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxTopLevelWindowNativeExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxTopLevelWindowNativeExtSetRepresentedFilenamewxStringCR = a_SetRepresentedFilenamewxStringCR;
    m_wxTopLevelWindowNativeExtSetTitlewxStringCR = a_SetTitlewxStringCR;
    m_wxTopLevelWindowNativeExtShouldPreventAppExit = a_ShouldPreventAppExit;
    m_wxTopLevelWindowNativeExtShowFullScreenboollong = a_ShowFullScreenboollong;
    m_wxTopLevelWindowNativeExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxTopLevelWindowNativeExtWXReservedTLW1voidP = a_WXReservedTLW1voidP;
    m_wxTopLevelWindowNativeExtWXReservedTLW2voidP = a_WXReservedTLW2voidP;
    m_wxTopLevelWindowNativeExtWXReservedTLW3voidP = a_WXReservedTLW3voidP;
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
  wxTopLevelWindowExtDoCentreintFunc m_wxTopLevelWindowExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxTopLevelWindow::DoCentre(dir);
    if (*m_wxTopLevelWindowExtDoCentreint != NULL){
      return m_wxTopLevelWindowExtDoCentreint(this, dir);
    }
  }
  wxTopLevelWindowExtDoClientToScreenintPintPFunc m_wxTopLevelWindowExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxTopLevelWindow::DoClientToScreen(x, y);
    if (*m_wxTopLevelWindowExtDoClientToScreenintPintP != NULL){
      return m_wxTopLevelWindowExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxTopLevelWindowExtDoGetScreenPositionintPintPFunc m_wxTopLevelWindowExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxTopLevelWindow::DoGetScreenPosition(x, y);
    if (*m_wxTopLevelWindowExtDoGetScreenPositionintPintP != NULL){
      return m_wxTopLevelWindowExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxTopLevelWindowExtDoScreenToClientintPintPFunc m_wxTopLevelWindowExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxTopLevelWindow::DoScreenToClient(x, y);
    if (*m_wxTopLevelWindowExtDoScreenToClientintPintP != NULL){
      return m_wxTopLevelWindowExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxTopLevelWindowExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxTopLevelWindowExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxTopLevelWindow::DoUpdateWindowUI(event);
    if (*m_wxTopLevelWindowExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxTopLevelWindowExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxTopLevelWindowExtEnableCloseButtonboolFunc m_wxTopLevelWindowExtEnableCloseButtonbool = NULL;
  virtual bool EnableCloseButton(bool enable = true) override
  {
    bool res = wxTopLevelWindow::EnableCloseButton(enable);
    if (*m_wxTopLevelWindowExtEnableCloseButtonbool != NULL){
      return m_wxTopLevelWindowExtEnableCloseButtonbool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtEnableFullScreenViewboollongFunc m_wxTopLevelWindowExtEnableFullScreenViewboollong = NULL;
  virtual bool EnableFullScreenView(bool enable = true, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindow::EnableFullScreenView(enable, style);
    if (*m_wxTopLevelWindowExtEnableFullScreenViewboollong != NULL){
      return m_wxTopLevelWindowExtEnableFullScreenViewboollong(this, enable, style, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtEnableMaximizeButtonboolFunc m_wxTopLevelWindowExtEnableMaximizeButtonbool = NULL;
  virtual bool EnableMaximizeButton(bool enable = true) override
  {
    bool res = wxTopLevelWindow::EnableMaximizeButton(enable);
    if (*m_wxTopLevelWindowExtEnableMaximizeButtonbool != NULL){
      return m_wxTopLevelWindowExtEnableMaximizeButtonbool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtEnableMinimizeButtonboolFunc m_wxTopLevelWindowExtEnableMinimizeButtonbool = NULL;
  virtual bool EnableMinimizeButton(bool enable = true) override
  {
    bool res = wxTopLevelWindow::EnableMinimizeButton(enable);
    if (*m_wxTopLevelWindowExtEnableMinimizeButtonbool != NULL){
      return m_wxTopLevelWindowExtEnableMinimizeButtonbool(this, enable, res);
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
  wxTopLevelWindowExtGetRectForTopLevelChildrenintPintPintPintPFunc m_wxTopLevelWindowExtGetRectForTopLevelChildrenintPintPintPintP = NULL;
  virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h) override
  {
    wxTopLevelWindow::GetRectForTopLevelChildren(x, y, w, h);
    if (*m_wxTopLevelWindowExtGetRectForTopLevelChildrenintPintPintPintP != NULL){
      return m_wxTopLevelWindowExtGetRectForTopLevelChildrenintPintPintPintP(this, x, y, w, h);
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
  wxTopLevelWindowExtIconizeboolFunc m_wxTopLevelWindowExtIconizebool = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    wxTopLevelWindow::Iconize(iconize);
    if (*m_wxTopLevelWindowExtIconizebool != NULL){
      return m_wxTopLevelWindowExtIconizebool(this, iconize);
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
  wxTopLevelWindowExtIsOneOfBarswxWindowCPFunc m_wxTopLevelWindowExtIsOneOfBarswxWindowCP = NULL;
  virtual bool IsOneOfBars(wxWindow const* param0) const override
  {
    bool res = wxTopLevelWindow::IsOneOfBars(param0);
    if (*m_wxTopLevelWindowExtIsOneOfBarswxWindowCP != NULL){
      return m_wxTopLevelWindowExtIsOneOfBarswxWindowCP(this, param0, res);
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
  wxTopLevelWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxTopLevelWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxTopLevelWindow::IsTopNavigationDomain(kind);
    if (*m_wxTopLevelWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxTopLevelWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, kind, res);
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
  wxTopLevelWindowExtMaximizeboolFunc m_wxTopLevelWindowExtMaximizebool = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    wxTopLevelWindow::Maximize(maximize);
    if (*m_wxTopLevelWindowExtMaximizebool != NULL){
      return m_wxTopLevelWindowExtMaximizebool(this, maximize);
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
  wxTopLevelWindowExtOSXSetModifiedboolFunc m_wxTopLevelWindowExtOSXSetModifiedbool = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxTopLevelWindow::OSXSetModified(modified);
    if (*m_wxTopLevelWindowExtOSXSetModifiedbool != NULL){
      return m_wxTopLevelWindowExtOSXSetModifiedbool(this, modified);
    }
  }
  wxTopLevelWindowExtRequestUserAttentionintFunc m_wxTopLevelWindowExtRequestUserAttentionint = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxTopLevelWindow::RequestUserAttention(flags);
    if (*m_wxTopLevelWindowExtRequestUserAttentionint != NULL){
      return m_wxTopLevelWindowExtRequestUserAttentionint(this, flags);
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
  wxTopLevelWindowExtSetContentProtectionwxContentProtectionFunc m_wxTopLevelWindowExtSetContentProtectionwxContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection contentProtection) override
  {
    bool res = wxTopLevelWindow::SetContentProtection(contentProtection);
    if (*m_wxTopLevelWindowExtSetContentProtectionwxContentProtection != NULL){
      return m_wxTopLevelWindowExtSetContentProtectionwxContentProtection(this, contentProtection, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtSetIconswxIconBundleCRFunc m_wxTopLevelWindowExtSetIconswxIconBundleCR = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxTopLevelWindow::SetIcons(icons);
    if (*m_wxTopLevelWindowExtSetIconswxIconBundleCR != NULL){
      return m_wxTopLevelWindowExtSetIconswxIconBundleCR(this, icons);
    }
  }
  wxTopLevelWindowExtSetLabelwxStringCRFunc m_wxTopLevelWindowExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxTopLevelWindow::SetLabel(label);
    if (*m_wxTopLevelWindowExtSetLabelwxStringCR != NULL){
      return m_wxTopLevelWindowExtSetLabelwxStringCR(this, label);
    }
  }
  wxTopLevelWindowExtSetMaxSizewxSizeCRFunc m_wxTopLevelWindowExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxTopLevelWindow::SetMaxSize(maxSize);
    if (*m_wxTopLevelWindowExtSetMaxSizewxSizeCR != NULL){
      return m_wxTopLevelWindowExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxTopLevelWindowExtSetMinSizewxSizeCRFunc m_wxTopLevelWindowExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxTopLevelWindow::SetMinSize(minSize);
    if (*m_wxTopLevelWindowExtSetMinSizewxSizeCR != NULL){
      return m_wxTopLevelWindowExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxTopLevelWindowExtSetRepresentedFilenamewxStringCRFunc m_wxTopLevelWindowExtSetRepresentedFilenamewxStringCR = NULL;
  virtual void SetRepresentedFilename(wxString const& filename) override
  {
    wxTopLevelWindow::SetRepresentedFilename(filename);
    if (*m_wxTopLevelWindowExtSetRepresentedFilenamewxStringCR != NULL){
      return m_wxTopLevelWindowExtSetRepresentedFilenamewxStringCR(this, filename);
    }
  }
  wxTopLevelWindowExtSetTitlewxStringCRFunc m_wxTopLevelWindowExtSetTitlewxStringCR = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    wxTopLevelWindow::SetTitle(title);
    if (*m_wxTopLevelWindowExtSetTitlewxStringCR != NULL){
      return m_wxTopLevelWindowExtSetTitlewxStringCR(this, title);
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
  wxTopLevelWindowExtShowFullScreenboollongFunc m_wxTopLevelWindowExtShowFullScreenboollong = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindow::ShowFullScreen(show, style);
    if (*m_wxTopLevelWindowExtShowFullScreenboollong != NULL){
      return m_wxTopLevelWindowExtShowFullScreenboollong(this, show, style, res);
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
  wxTopLevelWindowExtWXReservedTLW1voidPFunc m_wxTopLevelWindowExtWXReservedTLW1voidP = NULL;
  virtual void* WXReservedTLW1(void* param0) override
  {
    void* res = wxTopLevelWindow::WXReservedTLW1(param0);
    if (*m_wxTopLevelWindowExtWXReservedTLW1voidP != NULL){
      return m_wxTopLevelWindowExtWXReservedTLW1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtWXReservedTLW2voidPFunc m_wxTopLevelWindowExtWXReservedTLW2voidP = NULL;
  virtual void* WXReservedTLW2(void* param0) override
  {
    void* res = wxTopLevelWindow::WXReservedTLW2(param0);
    if (*m_wxTopLevelWindowExtWXReservedTLW2voidP != NULL){
      return m_wxTopLevelWindowExtWXReservedTLW2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExtWXReservedTLW3voidPFunc m_wxTopLevelWindowExtWXReservedTLW3voidP = NULL;
  virtual void* WXReservedTLW3(void* param0) override
  {
    void* res = wxTopLevelWindow::WXReservedTLW3(param0);
    if (*m_wxTopLevelWindowExtWXReservedTLW3voidP != NULL){
      return m_wxTopLevelWindowExtWXReservedTLW3voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowExt(wxTopLevelWindowExtDestroyFunc a_Destroy, wxTopLevelWindowExtDoCentreintFunc a_DoCentreint, wxTopLevelWindowExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxTopLevelWindowExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxTopLevelWindowExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxTopLevelWindowExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxTopLevelWindowExtEnableCloseButtonboolFunc a_EnableCloseButtonbool, wxTopLevelWindowExtEnableFullScreenViewboollongFunc a_EnableFullScreenViewboollong, wxTopLevelWindowExtEnableMaximizeButtonboolFunc a_EnableMaximizeButtonbool, wxTopLevelWindowExtEnableMinimizeButtonboolFunc a_EnableMinimizeButtonbool, wxTopLevelWindowExtGetClassInfoFunc a_GetClassInfo, wxTopLevelWindowExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxTopLevelWindowExtGetContentProtectionFunc a_GetContentProtection, wxTopLevelWindowExtGetEventHashTableFunc a_GetEventHashTable, wxTopLevelWindowExtGetEventTableFunc a_GetEventTable, wxTopLevelWindowExtGetLabelFunc a_GetLabel, wxTopLevelWindowExtGetRectForTopLevelChildrenintPintPintPintPFunc a_GetRectForTopLevelChildrenintPintPintPintP, wxTopLevelWindowExtGetTitleFunc a_GetTitle, wxTopLevelWindowExtIconizeboolFunc a_Iconizebool, wxTopLevelWindowExtIsActiveFunc a_IsActive, wxTopLevelWindowExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxTopLevelWindowExtIsFullScreenFunc a_IsFullScreen, wxTopLevelWindowExtIsIconizedFunc a_IsIconized, wxTopLevelWindowExtIsMaximizedFunc a_IsMaximized, wxTopLevelWindowExtIsOneOfBarswxWindowCPFunc a_IsOneOfBarswxWindowCP, wxTopLevelWindowExtIsTopLevelFunc a_IsTopLevel, wxTopLevelWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxTopLevelWindowExtIsVisibleFunc a_IsVisible, wxTopLevelWindowExtLayoutFunc a_Layout, wxTopLevelWindowExtMaximizeboolFunc a_Maximizebool, wxTopLevelWindowExtOSXIsModifiedFunc a_OSXIsModified, wxTopLevelWindowExtOSXSetModifiedboolFunc a_OSXSetModifiedbool, wxTopLevelWindowExtRequestUserAttentionintFunc a_RequestUserAttentionint, wxTopLevelWindowExtRestoreFunc a_Restore, wxTopLevelWindowExtSetContentProtectionwxContentProtectionFunc a_SetContentProtectionwxContentProtection, wxTopLevelWindowExtSetIconswxIconBundleCRFunc a_SetIconswxIconBundleCR, wxTopLevelWindowExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxTopLevelWindowExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxTopLevelWindowExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxTopLevelWindowExtSetRepresentedFilenamewxStringCRFunc a_SetRepresentedFilenamewxStringCR, wxTopLevelWindowExtSetTitlewxStringCRFunc a_SetTitlewxStringCR, wxTopLevelWindowExtShouldPreventAppExitFunc a_ShouldPreventAppExit, wxTopLevelWindowExtShowFullScreenboollongFunc a_ShowFullScreenboollong, wxTopLevelWindowExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxTopLevelWindowExtWXReservedTLW1voidPFunc a_WXReservedTLW1voidP, wxTopLevelWindowExtWXReservedTLW2voidPFunc a_WXReservedTLW2voidP, wxTopLevelWindowExtWXReservedTLW3voidPFunc a_WXReservedTLW3voidP): wxTopLevelWindow() {
    m_wxTopLevelWindowExtDestroy = a_Destroy;
    m_wxTopLevelWindowExtDoCentreint = a_DoCentreint;
    m_wxTopLevelWindowExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxTopLevelWindowExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxTopLevelWindowExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxTopLevelWindowExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxTopLevelWindowExtEnableCloseButtonbool = a_EnableCloseButtonbool;
    m_wxTopLevelWindowExtEnableFullScreenViewboollong = a_EnableFullScreenViewboollong;
    m_wxTopLevelWindowExtEnableMaximizeButtonbool = a_EnableMaximizeButtonbool;
    m_wxTopLevelWindowExtEnableMinimizeButtonbool = a_EnableMinimizeButtonbool;
    m_wxTopLevelWindowExtGetClassInfo = a_GetClassInfo;
    m_wxTopLevelWindowExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxTopLevelWindowExtGetContentProtection = a_GetContentProtection;
    m_wxTopLevelWindowExtGetEventHashTable = a_GetEventHashTable;
    m_wxTopLevelWindowExtGetEventTable = a_GetEventTable;
    m_wxTopLevelWindowExtGetLabel = a_GetLabel;
    m_wxTopLevelWindowExtGetRectForTopLevelChildrenintPintPintPintP = a_GetRectForTopLevelChildrenintPintPintPintP;
    m_wxTopLevelWindowExtGetTitle = a_GetTitle;
    m_wxTopLevelWindowExtIconizebool = a_Iconizebool;
    m_wxTopLevelWindowExtIsActive = a_IsActive;
    m_wxTopLevelWindowExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxTopLevelWindowExtIsFullScreen = a_IsFullScreen;
    m_wxTopLevelWindowExtIsIconized = a_IsIconized;
    m_wxTopLevelWindowExtIsMaximized = a_IsMaximized;
    m_wxTopLevelWindowExtIsOneOfBarswxWindowCP = a_IsOneOfBarswxWindowCP;
    m_wxTopLevelWindowExtIsTopLevel = a_IsTopLevel;
    m_wxTopLevelWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxTopLevelWindowExtIsVisible = a_IsVisible;
    m_wxTopLevelWindowExtLayout = a_Layout;
    m_wxTopLevelWindowExtMaximizebool = a_Maximizebool;
    m_wxTopLevelWindowExtOSXIsModified = a_OSXIsModified;
    m_wxTopLevelWindowExtOSXSetModifiedbool = a_OSXSetModifiedbool;
    m_wxTopLevelWindowExtRequestUserAttentionint = a_RequestUserAttentionint;
    m_wxTopLevelWindowExtRestore = a_Restore;
    m_wxTopLevelWindowExtSetContentProtectionwxContentProtection = a_SetContentProtectionwxContentProtection;
    m_wxTopLevelWindowExtSetIconswxIconBundleCR = a_SetIconswxIconBundleCR;
    m_wxTopLevelWindowExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxTopLevelWindowExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxTopLevelWindowExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxTopLevelWindowExtSetRepresentedFilenamewxStringCR = a_SetRepresentedFilenamewxStringCR;
    m_wxTopLevelWindowExtSetTitlewxStringCR = a_SetTitlewxStringCR;
    m_wxTopLevelWindowExtShouldPreventAppExit = a_ShouldPreventAppExit;
    m_wxTopLevelWindowExtShowFullScreenboollong = a_ShowFullScreenboollong;
    m_wxTopLevelWindowExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxTopLevelWindowExtWXReservedTLW1voidP = a_WXReservedTLW1voidP;
    m_wxTopLevelWindowExtWXReservedTLW2voidP = a_WXReservedTLW2voidP;
    m_wxTopLevelWindowExtWXReservedTLW3voidP = a_WXReservedTLW3voidP;
  }
};



#endif
