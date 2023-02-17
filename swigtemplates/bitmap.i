%module bitmap
%include <common.i>
%{
#include <wx/vidmode.h>
#include "wxext/bitmap_ext.h"
%}

%ignore wxBitmapBaseExt;

%import "object.i"
%import "string.i"

#if defined(__WXMSW__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_BMP_RESOURCE
    %include "wx/msw/bitmap.h"
#elif defined(__WXMOTIF__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_XPM
    %include "wx/x11/bitmap.h"
#elif defined(__WXGTK20__)
    #ifdef __WINDOWS__
        #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_BMP_RESOURCE
    #else
        #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_XPM
    #endif
    %include "wx/gtk/bitmap.h"
#elif defined(__WXGTK__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_XPM
    %include "wx/gtk1/bitmap.h"
#elif defined(__WXX11__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_XPM
    %include "wx/x11/bitmap.h"
#elif defined(__WXDFB__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_BMP_RESOURCE
    %include "wx/dfb/bitmap.h"
#elif defined(__WXMAC__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_PICT_RESOURCE
    %include "wx/osx/bitmap.h"
#elif defined(__WXQT__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_XPM
    %include "wx/qt/bitmap.h"
#endif

%include "wxext/bitmap_ext.h"
