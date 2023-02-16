%module toplevel
%include <common.i>
%{
#include <wx/vidmode.h>
#include "wxext/toplevel_ext.h"
%}

%import "object.i"
%import "string.i"
%import "validate.i"
%import "colour.i"
%import "window.i"

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
%include "wx/toplevel.h"

#if defined(__WXMSW__)
    %include "wx/msw/toplevel.h"
    #define wxTopLevelWindowNative wxTopLevelWindowMSW
#elif defined(__WXGTK20__)
    %include "wx/gtk/toplevel.h"
    #define wxTopLevelWindowNative wxTopLevelWindowGTK
#elif defined(__WXGTK__)
    %include "wx/gtk1/toplevel.h"
    #define wxTopLevelWindowNative wxTopLevelWindowGTK
#elif defined(__WXX11__)
    %include "wx/x11/toplevel.h"
    #define wxTopLevelWindowNative wxTopLevelWindowX11
#elif defined(__WXDFB__)
    %include "wx/dfb/toplevel.h"
    #define wxTopLevelWindowNative wxTopLevelWindowDFB
#elif defined(__WXMAC__)
    %include "wx/osx/toplevel.h"
    #define wxTopLevelWindowNative wxTopLevelWindowMac
#elif defined(__WXMOTIF__)
    %include "wx/motif/toplevel.h"
    #define wxTopLevelWindowNative wxTopLevelWindowMotif
#elif defined(__WXQT__)
    %include "wx/qt/toplevel.h"
    #define wxTopLevelWindowNative wxTopLevelWindowQt
#endif

#ifdef __WXUNIVERSAL__
    %include "wx/univ/toplevel.h"
#else // !__WXUNIVERSAL__
    class WXDLLIMPEXP_CORE wxTopLevelWindow : public wxTopLevelWindowNative
    {
    public:
        // construction
        wxTopLevelWindow() { }
        wxTopLevelWindow(wxWindow *parent,
                   wxWindowID winid,
                   const wxString& title,
                   const wxPoint& pos = wxDefaultPosition,
                   const wxSize& size = wxDefaultSize,
                   long style = wxDEFAULT_FRAME_STYLE,
                   const wxString& name = wxASCII_STR(wxFrameNameStr))
            : wxTopLevelWindowNative(parent, winid, title,
                                     pos, size, style, name)
        {
        }

        wxDECLARE_DYNAMIC_CLASS_NO_COPY(wxTopLevelWindow);
    };
#endif // __WXUNIVERSAL__/!__WXUNIVERSAL__

%include "wxext/toplevel_ext.h"
