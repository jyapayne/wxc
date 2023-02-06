#if defined(__WXMSW__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowMSW
    #else // !wxUniv
        #define wxWindowMSW wxWindowExt
    #endif // wxUniv/!wxUniv
    #include "wxext/msw/window_ext.h"
#elif defined(__WXMOTIF__)
    #include "wxext/motif/window_ext.h"
#elif defined(__WXGTK20__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowGTK
    #else // !wxUniv
        #define wxWindowGTK wxWindowExt
    #endif // wxUniv
    #include "wxext/gtk/window_ext.h"
#elif defined(__WXGTK__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowGTK
    #else // !wxUniv
        #define wxWindowGTK wxWindowExt
    #endif // wxUniv
    #include "wxext/gtk1/window_ext.h"
#elif defined(__WXX11__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowX11
    #else // !wxUniv
        #define wxWindowX11 wxWindowExt
    #endif // wxUniv
    #include "wxext/x11/window_ext.h"
#elif defined(__WXDFB__)
    #define wxWindowNative wxWindowDFB
    #include "wxext/dfb/window_ext.h"
#elif defined(__WXMAC__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowMac
    #else // !wxUniv
        #define wxWindowMacExt wxWindowExt
    #endif // wxUniv
    #include "wxext/osx/window_ext.h"
#elif defined(__WXQT__)
    #ifdef __WXUNIVERSAL__
        #define wxWindowNative wxWindowQt
    #else // !wxUniv
        #define wxWindowQt wxWindowExt
    #endif // wxUniv
    #include "wxext/qt/window_ext.h"
#endif

// for wxUniversal, we now derive the real wxWindow from wxWindow<platform>,
// for the native ports we already have defined it above
#if defined(__WXUNIVERSAL__)
    #ifndef wxWindowNative
        #error "wxWindowNative must be defined above!"
    #endif

    #include "wxext/univ/window_ext.h"
#endif // wxUniv
