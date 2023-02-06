#ifndef _WX_TRACKER_H_EXT_
#define _WX_TRACKER_H_EXT_

#include <wx/wx.h>
#include <wx/tracker.h>
#include <wx/vidmode.h>

class wxTrackerNodeExt;
typedef void (*wxTrackerNodeExtOnObjectDestroyFunc)(const wxTrackerNodeExt* self);
class wxTrackableExt;

class wxTrackerNodeExt: public wxTrackerNode
{
public:
  wxTrackerNodeExt(): wxTrackerNode()  {  }
  virtual ~wxTrackerNodeExt()  {  }
  wxTrackerNodeExtOnObjectDestroyFunc m_wxTrackerNodeExtOnObjectDestroy = NULL;
  virtual void OnObjectDestroy() override
  {
    wxTrackerNode::OnObjectDestroy();
    if (*m_wxTrackerNodeExtOnObjectDestroy != NULL){
      return m_wxTrackerNodeExtOnObjectDestroy(this);
    }
  }
  wxTrackerNodeExt(wxTrackerNodeExtOnObjectDestroyFunc a_OnObjectDestroy): wxTrackerNode() {
    m_wxTrackerNodeExtOnObjectDestroy = a_OnObjectDestroy;
  }
};

class wxTrackableExt: public wxTrackable
{
public:
  wxTrackableExt(): wxTrackable()  {  }
  wxTrackableExt(wxTrackable const& param0): wxTrackable(param0)  {  }
};



#endif
