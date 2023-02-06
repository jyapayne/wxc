#ifndef _WX_OSX_ANYBUTTON_H_EXT_
#define _WX_OSX_ANYBUTTON_H_EXT_

class wxAnyButtonExt;
typedef void (*wxAnyButtonExtSetLabelFunc)(const wxAnyButtonExt* self, wxString const& label);
typedef wxSize (*wxAnyButtonExtDoGetBestSizeFunc)(const wxAnyButtonExt* self);
typedef wxBitmap (*wxAnyButtonExtDoGetBitmapFunc)(const wxAnyButtonExt* self, wxAnyButtonBase::State which);
typedef void (*wxAnyButtonExtDoSetBitmapFunc)(const wxAnyButtonExt* self, wxBitmapBundle const& bitmapBundle, wxAnyButtonBase::State which);
typedef void (*wxAnyButtonExtDoSetBitmapPositionFunc)(const wxAnyButtonExt* self, wxDirection dir);
typedef void (*wxAnyButtonExtDoSetBitmapMarginsFunc)(const wxAnyButtonExt* self, int x, int y);
typedef bool (*wxAnyButtonExtDoSetLabelMarkupFunc)(const wxAnyButtonExt* self, wxString const& markup);
typedef wxEventTable const* (*wxAnyButtonExtGetEventTableFunc)(const wxAnyButtonExt* self);
typedef wxEventHashTable& (*wxAnyButtonExtGetEventHashTableFunc)(const wxAnyButtonExt* self);

class wxAnyButtonExt: public wxAnyButton
{
public:
  wxAnyButtonExt(): wxAnyButton()  {  }
  wxAnyButtonExtSetLabelFunc m_wxAnyButtonExtSetLabel = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxAnyButton::SetLabel(label);
    if (*m_wxAnyButtonExtSetLabel != NULL){
      return m_wxAnyButtonExtSetLabel(this, label);
    }
  }
  wxAnyButtonExtDoGetBestSizeFunc m_wxAnyButtonExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxAnyButton::DoGetBestSize();
    if (*m_wxAnyButtonExtDoGetBestSize != NULL){
      return m_wxAnyButtonExtDoGetBestSize(this);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetBitmapFunc m_wxAnyButtonExtDoGetBitmap = NULL;
  virtual wxBitmap DoGetBitmap(wxAnyButtonBase::State which) const override
  {
    wxBitmap res = wxAnyButton::DoGetBitmap(which);
    if (*m_wxAnyButtonExtDoGetBitmap != NULL){
      return m_wxAnyButtonExtDoGetBitmap(this, which);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoSetBitmapFunc m_wxAnyButtonExtDoSetBitmap = NULL;
  virtual void DoSetBitmap(wxBitmapBundle const& bitmapBundle, wxAnyButtonBase::State which) override
  {
    wxAnyButton::DoSetBitmap(bitmapBundle, which);
    if (*m_wxAnyButtonExtDoSetBitmap != NULL){
      return m_wxAnyButtonExtDoSetBitmap(this, bitmapBundle, which);
    }
  }
  wxAnyButtonExtDoSetBitmapPositionFunc m_wxAnyButtonExtDoSetBitmapPosition = NULL;
  virtual void DoSetBitmapPosition(wxDirection dir) override
  {
    wxAnyButton::DoSetBitmapPosition(dir);
    if (*m_wxAnyButtonExtDoSetBitmapPosition != NULL){
      return m_wxAnyButtonExtDoSetBitmapPosition(this, dir);
    }
  }
  wxAnyButtonExtDoSetBitmapMarginsFunc m_wxAnyButtonExtDoSetBitmapMargins = NULL;
  virtual void DoSetBitmapMargins(int x, int y) override
  {
    wxAnyButton::DoSetBitmapMargins(x, y);
    if (*m_wxAnyButtonExtDoSetBitmapMargins != NULL){
      return m_wxAnyButtonExtDoSetBitmapMargins(this, x, y);
    }
  }
  wxAnyButtonExtDoSetLabelMarkupFunc m_wxAnyButtonExtDoSetLabelMarkup = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxAnyButton::DoSetLabelMarkup(markup);
    if (*m_wxAnyButtonExtDoSetLabelMarkup != NULL){
      return m_wxAnyButtonExtDoSetLabelMarkup(this, markup);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetEventTableFunc m_wxAnyButtonExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxAnyButton::GetEventTable();
    if (*m_wxAnyButtonExtGetEventTable != NULL){
      return m_wxAnyButtonExtGetEventTable(this);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetEventHashTableFunc m_wxAnyButtonExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxAnyButton::GetEventHashTable();
    if (*m_wxAnyButtonExtGetEventHashTable != NULL){
      return m_wxAnyButtonExtGetEventHashTable(this);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExt(wxAnyButtonExtSetLabelFunc a_SetLabel, wxAnyButtonExtDoGetBestSizeFunc a_DoGetBestSize, wxAnyButtonExtDoGetBitmapFunc a_DoGetBitmap, wxAnyButtonExtDoSetBitmapFunc a_DoSetBitmap, wxAnyButtonExtDoSetBitmapPositionFunc a_DoSetBitmapPosition, wxAnyButtonExtDoSetBitmapMarginsFunc a_DoSetBitmapMargins, wxAnyButtonExtDoSetLabelMarkupFunc a_DoSetLabelMarkup, wxAnyButtonExtGetEventTableFunc a_GetEventTable, wxAnyButtonExtGetEventHashTableFunc a_GetEventHashTable): wxAnyButton() {
    m_wxAnyButtonExtSetLabel = a_SetLabel;
    m_wxAnyButtonExtDoGetBestSize = a_DoGetBestSize;
    m_wxAnyButtonExtDoGetBitmap = a_DoGetBitmap;
    m_wxAnyButtonExtDoSetBitmap = a_DoSetBitmap;
    m_wxAnyButtonExtDoSetBitmapPosition = a_DoSetBitmapPosition;
    m_wxAnyButtonExtDoSetBitmapMargins = a_DoSetBitmapMargins;
    m_wxAnyButtonExtDoSetLabelMarkup = a_DoSetLabelMarkup;
    m_wxAnyButtonExtGetEventTable = a_GetEventTable;
    m_wxAnyButtonExtGetEventHashTable = a_GetEventHashTable;
  }
};



#endif
