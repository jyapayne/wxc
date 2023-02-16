#ifndef _WX_EVENTFILTER_H_EXT_
#define _WX_EVENTFILTER_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxEventFilterExt;
typedef int (*wxEventFilterExtFilterEvent__wxEventRFunc)(const wxEventFilterExt* self, wxEvent& event);

class wxEventFilterExt: public wxEventFilter
{
public:
  wxEventFilterExt(): wxEventFilter()  {  }
  virtual ~wxEventFilterExt()  {  }
  wxEventFilterExtFilterEvent__wxEventRFunc m_wxEventFilterExtFilterEvent__wxEventR = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    if (*m_wxEventFilterExtFilterEvent__wxEventR != NULL){
      return m_wxEventFilterExtFilterEvent__wxEventR(this, event);
    }
    else {
      return 0;
    }
  }
  wxEventFilterExt(wxEventFilterExtFilterEvent__wxEventRFunc a_FilterEvent__wxEventR): wxEventFilter() {
    m_wxEventFilterExtFilterEvent__wxEventR = a_FilterEvent__wxEventR;
  }
};



#endif
