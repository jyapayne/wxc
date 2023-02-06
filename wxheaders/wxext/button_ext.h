#ifndef _WX_BUTTON_H_EXT_
#define _WX_BUTTON_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxButtonBaseExt;
typedef wxWindow* (*wxButtonBaseExtSetDefaultFunc)(const wxButtonBaseExt* self);

class wxButtonBaseExt: public wxButtonBase
{
public:
  wxButtonBaseExt(): wxButtonBase()  {  }
  wxButtonBaseExtSetDefaultFunc m_wxButtonBaseExtSetDefault = NULL;
  virtual wxWindow* SetDefault() override
  {
    wxWindow* res = wxButtonBase::SetDefault();
    if (*m_wxButtonBaseExtSetDefault != NULL){
      return m_wxButtonBaseExtSetDefault(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExt(wxButtonBaseExtSetDefaultFunc a_SetDefault): wxButtonBase() {
    m_wxButtonBaseExtSetDefault = a_SetDefault;
  }
};



#endif
