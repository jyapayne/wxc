%module app
%include <common.i>
%{
#include <wx/wx.h>
#include <wx/vidmode.h>
#include "wxext/app_ext.h"
#if defined(__WXMAC__)
#include <objc/runtime.h>
#endif

%}

%ignore wxWindowList::Nth;
%ignore wxPointList::Nth;
%ignore wxPendingDelete;
%ignore wxCreateApp;
%ignore wxTheAppInitializer;

%import "wx/setup.h"
#undef HAVE_VISIBILITY
#undef wxUSE_STD_CONTAINERS
#define wxUSE_STD_CONTAINERS 1
%import "wx/compiler.h"
%import "wx/dlimpexp.h"
%import "wx/platform.h"
%import "wx/cpp.h"
%import "wx/types.h"
%import "wx/defs.h"
%import "wx/debug.h"
%import "wx/chartype.h"
%import "wx/unichar.h"
%import "wx/wxcrtbase.h"
%import "wx/buffer.h"
%import "wx/typeinfo.h"
%import "wx/strconv.h"
%import "wx/strvararg.h"
%import "wx/object.h"
%import "wx/dynarray.h"
%import "wx/list.h"
%import "wx/rtti.h"
%import "wx/fontenc.h"
%import "wx/hashmap.h"
%import "wx/math.h"
%import "wx/localedefs.h"
%import "wx/eventfilter.h"
%import "wx/event.h"
%import "wx/dataobj.h"
%import "wx/cursor.h"
%import "wx/dnd.h"
%import "wx/tooltip.h"
%import "wx/gdicmn.h"
%import "wx/palette.h"
%import "wx/variant.h"
%import "wx/colour.h"
%import "wx/font.h"
%import "wx/scrolwin.h"
%import "wx/sizer.h"
%import "wx/layout.h"
%import "wx/accel.h"
%import "wx/intl.h"
%import "wx/utils.h"
%import "wx/textentry.h"
%import "wx/window.h"
%import "wx/vidmode.h"
%import "wx/cmdargs.h"
%import "wx/string.h"
%import "wx/nonownedwnd.h"
%import "wx/toplevel.h"
%import "wx/frame.h"
%include "wx/build.h"
%include "wx/app.h"

#if defined(__WXMSW__)
    %include "wx/msw/app.h"
#elif defined(__WXMOTIF__)
    %include "wx/motif/app.h"
#elif defined(__WXDFB__)
    %include "wx/dfb/app.h"
#elif defined(__WXGTK20__)
    %include "wx/gtk/app.h"
#elif defined(__WXGTK__)
    %include "wx/gtk1/app.h"
#elif defined(__WXX11__)
    %include "wx/x11/app.h"
#elif defined(__WXMAC__)
    %include "wx/osx/app.h"
#elif defined(__WXQT__)
    %include "wx/qt/app.h"
#endif

%include "wxext/app_ext.h"

%{
/* typedef wxWindow* (* InitTopWindow)(); */

/* wxWindow* privInitTopWindow() { */
/*     wxFrame *frame = new wxFrame((wxFrame*) NULL, -1, _T("Hello wxWidgets World")); */
/* 	frame->CreateStatusBar(); */
/* 	frame->SetStatusText(_T("Hello World")); */
/* 	frame->Show(true); */
/*     return frame; */
/* } */
/* class MainApp : public wxApp */
/* { */
/* private: */
/*     InitTopWindow initTopWindowFunc; */
/* public: */
/*     MainApp(): wxApp(){ */
/*        initTopWindowFunc = privInitTopWindow; */ 
/*     } */
/*     void SetTopWindowInitFunc(InitTopWindow init){ */
/*         initTopWindowFunc = init; */
/*     } */
/*     virtual bool OnInit(); */
/* }; */

/* bool MainApp::OnInit() */
/* { */
/*     SetTopWindow(initTopWindowFunc()); */
/*     return true; */
/* } */
%}
