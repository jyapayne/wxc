#ifndef _WX_GENERIC_PANELG_H_EXT_
#define _WX_GENERIC_PANELG_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxPanelExt;
typedef wxClassInfo* (*wxPanelExtGetClassInfoFunc)(const wxPanelExt* self);

class wxPanelExt: public wxPanel
{
public:
  wxPanelExt(): wxPanel()  {  }
  wxPanelExt(wxWindow* parent, wxWindowID winid = wxID_ANY, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = 0x00080000 | wxBORDER_NONE, wxString const& name = wxString::FromAscii(wxPanelNameStr)): wxPanel(parent, winid, pos, size, style, name)  {  }
  wxPanelExtGetClassInfoFunc m_wxPanelExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxPanel::GetClassInfo();
    if (*m_wxPanelExtGetClassInfo != NULL){
      return m_wxPanelExtGetClassInfo(this);
    }
    else {
      return res;
    }
  }
  wxPanelExt(wxPanelExtGetClassInfoFunc a_GetClassInfo): wxPanel() {
    m_wxPanelExtGetClassInfo = a_GetClassInfo;
  }
};



#endif
