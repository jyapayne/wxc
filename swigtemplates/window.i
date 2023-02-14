%module window
%include <common.i>
%{
#include <wx/vidmode.h>
#include "wxext/window_ext.h"
%}

%import "object.i"
%import "string.i"
%import "validate.i"
%import "colour.i"

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
%import "wx/event.h"
%import "wx/dataobj.h"
%import "wx/cursor.h"
%import "wx/dnd.h"
%import "wx/tooltip.h"
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
%import "wx/gdicmn.h"
%import "wx/vidmode.h"
%import "wx/cmdargs.h"
%import "wx/string.h"
%import "wx/toplevel.h"
%import "wx/frame.h"
%include "wx/window.h"

// include the declaration of the platform-specific class
#if defined(__WXMSW__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowMSW
    #else // !wxUniv
        #define wxWindowMSW wxWindow
    #endif // wxUniv/!wxUniv
    %include "wx/msw/window.h"
#elif defined(__WXMOTIF__)
    %include "wx/motif/window.h"
#elif defined(__WXGTK20__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowGTK
    #else // !wxUniv
        #define wxWindowGTK wxWindow
    #endif // wxUniv
    %include "wx/gtk/window.h"
#elif defined(__WXGTK__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowGTK
    #else // !wxUniv
        #define wxWindowGTK wxWindow
    #endif // wxUniv
    %include "wx/gtk1/window.h"
#elif defined(__WXX11__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowX11
    #else // !wxUniv
        #define wxWindowX11 wxWindow
    #endif // wxUniv
    %include "wx/x11/window.h"
#elif defined(__WXDFB__)
    #define wxWindowNative wxWindowDFB
    %include "wx/dfb/window.h"
#elif defined(__WXMAC__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowMac
    #else // !wxUniv
        #define wxWindowMac wxWindow
    #endif // wxUniv
    %include "wx/osx/window.h"
#elif defined(__WXQT__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowQt
    #else // !wxUniv
        #define wxWindowQt wxWindow
    #endif // wxUniv
    %include "wx/qt/window.h"
#endif

// for wxUniversal, we now derive the real wxWindow from wxWindow<platform>,
// for the native ports we already have defined it above
#if defined(__WXUNIVERSAL__)
    #ifndef wxWindowNative
        #error "wxWindowNative must be defined above!"
    #endif

    %include "wx/univ/window.h"
#endif // wxUniv

%include "wxext/window_ext.h"
