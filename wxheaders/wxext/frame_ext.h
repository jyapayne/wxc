#ifndef _WX_FRAME_H_EXT_
#define _WX_FRAME_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxFrameBaseExt;
typedef void (*wxFrameBaseExtAttachMenuBar__wxMenuBarPFunc)(const wxFrameBaseExt* self, wxMenuBar* menubar);
typedef wxStatusBar* (*wxFrameBaseExtCreateStatusBar__intlongwxWindowIDwxStringCRFunc)(const wxFrameBaseExt* self, int number, long style, wxWindowID winid, wxString const& name, wxStatusBar* res);
typedef wxToolBar* (*wxFrameBaseExtCreateToolBar__longwxWindowIDwxStringCRFunc)(const wxFrameBaseExt* self, long style, wxWindowID winid, wxString const& name, wxToolBar* res);
typedef bool (*wxFrameBaseExtDestroyFunc)(const wxFrameBaseExt* self, bool res);
typedef void (*wxFrameBaseExtDetachMenuBarFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtDoCentre__intFunc)(const wxFrameBaseExt* self, int dir);
typedef void (*wxFrameBaseExtDoClientToScreen__intPintPFunc)(const wxFrameBaseExt* self, int* x, int* y);
typedef void (*wxFrameBaseExtDoGetScreenPosition__intPintPFunc)(const wxFrameBaseExt* self, int* x, int* y);
typedef void (*wxFrameBaseExtDoGiveHelp__wxStringCRboolFunc)(const wxFrameBaseExt* self, wxString const& text, bool show);
typedef void (*wxFrameBaseExtDoMenuUpdates__wxMenuPFunc)(const wxFrameBaseExt* self, wxMenu* menu);
typedef void (*wxFrameBaseExtDoScreenToClient__intPintPFunc)(const wxFrameBaseExt* self, int* x, int* y);
typedef void (*wxFrameBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxFrameBaseExt* self, wxUpdateUIEvent& event);
typedef bool (*wxFrameBaseExtEnableCloseButton__boolFunc)(const wxFrameBaseExt* self, bool enable, bool res);
typedef bool (*wxFrameBaseExtEnableFullScreenView__boollongFunc)(const wxFrameBaseExt* self, bool enable, long style, bool res);
typedef bool (*wxFrameBaseExtEnableMaximizeButton__boolFunc)(const wxFrameBaseExt* self, bool enable, bool res);
typedef bool (*wxFrameBaseExtEnableMinimizeButton__boolFunc)(const wxFrameBaseExt* self, bool enable, bool res);
typedef wxMenuItem* (*wxFrameBaseExtFindItemInMenuBar__intFunc)(const wxFrameBaseExt* self, int menuId, wxMenuItem* res);
typedef wxClassInfo* (*wxFrameBaseExtGetClassInfoFunc)(const wxFrameBaseExt* self, wxClassInfo* res);
typedef wxPoint (*wxFrameBaseExtGetClientAreaOriginFunc)(const wxFrameBaseExt* self, wxPoint res);
typedef wxContentProtection (*wxFrameBaseExtGetContentProtectionFunc)(const wxFrameBaseExt* self, wxContentProtection res);
typedef wxEventHashTable& (*wxFrameBaseExtGetEventHashTableFunc)(const wxFrameBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxFrameBaseExtGetEventTableFunc)(const wxFrameBaseExt* self, wxEventTable const* res);
typedef wxString (*wxFrameBaseExtGetLabelFunc)(const wxFrameBaseExt* self, wxString res);
typedef wxMenuBar* (*wxFrameBaseExtGetMenuBarFunc)(const wxFrameBaseExt* self, wxMenuBar* res);
typedef void (*wxFrameBaseExtGetRectForTopLevelChildren__intPintPintPintPFunc)(const wxFrameBaseExt* self, int* x, int* y, int* w, int* h);
typedef wxStatusBar* (*wxFrameBaseExtGetStatusBarFunc)(const wxFrameBaseExt* self, wxStatusBar* res);
typedef wxString (*wxFrameBaseExtGetTitleFunc)(const wxFrameBaseExt* self, wxString res);
typedef wxToolBar* (*wxFrameBaseExtGetToolBarFunc)(const wxFrameBaseExt* self, wxToolBar* res);
typedef void (*wxFrameBaseExtIconize__boolFunc)(const wxFrameBaseExt* self, bool iconize);
typedef bool (*wxFrameBaseExtIsActiveFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsAlwaysMaximizedFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsClientAreaChild__wxWindowCPFunc)(const wxFrameBaseExt* self, wxWindow const* child, bool res);
typedef bool (*wxFrameBaseExtIsFullScreenFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsIconizedFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsMaximizedFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsOneOfBars__wxWindowCPFunc)(const wxFrameBaseExt* self, wxWindow const* win, bool res);
typedef bool (*wxFrameBaseExtIsTopLevelFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxFrameBaseExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxFrameBaseExtIsVisibleFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtLayoutFunc)(const wxFrameBaseExt* self, bool res);
typedef void (*wxFrameBaseExtMaximize__boolFunc)(const wxFrameBaseExt* self, bool maximize);
typedef bool (*wxFrameBaseExtOSXIsModifiedFunc)(const wxFrameBaseExt* self, bool res);
typedef void (*wxFrameBaseExtOSXSetModified__boolFunc)(const wxFrameBaseExt* self, bool modified);
typedef wxStatusBar* (*wxFrameBaseExtOnCreateStatusBar__intlongwxWindowIDwxStringCRFunc)(const wxFrameBaseExt* self, int number, long style, wxWindowID winid, wxString const& name, wxStatusBar* res);
typedef wxToolBar* (*wxFrameBaseExtOnCreateToolBar__longwxWindowIDwxStringCRFunc)(const wxFrameBaseExt* self, long style, wxWindowID winid, wxString const& name, wxToolBar* res);
typedef void (*wxFrameBaseExtOnInternalIdleFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtPositionMenuBarFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtPositionStatusBarFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtPositionToolBarFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtRequestUserAttention__intFunc)(const wxFrameBaseExt* self, int flags);
typedef void (*wxFrameBaseExtRestoreFunc)(const wxFrameBaseExt* self);
typedef bool (*wxFrameBaseExtSetContentProtection__wxContentProtectionFunc)(const wxFrameBaseExt* self, wxContentProtection contentProtection, bool res);
typedef void (*wxFrameBaseExtSetIcons__wxIconBundleCRFunc)(const wxFrameBaseExt* self, wxIconBundle const& icons);
typedef void (*wxFrameBaseExtSetLabel__wxStringCRFunc)(const wxFrameBaseExt* self, wxString const& label);
typedef void (*wxFrameBaseExtSetMaxSize__wxSizeCRFunc)(const wxFrameBaseExt* self, wxSize const& maxSize);
typedef void (*wxFrameBaseExtSetMenuBar__wxMenuBarPFunc)(const wxFrameBaseExt* self, wxMenuBar* menubar);
typedef void (*wxFrameBaseExtSetMinSize__wxSizeCRFunc)(const wxFrameBaseExt* self, wxSize const& minSize);
typedef void (*wxFrameBaseExtSetRepresentedFilename__wxStringCRFunc)(const wxFrameBaseExt* self, wxString const& filename);
typedef void (*wxFrameBaseExtSetStatusBar__wxStatusBarPFunc)(const wxFrameBaseExt* self, wxStatusBar* statBar);
typedef void (*wxFrameBaseExtSetStatusText__wxStringCRintFunc)(const wxFrameBaseExt* self, wxString const& text, int number);
typedef void (*wxFrameBaseExtSetStatusWidths__intintCBFunc)(const wxFrameBaseExt* self, int n, int const widths_field[]);
typedef void (*wxFrameBaseExtSetTitle__wxStringCRFunc)(const wxFrameBaseExt* self, wxString const& title);
typedef void (*wxFrameBaseExtSetToolBar__wxToolBarPFunc)(const wxFrameBaseExt* self, wxToolBar* toolbar);
typedef bool (*wxFrameBaseExtShouldPreventAppExitFunc)(const wxFrameBaseExt* self, bool res);
typedef bool (*wxFrameBaseExtShowFullScreen__boollongFunc)(const wxFrameBaseExt* self, bool show, long style, bool res);
typedef void (*wxFrameBaseExtShowWithoutActivatingFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtUpdateWindowUI__longFunc)(const wxFrameBaseExt* self, long flags);
typedef void* (*wxFrameBaseExtWXReservedTLW1__voidPFunc)(const wxFrameBaseExt* self, void* param0, void* res);
typedef void* (*wxFrameBaseExtWXReservedTLW2__voidPFunc)(const wxFrameBaseExt* self, void* param0, void* res);
typedef void* (*wxFrameBaseExtWXReservedTLW3__voidPFunc)(const wxFrameBaseExt* self, void* param0, void* res);
class wxFrameExt;
typedef void (*wxFrameExtAttachMenuBar__wxMenuBarPFunc)(const wxFrameExt* self, wxMenuBar* menubar);
typedef wxStatusBar* (*wxFrameExtCreateStatusBar__intlongwxWindowIDwxStringCRFunc)(const wxFrameExt* self, int number, long style, wxWindowID winid, wxString const& name, wxStatusBar* res);
typedef wxToolBar* (*wxFrameExtCreateToolBar__longwxWindowIDwxStringCRFunc)(const wxFrameExt* self, long style, wxWindowID winid, wxString const& name, wxToolBar* res);
typedef bool (*wxFrameExtDestroyFunc)(const wxFrameExt* self, bool res);
typedef void (*wxFrameExtDetachMenuBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtDoCentre__intFunc)(const wxFrameExt* self, int dir);
typedef void (*wxFrameExtDoClientToScreen__intPintPFunc)(const wxFrameExt* self, int* x, int* y);
typedef void (*wxFrameExtDoGetClientSize__intPintPFunc)(const wxFrameExt* self, int* width, int* height);
typedef void (*wxFrameExtDoGetScreenPosition__intPintPFunc)(const wxFrameExt* self, int* x, int* y);
typedef void (*wxFrameExtDoGiveHelp__wxStringCRboolFunc)(const wxFrameExt* self, wxString const& text, bool show);
typedef void (*wxFrameExtDoMenuUpdates__wxMenuPFunc)(const wxFrameExt* self, wxMenu* menu);
typedef void (*wxFrameExtDoScreenToClient__intPintPFunc)(const wxFrameExt* self, int* x, int* y);
typedef void (*wxFrameExtDoSetClientSize__intintFunc)(const wxFrameExt* self, int width, int height);
typedef void (*wxFrameExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxFrameExt* self, wxUpdateUIEvent& event);
typedef bool (*wxFrameExtEnable__boolFunc)(const wxFrameExt* self, bool enable, bool res);
typedef bool (*wxFrameExtEnableCloseButton__boolFunc)(const wxFrameExt* self, bool enable, bool res);
typedef bool (*wxFrameExtEnableFullScreenView__boollongFunc)(const wxFrameExt* self, bool enable, long style, bool res);
typedef bool (*wxFrameExtEnableMaximizeButton__boolFunc)(const wxFrameExt* self, bool enable, bool res);
typedef bool (*wxFrameExtEnableMinimizeButton__boolFunc)(const wxFrameExt* self, bool enable, bool res);
typedef wxMenuItem* (*wxFrameExtFindItemInMenuBar__intFunc)(const wxFrameExt* self, int menuId, wxMenuItem* res);
typedef wxClassInfo* (*wxFrameExtGetClassInfoFunc)(const wxFrameExt* self, wxClassInfo* res);
typedef wxPoint (*wxFrameExtGetClientAreaOriginFunc)(const wxFrameExt* self, wxPoint res);
typedef wxContentProtection (*wxFrameExtGetContentProtectionFunc)(const wxFrameExt* self, wxContentProtection res);
typedef wxEventHashTable& (*wxFrameExtGetEventHashTableFunc)(const wxFrameExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxFrameExtGetEventTableFunc)(const wxFrameExt* self, wxEventTable const* res);
typedef wxString (*wxFrameExtGetLabelFunc)(const wxFrameExt* self, wxString res);
typedef wxMenuBar* (*wxFrameExtGetMenuBarFunc)(const wxFrameExt* self, wxMenuBar* res);
typedef void (*wxFrameExtGetRectForTopLevelChildren__intPintPintPintPFunc)(const wxFrameExt* self, int* x, int* y, int* w, int* h);
typedef wxStatusBar* (*wxFrameExtGetStatusBarFunc)(const wxFrameExt* self, wxStatusBar* res);
typedef wxString (*wxFrameExtGetTitleFunc)(const wxFrameExt* self, wxString res);
typedef wxToolBar* (*wxFrameExtGetToolBarFunc)(const wxFrameExt* self, wxToolBar* res);
typedef void (*wxFrameExtIconize__boolFunc)(const wxFrameExt* self, bool iconize);
typedef bool (*wxFrameExtIsActiveFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsAlwaysMaximizedFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsClientAreaChild__wxWindowCPFunc)(const wxFrameExt* self, wxWindow const* child, bool res);
typedef bool (*wxFrameExtIsFullScreenFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsIconizedFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsMaximizedFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsOneOfBars__wxWindowCPFunc)(const wxFrameExt* self, wxWindow const* win, bool res);
typedef bool (*wxFrameExtIsTopLevelFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxFrameExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxFrameExtIsVisibleFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtLayoutFunc)(const wxFrameExt* self, bool res);
typedef void (*wxFrameExtMaximize__boolFunc)(const wxFrameExt* self, bool maximize);
typedef bool (*wxFrameExtOSXIsModifiedFunc)(const wxFrameExt* self, bool res);
typedef void (*wxFrameExtOSXSetModified__boolFunc)(const wxFrameExt* self, bool modified);
typedef wxStatusBar* (*wxFrameExtOnCreateStatusBar__intlongwxWindowIDwxStringCRFunc)(const wxFrameExt* self, int number, long style, wxWindowID winid, wxString const& name, wxStatusBar* res);
typedef wxToolBar* (*wxFrameExtOnCreateToolBar__longwxWindowIDwxStringCRFunc)(const wxFrameExt* self, long style, wxWindowID winid, wxString const& name, wxToolBar* res);
typedef void (*wxFrameExtOnInternalIdleFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtPositionMenuBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtPositionStatusBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtPositionToolBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtRequestUserAttention__intFunc)(const wxFrameExt* self, int flags);
typedef void (*wxFrameExtRestoreFunc)(const wxFrameExt* self);
typedef bool (*wxFrameExtSetContentProtection__wxContentProtectionFunc)(const wxFrameExt* self, wxContentProtection contentProtection, bool res);
typedef void (*wxFrameExtSetIcons__wxIconBundleCRFunc)(const wxFrameExt* self, wxIconBundle const& icons);
typedef void (*wxFrameExtSetLabel__wxStringCRFunc)(const wxFrameExt* self, wxString const& label);
typedef void (*wxFrameExtSetMaxSize__wxSizeCRFunc)(const wxFrameExt* self, wxSize const& maxSize);
typedef void (*wxFrameExtSetMenuBar__wxMenuBarPFunc)(const wxFrameExt* self, wxMenuBar* menubar);
typedef void (*wxFrameExtSetMinSize__wxSizeCRFunc)(const wxFrameExt* self, wxSize const& minSize);
typedef void (*wxFrameExtSetRepresentedFilename__wxStringCRFunc)(const wxFrameExt* self, wxString const& filename);
typedef void (*wxFrameExtSetStatusBar__wxStatusBarPFunc)(const wxFrameExt* self, wxStatusBar* statBar);
typedef void (*wxFrameExtSetStatusText__wxStringCRintFunc)(const wxFrameExt* self, wxString const& text, int number);
typedef void (*wxFrameExtSetStatusWidths__intintCBFunc)(const wxFrameExt* self, int n, int const widths_field[]);
typedef void (*wxFrameExtSetTitle__wxStringCRFunc)(const wxFrameExt* self, wxString const& title);
typedef void (*wxFrameExtSetToolBar__wxToolBarPFunc)(const wxFrameExt* self, wxToolBar* toolbar);
typedef bool (*wxFrameExtShouldPreventAppExitFunc)(const wxFrameExt* self, bool res);
typedef bool (*wxFrameExtShow__boolFunc)(const wxFrameExt* self, bool show, bool res);
typedef bool (*wxFrameExtShowFullScreen__boollongFunc)(const wxFrameExt* self, bool show, long style, bool res);
typedef void (*wxFrameExtShowWithoutActivatingFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtUpdateWindowUI__longFunc)(const wxFrameExt* self, long flags);
typedef void* (*wxFrameExtWXReservedTLW1__voidPFunc)(const wxFrameExt* self, void* param0, void* res);
typedef void* (*wxFrameExtWXReservedTLW2__voidPFunc)(const wxFrameExt* self, void* param0, void* res);
typedef void* (*wxFrameExtWXReservedTLW3__voidPFunc)(const wxFrameExt* self, void* param0, void* res);

class wxFrameBaseExt: public wxFrameBase
{
public:
  wxFrameBaseExt(): wxFrameBase()  {  }
  virtual ~wxFrameBaseExt() override  {  }
  wxFrameBaseExtAttachMenuBar__wxMenuBarPFunc m_wxFrameBaseExtAttachMenuBar__wxMenuBarP = NULL;
  virtual void AttachMenuBar(wxMenuBar* menubar) override
  {
    wxFrameBase::AttachMenuBar(menubar);
    if (*m_wxFrameBaseExtAttachMenuBar__wxMenuBarP != NULL){
      return m_wxFrameBaseExtAttachMenuBar__wxMenuBarP(this, menubar);
    }
  }
  wxFrameBaseExtCreateStatusBar__intlongwxWindowIDwxStringCRFunc m_wxFrameBaseExtCreateStatusBar__intlongwxWindowIDwxStringCR = NULL;
  virtual wxStatusBar* CreateStatusBar(int number = 1, long style = (0x0010 | 0x0100 | 0x0020 | 0x00010000), wxWindowID winid = 0, wxString const& name = wxString::FromAscii(wxStatusLineNameStr)) override
  {
    wxStatusBar* res = wxFrameBase::CreateStatusBar(number, style, winid, name);
    if (*m_wxFrameBaseExtCreateStatusBar__intlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameBaseExtCreateStatusBar__intlongwxWindowIDwxStringCR(this, number, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtCreateToolBar__longwxWindowIDwxStringCRFunc m_wxFrameBaseExtCreateToolBar__longwxWindowIDwxStringCR = NULL;
  virtual wxToolBar* CreateToolBar(long style = -1, wxWindowID winid = wxID_ANY, wxString const& name = wxString::FromAscii(wxToolBarNameStr)) override
  {
    wxToolBar* res = wxFrameBase::CreateToolBar(style, winid, name);
    if (*m_wxFrameBaseExtCreateToolBar__longwxWindowIDwxStringCR != NULL){
      return m_wxFrameBaseExtCreateToolBar__longwxWindowIDwxStringCR(this, style, winid, name, res);
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
  wxFrameBaseExtDoCentre__intFunc m_wxFrameBaseExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxFrameBase::DoCentre(dir);
    if (*m_wxFrameBaseExtDoCentre__int != NULL){
      return m_wxFrameBaseExtDoCentre__int(this, dir);
    }
  }
  wxFrameBaseExtDoClientToScreen__intPintPFunc m_wxFrameBaseExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxFrameBase::DoClientToScreen(x, y);
    if (*m_wxFrameBaseExtDoClientToScreen__intPintP != NULL){
      return m_wxFrameBaseExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxFrameBaseExtDoGetScreenPosition__intPintPFunc m_wxFrameBaseExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxFrameBase::DoGetScreenPosition(x, y);
    if (*m_wxFrameBaseExtDoGetScreenPosition__intPintP != NULL){
      return m_wxFrameBaseExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxFrameBaseExtDoGiveHelp__wxStringCRboolFunc m_wxFrameBaseExtDoGiveHelp__wxStringCRbool = NULL;
  virtual void DoGiveHelp(wxString const& text, bool show) override
  {
    wxFrameBase::DoGiveHelp(text, show);
    if (*m_wxFrameBaseExtDoGiveHelp__wxStringCRbool != NULL){
      return m_wxFrameBaseExtDoGiveHelp__wxStringCRbool(this, text, show);
    }
  }
  wxFrameBaseExtDoMenuUpdates__wxMenuPFunc m_wxFrameBaseExtDoMenuUpdates__wxMenuP = NULL;
  virtual void DoMenuUpdates(wxMenu* menu = __null) override
  {
    wxFrameBase::DoMenuUpdates(menu);
    if (*m_wxFrameBaseExtDoMenuUpdates__wxMenuP != NULL){
      return m_wxFrameBaseExtDoMenuUpdates__wxMenuP(this, menu);
    }
  }
  wxFrameBaseExtDoScreenToClient__intPintPFunc m_wxFrameBaseExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxFrameBase::DoScreenToClient(x, y);
    if (*m_wxFrameBaseExtDoScreenToClient__intPintP != NULL){
      return m_wxFrameBaseExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxFrameBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxFrameBaseExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxFrameBase::DoUpdateWindowUI(event);
    if (*m_wxFrameBaseExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxFrameBaseExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxFrameBaseExtEnableCloseButton__boolFunc m_wxFrameBaseExtEnableCloseButton__bool = NULL;
  virtual bool EnableCloseButton(bool enable = true) override
  {
    bool res = wxFrameBase::EnableCloseButton(enable);
    if (*m_wxFrameBaseExtEnableCloseButton__bool != NULL){
      return m_wxFrameBaseExtEnableCloseButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtEnableFullScreenView__boollongFunc m_wxFrameBaseExtEnableFullScreenView__boollong = NULL;
  virtual bool EnableFullScreenView(bool enable = true, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxFrameBase::EnableFullScreenView(enable, style);
    if (*m_wxFrameBaseExtEnableFullScreenView__boollong != NULL){
      return m_wxFrameBaseExtEnableFullScreenView__boollong(this, enable, style, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtEnableMaximizeButton__boolFunc m_wxFrameBaseExtEnableMaximizeButton__bool = NULL;
  virtual bool EnableMaximizeButton(bool enable = true) override
  {
    bool res = wxFrameBase::EnableMaximizeButton(enable);
    if (*m_wxFrameBaseExtEnableMaximizeButton__bool != NULL){
      return m_wxFrameBaseExtEnableMaximizeButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtEnableMinimizeButton__boolFunc m_wxFrameBaseExtEnableMinimizeButton__bool = NULL;
  virtual bool EnableMinimizeButton(bool enable = true) override
  {
    bool res = wxFrameBase::EnableMinimizeButton(enable);
    if (*m_wxFrameBaseExtEnableMinimizeButton__bool != NULL){
      return m_wxFrameBaseExtEnableMinimizeButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtFindItemInMenuBar__intFunc m_wxFrameBaseExtFindItemInMenuBar__int = NULL;
  virtual wxMenuItem* FindItemInMenuBar(int menuId) const override
  {
    wxMenuItem* res = wxFrameBase::FindItemInMenuBar(menuId);
    if (*m_wxFrameBaseExtFindItemInMenuBar__int != NULL){
      return m_wxFrameBaseExtFindItemInMenuBar__int(this, menuId, res);
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
  wxFrameBaseExtGetRectForTopLevelChildren__intPintPintPintPFunc m_wxFrameBaseExtGetRectForTopLevelChildren__intPintPintPintP = NULL;
  virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h) override
  {
    wxFrameBase::GetRectForTopLevelChildren(x, y, w, h);
    if (*m_wxFrameBaseExtGetRectForTopLevelChildren__intPintPintPintP != NULL){
      return m_wxFrameBaseExtGetRectForTopLevelChildren__intPintPintPintP(this, x, y, w, h);
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
  wxFrameBaseExtIconize__boolFunc m_wxFrameBaseExtIconize__bool = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    wxFrameBase::Iconize(iconize);
    if (*m_wxFrameBaseExtIconize__bool != NULL){
      return m_wxFrameBaseExtIconize__bool(this, iconize);
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
  wxFrameBaseExtIsClientAreaChild__wxWindowCPFunc m_wxFrameBaseExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxFrameBase::IsClientAreaChild(child);
    if (*m_wxFrameBaseExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxFrameBaseExtIsClientAreaChild__wxWindowCP(this, child, res);
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
  wxFrameBaseExtIsOneOfBars__wxWindowCPFunc m_wxFrameBaseExtIsOneOfBars__wxWindowCP = NULL;
  virtual bool IsOneOfBars(wxWindow const* win) const override
  {
    bool res = wxFrameBase::IsOneOfBars(win);
    if (*m_wxFrameBaseExtIsOneOfBars__wxWindowCP != NULL){
      return m_wxFrameBaseExtIsOneOfBars__wxWindowCP(this, win, res);
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
  wxFrameBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxFrameBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxFrameBase::IsTopNavigationDomain(kind);
    if (*m_wxFrameBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxFrameBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
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
  wxFrameBaseExtMaximize__boolFunc m_wxFrameBaseExtMaximize__bool = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    wxFrameBase::Maximize(maximize);
    if (*m_wxFrameBaseExtMaximize__bool != NULL){
      return m_wxFrameBaseExtMaximize__bool(this, maximize);
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
  wxFrameBaseExtOSXSetModified__boolFunc m_wxFrameBaseExtOSXSetModified__bool = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxFrameBase::OSXSetModified(modified);
    if (*m_wxFrameBaseExtOSXSetModified__bool != NULL){
      return m_wxFrameBaseExtOSXSetModified__bool(this, modified);
    }
  }
  wxFrameBaseExtOnCreateStatusBar__intlongwxWindowIDwxStringCRFunc m_wxFrameBaseExtOnCreateStatusBar__intlongwxWindowIDwxStringCR = NULL;
  virtual wxStatusBar* OnCreateStatusBar(int number, long style, wxWindowID winid, wxString const& name) override
  {
    wxStatusBar* res = wxFrameBase::OnCreateStatusBar(number, style, winid, name);
    if (*m_wxFrameBaseExtOnCreateStatusBar__intlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameBaseExtOnCreateStatusBar__intlongwxWindowIDwxStringCR(this, number, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtOnCreateToolBar__longwxWindowIDwxStringCRFunc m_wxFrameBaseExtOnCreateToolBar__longwxWindowIDwxStringCR = NULL;
  virtual wxToolBar* OnCreateToolBar(long style, wxWindowID winid, wxString const& name) override
  {
    wxToolBar* res = wxFrameBase::OnCreateToolBar(style, winid, name);
    if (*m_wxFrameBaseExtOnCreateToolBar__longwxWindowIDwxStringCR != NULL){
      return m_wxFrameBaseExtOnCreateToolBar__longwxWindowIDwxStringCR(this, style, winid, name, res);
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
  wxFrameBaseExtRequestUserAttention__intFunc m_wxFrameBaseExtRequestUserAttention__int = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxFrameBase::RequestUserAttention(flags);
    if (*m_wxFrameBaseExtRequestUserAttention__int != NULL){
      return m_wxFrameBaseExtRequestUserAttention__int(this, flags);
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
  wxFrameBaseExtSetContentProtection__wxContentProtectionFunc m_wxFrameBaseExtSetContentProtection__wxContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection contentProtection) override
  {
    bool res = wxFrameBase::SetContentProtection(contentProtection);
    if (*m_wxFrameBaseExtSetContentProtection__wxContentProtection != NULL){
      return m_wxFrameBaseExtSetContentProtection__wxContentProtection(this, contentProtection, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtSetIcons__wxIconBundleCRFunc m_wxFrameBaseExtSetIcons__wxIconBundleCR = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxFrameBase::SetIcons(icons);
    if (*m_wxFrameBaseExtSetIcons__wxIconBundleCR != NULL){
      return m_wxFrameBaseExtSetIcons__wxIconBundleCR(this, icons);
    }
  }
  wxFrameBaseExtSetLabel__wxStringCRFunc m_wxFrameBaseExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxFrameBase::SetLabel(label);
    if (*m_wxFrameBaseExtSetLabel__wxStringCR != NULL){
      return m_wxFrameBaseExtSetLabel__wxStringCR(this, label);
    }
  }
  wxFrameBaseExtSetMaxSize__wxSizeCRFunc m_wxFrameBaseExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxFrameBase::SetMaxSize(maxSize);
    if (*m_wxFrameBaseExtSetMaxSize__wxSizeCR != NULL){
      return m_wxFrameBaseExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxFrameBaseExtSetMenuBar__wxMenuBarPFunc m_wxFrameBaseExtSetMenuBar__wxMenuBarP = NULL;
  virtual void SetMenuBar(wxMenuBar* menubar) override
  {
    wxFrameBase::SetMenuBar(menubar);
    if (*m_wxFrameBaseExtSetMenuBar__wxMenuBarP != NULL){
      return m_wxFrameBaseExtSetMenuBar__wxMenuBarP(this, menubar);
    }
  }
  wxFrameBaseExtSetMinSize__wxSizeCRFunc m_wxFrameBaseExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxFrameBase::SetMinSize(minSize);
    if (*m_wxFrameBaseExtSetMinSize__wxSizeCR != NULL){
      return m_wxFrameBaseExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxFrameBaseExtSetRepresentedFilename__wxStringCRFunc m_wxFrameBaseExtSetRepresentedFilename__wxStringCR = NULL;
  virtual void SetRepresentedFilename(wxString const& filename) override
  {
    wxFrameBase::SetRepresentedFilename(filename);
    if (*m_wxFrameBaseExtSetRepresentedFilename__wxStringCR != NULL){
      return m_wxFrameBaseExtSetRepresentedFilename__wxStringCR(this, filename);
    }
  }
  wxFrameBaseExtSetStatusBar__wxStatusBarPFunc m_wxFrameBaseExtSetStatusBar__wxStatusBarP = NULL;
  virtual void SetStatusBar(wxStatusBar* statBar) override
  {
    wxFrameBase::SetStatusBar(statBar);
    if (*m_wxFrameBaseExtSetStatusBar__wxStatusBarP != NULL){
      return m_wxFrameBaseExtSetStatusBar__wxStatusBarP(this, statBar);
    }
  }
  wxFrameBaseExtSetStatusText__wxStringCRintFunc m_wxFrameBaseExtSetStatusText__wxStringCRint = NULL;
  virtual void SetStatusText(wxString const& text, int number = 0) override
  {
    wxFrameBase::SetStatusText(text, number);
    if (*m_wxFrameBaseExtSetStatusText__wxStringCRint != NULL){
      return m_wxFrameBaseExtSetStatusText__wxStringCRint(this, text, number);
    }
  }
  wxFrameBaseExtSetStatusWidths__intintCBFunc m_wxFrameBaseExtSetStatusWidths__intintCB = NULL;
  virtual void SetStatusWidths(int n, int const widths_field[]) override
  {
    wxFrameBase::SetStatusWidths(n, widths_field);
    if (*m_wxFrameBaseExtSetStatusWidths__intintCB != NULL){
      return m_wxFrameBaseExtSetStatusWidths__intintCB(this, n, widths_field);
    }
  }
  wxFrameBaseExtSetTitle__wxStringCRFunc m_wxFrameBaseExtSetTitle__wxStringCR = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    wxFrameBase::SetTitle(title);
    if (*m_wxFrameBaseExtSetTitle__wxStringCR != NULL){
      return m_wxFrameBaseExtSetTitle__wxStringCR(this, title);
    }
  }
  wxFrameBaseExtSetToolBar__wxToolBarPFunc m_wxFrameBaseExtSetToolBar__wxToolBarP = NULL;
  virtual void SetToolBar(wxToolBar* toolbar) override
  {
    wxFrameBase::SetToolBar(toolbar);
    if (*m_wxFrameBaseExtSetToolBar__wxToolBarP != NULL){
      return m_wxFrameBaseExtSetToolBar__wxToolBarP(this, toolbar);
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
  wxFrameBaseExtShowFullScreen__boollongFunc m_wxFrameBaseExtShowFullScreen__boollong = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxFrameBase::ShowFullScreen(show, style);
    if (*m_wxFrameBaseExtShowFullScreen__boollong != NULL){
      return m_wxFrameBaseExtShowFullScreen__boollong(this, show, style, res);
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
  wxFrameBaseExtUpdateWindowUI__longFunc m_wxFrameBaseExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxFrameBase::UpdateWindowUI(flags);
    if (*m_wxFrameBaseExtUpdateWindowUI__long != NULL){
      return m_wxFrameBaseExtUpdateWindowUI__long(this, flags);
    }
  }
  wxFrameBaseExtWXReservedTLW1__voidPFunc m_wxFrameBaseExtWXReservedTLW1__voidP = NULL;
  virtual void* WXReservedTLW1(void* param0) override
  {
    void* res = wxFrameBase::WXReservedTLW1(param0);
    if (*m_wxFrameBaseExtWXReservedTLW1__voidP != NULL){
      return m_wxFrameBaseExtWXReservedTLW1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtWXReservedTLW2__voidPFunc m_wxFrameBaseExtWXReservedTLW2__voidP = NULL;
  virtual void* WXReservedTLW2(void* param0) override
  {
    void* res = wxFrameBase::WXReservedTLW2(param0);
    if (*m_wxFrameBaseExtWXReservedTLW2__voidP != NULL){
      return m_wxFrameBaseExtWXReservedTLW2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtWXReservedTLW3__voidPFunc m_wxFrameBaseExtWXReservedTLW3__voidP = NULL;
  virtual void* WXReservedTLW3(void* param0) override
  {
    void* res = wxFrameBase::WXReservedTLW3(param0);
    if (*m_wxFrameBaseExtWXReservedTLW3__voidP != NULL){
      return m_wxFrameBaseExtWXReservedTLW3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExt(wxFrameBaseExtAttachMenuBar__wxMenuBarPFunc a_AttachMenuBar__wxMenuBarP, wxFrameBaseExtCreateStatusBar__intlongwxWindowIDwxStringCRFunc a_CreateStatusBar__intlongwxWindowIDwxStringCR, wxFrameBaseExtCreateToolBar__longwxWindowIDwxStringCRFunc a_CreateToolBar__longwxWindowIDwxStringCR, wxFrameBaseExtDestroyFunc a_Destroy, wxFrameBaseExtDetachMenuBarFunc a_DetachMenuBar, wxFrameBaseExtDoCentre__intFunc a_DoCentre__int, wxFrameBaseExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxFrameBaseExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxFrameBaseExtDoGiveHelp__wxStringCRboolFunc a_DoGiveHelp__wxStringCRbool, wxFrameBaseExtDoMenuUpdates__wxMenuPFunc a_DoMenuUpdates__wxMenuP, wxFrameBaseExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxFrameBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxFrameBaseExtEnableCloseButton__boolFunc a_EnableCloseButton__bool, wxFrameBaseExtEnableFullScreenView__boollongFunc a_EnableFullScreenView__boollong, wxFrameBaseExtEnableMaximizeButton__boolFunc a_EnableMaximizeButton__bool, wxFrameBaseExtEnableMinimizeButton__boolFunc a_EnableMinimizeButton__bool, wxFrameBaseExtFindItemInMenuBar__intFunc a_FindItemInMenuBar__int, wxFrameBaseExtGetClassInfoFunc a_GetClassInfo, wxFrameBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxFrameBaseExtGetContentProtectionFunc a_GetContentProtection, wxFrameBaseExtGetEventHashTableFunc a_GetEventHashTable, wxFrameBaseExtGetEventTableFunc a_GetEventTable, wxFrameBaseExtGetLabelFunc a_GetLabel, wxFrameBaseExtGetMenuBarFunc a_GetMenuBar, wxFrameBaseExtGetRectForTopLevelChildren__intPintPintPintPFunc a_GetRectForTopLevelChildren__intPintPintPintP, wxFrameBaseExtGetStatusBarFunc a_GetStatusBar, wxFrameBaseExtGetTitleFunc a_GetTitle, wxFrameBaseExtGetToolBarFunc a_GetToolBar, wxFrameBaseExtIconize__boolFunc a_Iconize__bool, wxFrameBaseExtIsActiveFunc a_IsActive, wxFrameBaseExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxFrameBaseExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxFrameBaseExtIsFullScreenFunc a_IsFullScreen, wxFrameBaseExtIsIconizedFunc a_IsIconized, wxFrameBaseExtIsMaximizedFunc a_IsMaximized, wxFrameBaseExtIsOneOfBars__wxWindowCPFunc a_IsOneOfBars__wxWindowCP, wxFrameBaseExtIsTopLevelFunc a_IsTopLevel, wxFrameBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxFrameBaseExtIsVisibleFunc a_IsVisible, wxFrameBaseExtLayoutFunc a_Layout, wxFrameBaseExtMaximize__boolFunc a_Maximize__bool, wxFrameBaseExtOSXIsModifiedFunc a_OSXIsModified, wxFrameBaseExtOSXSetModified__boolFunc a_OSXSetModified__bool, wxFrameBaseExtOnCreateStatusBar__intlongwxWindowIDwxStringCRFunc a_OnCreateStatusBar__intlongwxWindowIDwxStringCR, wxFrameBaseExtOnCreateToolBar__longwxWindowIDwxStringCRFunc a_OnCreateToolBar__longwxWindowIDwxStringCR, wxFrameBaseExtOnInternalIdleFunc a_OnInternalIdle, wxFrameBaseExtPositionMenuBarFunc a_PositionMenuBar, wxFrameBaseExtPositionStatusBarFunc a_PositionStatusBar, wxFrameBaseExtPositionToolBarFunc a_PositionToolBar, wxFrameBaseExtRequestUserAttention__intFunc a_RequestUserAttention__int, wxFrameBaseExtRestoreFunc a_Restore, wxFrameBaseExtSetContentProtection__wxContentProtectionFunc a_SetContentProtection__wxContentProtection, wxFrameBaseExtSetIcons__wxIconBundleCRFunc a_SetIcons__wxIconBundleCR, wxFrameBaseExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxFrameBaseExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxFrameBaseExtSetMenuBar__wxMenuBarPFunc a_SetMenuBar__wxMenuBarP, wxFrameBaseExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxFrameBaseExtSetRepresentedFilename__wxStringCRFunc a_SetRepresentedFilename__wxStringCR, wxFrameBaseExtSetStatusBar__wxStatusBarPFunc a_SetStatusBar__wxStatusBarP, wxFrameBaseExtSetStatusText__wxStringCRintFunc a_SetStatusText__wxStringCRint, wxFrameBaseExtSetStatusWidths__intintCBFunc a_SetStatusWidths__intintCB, wxFrameBaseExtSetTitle__wxStringCRFunc a_SetTitle__wxStringCR, wxFrameBaseExtSetToolBar__wxToolBarPFunc a_SetToolBar__wxToolBarP, wxFrameBaseExtShouldPreventAppExitFunc a_ShouldPreventAppExit, wxFrameBaseExtShowFullScreen__boollongFunc a_ShowFullScreen__boollong, wxFrameBaseExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxFrameBaseExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxFrameBaseExtWXReservedTLW1__voidPFunc a_WXReservedTLW1__voidP, wxFrameBaseExtWXReservedTLW2__voidPFunc a_WXReservedTLW2__voidP, wxFrameBaseExtWXReservedTLW3__voidPFunc a_WXReservedTLW3__voidP): wxFrameBase() {
    m_wxFrameBaseExtAttachMenuBar__wxMenuBarP = a_AttachMenuBar__wxMenuBarP;
    m_wxFrameBaseExtCreateStatusBar__intlongwxWindowIDwxStringCR = a_CreateStatusBar__intlongwxWindowIDwxStringCR;
    m_wxFrameBaseExtCreateToolBar__longwxWindowIDwxStringCR = a_CreateToolBar__longwxWindowIDwxStringCR;
    m_wxFrameBaseExtDestroy = a_Destroy;
    m_wxFrameBaseExtDetachMenuBar = a_DetachMenuBar;
    m_wxFrameBaseExtDoCentre__int = a_DoCentre__int;
    m_wxFrameBaseExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxFrameBaseExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxFrameBaseExtDoGiveHelp__wxStringCRbool = a_DoGiveHelp__wxStringCRbool;
    m_wxFrameBaseExtDoMenuUpdates__wxMenuP = a_DoMenuUpdates__wxMenuP;
    m_wxFrameBaseExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxFrameBaseExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxFrameBaseExtEnableCloseButton__bool = a_EnableCloseButton__bool;
    m_wxFrameBaseExtEnableFullScreenView__boollong = a_EnableFullScreenView__boollong;
    m_wxFrameBaseExtEnableMaximizeButton__bool = a_EnableMaximizeButton__bool;
    m_wxFrameBaseExtEnableMinimizeButton__bool = a_EnableMinimizeButton__bool;
    m_wxFrameBaseExtFindItemInMenuBar__int = a_FindItemInMenuBar__int;
    m_wxFrameBaseExtGetClassInfo = a_GetClassInfo;
    m_wxFrameBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxFrameBaseExtGetContentProtection = a_GetContentProtection;
    m_wxFrameBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxFrameBaseExtGetEventTable = a_GetEventTable;
    m_wxFrameBaseExtGetLabel = a_GetLabel;
    m_wxFrameBaseExtGetMenuBar = a_GetMenuBar;
    m_wxFrameBaseExtGetRectForTopLevelChildren__intPintPintPintP = a_GetRectForTopLevelChildren__intPintPintPintP;
    m_wxFrameBaseExtGetStatusBar = a_GetStatusBar;
    m_wxFrameBaseExtGetTitle = a_GetTitle;
    m_wxFrameBaseExtGetToolBar = a_GetToolBar;
    m_wxFrameBaseExtIconize__bool = a_Iconize__bool;
    m_wxFrameBaseExtIsActive = a_IsActive;
    m_wxFrameBaseExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxFrameBaseExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxFrameBaseExtIsFullScreen = a_IsFullScreen;
    m_wxFrameBaseExtIsIconized = a_IsIconized;
    m_wxFrameBaseExtIsMaximized = a_IsMaximized;
    m_wxFrameBaseExtIsOneOfBars__wxWindowCP = a_IsOneOfBars__wxWindowCP;
    m_wxFrameBaseExtIsTopLevel = a_IsTopLevel;
    m_wxFrameBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxFrameBaseExtIsVisible = a_IsVisible;
    m_wxFrameBaseExtLayout = a_Layout;
    m_wxFrameBaseExtMaximize__bool = a_Maximize__bool;
    m_wxFrameBaseExtOSXIsModified = a_OSXIsModified;
    m_wxFrameBaseExtOSXSetModified__bool = a_OSXSetModified__bool;
    m_wxFrameBaseExtOnCreateStatusBar__intlongwxWindowIDwxStringCR = a_OnCreateStatusBar__intlongwxWindowIDwxStringCR;
    m_wxFrameBaseExtOnCreateToolBar__longwxWindowIDwxStringCR = a_OnCreateToolBar__longwxWindowIDwxStringCR;
    m_wxFrameBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxFrameBaseExtPositionMenuBar = a_PositionMenuBar;
    m_wxFrameBaseExtPositionStatusBar = a_PositionStatusBar;
    m_wxFrameBaseExtPositionToolBar = a_PositionToolBar;
    m_wxFrameBaseExtRequestUserAttention__int = a_RequestUserAttention__int;
    m_wxFrameBaseExtRestore = a_Restore;
    m_wxFrameBaseExtSetContentProtection__wxContentProtection = a_SetContentProtection__wxContentProtection;
    m_wxFrameBaseExtSetIcons__wxIconBundleCR = a_SetIcons__wxIconBundleCR;
    m_wxFrameBaseExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxFrameBaseExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxFrameBaseExtSetMenuBar__wxMenuBarP = a_SetMenuBar__wxMenuBarP;
    m_wxFrameBaseExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxFrameBaseExtSetRepresentedFilename__wxStringCR = a_SetRepresentedFilename__wxStringCR;
    m_wxFrameBaseExtSetStatusBar__wxStatusBarP = a_SetStatusBar__wxStatusBarP;
    m_wxFrameBaseExtSetStatusText__wxStringCRint = a_SetStatusText__wxStringCRint;
    m_wxFrameBaseExtSetStatusWidths__intintCB = a_SetStatusWidths__intintCB;
    m_wxFrameBaseExtSetTitle__wxStringCR = a_SetTitle__wxStringCR;
    m_wxFrameBaseExtSetToolBar__wxToolBarP = a_SetToolBar__wxToolBarP;
    m_wxFrameBaseExtShouldPreventAppExit = a_ShouldPreventAppExit;
    m_wxFrameBaseExtShowFullScreen__boollong = a_ShowFullScreen__boollong;
    m_wxFrameBaseExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxFrameBaseExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxFrameBaseExtWXReservedTLW1__voidP = a_WXReservedTLW1__voidP;
    m_wxFrameBaseExtWXReservedTLW2__voidP = a_WXReservedTLW2__voidP;
    m_wxFrameBaseExtWXReservedTLW3__voidP = a_WXReservedTLW3__voidP;
  }
};

class wxFrameExt: public wxFrame
{
public:
  wxFrameExt(): wxFrame()  {  }
  wxFrameExt(wxWindow* parent, wxWindowID id, wxString const& title, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = (0x0800 | 0x0040 | 0x0400 | 0x0200 | 0x1000 | 0x20000000 | 0x00400000), wxString const& name = wxString::FromAscii(wxFrameNameStr)): wxFrame(parent, id, title, pos, size, style, name)  {  }
  wxFrameExtAttachMenuBar__wxMenuBarPFunc m_wxFrameExtAttachMenuBar__wxMenuBarP = NULL;
  virtual void AttachMenuBar(wxMenuBar* menubar) override
  {
    wxFrame::AttachMenuBar(menubar);
    if (*m_wxFrameExtAttachMenuBar__wxMenuBarP != NULL){
      return m_wxFrameExtAttachMenuBar__wxMenuBarP(this, menubar);
    }
  }
  wxFrameExtCreateStatusBar__intlongwxWindowIDwxStringCRFunc m_wxFrameExtCreateStatusBar__intlongwxWindowIDwxStringCR = NULL;
  virtual wxStatusBar* CreateStatusBar(int number = 1, long style = (0x0010 | 0x0100 | 0x0020 | 0x00010000), wxWindowID winid = 0, wxString const& name = wxString::FromAscii(wxStatusLineNameStr)) override
  {
    wxStatusBar* res = wxFrame::CreateStatusBar(number, style, winid, name);
    if (*m_wxFrameExtCreateStatusBar__intlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameExtCreateStatusBar__intlongwxWindowIDwxStringCR(this, number, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtCreateToolBar__longwxWindowIDwxStringCRFunc m_wxFrameExtCreateToolBar__longwxWindowIDwxStringCR = NULL;
  virtual wxToolBar* CreateToolBar(long style = -1, wxWindowID winid = wxID_ANY, wxString const& name = wxString::FromAscii(wxToolBarNameStr)) override
  {
    wxToolBar* res = wxFrame::CreateToolBar(style, winid, name);
    if (*m_wxFrameExtCreateToolBar__longwxWindowIDwxStringCR != NULL){
      return m_wxFrameExtCreateToolBar__longwxWindowIDwxStringCR(this, style, winid, name, res);
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
  wxFrameExtDoCentre__intFunc m_wxFrameExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxFrame::DoCentre(dir);
    if (*m_wxFrameExtDoCentre__int != NULL){
      return m_wxFrameExtDoCentre__int(this, dir);
    }
  }
  wxFrameExtDoClientToScreen__intPintPFunc m_wxFrameExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxFrame::DoClientToScreen(x, y);
    if (*m_wxFrameExtDoClientToScreen__intPintP != NULL){
      return m_wxFrameExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxFrameExtDoGetClientSize__intPintPFunc m_wxFrameExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxFrame::DoGetClientSize(width, height);
    if (*m_wxFrameExtDoGetClientSize__intPintP != NULL){
      return m_wxFrameExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxFrameExtDoGetScreenPosition__intPintPFunc m_wxFrameExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxFrame::DoGetScreenPosition(x, y);
    if (*m_wxFrameExtDoGetScreenPosition__intPintP != NULL){
      return m_wxFrameExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxFrameExtDoGiveHelp__wxStringCRboolFunc m_wxFrameExtDoGiveHelp__wxStringCRbool = NULL;
  virtual void DoGiveHelp(wxString const& text, bool show) override
  {
    wxFrame::DoGiveHelp(text, show);
    if (*m_wxFrameExtDoGiveHelp__wxStringCRbool != NULL){
      return m_wxFrameExtDoGiveHelp__wxStringCRbool(this, text, show);
    }
  }
  wxFrameExtDoMenuUpdates__wxMenuPFunc m_wxFrameExtDoMenuUpdates__wxMenuP = NULL;
  virtual void DoMenuUpdates(wxMenu* menu = __null) override
  {
    wxFrame::DoMenuUpdates(menu);
    if (*m_wxFrameExtDoMenuUpdates__wxMenuP != NULL){
      return m_wxFrameExtDoMenuUpdates__wxMenuP(this, menu);
    }
  }
  wxFrameExtDoScreenToClient__intPintPFunc m_wxFrameExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxFrame::DoScreenToClient(x, y);
    if (*m_wxFrameExtDoScreenToClient__intPintP != NULL){
      return m_wxFrameExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxFrameExtDoSetClientSize__intintFunc m_wxFrameExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxFrame::DoSetClientSize(width, height);
    if (*m_wxFrameExtDoSetClientSize__intint != NULL){
      return m_wxFrameExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxFrameExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxFrameExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxFrame::DoUpdateWindowUI(event);
    if (*m_wxFrameExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxFrameExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxFrameExtEnable__boolFunc m_wxFrameExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxFrame::Enable(enable);
    if (*m_wxFrameExtEnable__bool != NULL){
      return m_wxFrameExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtEnableCloseButton__boolFunc m_wxFrameExtEnableCloseButton__bool = NULL;
  virtual bool EnableCloseButton(bool enable = true) override
  {
    bool res = wxFrame::EnableCloseButton(enable);
    if (*m_wxFrameExtEnableCloseButton__bool != NULL){
      return m_wxFrameExtEnableCloseButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtEnableFullScreenView__boollongFunc m_wxFrameExtEnableFullScreenView__boollong = NULL;
  virtual bool EnableFullScreenView(bool enable = true, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxFrame::EnableFullScreenView(enable, style);
    if (*m_wxFrameExtEnableFullScreenView__boollong != NULL){
      return m_wxFrameExtEnableFullScreenView__boollong(this, enable, style, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtEnableMaximizeButton__boolFunc m_wxFrameExtEnableMaximizeButton__bool = NULL;
  virtual bool EnableMaximizeButton(bool enable = true) override
  {
    bool res = wxFrame::EnableMaximizeButton(enable);
    if (*m_wxFrameExtEnableMaximizeButton__bool != NULL){
      return m_wxFrameExtEnableMaximizeButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtEnableMinimizeButton__boolFunc m_wxFrameExtEnableMinimizeButton__bool = NULL;
  virtual bool EnableMinimizeButton(bool enable = true) override
  {
    bool res = wxFrame::EnableMinimizeButton(enable);
    if (*m_wxFrameExtEnableMinimizeButton__bool != NULL){
      return m_wxFrameExtEnableMinimizeButton__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtFindItemInMenuBar__intFunc m_wxFrameExtFindItemInMenuBar__int = NULL;
  virtual wxMenuItem* FindItemInMenuBar(int menuId) const override
  {
    wxMenuItem* res = wxFrame::FindItemInMenuBar(menuId);
    if (*m_wxFrameExtFindItemInMenuBar__int != NULL){
      return m_wxFrameExtFindItemInMenuBar__int(this, menuId, res);
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
  wxFrameExtGetRectForTopLevelChildren__intPintPintPintPFunc m_wxFrameExtGetRectForTopLevelChildren__intPintPintPintP = NULL;
  virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h) override
  {
    wxFrame::GetRectForTopLevelChildren(x, y, w, h);
    if (*m_wxFrameExtGetRectForTopLevelChildren__intPintPintPintP != NULL){
      return m_wxFrameExtGetRectForTopLevelChildren__intPintPintPintP(this, x, y, w, h);
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
  wxFrameExtIconize__boolFunc m_wxFrameExtIconize__bool = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    wxFrame::Iconize(iconize);
    if (*m_wxFrameExtIconize__bool != NULL){
      return m_wxFrameExtIconize__bool(this, iconize);
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
  wxFrameExtIsClientAreaChild__wxWindowCPFunc m_wxFrameExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxFrame::IsClientAreaChild(child);
    if (*m_wxFrameExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxFrameExtIsClientAreaChild__wxWindowCP(this, child, res);
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
  wxFrameExtIsOneOfBars__wxWindowCPFunc m_wxFrameExtIsOneOfBars__wxWindowCP = NULL;
  virtual bool IsOneOfBars(wxWindow const* win) const override
  {
    bool res = wxFrame::IsOneOfBars(win);
    if (*m_wxFrameExtIsOneOfBars__wxWindowCP != NULL){
      return m_wxFrameExtIsOneOfBars__wxWindowCP(this, win, res);
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
  wxFrameExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxFrameExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxFrame::IsTopNavigationDomain(kind);
    if (*m_wxFrameExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxFrameExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
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
  wxFrameExtMaximize__boolFunc m_wxFrameExtMaximize__bool = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    wxFrame::Maximize(maximize);
    if (*m_wxFrameExtMaximize__bool != NULL){
      return m_wxFrameExtMaximize__bool(this, maximize);
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
  wxFrameExtOSXSetModified__boolFunc m_wxFrameExtOSXSetModified__bool = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxFrame::OSXSetModified(modified);
    if (*m_wxFrameExtOSXSetModified__bool != NULL){
      return m_wxFrameExtOSXSetModified__bool(this, modified);
    }
  }
  wxFrameExtOnCreateStatusBar__intlongwxWindowIDwxStringCRFunc m_wxFrameExtOnCreateStatusBar__intlongwxWindowIDwxStringCR = NULL;
  virtual wxStatusBar* OnCreateStatusBar(int number, long style, wxWindowID winid, wxString const& name) override
  {
    wxStatusBar* res = wxFrame::OnCreateStatusBar(number, style, winid, name);
    if (*m_wxFrameExtOnCreateStatusBar__intlongwxWindowIDwxStringCR != NULL){
      return m_wxFrameExtOnCreateStatusBar__intlongwxWindowIDwxStringCR(this, number, style, winid, name, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtOnCreateToolBar__longwxWindowIDwxStringCRFunc m_wxFrameExtOnCreateToolBar__longwxWindowIDwxStringCR = NULL;
  virtual wxToolBar* OnCreateToolBar(long style, wxWindowID winid, wxString const& name) override
  {
    wxToolBar* res = wxFrame::OnCreateToolBar(style, winid, name);
    if (*m_wxFrameExtOnCreateToolBar__longwxWindowIDwxStringCR != NULL){
      return m_wxFrameExtOnCreateToolBar__longwxWindowIDwxStringCR(this, style, winid, name, res);
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
  wxFrameExtRequestUserAttention__intFunc m_wxFrameExtRequestUserAttention__int = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxFrame::RequestUserAttention(flags);
    if (*m_wxFrameExtRequestUserAttention__int != NULL){
      return m_wxFrameExtRequestUserAttention__int(this, flags);
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
  wxFrameExtSetContentProtection__wxContentProtectionFunc m_wxFrameExtSetContentProtection__wxContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection contentProtection) override
  {
    bool res = wxFrame::SetContentProtection(contentProtection);
    if (*m_wxFrameExtSetContentProtection__wxContentProtection != NULL){
      return m_wxFrameExtSetContentProtection__wxContentProtection(this, contentProtection, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtSetIcons__wxIconBundleCRFunc m_wxFrameExtSetIcons__wxIconBundleCR = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxFrame::SetIcons(icons);
    if (*m_wxFrameExtSetIcons__wxIconBundleCR != NULL){
      return m_wxFrameExtSetIcons__wxIconBundleCR(this, icons);
    }
  }
  wxFrameExtSetLabel__wxStringCRFunc m_wxFrameExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxFrame::SetLabel(label);
    if (*m_wxFrameExtSetLabel__wxStringCR != NULL){
      return m_wxFrameExtSetLabel__wxStringCR(this, label);
    }
  }
  wxFrameExtSetMaxSize__wxSizeCRFunc m_wxFrameExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxFrame::SetMaxSize(maxSize);
    if (*m_wxFrameExtSetMaxSize__wxSizeCR != NULL){
      return m_wxFrameExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxFrameExtSetMenuBar__wxMenuBarPFunc m_wxFrameExtSetMenuBar__wxMenuBarP = NULL;
  virtual void SetMenuBar(wxMenuBar* menubar) override
  {
    wxFrame::SetMenuBar(menubar);
    if (*m_wxFrameExtSetMenuBar__wxMenuBarP != NULL){
      return m_wxFrameExtSetMenuBar__wxMenuBarP(this, menubar);
    }
  }
  wxFrameExtSetMinSize__wxSizeCRFunc m_wxFrameExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxFrame::SetMinSize(minSize);
    if (*m_wxFrameExtSetMinSize__wxSizeCR != NULL){
      return m_wxFrameExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxFrameExtSetRepresentedFilename__wxStringCRFunc m_wxFrameExtSetRepresentedFilename__wxStringCR = NULL;
  virtual void SetRepresentedFilename(wxString const& filename) override
  {
    wxFrame::SetRepresentedFilename(filename);
    if (*m_wxFrameExtSetRepresentedFilename__wxStringCR != NULL){
      return m_wxFrameExtSetRepresentedFilename__wxStringCR(this, filename);
    }
  }
  wxFrameExtSetStatusBar__wxStatusBarPFunc m_wxFrameExtSetStatusBar__wxStatusBarP = NULL;
  virtual void SetStatusBar(wxStatusBar* statBar) override
  {
    wxFrame::SetStatusBar(statBar);
    if (*m_wxFrameExtSetStatusBar__wxStatusBarP != NULL){
      return m_wxFrameExtSetStatusBar__wxStatusBarP(this, statBar);
    }
  }
  wxFrameExtSetStatusText__wxStringCRintFunc m_wxFrameExtSetStatusText__wxStringCRint = NULL;
  virtual void SetStatusText(wxString const& text, int number = 0) override
  {
    wxFrame::SetStatusText(text, number);
    if (*m_wxFrameExtSetStatusText__wxStringCRint != NULL){
      return m_wxFrameExtSetStatusText__wxStringCRint(this, text, number);
    }
  }
  wxFrameExtSetStatusWidths__intintCBFunc m_wxFrameExtSetStatusWidths__intintCB = NULL;
  virtual void SetStatusWidths(int n, int const widths_field[]) override
  {
    wxFrame::SetStatusWidths(n, widths_field);
    if (*m_wxFrameExtSetStatusWidths__intintCB != NULL){
      return m_wxFrameExtSetStatusWidths__intintCB(this, n, widths_field);
    }
  }
  wxFrameExtSetTitle__wxStringCRFunc m_wxFrameExtSetTitle__wxStringCR = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    wxFrame::SetTitle(title);
    if (*m_wxFrameExtSetTitle__wxStringCR != NULL){
      return m_wxFrameExtSetTitle__wxStringCR(this, title);
    }
  }
  wxFrameExtSetToolBar__wxToolBarPFunc m_wxFrameExtSetToolBar__wxToolBarP = NULL;
  virtual void SetToolBar(wxToolBar* toolbar) override
  {
    wxFrame::SetToolBar(toolbar);
    if (*m_wxFrameExtSetToolBar__wxToolBarP != NULL){
      return m_wxFrameExtSetToolBar__wxToolBarP(this, toolbar);
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
  wxFrameExtShow__boolFunc m_wxFrameExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxFrame::Show(show);
    if (*m_wxFrameExtShow__bool != NULL){
      return m_wxFrameExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtShowFullScreen__boollongFunc m_wxFrameExtShowFullScreen__boollong = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxFrame::ShowFullScreen(show, style);
    if (*m_wxFrameExtShowFullScreen__boollong != NULL){
      return m_wxFrameExtShowFullScreen__boollong(this, show, style, res);
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
  wxFrameExtUpdateWindowUI__longFunc m_wxFrameExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxFrame::UpdateWindowUI(flags);
    if (*m_wxFrameExtUpdateWindowUI__long != NULL){
      return m_wxFrameExtUpdateWindowUI__long(this, flags);
    }
  }
  wxFrameExtWXReservedTLW1__voidPFunc m_wxFrameExtWXReservedTLW1__voidP = NULL;
  virtual void* WXReservedTLW1(void* param0) override
  {
    void* res = wxFrame::WXReservedTLW1(param0);
    if (*m_wxFrameExtWXReservedTLW1__voidP != NULL){
      return m_wxFrameExtWXReservedTLW1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtWXReservedTLW2__voidPFunc m_wxFrameExtWXReservedTLW2__voidP = NULL;
  virtual void* WXReservedTLW2(void* param0) override
  {
    void* res = wxFrame::WXReservedTLW2(param0);
    if (*m_wxFrameExtWXReservedTLW2__voidP != NULL){
      return m_wxFrameExtWXReservedTLW2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameExtWXReservedTLW3__voidPFunc m_wxFrameExtWXReservedTLW3__voidP = NULL;
  virtual void* WXReservedTLW3(void* param0) override
  {
    void* res = wxFrame::WXReservedTLW3(param0);
    if (*m_wxFrameExtWXReservedTLW3__voidP != NULL){
      return m_wxFrameExtWXReservedTLW3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxFrameExt(wxFrameExtAttachMenuBar__wxMenuBarPFunc a_AttachMenuBar__wxMenuBarP, wxFrameExtCreateStatusBar__intlongwxWindowIDwxStringCRFunc a_CreateStatusBar__intlongwxWindowIDwxStringCR, wxFrameExtCreateToolBar__longwxWindowIDwxStringCRFunc a_CreateToolBar__longwxWindowIDwxStringCR, wxFrameExtDestroyFunc a_Destroy, wxFrameExtDetachMenuBarFunc a_DetachMenuBar, wxFrameExtDoCentre__intFunc a_DoCentre__int, wxFrameExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxFrameExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxFrameExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxFrameExtDoGiveHelp__wxStringCRboolFunc a_DoGiveHelp__wxStringCRbool, wxFrameExtDoMenuUpdates__wxMenuPFunc a_DoMenuUpdates__wxMenuP, wxFrameExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxFrameExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxFrameExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxFrameExtEnable__boolFunc a_Enable__bool, wxFrameExtEnableCloseButton__boolFunc a_EnableCloseButton__bool, wxFrameExtEnableFullScreenView__boollongFunc a_EnableFullScreenView__boollong, wxFrameExtEnableMaximizeButton__boolFunc a_EnableMaximizeButton__bool, wxFrameExtEnableMinimizeButton__boolFunc a_EnableMinimizeButton__bool, wxFrameExtFindItemInMenuBar__intFunc a_FindItemInMenuBar__int, wxFrameExtGetClassInfoFunc a_GetClassInfo, wxFrameExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxFrameExtGetContentProtectionFunc a_GetContentProtection, wxFrameExtGetEventHashTableFunc a_GetEventHashTable, wxFrameExtGetEventTableFunc a_GetEventTable, wxFrameExtGetLabelFunc a_GetLabel, wxFrameExtGetMenuBarFunc a_GetMenuBar, wxFrameExtGetRectForTopLevelChildren__intPintPintPintPFunc a_GetRectForTopLevelChildren__intPintPintPintP, wxFrameExtGetStatusBarFunc a_GetStatusBar, wxFrameExtGetTitleFunc a_GetTitle, wxFrameExtGetToolBarFunc a_GetToolBar, wxFrameExtIconize__boolFunc a_Iconize__bool, wxFrameExtIsActiveFunc a_IsActive, wxFrameExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxFrameExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxFrameExtIsFullScreenFunc a_IsFullScreen, wxFrameExtIsIconizedFunc a_IsIconized, wxFrameExtIsMaximizedFunc a_IsMaximized, wxFrameExtIsOneOfBars__wxWindowCPFunc a_IsOneOfBars__wxWindowCP, wxFrameExtIsTopLevelFunc a_IsTopLevel, wxFrameExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxFrameExtIsVisibleFunc a_IsVisible, wxFrameExtLayoutFunc a_Layout, wxFrameExtMaximize__boolFunc a_Maximize__bool, wxFrameExtOSXIsModifiedFunc a_OSXIsModified, wxFrameExtOSXSetModified__boolFunc a_OSXSetModified__bool, wxFrameExtOnCreateStatusBar__intlongwxWindowIDwxStringCRFunc a_OnCreateStatusBar__intlongwxWindowIDwxStringCR, wxFrameExtOnCreateToolBar__longwxWindowIDwxStringCRFunc a_OnCreateToolBar__longwxWindowIDwxStringCR, wxFrameExtOnInternalIdleFunc a_OnInternalIdle, wxFrameExtPositionMenuBarFunc a_PositionMenuBar, wxFrameExtPositionStatusBarFunc a_PositionStatusBar, wxFrameExtPositionToolBarFunc a_PositionToolBar, wxFrameExtRequestUserAttention__intFunc a_RequestUserAttention__int, wxFrameExtRestoreFunc a_Restore, wxFrameExtSetContentProtection__wxContentProtectionFunc a_SetContentProtection__wxContentProtection, wxFrameExtSetIcons__wxIconBundleCRFunc a_SetIcons__wxIconBundleCR, wxFrameExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxFrameExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxFrameExtSetMenuBar__wxMenuBarPFunc a_SetMenuBar__wxMenuBarP, wxFrameExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxFrameExtSetRepresentedFilename__wxStringCRFunc a_SetRepresentedFilename__wxStringCR, wxFrameExtSetStatusBar__wxStatusBarPFunc a_SetStatusBar__wxStatusBarP, wxFrameExtSetStatusText__wxStringCRintFunc a_SetStatusText__wxStringCRint, wxFrameExtSetStatusWidths__intintCBFunc a_SetStatusWidths__intintCB, wxFrameExtSetTitle__wxStringCRFunc a_SetTitle__wxStringCR, wxFrameExtSetToolBar__wxToolBarPFunc a_SetToolBar__wxToolBarP, wxFrameExtShouldPreventAppExitFunc a_ShouldPreventAppExit, wxFrameExtShow__boolFunc a_Show__bool, wxFrameExtShowFullScreen__boollongFunc a_ShowFullScreen__boollong, wxFrameExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxFrameExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxFrameExtWXReservedTLW1__voidPFunc a_WXReservedTLW1__voidP, wxFrameExtWXReservedTLW2__voidPFunc a_WXReservedTLW2__voidP, wxFrameExtWXReservedTLW3__voidPFunc a_WXReservedTLW3__voidP): wxFrame() {
    m_wxFrameExtAttachMenuBar__wxMenuBarP = a_AttachMenuBar__wxMenuBarP;
    m_wxFrameExtCreateStatusBar__intlongwxWindowIDwxStringCR = a_CreateStatusBar__intlongwxWindowIDwxStringCR;
    m_wxFrameExtCreateToolBar__longwxWindowIDwxStringCR = a_CreateToolBar__longwxWindowIDwxStringCR;
    m_wxFrameExtDestroy = a_Destroy;
    m_wxFrameExtDetachMenuBar = a_DetachMenuBar;
    m_wxFrameExtDoCentre__int = a_DoCentre__int;
    m_wxFrameExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxFrameExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxFrameExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxFrameExtDoGiveHelp__wxStringCRbool = a_DoGiveHelp__wxStringCRbool;
    m_wxFrameExtDoMenuUpdates__wxMenuP = a_DoMenuUpdates__wxMenuP;
    m_wxFrameExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxFrameExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxFrameExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxFrameExtEnable__bool = a_Enable__bool;
    m_wxFrameExtEnableCloseButton__bool = a_EnableCloseButton__bool;
    m_wxFrameExtEnableFullScreenView__boollong = a_EnableFullScreenView__boollong;
    m_wxFrameExtEnableMaximizeButton__bool = a_EnableMaximizeButton__bool;
    m_wxFrameExtEnableMinimizeButton__bool = a_EnableMinimizeButton__bool;
    m_wxFrameExtFindItemInMenuBar__int = a_FindItemInMenuBar__int;
    m_wxFrameExtGetClassInfo = a_GetClassInfo;
    m_wxFrameExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxFrameExtGetContentProtection = a_GetContentProtection;
    m_wxFrameExtGetEventHashTable = a_GetEventHashTable;
    m_wxFrameExtGetEventTable = a_GetEventTable;
    m_wxFrameExtGetLabel = a_GetLabel;
    m_wxFrameExtGetMenuBar = a_GetMenuBar;
    m_wxFrameExtGetRectForTopLevelChildren__intPintPintPintP = a_GetRectForTopLevelChildren__intPintPintPintP;
    m_wxFrameExtGetStatusBar = a_GetStatusBar;
    m_wxFrameExtGetTitle = a_GetTitle;
    m_wxFrameExtGetToolBar = a_GetToolBar;
    m_wxFrameExtIconize__bool = a_Iconize__bool;
    m_wxFrameExtIsActive = a_IsActive;
    m_wxFrameExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxFrameExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxFrameExtIsFullScreen = a_IsFullScreen;
    m_wxFrameExtIsIconized = a_IsIconized;
    m_wxFrameExtIsMaximized = a_IsMaximized;
    m_wxFrameExtIsOneOfBars__wxWindowCP = a_IsOneOfBars__wxWindowCP;
    m_wxFrameExtIsTopLevel = a_IsTopLevel;
    m_wxFrameExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxFrameExtIsVisible = a_IsVisible;
    m_wxFrameExtLayout = a_Layout;
    m_wxFrameExtMaximize__bool = a_Maximize__bool;
    m_wxFrameExtOSXIsModified = a_OSXIsModified;
    m_wxFrameExtOSXSetModified__bool = a_OSXSetModified__bool;
    m_wxFrameExtOnCreateStatusBar__intlongwxWindowIDwxStringCR = a_OnCreateStatusBar__intlongwxWindowIDwxStringCR;
    m_wxFrameExtOnCreateToolBar__longwxWindowIDwxStringCR = a_OnCreateToolBar__longwxWindowIDwxStringCR;
    m_wxFrameExtOnInternalIdle = a_OnInternalIdle;
    m_wxFrameExtPositionMenuBar = a_PositionMenuBar;
    m_wxFrameExtPositionStatusBar = a_PositionStatusBar;
    m_wxFrameExtPositionToolBar = a_PositionToolBar;
    m_wxFrameExtRequestUserAttention__int = a_RequestUserAttention__int;
    m_wxFrameExtRestore = a_Restore;
    m_wxFrameExtSetContentProtection__wxContentProtection = a_SetContentProtection__wxContentProtection;
    m_wxFrameExtSetIcons__wxIconBundleCR = a_SetIcons__wxIconBundleCR;
    m_wxFrameExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxFrameExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxFrameExtSetMenuBar__wxMenuBarP = a_SetMenuBar__wxMenuBarP;
    m_wxFrameExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxFrameExtSetRepresentedFilename__wxStringCR = a_SetRepresentedFilename__wxStringCR;
    m_wxFrameExtSetStatusBar__wxStatusBarP = a_SetStatusBar__wxStatusBarP;
    m_wxFrameExtSetStatusText__wxStringCRint = a_SetStatusText__wxStringCRint;
    m_wxFrameExtSetStatusWidths__intintCB = a_SetStatusWidths__intintCB;
    m_wxFrameExtSetTitle__wxStringCR = a_SetTitle__wxStringCR;
    m_wxFrameExtSetToolBar__wxToolBarP = a_SetToolBar__wxToolBarP;
    m_wxFrameExtShouldPreventAppExit = a_ShouldPreventAppExit;
    m_wxFrameExtShow__bool = a_Show__bool;
    m_wxFrameExtShowFullScreen__boollong = a_ShowFullScreen__boollong;
    m_wxFrameExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxFrameExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxFrameExtWXReservedTLW1__voidP = a_WXReservedTLW1__voidP;
    m_wxFrameExtWXReservedTLW2__voidP = a_WXReservedTLW2__voidP;
    m_wxFrameExtWXReservedTLW3__voidP = a_WXReservedTLW3__voidP;
  }
};



#endif
