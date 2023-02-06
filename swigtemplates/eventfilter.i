%module eventfilter
%include <common.i>


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
%include "wx/eventfilter.h"
