#ifndef _WX_OBJECT_H_EXT_
#define _WX_OBJECT_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxRefCounterExt;
class wxObjectExt;
typedef wxClassInfo* (*wxObjectExtGetClassInfoFunc)(const wxObjectExt* self);
typedef wxObjectRefData* (*wxObjectExtCreateRefDataFunc)(const wxObjectExt* self);
typedef wxObjectRefData* (*wxObjectExtCloneRefDataFunc)(const wxObjectExt* self, wxObjectRefData const* data);

class wxRefCounterExt: public wxRefCounter
{
public:
  wxRefCounterExt(): wxRefCounter()  {  }
  virtual ~wxRefCounterExt()  {  }
};

class wxObjectExt: public wxObject
{
public:
  wxObjectExt(): wxObject()  {  }
  virtual ~wxObjectExt()  {  }
  wxObjectExt(wxObject const& other): wxObject(other)  {  }
  wxObjectExtGetClassInfoFunc m_wxObjectExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxObject::GetClassInfo();
    if (*m_wxObjectExtGetClassInfo != NULL){
      return m_wxObjectExtGetClassInfo(this);
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
      return m_wxObjectExtCreateRefData(this);
    }
    else {
      return res;
    }
  }
  wxObjectExtCloneRefDataFunc m_wxObjectExtCloneRefData = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxObject::CloneRefData(data);
    if (*m_wxObjectExtCloneRefData != NULL){
      return m_wxObjectExtCloneRefData(this, data);
    }
    else {
      return res;
    }
  }
  wxObjectExt(wxObjectExtGetClassInfoFunc a_GetClassInfo, wxObjectExtCreateRefDataFunc a_CreateRefData, wxObjectExtCloneRefDataFunc a_CloneRefData): wxObject() {
    m_wxObjectExtGetClassInfo = a_GetClassInfo;
    m_wxObjectExtCreateRefData = a_CreateRefData;
    m_wxObjectExtCloneRefData = a_CloneRefData;
  }
};



#endif
