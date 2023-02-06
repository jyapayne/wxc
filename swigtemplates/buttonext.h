#include <wx/wx.h>
#include <wx/vidmode.h>

class wxButtonBaseExt;
typedef wxWindow* (*wxButtonBaseExtSetDefaultFunc)(const wxButtonBaseExt* self);

class wxButtonBaseExt: public wxButtonBase
{
public:
  wxButtonBaseExt(): wxButtonBase()  {  }
  wxButtonBaseExtSetDefaultFunc m_SetDefault;
  virtual wxWindow* SetDefault() override
  {
    wxWindow* res = wxButtonBase::SetDefault();
    if (*m_SetDefault != NULL){
      return m_SetDefault(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExt(wxButtonBaseExtSetDefaultFunc a_SetDefault): wxButtonBase() {
    m_SetDefault = a_SetDefault;
  }
};

