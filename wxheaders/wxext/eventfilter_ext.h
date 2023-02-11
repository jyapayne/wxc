#ifndef _WX_EVENTFILTER_H_EXT_
#define _WX_EVENTFILTER_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxEventFilterExt;
typedef int (*wxEventFilterExtFilterEventwxEventRFunc)(const wxEventFilterExt* self, wxEvent& event);

class wxEventFilterExt: public wxEventFilter
{
public:
  wxEventFilterExt(): wxEventFilter()  {  }
  virtual ~wxEventFilterExt()  {  }
  wxEventFilterExtFilterEventwxEventRFunc m_wxEventFilterExtFilterEventwxEventR = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    if (*m_wxEventFilterExtFilterEventwxEventR != NULL){
      return m_wxEventFilterExtFilterEventwxEventR(this, event);
    }
    else {
      return 0;
    }
  }
  wxEventFilterExt(wxEventFilterExtFilterEventwxEventRFunc a_FilterEventwxEventR): wxEventFilter() {
    m_wxEventFilterExtFilterEventwxEventR = a_FilterEventwxEventR;
  }
};



#endif
