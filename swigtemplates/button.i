%module button
%include <common.i>
%{
#include <wx/vidmode.h>
#include "wxext/button_ext.h"
%}

%import "object.i"
%import "string.i"
%import "control.i"
%import "anybutton.i"
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
%include "wx/button.h"

#if defined(__WXUNIVERSAL__)
    %include "wx/univ/button.h"
#elif defined(__WXMSW__)
    %include "wx/msw/button.h"
#elif defined(__WXMOTIF__)
    %include "wx/motif/button.h"
#elif defined(__WXGTK20__)
    %include "wx/gtk/button.h"
#elif defined(__WXGTK__)
    %include "wx/gtk1/button.h"
#elif defined(__WXMAC__)
    %include "wx/osx/button.h"
#elif defined(__WXQT__)
    %include "wx/qt/button.h"
#endif

%include "wxext/button_ext.h"
