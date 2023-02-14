%module string
%include <common.i>

%import "object.i"

%import "wx/setup.h"
#undef HAVE_VISIBILITY
#undef wxUSE_STD_CONTAINERS
#define wxUSE_STD_CONTAINERS 1
%import "wx/compiler.h"
%import "wx/dlimpexp.h"
%import "wx/platform.h"
%import "wx/types.h"
%import "wx/defs.h"
%import "wx/chartype.h"
%import "wx/unichar.h"
%import "wx/wxcrtbase.h"
%import "wx/buffer.h"
%import "wx/strconv.h"
%import "wx/strvararg.h"
%include "wx/string.h"

