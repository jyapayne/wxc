#ifndef _WX_OSX_TOPLEVEL_H_EXT_
#define _WX_OSX_TOPLEVEL_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxTopLevelWindowMacExt;
typedef bool (*wxTopLevelWindowMacExtDestroyFunc)(const wxTopLevelWindowMacExt* self);
typedef wxPoint (*wxTopLevelWindowMacExtGetClientAreaOriginFunc)(const wxTopLevelWindowMacExt* self);
typedef void (*wxTopLevelWindowMacExtRequestUserAttentionFunc)(const wxTopLevelWindowMacExt* self, int flags);
typedef void (*wxTopLevelWindowMacExtMaximizeFunc)(const wxTopLevelWindowMacExt* self, bool maximize);
typedef bool (*wxTopLevelWindowMacExtIsMaximizedFunc)(const wxTopLevelWindowMacExt* self);
typedef void (*wxTopLevelWindowMacExtIconizeFunc)(const wxTopLevelWindowMacExt* self, bool iconize);
typedef bool (*wxTopLevelWindowMacExtIsIconizedFunc)(const wxTopLevelWindowMacExt* self);
typedef void (*wxTopLevelWindowMacExtRestoreFunc)(const wxTopLevelWindowMacExt* self);
typedef bool (*wxTopLevelWindowMacExtIsActiveFunc)(const wxTopLevelWindowMacExt* self);
typedef void (*wxTopLevelWindowMacExtShowWithoutActivatingFunc)(const wxTopLevelWindowMacExt* self);
typedef bool (*wxTopLevelWindowMacExtEnableFullScreenViewFunc)(const wxTopLevelWindowMacExt* self, bool enable, long style);
typedef bool (*wxTopLevelWindowMacExtShowFullScreenFunc)(const wxTopLevelWindowMacExt* self, bool show, long style);
typedef bool (*wxTopLevelWindowMacExtIsFullScreenFunc)(const wxTopLevelWindowMacExt* self);
typedef wxContentProtection (*wxTopLevelWindowMacExtGetContentProtectionFunc)(const wxTopLevelWindowMacExt* self);
typedef bool (*wxTopLevelWindowMacExtSetContentProtectionFunc)(const wxTopLevelWindowMacExt* self, wxContentProtection contentProtection);
typedef void (*wxTopLevelWindowMacExtSetTitleFunc)(const wxTopLevelWindowMacExt* self, wxString const& title);
typedef wxString (*wxTopLevelWindowMacExtGetTitleFunc)(const wxTopLevelWindowMacExt* self);
typedef bool (*wxTopLevelWindowMacExtEnableCloseButtonFunc)(const wxTopLevelWindowMacExt* self, bool enable);
typedef bool (*wxTopLevelWindowMacExtEnableMaximizeButtonFunc)(const wxTopLevelWindowMacExt* self, bool enable);
typedef bool (*wxTopLevelWindowMacExtEnableMinimizeButtonFunc)(const wxTopLevelWindowMacExt* self, bool enable);
typedef void (*wxTopLevelWindowMacExtSetLabelFunc)(const wxTopLevelWindowMacExt* self, wxString const& label);
typedef wxString (*wxTopLevelWindowMacExtGetLabelFunc)(const wxTopLevelWindowMacExt* self);
typedef void (*wxTopLevelWindowMacExtOSXSetModifiedFunc)(const wxTopLevelWindowMacExt* self, bool modified);
typedef bool (*wxTopLevelWindowMacExtOSXIsModifiedFunc)(const wxTopLevelWindowMacExt* self);
typedef void (*wxTopLevelWindowMacExtSetRepresentedFilenameFunc)(const wxTopLevelWindowMacExt* self, wxString const& filename);
typedef wxEventTable const* (*wxTopLevelWindowMacExtGetEventTableFunc)(const wxTopLevelWindowMacExt* self);
typedef wxEventHashTable& (*wxTopLevelWindowMacExtGetEventHashTableFunc)(const wxTopLevelWindowMacExt* self);

class wxTopLevelWindowMacExt: public wxTopLevelWindowMac
{
public:
  wxTopLevelWindowMacExt(): wxTopLevelWindowMac()  {  }
  wxTopLevelWindowMacExt(wxWindow* parent, wxWindowID id, wxString const& title, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = (0x0800 | 0x0040 | 0x0400 | 0x0200 | 0x1000 | 0x20000000 | 0x00400000), wxString const& name = wxString::FromAscii(wxFrameNameStr)): wxTopLevelWindowMac(parent, id, title, pos, size, style, name)  {  }
  virtual ~wxTopLevelWindowMacExt() override  {  }
  wxTopLevelWindowMacExtDestroyFunc m_wxTopLevelWindowMacExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxTopLevelWindowMac::Destroy();
    if (*m_wxTopLevelWindowMacExtDestroy != NULL){
      return m_wxTopLevelWindowMacExtDestroy(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtGetClientAreaOriginFunc m_wxTopLevelWindowMacExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxTopLevelWindowMac::GetClientAreaOrigin();
    if (*m_wxTopLevelWindowMacExtGetClientAreaOrigin != NULL){
      return m_wxTopLevelWindowMacExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtRequestUserAttentionFunc m_wxTopLevelWindowMacExtRequestUserAttention = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxTopLevelWindowMac::RequestUserAttention(flags);
    if (*m_wxTopLevelWindowMacExtRequestUserAttention != NULL){
      return m_wxTopLevelWindowMacExtRequestUserAttention(this, flags);
    }
  }
  wxTopLevelWindowMacExtMaximizeFunc m_wxTopLevelWindowMacExtMaximize = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    wxTopLevelWindowMac::Maximize(maximize);
    if (*m_wxTopLevelWindowMacExtMaximize != NULL){
      return m_wxTopLevelWindowMacExtMaximize(this, maximize);
    }
  }
  wxTopLevelWindowMacExtIsMaximizedFunc m_wxTopLevelWindowMacExtIsMaximized = NULL;
  virtual bool IsMaximized() const override
  {
    bool res = wxTopLevelWindowMac::IsMaximized();
    if (*m_wxTopLevelWindowMacExtIsMaximized != NULL){
      return m_wxTopLevelWindowMacExtIsMaximized(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtIconizeFunc m_wxTopLevelWindowMacExtIconize = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    wxTopLevelWindowMac::Iconize(iconize);
    if (*m_wxTopLevelWindowMacExtIconize != NULL){
      return m_wxTopLevelWindowMacExtIconize(this, iconize);
    }
  }
  wxTopLevelWindowMacExtIsIconizedFunc m_wxTopLevelWindowMacExtIsIconized = NULL;
  virtual bool IsIconized() const override
  {
    bool res = wxTopLevelWindowMac::IsIconized();
    if (*m_wxTopLevelWindowMacExtIsIconized != NULL){
      return m_wxTopLevelWindowMacExtIsIconized(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtRestoreFunc m_wxTopLevelWindowMacExtRestore = NULL;
  virtual void Restore() override
  {
    wxTopLevelWindowMac::Restore();
    if (*m_wxTopLevelWindowMacExtRestore != NULL){
      return m_wxTopLevelWindowMacExtRestore(this);
    }
  }
  wxTopLevelWindowMacExtIsActiveFunc m_wxTopLevelWindowMacExtIsActive = NULL;
  virtual bool IsActive() override
  {
    bool res = wxTopLevelWindowMac::IsActive();
    if (*m_wxTopLevelWindowMacExtIsActive != NULL){
      return m_wxTopLevelWindowMacExtIsActive(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtShowWithoutActivatingFunc m_wxTopLevelWindowMacExtShowWithoutActivating = NULL;
  virtual void ShowWithoutActivating() override
  {
    wxTopLevelWindowMac::ShowWithoutActivating();
    if (*m_wxTopLevelWindowMacExtShowWithoutActivating != NULL){
      return m_wxTopLevelWindowMacExtShowWithoutActivating(this);
    }
  }
  wxTopLevelWindowMacExtEnableFullScreenViewFunc m_wxTopLevelWindowMacExtEnableFullScreenView = NULL;
  virtual bool EnableFullScreenView(bool enable = true, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindowMac::EnableFullScreenView(enable, style);
    if (*m_wxTopLevelWindowMacExtEnableFullScreenView != NULL){
      return m_wxTopLevelWindowMacExtEnableFullScreenView(this, enable, style);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtShowFullScreenFunc m_wxTopLevelWindowMacExtShowFullScreen = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindowMac::ShowFullScreen(show, style);
    if (*m_wxTopLevelWindowMacExtShowFullScreen != NULL){
      return m_wxTopLevelWindowMacExtShowFullScreen(this, show, style);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtIsFullScreenFunc m_wxTopLevelWindowMacExtIsFullScreen = NULL;
  virtual bool IsFullScreen() const override
  {
    bool res = wxTopLevelWindowMac::IsFullScreen();
    if (*m_wxTopLevelWindowMacExtIsFullScreen != NULL){
      return m_wxTopLevelWindowMacExtIsFullScreen(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtGetContentProtectionFunc m_wxTopLevelWindowMacExtGetContentProtection = NULL;
  virtual wxContentProtection GetContentProtection() const override
  {
    wxContentProtection res = wxTopLevelWindowMac::GetContentProtection();
    if (*m_wxTopLevelWindowMacExtGetContentProtection != NULL){
      return m_wxTopLevelWindowMacExtGetContentProtection(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtSetContentProtectionFunc m_wxTopLevelWindowMacExtSetContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection contentProtection) override
  {
    bool res = wxTopLevelWindowMac::SetContentProtection(contentProtection);
    if (*m_wxTopLevelWindowMacExtSetContentProtection != NULL){
      return m_wxTopLevelWindowMacExtSetContentProtection(this, contentProtection);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtSetTitleFunc m_wxTopLevelWindowMacExtSetTitle = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    wxTopLevelWindowMac::SetTitle(title);
    if (*m_wxTopLevelWindowMacExtSetTitle != NULL){
      return m_wxTopLevelWindowMacExtSetTitle(this, title);
    }
  }
  wxTopLevelWindowMacExtGetTitleFunc m_wxTopLevelWindowMacExtGetTitle = NULL;
  virtual wxString GetTitle() const override
  {
    wxString res = wxTopLevelWindowMac::GetTitle();
    if (*m_wxTopLevelWindowMacExtGetTitle != NULL){
      return m_wxTopLevelWindowMacExtGetTitle(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtEnableCloseButtonFunc m_wxTopLevelWindowMacExtEnableCloseButton = NULL;
  virtual bool EnableCloseButton(bool enable = true) override
  {
    bool res = wxTopLevelWindowMac::EnableCloseButton(enable);
    if (*m_wxTopLevelWindowMacExtEnableCloseButton != NULL){
      return m_wxTopLevelWindowMacExtEnableCloseButton(this, enable);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtEnableMaximizeButtonFunc m_wxTopLevelWindowMacExtEnableMaximizeButton = NULL;
  virtual bool EnableMaximizeButton(bool enable = true) override
  {
    bool res = wxTopLevelWindowMac::EnableMaximizeButton(enable);
    if (*m_wxTopLevelWindowMacExtEnableMaximizeButton != NULL){
      return m_wxTopLevelWindowMacExtEnableMaximizeButton(this, enable);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtEnableMinimizeButtonFunc m_wxTopLevelWindowMacExtEnableMinimizeButton = NULL;
  virtual bool EnableMinimizeButton(bool enable = true) override
  {
    bool res = wxTopLevelWindowMac::EnableMinimizeButton(enable);
    if (*m_wxTopLevelWindowMacExtEnableMinimizeButton != NULL){
      return m_wxTopLevelWindowMacExtEnableMinimizeButton(this, enable);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtSetLabelFunc m_wxTopLevelWindowMacExtSetLabel = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxTopLevelWindowMac::SetLabel(label);
    if (*m_wxTopLevelWindowMacExtSetLabel != NULL){
      return m_wxTopLevelWindowMacExtSetLabel(this, label);
    }
  }
  wxTopLevelWindowMacExtGetLabelFunc m_wxTopLevelWindowMacExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxTopLevelWindowMac::GetLabel();
    if (*m_wxTopLevelWindowMacExtGetLabel != NULL){
      return m_wxTopLevelWindowMacExtGetLabel(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtOSXSetModifiedFunc m_wxTopLevelWindowMacExtOSXSetModified = NULL;
  virtual void OSXSetModified(bool modified) override
  {
    wxTopLevelWindowMac::OSXSetModified(modified);
    if (*m_wxTopLevelWindowMacExtOSXSetModified != NULL){
      return m_wxTopLevelWindowMacExtOSXSetModified(this, modified);
    }
  }
  wxTopLevelWindowMacExtOSXIsModifiedFunc m_wxTopLevelWindowMacExtOSXIsModified = NULL;
  virtual bool OSXIsModified() const override
  {
    bool res = wxTopLevelWindowMac::OSXIsModified();
    if (*m_wxTopLevelWindowMacExtOSXIsModified != NULL){
      return m_wxTopLevelWindowMacExtOSXIsModified(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtSetRepresentedFilenameFunc m_wxTopLevelWindowMacExtSetRepresentedFilename = NULL;
  virtual void SetRepresentedFilename(wxString const& filename) override
  {
    wxTopLevelWindowMac::SetRepresentedFilename(filename);
    if (*m_wxTopLevelWindowMacExtSetRepresentedFilename != NULL){
      return m_wxTopLevelWindowMacExtSetRepresentedFilename(this, filename);
    }
  }
  wxTopLevelWindowMacExtGetEventTableFunc m_wxTopLevelWindowMacExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxTopLevelWindowMac::GetEventTable();
    if (*m_wxTopLevelWindowMacExtGetEventTable != NULL){
      return m_wxTopLevelWindowMacExtGetEventTable(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExtGetEventHashTableFunc m_wxTopLevelWindowMacExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxTopLevelWindowMac::GetEventHashTable();
    if (*m_wxTopLevelWindowMacExtGetEventHashTable != NULL){
      return m_wxTopLevelWindowMacExtGetEventHashTable(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowMacExt(wxTopLevelWindowMacExtDestroyFunc a_Destroy, wxTopLevelWindowMacExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxTopLevelWindowMacExtRequestUserAttentionFunc a_RequestUserAttention, wxTopLevelWindowMacExtMaximizeFunc a_Maximize, wxTopLevelWindowMacExtIsMaximizedFunc a_IsMaximized, wxTopLevelWindowMacExtIconizeFunc a_Iconize, wxTopLevelWindowMacExtIsIconizedFunc a_IsIconized, wxTopLevelWindowMacExtRestoreFunc a_Restore, wxTopLevelWindowMacExtIsActiveFunc a_IsActive, wxTopLevelWindowMacExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxTopLevelWindowMacExtEnableFullScreenViewFunc a_EnableFullScreenView, wxTopLevelWindowMacExtShowFullScreenFunc a_ShowFullScreen, wxTopLevelWindowMacExtIsFullScreenFunc a_IsFullScreen, wxTopLevelWindowMacExtGetContentProtectionFunc a_GetContentProtection, wxTopLevelWindowMacExtSetContentProtectionFunc a_SetContentProtection, wxTopLevelWindowMacExtSetTitleFunc a_SetTitle, wxTopLevelWindowMacExtGetTitleFunc a_GetTitle, wxTopLevelWindowMacExtEnableCloseButtonFunc a_EnableCloseButton, wxTopLevelWindowMacExtEnableMaximizeButtonFunc a_EnableMaximizeButton, wxTopLevelWindowMacExtEnableMinimizeButtonFunc a_EnableMinimizeButton, wxTopLevelWindowMacExtSetLabelFunc a_SetLabel, wxTopLevelWindowMacExtGetLabelFunc a_GetLabel, wxTopLevelWindowMacExtOSXSetModifiedFunc a_OSXSetModified, wxTopLevelWindowMacExtOSXIsModifiedFunc a_OSXIsModified, wxTopLevelWindowMacExtSetRepresentedFilenameFunc a_SetRepresentedFilename, wxTopLevelWindowMacExtGetEventTableFunc a_GetEventTable, wxTopLevelWindowMacExtGetEventHashTableFunc a_GetEventHashTable): wxTopLevelWindowMac() {
    m_wxTopLevelWindowMacExtDestroy = a_Destroy;
    m_wxTopLevelWindowMacExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxTopLevelWindowMacExtRequestUserAttention = a_RequestUserAttention;
    m_wxTopLevelWindowMacExtMaximize = a_Maximize;
    m_wxTopLevelWindowMacExtIsMaximized = a_IsMaximized;
    m_wxTopLevelWindowMacExtIconize = a_Iconize;
    m_wxTopLevelWindowMacExtIsIconized = a_IsIconized;
    m_wxTopLevelWindowMacExtRestore = a_Restore;
    m_wxTopLevelWindowMacExtIsActive = a_IsActive;
    m_wxTopLevelWindowMacExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxTopLevelWindowMacExtEnableFullScreenView = a_EnableFullScreenView;
    m_wxTopLevelWindowMacExtShowFullScreen = a_ShowFullScreen;
    m_wxTopLevelWindowMacExtIsFullScreen = a_IsFullScreen;
    m_wxTopLevelWindowMacExtGetContentProtection = a_GetContentProtection;
    m_wxTopLevelWindowMacExtSetContentProtection = a_SetContentProtection;
    m_wxTopLevelWindowMacExtSetTitle = a_SetTitle;
    m_wxTopLevelWindowMacExtGetTitle = a_GetTitle;
    m_wxTopLevelWindowMacExtEnableCloseButton = a_EnableCloseButton;
    m_wxTopLevelWindowMacExtEnableMaximizeButton = a_EnableMaximizeButton;
    m_wxTopLevelWindowMacExtEnableMinimizeButton = a_EnableMinimizeButton;
    m_wxTopLevelWindowMacExtSetLabel = a_SetLabel;
    m_wxTopLevelWindowMacExtGetLabel = a_GetLabel;
    m_wxTopLevelWindowMacExtOSXSetModified = a_OSXSetModified;
    m_wxTopLevelWindowMacExtOSXIsModified = a_OSXIsModified;
    m_wxTopLevelWindowMacExtSetRepresentedFilename = a_SetRepresentedFilename;
    m_wxTopLevelWindowMacExtGetEventTable = a_GetEventTable;
    m_wxTopLevelWindowMacExtGetEventHashTable = a_GetEventHashTable;
  }
};



#endif
