/////////////////////////////////////////////////////////////////////////////
// Name:        wx/help.h
// Purpose:     wxHelpController base header
// Author:      wxWidgets Team
// Modified by:
// Created:
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_HELP_H_BASE_
#define _WX_HELP_H_BASE_

#include "wx/defs.h"

#if wxUSE_HELP

#ifndef _WX_HELPBASEH__
#define _WX_HELPBASEH__

#include "wx/defs.h"

#if wxUSE_HELP

#include "wx/object.h"
#include "wx/string.h"
#include "wx/gdicmn.h"
#include "wx/frame.h"

// Flags for SetViewer
#define wxHELP_NETSCAPE     1

// Search modes:
enum wxHelpSearchMode
{
    wxHELP_SEARCH_INDEX,
    wxHELP_SEARCH_ALL
};

// Defines the API for help controllers
class WXDLLIMPEXP_CORE wxHelpControllerBase: public wxObject
{
public:
    inline wxHelpControllerBase(wxWindow* parentWindow = NULL) { m_parentWindow = parentWindow; }
    inline ~wxHelpControllerBase() {}

    // Must call this to set the filename and server name.
    // server is only required when implementing TCP/IP-based
    // help controllers.
    virtual bool Initialize(const wxString& WXUNUSED(file), int WXUNUSED(server) ) { return false; }
    virtual bool Initialize(const wxString& WXUNUSED(file)) { return false; }

    // Set viewer: only relevant to some kinds of controller
    virtual void SetViewer(const wxString& WXUNUSED(viewer), long WXUNUSED(flags) = 0) {}

    // If file is "", reloads file given  in Initialize
    virtual bool LoadFile(const wxString& file = wxEmptyString) = 0;

    // Displays the contents
    virtual bool DisplayContents() = 0;

    // Display the given section
    virtual bool DisplaySection(int sectionNo) = 0;

    // Display the section using a context id
    virtual bool DisplayContextPopup(int WXUNUSED(contextId)) { return false; }

    // Display the text in a popup, if possible
    virtual bool DisplayTextPopup(const wxString& WXUNUSED(text), const wxPoint& WXUNUSED(pos)) { return false; }

    // By default, uses KeywordSection to display a topic. Implementations
    // may override this for more specific behaviour.
    virtual bool DisplaySection(const wxString& section) { return KeywordSearch(section); }
    virtual bool DisplayBlock(long blockNo) = 0;
    virtual bool KeywordSearch(const wxString& k,
                               wxHelpSearchMode mode = wxHELP_SEARCH_ALL) = 0;
    /// Allows one to override the default settings for the help frame.
    virtual void SetFrameParameters(const wxString& WXUNUSED(title),
        const wxSize& WXUNUSED(size),
        const wxPoint& WXUNUSED(pos) = wxDefaultPosition,
        bool WXUNUSED(newFrameEachTime) = false)
    {
        // does nothing by default
    }
    /// Obtains the latest settings used by the help frame and the help
    /// frame.
    virtual wxFrame *GetFrameParameters(wxSize *WXUNUSED(size) = NULL,
        wxPoint *WXUNUSED(pos) = NULL,
        bool *WXUNUSED(newFrameEachTime) = NULL)
    {
        return NULL; // does nothing by default
    }

    virtual bool Quit() = 0;
    virtual void OnQuit() {}

    /// Set the window that can optionally be used for the help window's parent.
    virtual void SetParentWindow(wxWindow* win) { m_parentWindow = win; }

    /// Get the window that can optionally be used for the help window's parent.
    virtual wxWindow* GetParentWindow() const { return m_parentWindow; }

protected:
    wxWindow* m_parentWindow;
private:
    wxDECLARE_CLASS(wxHelpControllerBase);
};

#endif // wxUSE_HELP

#endif
// _WX_HELPBASEH__

#if defined(__WXMSW__)
    #include "wx/msw/helpchm.h"

    #define wxHelpController wxCHMHelpController
#else // !MSW

#if wxUSE_WXHTML_HELP
    #include "wx/html/helpctrl.h"
    #define wxHelpController wxHtmlHelpController
#else
#ifndef __WX_HELPEXT_H_
#define __WX_HELPEXT_H_

#if wxUSE_HELP


// ----------------------------------------------------------------------------
// headers
// ----------------------------------------------------------------------------

#include "wx/helpbase.h"


// ----------------------------------------------------------------------------
// wxExtHelpController
// ----------------------------------------------------------------------------

// This class implements help via an external browser.
class WXDLLIMPEXP_ADV wxExtHelpController : public wxHelpControllerBase
{
public:
    wxExtHelpController(wxWindow* parentWindow = NULL);
    virtual ~wxExtHelpController();

#if WXWIN_COMPATIBILITY_2_8
    wxDEPRECATED(void SetBrowser(const wxString& browsername = wxEmptyString, bool isNetscape = false) );
#endif

    // Set viewer: new name for SetBrowser
    virtual void SetViewer(const wxString& viewer = wxEmptyString,
                            long flags = wxHELP_NETSCAPE) wxOVERRIDE;

    virtual bool Initialize(const wxString& dir, int WXUNUSED(server)) wxOVERRIDE
        { return Initialize(dir); }

    virtual bool Initialize(const wxString& dir) wxOVERRIDE;
    virtual bool LoadFile(const wxString& file = wxEmptyString) wxOVERRIDE;
    virtual bool DisplayContents() wxOVERRIDE;
    virtual bool DisplaySection(int sectionNo) wxOVERRIDE;
    virtual bool DisplaySection(const wxString& section) wxOVERRIDE;
    virtual bool DisplayBlock(long blockNo) wxOVERRIDE;
    virtual bool KeywordSearch(const wxString& k,
                                wxHelpSearchMode mode = wxHELP_SEARCH_ALL) wxOVERRIDE;

    virtual bool Quit() wxOVERRIDE;
    virtual void OnQuit() wxOVERRIDE;

    virtual bool DisplayHelp(const wxString &) ;

    virtual void SetFrameParameters(const wxString& WXUNUSED(title),
                                    const wxSize& WXUNUSED(size),
                                    const wxPoint& WXUNUSED(pos) = wxDefaultPosition,
                                    bool WXUNUSED(newFrameEachTime) = false) wxOVERRIDE
        {
            // does nothing by default
        }

    virtual wxFrame *GetFrameParameters(wxSize *WXUNUSED(size) = NULL,
                                    wxPoint *WXUNUSED(pos) = NULL,
                                    bool *WXUNUSED(newFrameEachTime) = NULL) wxOVERRIDE
        {
            return NULL; // does nothing by default
        }

protected:
    // Filename of currently active map file.
    wxString         m_helpDir;

    // How many entries do we have in the map file?
    int              m_NumOfEntries;

    // A list containing all id,url,documentation triples.
    wxList          *m_MapList;

private:
    // parse a single line of the map file (called by LoadFile())
    //
    // return true if the line was valid or false otherwise
    bool ParseMapFileLine(const wxString& line);

    // Deletes the list and all objects.
    void DeleteList();


    // How to call the html viewer.
    wxString         m_BrowserName;

    // Is the viewer a variant of netscape?
    bool             m_BrowserIsNetscape;

    wxDECLARE_CLASS(wxExtHelpController);
};

#endif // wxUSE_HELP

#endif // __WX_HELPEXT_H_
    #define wxHelpController wxExtHelpController
#endif

#endif // MSW/!MSW

#endif // wxUSE_HELP

#endif
    // _WX_HELP_H_BASE_
