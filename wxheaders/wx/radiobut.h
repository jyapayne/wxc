///////////////////////////////////////////////////////////////////////////////
// Name:        wx/radiobut.h
// Purpose:     wxRadioButton declaration
// Author:      Vadim Zeitlin
// Modified by:
// Created:     07.09.00
// Copyright:   (c) Vadim Zeitlin
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#ifndef _WX_RADIOBUT_H_BASE_
#define _WX_RADIOBUT_H_BASE_

#include "wx/defs.h"

#if wxUSE_RADIOBTN

#include "wx/control.h"

class WXDLLIMPEXP_FWD_CORE wxRadioButton;

// TODO: In wxUniv, wxRadioButton must derive from wxCheckBox as it reuses
// much of its code. This should be fixed by refactoring wxCheckBox to allow
// this class to reuse its functionality without inheriting from it, but for
// now use this hack to allow the existing code to compile.
#ifdef __WXUNIVERSAL__
    #include "wx/checkbox.h"

    typedef wxCheckBox wxRadioButtonBaseBase;
#else
    typedef wxControl wxRadioButtonBaseBase;
#endif

class WXDLLIMPEXP_CORE wxRadioButtonBase : public wxRadioButtonBaseBase
{
public:
    wxRadioButtonBase() { }

    // Methods to be implemented by the derived classes:
    virtual void SetValue(bool value) = 0;
    virtual bool GetValue() const = 0;


    // Methods implemented by this class itself.
    wxRadioButton* GetFirstInGroup() const;
    wxRadioButton* GetLastInGroup() const;
    wxRadioButton* GetPreviousInGroup() const;
    wxRadioButton* GetNextInGroup() const;

private:
    wxDECLARE_NO_COPY_CLASS(wxRadioButtonBase);
};

extern WXDLLIMPEXP_DATA_CORE(const char) wxRadioButtonNameStr[];

#if defined(__WXUNIVERSAL__)
    #include "wx/univ/radiobut.h"
#elif defined(__WXMSW__)
    #include "wx/msw/radiobut.h"
#elif defined(__WXMOTIF__)
    #include "wx/motif/radiobut.h"
#elif defined(__WXGTK20__)
    #include "wx/gtk/radiobut.h"
#elif defined(__WXGTK__)
    #include "wx/gtk1/radiobut.h"
#elif defined(__WXMAC__)
    #ifndef __CPPAST__
        #include "wx/osx/radiobut.h"
    #else
#ifndef _WX_RADIOBUT_H_
#define _WX_RADIOBUT_H_

class WXDLLIMPEXP_CORE wxRadioButton: public wxRadioButtonBase
{
    wxDECLARE_DYNAMIC_CLASS(wxRadioButton);

public:
    wxRadioButton() {}
    wxRadioButton(wxWindow *parent, wxWindowID id,
           const wxString& label,
           const wxPoint& pos = wxDefaultPosition,
           const wxSize& size = wxDefaultSize, long style = 0,
           const wxValidator& validator = wxDefaultValidator,
           const wxString& name = wxASCII_STR(wxRadioButtonNameStr))
    {
        Create(parent, id, label, pos, size, style, validator, name);
    }
    virtual ~wxRadioButton();

    bool Create(wxWindow *parent, wxWindowID id,
           const wxString& label,
           const wxPoint& pos = wxDefaultPosition,
           const wxSize& size = wxDefaultSize, long style = 0,
           const wxValidator& validator = wxDefaultValidator,
           const wxString& name = wxASCII_STR(wxRadioButtonNameStr));

    virtual void SetValue(bool val) wxOVERRIDE;
    virtual bool GetValue() const wxOVERRIDE;

    // implementation

    void Command(wxCommandEvent& event) wxOVERRIDE;
    wxRadioButton *AddInCycle(wxRadioButton *cycle);
    void RemoveFromCycle();
    wxRadioButton *NextInCycle() {return m_cycle;}

    // osx specific event handling common for all osx-ports

  protected:

    wxRadioButton *m_cycle;
};

// Not implemented
#if 0
class WXDLLIMPEXP_FWD_CORE wxBitmap ;

WXDLLIMPEXP_DATA_CORE(extern const wxChar) wxBitmapRadioButtonNameStr[];

class WXDLLIMPEXP_CORE wxBitmapRadioButton: public wxRadioButton
{
  wxDECLARE_DYNAMIC_CLASS(wxBitmapRadioButton);
protected:
  wxBitmap *theButtonBitmap;
public:
  wxBitmapRadioButton() { theButtonBitmap = NULL; }
  wxBitmapRadioButton(wxWindow *parent, wxWindowID id,
           const wxBitmap *label,
           const wxPoint& pos = wxDefaultPosition,
           const wxSize& size = wxDefaultSize, long style = 0,
           const wxValidator& validator = wxDefaultValidator,
           const wxString& name = wxBitmapRadioButtonNameStr)
  {
      Create(parent, id, label, pos, size, style, validator, name);
  }

  bool Create(wxWindow *parent, wxWindowID id,
           const wxBitmap *label,
           const wxPoint& pos = wxDefaultPosition,
           const wxSize& size = wxDefaultSize, long style = 0,
           const wxValidator& validator = wxDefaultValidator,
           const wxString& name = wxBitmapRadioButtonNameStr);

  virtual void SetLabel(const wxBitmap *label);
  virtual void SetValue(bool val) ;
  virtual bool GetValue() const ;
};
#endif

#endif
    // _WX_RADIOBUT_H_
#endif
#elif defined(__WXQT__)
    #include "wx/qt/radiobut.h"
#endif

#endif // wxUSE_RADIOBTN

#endif
    // _WX_RADIOBUT_H_BASE_
