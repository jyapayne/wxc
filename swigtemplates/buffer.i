%module buffer
%include <common.i>
%{
#include <wx/wx.h>
#include <wx/buffer.h>
%}


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
