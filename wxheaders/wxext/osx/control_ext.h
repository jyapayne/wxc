#ifndef _WX_OSX_CONTROL_H_EXT_
#define _WX_OSX_CONTROL_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxControlExt;
typedef wxClassInfo* (*wxControlExtGetClassInfoFunc)(const wxControlExt* self);

class wxControlExt: public wxControl
{
public:
  wxControlExtGetClassInfoFunc m_wxControlExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxControl::GetClassInfo();
    if (*m_wxControlExtGetClassInfo != NULL){
      return m_wxControlExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxControlExt(): wxControl()  {  }
  wxControlExt(wxWindow* parent, wxWindowID winid, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = 0, wxValidator const& validator = wxDefaultValidator, wxString const& name = wxString::FromAscii(wxControlNameStr)): wxControl(parent, winid, pos, size, style, validator, name)  {  }
  wxControlExt(wxControlExtGetClassInfoFunc a_GetClassInfo): wxControl() {
    m_wxControlExtGetClassInfo = a_GetClassInfo;
  }
};



#endif
