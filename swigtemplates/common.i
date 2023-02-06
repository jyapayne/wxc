%include <std_string.i>
%include <std_common.i>

%{
#include <wx/wx.h>
%}

#if defined(__WXMAC__)

%define __arm64__ 1
%enddef
%define TARGET_CPU_ARM64 1
%enddef
%define __APPLE__ 1
%enddef
%define __GNUC__ 1
%enddef
%define __LP64__ 1
%enddef
%define __MACH__ 1
%enddef

#endif

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

%rename(indexop) operator[];
%rename(plus) operator+;
%rename(minus) operator-;
%rename(mult) operator*;
%rename(div) operator/;
%rename(shr) operator>>;
%rename(shl) operator<<;
%rename(assignop) operator=;
%rename(eqeq) operator==;
%rename(noteq) operator!=;
%rename(notop) operator!;
%rename(pluseq) operator+=;
%rename(minuseq) operator-=;
%rename(multeq) operator*=;
%rename(diveq) operator/=;
%rename(greater) operator>;
%rename(lessthan) operator<;
%rename(greatereq) operator>=;
%rename(lessthaneq) operator<=;
%rename(callop) operator();

%rename(voidpop) operator const void*;
%rename(charpop) operator const char*;
%rename(wcharpop) operator const wchar_t*;
%rename(ucharpop) operator const unsigned char*;
%rename(boolop) operator bool;
