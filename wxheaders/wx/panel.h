/////////////////////////////////////////////////////////////////////////////
// Name:        wx/panel.h
// Purpose:     Base header for wxPanel
// Author:      Julian Smart
// Modified by:
// Created:
// Copyright:   (c) Julian Smart
//              (c) 2011 Vadim Zeitlin <vadim@wxwidgets.org>
// Licence:     wxWindows Licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_PANEL_H_BASE_
#define _WX_PANEL_H_BASE_

// ----------------------------------------------------------------------------
// headers and forward declarations
// ----------------------------------------------------------------------------

#include "wx/window.h"
#include "wx/containr.h"

class WXDLLIMPEXP_FWD_CORE wxControlContainer;

extern WXDLLIMPEXP_DATA_CORE(const char) wxPanelNameStr[];

// ----------------------------------------------------------------------------
// wxPanel contains other controls and implements TAB traversal between them
// ----------------------------------------------------------------------------

// The template parameter W must be a wxWindow-derived class.
class wxNavigationEnabledWindow : public wxWindow
{
public:
    typedef wxWindow BaseWindowClass;

    wxNavigationEnabledWindow()
    {
        m_container.SetContainerWindow(this);

#ifndef wxHAS_NATIVE_TAB_TRAVERSAL
        BaseWindowClass::Bind(wxEVT_NAVIGATION_KEY,
                              &wxNavigationEnabledWindow::OnNavigationKey, this);

        BaseWindowClass::Bind(wxEVT_SET_FOCUS,
                              &wxNavigationEnabledWindow::OnFocus, this);
        BaseWindowClass::Bind(wxEVT_CHILD_FOCUS,
                              &wxNavigationEnabledWindow::OnChildFocus, this);
#endif // !wxHAS_NATIVE_TAB_TRAVERSAL
    }

    WXDLLIMPEXP_INLINE_CORE virtual bool AcceptsFocus() const wxOVERRIDE
    {
        return m_container.AcceptsFocus();
    }

    WXDLLIMPEXP_INLINE_CORE virtual bool AcceptsFocusRecursively() const wxOVERRIDE
    {
        return m_container.AcceptsFocusRecursively();
    }

    WXDLLIMPEXP_INLINE_CORE virtual bool AcceptsFocusFromKeyboard() const wxOVERRIDE
    {
        return m_container.AcceptsFocusFromKeyboard();
    }

    WXDLLIMPEXP_INLINE_CORE virtual void AddChild(wxWindowBase *child) wxOVERRIDE
    {
        BaseWindowClass::AddChild(child);

        if ( m_container.UpdateCanFocusChildren() )
        {
            // Under MSW we must have wxTAB_TRAVERSAL style for TAB navigation
            // to work.
            if ( !BaseWindowClass::HasFlag(wxTAB_TRAVERSAL) )
                BaseWindowClass::ToggleWindowStyle(wxTAB_TRAVERSAL);
        }
    }

    WXDLLIMPEXP_INLINE_CORE virtual void RemoveChild(wxWindowBase *child) wxOVERRIDE
    {
#ifndef wxHAS_NATIVE_TAB_TRAVERSAL
        m_container.HandleOnWindowDestroy(child);
#endif // !wxHAS_NATIVE_TAB_TRAVERSAL

        BaseWindowClass::RemoveChild(child);

        // We could reset wxTAB_TRAVERSAL here but it doesn't seem to do any
        // harm to keep it.
        m_container.UpdateCanFocusChildren();
    }

    WXDLLIMPEXP_INLINE_CORE virtual void SetFocus() wxOVERRIDE
    {
        if ( !m_container.DoSetFocus() )
            BaseWindowClass::SetFocus();
    }

    void SetFocusIgnoringChildren()
    {
        BaseWindowClass::SetFocus();
    }

#ifdef __WXMSW__
    WXDLLIMPEXP_INLINE_CORE virtual bool HasTransparentBackground() wxOVERRIDE
    {
        return m_container.HasTransparentBackground();
    }

    WXDLLIMPEXP_INLINE_CORE
    virtual void WXSetPendingFocus(wxWindow* win) wxOVERRIDE
    {
        return m_container.SetLastFocus(win);
    }
#endif // __WXMSW__

protected:
#ifndef wxHAS_NATIVE_TAB_TRAVERSAL
    void OnNavigationKey(wxNavigationKeyEvent& event)
    {
        m_container.HandleOnNavigationKey(event);
    }

    void OnFocus(wxFocusEvent& event)
    {
        m_container.HandleOnFocus(event);
    }

    void OnChildFocus(wxChildFocusEvent& event)
    {
        m_container.SetLastFocus(event.GetWindow());
        event.Skip();
    }
#endif // !wxHAS_NATIVE_TAB_TRAVERSAL

    wxControlContainer m_container;


    wxDECLARE_NO_COPY_CLASS(wxNavigationEnabledWindow);
};

class WXDLLIMPEXP_CORE wxPanelBase : public wxNavigationEnabledWindow
{
public:
    wxPanelBase() { }

    // Derived classes should also provide this constructor:
    /*
    wxPanelBase(wxWindow *parent,
                wxWindowID winid = wxID_ANY,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = wxTAB_TRAVERSAL | wxNO_BORDER,
                const wxString& name = wxASCII_STR(wxPanelNameStr));
    */

    // Pseudo ctor
    bool Create(wxWindow *parent,
                wxWindowID winid = wxID_ANY,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = wxTAB_TRAVERSAL | wxNO_BORDER,
                const wxString& name = wxASCII_STR(wxPanelNameStr));


    // implementation from now on
    // --------------------------

    virtual void InitDialog() wxOVERRIDE;

private:
    wxDECLARE_NO_COPY_CLASS(wxPanelBase);
};

#if defined(__WXUNIVERSAL__)
    #include "wx/univ/panel.h"
#elif defined(__WXMSW__)
    #include "wx/msw/panel.h"
#else
    #define wxHAS_GENERIC_PANEL
    #ifndef __CPPAST__
        #include "wx/generic/panelg.h"
    #else
#ifndef _WX_GENERIC_PANELG_H_
#define _WX_GENERIC_PANELG_H_

#include "wx/bitmap.h"

class WXDLLIMPEXP_CORE wxPanel : public wxPanelBase
{
public:
    wxPanel() { }

    // Constructor
    wxPanel(wxWindow *parent,
            wxWindowID winid = wxID_ANY,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = wxTAB_TRAVERSAL | wxNO_BORDER,
            const wxString& name = wxASCII_STR(wxPanelNameStr))
    {
        Create(parent, winid, pos, size, style, name);
    }

#if WXWIN_COMPATIBILITY_2_8
    wxDEPRECATED_CONSTRUCTOR(
    wxPanel(wxWindow *parent,
            int x, int y, int width, int height,
            long style = wxTAB_TRAVERSAL | wxNO_BORDER,
            const wxString& name = wxASCII_STR(wxPanelNameStr))
    {
        Create(parent, wxID_ANY, wxPoint(x, y), wxSize(width, height), style, name);
    }
    )
#endif // WXWIN_COMPATIBILITY_2_8

private:
    wxDECLARE_DYNAMIC_CLASS_NO_COPY(wxPanel);
};

#endif // _WX_GENERIC_PANELG_H_
#endif
#endif

#endif // _WX_PANELH_BASE_
