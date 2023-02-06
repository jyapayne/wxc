#include<wx/wx.h>

/* typedef wxWindow* (* InitTopWindow)(); */

/* wxWindow* privInitTopWindow(); */

const char* wxBuildOptionsSignature();
const bool wxCheckBuildOptions(char * libName);

/* class MainApp : public wxApp */
/* { */
/* private: */
/*     InitTopWindow initTopWindowFunc; */
/* public: */
/*     MainApp(); */
/*     void SetTopWindowInitFunc(InitTopWindow init); */
/*     virtual bool OnInit(); */
/* }; */
