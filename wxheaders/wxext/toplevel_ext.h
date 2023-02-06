#ifndef _WX_TOPLEVEL_H_EXT_
#define _WX_TOPLEVEL_H_EXT_

#include <wx/toplevel.h>

class wxTopLevelWindowBaseExt;
typedef void (*wxTopLevelWindowBaseExtMaximizeFunc)(const wxTopLevelWindowBaseExt* self, bool maximize);
typedef void (*wxTopLevelWindowBaseExtRestoreFunc)(const wxTopLevelWindowBaseExt* self);
typedef void (*wxTopLevelWindowBaseExtIconizeFunc)(const wxTopLevelWindowBaseExt* self, bool iconize);
typedef bool (*wxTopLevelWindowBaseExtIsMaximizedFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtIsAlwaysMaximizedFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtIsIconizedFunc)(const wxTopLevelWindowBaseExt* self);
typedef void (*wxTopLevelWindowBaseExtSetIconsFunc)(const wxTopLevelWindowBaseExt* self, wxIconBundle const& icons);
typedef bool (*wxTopLevelWindowBaseExtEnableFullScreenViewFunc)(const wxTopLevelWindowBaseExt* self, bool param0, long param1);
typedef bool (*wxTopLevelWindowBaseExtShowFullScreenFunc)(const wxTopLevelWindowBaseExt* self, bool show, long style);
typedef void (*wxTopLevelWindowBaseExtShowWithoutActivatingFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtIsFullScreenFunc)(const wxTopLevelWindowBaseExt* self);
typedef wxContentProtection (*wxTopLevelWindowBaseExtGetContentProtectionFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtSetContentProtectionFunc)(const wxTopLevelWindowBaseExt* self, wxContentProtection param0);
typedef void (*wxTopLevelWindowBaseExtSetTitleFunc)(const wxTopLevelWindowBaseExt* self, wxString const& title);
typedef wxString (*wxTopLevelWindowBaseExtGetTitleFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtEnableCloseButtonFunc)(const wxTopLevelWindowBaseExt* self, bool param0);
typedef bool (*wxTopLevelWindowBaseExtEnableMaximizeButtonFunc)(const wxTopLevelWindowBaseExt* self, bool param0);
typedef bool (*wxTopLevelWindowBaseExtEnableMinimizeButtonFunc)(const wxTopLevelWindowBaseExt* self, bool param0);
typedef void (*wxTopLevelWindowBaseExtRequestUserAttentionFunc)(const wxTopLevelWindowBaseExt* self, int flags);
typedef bool (*wxTopLevelWindowBaseExtIsActiveFunc)(const wxTopLevelWindowBaseExt* self);
typedef bool (*wxTopLevelWindowBaseExtShouldPreventAppExitFunc)(const wxTopLevelWindowBaseExt* self);
class GeometrySerializerExt;
typedef bool (*GeometrySerializerExtSaveFieldFunc)(const GeometrySerializerExt* self, wxString const& name, int value);
typedef bool (*GeometrySerializerExtRestoreFieldFunc)(const GeometrySerializerExt* self, wxString const& name, int* value);
class wxTopLevelWindowExt;
typedef wxClassInfo* (*wxTopLevelWindowExtGetClassInfoFunc)(const wxTopLevelWindowExt* self);

class wxTopLevelWindowBaseExt: public wxTopLevelWindowBase
{
public:
  wxTopLevelWindowBaseExt(): wxTopLevelWindowBase()  {  }
  virtual ~wxTopLevelWindowBaseExt() override  {  }
  wxTopLevelWindowBaseExtMaximizeFunc m_wxTopLevelWindowBaseExtMaximize = NULL;
  virtual void Maximize(bool maximize = true) override
  {
    wxTopLevelWindowBase::Maximize(maximize);
    if (*m_wxTopLevelWindowBaseExtMaximize != NULL){
      return m_wxTopLevelWindowBaseExtMaximize(this, maximize);
    }
  }
  wxTopLevelWindowBaseExtRestoreFunc m_wxTopLevelWindowBaseExtRestore = NULL;
  virtual void Restore() override
  {
    wxTopLevelWindowBase::Restore();
    if (*m_wxTopLevelWindowBaseExtRestore != NULL){
      return m_wxTopLevelWindowBaseExtRestore(this);
    }
  }
  wxTopLevelWindowBaseExtIconizeFunc m_wxTopLevelWindowBaseExtIconize = NULL;
  virtual void Iconize(bool iconize = true) override
  {
    wxTopLevelWindowBase::Iconize(iconize);
    if (*m_wxTopLevelWindowBaseExtIconize != NULL){
      return m_wxTopLevelWindowBaseExtIconize(this, iconize);
    }
  }
  wxTopLevelWindowBaseExtIsMaximizedFunc m_wxTopLevelWindowBaseExtIsMaximized = NULL;
  virtual bool IsMaximized() const override
  {
    bool res = wxTopLevelWindowBase::IsMaximized();
    if (*m_wxTopLevelWindowBaseExtIsMaximized != NULL){
      return m_wxTopLevelWindowBaseExtIsMaximized(this);
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
      return m_wxTopLevelWindowBaseExtIsAlwaysMaximized(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtIsIconizedFunc m_wxTopLevelWindowBaseExtIsIconized = NULL;
  virtual bool IsIconized() const override
  {
    bool res = wxTopLevelWindowBase::IsIconized();
    if (*m_wxTopLevelWindowBaseExtIsIconized != NULL){
      return m_wxTopLevelWindowBaseExtIsIconized(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtSetIconsFunc m_wxTopLevelWindowBaseExtSetIcons = NULL;
  virtual void SetIcons(wxIconBundle const& icons) override
  {
    wxTopLevelWindowBase::SetIcons(icons);
    if (*m_wxTopLevelWindowBaseExtSetIcons != NULL){
      return m_wxTopLevelWindowBaseExtSetIcons(this, icons);
    }
  }
  wxTopLevelWindowBaseExtEnableFullScreenViewFunc m_wxTopLevelWindowBaseExtEnableFullScreenView = NULL;
  virtual bool EnableFullScreenView(bool param0 = true, long param1 = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindowBase::EnableFullScreenView(param0, param1);
    if (*m_wxTopLevelWindowBaseExtEnableFullScreenView != NULL){
      return m_wxTopLevelWindowBaseExtEnableFullScreenView(this, param0, param1);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtShowFullScreenFunc m_wxTopLevelWindowBaseExtShowFullScreen = NULL;
  virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL) override
  {
    bool res = wxTopLevelWindowBase::ShowFullScreen(show, style);
    if (*m_wxTopLevelWindowBaseExtShowFullScreen != NULL){
      return m_wxTopLevelWindowBaseExtShowFullScreen(this, show, style);
    }
    else {
      return res;
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
  wxTopLevelWindowBaseExtIsFullScreenFunc m_wxTopLevelWindowBaseExtIsFullScreen = NULL;
  virtual bool IsFullScreen() const override
  {
    bool res = wxTopLevelWindowBase::IsFullScreen();
    if (*m_wxTopLevelWindowBaseExtIsFullScreen != NULL){
      return m_wxTopLevelWindowBaseExtIsFullScreen(this);
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
      return m_wxTopLevelWindowBaseExtGetContentProtection(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtSetContentProtectionFunc m_wxTopLevelWindowBaseExtSetContentProtection = NULL;
  virtual bool SetContentProtection(wxContentProtection param0) override
  {
    bool res = wxTopLevelWindowBase::SetContentProtection(param0);
    if (*m_wxTopLevelWindowBaseExtSetContentProtection != NULL){
      return m_wxTopLevelWindowBaseExtSetContentProtection(this, param0);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtSetTitleFunc m_wxTopLevelWindowBaseExtSetTitle = NULL;
  virtual void SetTitle(wxString const& title) override
  {
    wxTopLevelWindowBase::SetTitle(title);
    if (*m_wxTopLevelWindowBaseExtSetTitle != NULL){
      return m_wxTopLevelWindowBaseExtSetTitle(this, title);
    }
  }
  wxTopLevelWindowBaseExtGetTitleFunc m_wxTopLevelWindowBaseExtGetTitle = NULL;
  virtual wxString GetTitle() const override
  {
    wxString res = wxTopLevelWindowBase::GetTitle();
    if (*m_wxTopLevelWindowBaseExtGetTitle != NULL){
      return m_wxTopLevelWindowBaseExtGetTitle(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtEnableCloseButtonFunc m_wxTopLevelWindowBaseExtEnableCloseButton = NULL;
  virtual bool EnableCloseButton(bool param0 = true) override
  {
    bool res = wxTopLevelWindowBase::EnableCloseButton(param0);
    if (*m_wxTopLevelWindowBaseExtEnableCloseButton != NULL){
      return m_wxTopLevelWindowBaseExtEnableCloseButton(this, param0);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtEnableMaximizeButtonFunc m_wxTopLevelWindowBaseExtEnableMaximizeButton = NULL;
  virtual bool EnableMaximizeButton(bool param0 = true) override
  {
    bool res = wxTopLevelWindowBase::EnableMaximizeButton(param0);
    if (*m_wxTopLevelWindowBaseExtEnableMaximizeButton != NULL){
      return m_wxTopLevelWindowBaseExtEnableMaximizeButton(this, param0);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtEnableMinimizeButtonFunc m_wxTopLevelWindowBaseExtEnableMinimizeButton = NULL;
  virtual bool EnableMinimizeButton(bool param0 = true) override
  {
    bool res = wxTopLevelWindowBase::EnableMinimizeButton(param0);
    if (*m_wxTopLevelWindowBaseExtEnableMinimizeButton != NULL){
      return m_wxTopLevelWindowBaseExtEnableMinimizeButton(this, param0);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtRequestUserAttentionFunc m_wxTopLevelWindowBaseExtRequestUserAttention = NULL;
  virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO) override
  {
    wxTopLevelWindowBase::RequestUserAttention(flags);
    if (*m_wxTopLevelWindowBaseExtRequestUserAttention != NULL){
      return m_wxTopLevelWindowBaseExtRequestUserAttention(this, flags);
    }
  }
  wxTopLevelWindowBaseExtIsActiveFunc m_wxTopLevelWindowBaseExtIsActive = NULL;
  virtual bool IsActive() override
  {
    bool res = wxTopLevelWindowBase::IsActive();
    if (*m_wxTopLevelWindowBaseExtIsActive != NULL){
      return m_wxTopLevelWindowBaseExtIsActive(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExtShouldPreventAppExitFunc m_wxTopLevelWindowBaseExtShouldPreventAppExit = NULL;
  virtual bool ShouldPreventAppExit() const override
  {
    bool res = wxTopLevelWindowBase::ShouldPreventAppExit();
    if (*m_wxTopLevelWindowBaseExtShouldPreventAppExit != NULL){
      return m_wxTopLevelWindowBaseExtShouldPreventAppExit(this);
    }
    else {
      return res;
    }
  }
  wxTopLevelWindowBaseExt(wxTopLevelWindowBaseExtMaximizeFunc a_Maximize, wxTopLevelWindowBaseExtRestoreFunc a_Restore, wxTopLevelWindowBaseExtIconizeFunc a_Iconize, wxTopLevelWindowBaseExtIsMaximizedFunc a_IsMaximized, wxTopLevelWindowBaseExtIsAlwaysMaximizedFunc a_IsAlwaysMaximized, wxTopLevelWindowBaseExtIsIconizedFunc a_IsIconized, wxTopLevelWindowBaseExtSetIconsFunc a_SetIcons, wxTopLevelWindowBaseExtEnableFullScreenViewFunc a_EnableFullScreenView, wxTopLevelWindowBaseExtShowFullScreenFunc a_ShowFullScreen, wxTopLevelWindowBaseExtShowWithoutActivatingFunc a_ShowWithoutActivating, wxTopLevelWindowBaseExtIsFullScreenFunc a_IsFullScreen, wxTopLevelWindowBaseExtGetContentProtectionFunc a_GetContentProtection, wxTopLevelWindowBaseExtSetContentProtectionFunc a_SetContentProtection, wxTopLevelWindowBaseExtSetTitleFunc a_SetTitle, wxTopLevelWindowBaseExtGetTitleFunc a_GetTitle, wxTopLevelWindowBaseExtEnableCloseButtonFunc a_EnableCloseButton, wxTopLevelWindowBaseExtEnableMaximizeButtonFunc a_EnableMaximizeButton, wxTopLevelWindowBaseExtEnableMinimizeButtonFunc a_EnableMinimizeButton, wxTopLevelWindowBaseExtRequestUserAttentionFunc a_RequestUserAttention, wxTopLevelWindowBaseExtIsActiveFunc a_IsActive, wxTopLevelWindowBaseExtShouldPreventAppExitFunc a_ShouldPreventAppExit): wxTopLevelWindowBase() {
    m_wxTopLevelWindowBaseExtMaximize = a_Maximize;
    m_wxTopLevelWindowBaseExtRestore = a_Restore;
    m_wxTopLevelWindowBaseExtIconize = a_Iconize;
    m_wxTopLevelWindowBaseExtIsMaximized = a_IsMaximized;
    m_wxTopLevelWindowBaseExtIsAlwaysMaximized = a_IsAlwaysMaximized;
    m_wxTopLevelWindowBaseExtIsIconized = a_IsIconized;
    m_wxTopLevelWindowBaseExtSetIcons = a_SetIcons;
    m_wxTopLevelWindowBaseExtEnableFullScreenView = a_EnableFullScreenView;
    m_wxTopLevelWindowBaseExtShowFullScreen = a_ShowFullScreen;
    m_wxTopLevelWindowBaseExtShowWithoutActivating = a_ShowWithoutActivating;
    m_wxTopLevelWindowBaseExtIsFullScreen = a_IsFullScreen;
    m_wxTopLevelWindowBaseExtGetContentProtection = a_GetContentProtection;
    m_wxTopLevelWindowBaseExtSetContentProtection = a_SetContentProtection;
    m_wxTopLevelWindowBaseExtSetTitle = a_SetTitle;
    m_wxTopLevelWindowBaseExtGetTitle = a_GetTitle;
    m_wxTopLevelWindowBaseExtEnableCloseButton = a_EnableCloseButton;
    m_wxTopLevelWindowBaseExtEnableMaximizeButton = a_EnableMaximizeButton;
    m_wxTopLevelWindowBaseExtEnableMinimizeButton = a_EnableMinimizeButton;
    m_wxTopLevelWindowBaseExtRequestUserAttention = a_RequestUserAttention;
    m_wxTopLevelWindowBaseExtIsActive = a_IsActive;
    m_wxTopLevelWindowBaseExtShouldPreventAppExit = a_ShouldPreventAppExit;
    }
};

class GeometrySerializerExt: public wxTopLevelWindowBase::GeometrySerializer
{
public:
    virtual ~GeometrySerializerExt()    {    }
    GeometrySerializerExtSaveFieldFunc m_GeometrySerializerExtSaveField = NULL;
    virtual bool SaveField(wxString const& name, int value) const override
    {
      bool res = GeometrySerializer::SaveField(name, value);
      if (*m_GeometrySerializerExtSaveField != NULL){
        return m_GeometrySerializerExtSaveField(this, name, value);
      }
      else {
        return res;
      }
    }
    GeometrySerializerExtRestoreFieldFunc m_GeometrySerializerExtRestoreField = NULL;
    virtual bool RestoreField(wxString const& name, int* value) override
    {
      bool res = GeometrySerializer::RestoreField(name, value);
      if (*m_GeometrySerializerExtRestoreField != NULL){
        return m_GeometrySerializerExtRestoreField(this, name, value);
      }
      else {
        return res;
      }
    }
    GeometrySerializerExt(GeometrySerializerExtSaveFieldFunc a_SaveField, GeometrySerializerExtRestoreFieldFunc a_RestoreField): GeometrySerializer() {
        m_GeometrySerializerExtSaveField = a_SaveField;
        m_GeometrySerializerExtRestoreField = a_RestoreField;
    }
};

#if defined(__WXMSW__)
    #include "wxext/msw/toplevel_ext.h"
    #define wxTopLevelWindowNativeExt wxTopLevelWindowMSW
#elif defined(__WXGTK20__)
    #include "wxext/gtk/toplevel_ext.h"
    #define wxTopLevelWindowNativeExt wxTopLevelWindowGTK
#elif defined(__WXGTK__)
    #include "wxext/gtk1/toplevel_ext.h"
    #define wxTopLevelWindowNativeExt wxTopLevelWindowGTK
#elif defined(__WXX11__)
    #include "wxext/x11/toplevel_ext.h"
    #define wxTopLevelWindowNativeExt wxTopLevelWindowX11
#elif defined(__WXDFB__)
    #include "wxext/dfb/toplevel_ext.h"
    #define wxTopLevelWindowNativeExt wxTopLevelWindowDFB
#elif defined(__WXMAC__)
    #include "wxext/osx/toplevel_ext.h"
    #define wxTopLevelWindowNativeExt wxTopLevelWindowMac
#elif defined(__WXMOTIF__)
    #include "wxext/motif/toplevel_ext.h"
    #define wxTopLevelWindowNativeExt wxTopLevelWindowMotif
#elif defined(__WXQT__)
    #include "wxext/qt/toplevel_ext.h"
#define wxTopLevelWindowNativeExt wxTopLevelWindowQt
#endif

#ifdef __WXUNIVERSAL__
    #include "wxext/univ/toplevel_ext.h"
#else // !__WXUNIVERSAL__
class wxTopLevelWindowExt: public wxTopLevelWindowNativeExt
{
public:
    wxTopLevelWindowExt(): wxTopLevelWindowNativeExt()    {    }
    wxTopLevelWindowExt(wxWindow* parent, wxWindowID winid, wxString const& title, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = (0x0800 | 0x0040 | 0x0400 | 0x0200 | 0x1000 | 0x20000000 | 0x00400000), wxString const& name = wxString::FromAscii(wxFrameNameStr)): wxTopLevelWindowNativeExt(parent, winid, title, pos, size, style, name)    {    }
    wxTopLevelWindowExtGetClassInfoFunc m_wxTopLevelWindowExtGetClassInfo = NULL;
    virtual wxClassInfo* GetClassInfo() const override
    {
      wxClassInfo* res = wxTopLevelWindowNativeExt::GetClassInfo();
      if (*m_wxTopLevelWindowExtGetClassInfo != NULL){
        return m_wxTopLevelWindowExtGetClassInfo(this);
      }
      else {
        return res;
      }
    }
    wxTopLevelWindowExt(wxTopLevelWindowExtGetClassInfoFunc a_GetClassInfo): wxTopLevelWindowNativeExt() {
        m_wxTopLevelWindowExtGetClassInfo = a_GetClassInfo;
    }
};
#endif // __WXUNIVERSAL__/!__WXUNIVERSAL__



#endif
