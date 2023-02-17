/////////////////////////////////////////////////////////////////////////////
// Name:        wx/icon.h
// Purpose:     wxIcon base header
// Author:      Julian Smart
// Modified by:
// Created:
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ICON_H_BASE_
#define _WX_ICON_H_BASE_

#include "wx/iconloc.h"


// a more readable way to tell
#define wxICON_SCREEN_DEPTH     (-1)


// the wxICON_DEFAULT_TYPE (the wxIcon equivalent of wxBITMAP_DEFAULT_TYPE)
// constant defines the default argument value for wxIcon ctor and wxIcon::LoadFile()
// functions.

#if defined(__WXMSW__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_ICO_RESOURCE
  #include "wx/msw/icon.h"

  #define wxICON_DIFFERENT_FROM_BITMAP
#elif defined(__WXMOTIF__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  #include "wx/motif/icon.h"
#elif defined(__WXGTK20__)
  #ifdef __WINDOWS__
    #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_ICO_RESOURCE
  #else
    #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  #endif
  #include "wx/generic/icon.h"
#elif defined(__WXGTK__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  #include "wx/generic/icon.h"
#elif defined(__WXX11__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  #include "wx/generic/icon.h"
#elif defined(__WXDFB__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  #include "wx/generic/icon.h"
#elif defined(__WXMAC__)
#if wxOSX_USE_COCOA_OR_CARBON
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_ICON_RESOURCE
  #ifndef __CPPAST__
      #include "wx/generic/icon.h"
  #else
#ifndef _WX_GENERIC_ICON_H_
#define _WX_GENERIC_ICON_H_

#include "wx/bitmap.h"

//-----------------------------------------------------------------------------
// wxIcon
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxIcon: public wxBitmap
{
public:
    wxIcon();

    wxIcon(const char* const* bits);

    // For compatibility with wxMSW where desired size is sometimes required to
    // distinguish between multiple icons in a resource.
    wxIcon( const wxString& filename,
            wxBitmapType type = wxICON_DEFAULT_TYPE,
            int WXUNUSED(desiredWidth)=-1, int WXUNUSED(desiredHeight)=-1 ) :
        wxBitmap(filename, type)
    {
    }

    wxIcon(const wxIconLocation& loc)
        : wxBitmap(loc.GetFileName(), wxBITMAP_TYPE_ANY)
    {
    }

    bool LoadFile(const wxString& name, wxBitmapType flags,
                  int WXUNUSED(desiredWidth), int WXUNUSED(desiredHeight))
        { return wxBitmap::LoadFile(name, flags); }

    // unhide the base class version
    virtual bool LoadFile(const wxString& name,
                          wxBitmapType flags = wxICON_DEFAULT_TYPE) wxOVERRIDE
        { return wxBitmap::LoadFile(name, flags); }

    // create from bitmap (which should have a mask unless it's monochrome):
    // there shouldn't be any implicit bitmap -> icon conversion (i.e. no
    // ctors, assignment operators...), but it's ok to have such function
    void CopyFromBitmap(const wxBitmap& bmp);

private:
    wxDECLARE_DYNAMIC_CLASS(wxIcon);
};

#endif // _WX_GENERIC_ICON_H_
  #endif
#else
  // iOS and others
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_PNG_RESOURCE
  #include "wx/generic/icon.h"
#endif
#elif defined(__WXQT__)
  #define wxICON_DEFAULT_TYPE   wxBITMAP_TYPE_XPM
  #include "wx/generic/icon.h"
#endif

#ifndef wxICON_DIFFERENT_FROM_BITMAP
    #define wxICON_IS_BITMAP
#endif

//-----------------------------------------------------------------------------
// wxVariant support
//-----------------------------------------------------------------------------

#if wxUSE_VARIANT
#include "wx/variant.h"
DECLARE_VARIANT_OBJECT_EXPORTED(wxIcon,WXDLLIMPEXP_CORE)
#endif


#endif
    // _WX_ICON_H_BASE_
