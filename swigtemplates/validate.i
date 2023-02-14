%module validate
%{
#include <wx/event.h>

#include "wxext/validate_ext.h"
#if defined(__WXMAC__)
#include <objc/runtime.h>
#endif

%}

%include <common.i>
%import "event.i"

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
%import "wx/vector.h"
%import "wx/dynarray.h"
%import "wx/list.h"
%import "wx/kbdstate.h"
%import "wx/mousestate.h"
%import "wx/tracker.h"
%import "wx/event.h"
%import "wx/validate.h"
%include "wxext/validate_ext.h"
