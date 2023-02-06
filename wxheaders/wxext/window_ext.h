#ifndef _WX_WINDOW_H_EXT_
#define _WX_WINDOW_H_EXT_


class wxVisualAttributesExt;
class wxWindowListNodeExt;
typedef void (*wxWindowListNodeExtDeleteDataFunc)(const wxWindowListNodeExt* self);
class wxWindowListExt;
class compatibility_iteratorExt;
class iteratorExt;
class const_iteratorExt;
class reverse_iteratorExt;
class const_reverse_iteratorExt;
class wxWindowBaseExt;
typedef bool (*wxWindowBaseExtDestroyFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtSetLabelFunc)(const wxWindowBaseExt* self, wxString const& label);
typedef wxString (*wxWindowBaseExtGetLabelFunc)(const wxWindowBaseExt* self);
typedef wxCoord (*wxWindowBaseExtAdjustForLayoutDirectionFunc)(const wxWindowBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal);
typedef void (*wxWindowBaseExtRaiseFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtLowerFunc)(const wxWindowBaseExt* self);
typedef wxPoint (*wxWindowBaseExtGetClientAreaOriginFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtClientToWindowSizeFunc)(const wxWindowBaseExt* self, wxSize const& size);
typedef wxSize (*wxWindowBaseExtWindowToClientSizeFunc)(const wxWindowBaseExt* self, wxSize const& size);
typedef wxSize (*wxWindowBaseExtGetEffectiveMinSizeFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtFitFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtFitInsideFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtSetMinSizeFunc)(const wxWindowBaseExt* self, wxSize const& minSize);
typedef void (*wxWindowBaseExtSetMaxSizeFunc)(const wxWindowBaseExt* self, wxSize const& maxSize);
typedef void (*wxWindowBaseExtDoSetVirtualSizeFunc)(const wxWindowBaseExt* self, int x, int y);
typedef wxSize (*wxWindowBaseExtDoGetVirtualSizeFunc)(const wxWindowBaseExt* self);
typedef double (*wxWindowBaseExtGetContentScaleFactorFunc)(const wxWindowBaseExt* self);
typedef double (*wxWindowBaseExtGetDPIScaleFactorFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtGetWindowBorderSizeFunc)(const wxWindowBaseExt* self);
typedef bool (*wxWindowBaseExtInformFirstDirectionFunc)(const wxWindowBaseExt* self, int direction, int size, int availableOtherDir);
typedef void (*wxWindowBaseExtSendSizeEventFunc)(const wxWindowBaseExt* self, int flags);
class ChildrenRepositioningGuardExt;

class wxVisualAttributesExt: public wxVisualAttributes
{
};

class wxWindowListNodeExt: public wxWindowListNode
{
public:
  wxWindowListNodeExt(wxListBase* list = __null, wxWindowListNode* previous = __null, wxWindowListNode* next = __null, wxWindow* data = __null, wxListKey const& key = wxDefaultListKey): wxWindowListNode(list, previous, next, data, key)  {  }
  wxWindowListNodeExtDeleteDataFunc m_wxWindowListNodeExtDeleteData = NULL;
  virtual void DeleteData() override
  {
    wxWindowListNode::DeleteData();
    if (*m_wxWindowListNodeExtDeleteData != NULL){
      return m_wxWindowListNodeExtDeleteData(this);
    }
  }
  wxWindowListNodeExt(wxWindowListNodeExtDeleteDataFunc a_DeleteData): wxWindowListNode() {
    m_wxWindowListNodeExtDeleteData = a_DeleteData;
  }
};

class wxWindowListExt: public wxWindowList
{
    public:
        class compatibility_iteratorExt: public compatibility_iterator
        {
        public:
            compatibility_iteratorExt(wxWindowList::Node* ptr = __null): compatibility_iterator(ptr)    {    }
    };
};

class iteratorExt: public wxWindowList::iterator
{
public:
    iteratorExt(wxWindowList::iterator::Node* node, wxWindowList::iterator::Node* init): iterator(node, init)    {    }
    iteratorExt(): iterator()    {    }
};

class const_iteratorExt: public wxWindowList::const_iterator
{
public:
    const_iteratorExt(wxWindowList::const_iterator::Node* node, wxWindowList::const_iterator::Node* init): const_iterator(node, init)    {    }
    const_iteratorExt(): const_iterator()    {    }
    const_iteratorExt(wxWindowList::iterator const& it): const_iterator(it)    {    }
};

class reverse_iteratorExt: public wxWindowList::reverse_iterator
{
public:
    reverse_iteratorExt(wxWindowList::reverse_iterator::Node* node, wxWindowList::reverse_iterator::Node* init): reverse_iterator(node, init)    {    }
    reverse_iteratorExt(): reverse_iterator()    {    }
};

class const_reverse_iteratorExt: public wxWindowList::const_reverse_iterator
{
public:
    const_reverse_iteratorExt(wxWindowList::const_reverse_iterator::Node* node, wxWindowList::const_reverse_iterator::Node* init): const_reverse_iterator(node, init)    {    }
    const_reverse_iteratorExt(): const_reverse_iterator()    {    }
    const_reverse_iteratorExt(wxWindowList::reverse_iterator const& it): const_reverse_iterator(it)    {    }
};

class wxWindowBaseExt: public wxWindowBase
{
public:
    wxWindowBaseExt(): wxWindowBase()    {    }
    virtual ~wxWindowBaseExt() override    {    }
    wxWindowBaseExtDestroyFunc m_wxWindowBaseExtDestroy = NULL;
    virtual bool Destroy() override
    {
      bool res = wxWindowBase::Destroy();
      if (*m_wxWindowBaseExtDestroy != NULL){
        return m_wxWindowBaseExtDestroy(this);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtSetLabelFunc m_wxWindowBaseExtSetLabel = NULL;
    virtual void SetLabel(wxString const& label) override
    {
      wxWindowBase::SetLabel(label);
      if (*m_wxWindowBaseExtSetLabel != NULL){
        return m_wxWindowBaseExtSetLabel(this, label);
      }
    }
    wxWindowBaseExtGetLabelFunc m_wxWindowBaseExtGetLabel = NULL;
    virtual wxString GetLabel() const override
    {
      wxString res = wxWindowBase::GetLabel();
      if (*m_wxWindowBaseExtGetLabel != NULL){
        return m_wxWindowBaseExtGetLabel(this);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtAdjustForLayoutDirectionFunc m_wxWindowBaseExtAdjustForLayoutDirection = NULL;
    virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
    {
      wxCoord res = wxWindowBase::AdjustForLayoutDirection(x, width, widthTotal);
      if (*m_wxWindowBaseExtAdjustForLayoutDirection != NULL){
        return m_wxWindowBaseExtAdjustForLayoutDirection(this, x, width, widthTotal);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtRaiseFunc m_wxWindowBaseExtRaise = NULL;
    virtual void Raise() override
    {
      wxWindowBase::Raise();
      if (*m_wxWindowBaseExtRaise != NULL){
        return m_wxWindowBaseExtRaise(this);
      }
    }
    wxWindowBaseExtLowerFunc m_wxWindowBaseExtLower = NULL;
    virtual void Lower() override
    {
      wxWindowBase::Lower();
      if (*m_wxWindowBaseExtLower != NULL){
        return m_wxWindowBaseExtLower(this);
      }
    }
    wxWindowBaseExtGetClientAreaOriginFunc m_wxWindowBaseExtGetClientAreaOrigin = NULL;
    virtual wxPoint GetClientAreaOrigin() const override
    {
      wxPoint res = wxWindowBase::GetClientAreaOrigin();
      if (*m_wxWindowBaseExtGetClientAreaOrigin != NULL){
        return m_wxWindowBaseExtGetClientAreaOrigin(this);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtClientToWindowSizeFunc m_wxWindowBaseExtClientToWindowSize = NULL;
    virtual wxSize ClientToWindowSize(wxSize const& size) const override
    {
      wxSize res = wxWindowBase::ClientToWindowSize(size);
      if (*m_wxWindowBaseExtClientToWindowSize != NULL){
        return m_wxWindowBaseExtClientToWindowSize(this, size);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtWindowToClientSizeFunc m_wxWindowBaseExtWindowToClientSize = NULL;
    virtual wxSize WindowToClientSize(wxSize const& size) const override
    {
      wxSize res = wxWindowBase::WindowToClientSize(size);
      if (*m_wxWindowBaseExtWindowToClientSize != NULL){
        return m_wxWindowBaseExtWindowToClientSize(this, size);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtGetEffectiveMinSizeFunc m_wxWindowBaseExtGetEffectiveMinSize = NULL;
    virtual wxSize GetEffectiveMinSize() const override
    {
      wxSize res = wxWindowBase::GetEffectiveMinSize();
      if (*m_wxWindowBaseExtGetEffectiveMinSize != NULL){
        return m_wxWindowBaseExtGetEffectiveMinSize(this);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtFitFunc m_wxWindowBaseExtFit = NULL;
    virtual void Fit() override
    {
      wxWindowBase::Fit();
      if (*m_wxWindowBaseExtFit != NULL){
        return m_wxWindowBaseExtFit(this);
      }
    }
    wxWindowBaseExtFitInsideFunc m_wxWindowBaseExtFitInside = NULL;
    virtual void FitInside() override
    {
      wxWindowBase::FitInside();
      if (*m_wxWindowBaseExtFitInside != NULL){
        return m_wxWindowBaseExtFitInside(this);
      }
    }
    wxWindowBaseExtSetMinSizeFunc m_wxWindowBaseExtSetMinSize = NULL;
    virtual void SetMinSize(wxSize const& minSize) override
    {
      wxWindowBase::SetMinSize(minSize);
      if (*m_wxWindowBaseExtSetMinSize != NULL){
        return m_wxWindowBaseExtSetMinSize(this, minSize);
      }
    }
    wxWindowBaseExtSetMaxSizeFunc m_wxWindowBaseExtSetMaxSize = NULL;
    virtual void SetMaxSize(wxSize const& maxSize) override
    {
      wxWindowBase::SetMaxSize(maxSize);
      if (*m_wxWindowBaseExtSetMaxSize != NULL){
        return m_wxWindowBaseExtSetMaxSize(this, maxSize);
      }
    }
    wxWindowBaseExtDoSetVirtualSizeFunc m_wxWindowBaseExtDoSetVirtualSize = NULL;
    virtual void DoSetVirtualSize(int x, int y) override
    {
      wxWindowBase::DoSetVirtualSize(x, y);
      if (*m_wxWindowBaseExtDoSetVirtualSize != NULL){
        return m_wxWindowBaseExtDoSetVirtualSize(this, x, y);
      }
    }
    wxWindowBaseExtDoGetVirtualSizeFunc m_wxWindowBaseExtDoGetVirtualSize = NULL;
    virtual wxSize DoGetVirtualSize() const override
    {
      wxSize res = wxWindowBase::DoGetVirtualSize();
      if (*m_wxWindowBaseExtDoGetVirtualSize != NULL){
        return m_wxWindowBaseExtDoGetVirtualSize(this);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtGetContentScaleFactorFunc m_wxWindowBaseExtGetContentScaleFactor = NULL;
    virtual double GetContentScaleFactor() const override
    {
      double res = wxWindowBase::GetContentScaleFactor();
      if (*m_wxWindowBaseExtGetContentScaleFactor != NULL){
        return m_wxWindowBaseExtGetContentScaleFactor(this);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtGetDPIScaleFactorFunc m_wxWindowBaseExtGetDPIScaleFactor = NULL;
    virtual double GetDPIScaleFactor() const override
    {
      double res = wxWindowBase::GetDPIScaleFactor();
      if (*m_wxWindowBaseExtGetDPIScaleFactor != NULL){
        return m_wxWindowBaseExtGetDPIScaleFactor(this);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtGetWindowBorderSizeFunc m_wxWindowBaseExtGetWindowBorderSize = NULL;
    virtual wxSize GetWindowBorderSize() const override
    {
      wxSize res = wxWindowBase::GetWindowBorderSize();
      if (*m_wxWindowBaseExtGetWindowBorderSize != NULL){
        return m_wxWindowBaseExtGetWindowBorderSize(this);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtInformFirstDirectionFunc m_wxWindowBaseExtInformFirstDirection = NULL;
    virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
    {
      bool res = wxWindowBase::InformFirstDirection(direction, size, availableOtherDir);
      if (*m_wxWindowBaseExtInformFirstDirection != NULL){
        return m_wxWindowBaseExtInformFirstDirection(this, direction, size, availableOtherDir);
      }
      else {
        return res;
      }
    }
    wxWindowBaseExtSendSizeEventFunc m_wxWindowBaseExtSendSizeEvent = NULL;
    virtual void SendSizeEvent(int flags = 0) override
    {
      wxWindowBase::SendSizeEvent(flags);
      if (*m_wxWindowBaseExtSendSizeEvent != NULL){
        return m_wxWindowBaseExtSendSizeEvent(this, flags);
      }
    }
    class ChildrenRepositioningGuardExt: public ChildrenRepositioningGuard
    {
    public:
          explicit ChildrenRepositioningGuardExt(wxWindowBase* win): ChildrenRepositioningGuard(win)      {      }
    };
    wxWindowBaseExt(wxWindowBaseExtDestroyFunc a_Destroy, wxWindowBaseExtSetLabelFunc a_SetLabel, wxWindowBaseExtGetLabelFunc a_GetLabel, wxWindowBaseExtAdjustForLayoutDirectionFunc a_AdjustForLayoutDirection, wxWindowBaseExtRaiseFunc a_Raise, wxWindowBaseExtLowerFunc a_Lower, wxWindowBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxWindowBaseExtClientToWindowSizeFunc a_ClientToWindowSize, wxWindowBaseExtWindowToClientSizeFunc a_WindowToClientSize, wxWindowBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxWindowBaseExtFitFunc a_Fit, wxWindowBaseExtFitInsideFunc a_FitInside, wxWindowBaseExtSetMinSizeFunc a_SetMinSize, wxWindowBaseExtSetMaxSizeFunc a_SetMaxSize, wxWindowBaseExtDoSetVirtualSizeFunc a_DoSetVirtualSize, wxWindowBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxWindowBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxWindowBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxWindowBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxWindowBaseExtInformFirstDirectionFunc a_InformFirstDirection, wxWindowBaseExtSendSizeEventFunc a_SendSizeEvent): wxWindowBaseExt() {
        m_wxWindowBaseExtDestroy = a_Destroy;
        m_wxWindowBaseExtSetLabel = a_SetLabel;
        m_wxWindowBaseExtGetLabel = a_GetLabel;
        m_wxWindowBaseExtAdjustForLayoutDirection = a_AdjustForLayoutDirection;
        m_wxWindowBaseExtRaise = a_Raise;
        m_wxWindowBaseExtLower = a_Lower;
        m_wxWindowBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
        m_wxWindowBaseExtClientToWindowSize = a_ClientToWindowSize;
        m_wxWindowBaseExtWindowToClientSize = a_WindowToClientSize;
        m_wxWindowBaseExtGetEffectiveMinSize = a_GetEffectiveMinSize;
        m_wxWindowBaseExtFit = a_Fit;
        m_wxWindowBaseExtFitInside = a_FitInside;
        m_wxWindowBaseExtSetMinSize = a_SetMinSize;
        m_wxWindowBaseExtSetMaxSize = a_SetMaxSize;
        m_wxWindowBaseExtDoSetVirtualSize = a_DoSetVirtualSize;
        m_wxWindowBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
        m_wxWindowBaseExtGetContentScaleFactor = a_GetContentScaleFactor;
        m_wxWindowBaseExtGetDPIScaleFactor = a_GetDPIScaleFactor;
        m_wxWindowBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
        m_wxWindowBaseExtInformFirstDirection = a_InformFirstDirection;
        m_wxWindowBaseExtSendSizeEvent = a_SendSizeEvent;
      }
};

#endif
