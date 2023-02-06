#ifndef _WX_RTTI_H_EXT_
#define _WX_RTTI_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxClassInfoExt;

class wxClassInfoExt: public wxClassInfo
{
public:
  wxClassInfoExt(wxChar const* className, wxClassInfo const* baseInfo1, wxClassInfo const* baseInfo2, int size, wxObjectConstructorFn ctor): wxClassInfo(className, baseInfo1, baseInfo2, size, ctor)  {  }
};



#endif
