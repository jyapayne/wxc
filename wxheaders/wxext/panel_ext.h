#ifndef _WX_PANEL_H_EXT_
#define _WX_PANEL_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxPanelBaseExt;
typedef void (*wxPanelBaseExtInitDialogFunc)(const wxPanelBaseExt* self);

class wxPanelBaseExt: public wxPanelBase
{
public:
  wxPanelBaseExt(): wxPanelBase()  {  }
  wxPanelBaseExtInitDialogFunc m_wxPanelBaseExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxPanelBase::InitDialog();
    if (*m_wxPanelBaseExtInitDialog != NULL){
      return m_wxPanelBaseExtInitDialog(this);
    }
  }
  wxPanelBaseExt(wxPanelBaseExtInitDialogFunc a_InitDialog): wxPanelBase() {
    m_wxPanelBaseExtInitDialog = a_InitDialog;
  }
};



#endif
