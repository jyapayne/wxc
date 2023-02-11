%module frame
%include <common.i>
%{
#include <wx/vidmode.h>
#include "wxext/frame_ext2.h"
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
%import "wx/window.h"
%import "wx/vidmode.h"
%import "wx/cmdargs.h"
%import "wx/string.h"
%import "wx/toplevel.h"
%include "wx/frame.h"

#if defined(__WXUNIVERSAL__)
    %include "wx/univ/frame.h"
#else // !__WXUNIVERSAL__
    #if defined(__WXMSW__)
        %include "wx/msw/frame.h"
    #elif defined(__WXGTK20__)
        %include "wx/gtk/frame.h"
    #elif defined(__WXGTK__)
        %include "wx/gtk1/frame.h"
    #elif defined(__WXMOTIF__)
        %include "wx/motif/frame.h"
    #elif defined(__WXMAC__)
        %include "wx/osx/frame.h"
    #elif defined(__WXQT__)
        %include "wx/qt/frame.h"
    #endif
#endif

%include "wxext/frame_ext2.h"
