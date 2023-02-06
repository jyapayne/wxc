#ifndef _WX_OSX_BUTTON_H_EXT_
#define _WX_OSX_BUTTON_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxButtonExt;
typedef void (*wxButtonExtSetLabelFunc)(const wxButtonExt* self, wxString const& label);
typedef wxWindow* (*wxButtonExtSetDefaultFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtCommandFunc)(const wxButtonExt* self, wxCommandEvent& event);
typedef bool (*wxButtonExtOSXHandleClickedFunc)(const wxButtonExt* self, double timestampsec);
typedef wxClassInfo* (*wxButtonExtGetClassInfoFunc)(const wxButtonExt* self);

class wxButtonExt: public wxButton
{
public:
  wxButtonExt(): wxButton()  {  }
  wxButtonExt(wxWindow* parent, wxWindowID id, wxString const& label = wxEmptyString, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = 0, wxValidator const& validator = wxDefaultValidator, wxString const& name = wxASCII_STR(wxButtonNameStr)): wxButton(parent, id, label, pos, size, style, validator, name)  {  }
  wxButtonExtSetLabelFunc m_wxButtonExtSetLabel = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxButton::SetLabel(label);
    if (*m_wxButtonExtSetLabel != NULL){
      return m_wxButtonExtSetLabel(this, label);
    }
  }
  wxButtonExtSetDefaultFunc m_wxButtonExtSetDefault = NULL;
  virtual wxWindow* SetDefault() override
  {
    wxWindow* res = wxButton::SetDefault();
    if (*m_wxButtonExtSetDefault != NULL){
      return m_wxButtonExtSetDefault(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtCommandFunc m_wxButtonExtCommand = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxButton::Command(event);
    if (*m_wxButtonExtCommand != NULL){
      return m_wxButtonExtCommand(this, event);
    }
  }
  wxButtonExtOSXHandleClickedFunc m_wxButtonExtOSXHandleClicked = NULL;
  virtual bool OSXHandleClicked(double timestampsec) override
  {
    bool res = wxButton::OSXHandleClicked(timestampsec);
    if (*m_wxButtonExtOSXHandleClicked != NULL){
      return m_wxButtonExtOSXHandleClicked(this, timestampsec);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetClassInfoFunc m_wxButtonExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxButton::GetClassInfo();
    if (*m_wxButtonExtGetClassInfo != NULL){
      return m_wxButtonExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxButtonExt(wxButtonExtSetLabelFunc a_SetLabel, wxButtonExtSetDefaultFunc a_SetDefault, wxButtonExtCommandFunc a_Command, wxButtonExtOSXHandleClickedFunc a_OSXHandleClicked, wxButtonExtGetClassInfoFunc a_GetClassInfo): wxButton() {
    m_wxButtonExtSetLabel = a_SetLabel;
    m_wxButtonExtSetDefault = a_SetDefault;
    m_wxButtonExtCommand = a_Command;
    m_wxButtonExtOSXHandleClicked = a_OSXHandleClicked;
    m_wxButtonExtGetClassInfo = a_GetClassInfo;
  }
};



#endif
