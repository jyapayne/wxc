#ifndef _WX_FRAME_H_EXT_
#define _WX_FRAME_H_EXT_

class wxFrameBaseExt;
typedef wxPoint (*wxFrameBaseExtGetClientAreaOriginFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtSetMenuBarFunc)(const wxFrameBaseExt* self, wxMenuBar* menubar);
typedef wxMenuItem* (*wxFrameBaseExtFindItemInMenuBarFunc)(const wxFrameBaseExt* self, int menuId);
typedef wxStatusBar* (*wxFrameBaseExtCreateStatusBarFunc)(const wxFrameBaseExt* self, int number, long style, wxWindowID winid, wxString const& name);
typedef wxStatusBar* (*wxFrameBaseExtOnCreateStatusBarFunc)(const wxFrameBaseExt* self, int number, long style, wxWindowID winid, wxString const& name);
typedef void (*wxFrameBaseExtSetStatusBarFunc)(const wxFrameBaseExt* self, wxStatusBar* statBar);
typedef void (*wxFrameBaseExtSetStatusTextFunc)(const wxFrameBaseExt* self, wxString const& text, int number);
typedef void (*wxFrameBaseExtSetStatusWidthsFunc)(const wxFrameBaseExt* self, int n, int const widths_field[]);
typedef wxToolBar* (*wxFrameBaseExtCreateToolBarFunc)(const wxFrameBaseExt* self, long style, wxWindowID winid, wxString const& name);
typedef wxToolBar* (*wxFrameBaseExtOnCreateToolBarFunc)(const wxFrameBaseExt* self, long style, wxWindowID winid, wxString const& name);
typedef void (*wxFrameBaseExtSetToolBarFunc)(const wxFrameBaseExt* self, wxToolBar* toolbar);
typedef void (*wxFrameBaseExtDoMenuUpdatesFunc)(const wxFrameBaseExt* self, wxMenu* menu);
typedef void (*wxFrameBaseExtUpdateWindowUIFunc)(const wxFrameBaseExt* self, long flags);
typedef void (*wxFrameBaseExtOnInternalIdleFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtDoGiveHelpFunc)(const wxFrameBaseExt* self, wxString const& text, bool show);
typedef bool (*wxFrameBaseExtIsOneOfBarsFunc)(const wxFrameBaseExt* self, wxWindow const* win);
typedef void (*wxFrameBaseExtDetachMenuBarFunc)(const wxFrameBaseExt* self);
typedef void (*wxFrameBaseExtAttachMenuBarFunc)(const wxFrameBaseExt* self, wxMenuBar* menubar);
typedef wxEventTable const* (*wxFrameBaseExtGetEventTableFunc)(const wxFrameBaseExt* self);
typedef wxEventHashTable& (*wxFrameBaseExtGetEventHashTableFunc)(const wxFrameBaseExt* self);

class wxFrameBaseExt: public wxFrameBase
{
public:
  wxFrameBaseExt(): wxFrameBase()  {  }
  virtual ~wxFrameBaseExt() override  {  }
  wxFrameBaseExtGetClientAreaOriginFunc m_wxFrameBaseExtGetClientAreaOrigin;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxFrameBase::GetClientAreaOrigin();
    if (*m_wxFrameBaseExtGetClientAreaOrigin != NULL){
      return m_wxFrameBaseExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtSetMenuBarFunc m_wxFrameBaseExtSetMenuBar;
  virtual void SetMenuBar(wxMenuBar* menubar) override
  {
    wxFrameBase::SetMenuBar(menubar);
    if (*m_wxFrameBaseExtSetMenuBar != NULL){
      return m_wxFrameBaseExtSetMenuBar(this, menubar);
    }
  }
  wxFrameBaseExtFindItemInMenuBarFunc m_wxFrameBaseExtFindItemInMenuBar;
  virtual wxMenuItem* FindItemInMenuBar(int menuId) const override
  {
    wxMenuItem* res = wxFrameBase::FindItemInMenuBar(menuId);
    if (*m_wxFrameBaseExtFindItemInMenuBar != NULL){
      return m_wxFrameBaseExtFindItemInMenuBar(this, menuId);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtCreateStatusBarFunc m_wxFrameBaseExtCreateStatusBar;
  virtual wxStatusBar* CreateStatusBar(int number = 1, long style = (0x0010 | 0x0100 | 0x0020 | 0x00010000), wxWindowID winid = wxID_ANY, wxString const& name = wxString::FromAscii(wxStatusLineNameStr)) override
  {
    wxStatusBar* res = wxFrameBase::CreateStatusBar(number, style, winid, name);
    if (*m_wxFrameBaseExtCreateStatusBar != NULL){
      return m_wxFrameBaseExtCreateStatusBar(this, number, style, winid, name);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtOnCreateStatusBarFunc m_wxFrameBaseExtOnCreateStatusBar;
  virtual wxStatusBar* OnCreateStatusBar(int number, long style, wxWindowID winid, wxString const& name) override
  {
    wxStatusBar* res = wxFrameBase::OnCreateStatusBar(number, style, winid, name);
    if (*m_wxFrameBaseExtOnCreateStatusBar != NULL){
      return m_wxFrameBaseExtOnCreateStatusBar(this, number, style, winid, name);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtSetStatusBarFunc m_wxFrameBaseExtSetStatusBar;
  virtual void SetStatusBar(wxStatusBar* statBar) override
  {
    wxFrameBase::SetStatusBar(statBar);
    if (*m_wxFrameBaseExtSetStatusBar != NULL){
      return m_wxFrameBaseExtSetStatusBar(this, statBar);
    }
  }
  wxFrameBaseExtSetStatusTextFunc m_wxFrameBaseExtSetStatusText;
  virtual void SetStatusText(wxString const& text, int number = 0) override
  {
    wxFrameBase::SetStatusText(text, number);
    if (*m_wxFrameBaseExtSetStatusText != NULL){
      return m_wxFrameBaseExtSetStatusText(this, text, number);
    }
  }
  wxFrameBaseExtSetStatusWidthsFunc m_wxFrameBaseExtSetStatusWidths;
  virtual void SetStatusWidths(int n, int const widths_field[]) override
  {
    wxFrameBase::SetStatusWidths(n, widths_field);
    if (*m_wxFrameBaseExtSetStatusWidths != NULL){
      return m_wxFrameBaseExtSetStatusWidths(this, n, widths_field);
    }
  }
  wxFrameBaseExtCreateToolBarFunc m_wxFrameBaseExtCreateToolBar;
  virtual wxToolBar* CreateToolBar(long style = -1, wxWindowID winid = wxID_ANY, wxString const& name = wxString::FromAscii(wxToolBarNameStr)) override
  {
    wxToolBar* res = wxFrameBase::CreateToolBar(style, winid, name);
    if (*m_wxFrameBaseExtCreateToolBar != NULL){
      return m_wxFrameBaseExtCreateToolBar(this, style, winid, name);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtOnCreateToolBarFunc m_wxFrameBaseExtOnCreateToolBar;
  virtual wxToolBar* OnCreateToolBar(long style, wxWindowID winid, wxString const& name) override
  {
    wxToolBar* res = wxFrameBase::OnCreateToolBar(style, winid, name);
    if (*m_wxFrameBaseExtOnCreateToolBar != NULL){
      return m_wxFrameBaseExtOnCreateToolBar(this, style, winid, name);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtSetToolBarFunc m_wxFrameBaseExtSetToolBar;
  virtual void SetToolBar(wxToolBar* toolbar) override
  {
    wxFrameBase::SetToolBar(toolbar);
    if (*m_wxFrameBaseExtSetToolBar != NULL){
      return m_wxFrameBaseExtSetToolBar(this, toolbar);
    }
  }
  wxFrameBaseExtDoMenuUpdatesFunc m_wxFrameBaseExtDoMenuUpdates;
  virtual void DoMenuUpdates(wxMenu* menu = __null) override
  {
    wxFrameBase::DoMenuUpdates(menu);
    if (*m_wxFrameBaseExtDoMenuUpdates != NULL){
      return m_wxFrameBaseExtDoMenuUpdates(this, menu);
    }
  }
  wxFrameBaseExtUpdateWindowUIFunc m_wxFrameBaseExtUpdateWindowUI;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxFrameBase::UpdateWindowUI(flags);
    if (*m_wxFrameBaseExtUpdateWindowUI != NULL){
      return m_wxFrameBaseExtUpdateWindowUI(this, flags);
    }
  }
  wxFrameBaseExtOnInternalIdleFunc m_wxFrameBaseExtOnInternalIdle;
  virtual void OnInternalIdle() override
  {
    wxFrameBase::OnInternalIdle();
    if (*m_wxFrameBaseExtOnInternalIdle != NULL){
      return m_wxFrameBaseExtOnInternalIdle(this);
    }
  }
  wxFrameBaseExtDoGiveHelpFunc m_wxFrameBaseExtDoGiveHelp;
  virtual void DoGiveHelp(wxString const& text, bool show) override
  {
    wxFrameBase::DoGiveHelp(text, show);
    if (*m_wxFrameBaseExtDoGiveHelp != NULL){
      return m_wxFrameBaseExtDoGiveHelp(this, text, show);
    }
  }
  wxFrameBaseExtIsOneOfBarsFunc m_wxFrameBaseExtIsOneOfBars;
  virtual bool IsOneOfBars(wxWindow const* win) const override
  {
    bool res = wxFrameBase::IsOneOfBars(win);
    if (*m_wxFrameBaseExtIsOneOfBars != NULL){
      return m_wxFrameBaseExtIsOneOfBars(this, win);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtDetachMenuBarFunc m_wxFrameBaseExtDetachMenuBar;
  virtual void DetachMenuBar() override
  {
    wxFrameBase::DetachMenuBar();
    if (*m_wxFrameBaseExtDetachMenuBar != NULL){
      return m_wxFrameBaseExtDetachMenuBar(this);
    }
  }
  wxFrameBaseExtAttachMenuBarFunc m_wxFrameBaseExtAttachMenuBar;
  virtual void AttachMenuBar(wxMenuBar* menubar) override
  {
    wxFrameBase::AttachMenuBar(menubar);
    if (*m_wxFrameBaseExtAttachMenuBar != NULL){
      return m_wxFrameBaseExtAttachMenuBar(this, menubar);
    }
  }
  wxFrameBaseExtGetEventTableFunc m_wxFrameBaseExtGetEventTable;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxFrameBase::GetEventTable();
    if (*m_wxFrameBaseExtGetEventTable != NULL){
      return m_wxFrameBaseExtGetEventTable(this);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExtGetEventHashTableFunc m_wxFrameBaseExtGetEventHashTable;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxFrameBase::GetEventHashTable();
    if (*m_wxFrameBaseExtGetEventHashTable != NULL){
      return m_wxFrameBaseExtGetEventHashTable(this);
    }
    else {
      return res;
    }
  }
  wxFrameBaseExt(wxFrameBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxFrameBaseExtSetMenuBarFunc a_SetMenuBar, wxFrameBaseExtFindItemInMenuBarFunc a_FindItemInMenuBar, wxFrameBaseExtCreateStatusBarFunc a_CreateStatusBar, wxFrameBaseExtOnCreateStatusBarFunc a_OnCreateStatusBar, wxFrameBaseExtSetStatusBarFunc a_SetStatusBar, wxFrameBaseExtSetStatusTextFunc a_SetStatusText, wxFrameBaseExtSetStatusWidthsFunc a_SetStatusWidths, wxFrameBaseExtCreateToolBarFunc a_CreateToolBar, wxFrameBaseExtOnCreateToolBarFunc a_OnCreateToolBar, wxFrameBaseExtSetToolBarFunc a_SetToolBar, wxFrameBaseExtDoMenuUpdatesFunc a_DoMenuUpdates, wxFrameBaseExtUpdateWindowUIFunc a_UpdateWindowUI, wxFrameBaseExtOnInternalIdleFunc a_OnInternalIdle, wxFrameBaseExtDoGiveHelpFunc a_DoGiveHelp, wxFrameBaseExtIsOneOfBarsFunc a_IsOneOfBars, wxFrameBaseExtDetachMenuBarFunc a_DetachMenuBar, wxFrameBaseExtAttachMenuBarFunc a_AttachMenuBar, wxFrameBaseExtGetEventTableFunc a_GetEventTable, wxFrameBaseExtGetEventHashTableFunc a_GetEventHashTable): wxFrameBase() {
    m_wxFrameBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxFrameBaseExtSetMenuBar = a_SetMenuBar;
    m_wxFrameBaseExtFindItemInMenuBar = a_FindItemInMenuBar;
    m_wxFrameBaseExtCreateStatusBar = a_CreateStatusBar;
    m_wxFrameBaseExtOnCreateStatusBar = a_OnCreateStatusBar;
    m_wxFrameBaseExtSetStatusBar = a_SetStatusBar;
    m_wxFrameBaseExtSetStatusText = a_SetStatusText;
    m_wxFrameBaseExtSetStatusWidths = a_SetStatusWidths;
    m_wxFrameBaseExtCreateToolBar = a_CreateToolBar;
    m_wxFrameBaseExtOnCreateToolBar = a_OnCreateToolBar;
    m_wxFrameBaseExtSetToolBar = a_SetToolBar;
    m_wxFrameBaseExtDoMenuUpdates = a_DoMenuUpdates;
    m_wxFrameBaseExtUpdateWindowUI = a_UpdateWindowUI;
    m_wxFrameBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxFrameBaseExtDoGiveHelp = a_DoGiveHelp;
    m_wxFrameBaseExtIsOneOfBars = a_IsOneOfBars;
    m_wxFrameBaseExtDetachMenuBar = a_DetachMenuBar;
    m_wxFrameBaseExtAttachMenuBar = a_AttachMenuBar;
    m_wxFrameBaseExtGetEventTable = a_GetEventTable;
    m_wxFrameBaseExtGetEventHashTable = a_GetEventHashTable;
  }
};



#endif
