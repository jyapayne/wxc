#ifndef _WX_OBJECT_H_EXT_
#define _WX_OBJECT_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxObjectExt;
typedef wxObjectRefData* (*wxObjectExtCloneRefDatawxObjectRefDataCPFunc)(const wxObjectExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxObjectExtCreateRefDataFunc)(const wxObjectExt* self, wxObjectRefData* res);
typedef wxClassInfo* (*wxObjectExtGetClassInfoFunc)(const wxObjectExt* self, wxClassInfo* res);

class wxObjectExt: public wxObject
{
public:
  wxObjectExt(): wxObject()  {  }
  virtual ~wxObjectExt()  {  }
  wxObjectExt(wxObject const& other): wxObject(other)  {  }
  wxObjectExtCloneRefDatawxObjectRefDataCPFunc m_wxObjectExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxObject::CloneRefData(data);
    if (*m_wxObjectExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxObjectExtCloneRefDatawxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxObjectExtCreateRefDataFunc m_wxObjectExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxObject::CreateRefData();
    if (*m_wxObjectExtCreateRefData != NULL){
      return m_wxObjectExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxObjectExtGetClassInfoFunc m_wxObjectExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxObject::GetClassInfo();
    if (*m_wxObjectExtGetClassInfo != NULL){
      return m_wxObjectExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxObjectExt(wxObjectExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxObjectExtCreateRefDataFunc a_CreateRefData, wxObjectExtGetClassInfoFunc a_GetClassInfo): wxObject() {
    m_wxObjectExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxObjectExtCreateRefData = a_CreateRefData;
    m_wxObjectExtGetClassInfo = a_GetClassInfo;
  }
};



#endif
