#ifndef _WX_FRAME_H_EXT_
#define _WX_FRAME_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxFrameBaseExt;
typedef void (*wxFrameBaseExtAttachMenuBarwxMenuBarPFunc)(const wxFrameBaseExt* self, wxMenuBar* menubar);
typedef wxStatusBar* (*wxFrameBaseExtCreateStatusBarintlongwxWindowIDwxStringCRFunc)(const wxFrameBaseExt* self, int number, long style, wxWindowID winid, wxString const& name, wxStatusBar* res);
typedef wxToolBar* (*wxFrameBaseExtCreateToolBarlongwxWindowIDwxStringCRFunc)(const wxFrameBaseExt* self, long style, wxWindowID winid, wxString const& name, wxToolBar* res);
typedef bool (*wxFrameBaseExtDestroyFunc)(const wxFrameBaseExt* self, bool res);
typedef void (*wxFrameBaseExtDetachMenuBarFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtDoCentreintFunc)(const wxFrameBaseExt* self, int dir);
typedef void (*wxFrameBaseExtDoClientToScreenintPintPFunc)(const wxFrameBaseExt* self, int* x, int* y);
typedef void (*wxFrameBaseExtDoGetScreenPositionintPintPFunc)(const wxFrameBaseExt* self, int* x, int* y);
typedef void (*wxFrameBaseExtDoGiveHelpwxStringCRboolFunc)(const wxFrameBaseExt* self, wxString const& text, bool show);
typedef void (*wxFrameBaseExtDoMenuUpdateswxMenuPFunc)(const wxFrameBaseExt* self, wxMenu* menu);
typedef void (*wxFrameBaseExtDoScreenToClientintPintPFunc)(const wxFrameBaseExt* self, int* x, int* y);
typedef void (*wxFrameBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxFrameBaseExt* self, wxUpdateUIEvent& event);
typedef bool (*wxFrameBaseExtEnableCloseButtonboolFunc)(const wxFrameBaseExt* self, bool enable, bool res);
typedef bool (*wxFrameBaseExtEnableFullScreenViewboollongFunc)(const wxFrameBaseExt* self, bool enable, long style, bool res);
typedef bool (*wxFrameBaseExtEnableMaximizeButtonboolFunc)(const wxFrameBaseExt* self, bool enable, bool res);
typedef bool (*wxFrameBaseExtEnableMinimizeButtonboolFunc)(const wxFrameBaseExt* self, bool enable, bool res);
typedef wxMenuItem* (*wxFrameBaseExtFindItemInMenuBarintFunc)(const wxFrameBaseExt* self, int menuId, wxMenuItem* res);
typedef wxClassInfo* (*wxFrameBaseExtGetClassInfoFunc)(const wxFrameBaseExt* self, wxClassInfo* res);
typedef wxPoint (*wxFrameBaseExtGetClientAreaOriginFunc)(const wxFrameBaseExt* self, wxPoint res);
typedef wxContentProtection (*wxFrameBaseExtGetContentProtectionFunc)(const wxFrameBaseExt* self, wxContentProtection res);
typedef wxEventHashTable& (*wxFrameBaseExtGetEventHashTableFunc)(const wxFrameBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxFrameBaseExtGetEventTableFunc)(const wxFrameBaseExt* self, wxEventTable const* res);
typedef wxString (*wxFrameBaseExtGetLabelFunc)(const wxFrameBaseExt* self, wxString res);
typedef wxMenuBar* (*wxFrameBaseExtGetMenuBarFunc)(const wxFrameBaseExt* self, wxMenuBar* res);
typedef void (*wxFrameBaseExtGetRectForTopLevelChildrenintPintPintPintPFunc)(const wxFrameBaseExt* self, int* x, int* y, int* w, int* h);
typedef wxStatusBar* (*wxFrameBaseExtGetStatusBarFunc)(const wxFrameBaseExt* self, wxStatusBar* res);
typedef wxString (*wxFrameBaseExtGetTitleFunc)(const wxFrameBaseExt* self, wxString res);
typedef wxToolBar* (*wxFrameBaseExtGetToolBarFunc)(const wxFrameBaseExt* self, wxToolBar* res);
typedef void (*wxFrameBaseExtIconizeboolFunc)(const wxFrameBaseExt* self, bool iconize);
typedef bool (*wxFrameBaseExtIsActiveFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsAlwaysMaximizedFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsClientAreaChildwxWindowCPFunc)(const wxFrameBaseExt* self, wxWindow const* child, bool res);
typedef bool (*wxFrameBaseExtIsFullScreenFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsIconizedFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsMaximizedFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsOneOfBarswxWindowCPFunc)(const wxFrameBaseExt* self, wxWindow const* param0, bool res);
typedef bool (*wxFrameBaseExtIsTopLevelFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxFrameBaseExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxFrameBaseExtIsVisibleFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtLayoutFunc)(const wxFrameBaseExt* self, bool res);
typedef void (*wxFrameBaseExtMaximizeboolFunc)(const wxFrameBaseExt* self, bool maximize);
typedef bool (*wxFrameBaseExtOSXIsModifiedFunc)(const wxFrameBaseExt* self, bool res);
typedef void (*wxFrameBaseExtOSXSetModifiedboolFunc)(const wxFrameBaseExt* self, bool modified);
typedef wxStatusBar* (*wxFrameBaseExtOnCreateStatusBarintlongwxWindowIDwxStringCRFunc)(const wxFrameBaseExt* self, int number, long style, wxWindowID winid, wxString const& name, wxStatusBar* res);
typedef wxToolBar* (*wxFrameBaseExtOnCreateToolBarlongwxWindowIDwxStringCRFunc)(const wxFrameBaseExt* self, long style, wxWindowID winid, wxString const& name, wxToolBar* res);
typedef void (*wxFrameBaseExtOnInternalIdleFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtPositionMenuBarFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtPositionStatusBarFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtPositionToolBarFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtRequestUserAttentionintFunc)(const wxFrameBaseExt* self, int flags);
typedef void (*wxFrameBaseExtRestoreFunc)(const wxFrameBaseExt* self);
typedef bool (*wxFrameBaseExtSetContentProtectionwxContentProtectionFunc)(const wxFrameBaseExt* self, wxContentProtection contentProtection, bool res);
typedef void (*wxFrameBaseExtSetIconswxIconBundleCRFunc)(const wxFrameBaseExt* self, wxIconBundle const& icons);
typedef void (*wxFrameBaseExtSetLabelwxStringCRFunc)(const wxFrameBaseExt* self, wxString const& label);
typedef void (*wxFrameBaseExtSetMaxSizewxSizeCRFunc)(const wxFrameBaseExt* self, wxSize const& maxSize);
typedef void (*wxFrameBaseExtSetMenuBarwxMenuBarPFunc)(const wxFrameBaseExt* self, wxMenuBar* menubar);
typedef void (*wxFrameBaseExtSetMinSizewxSizeCRFunc)(const wxFrameBaseExt* self, wxSize const& minSize);
typedef void (*wxFrameBaseExtSetRepresentedFilenamewxStringCRFunc)(const wxFrameBaseExt* self, wxString const& filename);
typedef void (*wxFrameBaseExtSetStatusBarwxStatusBarPFunc)(const wxFrameBaseExt* self, wxStatusBar* statBar);
typedef void (*wxFrameBaseExtSetStatusTextwxStringCRintFunc)(const wxFrameBaseExt* self, wxString const& text, int number);
typedef void (*wxFrameBaseExtSetStatusWidthsintintCBFunc)(const wxFrameBaseExt* self, int n, int const widths_field[]);
typedef void (*wxFrameBaseExtSetTitlewxStringCRFunc)(const wxFrameBaseExt* self, wxString const& title);
typedef void (*wxFrameBaseExtSetToolBarwxToolBarPFunc)(const wxFrameBaseExt* self, wxToolBar* toolbar);
typedef bool (*wxFrameBaseExtShouldPreventAppExitFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtShowFullScreenboollongFunc)(const wxFrameBaseExt* self, bool show, long style, bool res);
typedef void (*wxFrameBaseExtShowWithoutActivatingFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtUpdateWindowUIlongFunc)(const wxFrameBaseExt* self, long flags);
typedef void* (*wxFrameBaseExtWXReservedTLW1voidPFunc)(const wxFrameBaseExt* self, void* param0, void* res);
typedef void* (*wxFrameBaseExtWXReservedTLW2voidPFunc)(const wxFrameBaseExt* self, void* param0, void* res);
typedef void* (*wxFrameBaseExtWXReservedTLW3voidPFunc)(const wxFrameBaseExt* self, void* param0, void* res);
class wxFrameExt;
typedef void (*wxFrameExtAttachMenuBarwxMenuBarPFunc)(const wxFrameExt* self, wxMenuBar* menubar);
typedef wxStatusBar* (*wxFrameExtCreateStatusBarintlongwxWindowIDwxStringCRFunc)(const wxFrameExt* self, int number, long style, wxWindowID winid, wxString const& name, wxStatusBar* res);
typedef wxToolBar* (*wxFrameExtCreateToolBarlongwxWindowIDwxStringCRFunc)(const wxFrameExt* self, long style, wxWindowID winid, wxString const& name, wxToolBar* res);
typedef bool (*wxFrameExtDestroyFunc)(const wxFrameExt* self, bool res);
typedef void (*wxFrameExtDetachMenuBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtDoCentreintFunc)(const wxFrameExt* self, int dir);
typedef void (*wxFrameExtDoClientToScreenintPintPFunc)(const wxFrameExt* self, int* x, int* y);
typedef void (*wxFrameExtDoGetClientSizeintPintPFunc)(const wxFrameExt* self, int* width, int* height);
typedef void (*wxFrameExtDoGetScreenPositionintPintPFunc)(const wxFrameExt* self, int* x, int* y);
typedef void (*wxFrameExtDoGiveHelpwxStringCRboolFunc)(const wxFrameExt* self, wxString const& text, bool show);
typedef void (*wxFrameExtDoMenuUpdateswxMenuPFunc)(const wxFrameExt* self, wxMenu* menu);
typedef void (*wxFrameExtDoScreenToClientintPintPFunc)(const wxFrameExt* self, int* x, int* y);
typedef void (*wxFrameExtDoSetClientSizeintintFunc)(const wxFrameExt* self, int width, int height);
typedef void (*wxFrameExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxFrameExt* self, wxUpdateUIEvent& event);
typedef bool (*wxFrameExtEnableboolFunc)(const wxFrameExt* self, bool enable, bool res);
typedef bool (*wxFrameExtEnableCloseButtonboolFunc)(const wxFrameExt* self, bool enable, bool res);
typedef bool (*wxFrameExtEnableFullScreenViewboollongFunc)(const wxFrameExt* self, bool enable, long style, bool res);
typedef bool (*wxFrameExtEnableMaximizeButtonboolFunc)(const wxFrameExt* self, bool enable, bool res);
typedef bool (*wxFrameExtEnableMinimizeButtonboolFunc)(const wxFrameExt* self, bool enable, bool res);
typedef wxMenuItem* (*wxFrameExtFindItemInMenuBarintFunc)(const wxFrameExt* self, int menuId, wxMenuItem* res);
typedef wxClassInfo* (*wxFrameExtGetClassInfoFunc)(const wxFrameExt* self, wxClassInfo* res);
typedef wxPoint (*wxFrameExtGetClientAreaOriginFunc)(const wxFrameExt* self, wxPoint res);
typedef wxContentProtection (*wxFrameExtGetContentProtectionFunc)(const wxFrameExt* self, wxContentProtection res);
typedef wxEventHashTable& (*wxFrameExtGetEventHashTableFunc)(const wxFrameExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxFrameExtGetEventTableFunc)(const wxFrameExt* self, wxEventTable const* res);
typedef wxString (*wxFrameExtGetLabelFunc)(const wxFrameExt* self, wxString res);
typedef wxMenuBar* (*wxFrameExtGetMenuBarFunc)(const wxFrameExt* self, wxMenuBar* res);
typedef void (*wxFrameExtGetRectForTopLevelChildrenintPintPintPintPFunc)(const wxFrameExt* self, int* x, int* y, int* w, int* h);
typedef wxStatusBar* (*wxFrameExtGetStatusBarFunc)(const wxFrameExt* self, wxStatusBar* res);
typedef wxString (*wxFrameExtGetTitleFunc)(const wxFrameExt* self, wxString res);
typedef wxToolBar* (*wxFrameExtGetToolBarFunc)(const wxFrameExt* self, wxToolBar* res);
typedef void (*wxFrameExtIconizeboolFunc)(const wxFrameExt* self, bool iconize);
typedef bool (*wxFrameExtIsActiveFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsAlwaysMaximizedFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsClientAreaChildwxWindowCPFunc)(const wxFrameExt* self, wxWindow const* child, bool res);
typedef bool (*wxFrameExtIsFullScreenFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsIconizedFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsMaximizedFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsOneOfBarswxWindowCPFunc)(const wxFrameExt* self, wxWindow const* win, bool res);
typedef bool (*wxFrameExtIsTopLevelFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxFrameExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxFrameExtIsVisibleFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtLayoutFunc)(const wxFrameExt* self, bool res);
typedef void (*wxFrameExtMaximizeboolFunc)(const wxFrameExt* self, bool maximize);
typedef bool (*wxFrameExtOSXIsModifiedFunc)(const wxFrameExt* self, bool res);
typedef void (*wxFrameExtOSXSetModifiedboolFunc)(const wxFrameExt* self, bool modified);
typedef wxStatusBar* (*wxFrameExtOnCreateStatusBarintlongwxWindowIDwxStringCRFunc)(const wxFrameExt* self, int number, long style, wxWindowID winid, wxString const& name, wxStatusBar* res);
typedef wxToolBar* (*wxFrameExtOnCreateToolBarlongwxWindowIDwxStringCRFunc)(const wxFrameExt* self, long style, wxWindowID winid, wxString const& name, wxToolBar* res);
typedef void (*wxFrameExtOnInternalIdleFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtPositionMenuBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtPositionStatusBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtPositionToolBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtRequestUserAttentionintFunc)(const wxFrameExt* self, int flags);
typedef void (*wxFrameExtRestoreFunc)(const wxFrameExt* self);
typedef bool (*wxFrameExtSetContentProtectionwxContentProtectionFunc)(const wxFrameExt* self, wxContentProtection contentProtection, bool res);
typedef void (*wxFrameExtSetIconswxIconBundleCRFunc)(const wxFrameExt* self, wxIconBundle const& icons);
typedef void (*wxFrameExtSetLabelwxStringCRFunc)(const wxFrameExt* self, wxString const& label);
typedef void (*wxFrameExtSetMaxSizewxSizeCRFunc)(const wxFrameExt* self, wxSize const& maxSize);
typedef void (*wxFrameExtSetMenuBarwxMenuBarPFunc)(const wxFrameExt* self, wxMenuBar* menubar);
typedef void (*wxFrameExtSetMinSizewxSizeCRFunc)(const wxFrameExt* self, wxSize const& minSize);
typedef void (*wxFrameExtSetRepresentedFilenamewxStringCRFunc)(const wxFrameExt* self, wxString const& filename);
typedef void (*wxFrameExtSetStatusBarwxStatusBarPFunc)(const wxFrameExt* self, wxStatusBar* statBar);
typedef void (*wxFrameExtSetStatusTextwxStringCRintFunc)(const wxFrameExt* self, wxString const& text, int number);
typedef void (*wxFrameExtSetStatusWidthsintintCBFunc)(const wxFrameExt* self, int n, int const widths_field[]);
typedef void (*wxFrameExtSetTitlewxStringCRFunc)(const wxFrameExt* self, wxString const& title);
typedef void (*wxFrameExtSetToolBarwxToolBarPFunc)(const wxFrameExt* self, wxToolBar* toolbar);
typedef bool (*wxFrameExtShouldPreventAppExitFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtShowboolFunc)(const wxFrameExt* self, bool show, bool res);
typedef bool (*wxFrameExtShowFullScreenboollongFunc)(const wxFrameExt* self, bool show, long style, bool res);
typedef void (*wxFrameExtShowWithoutActivatingFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtUpdateWindowUIlongFunc)(const wxFrameExt* self, long flags);
typedef void* (*wxFrameExtWXReservedTLW1voidPFunc)(const wxFrameExt* self, void* param0, void* res);
typedef void* (*wxFrameExtWXReservedTLW2voidPFunc)(const wxFrameExt* self, void* param0, void* res);
typedef void* (*wxFrameExtWXReservedTLW3voidPFunc)(const wxFrameExt* self, void* param0, void* res);

class wxFrameBaseExt: public wxFrameBase
{
public:
  wxFrameBaseExt(): wxFrameBase()  {  }
  virtual ~wxFrameBaseExt() override  {  }
  wxFrameBaseExtAttachMenuBarwxMenuBarPFunc m_wxFrameBaseExtAttachMenuBarwxMenuBarP = NULL;
  virtual void AttachMenuBar(wxMenuBar* menubar) override
  {
    wxFrameBase::AttachMenuBar(menubar);
    if (*m_wxFrameBaseExtAttachMenuBarwxMenuBarP != NULL){
      return m_wxFrameBaseExtAttachMenuBarwxMenuBarP(this, menubar);
    }
  }
  wxFrameBaseExtCreateStatusBarintlongwxWindowIDwxStringCRFunc m_wxFrameBaseExtCreateStatusBarintlongwxWindowIDwxStringCR = NULL;
  virtual wxStatusBar* CreateStatusBar(int number = 1, long style = (0x0010 | 0x0100 | 0x0020 | 0x00010000), wxWindowID winid = 0, wxString const& name = wxString::FromAscii(wxStatusLineNameStr)) override
  {
    wxStatusBar* res = wxFrameBase::CreateStatusBar(number, style, winid, name);
    if (*m_wxFrameBaseExtCreateStatusBarintlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameBaseExtCreateStatusBarintlongwxWindowIDwxStringCR(this, number, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtCreateToolBarlongwxWindowIDwxStringCRFunc m_wxFrameBaseExtCreateToolBarlongwxWindowIDwxStringCR = NULL;
  virtual wxToolBar* CreateToolBar(long style = -1, wxWindowID winid = wxID_ANY, wxString const& name = wxString::FromAscii(wxToolBarNameStr)) override
  {
    wxToolBar* res = wxFrameBase::CreateToolBar(style, winid, name);
    if (*m_wxFrameBaseExtCreateToolBarlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameBaseExtCreateToolBarlongwxWindowIDwxStringCR(this, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtDestroyFunc m_wxFrameBaseExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxFrameBase::Destroy();
    if (*m_wxFrameBaseExtDestroy != NULL){
      return m_wxFrameBaseExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtDetachMenuBarFunc m_wxFrameBaseExtDetachMenuBar = NULL;
  virtual void DetachMenuBar() override
  {
    wxFrameBase::DetachMenuBar();
    if (*m_wxFrameBaseExtDetachMenuBar != NULL){
      return m_wxFrameBaseExtDetachMenuBar(this);
    }
  }
  wxFrameBaseExtDoCentreintFunc m_wxFrameBaseExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxFrameBase::DoCentre(dir);
    if (*m_wxFrameBaseExtDoCentreint != NULL){
      return m_wxFrameBaseExtDoCentreint(this, dir);
    }
  }
  wxFrameBaseExtDoClientToScreenintPintPFunc m_wxFrameBaseExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxFrameBase::DoClientToScreen(x, y);
    if (*m_wxFrameBaseExtDoClientToScreenintPintP != NULL){
      return m_wxFrameBaseExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxFrameBaseExtDoGetScreenPositionintPintPFunc m_wxFrameBaseExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxFrameBase::DoGetScreenPosition(x, y);
    if (*m_wxFrameBaseExtDoGetScreenPositionintPintP != NULL){
      return m_wxFrameBaseExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxFrameBaseExtDoGiveHelpwxStringCRboolFunc m_wxFrameBaseExtDoGiveHelpwxStringCRbool = NULL;
  virtual void DoGiveHelp(wxString const& text, bool show) override
  {
    wxFrameBase::DoGiveHelp(text, show);
    if (*m_wxFrameBaseExtDoGiveHelpwxStringCRbool != NULL){
      return m_wxFrameBaseExtDoGiveHelpwxStringCRbool(this, text, show);
    }
  }
  wxFrameBaseExtDoMenuUpdateswxMenuPFunc m_wxFrameBaseExtDoMenuUpdateswxMenuP = NULL;
  virtual void DoMenuUpdates(wxMenu* menu = __null) override
  {
    wxFrameBase::DoMenuUpdates(menu);
    if (*m_wxFrameBaseExtDoMenuUpdateswxMenuP != NULL){
      return m_wxFrameBaseExtDoMenuUpdateswxMenuP(this, menu);
    }
  }
  wxFrameBaseExtDoScreenToClientintPintPFunc m_wxFrameBaseExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxFrameBase::DoScreenToClient(x, y);
    if (*m_wxFrameBaseExtDoScreenToClientintPintP != NULL){
      return m_wxFrameBaseExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxFrameBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxFrameBaseExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxFrameBase::DoUpdateWindowUI(event);
    if (*m_wxFrameBaseExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxFrameBaseExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxFrameBaseExtEnableCloseButtonboolFunc m_wxFrameBaseExtEnableCloseButtonbool = NULL;
  virtual bool EnableCloseButton(bool enable = true) override
  {
    bool res = wxFrameBase::EnableCloseButton(enable);
    if (*m_wxFrameBaseExtEnableCloseButtonbool != NULL){
      return m_wxFrameBaseExtEnableCloseButtonbool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtEnableFullScreenViewboollongFunc m_wxFrameBaseExtEnableFullScreenViewboollong = NULL;
  virtual bool EnableFullScreenView(bool enable = true, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxFrameBase::EnableFullScreenView(enable, style);
    if (*m_wxFrameBaseExtEnableFullScreenViewboollong != NULL){
      return m_wxFrameBaseExtEnableFullScreenViewboollong(this, enable, style, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtEnableMaximizeButtonboolFunc m_wxFrameBaseExtEnableMaximizeButtonbool = NULL;
  virtual bool EnableMaximizeButton(bool enable = true) override
  {
    bool res = wxFrameBase::EnableMaximizeButton(enable);
    if (*m_wxFrameBaseExtEnableMaximizeButtonbool != NULL){
      return m_wxFrameBaseExtEnableMaximizeButtonbool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtEnableMinimizeButtonboolFunc m_wxFrameBaseExtEnableMinimizeButtonbool = NULL;
  virtual bool EnableMinimizeButton(bool enable = true) override
  {
    bool res = wxFrameBase::EnableMinimizeButton(enable);
    if (*m_wxFrameBaseExtEnableMinimizeButtonbool != NULL){
      return m_wxFrameBaseExtEnableMinimizeButtonbool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtFindItemInMenuBarintFunc m_wxFrameBaseExtFindItemInMenuBarint = NULL;
  virtual wxMenuItem* FindItemInMenuBar(int menuId) const override
  {
    wxMenuItem* res = wxFrameBase::FindItemInMenuBar(menuId);
    if (*m_wxFrameBaseExtFindItemInMenuBarint != NULL){
      return m_wxFrameBaseExtFindItemInMenuBarint(this, menuId, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetClassInfoFunc m_wxFrameBaseExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxFrameBase::GetClassInfo();
    if (*m_wxFrameBaseExtGetClassInfo != NULL){
      return m_wxFrameBaseExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetClientAreaOriginFunc m_wxFrameBaseExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxFrameBase::GetClientAreaOrigin();
    if (*m_wxFrameBaseExtGetClientAreaOrigin != NULL){
      return m_wxFrameBaseExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetContentProtectionFunc m_wxFrameBaseExtGetContentProtection = NULL;
  virtual wxContentProtection GetContentProtection() const override
  {
    wxContentProtection res = wxFrameBase::GetContentProtection();
    if (*m_wxFrameBaseExtGetContentProtection != NULL){
      return m_wxFrameBaseExtGetContentProtection(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetEventHashTableFunc m_wxFrameBaseExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxFrameBase::GetEventHashTable();
    if (*m_wxFrameBaseExtGetEventHashTable != NULL){
      return m_wxFrameBaseExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetEventTableFunc m_wxFrameBaseExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxFrameBase::GetEventTable();
    if (*m_wxFrameBaseExtGetEventTable != NULL){
      return m_wxFrameBaseExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetLabelFunc m_wxFrameBaseExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxFrameBase::GetLabel();
    if (*m_wxFrameBaseExtGetLabel != NULL){
      return m_wxFrameBaseExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetMenuBarFunc m_wxFrameBaseExtGetMenuBar = NULL;
  virtual wxMenuBar* GetMenuBar() const override
  {
    wxMenuBar* res = wxFrameBase::GetMenuBar();
    if (*m_wxFrameBaseExtGetMenuBar != NULL){
      return m_wxFrameBaseExtGetMenuBar(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetRectForTopLevelChildrenintPintPintPintPFunc m_wxFrameBaseExtGetRectForTopLevelChildrenintPintPintPintP = NULL;
  virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h) override
  {
    wxFrameBase::GetRectForTopLevelChildren(x, y, w, h);
    if (*m_wxFrameBaseExtGetRectForTopLevelChildrenintPintPintPintP != NULL){
      return m_wxFrameBaseExtGetRectForTopLevelChildrenintPintPintPintP(this, x, y, w, h);
    }
  }
  wxFrameBaseExtGetStatusBarFunc m_wxFrameBaseExtGetStatusBar = NULL;
  virtual wxStatusBar* GetStatusBar() const override
  {
    wxStatusBar* res = wxFrameBase::GetStatusBar();
    if (*m_wxFrameBaseExtGetStatusBar != NULL){
      return m_wxFrameBaseExtGetStatusBar(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetTitleFunc m_wxFrameBaseExtGetTitle = NULL;
  virtual wxString GetTitle() const override
  {
    wxString res = wxFrameBase::GetTitle();
    if (*m_wxFrameBaseExtGetTitle != NULL){
      return m_wxFrameBaseExtGetTitle(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetToolBarFunc m_wxFrameBaseExtGetToolBar = NULL;
  virtual wxToolBar* GetToolBar() const override
  {
    wxToolBar* res = wxFrameBase::GetToolBar();
    if (*m_wxFrameBaseExtGetToolBar != NULL){
      return m_wxFrameBaseExtGetToolBar(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtIconizeboolFunc m_wxFrameBaseExtIconizebool = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    wxFrameBase::Iconize(iconize);
    if (*m_wxFrameBaseExtIconizebool != NULL){
      return m_wxFrameBaseExtIconizebool(this, iconize);
    }
  }
  wxFrameBaseExtIsActiveFunc m_wxFrameBaseExtIsActive = NULL;
  virtual bool IsActive() override
  {
    bool res = wxFrameBase::IsActive();
    if (*m_wxFrameBaseExtIsActive != NULL){
      return m_wxFrameBaseExtIsActive(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtIsAlwaysMaximizedFunc m_wxFrameBaseExtIsAlwaysMaximized = NULL;
  virtual bool IsAlwaysMaximized() const override
  {
    bool res = wxFrameBase::IsAlwaysMaximized();
    if (*m_wxFrameBaseExtIsAlwaysMaximized != NULL){
      return m_wxFrameBaseExtIsAlwaysMaximized(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtIsClientAreaChildwxWindowCPFunc m_wxFrameBaseExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxFrameBase::IsClientAreaChild(child);
    if (*m_wxFrameBaseExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxFrameBaseExtIsClientAreaChildwxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtIsFullScreenFunc m_wxFrameBaseExtIsFullScreen = NULL;
  virtual bool IsFullScreen() const override
  {
    bool res = wxFrameBase::IsFullScreen();
    if (*m_wxFrameBaseExtIsFullScreen != NULL){
      return m_wxFrameBaseExtIsFullScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtIsIconizedFunc m_wxFrameBaseExtIsIconized = NULL;
  virtual bool IsIconized() const override
  {
    bool res = wxFrameBase::IsIconized();
    if (*m_wxFrameBaseExtIsIconized != NULL){
      return m_wxFrameBaseExtIsIconized(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtIsMaximizedFunc m_wxFrameBaseExtIsMaximized = NULL;
  virtual bool IsMaximized() const override
  {
    bool res = wxFrameBase::IsMaximized();
    if (*m_wxFrameBaseExtIsMaximized != NULL){
      return m_wxFrameBaseExtIsMaximized(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtIsOneOfBarswxWindowCPFunc m_wxFrameBaseExtIsOneOfBarswxWindowCP = NULL;
  virtual bool IsOneOfBars(wxWindow const* param0) const override
  {
    bool res = wxFrameBase::IsOneOfBars(param0);
    if (*m_wxFrameBaseExtIsOneOfBarswxWindowCP != NULL){
      return m_wxFrameBaseExtIsOneOfBarswxWindowCP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtIsTopLevelFunc m_wxFrameBaseExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxFrameBase::IsTopLevel();
    if (*m_wxFrameBaseExtIsTopLevel != NULL){
      return m_wxFrameBaseExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxFrameBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxFrameBase::IsTopNavigationDomain(kind);
    if (*m_wxFrameBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxFrameBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtIsVisibleFunc m_wxFrameBaseExtIsVisible = NULL;
  virtual bool IsVisible() const override
  {
    bool res = wxFrameBase::IsVisible();
    if (*m_wxFrameBaseExtIsVisible != NULL){
      return m_wxFrameBaseExtIsVisible(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtLayoutFunc m_wxFrameBaseExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxFrameBase::Layout();
    if (*m_wxFrameBaseExtLayout != NULL){
      return m_wxFrameBaseExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtMaximizeboolFunc m_wxFrameBaseExtMaximizebool = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    wxFrameBase::Maximize(maximize);
    if (*m_wxFrameBaseExtMaximizebool != NULL){
      return m_wxFrameBaseExtMaximizebool(this, maximize);
    }
  }
  wxFrameBaseExtOSXIsModifiedFunc m_wxFrameBaseExtOSXIsModified = NULL;
  virtual bool OSXIsModified() const override
  {
    bool res = wxFrameBase::OSXIsModified();
    if (*m_wxFrameBaseExtOSXIsModified != NULL){
      return m_wxFrameBaseExtOSXIsModified(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtOSXSetModifiedboolFunc m_wxFrameBaseExtOSXSetModifiedbool = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxFrameBase::OSXSetModified(modified);
    if (*m_wxFrameBaseExtOSXSetModifiedbool != NULL){
      return m_wxFrameBaseExtOSXSetModifiedbool(this, modified);
    }
  }
  wxFrameBaseExtOnCreateStatusBarintlongwxWindowIDwxStringCRFunc m_wxFrameBaseExtOnCreateStatusBarintlongwxWindowIDwxStringCR = NULL;
  virtual wxStatusBar* OnCreateStatusBar(int number, long style, wxWindowID winid, wxString const& name) override
  {
    wxStatusBar* res = wxFrameBase::OnCreateStatusBar(number, style, winid, name);
    if (*m_wxFrameBaseExtOnCreateStatusBarintlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameBaseExtOnCreateStatusBarintlongwxWindowIDwxStringCR(this, number, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtOnCreateToolBarlongwxWindowIDwxStringCRFunc m_wxFrameBaseExtOnCreateToolBarlongwxWindowIDwxStringCR = NULL;
  virtual wxToolBar* OnCreateToolBar(long style, wxWindowID winid, wxString const& name) override
  {
    wxToolBar* res = wxFrameBase::OnCreateToolBar(style, winid, name);
    if (*m_wxFrameBaseExtOnCreateToolBarlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameBaseExtOnCreateToolBarlongwxWindowIDwxStringCR(this, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtOnInternalIdleFunc m_wxFrameBaseExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxFrameBase::OnInternalIdle();
    if (*m_wxFrameBaseExtOnInternalIdle != NULL){
      return m_wxFrameBaseExtOnInternalIdle(this);
    }
  }
  wxFrameBaseExtPositionMenuBarFunc m_wxFrameBaseExtPositionMenuBar = NULL;
  virtual void PositionMenuBar() override
  {
    wxFrameBase::PositionMenuBar();
    if (*m_wxFrameBaseExtPositionMenuBar != NULL){
      return m_wxFrameBaseExtPositionMenuBar(this);
    }
  }
  wxFrameBaseExtPositionStatusBarFunc m_wxFrameBaseExtPositionStatusBar = NULL;
  virtual void PositionStatusBar() override
  {
    wxFrameBase::PositionStatusBar();
    if (*m_wxFrameBaseExtPositionStatusBar != NULL){
      return m_wxFrameBaseExtPositionStatusBar(this);
    }
  }
  wxFrameBaseExtPositionToolBarFunc m_wxFrameBaseExtPositionToolBar = NULL;
  virtual void PositionToolBar() override
  {
    wxFrameBase::PositionToolBar();
    if (*m_wxFrameBaseExtPositionToolBar != NULL){
      return m_wxFrameBaseExtPositionToolBar(this);
    }
  }
  wxFrameBaseExtRequestUserAttentionintFunc m_wxFrameBaseExtRequestUserAttentionint = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxFrameBase::RequestUserAttention(flags);
    if (*m_wxFrameBaseExtRequestUserAttentionint != NULL){
      return m_wxFrameBaseExtRequestUserAttentionint(this, flags);
    }
  }
  wxFrameBaseExtRestoreFunc m_wxFrameBaseExtRestore = NULL;
  virtual void Restore() override
  {
    wxFrameBase::Restore();
    if (*m_wxFrameBaseExtRestore != NULL){
      return m_wxFrameBaseExtRestore(this);
    }
  }
  wxFrameBaseExtSetContentProtectionwxContentProtectionFunc m_wxFrameBaseExtSetContentProtectionwxContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection contentProtection) override
  {
    bool res = wxFrameBase::SetContentProtection(contentProtection);
    if (*m_wxFrameBaseExtSetContentProtectionwxContentProtection != NULL){
      return m_wxFrameBaseExtSetContentProtectionwxContentProtection(this, contentProtection, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtSetIconswxIconBundleCRFunc m_wxFrameBaseExtSetIconswxIconBundleCR = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxFrameBase::SetIcons(icons);
    if (*m_wxFrameBaseExtSetIconswxIconBundleCR != NULL){
      return m_wxFrameBaseExtSetIconswxIconBundleCR(this, icons);
    }
  }
  wxFrameBaseExtSetLabelwxStringCRFunc m_wxFrameBaseExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxFrameBase::SetLabel(label);
    if (*m_wxFrameBaseExtSetLabelwxStringCR != NULL){
      return m_wxFrameBaseExtSetLabelwxStringCR(this, label);
    }
  }
  wxFrameBaseExtSetMaxSizewxSizeCRFunc m_wxFrameBaseExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxFrameBase::SetMaxSize(maxSize);
    if (*m_wxFrameBaseExtSetMaxSizewxSizeCR != NULL){
      return m_wxFrameBaseExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxFrameBaseExtSetMenuBarwxMenuBarPFunc m_wxFrameBaseExtSetMenuBarwxMenuBarP = NULL;
  virtual void SetMenuBar(wxMenuBar* menubar) override
  {
    wxFrameBase::SetMenuBar(menubar);
    if (*m_wxFrameBaseExtSetMenuBarwxMenuBarP != NULL){
      return m_wxFrameBaseExtSetMenuBarwxMenuBarP(this, menubar);
    }
  }
  wxFrameBaseExtSetMinSizewxSizeCRFunc m_wxFrameBaseExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxFrameBase::SetMinSize(minSize);
    if (*m_wxFrameBaseExtSetMinSizewxSizeCR != NULL){
      return m_wxFrameBaseExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxFrameBaseExtSetRepresentedFilenamewxStringCRFunc m_wxFrameBaseExtSetRepresentedFilenamewxStringCR = NULL;
  virtual void SetRepresentedFilename(wxString const& filename) override
  {
    wxFrameBase::SetRepresentedFilename(filename);
    if (*m_wxFrameBaseExtSetRepresentedFilenamewxStringCR != NULL){
      return m_wxFrameBaseExtSetRepresentedFilenamewxStringCR(this, filename);
    }
  }
  wxFrameBaseExtSetStatusBarwxStatusBarPFunc m_wxFrameBaseExtSetStatusBarwxStatusBarP = NULL;
  virtual void SetStatusBar(wxStatusBar* statBar) override
  {
    wxFrameBase::SetStatusBar(statBar);
    if (*m_wxFrameBaseExtSetStatusBarwxStatusBarP != NULL){
      return m_wxFrameBaseExtSetStatusBarwxStatusBarP(this, statBar);
    }
  }
  wxFrameBaseExtSetStatusTextwxStringCRintFunc m_wxFrameBaseExtSetStatusTextwxStringCRint = NULL;
  virtual void SetStatusText(wxString const& text, int number = 0) override
  {
    wxFrameBase::SetStatusText(text, number);
    if (*m_wxFrameBaseExtSetStatusTextwxStringCRint != NULL){
      return m_wxFrameBaseExtSetStatusTextwxStringCRint(this, text, number);
    }
  }
  wxFrameBaseExtSetStatusWidthsintintCBFunc m_wxFrameBaseExtSetStatusWidthsintintCB = NULL;
  virtual void SetStatusWidths(int n, int const widths_field[]) override
  {
    wxFrameBase::SetStatusWidths(n, widths_field);
    if (*m_wxFrameBaseExtSetStatusWidthsintintCB != NULL){
      return m_wxFrameBaseExtSetStatusWidthsintintCB(this, n, widths_field);
    }
  }
  wxFrameBaseExtSetTitlewxStringCRFunc m_wxFrameBaseExtSetTitlewxStringCR = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    wxFrameBase::SetTitle(title);
    if (*m_wxFrameBaseExtSetTitlewxStringCR != NULL){
      return m_wxFrameBaseExtSetTitlewxStringCR(this, title);
    }
  }
  wxFrameBaseExtSetToolBarwxToolBarPFunc m_wxFrameBaseExtSetToolBarwxToolBarP = NULL;
  virtual void SetToolBar(wxToolBar* toolbar) override
  {
    wxFrameBase::SetToolBar(toolbar);
    if (*m_wxFrameBaseExtSetToolBarwxToolBarP != NULL){
      return m_wxFrameBaseExtSetToolBarwxToolBarP(this, toolbar);
    }
  }
  wxFrameBaseExtShouldPreventAppExitFunc m_wxFrameBaseExtShouldPreventAppExit = NULL;
  virtual bool ShouldPreventAppExit() const override
  {
    bool res = wxFrameBase::ShouldPreventAppExit();
    if (*m_wxFrameBaseExtShouldPreventAppExit != NULL){
      return m_wxFrameBaseExtShouldPreventAppExit(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtShowFullScreenboollongFunc m_wxFrameBaseExtShowFullScreenboollong = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxFrameBase::ShowFullScreen(show, style);
    if (*m_wxFrameBaseExtShowFullScreenboollong != NULL){
      return m_wxFrameBaseExtShowFullScreenboollong(this, show, style, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtShowWithoutActivatingFunc m_wxFrameBaseExtShowWithoutActivating = NULL;
  virtual void ShowWithoutActivating() override
  {
    wxFrameBase::ShowWithoutActivating();
    if (*m_wxFrameBaseExtShowWithoutActivating != NULL){
      return m_wxFrameBaseExtShowWithoutActivating(this);
    }
  }
  wxFrameBaseExtUpdateWindowUIlongFunc m_wxFrameBaseExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxFrameBase::UpdateWindowUI(flags);
    if (*m_wxFrameBaseExtUpdateWindowUIlong != NULL){
      return m_wxFrameBaseExtUpdateWindowUIlong(this, flags);
    }
  }
  wxFrameBaseExtWXReservedTLW1voidPFunc m_wxFrameBaseExtWXReservedTLW1voidP = NULL;
  virtual void* WXReservedTLW1(void* param0) override
  {
    void* res = wxFrameBase::WXReservedTLW1(param0);
    if (*m_wxFrameBaseExtWXReservedTLW1voidP != NULL){
      return m_wxFrameBaseExtWXReservedTLW1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtWXReservedTLW2voidPFunc m_wxFrameBaseExtWXReservedTLW2voidP = NULL;
  virtual void* WXReservedTLW2(void* param0) override
  {
    void* res = wxFrameBase::WXReservedTLW2(param0);
    if (*m_wxFrameBaseExtWXReservedTLW2voidP != NULL){
      return m_wxFrameBaseExtWXReservedTLW2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtWXReservedTLW3voidPFunc m_wxFrameBaseExtWXReservedTLW3voidP = NULL;
  virtual void* WXReservedTLW3(void* param0) override
  {
    void* res = wxFrameBase::WXReservedTLW3(param0);
    if (*m_wxFrameBaseExtWXReservedTLW3voidP != NULL){
      return m_wxFrameBaseExtWXReservedTLW3voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExt(wxFrameBaseExtAttachMenuBarwxMenuBarPFunc a_AttachMenuBarwxMenuBarP, wxFrameBaseExtCreateStatusBarintlongwxWindowIDwxStringCRFunc a_CreateStatusBarintlongwxWindowIDwxStringCR, wxFrameBaseExtCreateToolBarlongwxWindowIDwxStringCRFunc a_CreateToolBarlongwxWindowIDwxStringCR, wxFrameBaseExtDestroyFunc a_Destroy, wxFrameBaseExtDetachMenuBarFunc a_DetachMenuBar, wxFrameBaseExtDoCentreintFunc a_DoCentreint, wxFrameBaseExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxFrameBaseExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxFrameBaseExtDoGiveHelpwxStringCRboolFunc a_DoGiveHelpwxStringCRbool, wxFrameBaseExtDoMenuUpdateswxMenuPFunc a_DoMenuUpdateswxMenuP, wxFrameBaseExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxFrameBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxFrameBaseExtEnableCloseButtonboolFunc a_EnableCloseButtonbool, wxFrameBaseExtEnableFullScreenViewboollongFunc a_EnableFullScreenViewboollong, wxFrameBaseExtEnableMaximizeButtonboolFunc a_EnableMaximizeButtonbool, wxFrameBaseExtEnableMinimizeButtonboolFunc a_EnableMinimizeButtonbool, wxFrameBaseExtFindItemInMenuBarintFunc a_FindItemInMenuBarint, wxFrameBaseExtGetClassInfoFunc a_GetClassInfo, wxFrameBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxFrameBaseExtGetContentProtectionFunc a_GetContentProtection, wxFrameBaseExtGetEventHashTableFunc a_GetEventHashTable, wxFrameBaseExtGetEventTableFunc a_GetEventTable, wxFrameBaseExtGetLabelFunc a_GetLabel, wxFrameBaseExtGetMenuBarFunc a_GetMenuBar, wxFrameBaseExtGetRectForTopLevelChildrenintPintPintPintPFunc a_GetRectForTopLevelChildrenintPintPintPintP, wxFrameBaseExtGetStatusBarFunc a_GetStatusBar, wxFrameBaseExtGetTitleFunc a_GetTitle, wxFrameBaseExtGetToolBarFunc a_GetToolBar, wxFrameBaseExtIconizeboolFunc a_Iconizebool, wxFrameBaseExtIsActiveFunc a_IsActive, wxFrameBaseExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxFrameBaseExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxFrameBaseExtIsFullScreenFunc a_IsFullScreen, wxFrameBaseExtIsIconizedFunc a_IsIconized, wxFrameBaseExtIsMaximizedFunc a_IsMaximized, wxFrameBaseExtIsOneOfBarswxWindowCPFunc a_IsOneOfBarswxWindowCP, wxFrameBaseExtIsTopLevelFunc a_IsTopLevel, wxFrameBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxFrameBaseExtIsVisibleFunc a_IsVisible, wxFrameBaseExtLayoutFunc a_Layout, wxFrameBaseExtMaximizeboolFunc a_Maximizebool, wxFrameBaseExtOSXIsModifiedFunc a_OSXIsModified, wxFrameBaseExtOSXSetModifiedboolFunc a_OSXSetModifiedbool, wxFrameBaseExtOnCreateStatusBarintlongwxWindowIDwxStringCRFunc a_OnCreateStatusBarintlongwxWindowIDwxStringCR, wxFrameBaseExtOnCreateToolBarlongwxWindowIDwxStringCRFunc a_OnCreateToolBarlongwxWindowIDwxStringCR, wxFrameBaseExtOnInternalIdleFunc a_OnInternalIdle, wxFrameBaseExtPositionMenuBarFunc a_PositionMenuBar, wxFrameBaseExtPositionStatusBarFunc a_PositionStatusBar, wxFrameBaseExtPositionToolBarFunc a_PositionToolBar, wxFrameBaseExtRequestUserAttentionintFunc a_RequestUserAttentionint, wxFrameBaseExtRestoreFunc a_Restore, wxFrameBaseExtSetContentProtectionwxContentProtectionFunc a_SetContentProtectionwxContentProtection, wxFrameBaseExtSetIconswxIconBundleCRFunc a_SetIconswxIconBundleCR, wxFrameBaseExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxFrameBaseExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxFrameBaseExtSetMenuBarwxMenuBarPFunc a_SetMenuBarwxMenuBarP, wxFrameBaseExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxFrameBaseExtSetRepresentedFilenamewxStringCRFunc a_SetRepresentedFilenamewxStringCR, wxFrameBaseExtSetStatusBarwxStatusBarPFunc a_SetStatusBarwxStatusBarP, wxFrameBaseExtSetStatusTextwxStringCRintFunc a_SetStatusTextwxStringCRint, wxFrameBaseExtSetStatusWidthsintintCBFunc a_SetStatusWidthsintintCB, wxFrameBaseExtSetTitlewxStringCRFunc a_SetTitlewxStringCR, wxFrameBaseExtSetToolBarwxToolBarPFunc a_SetToolBarwxToolBarP, wxFrameBaseExtShouldPreventAppExitFunc a_ShouldPreventAppExit, wxFrameBaseExtShowFullScreenboollongFunc a_ShowFullScreenboollong, wxFrameBaseExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxFrameBaseExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxFrameBaseExtWXReservedTLW1voidPFunc a_WXReservedTLW1voidP, wxFrameBaseExtWXReservedTLW2voidPFunc a_WXReservedTLW2voidP, wxFrameBaseExtWXReservedTLW3voidPFunc a_WXReservedTLW3voidP): wxFrameBase() {
    m_wxFrameBaseExtAttachMenuBarwxMenuBarP = a_AttachMenuBarwxMenuBarP;
    m_wxFrameBaseExtCreateStatusBarintlongwxWindowIDwxStringCR = a_CreateStatusBarintlongwxWindowIDwxStringCR;
    m_wxFrameBaseExtCreateToolBarlongwxWindowIDwxStringCR = a_CreateToolBarlongwxWindowIDwxStringCR;
    m_wxFrameBaseExtDestroy = a_Destroy;
    m_wxFrameBaseExtDetachMenuBar = a_DetachMenuBar;
    m_wxFrameBaseExtDoCentreint = a_DoCentreint;
    m_wxFrameBaseExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxFrameBaseExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxFrameBaseExtDoGiveHelpwxStringCRbool = a_DoGiveHelpwxStringCRbool;
    m_wxFrameBaseExtDoMenuUpdateswxMenuP = a_DoMenuUpdateswxMenuP;
    m_wxFrameBaseExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxFrameBaseExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxFrameBaseExtEnableCloseButtonbool = a_EnableCloseButtonbool;
    m_wxFrameBaseExtEnableFullScreenViewboollong = a_EnableFullScreenViewboollong;
    m_wxFrameBaseExtEnableMaximizeButtonbool = a_EnableMaximizeButtonbool;
    m_wxFrameBaseExtEnableMinimizeButtonbool = a_EnableMinimizeButtonbool;
    m_wxFrameBaseExtFindItemInMenuBarint = a_FindItemInMenuBarint;
    m_wxFrameBaseExtGetClassInfo = a_GetClassInfo;
    m_wxFrameBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxFrameBaseExtGetContentProtection = a_GetContentProtection;
    m_wxFrameBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxFrameBaseExtGetEventTable = a_GetEventTable;
    m_wxFrameBaseExtGetLabel = a_GetLabel;
    m_wxFrameBaseExtGetMenuBar = a_GetMenuBar;
    m_wxFrameBaseExtGetRectForTopLevelChildrenintPintPintPintP = a_GetRectForTopLevelChildrenintPintPintPintP;
    m_wxFrameBaseExtGetStatusBar = a_GetStatusBar;
    m_wxFrameBaseExtGetTitle = a_GetTitle;
    m_wxFrameBaseExtGetToolBar = a_GetToolBar;
    m_wxFrameBaseExtIconizebool = a_Iconizebool;
    m_wxFrameBaseExtIsActive = a_IsActive;
    m_wxFrameBaseExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxFrameBaseExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxFrameBaseExtIsFullScreen = a_IsFullScreen;
    m_wxFrameBaseExtIsIconized = a_IsIconized;
    m_wxFrameBaseExtIsMaximized = a_IsMaximized;
    m_wxFrameBaseExtIsOneOfBarswxWindowCP = a_IsOneOfBarswxWindowCP;
    m_wxFrameBaseExtIsTopLevel = a_IsTopLevel;
    m_wxFrameBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxFrameBaseExtIsVisible = a_IsVisible;
    m_wxFrameBaseExtLayout = a_Layout;
    m_wxFrameBaseExtMaximizebool = a_Maximizebool;
    m_wxFrameBaseExtOSXIsModified = a_OSXIsModified;
    m_wxFrameBaseExtOSXSetModifiedbool = a_OSXSetModifiedbool;
    m_wxFrameBaseExtOnCreateStatusBarintlongwxWindowIDwxStringCR = a_OnCreateStatusBarintlongwxWindowIDwxStringCR;
    m_wxFrameBaseExtOnCreateToolBarlongwxWindowIDwxStringCR = a_OnCreateToolBarlongwxWindowIDwxStringCR;
    m_wxFrameBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxFrameBaseExtPositionMenuBar = a_PositionMenuBar;
    m_wxFrameBaseExtPositionStatusBar = a_PositionStatusBar;
    m_wxFrameBaseExtPositionToolBar = a_PositionToolBar;
    m_wxFrameBaseExtRequestUserAttentionint = a_RequestUserAttentionint;
    m_wxFrameBaseExtRestore = a_Restore;
    m_wxFrameBaseExtSetContentProtectionwxContentProtection = a_SetContentProtectionwxContentProtection;
    m_wxFrameBaseExtSetIconswxIconBundleCR = a_SetIconswxIconBundleCR;
    m_wxFrameBaseExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxFrameBaseExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxFrameBaseExtSetMenuBarwxMenuBarP = a_SetMenuBarwxMenuBarP;
    m_wxFrameBaseExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxFrameBaseExtSetRepresentedFilenamewxStringCR = a_SetRepresentedFilenamewxStringCR;
    m_wxFrameBaseExtSetStatusBarwxStatusBarP = a_SetStatusBarwxStatusBarP;
    m_wxFrameBaseExtSetStatusTextwxStringCRint = a_SetStatusTextwxStringCRint;
    m_wxFrameBaseExtSetStatusWidthsintintCB = a_SetStatusWidthsintintCB;
    m_wxFrameBaseExtSetTitlewxStringCR = a_SetTitlewxStringCR;
    m_wxFrameBaseExtSetToolBarwxToolBarP = a_SetToolBarwxToolBarP;
    m_wxFrameBaseExtShouldPreventAppExit = a_ShouldPreventAppExit;
    m_wxFrameBaseExtShowFullScreenboollong = a_ShowFullScreenboollong;
    m_wxFrameBaseExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxFrameBaseExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxFrameBaseExtWXReservedTLW1voidP = a_WXReservedTLW1voidP;
    m_wxFrameBaseExtWXReservedTLW2voidP = a_WXReservedTLW2voidP;
    m_wxFrameBaseExtWXReservedTLW3voidP = a_WXReservedTLW3voidP;
  }
};

class wxFrameExt: public wxFrame
{
public:
  wxFrameExt(): wxFrame()  {  }
  wxFrameExt(wxWindow* parent, wxWindowID id, wxString const& title, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = (0x0800 | 0x0040 | 0x0400 | 0x0200 | 0x1000 | 0x20000000 | 0x00400000), wxString const& name = wxString::FromAscii(wxFrameNameStr)): wxFrame(parent, id, title, pos, size, style, name)  {  }
  wxFrameExtAttachMenuBarwxMenuBarPFunc m_wxFrameExtAttachMenuBarwxMenuBarP = NULL;
  virtual void AttachMenuBar(wxMenuBar* menubar) override
  {
    wxFrame::AttachMenuBar(menubar);
    if (*m_wxFrameExtAttachMenuBarwxMenuBarP != NULL){
      return m_wxFrameExtAttachMenuBarwxMenuBarP(this, menubar);
    }
  }
  wxFrameExtCreateStatusBarintlongwxWindowIDwxStringCRFunc m_wxFrameExtCreateStatusBarintlongwxWindowIDwxStringCR = NULL;
  virtual wxStatusBar* CreateStatusBar(int number = 1, long style = (0x0010 | 0x0100 | 0x0020 | 0x00010000), wxWindowID winid = 0, wxString const& name = wxString::FromAscii(wxStatusLineNameStr)) override
  {
    wxStatusBar* res = wxFrame::CreateStatusBar(number, style, winid, name);
    if (*m_wxFrameExtCreateStatusBarintlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameExtCreateStatusBarintlongwxWindowIDwxStringCR(this, number, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtCreateToolBarlongwxWindowIDwxStringCRFunc m_wxFrameExtCreateToolBarlongwxWindowIDwxStringCR = NULL;
  virtual wxToolBar* CreateToolBar(long style = -1, wxWindowID winid = wxID_ANY, wxString const& name = wxString::FromAscii(wxToolBarNameStr)) override
  {
    wxToolBar* res = wxFrame::CreateToolBar(style, winid, name);
    if (*m_wxFrameExtCreateToolBarlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameExtCreateToolBarlongwxWindowIDwxStringCR(this, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtDestroyFunc m_wxFrameExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxFrame::Destroy();
    if (*m_wxFrameExtDestroy != NULL){
      return m_wxFrameExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtDetachMenuBarFunc m_wxFrameExtDetachMenuBar = NULL;
  virtual void DetachMenuBar() override
  {
    wxFrame::DetachMenuBar();
    if (*m_wxFrameExtDetachMenuBar != NULL){
      return m_wxFrameExtDetachMenuBar(this);
    }
  }
  wxFrameExtDoCentreintFunc m_wxFrameExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxFrame::DoCentre(dir);
    if (*m_wxFrameExtDoCentreint != NULL){
      return m_wxFrameExtDoCentreint(this, dir);
    }
  }
  wxFrameExtDoClientToScreenintPintPFunc m_wxFrameExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxFrame::DoClientToScreen(x, y);
    if (*m_wxFrameExtDoClientToScreenintPintP != NULL){
      return m_wxFrameExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxFrameExtDoGetClientSizeintPintPFunc m_wxFrameExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxFrame::DoGetClientSize(width, height);
    if (*m_wxFrameExtDoGetClientSizeintPintP != NULL){
      return m_wxFrameExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxFrameExtDoGetScreenPositionintPintPFunc m_wxFrameExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxFrame::DoGetScreenPosition(x, y);
    if (*m_wxFrameExtDoGetScreenPositionintPintP != NULL){
      return m_wxFrameExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxFrameExtDoGiveHelpwxStringCRboolFunc m_wxFrameExtDoGiveHelpwxStringCRbool = NULL;
  virtual void DoGiveHelp(wxString const& text, bool show) override
  {
    wxFrame::DoGiveHelp(text, show);
    if (*m_wxFrameExtDoGiveHelpwxStringCRbool != NULL){
      return m_wxFrameExtDoGiveHelpwxStringCRbool(this, text, show);
    }
  }
  wxFrameExtDoMenuUpdateswxMenuPFunc m_wxFrameExtDoMenuUpdateswxMenuP = NULL;
  virtual void DoMenuUpdates(wxMenu* menu = __null) override
  {
    wxFrame::DoMenuUpdates(menu);
    if (*m_wxFrameExtDoMenuUpdateswxMenuP != NULL){
      return m_wxFrameExtDoMenuUpdateswxMenuP(this, menu);
    }
  }
  wxFrameExtDoScreenToClientintPintPFunc m_wxFrameExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxFrame::DoScreenToClient(x, y);
    if (*m_wxFrameExtDoScreenToClientintPintP != NULL){
      return m_wxFrameExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxFrameExtDoSetClientSizeintintFunc m_wxFrameExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxFrame::DoSetClientSize(width, height);
    if (*m_wxFrameExtDoSetClientSizeintint != NULL){
      return m_wxFrameExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxFrameExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxFrameExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxFrame::DoUpdateWindowUI(event);
    if (*m_wxFrameExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxFrameExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxFrameExtEnableboolFunc m_wxFrameExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxFrame::Enable(enable);
    if (*m_wxFrameExtEnablebool != NULL){
      return m_wxFrameExtEnablebool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtEnableCloseButtonboolFunc m_wxFrameExtEnableCloseButtonbool = NULL;
  virtual bool EnableCloseButton(bool enable = true) override
  {
    bool res = wxFrame::EnableCloseButton(enable);
    if (*m_wxFrameExtEnableCloseButtonbool != NULL){
      return m_wxFrameExtEnableCloseButtonbool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtEnableFullScreenViewboollongFunc m_wxFrameExtEnableFullScreenViewboollong = NULL;
  virtual bool EnableFullScreenView(bool enable = true, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxFrame::EnableFullScreenView(enable, style);
    if (*m_wxFrameExtEnableFullScreenViewboollong != NULL){
      return m_wxFrameExtEnableFullScreenViewboollong(this, enable, style, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtEnableMaximizeButtonboolFunc m_wxFrameExtEnableMaximizeButtonbool = NULL;
  virtual bool EnableMaximizeButton(bool enable = true) override
  {
    bool res = wxFrame::EnableMaximizeButton(enable);
    if (*m_wxFrameExtEnableMaximizeButtonbool != NULL){
      return m_wxFrameExtEnableMaximizeButtonbool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtEnableMinimizeButtonboolFunc m_wxFrameExtEnableMinimizeButtonbool = NULL;
  virtual bool EnableMinimizeButton(bool enable = true) override
  {
    bool res = wxFrame::EnableMinimizeButton(enable);
    if (*m_wxFrameExtEnableMinimizeButtonbool != NULL){
      return m_wxFrameExtEnableMinimizeButtonbool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtFindItemInMenuBarintFunc m_wxFrameExtFindItemInMenuBarint = NULL;
  virtual wxMenuItem* FindItemInMenuBar(int menuId) const override
  {
    wxMenuItem* res = wxFrame::FindItemInMenuBar(menuId);
    if (*m_wxFrameExtFindItemInMenuBarint != NULL){
      return m_wxFrameExtFindItemInMenuBarint(this, menuId, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtGetClassInfoFunc m_wxFrameExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxFrame::GetClassInfo();
    if (*m_wxFrameExtGetClassInfo != NULL){
      return m_wxFrameExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtGetClientAreaOriginFunc m_wxFrameExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxFrame::GetClientAreaOrigin();
    if (*m_wxFrameExtGetClientAreaOrigin != NULL){
      return m_wxFrameExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtGetContentProtectionFunc m_wxFrameExtGetContentProtection = NULL;
  virtual wxContentProtection GetContentProtection() const override
  {
    wxContentProtection res = wxFrame::GetContentProtection();
    if (*m_wxFrameExtGetContentProtection != NULL){
      return m_wxFrameExtGetContentProtection(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtGetEventHashTableFunc m_wxFrameExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxFrame::GetEventHashTable();
    if (*m_wxFrameExtGetEventHashTable != NULL){
      return m_wxFrameExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtGetEventTableFunc m_wxFrameExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxFrame::GetEventTable();
    if (*m_wxFrameExtGetEventTable != NULL){
      return m_wxFrameExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtGetLabelFunc m_wxFrameExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxFrame::GetLabel();
    if (*m_wxFrameExtGetLabel != NULL){
      return m_wxFrameExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtGetMenuBarFunc m_wxFrameExtGetMenuBar = NULL;
  virtual wxMenuBar* GetMenuBar() const override
  {
    wxMenuBar* res = wxFrame::GetMenuBar();
    if (*m_wxFrameExtGetMenuBar != NULL){
      return m_wxFrameExtGetMenuBar(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtGetRectForTopLevelChildrenintPintPintPintPFunc m_wxFrameExtGetRectForTopLevelChildrenintPintPintPintP = NULL;
  virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h) override
  {
    wxFrame::GetRectForTopLevelChildren(x, y, w, h);
    if (*m_wxFrameExtGetRectForTopLevelChildrenintPintPintPintP != NULL){
      return m_wxFrameExtGetRectForTopLevelChildrenintPintPintPintP(this, x, y, w, h);
    }
  }
  wxFrameExtGetStatusBarFunc m_wxFrameExtGetStatusBar = NULL;
  virtual wxStatusBar* GetStatusBar() const override
  {
    wxStatusBar* res = wxFrame::GetStatusBar();
    if (*m_wxFrameExtGetStatusBar != NULL){
      return m_wxFrameExtGetStatusBar(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtGetTitleFunc m_wxFrameExtGetTitle = NULL;
  virtual wxString GetTitle() const override
  {
    wxString res = wxFrame::GetTitle();
    if (*m_wxFrameExtGetTitle != NULL){
      return m_wxFrameExtGetTitle(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtGetToolBarFunc m_wxFrameExtGetToolBar = NULL;
  virtual wxToolBar* GetToolBar() const override
  {
    wxToolBar* res = wxFrame::GetToolBar();
    if (*m_wxFrameExtGetToolBar != NULL){
      return m_wxFrameExtGetToolBar(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtIconizeboolFunc m_wxFrameExtIconizebool = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    wxFrame::Iconize(iconize);
    if (*m_wxFrameExtIconizebool != NULL){
      return m_wxFrameExtIconizebool(this, iconize);
    }
  }
  wxFrameExtIsActiveFunc m_wxFrameExtIsActive = NULL;
  virtual bool IsActive() override
  {
    bool res = wxFrame::IsActive();
    if (*m_wxFrameExtIsActive != NULL){
      return m_wxFrameExtIsActive(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtIsAlwaysMaximizedFunc m_wxFrameExtIsAlwaysMaximized = NULL;
  virtual bool IsAlwaysMaximized() const override
  {
    bool res = wxFrame::IsAlwaysMaximized();
    if (*m_wxFrameExtIsAlwaysMaximized != NULL){
      return m_wxFrameExtIsAlwaysMaximized(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtIsClientAreaChildwxWindowCPFunc m_wxFrameExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxFrame::IsClientAreaChild(child);
    if (*m_wxFrameExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxFrameExtIsClientAreaChildwxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtIsFullScreenFunc m_wxFrameExtIsFullScreen = NULL;
  virtual bool IsFullScreen() const override
  {
    bool res = wxFrame::IsFullScreen();
    if (*m_wxFrameExtIsFullScreen != NULL){
      return m_wxFrameExtIsFullScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtIsIconizedFunc m_wxFrameExtIsIconized = NULL;
  virtual bool IsIconized() const override
  {
    bool res = wxFrame::IsIconized();
    if (*m_wxFrameExtIsIconized != NULL){
      return m_wxFrameExtIsIconized(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtIsMaximizedFunc m_wxFrameExtIsMaximized = NULL;
  virtual bool IsMaximized() const override
  {
    bool res = wxFrame::IsMaximized();
    if (*m_wxFrameExtIsMaximized != NULL){
      return m_wxFrameExtIsMaximized(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtIsOneOfBarswxWindowCPFunc m_wxFrameExtIsOneOfBarswxWindowCP = NULL;
  virtual bool IsOneOfBars(wxWindow const* win) const override
  {
    bool res = wxFrame::IsOneOfBars(win);
    if (*m_wxFrameExtIsOneOfBarswxWindowCP != NULL){
      return m_wxFrameExtIsOneOfBarswxWindowCP(this, win, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtIsTopLevelFunc m_wxFrameExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxFrame::IsTopLevel();
    if (*m_wxFrameExtIsTopLevel != NULL){
      return m_wxFrameExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxFrameExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxFrame::IsTopNavigationDomain(kind);
    if (*m_wxFrameExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxFrameExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtIsVisibleFunc m_wxFrameExtIsVisible = NULL;
  virtual bool IsVisible() const override
  {
    bool res = wxFrame::IsVisible();
    if (*m_wxFrameExtIsVisible != NULL){
      return m_wxFrameExtIsVisible(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtLayoutFunc m_wxFrameExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxFrame::Layout();
    if (*m_wxFrameExtLayout != NULL){
      return m_wxFrameExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtMaximizeboolFunc m_wxFrameExtMaximizebool = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    wxFrame::Maximize(maximize);
    if (*m_wxFrameExtMaximizebool != NULL){
      return m_wxFrameExtMaximizebool(this, maximize);
    }
  }
  wxFrameExtOSXIsModifiedFunc m_wxFrameExtOSXIsModified = NULL;
  virtual bool OSXIsModified() const override
  {
    bool res = wxFrame::OSXIsModified();
    if (*m_wxFrameExtOSXIsModified != NULL){
      return m_wxFrameExtOSXIsModified(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtOSXSetModifiedboolFunc m_wxFrameExtOSXSetModifiedbool = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxFrame::OSXSetModified(modified);
    if (*m_wxFrameExtOSXSetModifiedbool != NULL){
      return m_wxFrameExtOSXSetModifiedbool(this, modified);
    }
  }
  wxFrameExtOnCreateStatusBarintlongwxWindowIDwxStringCRFunc m_wxFrameExtOnCreateStatusBarintlongwxWindowIDwxStringCR = NULL;
  virtual wxStatusBar* OnCreateStatusBar(int number, long style, wxWindowID winid, wxString const& name) override
  {
    wxStatusBar* res = wxFrame::OnCreateStatusBar(number, style, winid, name);
    if (*m_wxFrameExtOnCreateStatusBarintlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameExtOnCreateStatusBarintlongwxWindowIDwxStringCR(this, number, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtOnCreateToolBarlongwxWindowIDwxStringCRFunc m_wxFrameExtOnCreateToolBarlongwxWindowIDwxStringCR = NULL;
  virtual wxToolBar* OnCreateToolBar(long style, wxWindowID winid, wxString const& name) override
  {
    wxToolBar* res = wxFrame::OnCreateToolBar(style, winid, name);
    if (*m_wxFrameExtOnCreateToolBarlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameExtOnCreateToolBarlongwxWindowIDwxStringCR(this, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtOnInternalIdleFunc m_wxFrameExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxFrame::OnInternalIdle();
    if (*m_wxFrameExtOnInternalIdle != NULL){
      return m_wxFrameExtOnInternalIdle(this);
    }
  }
  wxFrameExtPositionMenuBarFunc m_wxFrameExtPositionMenuBar = NULL;
  virtual void PositionMenuBar() override
  {
    wxFrame::PositionMenuBar();
    if (*m_wxFrameExtPositionMenuBar != NULL){
      return m_wxFrameExtPositionMenuBar(this);
    }
  }
  wxFrameExtPositionStatusBarFunc m_wxFrameExtPositionStatusBar = NULL;
  virtual void PositionStatusBar() override
  {
    wxFrame::PositionStatusBar();
    if (*m_wxFrameExtPositionStatusBar != NULL){
      return m_wxFrameExtPositionStatusBar(this);
    }
  }
  wxFrameExtPositionToolBarFunc m_wxFrameExtPositionToolBar = NULL;
  virtual void PositionToolBar() override
  {
    wxFrame::PositionToolBar();
    if (*m_wxFrameExtPositionToolBar != NULL){
      return m_wxFrameExtPositionToolBar(this);
    }
  }
  wxFrameExtRequestUserAttentionintFunc m_wxFrameExtRequestUserAttentionint = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxFrame::RequestUserAttention(flags);
    if (*m_wxFrameExtRequestUserAttentionint != NULL){
      return m_wxFrameExtRequestUserAttentionint(this, flags);
    }
  }
  wxFrameExtRestoreFunc m_wxFrameExtRestore = NULL;
  virtual void Restore() override
  {
    wxFrame::Restore();
    if (*m_wxFrameExtRestore != NULL){
      return m_wxFrameExtRestore(this);
    }
  }
  wxFrameExtSetContentProtectionwxContentProtectionFunc m_wxFrameExtSetContentProtectionwxContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection contentProtection) override
  {
    bool res = wxFrame::SetContentProtection(contentProtection);
    if (*m_wxFrameExtSetContentProtectionwxContentProtection != NULL){
      return m_wxFrameExtSetContentProtectionwxContentProtection(this, contentProtection, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtSetIconswxIconBundleCRFunc m_wxFrameExtSetIconswxIconBundleCR = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxFrame::SetIcons(icons);
    if (*m_wxFrameExtSetIconswxIconBundleCR != NULL){
      return m_wxFrameExtSetIconswxIconBundleCR(this, icons);
    }
  }
  wxFrameExtSetLabelwxStringCRFunc m_wxFrameExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxFrame::SetLabel(label);
    if (*m_wxFrameExtSetLabelwxStringCR != NULL){
      return m_wxFrameExtSetLabelwxStringCR(this, label);
    }
  }
  wxFrameExtSetMaxSizewxSizeCRFunc m_wxFrameExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxFrame::SetMaxSize(maxSize);
    if (*m_wxFrameExtSetMaxSizewxSizeCR != NULL){
      return m_wxFrameExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxFrameExtSetMenuBarwxMenuBarPFunc m_wxFrameExtSetMenuBarwxMenuBarP = NULL;
  virtual void SetMenuBar(wxMenuBar* menubar) override
  {
    wxFrame::SetMenuBar(menubar);
    if (*m_wxFrameExtSetMenuBarwxMenuBarP != NULL){
      return m_wxFrameExtSetMenuBarwxMenuBarP(this, menubar);
    }
  }
  wxFrameExtSetMinSizewxSizeCRFunc m_wxFrameExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxFrame::SetMinSize(minSize);
    if (*m_wxFrameExtSetMinSizewxSizeCR != NULL){
      return m_wxFrameExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxFrameExtSetRepresentedFilenamewxStringCRFunc m_wxFrameExtSetRepresentedFilenamewxStringCR = NULL;
  virtual void SetRepresentedFilename(wxString const& filename) override
  {
    wxFrame::SetRepresentedFilename(filename);
    if (*m_wxFrameExtSetRepresentedFilenamewxStringCR != NULL){
      return m_wxFrameExtSetRepresentedFilenamewxStringCR(this, filename);
    }
  }
  wxFrameExtSetStatusBarwxStatusBarPFunc m_wxFrameExtSetStatusBarwxStatusBarP = NULL;
  virtual void SetStatusBar(wxStatusBar* statBar) override
  {
    wxFrame::SetStatusBar(statBar);
    if (*m_wxFrameExtSetStatusBarwxStatusBarP != NULL){
      return m_wxFrameExtSetStatusBarwxStatusBarP(this, statBar);
    }
  }
  wxFrameExtSetStatusTextwxStringCRintFunc m_wxFrameExtSetStatusTextwxStringCRint = NULL;
  virtual void SetStatusText(wxString const& text, int number = 0) override
  {
    wxFrame::SetStatusText(text, number);
    if (*m_wxFrameExtSetStatusTextwxStringCRint != NULL){
      return m_wxFrameExtSetStatusTextwxStringCRint(this, text, number);
    }
  }
  wxFrameExtSetStatusWidthsintintCBFunc m_wxFrameExtSetStatusWidthsintintCB = NULL;
  virtual void SetStatusWidths(int n, int const widths_field[]) override
  {
    wxFrame::SetStatusWidths(n, widths_field);
    if (*m_wxFrameExtSetStatusWidthsintintCB != NULL){
      return m_wxFrameExtSetStatusWidthsintintCB(this, n, widths_field);
    }
  }
  wxFrameExtSetTitlewxStringCRFunc m_wxFrameExtSetTitlewxStringCR = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    wxFrame::SetTitle(title);
    if (*m_wxFrameExtSetTitlewxStringCR != NULL){
      return m_wxFrameExtSetTitlewxStringCR(this, title);
    }
  }
  wxFrameExtSetToolBarwxToolBarPFunc m_wxFrameExtSetToolBarwxToolBarP = NULL;
  virtual void SetToolBar(wxToolBar* toolbar) override
  {
    wxFrame::SetToolBar(toolbar);
    if (*m_wxFrameExtSetToolBarwxToolBarP != NULL){
      return m_wxFrameExtSetToolBarwxToolBarP(this, toolbar);
    }
  }
  wxFrameExtShouldPreventAppExitFunc m_wxFrameExtShouldPreventAppExit = NULL;
  virtual bool ShouldPreventAppExit() const override
  {
    bool res = wxFrame::ShouldPreventAppExit();
    if (*m_wxFrameExtShouldPreventAppExit != NULL){
      return m_wxFrameExtShouldPreventAppExit(this, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtShowboolFunc m_wxFrameExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxFrame::Show(show);
    if (*m_wxFrameExtShowbool != NULL){
      return m_wxFrameExtShowbool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtShowFullScreenboollongFunc m_wxFrameExtShowFullScreenboollong = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxFrame::ShowFullScreen(show, style);
    if (*m_wxFrameExtShowFullScreenboollong != NULL){
      return m_wxFrameExtShowFullScreenboollong(this, show, style, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtShowWithoutActivatingFunc m_wxFrameExtShowWithoutActivating = NULL;
  virtual void ShowWithoutActivating() override
  {
    wxFrame::ShowWithoutActivating();
    if (*m_wxFrameExtShowWithoutActivating != NULL){
      return m_wxFrameExtShowWithoutActivating(this);
    }
  }
  wxFrameExtUpdateWindowUIlongFunc m_wxFrameExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxFrame::UpdateWindowUI(flags);
    if (*m_wxFrameExtUpdateWindowUIlong != NULL){
      return m_wxFrameExtUpdateWindowUIlong(this, flags);
    }
  }
  wxFrameExtWXReservedTLW1voidPFunc m_wxFrameExtWXReservedTLW1voidP = NULL;
  virtual void* WXReservedTLW1(void* param0) override
  {
    void* res = wxFrame::WXReservedTLW1(param0);
    if (*m_wxFrameExtWXReservedTLW1voidP != NULL){
      return m_wxFrameExtWXReservedTLW1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtWXReservedTLW2voidPFunc m_wxFrameExtWXReservedTLW2voidP = NULL;
  virtual void* WXReservedTLW2(void* param0) override
  {
    void* res = wxFrame::WXReservedTLW2(param0);
    if (*m_wxFrameExtWXReservedTLW2voidP != NULL){
      return m_wxFrameExtWXReservedTLW2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtWXReservedTLW3voidPFunc m_wxFrameExtWXReservedTLW3voidP = NULL;
  virtual void* WXReservedTLW3(void* param0) override
  {
    void* res = wxFrame::WXReservedTLW3(param0);
    if (*m_wxFrameExtWXReservedTLW3voidP != NULL){
      return m_wxFrameExtWXReservedTLW3voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameExt(wxFrameExtAttachMenuBarwxMenuBarPFunc a_AttachMenuBarwxMenuBarP, wxFrameExtCreateStatusBarintlongwxWindowIDwxStringCRFunc a_CreateStatusBarintlongwxWindowIDwxStringCR, wxFrameExtCreateToolBarlongwxWindowIDwxStringCRFunc a_CreateToolBarlongwxWindowIDwxStringCR, wxFrameExtDestroyFunc a_Destroy, wxFrameExtDetachMenuBarFunc a_DetachMenuBar, wxFrameExtDoCentreintFunc a_DoCentreint, wxFrameExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxFrameExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxFrameExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxFrameExtDoGiveHelpwxStringCRboolFunc a_DoGiveHelpwxStringCRbool, wxFrameExtDoMenuUpdateswxMenuPFunc a_DoMenuUpdateswxMenuP, wxFrameExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxFrameExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxFrameExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxFrameExtEnableboolFunc a_Enablebool, wxFrameExtEnableCloseButtonboolFunc a_EnableCloseButtonbool, wxFrameExtEnableFullScreenViewboollongFunc a_EnableFullScreenViewboollong, wxFrameExtEnableMaximizeButtonboolFunc a_EnableMaximizeButtonbool, wxFrameExtEnableMinimizeButtonboolFunc a_EnableMinimizeButtonbool, wxFrameExtFindItemInMenuBarintFunc a_FindItemInMenuBarint, wxFrameExtGetClassInfoFunc a_GetClassInfo, wxFrameExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxFrameExtGetContentProtectionFunc a_GetContentProtection, wxFrameExtGetEventHashTableFunc a_GetEventHashTable, wxFrameExtGetEventTableFunc a_GetEventTable, wxFrameExtGetLabelFunc a_GetLabel, wxFrameExtGetMenuBarFunc a_GetMenuBar, wxFrameExtGetRectForTopLevelChildrenintPintPintPintPFunc a_GetRectForTopLevelChildrenintPintPintPintP, wxFrameExtGetStatusBarFunc a_GetStatusBar, wxFrameExtGetTitleFunc a_GetTitle, wxFrameExtGetToolBarFunc a_GetToolBar, wxFrameExtIconizeboolFunc a_Iconizebool, wxFrameExtIsActiveFunc a_IsActive, wxFrameExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxFrameExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxFrameExtIsFullScreenFunc a_IsFullScreen, wxFrameExtIsIconizedFunc a_IsIconized, wxFrameExtIsMaximizedFunc a_IsMaximized, wxFrameExtIsOneOfBarswxWindowCPFunc a_IsOneOfBarswxWindowCP, wxFrameExtIsTopLevelFunc a_IsTopLevel, wxFrameExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxFrameExtIsVisibleFunc a_IsVisible, wxFrameExtLayoutFunc a_Layout, wxFrameExtMaximizeboolFunc a_Maximizebool, wxFrameExtOSXIsModifiedFunc a_OSXIsModified, wxFrameExtOSXSetModifiedboolFunc a_OSXSetModifiedbool, wxFrameExtOnCreateStatusBarintlongwxWindowIDwxStringCRFunc a_OnCreateStatusBarintlongwxWindowIDwxStringCR, wxFrameExtOnCreateToolBarlongwxWindowIDwxStringCRFunc a_OnCreateToolBarlongwxWindowIDwxStringCR, wxFrameExtOnInternalIdleFunc a_OnInternalIdle, wxFrameExtPositionMenuBarFunc a_PositionMenuBar, wxFrameExtPositionStatusBarFunc a_PositionStatusBar, wxFrameExtPositionToolBarFunc a_PositionToolBar, wxFrameExtRequestUserAttentionintFunc a_RequestUserAttentionint, wxFrameExtRestoreFunc a_Restore, wxFrameExtSetContentProtectionwxContentProtectionFunc a_SetContentProtectionwxContentProtection, wxFrameExtSetIconswxIconBundleCRFunc a_SetIconswxIconBundleCR, wxFrameExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxFrameExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxFrameExtSetMenuBarwxMenuBarPFunc a_SetMenuBarwxMenuBarP, wxFrameExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxFrameExtSetRepresentedFilenamewxStringCRFunc a_SetRepresentedFilenamewxStringCR, wxFrameExtSetStatusBarwxStatusBarPFunc a_SetStatusBarwxStatusBarP, wxFrameExtSetStatusTextwxStringCRintFunc a_SetStatusTextwxStringCRint, wxFrameExtSetStatusWidthsintintCBFunc a_SetStatusWidthsintintCB, wxFrameExtSetTitlewxStringCRFunc a_SetTitlewxStringCR, wxFrameExtSetToolBarwxToolBarPFunc a_SetToolBarwxToolBarP, wxFrameExtShouldPreventAppExitFunc a_ShouldPreventAppExit, wxFrameExtShowboolFunc a_Showbool, wxFrameExtShowFullScreenboollongFunc a_ShowFullScreenboollong, wxFrameExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxFrameExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxFrameExtWXReservedTLW1voidPFunc a_WXReservedTLW1voidP, wxFrameExtWXReservedTLW2voidPFunc a_WXReservedTLW2voidP, wxFrameExtWXReservedTLW3voidPFunc a_WXReservedTLW3voidP): wxFrame() {
    m_wxFrameExtAttachMenuBarwxMenuBarP = a_AttachMenuBarwxMenuBarP;
    m_wxFrameExtCreateStatusBarintlongwxWindowIDwxStringCR = a_CreateStatusBarintlongwxWindowIDwxStringCR;
    m_wxFrameExtCreateToolBarlongwxWindowIDwxStringCR = a_CreateToolBarlongwxWindowIDwxStringCR;
    m_wxFrameExtDestroy = a_Destroy;
    m_wxFrameExtDetachMenuBar = a_DetachMenuBar;
    m_wxFrameExtDoCentreint = a_DoCentreint;
    m_wxFrameExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxFrameExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxFrameExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxFrameExtDoGiveHelpwxStringCRbool = a_DoGiveHelpwxStringCRbool;
    m_wxFrameExtDoMenuUpdateswxMenuP = a_DoMenuUpdateswxMenuP;
    m_wxFrameExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxFrameExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxFrameExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxFrameExtEnablebool = a_Enablebool;
    m_wxFrameExtEnableCloseButtonbool = a_EnableCloseButtonbool;
    m_wxFrameExtEnableFullScreenViewboollong = a_EnableFullScreenViewboollong;
    m_wxFrameExtEnableMaximizeButtonbool = a_EnableMaximizeButtonbool;
    m_wxFrameExtEnableMinimizeButtonbool = a_EnableMinimizeButtonbool;
    m_wxFrameExtFindItemInMenuBarint = a_FindItemInMenuBarint;
    m_wxFrameExtGetClassInfo = a_GetClassInfo;
    m_wxFrameExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxFrameExtGetContentProtection = a_GetContentProtection;
    m_wxFrameExtGetEventHashTable = a_GetEventHashTable;
    m_wxFrameExtGetEventTable = a_GetEventTable;
    m_wxFrameExtGetLabel = a_GetLabel;
    m_wxFrameExtGetMenuBar = a_GetMenuBar;
    m_wxFrameExtGetRectForTopLevelChildrenintPintPintPintP = a_GetRectForTopLevelChildrenintPintPintPintP;
    m_wxFrameExtGetStatusBar = a_GetStatusBar;
    m_wxFrameExtGetTitle = a_GetTitle;
    m_wxFrameExtGetToolBar = a_GetToolBar;
    m_wxFrameExtIconizebool = a_Iconizebool;
    m_wxFrameExtIsActive = a_IsActive;
    m_wxFrameExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxFrameExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxFrameExtIsFullScreen = a_IsFullScreen;
    m_wxFrameExtIsIconized = a_IsIconized;
    m_wxFrameExtIsMaximized = a_IsMaximized;
    m_wxFrameExtIsOneOfBarswxWindowCP = a_IsOneOfBarswxWindowCP;
    m_wxFrameExtIsTopLevel = a_IsTopLevel;
    m_wxFrameExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxFrameExtIsVisible = a_IsVisible;
    m_wxFrameExtLayout = a_Layout;
    m_wxFrameExtMaximizebool = a_Maximizebool;
    m_wxFrameExtOSXIsModified = a_OSXIsModified;
    m_wxFrameExtOSXSetModifiedbool = a_OSXSetModifiedbool;
    m_wxFrameExtOnCreateStatusBarintlongwxWindowIDwxStringCR = a_OnCreateStatusBarintlongwxWindowIDwxStringCR;
    m_wxFrameExtOnCreateToolBarlongwxWindowIDwxStringCR = a_OnCreateToolBarlongwxWindowIDwxStringCR;
    m_wxFrameExtOnInternalIdle = a_OnInternalIdle;
    m_wxFrameExtPositionMenuBar = a_PositionMenuBar;
    m_wxFrameExtPositionStatusBar = a_PositionStatusBar;
    m_wxFrameExtPositionToolBar = a_PositionToolBar;
    m_wxFrameExtRequestUserAttentionint = a_RequestUserAttentionint;
    m_wxFrameExtRestore = a_Restore;
    m_wxFrameExtSetContentProtectionwxContentProtection = a_SetContentProtectionwxContentProtection;
    m_wxFrameExtSetIconswxIconBundleCR = a_SetIconswxIconBundleCR;
    m_wxFrameExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxFrameExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxFrameExtSetMenuBarwxMenuBarP = a_SetMenuBarwxMenuBarP;
    m_wxFrameExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxFrameExtSetRepresentedFilenamewxStringCR = a_SetRepresentedFilenamewxStringCR;
    m_wxFrameExtSetStatusBarwxStatusBarP = a_SetStatusBarwxStatusBarP;
    m_wxFrameExtSetStatusTextwxStringCRint = a_SetStatusTextwxStringCRint;
    m_wxFrameExtSetStatusWidthsintintCB = a_SetStatusWidthsintintCB;
    m_wxFrameExtSetTitlewxStringCR = a_SetTitlewxStringCR;
    m_wxFrameExtSetToolBarwxToolBarP = a_SetToolBarwxToolBarP;
    m_wxFrameExtShouldPreventAppExit = a_ShouldPreventAppExit;
    m_wxFrameExtShowbool = a_Showbool;
    m_wxFrameExtShowFullScreenboollong = a_ShowFullScreenboollong;
    m_wxFrameExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxFrameExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxFrameExtWXReservedTLW1voidP = a_WXReservedTLW1voidP;
    m_wxFrameExtWXReservedTLW2voidP = a_WXReservedTLW2voidP;
    m_wxFrameExtWXReservedTLW3voidP = a_WXReservedTLW3voidP;
  }
};



#endif
