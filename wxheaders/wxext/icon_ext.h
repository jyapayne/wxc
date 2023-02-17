#ifndef _WX_ICON_H_EXT_
#define _WX_ICON_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>
#include <stdexcept>

class wxIconExt;
typedef wxGDIRefData* (*wxIconExtCloneGDIRefData__wxGDIRefDataCPFunc)(const wxIconExt* self, wxGDIRefData const* data, wxGDIRefData* res);
typedef wxImage (*wxIconExtConvertToImageFunc)(const wxIconExt* self, wxImage res);
typedef bool (*wxIconExtCreate__intintintFunc)(const wxIconExt* self, int width, int height, int depth, bool res);
typedef bool (*wxIconExtCreate__voidCPwxBitmapTypeintintintFunc)(const wxIconExt* self, void const* data, wxBitmapType type, int width, int height, int depth, bool res);
typedef bool (*wxIconExtCreate__wxSizeCRintFunc)(const wxIconExt* self, wxSize const& sz, int depth, bool res);
typedef wxGDIRefData* (*wxIconExtCreateGDIRefDataFunc)(const wxIconExt* self, wxGDIRefData* res);
typedef bool (*wxIconExtDoCreate__wxSizeCRdoubleintFunc)(const wxIconExt* self, wxSize const& sz, double scale, int depth, bool res);
typedef wxClassInfo* (*wxIconExtGetClassInfoFunc)(const wxIconExt* self, wxClassInfo* res);
typedef int (*wxIconExtGetDepthFunc)(const wxIconExt* self, int res);
typedef int (*wxIconExtGetHeightFunc)(const wxIconExt* self, int res);
typedef wxMask* (*wxIconExtGetMaskFunc)(const wxIconExt* self, wxMask* res);
typedef wxPalette* (*wxIconExtGetPaletteFunc)(const wxIconExt* self, wxPalette* res);
typedef double (*wxIconExtGetScaleFactorFunc)(const wxIconExt* self, double res);
typedef wxBitmap (*wxIconExtGetSubBitmap__wxRectCRFunc)(const wxIconExt* self, wxRect const& rect, wxBitmap res);
typedef int (*wxIconExtGetWidthFunc)(const wxIconExt* self, int res);
typedef bool (*wxIconExtHasAlphaFunc)(const wxIconExt* self, bool res);
typedef bool (*wxIconExtLoadFile__wxStringCRwxBitmapTypeFunc)(const wxIconExt* self, wxString const& name, wxBitmapType type, bool res);
typedef wxColour (*wxIconExtQuantizeColour__wxColourCRFunc)(const wxIconExt* self, wxColour const& colour, wxColour res);
typedef bool (*wxIconExtSaveFile__wxStringCRwxBitmapTypewxPaletteCPFunc)(const wxIconExt* self, wxString const& name, wxBitmapType type, wxPalette const* cmap, bool res);
typedef void (*wxIconExtSetDepth__intFunc)(const wxIconExt* self, int depth);
typedef void (*wxIconExtSetHeight__intFunc)(const wxIconExt* self, int height);
typedef void (*wxIconExtSetMask__wxMaskPFunc)(const wxIconExt* self, wxMask* mask);
typedef void (*wxIconExtSetPalette__wxPaletteCRFunc)(const wxIconExt* self, wxPalette const& palette);
typedef void (*wxIconExtSetScaleFactor__doubleFunc)(const wxIconExt* self, double scale);
typedef void (*wxIconExtSetWidth__intFunc)(const wxIconExt* self, int width);
typedef bool (*wxIconExtUseAlpha__boolFunc)(const wxIconExt* self, bool use, bool res);

class wxIconExt: public wxIcon
{
public:
  wxIconExt(): wxIcon()  {  }
  wxIconExt(char const* const* bits): wxIcon(bits)  {  }
  wxIconExt(wxString const& filename, wxBitmapType type = wxBITMAP_TYPE_ICON_RESOURCE, int desiredWidth = -1, int desiredHeight = -1): wxIcon(filename, type, desiredWidth, desiredHeight)  {  }
  wxIconExt(wxIconLocation const& loc): wxIcon(loc)  {  }
  wxIconExtCloneGDIRefData__wxGDIRefDataCPFunc m_wxIconExtCloneGDIRefData__wxGDIRefDataCP = NULL;
  virtual wxGDIRefData* CloneGDIRefData(wxGDIRefData const* data) const override
  {
    wxGDIRefData* res = wxIcon::CloneGDIRefData(data);
    if (*m_wxIconExtCloneGDIRefData__wxGDIRefDataCP != NULL){
      return m_wxIconExtCloneGDIRefData__wxGDIRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxIconExtConvertToImageFunc m_wxIconExtConvertToImage = NULL;
  virtual wxImage ConvertToImage() const override
  {
    wxImage res = wxIcon::ConvertToImage();
    if (*m_wxIconExtConvertToImage != NULL){
      return m_wxIconExtConvertToImage(this, res);
    }
    else {
      return res;
    }
  }
  wxIconExtCreate__intintintFunc m_wxIconExtCreate__intintint = NULL;
  virtual bool Create(int width, int height, int depth = (-1)) override
  {
    bool res = wxIcon::Create(width, height, depth);
    if (*m_wxIconExtCreate__intintint != NULL){
      return m_wxIconExtCreate__intintint(this, width, height, depth, res);
    }
    else {
      return res;
    }
  }
  wxIconExtCreate__voidCPwxBitmapTypeintintintFunc m_wxIconExtCreate__voidCPwxBitmapTypeintintint = NULL;
  virtual bool Create(void const* data, wxBitmapType type, int width, int height, int depth = 1) override
  {
    bool res = wxIcon::Create(data, type, width, height, depth);
    if (*m_wxIconExtCreate__voidCPwxBitmapTypeintintint != NULL){
      return m_wxIconExtCreate__voidCPwxBitmapTypeintintint(this, data, type, width, height, depth, res);
    }
    else {
      return res;
    }
  }
  wxIconExtCreate__wxSizeCRintFunc m_wxIconExtCreate__wxSizeCRint = NULL;
  virtual bool Create(wxSize const& sz, int depth = (-1)) override
  {
    bool res = wxIcon::Create(sz, depth);
    if (*m_wxIconExtCreate__wxSizeCRint != NULL){
      return m_wxIconExtCreate__wxSizeCRint(this, sz, depth, res);
    }
    else {
      return res;
    }
  }
  wxIconExtCreateGDIRefDataFunc m_wxIconExtCreateGDIRefData = NULL;
  virtual wxGDIRefData* CreateGDIRefData() const override
  {
    wxGDIRefData* res = wxIcon::CreateGDIRefData();
    if (*m_wxIconExtCreateGDIRefData != NULL){
      return m_wxIconExtCreateGDIRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxIconExtDoCreate__wxSizeCRdoubleintFunc m_wxIconExtDoCreate__wxSizeCRdoubleint = NULL;
  virtual bool DoCreate(wxSize const& sz, double scale, int depth) override
  {
    bool res = wxIcon::DoCreate(sz, scale, depth);
    if (*m_wxIconExtDoCreate__wxSizeCRdoubleint != NULL){
      return m_wxIconExtDoCreate__wxSizeCRdoubleint(this, sz, scale, depth, res);
    }
    else {
      return res;
    }
  }
  wxIconExtGetClassInfoFunc m_wxIconExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxIcon::GetClassInfo();
    if (*m_wxIconExtGetClassInfo != NULL){
      return m_wxIconExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxIconExtGetDepthFunc m_wxIconExtGetDepth = NULL;
  virtual int GetDepth() const override
  {
    int res = wxIcon::GetDepth();
    if (*m_wxIconExtGetDepth != NULL){
      return m_wxIconExtGetDepth(this, res);
    }
    else {
      return res;
    }
  }
  wxIconExtGetHeightFunc m_wxIconExtGetHeight = NULL;
  virtual int GetHeight() const override
  {
    int res = wxIcon::GetHeight();
    if (*m_wxIconExtGetHeight != NULL){
      return m_wxIconExtGetHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxIconExtGetMaskFunc m_wxIconExtGetMask = NULL;
  virtual wxMask* GetMask() const override
  {
    wxMask* res = wxIcon::GetMask();
    if (*m_wxIconExtGetMask != NULL){
      return m_wxIconExtGetMask(this, res);
    }
    else {
      return res;
    }
  }
  wxIconExtGetPaletteFunc m_wxIconExtGetPalette = NULL;
  virtual wxPalette* GetPalette() const override
  {
    wxPalette* res = wxIcon::GetPalette();
    if (*m_wxIconExtGetPalette != NULL){
      return m_wxIconExtGetPalette(this, res);
    }
    else {
      return res;
    }
  }
  wxIconExtGetScaleFactorFunc m_wxIconExtGetScaleFactor = NULL;
  virtual double GetScaleFactor() const override
  {
    double res = wxIcon::GetScaleFactor();
    if (*m_wxIconExtGetScaleFactor != NULL){
      return m_wxIconExtGetScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxIconExtGetSubBitmap__wxRectCRFunc m_wxIconExtGetSubBitmap__wxRectCR = NULL;
  virtual wxBitmap GetSubBitmap(wxRect const& rect) const override
  {
    wxBitmap res = wxIcon::GetSubBitmap(rect);
    if (*m_wxIconExtGetSubBitmap__wxRectCR != NULL){
      return m_wxIconExtGetSubBitmap__wxRectCR(this, rect, res);
    }
    else {
      return res;
    }
  }
  wxIconExtGetWidthFunc m_wxIconExtGetWidth = NULL;
  virtual int GetWidth() const override
  {
    int res = wxIcon::GetWidth();
    if (*m_wxIconExtGetWidth != NULL){
      return m_wxIconExtGetWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxIconExtHasAlphaFunc m_wxIconExtHasAlpha = NULL;
  virtual bool HasAlpha() const override
  {
    bool res = wxIcon::HasAlpha();
    if (*m_wxIconExtHasAlpha != NULL){
      return m_wxIconExtHasAlpha(this, res);
    }
    else {
      return res;
    }
  }
  wxIconExtLoadFile__wxStringCRwxBitmapTypeFunc m_wxIconExtLoadFile__wxStringCRwxBitmapType = NULL;
  virtual bool LoadFile(wxString const& name, wxBitmapType type = wxBITMAP_TYPE_PICT_RESOURCE) override
  {
    bool res = wxIcon::LoadFile(name, type);
    if (*m_wxIconExtLoadFile__wxStringCRwxBitmapType != NULL){
      return m_wxIconExtLoadFile__wxStringCRwxBitmapType(this, name, type, res);
    }
    else {
      return res;
    }
  }
  wxIconExtQuantizeColour__wxColourCRFunc m_wxIconExtQuantizeColour__wxColourCR = NULL;
  virtual wxColour QuantizeColour(wxColour const& colour) const override
  {
    wxColour res = wxIcon::QuantizeColour(colour);
    if (*m_wxIconExtQuantizeColour__wxColourCR != NULL){
      return m_wxIconExtQuantizeColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxIconExtSaveFile__wxStringCRwxBitmapTypewxPaletteCPFunc m_wxIconExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP = NULL;
  virtual bool SaveFile(wxString const& name, wxBitmapType type, wxPalette const* cmap = __null) const override
  {
    bool res = wxIcon::SaveFile(name, type, cmap);
    if (*m_wxIconExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP != NULL){
      return m_wxIconExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP(this, name, type, cmap, res);
    }
    else {
      return res;
    }
  }
  wxIconExtSetDepth__intFunc m_wxIconExtSetDepth__int = NULL;
  virtual void SetDepth(int depth) override
  {
    wxIcon::SetDepth(depth);
    if (*m_wxIconExtSetDepth__int != NULL){
      return m_wxIconExtSetDepth__int(this, depth);
    }
  }
  wxIconExtSetHeight__intFunc m_wxIconExtSetHeight__int = NULL;
  virtual void SetHeight(int height) override
  {
    wxIcon::SetHeight(height);
    if (*m_wxIconExtSetHeight__int != NULL){
      return m_wxIconExtSetHeight__int(this, height);
    }
  }
  wxIconExtSetMask__wxMaskPFunc m_wxIconExtSetMask__wxMaskP = NULL;
  virtual void SetMask(wxMask* mask) override
  {
    wxIcon::SetMask(mask);
    if (*m_wxIconExtSetMask__wxMaskP != NULL){
      return m_wxIconExtSetMask__wxMaskP(this, mask);
    }
  }
  wxIconExtSetPalette__wxPaletteCRFunc m_wxIconExtSetPalette__wxPaletteCR = NULL;
  virtual void SetPalette(wxPalette const& palette) override
  {
    wxIcon::SetPalette(palette);
    if (*m_wxIconExtSetPalette__wxPaletteCR != NULL){
      return m_wxIconExtSetPalette__wxPaletteCR(this, palette);
    }
  }
  wxIconExtSetScaleFactor__doubleFunc m_wxIconExtSetScaleFactor__double = NULL;
  virtual void SetScaleFactor(double scale) override
  {
    wxIcon::SetScaleFactor(scale);
    if (*m_wxIconExtSetScaleFactor__double != NULL){
      return m_wxIconExtSetScaleFactor__double(this, scale);
    }
  }
  wxIconExtSetWidth__intFunc m_wxIconExtSetWidth__int = NULL;
  virtual void SetWidth(int width) override
  {
    wxIcon::SetWidth(width);
    if (*m_wxIconExtSetWidth__int != NULL){
      return m_wxIconExtSetWidth__int(this, width);
    }
  }
  wxIconExtUseAlpha__boolFunc m_wxIconExtUseAlpha__bool = NULL;
  virtual bool UseAlpha(bool use = true) override
  {
    bool res = wxIcon::UseAlpha(use);
    if (*m_wxIconExtUseAlpha__bool != NULL){
      return m_wxIconExtUseAlpha__bool(this, use, res);
    }
    else {
      return res;
    }
  }
  wxIconExt(wxIconExtCloneGDIRefData__wxGDIRefDataCPFunc a_CloneGDIRefData__wxGDIRefDataCP, wxIconExtConvertToImageFunc a_ConvertToImage, wxIconExtCreate__intintintFunc a_Create__intintint, wxIconExtCreate__voidCPwxBitmapTypeintintintFunc a_Create__voidCPwxBitmapTypeintintint, wxIconExtCreate__wxSizeCRintFunc a_Create__wxSizeCRint, wxIconExtCreateGDIRefDataFunc a_CreateGDIRefData, wxIconExtDoCreate__wxSizeCRdoubleintFunc a_DoCreate__wxSizeCRdoubleint, wxIconExtGetClassInfoFunc a_GetClassInfo, wxIconExtGetDepthFunc a_GetDepth, wxIconExtGetHeightFunc a_GetHeight, wxIconExtGetMaskFunc a_GetMask, wxIconExtGetPaletteFunc a_GetPalette, wxIconExtGetScaleFactorFunc a_GetScaleFactor, wxIconExtGetSubBitmap__wxRectCRFunc a_GetSubBitmap__wxRectCR, wxIconExtGetWidthFunc a_GetWidth, wxIconExtHasAlphaFunc a_HasAlpha, wxIconExtLoadFile__wxStringCRwxBitmapTypeFunc a_LoadFile__wxStringCRwxBitmapType, wxIconExtQuantizeColour__wxColourCRFunc a_QuantizeColour__wxColourCR, wxIconExtSaveFile__wxStringCRwxBitmapTypewxPaletteCPFunc a_SaveFile__wxStringCRwxBitmapTypewxPaletteCP, wxIconExtSetDepth__intFunc a_SetDepth__int, wxIconExtSetHeight__intFunc a_SetHeight__int, wxIconExtSetMask__wxMaskPFunc a_SetMask__wxMaskP, wxIconExtSetPalette__wxPaletteCRFunc a_SetPalette__wxPaletteCR, wxIconExtSetScaleFactor__doubleFunc a_SetScaleFactor__double, wxIconExtSetWidth__intFunc a_SetWidth__int, wxIconExtUseAlpha__boolFunc a_UseAlpha__bool): wxIcon() {
    m_wxIconExtCloneGDIRefData__wxGDIRefDataCP = a_CloneGDIRefData__wxGDIRefDataCP;
    m_wxIconExtConvertToImage = a_ConvertToImage;
    m_wxIconExtCreate__intintint = a_Create__intintint;
    m_wxIconExtCreate__voidCPwxBitmapTypeintintint = a_Create__voidCPwxBitmapTypeintintint;
    m_wxIconExtCreate__wxSizeCRint = a_Create__wxSizeCRint;
    m_wxIconExtCreateGDIRefData = a_CreateGDIRefData;
    m_wxIconExtDoCreate__wxSizeCRdoubleint = a_DoCreate__wxSizeCRdoubleint;
    m_wxIconExtGetClassInfo = a_GetClassInfo;
    m_wxIconExtGetDepth = a_GetDepth;
    m_wxIconExtGetHeight = a_GetHeight;
    m_wxIconExtGetMask = a_GetMask;
    m_wxIconExtGetPalette = a_GetPalette;
    m_wxIconExtGetScaleFactor = a_GetScaleFactor;
    m_wxIconExtGetSubBitmap__wxRectCR = a_GetSubBitmap__wxRectCR;
    m_wxIconExtGetWidth = a_GetWidth;
    m_wxIconExtHasAlpha = a_HasAlpha;
    m_wxIconExtLoadFile__wxStringCRwxBitmapType = a_LoadFile__wxStringCRwxBitmapType;
    m_wxIconExtQuantizeColour__wxColourCR = a_QuantizeColour__wxColourCR;
    m_wxIconExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP = a_SaveFile__wxStringCRwxBitmapTypewxPaletteCP;
    m_wxIconExtSetDepth__int = a_SetDepth__int;
    m_wxIconExtSetHeight__int = a_SetHeight__int;
    m_wxIconExtSetMask__wxMaskP = a_SetMask__wxMaskP;
    m_wxIconExtSetPalette__wxPaletteCR = a_SetPalette__wxPaletteCR;
    m_wxIconExtSetScaleFactor__double = a_SetScaleFactor__double;
    m_wxIconExtSetWidth__int = a_SetWidth__int;
    m_wxIconExtUseAlpha__bool = a_UseAlpha__bool;
  }
};



#endif
