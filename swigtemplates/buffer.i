%module buffer
%include <std_string.i>
%include <std_common.i>
%{
#include <wx/wx.h>
%}

%define __arm64__ 1
%enddef
%define TARGET_CPU_ARM64 1
%enddef
%define __APPLE__ 1
%enddef
%define __LP64__ 1
%enddef
%define __MACH__ 1
%enddef

#define __FUNCTION__ (NULL)
#define __asm(str)
#define __attribute__(str)

/* #define WXEXPORT */
/* #define WXIMPORT */
%ignore WX_DECLARE_LIST_XO;
%ignore WX_DECLARE_LIST_2(elementtype, listname, nodename, classexp);
%ignore WX_DECLARE_LIST_3;
%ignore WX_DECLARE_LIST_4;
%ignore WXDLLIMPEXP_BASE;
%ignore _WX_LIST_HELPER_wxWindowList;
%ignore _WX_LIST_HELPER_wxPointList;
%ignore wxWindowList::Nth;
%ignore wxPointList::Nth;
%ignore wxPendingDelete;
%ignore wxCreateApp;
%ignore wxTheAppInitializer;

%extend wxCharBuffer {
  wxCharBuffer(const char *str = NULL) {
    return new wxCharBuffer(str);
  }
}
%extend wxWCharBuffer {
  wxWCharBuffer(const wchar_t *str = NULL) {
    return new wxWCharBuffer(str);
  }
}

%ignore wxCharBuffer::wxCharBuffer(const CharType * str);
%ignore wxWCharBuffer::wxWCharBuffer(const CharType * str);

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
%include "wx/buffer.h"

%template(wxCharTypeBufferWChar) wxCharTypeBuffer<wchar_t>;
%template(wxCharTypeBufferChar) wxCharTypeBuffer<char>;

%template(wxScopedCharTypeBufferWChar) wxScopedCharTypeBuffer<wchar_t>;
%template(wxScopedCharTypeBufferChar) wxScopedCharTypeBuffer<char>;
