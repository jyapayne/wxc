#ifndef _WX_CONTROL_H_EXT_
#define _WX_CONTROL_H_EXT_

#include <wx/control.h>

class wxControlBaseExt;
typedef void (*wxControlBaseExtCommandFunc)(const wxControlBaseExt* self, wxCommandEvent& event);
typedef bool (*wxControlBaseExtSetFontFunc)(const wxControlBaseExt* self, wxFont const& font);
typedef void (*wxControlBaseExtDoUpdateWindowUIFunc)(const wxControlBaseExt* self, wxUpdateUIEvent& event);
typedef wxBorder (*wxControlBaseExtGetDefaultBorderFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtDoSetLabelMarkupFunc)(const wxControlBaseExt* self, wxString const& markup);
typedef wxSize (*wxControlBaseExtDoGetSizeFromTextSizeFunc)(const wxControlBaseExt* self, int xlen, int ylen);

class wxControlBaseExt: public wxControlBase
{
public:
  wxControlBaseExt(): wxControlBase()  {  }
  virtual ~wxControlBaseExt() override  {  }
  wxControlBaseExtCommandFunc m_wxControlBaseExtCommand = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxControlBase::Command(event);
    if (*m_wxControlBaseExtCommand != NULL){
      return m_wxControlBaseExtCommand(this, event);
    }
  }
  wxControlBaseExtSetFontFunc m_wxControlBaseExtSetFont = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxControlBase::SetFont(font);
    if (*m_wxControlBaseExtSetFont != NULL){
      return m_wxControlBaseExtSetFont(this, font);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoUpdateWindowUIFunc m_wxControlBaseExtDoUpdateWindowUI = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxControlBase::DoUpdateWindowUI(event);
    if (*m_wxControlBaseExtDoUpdateWindowUI != NULL){
      return m_wxControlBaseExtDoUpdateWindowUI(this, event);
    }
  }
  wxControlBaseExtGetDefaultBorderFunc m_wxControlBaseExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxControlBase::GetDefaultBorder();
    if (*m_wxControlBaseExtGetDefaultBorder != NULL){
      return m_wxControlBaseExtGetDefaultBorder(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoSetLabelMarkupFunc m_wxControlBaseExtDoSetLabelMarkup = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxControlBase::DoSetLabelMarkup(markup);
    if (*m_wxControlBaseExtDoSetLabelMarkup != NULL){
      return m_wxControlBaseExtDoSetLabelMarkup(this, markup);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetSizeFromTextSizeFunc m_wxControlBaseExtDoGetSizeFromTextSize = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxControlBase::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxControlBaseExtDoGetSizeFromTextSize != NULL){
      return m_wxControlBaseExtDoGetSizeFromTextSize(this, xlen, ylen);
    }
    else {
      return res;
    }
  }
  wxControlBaseExt(wxControlBaseExtCommandFunc a_Command, wxControlBaseExtSetFontFunc a_SetFont, wxControlBaseExtDoUpdateWindowUIFunc a_DoUpdateWindowUI, wxControlBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxControlBaseExtDoSetLabelMarkupFunc a_DoSetLabelMarkup, wxControlBaseExtDoGetSizeFromTextSizeFunc a_DoGetSizeFromTextSize): wxControlBase() {
    m_wxControlBaseExtCommand = a_Command;
    m_wxControlBaseExtSetFont = a_SetFont;
    m_wxControlBaseExtDoUpdateWindowUI = a_DoUpdateWindowUI;
    m_wxControlBaseExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxControlBaseExtDoSetLabelMarkup = a_DoSetLabelMarkup;
    m_wxControlBaseExtDoGetSizeFromTextSize = a_DoGetSizeFromTextSize;
  }
};


#if defined(__WXUNIVERSAL__)
    #include "wxext/univ/control_ext.h"
#elif defined(__WXMSW__)
    #include "wxext/msw/control_ext.h"
#elif defined(__WXMOTIF__)
    #include "wxext/motif/control_ext.h"
#elif defined(__WXGTK20__)
    #include "wxext/gtk/control_ext.h"
#elif defined(__WXGTK__)
    #include "wxext/gtk1/control_ext.h"
#elif defined(__WXMAC__)
    #include "wxext/osx/control_ext.h"
#elif defined(__WXQT__)
    #include "wxext/qt/control_ext.h"
#endif

#endif
