#ifndef _WX_ANYBUTTON_H_EXT_
#define _WX_ANYBUTTON_H_EXT_

#include <wx/anybutton.h>
#include <wx/vidmode.h>

class wxAnyButtonBaseExt;
typedef bool (*wxAnyButtonBaseExtShouldInheritColoursFunc)(const wxAnyButtonBaseExt* self);
typedef wxAnyButtonBase::State (*wxAnyButtonBaseExtGetNormalStateFunc)(const wxAnyButtonBaseExt* self);
typedef wxBorder (*wxAnyButtonBaseExtGetDefaultBorderFunc)(const wxAnyButtonBaseExt* self);
typedef wxBitmap (*wxAnyButtonBaseExtDoGetBitmapFunc)(const wxAnyButtonBaseExt* self, wxAnyButtonBase::State param0);
typedef void (*wxAnyButtonBaseExtDoSetBitmapFunc)(const wxAnyButtonBaseExt* self, wxBitmapBundle const& param0, wxAnyButtonBase::State param1);
typedef wxSize (*wxAnyButtonBaseExtDoGetBitmapMarginsFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtDoSetBitmapMarginsFunc)(const wxAnyButtonBaseExt* self, wxCoord param0, wxCoord param1);
typedef void (*wxAnyButtonBaseExtDoSetBitmapPositionFunc)(const wxAnyButtonBaseExt* self, wxDirection param0);
typedef bool (*wxAnyButtonBaseExtDoGetAuthNeededFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtDoSetAuthNeededFunc)(const wxAnyButtonBaseExt* self, bool param0);

class wxAnyButtonBaseExt: public wxAnyButtonBase
{
public:
  wxAnyButtonBaseExt(): wxAnyButtonBase()  {  }
  wxAnyButtonBaseExtShouldInheritColoursFunc m_wxAnyButtonBaseExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxAnyButtonBase::ShouldInheritColours();
    if (*m_wxAnyButtonBaseExtShouldInheritColours != NULL){
      return m_wxAnyButtonBaseExtShouldInheritColours(this);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetNormalStateFunc m_wxAnyButtonBaseExtGetNormalState = NULL;
  virtual wxAnyButtonBase::State GetNormalState() const override
  {
    wxAnyButtonBase::State res = wxAnyButtonBase::GetNormalState();
    if (*m_wxAnyButtonBaseExtGetNormalState != NULL){
      return m_wxAnyButtonBaseExtGetNormalState(this);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetDefaultBorderFunc m_wxAnyButtonBaseExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxAnyButtonBase::GetDefaultBorder();
    if (*m_wxAnyButtonBaseExtGetDefaultBorder != NULL){
      return m_wxAnyButtonBaseExtGetDefaultBorder(this);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetBitmapFunc m_wxAnyButtonBaseExtDoGetBitmap = NULL;
  virtual wxBitmap DoGetBitmap(wxAnyButtonBase::State param0) const override
  {
    wxBitmap res = wxAnyButtonBase::DoGetBitmap(param0);
    if (*m_wxAnyButtonBaseExtDoGetBitmap != NULL){
      return m_wxAnyButtonBaseExtDoGetBitmap(this, param0);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoSetBitmapFunc m_wxAnyButtonBaseExtDoSetBitmap = NULL;
  virtual void DoSetBitmap(wxBitmapBundle const& param0, wxAnyButtonBase::State param1) override
  {
    wxAnyButtonBase::DoSetBitmap(param0, param1);
    if (*m_wxAnyButtonBaseExtDoSetBitmap != NULL){
      return m_wxAnyButtonBaseExtDoSetBitmap(this, param0, param1);
    }
  }
  wxAnyButtonBaseExtDoGetBitmapMarginsFunc m_wxAnyButtonBaseExtDoGetBitmapMargins = NULL;
  virtual wxSize DoGetBitmapMargins() const override
  {
    wxSize res = wxAnyButtonBase::DoGetBitmapMargins();
    if (*m_wxAnyButtonBaseExtDoGetBitmapMargins != NULL){
      return m_wxAnyButtonBaseExtDoGetBitmapMargins(this);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoSetBitmapMarginsFunc m_wxAnyButtonBaseExtDoSetBitmapMargins = NULL;
  virtual void DoSetBitmapMargins(wxCoord param0, wxCoord param1) override
  {
    wxAnyButtonBase::DoSetBitmapMargins(param0, param1);
    if (*m_wxAnyButtonBaseExtDoSetBitmapMargins != NULL){
      return m_wxAnyButtonBaseExtDoSetBitmapMargins(this, param0, param1);
    }
  }
  wxAnyButtonBaseExtDoSetBitmapPositionFunc m_wxAnyButtonBaseExtDoSetBitmapPosition = NULL;
  virtual void DoSetBitmapPosition(wxDirection param0) override
  {
    wxAnyButtonBase::DoSetBitmapPosition(param0);
    if (*m_wxAnyButtonBaseExtDoSetBitmapPosition != NULL){
      return m_wxAnyButtonBaseExtDoSetBitmapPosition(this, param0);
    }
  }
  wxAnyButtonBaseExtDoGetAuthNeededFunc m_wxAnyButtonBaseExtDoGetAuthNeeded = NULL;
  virtual bool DoGetAuthNeeded() const override
  {
    bool res = wxAnyButtonBase::DoGetAuthNeeded();
    if (*m_wxAnyButtonBaseExtDoGetAuthNeeded != NULL){
      return m_wxAnyButtonBaseExtDoGetAuthNeeded(this);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoSetAuthNeededFunc m_wxAnyButtonBaseExtDoSetAuthNeeded = NULL;
  virtual void DoSetAuthNeeded(bool param0) override
  {
    wxAnyButtonBase::DoSetAuthNeeded(param0);
    if (*m_wxAnyButtonBaseExtDoSetAuthNeeded != NULL){
      return m_wxAnyButtonBaseExtDoSetAuthNeeded(this, param0);
    }
  }
  wxAnyButtonBaseExt(wxAnyButtonBaseExtShouldInheritColoursFunc a_ShouldInheritColours, wxAnyButtonBaseExtGetNormalStateFunc a_GetNormalState, wxAnyButtonBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxAnyButtonBaseExtDoGetBitmapFunc a_DoGetBitmap, wxAnyButtonBaseExtDoSetBitmapFunc a_DoSetBitmap, wxAnyButtonBaseExtDoGetBitmapMarginsFunc a_DoGetBitmapMargins, wxAnyButtonBaseExtDoSetBitmapMarginsFunc a_DoSetBitmapMargins, wxAnyButtonBaseExtDoSetBitmapPositionFunc a_DoSetBitmapPosition, wxAnyButtonBaseExtDoGetAuthNeededFunc a_DoGetAuthNeeded, wxAnyButtonBaseExtDoSetAuthNeededFunc a_DoSetAuthNeeded): wxAnyButtonBase() {
    m_wxAnyButtonBaseExtShouldInheritColours = a_ShouldInheritColours;
    m_wxAnyButtonBaseExtGetNormalState = a_GetNormalState;
    m_wxAnyButtonBaseExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxAnyButtonBaseExtDoGetBitmap = a_DoGetBitmap;
    m_wxAnyButtonBaseExtDoSetBitmap = a_DoSetBitmap;
    m_wxAnyButtonBaseExtDoGetBitmapMargins = a_DoGetBitmapMargins;
    m_wxAnyButtonBaseExtDoSetBitmapMargins = a_DoSetBitmapMargins;
    m_wxAnyButtonBaseExtDoSetBitmapPosition = a_DoSetBitmapPosition;
    m_wxAnyButtonBaseExtDoGetAuthNeeded = a_DoGetAuthNeeded;
    m_wxAnyButtonBaseExtDoSetAuthNeeded = a_DoSetAuthNeeded;
  }
};


#if defined(__WXUNIVERSAL__)
    #include "wxext/univ/anybutton_ext.h"
#elif defined(__WXMSW__)
    #include "wxext/msw/anybutton_ext.h"
//#elif defined(__WXMOTIF__)
//    #include "wx/motif/anybutton.h"
#elif defined(__WXGTK20__)
    #include "wxext/gtk/anybutton_ext.h"
//#elif defined(__WXGTK__)
//    #include "wx/gtk1/anybutton.h"
#elif defined(__WXMAC__)
    #include "wxext/osx/anybutton_ext.h"
#elif defined(__WXQT__)
    #include "wxext/qt/anybutton_ext.h"
#else
    typedef wxAnyButtonBaseExt wxAnyButtonExt;
#endif

#endif
