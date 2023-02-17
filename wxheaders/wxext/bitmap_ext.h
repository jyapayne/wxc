#ifndef _WX_BITMAP_H_EXT_
#define _WX_BITMAP_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>
#include <stdexcept>

class wxMaskBaseExt;
typedef wxObjectRefData* (*wxMaskBaseExtCloneRefData__wxObjectRefDataCPFunc)(const wxMaskBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxMaskBaseExtCreateRefDataFunc)(const wxMaskBaseExt* self, wxObjectRefData* res);
typedef void (*wxMaskBaseExtFreeDataFunc)(const wxMaskBaseExt* self);
typedef wxClassInfo* (*wxMaskBaseExtGetClassInfoFunc)(const wxMaskBaseExt* self, wxClassInfo* res);
typedef bool (*wxMaskBaseExtInitFromColour__wxBitmapCRwxColourCRFunc)(const wxMaskBaseExt* self, wxBitmap const& bitmap, wxColour const& colour);
typedef bool (*wxMaskBaseExtInitFromMonoBitmap__wxBitmapCRFunc)(const wxMaskBaseExt* self, wxBitmap const& bitmap);
class wxBitmapHandlerExt;
typedef wxObjectRefData* (*wxBitmapHandlerExtCloneRefData__wxObjectRefDataCPFunc)(const wxBitmapHandlerExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef bool (*wxBitmapHandlerExtCreate__wxBitmapPvoidCPwxBitmapTypeintintintFunc)(const wxBitmapHandlerExt* self, wxBitmap* bitmap, void const* data, wxBitmapType type, int width, int height, int depth, bool res);
typedef wxObjectRefData* (*wxBitmapHandlerExtCreateRefDataFunc)(const wxBitmapHandlerExt* self, wxObjectRefData* res);
typedef wxClassInfo* (*wxBitmapHandlerExtGetClassInfoFunc)(const wxBitmapHandlerExt* self, wxClassInfo* res);
typedef bool (*wxBitmapHandlerExtLoadFile__wxBitmapPwxStringCRwxBitmapTypeintintFunc)(const wxBitmapHandlerExt* self, wxBitmap* bitmap, wxString const& name, wxBitmapType type, int desiredWidth, int desiredHeight, bool res);
typedef bool (*wxBitmapHandlerExtSaveFile__wxBitmapCPwxStringCRwxBitmapTypewxPaletteCPFunc)(const wxBitmapHandlerExt* self, wxBitmap const* bitmap, wxString const& name, wxBitmapType type, wxPalette const* palette, bool res);
class wxBitmapBaseExt;
typedef wxImage (*wxBitmapBaseExtConvertToImageFunc)(const wxBitmapBaseExt* self);
typedef bool (*wxBitmapBaseExtCreate__intintintFunc)(const wxBitmapBaseExt* self, int width, int height, int depth);
typedef bool (*wxBitmapBaseExtCreate__wxSizeCRintFunc)(const wxBitmapBaseExt* self, wxSize const& sz, int depth);
typedef bool (*wxBitmapBaseExtDoCreate__wxSizeCRdoubleintFunc)(const wxBitmapBaseExt* self, wxSize const& sz, double scale, int depth, bool res);
typedef wxClassInfo* (*wxBitmapBaseExtGetClassInfoFunc)(const wxBitmapBaseExt* self, wxClassInfo* res);
typedef int (*wxBitmapBaseExtGetDepthFunc)(const wxBitmapBaseExt* self);
typedef int (*wxBitmapBaseExtGetHeightFunc)(const wxBitmapBaseExt* self);
typedef wxMask* (*wxBitmapBaseExtGetMaskFunc)(const wxBitmapBaseExt* self);
typedef wxPalette* (*wxBitmapBaseExtGetPaletteFunc)(const wxBitmapBaseExt* self);
typedef double (*wxBitmapBaseExtGetScaleFactorFunc)(const wxBitmapBaseExt* self, double res);
typedef wxBitmap (*wxBitmapBaseExtGetSubBitmap__wxRectCRFunc)(const wxBitmapBaseExt* self, wxRect const& rect);
typedef int (*wxBitmapBaseExtGetWidthFunc)(const wxBitmapBaseExt* self);
typedef bool (*wxBitmapBaseExtHasAlphaFunc)(const wxBitmapBaseExt* self, bool res);
typedef bool (*wxBitmapBaseExtLoadFile__wxStringCRwxBitmapTypeFunc)(const wxBitmapBaseExt* self, wxString const& name, wxBitmapType type);
typedef wxColour (*wxBitmapBaseExtQuantizeColour__wxColourCRFunc)(const wxBitmapBaseExt* self, wxColour const& colour, wxColour res);
typedef bool (*wxBitmapBaseExtSaveFile__wxStringCRwxBitmapTypewxPaletteCPFunc)(const wxBitmapBaseExt* self, wxString const& name, wxBitmapType type, wxPalette const* palette);
typedef void (*wxBitmapBaseExtSetDepth__intFunc)(const wxBitmapBaseExt* self, int depth);
typedef void (*wxBitmapBaseExtSetHeight__intFunc)(const wxBitmapBaseExt* self, int height);
typedef void (*wxBitmapBaseExtSetMask__wxMaskPFunc)(const wxBitmapBaseExt* self, wxMask* mask);
typedef void (*wxBitmapBaseExtSetPalette__wxPaletteCRFunc)(const wxBitmapBaseExt* self, wxPalette const& palette);
typedef void (*wxBitmapBaseExtSetScaleFactor__doubleFunc)(const wxBitmapBaseExt* self, double scale);
typedef void (*wxBitmapBaseExtSetWidth__intFunc)(const wxBitmapBaseExt* self, int width);
typedef bool (*wxBitmapBaseExtUseAlpha__boolFunc)(const wxBitmapBaseExt* self, bool use, bool res);
class wxMaskExt;
typedef wxObjectRefData* (*wxMaskExtCloneRefData__wxObjectRefDataCPFunc)(const wxMaskExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxMaskExtCreateRefDataFunc)(const wxMaskExt* self, wxObjectRefData* res);
typedef void (*wxMaskExtFreeDataFunc)(const wxMaskExt* self);
typedef wxClassInfo* (*wxMaskExtGetClassInfoFunc)(const wxMaskExt* self, wxClassInfo* res);
typedef bool (*wxMaskExtInitFromColour__wxBitmapCRwxColourCRFunc)(const wxMaskExt* self, wxBitmap const& bitmap, wxColour const& colour);
typedef bool (*wxMaskExtInitFromMonoBitmap__wxBitmapCRFunc)(const wxMaskExt* self, wxBitmap const& bitmap);
class wxBitmapExt;
typedef wxGDIRefData* (*wxBitmapExtCloneGDIRefData__wxGDIRefDataCPFunc)(const wxBitmapExt* self, wxGDIRefData const* data, wxGDIRefData* res);
typedef wxImage (*wxBitmapExtConvertToImageFunc)(const wxBitmapExt* self);
typedef bool (*wxBitmapExtCreate__intintintFunc)(const wxBitmapExt* self, int width, int height, int depth);
typedef bool (*wxBitmapExtCreate__voidCPwxBitmapTypeintintintFunc)(const wxBitmapExt* self, void const* data, wxBitmapType type, int width, int height, int depth, bool res);
typedef bool (*wxBitmapExtCreate__wxSizeCRintFunc)(const wxBitmapExt* self, wxSize const& sz, int depth);
typedef wxGDIRefData* (*wxBitmapExtCreateGDIRefDataFunc)(const wxBitmapExt* self, wxGDIRefData* res);
typedef bool (*wxBitmapExtDoCreate__wxSizeCRdoubleintFunc)(const wxBitmapExt* self, wxSize const& sz, double scale, int depth, bool res);
typedef wxClassInfo* (*wxBitmapExtGetClassInfoFunc)(const wxBitmapExt* self, wxClassInfo* res);
typedef int (*wxBitmapExtGetDepthFunc)(const wxBitmapExt* self);
typedef int (*wxBitmapExtGetHeightFunc)(const wxBitmapExt* self);
typedef wxMask* (*wxBitmapExtGetMaskFunc)(const wxBitmapExt* self);
typedef wxPalette* (*wxBitmapExtGetPaletteFunc)(const wxBitmapExt* self);
typedef double (*wxBitmapExtGetScaleFactorFunc)(const wxBitmapExt* self, double res);
typedef wxBitmap (*wxBitmapExtGetSubBitmap__wxRectCRFunc)(const wxBitmapExt* self, wxRect const& rect);
typedef int (*wxBitmapExtGetWidthFunc)(const wxBitmapExt* self);
typedef bool (*wxBitmapExtHasAlphaFunc)(const wxBitmapExt* self, bool res);
typedef bool (*wxBitmapExtLoadFile__wxStringCRwxBitmapTypeFunc)(const wxBitmapExt* self, wxString const& name, wxBitmapType type);
typedef wxColour (*wxBitmapExtQuantizeColour__wxColourCRFunc)(const wxBitmapExt* self, wxColour const& colour, wxColour res);
typedef bool (*wxBitmapExtSaveFile__wxStringCRwxBitmapTypewxPaletteCPFunc)(const wxBitmapExt* self, wxString const& name, wxBitmapType type, wxPalette const* palette);
typedef void (*wxBitmapExtSetDepth__intFunc)(const wxBitmapExt* self, int depth);
typedef void (*wxBitmapExtSetHeight__intFunc)(const wxBitmapExt* self, int height);
typedef void (*wxBitmapExtSetMask__wxMaskPFunc)(const wxBitmapExt* self, wxMask* mask);
typedef void (*wxBitmapExtSetPalette__wxPaletteCRFunc)(const wxBitmapExt* self, wxPalette const& palette);
typedef void (*wxBitmapExtSetScaleFactor__doubleFunc)(const wxBitmapExt* self, double scale);
typedef void (*wxBitmapExtSetWidth__intFunc)(const wxBitmapExt* self, int width);
typedef bool (*wxBitmapExtUseAlpha__boolFunc)(const wxBitmapExt* self, bool use, bool res);

class wxMaskBaseExt: public wxMaskBase
{
public:
  wxMaskBaseExtCloneRefData__wxObjectRefDataCPFunc m_wxMaskBaseExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxMaskBase::CloneRefData(data);
    if (*m_wxMaskBaseExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxMaskBaseExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxMaskBaseExtCreateRefDataFunc m_wxMaskBaseExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxMaskBase::CreateRefData();
    if (*m_wxMaskBaseExtCreateRefData != NULL){
      return m_wxMaskBaseExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxMaskBaseExtFreeDataFunc m_wxMaskBaseExtFreeData = NULL;
  virtual void FreeData() override
  {
    if (*m_wxMaskBaseExtFreeData != NULL){
      return m_wxMaskBaseExtFreeData(this);
    }
  }
  wxMaskBaseExtGetClassInfoFunc m_wxMaskBaseExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxMaskBase::GetClassInfo();
    if (*m_wxMaskBaseExtGetClassInfo != NULL){
      return m_wxMaskBaseExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxMaskBaseExtInitFromColour__wxBitmapCRwxColourCRFunc m_wxMaskBaseExtInitFromColour__wxBitmapCRwxColourCR = NULL;
  virtual bool InitFromColour(wxBitmap const& bitmap, wxColour const& colour) override
  {
    if (*m_wxMaskBaseExtInitFromColour__wxBitmapCRwxColourCR != NULL){
      return m_wxMaskBaseExtInitFromColour__wxBitmapCRwxColourCR(this, bitmap, colour);
    }
    else {
      return false;
    }
  }
  wxMaskBaseExtInitFromMonoBitmap__wxBitmapCRFunc m_wxMaskBaseExtInitFromMonoBitmap__wxBitmapCR = NULL;
  virtual bool InitFromMonoBitmap(wxBitmap const& bitmap) override
  {
    if (*m_wxMaskBaseExtInitFromMonoBitmap__wxBitmapCR != NULL){
      return m_wxMaskBaseExtInitFromMonoBitmap__wxBitmapCR(this, bitmap);
    }
    else {
      return false;
    }
  }
  wxMaskBaseExt(wxMaskBaseExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxMaskBaseExtCreateRefDataFunc a_CreateRefData, wxMaskBaseExtFreeDataFunc a_FreeData, wxMaskBaseExtGetClassInfoFunc a_GetClassInfo, wxMaskBaseExtInitFromColour__wxBitmapCRwxColourCRFunc a_InitFromColour__wxBitmapCRwxColourCR, wxMaskBaseExtInitFromMonoBitmap__wxBitmapCRFunc a_InitFromMonoBitmap__wxBitmapCR) {
    m_wxMaskBaseExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxMaskBaseExtCreateRefData = a_CreateRefData;
    m_wxMaskBaseExtFreeData = a_FreeData;
    m_wxMaskBaseExtGetClassInfo = a_GetClassInfo;
    m_wxMaskBaseExtInitFromColour__wxBitmapCRwxColourCR = a_InitFromColour__wxBitmapCRwxColourCR;
    m_wxMaskBaseExtInitFromMonoBitmap__wxBitmapCR = a_InitFromMonoBitmap__wxBitmapCR;
  }
};

class wxBitmapHandlerExt: public wxBitmapHandler
{
public:
  wxBitmapHandlerExt(): wxBitmapHandler()  {  }
  virtual ~wxBitmapHandlerExt()  {  }
  wxBitmapHandlerExtCloneRefData__wxObjectRefDataCPFunc m_wxBitmapHandlerExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxBitmapHandler::CloneRefData(data);
    if (*m_wxBitmapHandlerExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxBitmapHandlerExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxBitmapHandlerExtCreate__wxBitmapPvoidCPwxBitmapTypeintintintFunc m_wxBitmapHandlerExtCreate__wxBitmapPvoidCPwxBitmapTypeintintint = NULL;
  virtual bool Create(wxBitmap* bitmap, void const* data, wxBitmapType type, int width, int height, int depth = 1) override
  {
    bool res = wxBitmapHandler::Create(bitmap, data, type, width, height, depth);
    if (*m_wxBitmapHandlerExtCreate__wxBitmapPvoidCPwxBitmapTypeintintint != NULL){
      return m_wxBitmapHandlerExtCreate__wxBitmapPvoidCPwxBitmapTypeintintint(this, bitmap, data, type, width, height, depth, res);
    }
    else {
      return res;
    }
  }
  wxBitmapHandlerExtCreateRefDataFunc m_wxBitmapHandlerExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxBitmapHandler::CreateRefData();
    if (*m_wxBitmapHandlerExtCreateRefData != NULL){
      return m_wxBitmapHandlerExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxBitmapHandlerExtGetClassInfoFunc m_wxBitmapHandlerExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxBitmapHandler::GetClassInfo();
    if (*m_wxBitmapHandlerExtGetClassInfo != NULL){
      return m_wxBitmapHandlerExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxBitmapHandlerExtLoadFile__wxBitmapPwxStringCRwxBitmapTypeintintFunc m_wxBitmapHandlerExtLoadFile__wxBitmapPwxStringCRwxBitmapTypeintint = NULL;
  virtual bool LoadFile(wxBitmap* bitmap, wxString const& name, wxBitmapType type, int desiredWidth, int desiredHeight) override
  {
    bool res = wxBitmapHandler::LoadFile(bitmap, name, type, desiredWidth, desiredHeight);
    if (*m_wxBitmapHandlerExtLoadFile__wxBitmapPwxStringCRwxBitmapTypeintint != NULL){
      return m_wxBitmapHandlerExtLoadFile__wxBitmapPwxStringCRwxBitmapTypeintint(this, bitmap, name, type, desiredWidth, desiredHeight, res);
    }
    else {
      return res;
    }
  }
  wxBitmapHandlerExtSaveFile__wxBitmapCPwxStringCRwxBitmapTypewxPaletteCPFunc m_wxBitmapHandlerExtSaveFile__wxBitmapCPwxStringCRwxBitmapTypewxPaletteCP = NULL;
  virtual bool SaveFile(wxBitmap const* bitmap, wxString const& name, wxBitmapType type, wxPalette const* palette = __null) const override
  {
    bool res = wxBitmapHandler::SaveFile(bitmap, name, type, palette);
    if (*m_wxBitmapHandlerExtSaveFile__wxBitmapCPwxStringCRwxBitmapTypewxPaletteCP != NULL){
      return m_wxBitmapHandlerExtSaveFile__wxBitmapCPwxStringCRwxBitmapTypewxPaletteCP(this, bitmap, name, type, palette, res);
    }
    else {
      return res;
    }
  }
  wxBitmapHandlerExt(wxBitmapHandlerExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxBitmapHandlerExtCreate__wxBitmapPvoidCPwxBitmapTypeintintintFunc a_Create__wxBitmapPvoidCPwxBitmapTypeintintint, wxBitmapHandlerExtCreateRefDataFunc a_CreateRefData, wxBitmapHandlerExtGetClassInfoFunc a_GetClassInfo, wxBitmapHandlerExtLoadFile__wxBitmapPwxStringCRwxBitmapTypeintintFunc a_LoadFile__wxBitmapPwxStringCRwxBitmapTypeintint, wxBitmapHandlerExtSaveFile__wxBitmapCPwxStringCRwxBitmapTypewxPaletteCPFunc a_SaveFile__wxBitmapCPwxStringCRwxBitmapTypewxPaletteCP): wxBitmapHandler() {
    m_wxBitmapHandlerExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxBitmapHandlerExtCreate__wxBitmapPvoidCPwxBitmapTypeintintint = a_Create__wxBitmapPvoidCPwxBitmapTypeintintint;
    m_wxBitmapHandlerExtCreateRefData = a_CreateRefData;
    m_wxBitmapHandlerExtGetClassInfo = a_GetClassInfo;
    m_wxBitmapHandlerExtLoadFile__wxBitmapPwxStringCRwxBitmapTypeintint = a_LoadFile__wxBitmapPwxStringCRwxBitmapTypeintint;
    m_wxBitmapHandlerExtSaveFile__wxBitmapCPwxStringCRwxBitmapTypewxPaletteCP = a_SaveFile__wxBitmapCPwxStringCRwxBitmapTypewxPaletteCP;
  }
};

class wxBitmapBaseExt: public wxBitmapBase
{
public:
  wxBitmapBaseExtConvertToImageFunc m_wxBitmapBaseExtConvertToImage = NULL;
  virtual wxImage ConvertToImage() const override
  {
    if (*m_wxBitmapBaseExtConvertToImage != NULL){
      return m_wxBitmapBaseExtConvertToImage(this);
    }
    else {
      throw std::runtime_error("ConvertToImage is not implemented.");
    }
  }
  wxBitmapBaseExtCreate__intintintFunc m_wxBitmapBaseExtCreate__intintint = NULL;
  virtual bool Create(int width, int height, int depth = (-1)) override
  {
    if (*m_wxBitmapBaseExtCreate__intintint != NULL){
      return m_wxBitmapBaseExtCreate__intintint(this, width, height, depth);
    }
    else {
      return false;
    }
  }
  wxBitmapBaseExtCreate__wxSizeCRintFunc m_wxBitmapBaseExtCreate__wxSizeCRint = NULL;
  virtual bool Create(wxSize const& sz, int depth = (-1)) override
  {
    if (*m_wxBitmapBaseExtCreate__wxSizeCRint != NULL){
      return m_wxBitmapBaseExtCreate__wxSizeCRint(this, sz, depth);
    }
    else {
      return false;
    }
  }
  wxBitmapBaseExtDoCreate__wxSizeCRdoubleintFunc m_wxBitmapBaseExtDoCreate__wxSizeCRdoubleint = NULL;
  virtual bool DoCreate(wxSize const& sz, double scale, int depth) override
  {
    bool res = wxBitmapBase::DoCreate(sz, scale, depth);
    if (*m_wxBitmapBaseExtDoCreate__wxSizeCRdoubleint != NULL){
      return m_wxBitmapBaseExtDoCreate__wxSizeCRdoubleint(this, sz, scale, depth, res);
    }
    else {
      return res;
    }
  }
  wxBitmapBaseExtGetClassInfoFunc m_wxBitmapBaseExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxBitmapBase::GetClassInfo();
    if (*m_wxBitmapBaseExtGetClassInfo != NULL){
      return m_wxBitmapBaseExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxBitmapBaseExtGetDepthFunc m_wxBitmapBaseExtGetDepth = NULL;
  virtual int GetDepth() const override
  {
    if (*m_wxBitmapBaseExtGetDepth != NULL){
      return m_wxBitmapBaseExtGetDepth(this);
    }
    else {
      return 0;
    }
  }
  wxBitmapBaseExtGetHeightFunc m_wxBitmapBaseExtGetHeight = NULL;
  virtual int GetHeight() const override
  {
    if (*m_wxBitmapBaseExtGetHeight != NULL){
      return m_wxBitmapBaseExtGetHeight(this);
    }
    else {
      return 0;
    }
  }
  wxBitmapBaseExtGetMaskFunc m_wxBitmapBaseExtGetMask = NULL;
  virtual wxMask* GetMask() const override
  {
    if (*m_wxBitmapBaseExtGetMask != NULL){
      return m_wxBitmapBaseExtGetMask(this);
    }
    else {
      return NULL;
    }
  }
  wxBitmapBaseExtGetPaletteFunc m_wxBitmapBaseExtGetPalette = NULL;
  virtual wxPalette* GetPalette() const override
  {
    if (*m_wxBitmapBaseExtGetPalette != NULL){
      return m_wxBitmapBaseExtGetPalette(this);
    }
    else {
      return NULL;
    }
  }
  wxBitmapBaseExtGetScaleFactorFunc m_wxBitmapBaseExtGetScaleFactor = NULL;
  virtual double GetScaleFactor() const override
  {
    double res = wxBitmapBase::GetScaleFactor();
    if (*m_wxBitmapBaseExtGetScaleFactor != NULL){
      return m_wxBitmapBaseExtGetScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxBitmapBaseExtGetSubBitmap__wxRectCRFunc m_wxBitmapBaseExtGetSubBitmap__wxRectCR = NULL;
  virtual wxBitmap GetSubBitmap(wxRect const& rect) const override
  {
    if (*m_wxBitmapBaseExtGetSubBitmap__wxRectCR != NULL){
      return m_wxBitmapBaseExtGetSubBitmap__wxRectCR(this, rect);
    }
    else {
      throw std::runtime_error("GetSubBitmap is not implemented.");
    }
  }
  wxBitmapBaseExtGetWidthFunc m_wxBitmapBaseExtGetWidth = NULL;
  virtual int GetWidth() const override
  {
    if (*m_wxBitmapBaseExtGetWidth != NULL){
      return m_wxBitmapBaseExtGetWidth(this);
    }
    else {
      return 0;
    }
  }
  wxBitmapBaseExtHasAlphaFunc m_wxBitmapBaseExtHasAlpha = NULL;
  virtual bool HasAlpha() const override
  {
    bool res = wxBitmapBase::HasAlpha();
    if (*m_wxBitmapBaseExtHasAlpha != NULL){
      return m_wxBitmapBaseExtHasAlpha(this, res);
    }
    else {
      return res;
    }
  }
  wxBitmapBaseExtLoadFile__wxStringCRwxBitmapTypeFunc m_wxBitmapBaseExtLoadFile__wxStringCRwxBitmapType = NULL;
  virtual bool LoadFile(wxString const& name, wxBitmapType type) override
  {
    if (*m_wxBitmapBaseExtLoadFile__wxStringCRwxBitmapType != NULL){
      return m_wxBitmapBaseExtLoadFile__wxStringCRwxBitmapType(this, name, type);
    }
    else {
      return false;
    }
  }
  wxBitmapBaseExtQuantizeColour__wxColourCRFunc m_wxBitmapBaseExtQuantizeColour__wxColourCR = NULL;
  virtual wxColour QuantizeColour(wxColour const& colour) const override
  {
    wxColour res = wxBitmapBase::QuantizeColour(colour);
    if (*m_wxBitmapBaseExtQuantizeColour__wxColourCR != NULL){
      return m_wxBitmapBaseExtQuantizeColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxBitmapBaseExtSaveFile__wxStringCRwxBitmapTypewxPaletteCPFunc m_wxBitmapBaseExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP = NULL;
  virtual bool SaveFile(wxString const& name, wxBitmapType type, wxPalette const* palette = __null) const override
  {
    if (*m_wxBitmapBaseExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP != NULL){
      return m_wxBitmapBaseExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP(this, name, type, palette);
    }
    else {
      return false;
    }
  }
  wxBitmapBaseExtSetDepth__intFunc m_wxBitmapBaseExtSetDepth__int = NULL;
  virtual void SetDepth(int depth) override
  {
    if (*m_wxBitmapBaseExtSetDepth__int != NULL){
      return m_wxBitmapBaseExtSetDepth__int(this, depth);
    }
  }
  wxBitmapBaseExtSetHeight__intFunc m_wxBitmapBaseExtSetHeight__int = NULL;
  virtual void SetHeight(int height) override
  {
    if (*m_wxBitmapBaseExtSetHeight__int != NULL){
      return m_wxBitmapBaseExtSetHeight__int(this, height);
    }
  }
  wxBitmapBaseExtSetMask__wxMaskPFunc m_wxBitmapBaseExtSetMask__wxMaskP = NULL;
  virtual void SetMask(wxMask* mask) override
  {
    if (*m_wxBitmapBaseExtSetMask__wxMaskP != NULL){
      return m_wxBitmapBaseExtSetMask__wxMaskP(this, mask);
    }
  }
  wxBitmapBaseExtSetPalette__wxPaletteCRFunc m_wxBitmapBaseExtSetPalette__wxPaletteCR = NULL;
  virtual void SetPalette(wxPalette const& palette) override
  {
    if (*m_wxBitmapBaseExtSetPalette__wxPaletteCR != NULL){
      return m_wxBitmapBaseExtSetPalette__wxPaletteCR(this, palette);
    }
  }
  wxBitmapBaseExtSetScaleFactor__doubleFunc m_wxBitmapBaseExtSetScaleFactor__double = NULL;
  virtual void SetScaleFactor(double scale) override
  {
    wxBitmapBase::SetScaleFactor(scale);
    if (*m_wxBitmapBaseExtSetScaleFactor__double != NULL){
      return m_wxBitmapBaseExtSetScaleFactor__double(this, scale);
    }
  }
  wxBitmapBaseExtSetWidth__intFunc m_wxBitmapBaseExtSetWidth__int = NULL;
  virtual void SetWidth(int width) override
  {
    if (*m_wxBitmapBaseExtSetWidth__int != NULL){
      return m_wxBitmapBaseExtSetWidth__int(this, width);
    }
  }
  wxBitmapBaseExtUseAlpha__boolFunc m_wxBitmapBaseExtUseAlpha__bool = NULL;
  virtual bool UseAlpha(bool use = true) override
  {
    bool res = wxBitmapBase::UseAlpha(use);
    if (*m_wxBitmapBaseExtUseAlpha__bool != NULL){
      return m_wxBitmapBaseExtUseAlpha__bool(this, use, res);
    }
    else {
      return res;
    }
  }
  wxBitmapBaseExt(wxBitmapBaseExtConvertToImageFunc a_ConvertToImage, wxBitmapBaseExtCreate__intintintFunc a_Create__intintint, wxBitmapBaseExtCreate__wxSizeCRintFunc a_Create__wxSizeCRint, wxBitmapBaseExtDoCreate__wxSizeCRdoubleintFunc a_DoCreate__wxSizeCRdoubleint, wxBitmapBaseExtGetClassInfoFunc a_GetClassInfo, wxBitmapBaseExtGetDepthFunc a_GetDepth, wxBitmapBaseExtGetHeightFunc a_GetHeight, wxBitmapBaseExtGetMaskFunc a_GetMask, wxBitmapBaseExtGetPaletteFunc a_GetPalette, wxBitmapBaseExtGetScaleFactorFunc a_GetScaleFactor, wxBitmapBaseExtGetSubBitmap__wxRectCRFunc a_GetSubBitmap__wxRectCR, wxBitmapBaseExtGetWidthFunc a_GetWidth, wxBitmapBaseExtHasAlphaFunc a_HasAlpha, wxBitmapBaseExtLoadFile__wxStringCRwxBitmapTypeFunc a_LoadFile__wxStringCRwxBitmapType, wxBitmapBaseExtQuantizeColour__wxColourCRFunc a_QuantizeColour__wxColourCR, wxBitmapBaseExtSaveFile__wxStringCRwxBitmapTypewxPaletteCPFunc a_SaveFile__wxStringCRwxBitmapTypewxPaletteCP, wxBitmapBaseExtSetDepth__intFunc a_SetDepth__int, wxBitmapBaseExtSetHeight__intFunc a_SetHeight__int, wxBitmapBaseExtSetMask__wxMaskPFunc a_SetMask__wxMaskP, wxBitmapBaseExtSetPalette__wxPaletteCRFunc a_SetPalette__wxPaletteCR, wxBitmapBaseExtSetScaleFactor__doubleFunc a_SetScaleFactor__double, wxBitmapBaseExtSetWidth__intFunc a_SetWidth__int, wxBitmapBaseExtUseAlpha__boolFunc a_UseAlpha__bool) {
    m_wxBitmapBaseExtConvertToImage = a_ConvertToImage;
    m_wxBitmapBaseExtCreate__intintint = a_Create__intintint;
    m_wxBitmapBaseExtCreate__wxSizeCRint = a_Create__wxSizeCRint;
    m_wxBitmapBaseExtDoCreate__wxSizeCRdoubleint = a_DoCreate__wxSizeCRdoubleint;
    m_wxBitmapBaseExtGetClassInfo = a_GetClassInfo;
    m_wxBitmapBaseExtGetDepth = a_GetDepth;
    m_wxBitmapBaseExtGetHeight = a_GetHeight;
    m_wxBitmapBaseExtGetMask = a_GetMask;
    m_wxBitmapBaseExtGetPalette = a_GetPalette;
    m_wxBitmapBaseExtGetScaleFactor = a_GetScaleFactor;
    m_wxBitmapBaseExtGetSubBitmap__wxRectCR = a_GetSubBitmap__wxRectCR;
    m_wxBitmapBaseExtGetWidth = a_GetWidth;
    m_wxBitmapBaseExtHasAlpha = a_HasAlpha;
    m_wxBitmapBaseExtLoadFile__wxStringCRwxBitmapType = a_LoadFile__wxStringCRwxBitmapType;
    m_wxBitmapBaseExtQuantizeColour__wxColourCR = a_QuantizeColour__wxColourCR;
    m_wxBitmapBaseExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP = a_SaveFile__wxStringCRwxBitmapTypewxPaletteCP;
    m_wxBitmapBaseExtSetDepth__int = a_SetDepth__int;
    m_wxBitmapBaseExtSetHeight__int = a_SetHeight__int;
    m_wxBitmapBaseExtSetMask__wxMaskP = a_SetMask__wxMaskP;
    m_wxBitmapBaseExtSetPalette__wxPaletteCR = a_SetPalette__wxPaletteCR;
    m_wxBitmapBaseExtSetScaleFactor__double = a_SetScaleFactor__double;
    m_wxBitmapBaseExtSetWidth__int = a_SetWidth__int;
    m_wxBitmapBaseExtUseAlpha__bool = a_UseAlpha__bool;
  }
};

class wxMaskExt: public wxMask
{
public:
  wxMaskExt(): wxMask()  {  }
  wxMaskExt(wxMask const& mask): wxMask(mask)  {  }
  wxMaskExt(wxBitmap const& bitmap, wxColour const& colour): wxMask(bitmap, colour)  {  }
  wxMaskExt(wxBitmap const& bitmap): wxMask(bitmap)  {  }
  virtual ~wxMaskExt() override  {  }
  wxMaskExtCloneRefData__wxObjectRefDataCPFunc m_wxMaskExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxMask::CloneRefData(data);
    if (*m_wxMaskExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxMaskExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxMaskExtCreateRefDataFunc m_wxMaskExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxMask::CreateRefData();
    if (*m_wxMaskExtCreateRefData != NULL){
      return m_wxMaskExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxMaskExtFreeDataFunc m_wxMaskExtFreeData = NULL;
  virtual void FreeData() override
  {
    if (*m_wxMaskExtFreeData != NULL){
      return m_wxMaskExtFreeData(this);
    }
  }
  wxMaskExtGetClassInfoFunc m_wxMaskExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxMask::GetClassInfo();
    if (*m_wxMaskExtGetClassInfo != NULL){
      return m_wxMaskExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxMaskExtInitFromColour__wxBitmapCRwxColourCRFunc m_wxMaskExtInitFromColour__wxBitmapCRwxColourCR = NULL;
  virtual bool InitFromColour(wxBitmap const& bitmap, wxColour const& colour) override
  {
    if (*m_wxMaskExtInitFromColour__wxBitmapCRwxColourCR != NULL){
      return m_wxMaskExtInitFromColour__wxBitmapCRwxColourCR(this, bitmap, colour);
    }
    else {
      return false;
    }
  }
  wxMaskExtInitFromMonoBitmap__wxBitmapCRFunc m_wxMaskExtInitFromMonoBitmap__wxBitmapCR = NULL;
  virtual bool InitFromMonoBitmap(wxBitmap const& bitmap) override
  {
    if (*m_wxMaskExtInitFromMonoBitmap__wxBitmapCR != NULL){
      return m_wxMaskExtInitFromMonoBitmap__wxBitmapCR(this, bitmap);
    }
    else {
      return false;
    }
  }
  wxMaskExt(wxMaskExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxMaskExtCreateRefDataFunc a_CreateRefData, wxMaskExtFreeDataFunc a_FreeData, wxMaskExtGetClassInfoFunc a_GetClassInfo, wxMaskExtInitFromColour__wxBitmapCRwxColourCRFunc a_InitFromColour__wxBitmapCRwxColourCR, wxMaskExtInitFromMonoBitmap__wxBitmapCRFunc a_InitFromMonoBitmap__wxBitmapCR): wxMask() {
    m_wxMaskExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxMaskExtCreateRefData = a_CreateRefData;
    m_wxMaskExtFreeData = a_FreeData;
    m_wxMaskExtGetClassInfo = a_GetClassInfo;
    m_wxMaskExtInitFromColour__wxBitmapCRwxColourCR = a_InitFromColour__wxBitmapCRwxColourCR;
    m_wxMaskExtInitFromMonoBitmap__wxBitmapCR = a_InitFromMonoBitmap__wxBitmapCR;
  }
};

class wxBitmapExt: public wxBitmap
{
public:
  wxBitmapExt(): wxBitmap()  {  }
  wxBitmapExt(char const bits[], int width, int height, int depth = 1): wxBitmap(bits, width, height, depth)  {  }
  wxBitmapExt(char const* const* bits): wxBitmap(bits)  {  }
  wxBitmapExt(wxString const& name, wxBitmapType type = wxBITMAP_TYPE_PICT_RESOURCE): wxBitmap(name, type)  {  }
  wxBitmapExt(void const* data, wxBitmapType type, int width, int height, int depth = 1): wxBitmap(data, type, width, height, depth)  {  }
  wxBitmapExt(CGImageRef image, double scale = 1.0): wxBitmap(image, scale)  {  }
  wxBitmapExt(WXImage image): wxBitmap(image)  {  }
  wxBitmapExt(CGContextRef bitmapcontext): wxBitmap(bitmapcontext)  {  }
  wxBitmapExt(int width, int height, wxDC const& dc): wxBitmap(width, height, dc)  {  }
  wxBitmapExt(int width, int height, int depth = -1): wxBitmap(width, height, depth)  {  }
  wxBitmapExt(wxSize const& sz, int depth = -1): wxBitmap(sz, depth)  {  }
  wxBitmapExt(wxImage const& image, int depth = -1, double scale = 1.0): wxBitmap(image, depth, scale)  {  }
  wxBitmapExt(wxImage const& image, wxDC const& dc): wxBitmap(image, dc)  {  }
  wxBitmapExt(wxIcon const& icon): wxBitmap(icon)  {  }
  wxBitmapExt(wxCursor const& cursor): wxBitmap(cursor)  {  }
  virtual ~wxBitmapExt()  {  }
  wxBitmapExtCloneGDIRefData__wxGDIRefDataCPFunc m_wxBitmapExtCloneGDIRefData__wxGDIRefDataCP = NULL;
  virtual wxGDIRefData* CloneGDIRefData(wxGDIRefData const* data) const override
  {
    wxGDIRefData* res = wxBitmap::CloneGDIRefData(data);
    if (*m_wxBitmapExtCloneGDIRefData__wxGDIRefDataCP != NULL){
      return m_wxBitmapExtCloneGDIRefData__wxGDIRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxBitmapExtConvertToImageFunc m_wxBitmapExtConvertToImage = NULL;
  virtual wxImage ConvertToImage() const override
  {
    if (*m_wxBitmapExtConvertToImage != NULL){
      return m_wxBitmapExtConvertToImage(this);
    }
    else {
      throw std::runtime_error("ConvertToImage is not implemented.");
    }
  }
  wxBitmapExtCreate__intintintFunc m_wxBitmapExtCreate__intintint = NULL;
  virtual bool Create(int width, int height, int depth = (-1)) override
  {
    if (*m_wxBitmapExtCreate__intintint != NULL){
      return m_wxBitmapExtCreate__intintint(this, width, height, depth);
    }
    else {
      return false;
    }
  }
  wxBitmapExtCreate__voidCPwxBitmapTypeintintintFunc m_wxBitmapExtCreate__voidCPwxBitmapTypeintintint = NULL;
  virtual bool Create(void const* data, wxBitmapType type, int width, int height, int depth = 1) override
  {
    bool res = wxBitmap::Create(data, type, width, height, depth);
    if (*m_wxBitmapExtCreate__voidCPwxBitmapTypeintintint != NULL){
      return m_wxBitmapExtCreate__voidCPwxBitmapTypeintintint(this, data, type, width, height, depth, res);
    }
    else {
      return res;
    }
  }
  wxBitmapExtCreate__wxSizeCRintFunc m_wxBitmapExtCreate__wxSizeCRint = NULL;
  virtual bool Create(wxSize const& sz, int depth = (-1)) override
  {
    if (*m_wxBitmapExtCreate__wxSizeCRint != NULL){
      return m_wxBitmapExtCreate__wxSizeCRint(this, sz, depth);
    }
    else {
      return false;
    }
  }
  wxBitmapExtCreateGDIRefDataFunc m_wxBitmapExtCreateGDIRefData = NULL;
  virtual wxGDIRefData* CreateGDIRefData() const override
  {
    wxGDIRefData* res = wxBitmap::CreateGDIRefData();
    if (*m_wxBitmapExtCreateGDIRefData != NULL){
      return m_wxBitmapExtCreateGDIRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxBitmapExtDoCreate__wxSizeCRdoubleintFunc m_wxBitmapExtDoCreate__wxSizeCRdoubleint = NULL;
  virtual bool DoCreate(wxSize const& sz, double scale, int depth) override
  {
    bool res = wxBitmap::DoCreate(sz, scale, depth);
    if (*m_wxBitmapExtDoCreate__wxSizeCRdoubleint != NULL){
      return m_wxBitmapExtDoCreate__wxSizeCRdoubleint(this, sz, scale, depth, res);
    }
    else {
      return res;
    }
  }
  wxBitmapExtGetClassInfoFunc m_wxBitmapExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxBitmap::GetClassInfo();
    if (*m_wxBitmapExtGetClassInfo != NULL){
      return m_wxBitmapExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxBitmapExtGetDepthFunc m_wxBitmapExtGetDepth = NULL;
  virtual int GetDepth() const override
  {
    if (*m_wxBitmapExtGetDepth != NULL){
      return m_wxBitmapExtGetDepth(this);
    }
    else {
      return 0;
    }
  }
  wxBitmapExtGetHeightFunc m_wxBitmapExtGetHeight = NULL;
  virtual int GetHeight() const override
  {
    if (*m_wxBitmapExtGetHeight != NULL){
      return m_wxBitmapExtGetHeight(this);
    }
    else {
      return 0;
    }
  }
  wxBitmapExtGetMaskFunc m_wxBitmapExtGetMask = NULL;
  virtual wxMask* GetMask() const override
  {
    if (*m_wxBitmapExtGetMask != NULL){
      return m_wxBitmapExtGetMask(this);
    }
    else {
      return NULL;
    }
  }
  wxBitmapExtGetPaletteFunc m_wxBitmapExtGetPalette = NULL;
  virtual wxPalette* GetPalette() const override
  {
    if (*m_wxBitmapExtGetPalette != NULL){
      return m_wxBitmapExtGetPalette(this);
    }
    else {
      return NULL;
    }
  }
  wxBitmapExtGetScaleFactorFunc m_wxBitmapExtGetScaleFactor = NULL;
  virtual double GetScaleFactor() const override
  {
    double res = wxBitmap::GetScaleFactor();
    if (*m_wxBitmapExtGetScaleFactor != NULL){
      return m_wxBitmapExtGetScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxBitmapExtGetSubBitmap__wxRectCRFunc m_wxBitmapExtGetSubBitmap__wxRectCR = NULL;
  virtual wxBitmap GetSubBitmap(wxRect const& rect) const override
  {
    if (*m_wxBitmapExtGetSubBitmap__wxRectCR != NULL){
      return m_wxBitmapExtGetSubBitmap__wxRectCR(this, rect);
    }
    else {
      throw std::runtime_error("GetSubBitmap is not implemented.");
    }
  }
  wxBitmapExtGetWidthFunc m_wxBitmapExtGetWidth = NULL;
  virtual int GetWidth() const override
  {
    if (*m_wxBitmapExtGetWidth != NULL){
      return m_wxBitmapExtGetWidth(this);
    }
    else {
      return 0;
    }
  }
  wxBitmapExtHasAlphaFunc m_wxBitmapExtHasAlpha = NULL;
  virtual bool HasAlpha() const override
  {
    bool res = wxBitmap::HasAlpha();
    if (*m_wxBitmapExtHasAlpha != NULL){
      return m_wxBitmapExtHasAlpha(this, res);
    }
    else {
      return res;
    }
  }
  wxBitmapExtLoadFile__wxStringCRwxBitmapTypeFunc m_wxBitmapExtLoadFile__wxStringCRwxBitmapType = NULL;
  virtual bool LoadFile(wxString const& name, wxBitmapType type) override
  {
    if (*m_wxBitmapExtLoadFile__wxStringCRwxBitmapType != NULL){
      return m_wxBitmapExtLoadFile__wxStringCRwxBitmapType(this, name, type);
    }
    else {
      return false;
    }
  }
  wxBitmapExtQuantizeColour__wxColourCRFunc m_wxBitmapExtQuantizeColour__wxColourCR = NULL;
  virtual wxColour QuantizeColour(wxColour const& colour) const override
  {
    wxColour res = wxBitmap::QuantizeColour(colour);
    if (*m_wxBitmapExtQuantizeColour__wxColourCR != NULL){
      return m_wxBitmapExtQuantizeColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxBitmapExtSaveFile__wxStringCRwxBitmapTypewxPaletteCPFunc m_wxBitmapExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP = NULL;
  virtual bool SaveFile(wxString const& name, wxBitmapType type, wxPalette const* palette = __null) const override
  {
    if (*m_wxBitmapExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP != NULL){
      return m_wxBitmapExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP(this, name, type, palette);
    }
    else {
      return false;
    }
  }
  wxBitmapExtSetDepth__intFunc m_wxBitmapExtSetDepth__int = NULL;
  virtual void SetDepth(int depth) override
  {
    if (*m_wxBitmapExtSetDepth__int != NULL){
      return m_wxBitmapExtSetDepth__int(this, depth);
    }
  }
  wxBitmapExtSetHeight__intFunc m_wxBitmapExtSetHeight__int = NULL;
  virtual void SetHeight(int height) override
  {
    if (*m_wxBitmapExtSetHeight__int != NULL){
      return m_wxBitmapExtSetHeight__int(this, height);
    }
  }
  wxBitmapExtSetMask__wxMaskPFunc m_wxBitmapExtSetMask__wxMaskP = NULL;
  virtual void SetMask(wxMask* mask) override
  {
    if (*m_wxBitmapExtSetMask__wxMaskP != NULL){
      return m_wxBitmapExtSetMask__wxMaskP(this, mask);
    }
  }
  wxBitmapExtSetPalette__wxPaletteCRFunc m_wxBitmapExtSetPalette__wxPaletteCR = NULL;
  virtual void SetPalette(wxPalette const& palette) override
  {
    if (*m_wxBitmapExtSetPalette__wxPaletteCR != NULL){
      return m_wxBitmapExtSetPalette__wxPaletteCR(this, palette);
    }
  }
  wxBitmapExtSetScaleFactor__doubleFunc m_wxBitmapExtSetScaleFactor__double = NULL;
  virtual void SetScaleFactor(double scale) override
  {
    wxBitmap::SetScaleFactor(scale);
    if (*m_wxBitmapExtSetScaleFactor__double != NULL){
      return m_wxBitmapExtSetScaleFactor__double(this, scale);
    }
  }
  wxBitmapExtSetWidth__intFunc m_wxBitmapExtSetWidth__int = NULL;
  virtual void SetWidth(int width) override
  {
    if (*m_wxBitmapExtSetWidth__int != NULL){
      return m_wxBitmapExtSetWidth__int(this, width);
    }
  }
  wxBitmapExtUseAlpha__boolFunc m_wxBitmapExtUseAlpha__bool = NULL;
  virtual bool UseAlpha(bool use = true) override
  {
    bool res = wxBitmap::UseAlpha(use);
    if (*m_wxBitmapExtUseAlpha__bool != NULL){
      return m_wxBitmapExtUseAlpha__bool(this, use, res);
    }
    else {
      return res;
    }
  }
  wxBitmapExt(wxBitmapExtCloneGDIRefData__wxGDIRefDataCPFunc a_CloneGDIRefData__wxGDIRefDataCP, wxBitmapExtConvertToImageFunc a_ConvertToImage, wxBitmapExtCreate__intintintFunc a_Create__intintint, wxBitmapExtCreate__voidCPwxBitmapTypeintintintFunc a_Create__voidCPwxBitmapTypeintintint, wxBitmapExtCreate__wxSizeCRintFunc a_Create__wxSizeCRint, wxBitmapExtCreateGDIRefDataFunc a_CreateGDIRefData, wxBitmapExtDoCreate__wxSizeCRdoubleintFunc a_DoCreate__wxSizeCRdoubleint, wxBitmapExtGetClassInfoFunc a_GetClassInfo, wxBitmapExtGetDepthFunc a_GetDepth, wxBitmapExtGetHeightFunc a_GetHeight, wxBitmapExtGetMaskFunc a_GetMask, wxBitmapExtGetPaletteFunc a_GetPalette, wxBitmapExtGetScaleFactorFunc a_GetScaleFactor, wxBitmapExtGetSubBitmap__wxRectCRFunc a_GetSubBitmap__wxRectCR, wxBitmapExtGetWidthFunc a_GetWidth, wxBitmapExtHasAlphaFunc a_HasAlpha, wxBitmapExtLoadFile__wxStringCRwxBitmapTypeFunc a_LoadFile__wxStringCRwxBitmapType, wxBitmapExtQuantizeColour__wxColourCRFunc a_QuantizeColour__wxColourCR, wxBitmapExtSaveFile__wxStringCRwxBitmapTypewxPaletteCPFunc a_SaveFile__wxStringCRwxBitmapTypewxPaletteCP, wxBitmapExtSetDepth__intFunc a_SetDepth__int, wxBitmapExtSetHeight__intFunc a_SetHeight__int, wxBitmapExtSetMask__wxMaskPFunc a_SetMask__wxMaskP, wxBitmapExtSetPalette__wxPaletteCRFunc a_SetPalette__wxPaletteCR, wxBitmapExtSetScaleFactor__doubleFunc a_SetScaleFactor__double, wxBitmapExtSetWidth__intFunc a_SetWidth__int, wxBitmapExtUseAlpha__boolFunc a_UseAlpha__bool): wxBitmap() {
    m_wxBitmapExtCloneGDIRefData__wxGDIRefDataCP = a_CloneGDIRefData__wxGDIRefDataCP;
    m_wxBitmapExtConvertToImage = a_ConvertToImage;
    m_wxBitmapExtCreate__intintint = a_Create__intintint;
    m_wxBitmapExtCreate__voidCPwxBitmapTypeintintint = a_Create__voidCPwxBitmapTypeintintint;
    m_wxBitmapExtCreate__wxSizeCRint = a_Create__wxSizeCRint;
    m_wxBitmapExtCreateGDIRefData = a_CreateGDIRefData;
    m_wxBitmapExtDoCreate__wxSizeCRdoubleint = a_DoCreate__wxSizeCRdoubleint;
    m_wxBitmapExtGetClassInfo = a_GetClassInfo;
    m_wxBitmapExtGetDepth = a_GetDepth;
    m_wxBitmapExtGetHeight = a_GetHeight;
    m_wxBitmapExtGetMask = a_GetMask;
    m_wxBitmapExtGetPalette = a_GetPalette;
    m_wxBitmapExtGetScaleFactor = a_GetScaleFactor;
    m_wxBitmapExtGetSubBitmap__wxRectCR = a_GetSubBitmap__wxRectCR;
    m_wxBitmapExtGetWidth = a_GetWidth;
    m_wxBitmapExtHasAlpha = a_HasAlpha;
    m_wxBitmapExtLoadFile__wxStringCRwxBitmapType = a_LoadFile__wxStringCRwxBitmapType;
    m_wxBitmapExtQuantizeColour__wxColourCR = a_QuantizeColour__wxColourCR;
    m_wxBitmapExtSaveFile__wxStringCRwxBitmapTypewxPaletteCP = a_SaveFile__wxStringCRwxBitmapTypewxPaletteCP;
    m_wxBitmapExtSetDepth__int = a_SetDepth__int;
    m_wxBitmapExtSetHeight__int = a_SetHeight__int;
    m_wxBitmapExtSetMask__wxMaskP = a_SetMask__wxMaskP;
    m_wxBitmapExtSetPalette__wxPaletteCR = a_SetPalette__wxPaletteCR;
    m_wxBitmapExtSetScaleFactor__double = a_SetScaleFactor__double;
    m_wxBitmapExtSetWidth__int = a_SetWidth__int;
    m_wxBitmapExtUseAlpha__bool = a_UseAlpha__bool;
  }
};



#endif
