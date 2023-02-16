#ifndef _WX_COLOUR_H_EXT_
#define _WX_COLOUR_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxColourBaseExt;
typedef wxColourBase::ChannelType (*wxColourBaseExtAlphaFunc)(const wxColourBaseExt* self, wxColourBase::ChannelType res);
typedef wxColourBase::ChannelType (*wxColourBaseExtBlueFunc)(const wxColourBaseExt* self);
typedef wxGDIRefData* (*wxColourBaseExtCloneGDIRefDatawxGDIRefDataCPFunc)(const wxColourBaseExt* self, wxGDIRefData const* param0, wxGDIRefData* res);
typedef wxGDIRefData* (*wxColourBaseExtCreateGDIRefDataFunc)(const wxColourBaseExt* self, wxGDIRefData* res);
typedef bool (*wxColourBaseExtFromStringwxStringCRFunc)(const wxColourBaseExt* self, wxString const& s, bool res);
typedef wxString (*wxColourBaseExtGetAsStringlongFunc)(const wxColourBaseExt* self, long flags, wxString res);
typedef wxColourBase::ChannelType (*wxColourBaseExtGreenFunc)(const wxColourBaseExt* self);
typedef void (*wxColourBaseExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypeFunc)(const wxColourBaseExt* self, wxColourBase::ChannelType r, wxColourBase::ChannelType g, wxColourBase::ChannelType b, wxColourBase::ChannelType a);
typedef bool (*wxColourBaseExtIsSolidFunc)(const wxColourBaseExt* self, bool res);
typedef wxColourBase::ChannelType (*wxColourBaseExtRedFunc)(const wxColourBaseExt* self);
class wxColourExt;
typedef wxColourBase::ChannelType (*wxColourExtAlphaFunc)(const wxColourExt* self, wxColourBase::ChannelType res);
typedef wxColourBase::ChannelType (*wxColourExtBlueFunc)(const wxColourExt* self);
typedef wxGDIRefData* (*wxColourExtCloneGDIRefDatawxGDIRefDataCPFunc)(const wxColourExt* self, wxGDIRefData const* param0, wxGDIRefData* res);
typedef wxGDIRefData* (*wxColourExtCreateGDIRefDataFunc)(const wxColourExt* self, wxGDIRefData* res);
typedef bool (*wxColourExtFromStringwxStringCRFunc)(const wxColourExt* self, wxString const& s, bool res);
typedef wxString (*wxColourExtGetAsStringlongFunc)(const wxColourExt* self, long flags, wxString res);
typedef wxClassInfo* (*wxColourExtGetClassInfoFunc)(const wxColourExt* self, wxClassInfo* res);
typedef wxColourBase::ChannelType (*wxColourExtGreenFunc)(const wxColourExt* self);
typedef void (*wxColourExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypeFunc)(const wxColourExt* self, wxColourBase::ChannelType r, wxColourBase::ChannelType g, wxColourBase::ChannelType b, wxColourBase::ChannelType a);
typedef bool (*wxColourExtIsSolidFunc)(const wxColourExt* self, bool res);
typedef wxColourBase::ChannelType (*wxColourExtRedFunc)(const wxColourExt* self);
class wxColourRefDataExt;
typedef double (*wxColourRefDataExtAlphaFunc)(const wxColourRefDataExt* self);
typedef double (*wxColourRefDataExtBlueFunc)(const wxColourRefDataExt* self);
typedef wxColourRefData* (*wxColourRefDataExtCloneFunc)(const wxColourRefDataExt* self);
typedef CGColorRef (*wxColourRefDataExtGetCGColorFunc)(const wxColourRefDataExt* self);
typedef double (*wxColourRefDataExtGreenFunc)(const wxColourRefDataExt* self);
typedef bool (*wxColourRefDataExtIsSolidFunc)(const wxColourRefDataExt* self, bool res);
typedef double (*wxColourRefDataExtRedFunc)(const wxColourRefDataExt* self);

class wxColourBaseExt: public wxColourBase
{
public:
  wxColourBaseExt(): wxColourBase()  {  }
  virtual ~wxColourBaseExt()  {  }
  wxColourBaseExtAlphaFunc m_wxColourBaseExtAlpha = NULL;
  virtual wxColourBase::ChannelType Alpha() const override
  {
    wxColourBase::ChannelType res = wxColourBase::Alpha();
    if (*m_wxColourBaseExtAlpha != NULL){
      return m_wxColourBaseExtAlpha(this, res);
    }
    else {
      return res;
    }
  }
  wxColourBaseExtBlueFunc m_wxColourBaseExtBlue = NULL;
  virtual wxColourBase::ChannelType Blue() const override
  {
    if (*m_wxColourBaseExtBlue != NULL){
      return m_wxColourBaseExtBlue(this);
    }
    else {
      return 0;
    }
  }
  wxColourBaseExtCloneGDIRefDatawxGDIRefDataCPFunc m_wxColourBaseExtCloneGDIRefDatawxGDIRefDataCP = NULL;
  virtual wxGDIRefData* CloneGDIRefData(wxGDIRefData const* param0) const override
  {
    wxGDIRefData* res = wxColourBase::CloneGDIRefData(param0);
    if (*m_wxColourBaseExtCloneGDIRefDatawxGDIRefDataCP != NULL){
      return m_wxColourBaseExtCloneGDIRefDatawxGDIRefDataCP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxColourBaseExtCreateGDIRefDataFunc m_wxColourBaseExtCreateGDIRefData = NULL;
  virtual wxGDIRefData* CreateGDIRefData() const override
  {
    wxGDIRefData* res = wxColourBase::CreateGDIRefData();
    if (*m_wxColourBaseExtCreateGDIRefData != NULL){
      return m_wxColourBaseExtCreateGDIRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxColourBaseExtFromStringwxStringCRFunc m_wxColourBaseExtFromStringwxStringCR = NULL;
  virtual bool FromString(wxString const& s) override
  {
    bool res = wxColourBase::FromString(s);
    if (*m_wxColourBaseExtFromStringwxStringCR != NULL){
      return m_wxColourBaseExtFromStringwxStringCR(this, s, res);
    }
    else {
      return res;
    }
  }
  wxColourBaseExtGetAsStringlongFunc m_wxColourBaseExtGetAsStringlong = NULL;
  virtual wxString GetAsString(long flags = wxC2S_NAME | wxC2S_CSS_SYNTAX) const override
  {
    wxString res = wxColourBase::GetAsString(flags);
    if (*m_wxColourBaseExtGetAsStringlong != NULL){
      return m_wxColourBaseExtGetAsStringlong(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxColourBaseExtGreenFunc m_wxColourBaseExtGreen = NULL;
  virtual wxColourBase::ChannelType Green() const override
  {
    if (*m_wxColourBaseExtGreen != NULL){
      return m_wxColourBaseExtGreen(this);
    }
    else {
      return 0;
    }
  }
  wxColourBaseExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypeFunc m_wxColourBaseExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType = NULL;
  virtual void InitRGBA(wxColourBase::ChannelType r, wxColourBase::ChannelType g, wxColourBase::ChannelType b, wxColourBase::ChannelType a) override
  {
    if (*m_wxColourBaseExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType != NULL){
      return m_wxColourBaseExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType(this, r, g, b, a);
    }
  }
  wxColourBaseExtIsSolidFunc m_wxColourBaseExtIsSolid = NULL;
  virtual bool IsSolid() const override
  {
    bool res = wxColourBase::IsSolid();
    if (*m_wxColourBaseExtIsSolid != NULL){
      return m_wxColourBaseExtIsSolid(this, res);
    }
    else {
      return res;
    }
  }
  wxColourBaseExtRedFunc m_wxColourBaseExtRed = NULL;
  virtual wxColourBase::ChannelType Red() const override
  {
    if (*m_wxColourBaseExtRed != NULL){
      return m_wxColourBaseExtRed(this);
    }
    else {
      return 0;
    }
  }
  wxColourBaseExt(wxColourBaseExtAlphaFunc a_Alpha, wxColourBaseExtBlueFunc a_Blue, wxColourBaseExtCloneGDIRefDatawxGDIRefDataCPFunc a_CloneGDIRefDatawxGDIRefDataCP, wxColourBaseExtCreateGDIRefDataFunc a_CreateGDIRefData, wxColourBaseExtFromStringwxStringCRFunc a_FromStringwxStringCR, wxColourBaseExtGetAsStringlongFunc a_GetAsStringlong, wxColourBaseExtGreenFunc a_Green, wxColourBaseExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypeFunc a_InitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType, wxColourBaseExtIsSolidFunc a_IsSolid, wxColourBaseExtRedFunc a_Red): wxColourBase() {
    m_wxColourBaseExtAlpha = a_Alpha;
    m_wxColourBaseExtBlue = a_Blue;
    m_wxColourBaseExtCloneGDIRefDatawxGDIRefDataCP = a_CloneGDIRefDatawxGDIRefDataCP;
    m_wxColourBaseExtCreateGDIRefData = a_CreateGDIRefData;
    m_wxColourBaseExtFromStringwxStringCR = a_FromStringwxStringCR;
    m_wxColourBaseExtGetAsStringlong = a_GetAsStringlong;
    m_wxColourBaseExtGreen = a_Green;
    m_wxColourBaseExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType = a_InitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType;
    m_wxColourBaseExtIsSolid = a_IsSolid;
    m_wxColourBaseExtRed = a_Red;
  }
};

class wxColourExt: public wxColour
{
public:
  wxColourExt(): wxColour()  {  }
  wxColourExt(wxColourBase::ChannelType red, wxColourBase::ChannelType green, wxColourBase::ChannelType blue, wxColourBase::ChannelType alpha = wxALPHA_OPAQUE): wxColour(red, green, blue, alpha)  {  }
  wxColourExt(unsigned long colRGB): wxColour(colRGB)  {  }
  wxColourExt(wxString const& colourName): wxColour(colourName)  {  }
  wxColourExt(char const* colourName): wxColour(colourName)  {  }
  wxColourExt(wchar_t const* colourName): wxColour(colourName)  {  }
  wxColourExt(CGColorRef col): wxColour(col)  {  }
  wxColourExt(RGBColor const& col): wxColour(col)  {  }
  wxColourExtAlphaFunc m_wxColourExtAlpha = NULL;
  virtual wxColourBase::ChannelType Alpha() const override
  {
    wxColourBase::ChannelType res = wxColour::Alpha();
    if (*m_wxColourExtAlpha != NULL){
      return m_wxColourExtAlpha(this, res);
    }
    else {
      return res;
    }
  }
  wxColourExtBlueFunc m_wxColourExtBlue = NULL;
  virtual wxColourBase::ChannelType Blue() const override
  {
    if (*m_wxColourExtBlue != NULL){
      return m_wxColourExtBlue(this);
    }
    else {
      return 0;
    }
  }
  wxColourExtCloneGDIRefDatawxGDIRefDataCPFunc m_wxColourExtCloneGDIRefDatawxGDIRefDataCP = NULL;
  virtual wxGDIRefData* CloneGDIRefData(wxGDIRefData const* param0) const override
  {
    wxGDIRefData* res = wxColour::CloneGDIRefData(param0);
    if (*m_wxColourExtCloneGDIRefDatawxGDIRefDataCP != NULL){
      return m_wxColourExtCloneGDIRefDatawxGDIRefDataCP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxColourExtCreateGDIRefDataFunc m_wxColourExtCreateGDIRefData = NULL;
  virtual wxGDIRefData* CreateGDIRefData() const override
  {
    wxGDIRefData* res = wxColour::CreateGDIRefData();
    if (*m_wxColourExtCreateGDIRefData != NULL){
      return m_wxColourExtCreateGDIRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxColourExtFromStringwxStringCRFunc m_wxColourExtFromStringwxStringCR = NULL;
  virtual bool FromString(wxString const& s) override
  {
    bool res = wxColour::FromString(s);
    if (*m_wxColourExtFromStringwxStringCR != NULL){
      return m_wxColourExtFromStringwxStringCR(this, s, res);
    }
    else {
      return res;
    }
  }
  wxColourExtGetAsStringlongFunc m_wxColourExtGetAsStringlong = NULL;
  virtual wxString GetAsString(long flags = wxC2S_NAME | wxC2S_CSS_SYNTAX) const override
  {
    wxString res = wxColour::GetAsString(flags);
    if (*m_wxColourExtGetAsStringlong != NULL){
      return m_wxColourExtGetAsStringlong(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxColourExtGetClassInfoFunc m_wxColourExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxColour::GetClassInfo();
    if (*m_wxColourExtGetClassInfo != NULL){
      return m_wxColourExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxColourExtGreenFunc m_wxColourExtGreen = NULL;
  virtual wxColourBase::ChannelType Green() const override
  {
    if (*m_wxColourExtGreen != NULL){
      return m_wxColourExtGreen(this);
    }
    else {
      return 0;
    }
  }
  wxColourExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypeFunc m_wxColourExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType = NULL;
  virtual void InitRGBA(wxColourBase::ChannelType r, wxColourBase::ChannelType g, wxColourBase::ChannelType b, wxColourBase::ChannelType a) override
  {
    if (*m_wxColourExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType != NULL){
      return m_wxColourExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType(this, r, g, b, a);
    }
  }
  wxColourExtIsSolidFunc m_wxColourExtIsSolid = NULL;
  virtual bool IsSolid() const override
  {
    bool res = wxColour::IsSolid();
    if (*m_wxColourExtIsSolid != NULL){
      return m_wxColourExtIsSolid(this, res);
    }
    else {
      return res;
    }
  }
  wxColourExtRedFunc m_wxColourExtRed = NULL;
  virtual wxColourBase::ChannelType Red() const override
  {
    if (*m_wxColourExtRed != NULL){
      return m_wxColourExtRed(this);
    }
    else {
      return 0;
    }
  }
  wxColourExt(wxColourExtAlphaFunc a_Alpha, wxColourExtBlueFunc a_Blue, wxColourExtCloneGDIRefDatawxGDIRefDataCPFunc a_CloneGDIRefDatawxGDIRefDataCP, wxColourExtCreateGDIRefDataFunc a_CreateGDIRefData, wxColourExtFromStringwxStringCRFunc a_FromStringwxStringCR, wxColourExtGetAsStringlongFunc a_GetAsStringlong, wxColourExtGetClassInfoFunc a_GetClassInfo, wxColourExtGreenFunc a_Green, wxColourExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypeFunc a_InitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType, wxColourExtIsSolidFunc a_IsSolid, wxColourExtRedFunc a_Red): wxColour() {
    m_wxColourExtAlpha = a_Alpha;
    m_wxColourExtBlue = a_Blue;
    m_wxColourExtCloneGDIRefDatawxGDIRefDataCP = a_CloneGDIRefDatawxGDIRefDataCP;
    m_wxColourExtCreateGDIRefData = a_CreateGDIRefData;
    m_wxColourExtFromStringwxStringCR = a_FromStringwxStringCR;
    m_wxColourExtGetAsStringlong = a_GetAsStringlong;
    m_wxColourExtGetClassInfo = a_GetClassInfo;
    m_wxColourExtGreen = a_Green;
    m_wxColourExtInitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType = a_InitRGBAwxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelTypewxColourBaseNChannelType;
    m_wxColourExtIsSolid = a_IsSolid;
    m_wxColourExtRed = a_Red;
  }
};


#endif
