#ifndef _WX_EVENTFILTER_H_EXT_
#define _WX_EVENTFILTER_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxEventFilterExt;
typedef int (*wxEventFilterExtFilterEventFunc)(const wxEventFilterExt* self, wxEvent& event);

class wxEventFilterExt: public wxEventFilter
{
public:
  wxEventFilterExt(): wxEventFilter()  {  }
  virtual ~wxEventFilterExt()  {  }
  wxEventFilterExtFilterEventFunc m_wxEventFilterExtFilterEvent = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    int res = wxEventFilter::FilterEvent(event);
    if (*m_wxEventFilterExtFilterEvent != NULL){
      return m_wxEventFilterExtFilterEvent(this, event);
    }
    else {
      return res;
    }
  }
  wxEventFilterExt(wxEventFilterExtFilterEventFunc a_FilterEvent): wxEventFilter() {
    m_wxEventFilterExtFilterEvent = a_FilterEvent;
  }
};



#endif
