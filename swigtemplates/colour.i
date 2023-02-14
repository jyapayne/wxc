%module colour
%{
#include <wx/wx.h>

#include "wx/colour.h"
#include "wxext/colour_ext.h"
#if defined(__WXMAC__)
#include <objc/runtime.h>
#endif

%}

%include <common.i>
%import "object.i"
%import "string.i"

%import "wx/setup.h"
#undef HAVE_VISIBILITY
#undef wxUSE_STD_CONTAINERS
#define wxUSE_STD_CONTAINERS 1
%import "wx/compiler.h"
%import "wx/dlimpexp.h"
%import "wx/platform.h"
%import "wx/object.h"
%import "wx/typeinfo.h"
%import "wx/defs.h"
%import "wx/list.h"
%import "wx/variant.h"
%include "wx/colour.h"

#if defined(__WXMSW__)
    %include "wx/msw/colour.h"
#elif defined(__WXMOTIF__)
    %include "wx/motif/colour.h"
#elif defined(__WXGTK20__)
    %include "wx/gtk/colour.h"
#elif defined(__WXGTK__)
    %include "wx/gtk1/colour.h"
#elif defined(__WXDFB__)
    %include "wx/generic/colour.h"
#elif defined(__WXX11__)
    %include "wx/x11/colour.h"
#elif defined(__WXMAC__)
    %include "wx/osx/core/colour.h"
#elif defined(__WXQT__)
    %include "wx/qt/colour.h"
#endif

%include "wxext/colour_ext.h"
