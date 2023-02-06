#ifndef _WX_INIT_H_EXT_
#define _WX_INIT_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxInitializerExt;

class wxInitializerExt: public wxInitializer
{
public:
  wxInitializerExt(): wxInitializer()  {  }
  wxInitializerExt(int& argc, wxChar** argv): wxInitializer(argc, argv)  {  }
  wxInitializerExt(int& argc, char** argv): wxInitializer(argc, argv)  {  }
};



#endif
