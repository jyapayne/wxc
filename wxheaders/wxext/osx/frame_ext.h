#ifndef _WX_OSX_FRAME_H_EXT_
#define _WX_OSX_FRAME_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxFrameExt;
typedef wxPoint (*wxFrameExtGetClientAreaOriginFunc)(const wxFrameExt* self);
typedef bool (*wxFrameExtShowFunc)(const wxFrameExt* self, bool show);
typedef bool (*wxFrameExtEnableFunc)(const wxFrameExt* self, bool enable);
typedef wxToolBar* (*wxFrameExtCreateToolBarFunc)(const wxFrameExt* self, long style, wxWindowID id, wxString const& name);
typedef void (*wxFrameExtSetToolBarFunc)(const wxFrameExt* self, wxToolBar* toolbar);
typedef wxStatusBar* (*wxFrameExtOnCreateStatusBarFunc)(const wxFrameExt* self, int number, long style, wxWindowID id, wxString const& name);
typedef void (*wxFrameExtSetStatusBarFunc)(const wxFrameExt* self, wxStatusBar* statbar);
typedef void (*wxFrameExtPositionToolBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtPositionStatusBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtDoGetClientSizeFunc)(const wxFrameExt* self, int* width, int* height);
typedef void (*wxFrameExtDoSetClientSizeFunc)(const wxFrameExt* self, int width, int height);
typedef void (*wxFrameExtDetachMenuBarFunc)(const wxFrameExt* self);
typedef void (*wxFrameExtAttachMenuBarFunc)(const wxFrameExt* self, wxMenuBar* menubar);
typedef bool (*wxFrameExtMacIsChildOfClientAreaFunc)(const wxFrameExt* self, wxWindow const* child);
typedef wxClassInfo* (*wxFrameExtGetClassInfoFunc)(const wxFrameExt* self);

class wxFrameExt: public wxFrame
{
public:
  wxFrameExt(): wxFrame()  {  }
  wxFrameExt(wxWindow* parent, wxWindowID id, wxString const& title, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, wxString const& name = wxASCII_STR(wxFrameNameStr)): wxFrame(parent, id, title, pos, size, style, name)  {
  }
  wxFrameExtGetClientAreaOriginFunc m_wxFrameExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxFrame::GetClientAreaOrigin();
    if (*m_wxFrameExtGetClientAreaOrigin != NULL){
      return m_wxFrameExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxFrameExtShowFunc m_wxFrameExtShow = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxFrame::Show(show);
    if (*m_wxFrameExtShow != NULL){
      return m_wxFrameExtShow(this, show);
    }
    else {
      return res;
    }
  }
  wxFrameExtEnableFunc m_wxFrameExtEnable = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxFrame::Enable(enable);
    if (*m_wxFrameExtEnable != NULL){
      return m_wxFrameExtEnable(this, enable);
    }
    else {
      return res;
    }
  }
  wxFrameExtCreateToolBarFunc m_wxFrameExtCreateToolBar = NULL;
  virtual wxToolBar* CreateToolBar(long style = -1, wxWindowID id = -1, wxString const& name = wxString::FromAscii(wxToolBarNameStr)) override
  {
    wxToolBar* res = wxFrame::CreateToolBar(style, id, name);
    if (*m_wxFrameExtCreateToolBar != NULL){
      return m_wxFrameExtCreateToolBar(this, style, id, name);
    }
    else {
      return res;
    }
  }
  wxFrameExtSetToolBarFunc m_wxFrameExtSetToolBar = NULL;
  virtual void SetToolBar(wxToolBar* toolbar) override
  {
    wxFrame::SetToolBar(toolbar);
    if (*m_wxFrameExtSetToolBar != NULL){
      return m_wxFrameExtSetToolBar(this, toolbar);
    }
  }
  wxFrameExtOnCreateStatusBarFunc m_wxFrameExtOnCreateStatusBar = NULL;
  virtual wxStatusBar* OnCreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, wxWindowID id = 0, wxString const& name = wxASCII_STR(wxStatusLineNameStr)) override
  {
    wxStatusBar* res = wxFrame::OnCreateStatusBar(number, style, id, name);
    if (*m_wxFrameExtOnCreateStatusBar != NULL){
      return m_wxFrameExtOnCreateStatusBar(this, number, style, id, name);
    }
    else {
      return res;
    }
  }
  wxFrameExtSetStatusBarFunc m_wxFrameExtSetStatusBar = NULL;
  virtual void SetStatusBar(wxStatusBar* statbar) override
  {
    wxFrame::SetStatusBar(statbar);
    if (*m_wxFrameExtSetStatusBar != NULL){
      return m_wxFrameExtSetStatusBar(this, statbar);
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
  wxFrameExtPositionStatusBarFunc m_wxFrameExtPositionStatusBar = NULL;
  virtual void PositionStatusBar() override
  {
    wxFrame::PositionStatusBar();
    if (*m_wxFrameExtPositionStatusBar != NULL){
      return m_wxFrameExtPositionStatusBar(this);
    }
  }
  wxFrameExtDoGetClientSizeFunc m_wxFrameExtDoGetClientSize = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxFrame::DoGetClientSize(width, height);
    if (*m_wxFrameExtDoGetClientSize != NULL){
      return m_wxFrameExtDoGetClientSize(this, width, height);
    }
  }
  wxFrameExtDoSetClientSizeFunc m_wxFrameExtDoSetClientSize = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxFrame::DoSetClientSize(width, height);
    if (*m_wxFrameExtDoSetClientSize != NULL){
      return m_wxFrameExtDoSetClientSize(this, width, height);
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
  wxFrameExtAttachMenuBarFunc m_wxFrameExtAttachMenuBar = NULL;
  virtual void AttachMenuBar(wxMenuBar* menubar) override
  {
    wxFrame::AttachMenuBar(menubar);
    if (*m_wxFrameExtAttachMenuBar != NULL){
      return m_wxFrameExtAttachMenuBar(this, menubar);
    }
  }
  wxFrameExtMacIsChildOfClientAreaFunc m_wxFrameExtMacIsChildOfClientArea = NULL;
  virtual bool MacIsChildOfClientArea(wxWindow const* child) const override
  {
    bool res = wxFrame::MacIsChildOfClientArea(child);
    if (*m_wxFrameExtMacIsChildOfClientArea != NULL){
      return m_wxFrameExtMacIsChildOfClientArea(this, child);
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
      return m_wxFrameExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxFrameExt(wxFrameExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxFrameExtShowFunc a_Show, wxFrameExtEnableFunc a_Enable, wxFrameExtCreateToolBarFunc a_CreateToolBar, wxFrameExtSetToolBarFunc a_SetToolBar, wxFrameExtOnCreateStatusBarFunc a_OnCreateStatusBar, wxFrameExtSetStatusBarFunc a_SetStatusBar, wxFrameExtPositionToolBarFunc a_PositionToolBar, wxFrameExtPositionStatusBarFunc a_PositionStatusBar, wxFrameExtDoGetClientSizeFunc a_DoGetClientSize, wxFrameExtDoSetClientSizeFunc a_DoSetClientSize, wxFrameExtDetachMenuBarFunc a_DetachMenuBar, wxFrameExtAttachMenuBarFunc a_AttachMenuBar, wxFrameExtMacIsChildOfClientAreaFunc a_MacIsChildOfClientArea, wxFrameExtGetClassInfoFunc a_GetClassInfo): wxFrame() {
    m_wxFrameExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxFrameExtShow = a_Show;
    m_wxFrameExtEnable = a_Enable;
    m_wxFrameExtCreateToolBar = a_CreateToolBar;
    m_wxFrameExtSetToolBar = a_SetToolBar;
    m_wxFrameExtOnCreateStatusBar = a_OnCreateStatusBar;
    m_wxFrameExtSetStatusBar = a_SetStatusBar;
    m_wxFrameExtPositionToolBar = a_PositionToolBar;
    m_wxFrameExtPositionStatusBar = a_PositionStatusBar;
    m_wxFrameExtDoGetClientSize = a_DoGetClientSize;
    m_wxFrameExtDoSetClientSize = a_DoSetClientSize;
    m_wxFrameExtDetachMenuBar = a_DetachMenuBar;
    m_wxFrameExtAttachMenuBar = a_AttachMenuBar;
    m_wxFrameExtMacIsChildOfClientArea = a_MacIsChildOfClientArea;
    m_wxFrameExtGetClassInfo = a_GetClassInfo;
  }
};



#endif
