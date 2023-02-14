%module anybutton
%include <common.i>
%{
#include <wx/vidmode.h>
#include "wxext/anybutton_ext.h"
%}

%import "window.i"
%import "validate.i"

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
%import "wx/window.h"
%import "wx/control.h"
%include "wx/anybutton.h"

#if defined(__WXUNIVERSAL__)
    %include "wx/univ/anybutton.h"
#elif defined(__WXMSW__)
    %include "wx/msw/anybutton.h"
//#elif defined(__WXMOTIF__)
//    %include "wx/motif/anybutton.h"
#elif defined(__WXGTK20__)
    %include "wx/gtk/anybutton.h"
//#elif defined(__WXGTK__)
//    %include "wx/gtk1/anybutton.h"
#elif defined(__WXMAC__)
    %include "wx/osx/anybutton.h"
#elif defined(__WXQT__)
    %include "wx/qt/anybutton.h"
#else
    class wxAnyButtonBase: public wxAnyButton{};
#endif

%include "wxext/anybutton_ext.h"
