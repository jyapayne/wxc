///////////////////////////////////////////////////////////////////////////////
// Name:        wx/bitmap.h
// Purpose:     wxBitmap class interface
// Author:      Vaclav Slavik
// Modified by:
// Created:     22.04.01
// Copyright:   (c) wxWidgets team
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#ifndef _WX_BITMAP_H_BASE_
#define _WX_BITMAP_H_BASE_

// ----------------------------------------------------------------------------
// headers
// ----------------------------------------------------------------------------

#include "wx/string.h"
#include "wx/gdicmn.h"  // for wxBitmapType
#include "wx/colour.h"
#include "wx/image.h"

class WXDLLIMPEXP_FWD_CORE wxBitmap;
class WXDLLIMPEXP_FWD_CORE wxBitmapHandler;
class WXDLLIMPEXP_FWD_CORE wxCursor;
class WXDLLIMPEXP_FWD_CORE wxDC;
class WXDLLIMPEXP_FWD_CORE wxIcon;
class WXDLLIMPEXP_FWD_CORE wxMask;
class WXDLLIMPEXP_FWD_CORE wxPalette;
class WXDLLIMPEXP_FWD_CORE wxPixelDataBase;

// ----------------------------------------------------------------------------
// wxVariant support
// ----------------------------------------------------------------------------

#if wxUSE_VARIANT
#include "wx/variant.h"
DECLARE_VARIANT_OBJECT_EXPORTED(wxBitmap,WXDLLIMPEXP_CORE)
#endif

// ----------------------------------------------------------------------------
// wxMask represents the transparent area of the bitmap
// ----------------------------------------------------------------------------

// TODO: all implementation of wxMask, except the generic one,
//       do not derive from wxMaskBase,,, they should
class WXDLLIMPEXP_CORE wxMaskBase : public wxObject
{
public:
    // create the mask from bitmap pixels of the given colour
    bool Create(const wxBitmap& bitmap, const wxColour& colour);

#if wxUSE_PALETTE
    // create the mask from bitmap pixels with the given palette index
    bool Create(const wxBitmap& bitmap, int paletteIndex);
#endif // wxUSE_PALETTE

    // create the mask from the given mono bitmap
    bool Create(const wxBitmap& bitmap);

protected:
    // this function is called from Create() to free the existing mask data
    virtual void FreeData() = 0;

    // these functions must be overridden to implement the corresponding public
    // Create() methods, they shouldn't call FreeData() as it's already called
    // by the public wrappers
    virtual bool InitFromColour(const wxBitmap& bitmap,
                                const wxColour& colour) = 0;
    virtual bool InitFromMonoBitmap(const wxBitmap& bitmap) = 0;
};

#if defined(__WXDFB__) || \
    defined(__WXMAC__) || \
    defined(__WXGTK__) || \
    defined(__WXMOTIF__) || \
    defined(__WXX11__) || \
    defined(__WXQT__)
    #define wxUSE_BITMAP_BASE 1
#else
    #define wxUSE_BITMAP_BASE 0
#endif

// a more readable way to tell
#define wxBITMAP_SCREEN_DEPTH       (-1)


// ----------------------------------------------------------------------------
// wxBitmapHelpers: container for various bitmap methods common to all ports.
// ----------------------------------------------------------------------------

// Unfortunately, currently wxBitmap does not inherit from wxBitmapBase on all
// platforms and this is not easy to fix. So we extract at least some common
// methods into this class from which both wxBitmapBase (and hence wxBitmap on
// all platforms where it does inherit from it) and wxBitmap in wxMSW and other
// exceptional ports (only wxPM and old wxCocoa) inherit.
class WXDLLIMPEXP_CORE wxBitmapHelpers
{
public:
    // Create a new wxBitmap from the PNG data in the given buffer.
    static wxBitmap NewFromPNGData(const void* data, size_t size);

    // Rescale the given bitmap to the requested size.
    static void Rescale(wxBitmap& bmp, const wxSize& sizeNeeded);
};


// All ports except wxMSW use wxBitmapHandler and wxBitmapBase as
// base class for wxBitmapHandler; wxMSW uses wxGDIImageHandler as
// base class since it allows some code reuse there.
#if wxUSE_BITMAP_BASE

// ----------------------------------------------------------------------------
// wxBitmapHandler: class which knows how to create/load/save bitmaps in
// different formats
// ----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxBitmapHandler : public wxObject
{
public:
    wxBitmapHandler() { m_type = wxBITMAP_TYPE_INVALID; }
    virtual ~wxBitmapHandler() { }

    // NOTE: the following functions should be pure virtuals, but they aren't
    //       because otherwise almost all ports would have to implement
    //       them as "return false"...

    virtual bool Create(wxBitmap *WXUNUSED(bitmap), const void* WXUNUSED(data),
                         wxBitmapType WXUNUSED(type), int WXUNUSED(width), int WXUNUSED(height),
                         int WXUNUSED(depth) = 1)
        { return false; }

    virtual bool LoadFile(wxBitmap *WXUNUSED(bitmap), const wxString& WXUNUSED(name),
                           wxBitmapType WXUNUSED(type), int WXUNUSED(desiredWidth),
                           int WXUNUSED(desiredHeight))
        { return false; }

    virtual bool SaveFile(const wxBitmap *WXUNUSED(bitmap), const wxString& WXUNUSED(name),
                           wxBitmapType WXUNUSED(type), const wxPalette *WXUNUSED(palette) = NULL) const
        { return false; }

    void SetName(const wxString& name)      { m_name = name; }
    void SetExtension(const wxString& ext)  { m_extension = ext; }
    void SetType(wxBitmapType type)         { m_type = type; }
    const wxString& GetName() const         { return m_name; }
    const wxString& GetExtension() const    { return m_extension; }
    wxBitmapType GetType() const            { return m_type; }

private:
    wxString      m_name;
    wxString      m_extension;
    wxBitmapType  m_type;

    wxDECLARE_ABSTRACT_CLASS(wxBitmapHandler);
};

// ----------------------------------------------------------------------------
// wxBitmap: class which represents platform-dependent bitmap (unlike wxImage)
// ----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxBitmapBase : public wxGDIObject,
                                      public wxBitmapHelpers
{
public:
    /*
    Derived class must implement these:

    wxBitmap();
    wxBitmap(const wxBitmap& bmp);
    wxBitmap(const char bits[], int width, int height, int depth = 1);
    wxBitmap(int width, int height, int depth = wxBITMAP_SCREEN_DEPTH);
    wxBitmap(const wxSize& sz, int depth = wxBITMAP_SCREEN_DEPTH);
    wxBitmap(const char* const* bits);
    wxBitmap(const wxString &filename, wxBitmapType type = wxBITMAP_TYPE_XPM);
    wxBitmap(const wxImage& image, int depth = wxBITMAP_SCREEN_DEPTH, double scale = 1.0);

    static void InitStandardHandlers();
    */

    virtual bool Create(int width, int height, int depth = wxBITMAP_SCREEN_DEPTH) = 0;
    virtual bool Create(const wxSize& sz, int depth = wxBITMAP_SCREEN_DEPTH) = 0;

    bool CreateWithDIPSize(const wxSize& sz,
                           double scale,
                           int depth = wxBITMAP_SCREEN_DEPTH)
        { return DoCreate(sz, scale, depth); }
    bool CreateWithDIPSize(int width, int height,
                           double scale,
                           int depth = wxBITMAP_SCREEN_DEPTH)
        { return DoCreate(wxSize(width, height), scale, depth); }

    virtual int GetHeight() const = 0;
    virtual int GetWidth() const = 0;
    virtual int GetDepth() const = 0;

    wxSize GetSize() const
        { return wxSize(GetWidth(), GetHeight()); }

    // Store or return the scale factor, which determines the ratio between the
    // bitmap physical size and its DIP size (on all platforms). By default
    // it's just 1.
    virtual void SetScaleFactor(double scale);
    virtual double GetScaleFactor() const;

    // This function returns the size divided by the scale factor, so that a
    // 64x64 bitmap with a scale factor of 2 has DIP size of 32x32 everywhere.
    wxSize GetDIPSize() const;

    // These functions return the corresponding metrics divided by the scale
    // factor on platforms with DPI-independent pixels (e.g. GTK, Mac) and just
    // return the same thing as normal accessors elsewhere (e.g. MSW).
    double GetLogicalWidth() const;
    double GetLogicalHeight() const;
    wxSize GetLogicalSize() const;

    // Old synonyms for CreateWithDIPSize() and GetLogicalXXX() functions,
    // prefer the new names in the new code.
    bool CreateScaled(int w, int h, int d, double logicalScale)
        { return CreateWithDIPSize(w, h, logicalScale, d); }
    double GetScaledWidth() const { return GetLogicalWidth(); }
    double GetScaledHeight() const { return GetLogicalHeight(); }
    wxSize GetScaledSize() const { return GetLogicalSize(); }

#if wxUSE_IMAGE
    virtual wxImage ConvertToImage() const = 0;

    // Convert to disabled (dimmed) bitmap.
    wxBitmap ConvertToDisabled(unsigned char brightness = 255) const;
#endif // wxUSE_IMAGE

    virtual wxMask *GetMask() const = 0;
    virtual void SetMask(wxMask *mask) = 0;

    virtual wxBitmap GetSubBitmap(const wxRect& rect) const = 0;

    virtual bool SaveFile(const wxString &name, wxBitmapType type,
                          const wxPalette *palette = NULL) const = 0;
    virtual bool LoadFile(const wxString &name, wxBitmapType type) = 0;

    /*
       If raw bitmap access is supported (see wx/rawbmp.h), the following
       methods should be implemented:

       virtual bool GetRawData(wxRawBitmapData *data) = 0;
       virtual void UngetRawData(wxRawBitmapData *data) = 0;
     */

#if wxUSE_PALETTE
    virtual wxPalette *GetPalette() const = 0;
    virtual void SetPalette(const wxPalette& palette) = 0;
#endif // wxUSE_PALETTE

    // Alpha support for 32bpp bitmaps: check if it's used, request that it be
    // used or not.
    virtual bool HasAlpha() const;
    virtual bool UseAlpha(bool use = true);
    void ResetAlpha() { UseAlpha(false); }

    // copies the contents and mask of the given (colour) icon to the bitmap
    bool CopyFromIcon(const wxIcon& icon);

    // implementation:
#if WXWIN_COMPATIBILITY_3_0
    // deprecated
    virtual void SetHeight(int height) = 0;
    virtual void SetWidth(int width) = 0;
    virtual void SetDepth(int depth) = 0;
#endif

    // Format handling
    static inline wxList& GetHandlers() { return sm_handlers; }
    static void AddHandler(wxBitmapHandler *handler);
    static void InsertHandler(wxBitmapHandler *handler);
    static bool RemoveHandler(const wxString& name);
    static wxBitmapHandler *FindHandler(const wxString& name);
    static wxBitmapHandler *FindHandler(const wxString& extension, wxBitmapType bitmapType);
    static wxBitmapHandler *FindHandler(wxBitmapType bitmapType);

    //static void InitStandardHandlers();
    //  (wxBitmap must implement this one)

    static void CleanUpHandlers();

    // this method is only used by the generic implementation of wxMask
    // currently but could be useful elsewhere in the future: it can be
    // overridden to quantize the colour to correspond to bitmap colour depth
    // if necessary; default implementation simply returns the colour as is
    virtual wxColour QuantizeColour(const wxColour& colour) const
    {
        return colour;
    }

protected:
    virtual bool DoCreate(const wxSize& sz, double scale, int depth);

    static wxList sm_handlers;

    wxDECLARE_ABSTRACT_CLASS(wxBitmapBase);
};

#endif // wxUSE_BITMAP_BASE


// the wxBITMAP_DEFAULT_TYPE constant defines the default argument value
// for wxBitmap's ctor and wxBitmap::LoadFile() functions.
#if defined(__WXMSW__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_BMP_RESOURCE
    #include "wx/msw/bitmap.h"
#elif defined(__WXMOTIF__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_XPM
    #include "wx/x11/bitmap.h"
#elif defined(__WXGTK20__)
    #ifdef __WINDOWS__
        #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_BMP_RESOURCE
    #else
        #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_XPM
    #endif
    #include "wx/gtk/bitmap.h"
#elif defined(__WXGTK__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_XPM
    #include "wx/gtk1/bitmap.h"
#elif defined(__WXX11__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_XPM
    #include "wx/x11/bitmap.h"
#elif defined(__WXDFB__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_BMP_RESOURCE
    #include "wx/dfb/bitmap.h"
#elif defined(__WXMAC__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_PICT_RESOURCE
    #ifndef __CPPAST__
        #include "wx/osx/bitmap.h"
    #else
#ifndef _WX_BITMAP_H_
#define _WX_BITMAP_H_

#include "wx/palette.h"

// Bitmap
class wxBitmapRefData ;

// A mask is a bitmap used for drawing bitmaps
// Internally it is stored as a 8 bit deep memory chunk, 0 = black means the source will be drawn
// 255 = white means the source will not be drawn, no other values will be present
// 8 bit is chosen only for performance reasons, note also that this is the inverse value range
// from alpha, where 0 = invisible , 255 = fully drawn

class WXDLLIMPEXP_CORE wxMask: public wxMaskBase
{
    wxDECLARE_DYNAMIC_CLASS(wxMask);

public:
    wxMask();

    // Copy constructor
    wxMask(const wxMask& mask);

    // Construct a mask from a bitmap and a colour indicating
    // the transparent area
    wxMask(const wxBitmap& bitmap, const wxColour& colour);

    // Construct a mask from a mono bitmap (black meaning show pixels, white meaning transparent)
    wxMask(const wxBitmap& bitmap);

    virtual ~wxMask();

    wxBitmap GetBitmap() const;

    // Implementation below

    void Init() ;

    // a 8 bit depth mask
    void* GetRawAccess() const;
    int GetBytesPerRow() const;
    int GetWidth() const;
    int GetHeight() const;

    // renders/updates native representation when necessary
    void RealizeNative() ;

    WXHBITMAP GetHBITMAP() const ;

    // implementation helper only : construct a mask from a 8 bpp memory buffer
    bool OSXCreate(const wxMemoryBuffer& buf, int width , int height , int bytesPerRow ) ;

protected:
    // this function is called from Create() to free the existing mask data
    virtual void FreeData() wxOVERRIDE;

    // these functions must be overridden to implement the corresponding public
    // Create() methods, they shouldn't call FreeData() as it's already called
    // by the public wrappers
    virtual bool InitFromColour(const wxBitmap& bitmap,
                                const wxColour& colour) wxOVERRIDE;
    virtual bool InitFromMonoBitmap(const wxBitmap& bitmap) wxOVERRIDE;

private:
    void DoCreateMaskBitmap(int width, int height, int bytesPerRow = -1);

    wxCFRef<CGContextRef> m_maskBitmap ;

};

class WXDLLIMPEXP_CORE wxBitmap: public wxBitmapBase
{
    wxDECLARE_DYNAMIC_CLASS(wxBitmap);

    friend class WXDLLIMPEXP_FWD_CORE wxBitmapHandler;

public:
    wxBitmap() {} // Platform-specific

    // Initialize with raw data.
    wxBitmap(const char bits[], int width, int height, int depth = 1);

    // Initialize with XPM data
    wxBitmap(const char* const* bits);

    // Load a file or resource
    wxBitmap(const wxString& name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE);

    // Constructor for generalised creation from data
    wxBitmap(const void* data, wxBitmapType type, int width, int height, int depth = 1);

    // creates an bitmap from the native image format
    wxBitmap(CGImageRef image, double scale = 1.0);
    wxBitmap(WXImage image);
    wxBitmap(CGContextRef bitmapcontext);

    // Create a bitmap compatible with the given DC
    wxBitmap(int width, int height, const wxDC& dc);

    // If depth is omitted, will create a bitmap compatible with the display
    wxBitmap(int width, int height, int depth = -1) { (void)Create(width, height, depth); }
    wxBitmap(const wxSize& sz, int depth = -1) { (void)Create(sz, depth); }

    // Convert from wxImage:
    wxBitmap(const wxImage& image, int depth = -1, double scale = 1.0);
    wxBitmap(const wxImage& image, const wxDC& dc);

    // Convert from wxIcon
    wxBitmap(const wxIcon& icon) { CopyFromIcon(icon); }

#if wxOSX_USE_COCOA
    // Convert from wxCursor
    wxBitmap(const wxCursor &cursor);
#endif

    virtual ~wxBitmap() {}

    wxImage ConvertToImage() const wxOVERRIDE;

    // get the given part of bitmap
    wxBitmap GetSubBitmap( const wxRect& rect ) const wxOVERRIDE;

    virtual bool Create(int width, int height, int depth = wxBITMAP_SCREEN_DEPTH) wxOVERRIDE;
    virtual bool Create(const wxSize& sz, int depth = wxBITMAP_SCREEN_DEPTH) wxOVERRIDE
        { return Create(sz.GetWidth(), sz.GetHeight(), depth); }

    virtual bool Create(const void* data, wxBitmapType type, int width, int height, int depth = 1);
    bool Create( CGImageRef image, double scale = 1.0 );
    bool Create( WXImage image );
    bool Create( CGContextRef bitmapcontext);

    // Create a bitmap compatible with the given DC, inheriting its magnification factor
    bool Create(int width, int height, const wxDC& dc);

    // virtual bool Create( WXHICON icon) ;
    virtual bool LoadFile(const wxString& name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE) wxOVERRIDE;
    virtual bool SaveFile(const wxString& name, wxBitmapType type, const wxPalette *cmap = NULL) const wxOVERRIDE;

    const wxBitmapRefData *GetBitmapData() const
        { return (const wxBitmapRefData *)m_refData; }

    wxBitmapRefData *GetBitmapData()
        { return (wxBitmapRefData *)m_refData; }

    int GetWidth() const wxOVERRIDE;
    int GetHeight() const wxOVERRIDE;
    int GetDepth() const wxOVERRIDE;

#if WXWIN_COMPATIBILITY_3_0
    wxDEPRECATED_MSG("this value is determined during creation, this method could lead to inconsistencies")
    void SetWidth(int width) wxOVERRIDE;
    wxDEPRECATED_MSG("this value is determined during creation, this method could lead to inconsistencies")
    void SetHeight(int height) wxOVERRIDE;
    wxDEPRECATED_MSG("this value is determined during creation, this method could lead to inconsistencies")
    void SetDepth(int depth) wxOVERRIDE;
#endif

#if wxUSE_PALETTE
    wxPalette* GetPalette() const wxOVERRIDE;
    void SetPalette(const wxPalette& palette) wxOVERRIDE;
#endif // wxUSE_PALETTE

    wxMask *GetMask() const wxOVERRIDE;
    void SetMask(wxMask *mask) wxOVERRIDE;

    static void InitStandardHandlers();

    // raw bitmap access support functions, for internal use only
    void *GetRawData(wxPixelDataBase& data, int bpp);
    void UngetRawData(wxPixelDataBase& data);

    bool HasAlpha() const wxOVERRIDE;
    bool UseAlpha(bool use = true) wxOVERRIDE;

    // returns the 'native' implementation, a GWorldPtr for the content and one for the mask
    WXHBITMAP GetHBITMAP( WXHBITMAP * mask = NULL ) const;

    // returns a CGImageRef which must released after usage with CGImageRelease
    CGImageRef CreateCGImage() const ;

    // returns nil for invalid bitmap
    WXImage OSXGetImage() const;
#if wxOSX_USE_COCOA
    // returns an autoreleased version of the image
    WX_NSImage GetNSImage() const
        { return OSXGetImage(); }
#endif
#if wxOSX_USE_IPHONE
    // returns an autoreleased version of the image
    WX_UIImage GetUIImage() const
        { return OSXGetImage(); }
#endif

#if WXWIN_COMPATIBILITY_3_0

#if wxOSX_USE_ICONREF
    // returns a IconRef which must be retained before and released after usage
    wxDEPRECATED_MSG("IconRefs are deprecated, this will be removed in the future")
    IconRef GetIconRef() const;
    // returns a IconRef which must be released after usage
    wxDEPRECATED_MSG("IconRefs are deprecated, this will be removed in the future")
    IconRef CreateIconRef() const;
#endif

    // get read only access to the underlying buffer
    wxDEPRECATED_MSG("use GetRawData for accessing the buffer")
    const void *GetRawAccess() const;
    // brackets to the underlying OS structure for read/write access
    // makes sure that no cached images will be constructed until terminated
    wxDEPRECATED_MSG("use GetRawData for accessing the buffer")
    void *BeginRawAccess();
    wxDEPRECATED_MSG("use GetRawData for accessing the buffer")
    void EndRawAccess();
#endif

    void SetScaleFactor(double scale) wxOVERRIDE;
    double GetScaleFactor() const wxOVERRIDE;

    void SetSelectedInto(wxDC *dc);
    wxDC *GetSelectedInto() const;

protected:
    virtual wxGDIRefData *CreateGDIRefData() const wxOVERRIDE;
    virtual wxGDIRefData *CloneGDIRefData(const wxGDIRefData *data) const wxOVERRIDE;

    virtual bool DoCreate(const wxSize& sz, double scale, int depth) wxOVERRIDE;

private:
    void InitFromImage(const wxImage& image, int depth, double scale);
};

#endif // _WX_BITMAP_H_
    #endif
#elif defined(__WXQT__)
    #define wxBITMAP_DEFAULT_TYPE    wxBITMAP_TYPE_XPM
    #include "wx/qt/bitmap.h"
#endif

#if wxUSE_IMAGE
inline
wxBitmap
#if wxUSE_BITMAP_BASE
wxBitmapBase::
#else
wxBitmap::
#endif
ConvertToDisabled(unsigned char brightness) const
{
    const wxImage imgDisabled = ConvertToImage().ConvertToDisabled(brightness);
    return wxBitmap(imgDisabled, -1, GetScaleFactor());
}
#endif // wxUSE_IMAGE

// we must include generic mask.h after wxBitmap definition
#if defined(__WXDFB__)
    #define wxUSE_GENERIC_MASK 1
#else
    #define wxUSE_GENERIC_MASK 0
#endif

#if wxUSE_GENERIC_MASK
    #include "wx/generic/mask.h"
#endif

#endif // _WX_BITMAP_H_BASE_
