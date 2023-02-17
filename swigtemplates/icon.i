%module icon
%include <common.i>
%{
#include <wx/vidmode.h>
#include "wxext/icon_ext.h"
%}

%import "object.i"
%import "string.i"
%import "bitmap.i"

%import "wx/list.h"
%import "wx/variant.h"
%include "wx/icon.h"
%include "wx/iconbndl.h"

#if defined(__WXMSW__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_ICO_RESOURCE
  %include "wx/msw/icon.h"

  #define wxICON_DIFFERENT_FROM_BITMAP
#elif defined(__WXMOTIF__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  %include "wx/motif/icon.h"
#elif defined(__WXGTK20__)
  #ifdef __WINDOWS__
    #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_ICO_RESOURCE
  #else
    #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  #endif
  %include "wx/generic/icon.h"
#elif defined(__WXGTK__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  %include "wx/generic/icon.h"
#elif defined(__WXX11__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  %include "wx/generic/icon.h"
#elif defined(__WXDFB__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  %include "wx/generic/icon.h"
#elif defined(__WXMAC__)
#if wxOSX_USE_COCOA_OR_CARBON
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_ICON_RESOURCE
  %include "wx/generic/icon.h"
#else
  // iOS and others
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_PNG_RESOURCE
  %include "wx/generic/icon.h"
#endif
#elif defined(__WXQT__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  %include "wx/generic/icon.h"
#endif

#ifndef wxICON_DIFFERENT_FROM_BITMAP
    #define wxICON_IS_BITMAP
#endif

//-----------------------------------------------------------------------------
// wxVariant support
//-----------------------------------------------------------------------------

#if wxUSE_VARIANT
%include "wx/variant.h"
DECLARE_VARIANT_OBJECT_EXPORTED(wxIcon,WXDLLIMPEXP_CORE)
#endif

%include "wxext/icon_ext.h"

