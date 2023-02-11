%module event
%{
#include <wx/event.h>

#include "wxext/event_ext.h"
#include "wxext/eventfilter_ext.h"
#if defined(__WXMAC__)
#include <objc/runtime.h>
#endif

%}

%include <common.i>

%ignore wxObject::ms_classInfo;

%ignore wxEventTableEntryPointerArray::wxEventTableEntryPointerArray(size_t n, Base::const_reference v);
%ignore wxEvtHandlerArray::wxEvtHandlerArray(size_t n, Base::const_reference v);


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
%include "wx/event.h"
%include "wx/eventfilter.h"
%include "wxext/event_ext.h"
%include "wxext/eventfilter_ext.h"

/* For some reason this doesn't work. Figure out why */

/* %template(wxBaseArrayForwxEventTableEntryPointerArray) wxBaseArray<wxEvtHandler*>; */
/* %template(wxBaseArrayForwxEvtHandlerArray) wxBaseArray<wxEvtHandler*>; */

/* %extend wxEventTableEntryPointerArray { */
/*   wxEventTableEntryPointerArray(size_t n, wxBaseArrayForwxEventTableEntryPointerArray::const_reference v) { */
/*     return new wxEventTableEntryPointerArray(n, v); */
/*   } */
/* } */
/* %extend wxEvtHandlerArray { */
/*   wxEvtHandlerArray(size_t n, wxBaseArrayForwxEvtHandlerArray::const_reference v) { */
/*     return new wxEvtHandlerArray(n, v); */
/*   } */
/* } */
