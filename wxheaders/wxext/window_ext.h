#ifndef _WX_WINDOW_H_EXT_
#define _WX_WINDOW_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxWindowListNodeExt;
typedef void (*wxWindowListNodeExtDeleteDataFunc)(const wxWindowListNodeExt* self);
class wxWindowBaseExt;
typedef void (*wxWindowBaseExtAddPendingEventwxEventCRFunc)(const wxWindowBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxWindowBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef bool (*wxWindowBaseExtBeginRepositioningChildrenFunc)(const wxWindowBaseExt* self, bool res);
typedef wxSize (*wxWindowBaseExtClientToWindowSizewxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxWindowBaseExtCloneRefDatawxObjectRefDataCPFunc)(const wxWindowBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxWindowBaseExtCreateRefDataFunc)(const wxWindowBaseExt* self, wxObjectRefData* res);
typedef bool (*wxWindowBaseExtDestroyFunc)(const wxWindowBaseExt* self, bool res);
typedef wxSize (*wxWindowBaseExtDoGetVirtualSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef void (*wxWindowBaseExtDoSetVirtualSizeintintFunc)(const wxWindowBaseExt* self, int x, int y);
typedef void (*wxWindowBaseExtEndRepositioningChildrenFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtFitFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtFitInsideFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtGetBestVirtualSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxClassInfo* (*wxWindowBaseExtGetClassInfoFunc)(const wxWindowBaseExt* self, wxClassInfo* res);
typedef wxPoint (*wxWindowBaseExtGetClientAreaOriginFunc)(const wxWindowBaseExt* self, wxPoint res);
typedef double (*wxWindowBaseExtGetContentScaleFactorFunc)(const wxWindowBaseExt* self, double res);
typedef double (*wxWindowBaseExtGetDPIScaleFactorFunc)(const wxWindowBaseExt* self, double res);
typedef wxSize (*wxWindowBaseExtGetEffectiveMinSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxEventHashTable& (*wxWindowBaseExtGetEventHashTableFunc)(const wxWindowBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxWindowBaseExtGetEventTableFunc)(const wxWindowBaseExt* self, wxEventTable const* res);
typedef wxString (*wxWindowBaseExtGetLabelFunc)(const wxWindowBaseExt* self);
typedef wxLayoutDirection (*wxWindowBaseExtGetLayoutDirectionFunc)(const wxWindowBaseExt* self, wxLayoutDirection res);
typedef wxSize (*wxWindowBaseExtGetMaxClientSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxSize (*wxWindowBaseExtGetMaxSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxSize (*wxWindowBaseExtGetMinClientSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxSize (*wxWindowBaseExtGetMinSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxString (*wxWindowBaseExtGetNameFunc)(const wxWindowBaseExt* self, wxString res);
typedef wxSize (*wxWindowBaseExtGetWindowBorderSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef bool (*wxWindowBaseExtInformFirstDirectionintintintFunc)(const wxWindowBaseExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxWindowBaseExtLowerFunc)(const wxWindowBaseExt* self);
typedef bool (*wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxWindowBaseExt* self, wxDynamicEventTableEntry& param0, bool res);
typedef bool (*wxWindowBaseExtProcessEventwxEventRFunc)(const wxWindowBaseExt* self, wxEvent& event, bool res);
typedef void (*wxWindowBaseExtQueueEventwxEventPFunc)(const wxWindowBaseExt* self, wxEvent* event);
typedef void (*wxWindowBaseExtRaiseFunc)(const wxWindowBaseExt* self);
typedef bool (*wxWindowBaseExtSearchEventTablewxEventTableRwxEventRFunc)(const wxWindowBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxWindowBaseExtSendSizeEventintFunc)(const wxWindowBaseExt* self, int flags);
typedef void (*wxWindowBaseExtSetIdwxWindowIDFunc)(const wxWindowBaseExt* self, wxWindowID winid);
typedef void (*wxWindowBaseExtSetLabelwxStringCRFunc)(const wxWindowBaseExt* self, wxString const& label);
typedef void (*wxWindowBaseExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxWindowBaseExt* self, wxLayoutDirection param0);
typedef void (*wxWindowBaseExtSetMaxClientSizewxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& size);
typedef void (*wxWindowBaseExtSetMaxSizewxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& maxSize);
typedef void (*wxWindowBaseExtSetMinClientSizewxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& size);
typedef void (*wxWindowBaseExtSetMinSizewxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& minSize);
typedef void (*wxWindowBaseExtSetNamewxStringCRFunc)(const wxWindowBaseExt* self, wxString const& name);
typedef void (*wxWindowBaseExtSetNextHandlerwxEvtHandlerPFunc)(const wxWindowBaseExt* self, wxEvtHandler* handler);
typedef void (*wxWindowBaseExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxWindowBaseExt* self, wxEvtHandler* handler);
typedef void (*wxWindowBaseExtSetSizeHintsintintintintintintFunc)(const wxWindowBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef bool (*wxWindowBaseExtTryAfterwxEventRFunc)(const wxWindowBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxWindowBaseExtTryBeforewxEventRFunc)(const wxWindowBaseExt* self, wxEvent& event, bool res);
typedef wxSize (*wxWindowBaseExtWindowToClientSizewxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& size, wxSize res);
class wxWindowExt;
typedef bool (*wxWindowExtAcceptsFocusFunc)(const wxWindowExt* self, bool res);
typedef void (*wxWindowExtAddPendingEventwxEventCRFunc)(const wxWindowExt* self, wxEvent const& event);
typedef wxCoord (*wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxWindowExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxWindowExtAlwaysShowScrollbarsboolboolFunc)(const wxWindowExt* self, bool horz, bool vert);
typedef bool (*wxWindowExtBeginRepositioningChildrenFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtCanSetTransparentFunc)(const wxWindowExt* self, bool res);
typedef void (*wxWindowExtClearBackgroundFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtClientToWindowSizewxSizeCRFunc)(const wxWindowExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxWindowExtCloneRefDatawxObjectRefDataCPFunc)(const wxWindowExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxWindowExtCreateRefDataFunc)(const wxWindowExt* self, wxObjectRefData* res);
typedef bool (*wxWindowExtDestroyFunc)(const wxWindowExt* self, bool res);
typedef void (*wxWindowExtDoCaptureMouseFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoClientToScreenintPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoEnableboolFunc)(const wxWindowExt* self, bool enable);
typedef void (*wxWindowExtDoFreezeFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtDoGetBestSizeFunc)(const wxWindowExt* self, wxSize res);
typedef void (*wxWindowExtDoGetClientSizeintPintPFunc)(const wxWindowExt* self, int* width, int* height);
typedef void (*wxWindowExtDoGetPositionintPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoGetSizeintPintPFunc)(const wxWindowExt* self, int* width, int* height);
typedef wxSize (*wxWindowExtDoGetSizeFromClientSizewxSizeCRFunc)(const wxWindowExt* self, wxSize const& size, wxSize res);
typedef void (*wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxWindowExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxWindowExtDoGetVirtualSizeFunc)(const wxWindowExt* self, wxSize res);
typedef void (*wxWindowExtDoMoveWindowintintintintFunc)(const wxWindowExt* self, int x, int y, int width, int height);
typedef bool (*wxWindowExtDoPopupMenuwxMenuPintintFunc)(const wxWindowExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxWindowExtDoReleaseMouseFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoScreenToClientintPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoSetClientSizeintintFunc)(const wxWindowExt* self, int width, int height);
typedef void (*wxWindowExtDoSetSizeintintintintintFunc)(const wxWindowExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxWindowExtDoSetToolTipwxToolTipPFunc)(const wxWindowExt* self, wxToolTip* tip);
typedef void (*wxWindowExtDoSetVirtualSizeintintFunc)(const wxWindowExt* self, int x, int y);
typedef void (*wxWindowExtDoSetWindowVariantwxWindowVariantFunc)(const wxWindowExt* self, wxWindowVariant variant);
typedef void (*wxWindowExtDoThawFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtEnableTouchEventsintFunc)(const wxWindowExt* self, int eventsMask, bool res);
typedef void (*wxWindowExtEnableVisibleFocusboolFunc)(const wxWindowExt* self, bool enabled);
typedef void (*wxWindowExtEndRepositioningChildrenFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtFitFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtFitInsideFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtGetBestVirtualSizeFunc)(const wxWindowExt* self, wxSize res);
typedef int (*wxWindowExtGetCharHeightFunc)(const wxWindowExt* self, int res);
typedef int (*wxWindowExtGetCharWidthFunc)(const wxWindowExt* self, int res);
typedef wxClassInfo* (*wxWindowExtGetClassInfoFunc)(const wxWindowExt* self, wxClassInfo* res);
typedef wxPoint (*wxWindowExtGetClientAreaOriginFunc)(const wxWindowExt* self, wxPoint res);
typedef double (*wxWindowExtGetContentScaleFactorFunc)(const wxWindowExt* self, double res);
typedef wxSize (*wxWindowExtGetDPIFunc)(const wxWindowExt* self, wxSize res);
typedef double (*wxWindowExtGetDPIScaleFactorFunc)(const wxWindowExt* self, double res);
typedef wxSize (*wxWindowExtGetEffectiveMinSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxEventHashTable& (*wxWindowExtGetEventHashTableFunc)(const wxWindowExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxWindowExtGetEventTableFunc)(const wxWindowExt* self, wxEventTable const* res);
typedef WXWidget (*wxWindowExtGetHandleFunc)(const wxWindowExt* self, WXWidget res);
typedef wxString (*wxWindowExtGetLabelFunc)(const wxWindowExt* self);
typedef wxLayoutDirection (*wxWindowExtGetLayoutDirectionFunc)(const wxWindowExt* self, wxLayoutDirection res);
typedef wxSize (*wxWindowExtGetMaxClientSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxSize (*wxWindowExtGetMaxSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxSize (*wxWindowExtGetMinClientSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxSize (*wxWindowExtGetMinSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxString (*wxWindowExtGetNameFunc)(const wxWindowExt* self, wxString res);
typedef int (*wxWindowExtGetScrollPosintFunc)(const wxWindowExt* self, int orient, int res);
typedef int (*wxWindowExtGetScrollRangeintFunc)(const wxWindowExt* self, int orient, int res);
typedef int (*wxWindowExtGetScrollThumbintFunc)(const wxWindowExt* self, int orient, int res);
typedef wxByte (*wxWindowExtGetTransparentFunc)(const wxWindowExt* self, wxByte res);
typedef wxSize (*wxWindowExtGetWindowBorderSizeFunc)(const wxWindowExt* self, wxSize res);
typedef bool (*wxWindowExtHideWithEffectwxShowEffectunsignedintFunc)(const wxWindowExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxWindowExtInformFirstDirectionintintintFunc)(const wxWindowExt* self, int direction, int size, int availableOtherDir, bool res);
typedef bool (*wxWindowExtIsDoubleBufferedFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtIsScrollbarAlwaysShownintFunc)(const wxWindowExt* self, int orient, bool res);
typedef bool (*wxWindowExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxWindowExt* self, wxString* reason, bool res);
typedef void (*wxWindowExtLowerFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxWindowExt* self, wxDynamicEventTableEntry& param0, bool res);
typedef bool (*wxWindowExtProcessEventwxEventRFunc)(const wxWindowExt* self, wxEvent& event, bool res);
typedef void (*wxWindowExtQueueEventwxEventPFunc)(const wxWindowExt* self, wxEvent* event);
typedef void (*wxWindowExtRaiseFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtRefreshboolwxRectCPFunc)(const wxWindowExt* self, bool eraseBackground, wxRect const* rect);
typedef void (*wxWindowExtRemoveChildwxWindowBasePFunc)(const wxWindowExt* self, wxWindowBase* child);
typedef bool (*wxWindowExtReparentwxWindowBasePFunc)(const wxWindowExt* self, wxWindowBase* newParent, bool res);
typedef void (*wxWindowExtScrollWindowintintwxRectCPFunc)(const wxWindowExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxWindowExtSearchEventTablewxEventTableRwxEventRFunc)(const wxWindowExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxWindowExtSendSizeEventintFunc)(const wxWindowExt* self, int flags);
typedef bool (*wxWindowExtSetBackgroundColourwxColourCRFunc)(const wxWindowExt* self, wxColour const& colour, bool res);
typedef bool (*wxWindowExtSetBackgroundStylewxBackgroundStyleFunc)(const wxWindowExt* self, wxBackgroundStyle style, bool res);
typedef bool (*wxWindowExtSetCursorwxCursorCRFunc)(const wxWindowExt* self, wxCursor const& cursor, bool res);
typedef void (*wxWindowExtSetDropTargetwxDropTargetPFunc)(const wxWindowExt* self, wxDropTarget* dropTarget);
typedef void (*wxWindowExtSetFocusFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtSetFontwxFontCRFunc)(const wxWindowExt* self, wxFont const& font, bool res);
typedef bool (*wxWindowExtSetForegroundColourwxColourCRFunc)(const wxWindowExt* self, wxColour const& colour, bool res);
typedef void (*wxWindowExtSetIdwxWindowIDFunc)(const wxWindowExt* self, wxWindowID winid);
typedef void (*wxWindowExtSetLabelwxStringCRFunc)(const wxWindowExt* self, wxString const& label);
typedef void (*wxWindowExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxWindowExt* self, wxLayoutDirection param0);
typedef void (*wxWindowExtSetMaxClientSizewxSizeCRFunc)(const wxWindowExt* self, wxSize const& size);
typedef void (*wxWindowExtSetMaxSizewxSizeCRFunc)(const wxWindowExt* self, wxSize const& maxSize);
typedef void (*wxWindowExtSetMinClientSizewxSizeCRFunc)(const wxWindowExt* self, wxSize const& size);
typedef void (*wxWindowExtSetMinSizewxSizeCRFunc)(const wxWindowExt* self, wxSize const& minSize);
typedef void (*wxWindowExtSetNamewxStringCRFunc)(const wxWindowExt* self, wxString const& name);
typedef void (*wxWindowExtSetNextHandlerwxEvtHandlerPFunc)(const wxWindowExt* self, wxEvtHandler* handler);
typedef void (*wxWindowExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxWindowExt* self, wxEvtHandler* handler);
typedef void (*wxWindowExtSetScrollPosintintboolFunc)(const wxWindowExt* self, int orient, int pos, bool refresh);
typedef void (*wxWindowExtSetScrollbarintintintintboolFunc)(const wxWindowExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxWindowExtSetSizeHintsintintintintintintFunc)(const wxWindowExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef bool (*wxWindowExtSetTransparentwxByteFunc)(const wxWindowExt* self, wxByte alpha, bool res);
typedef bool (*wxWindowExtShowboolFunc)(const wxWindowExt* self, bool show, bool res);
typedef bool (*wxWindowExtShowWithEffectwxShowEffectunsignedintFunc)(const wxWindowExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef void (*wxWindowExtTriggerScrollEventwxEventTypeFunc)(const wxWindowExt* self, wxEventType scrollEvent);
typedef bool (*wxWindowExtTryAfterwxEventRFunc)(const wxWindowExt* self, wxEvent& event, bool res);
typedef bool (*wxWindowExtTryBeforewxEventRFunc)(const wxWindowExt* self, wxEvent& event, bool res);
typedef void (*wxWindowExtUpdateFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtWarpPointerintintFunc)(const wxWindowExt* self, int x, int y);
typedef wxSize (*wxWindowExtWindowToClientSizewxSizeCRFunc)(const wxWindowExt* self, wxSize const& size, wxSize res);

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

class wxWindowBaseExt: public wxWindowBase
{
public:
  wxWindowBaseExt(): wxWindowBase()  {  }
  virtual ~wxWindowBaseExt() override  {  }
  wxWindowBaseExtAddPendingEventwxEventCRFunc m_wxWindowBaseExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxWindowBase::AddPendingEvent(event);
    if (*m_wxWindowBaseExtAddPendingEventwxEventCR != NULL){
      return m_wxWindowBaseExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxWindowBase::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtBeginRepositioningChildrenFunc m_wxWindowBaseExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxWindowBase::BeginRepositioningChildren();
    if (*m_wxWindowBaseExtBeginRepositioningChildren != NULL){
      return m_wxWindowBaseExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtClientToWindowSizewxSizeCRFunc m_wxWindowBaseExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxWindowBase::ClientToWindowSize(size);
    if (*m_wxWindowBaseExtClientToWindowSizewxSizeCR != NULL){
      return m_wxWindowBaseExtClientToWindowSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtCloneRefDatawxObjectRefDataCPFunc m_wxWindowBaseExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxWindowBase::CloneRefData(data);
    if (*m_wxWindowBaseExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxWindowBaseExtCloneRefDatawxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtCreateRefDataFunc m_wxWindowBaseExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxWindowBase::CreateRefData();
    if (*m_wxWindowBaseExtCreateRefData != NULL){
      return m_wxWindowBaseExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDestroyFunc m_wxWindowBaseExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxWindowBase::Destroy();
    if (*m_wxWindowBaseExtDestroy != NULL){
      return m_wxWindowBaseExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoGetVirtualSizeFunc m_wxWindowBaseExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxWindowBase::DoGetVirtualSize();
    if (*m_wxWindowBaseExtDoGetVirtualSize != NULL){
      return m_wxWindowBaseExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoSetVirtualSizeintintFunc m_wxWindowBaseExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxWindowBase::DoSetVirtualSize(x, y);
    if (*m_wxWindowBaseExtDoSetVirtualSizeintint != NULL){
      return m_wxWindowBaseExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxWindowBaseExtEndRepositioningChildrenFunc m_wxWindowBaseExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxWindowBase::EndRepositioningChildren();
    if (*m_wxWindowBaseExtEndRepositioningChildren != NULL){
      return m_wxWindowBaseExtEndRepositioningChildren(this);
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
  wxWindowBaseExtGetBestVirtualSizeFunc m_wxWindowBaseExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxWindowBase::GetBestVirtualSize();
    if (*m_wxWindowBaseExtGetBestVirtualSize != NULL){
      return m_wxWindowBaseExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetClassInfoFunc m_wxWindowBaseExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxWindowBase::GetClassInfo();
    if (*m_wxWindowBaseExtGetClassInfo != NULL){
      return m_wxWindowBaseExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetClientAreaOriginFunc m_wxWindowBaseExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxWindowBase::GetClientAreaOrigin();
    if (*m_wxWindowBaseExtGetClientAreaOrigin != NULL){
      return m_wxWindowBaseExtGetClientAreaOrigin(this, res);
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
      return m_wxWindowBaseExtGetContentScaleFactor(this, res);
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
      return m_wxWindowBaseExtGetDPIScaleFactor(this, res);
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
      return m_wxWindowBaseExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetEventHashTableFunc m_wxWindowBaseExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxWindowBase::GetEventHashTable();
    if (*m_wxWindowBaseExtGetEventHashTable != NULL){
      return m_wxWindowBaseExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetEventTableFunc m_wxWindowBaseExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxWindowBase::GetEventTable();
    if (*m_wxWindowBaseExtGetEventTable != NULL){
      return m_wxWindowBaseExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetLabelFunc m_wxWindowBaseExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    if (*m_wxWindowBaseExtGetLabel != NULL){
      return m_wxWindowBaseExtGetLabel(this);
    }
    else {
      return "";
    }
  }
  wxWindowBaseExtGetLayoutDirectionFunc m_wxWindowBaseExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxWindowBase::GetLayoutDirection();
    if (*m_wxWindowBaseExtGetLayoutDirection != NULL){
      return m_wxWindowBaseExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetMaxClientSizeFunc m_wxWindowBaseExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxWindowBase::GetMaxClientSize();
    if (*m_wxWindowBaseExtGetMaxClientSize != NULL){
      return m_wxWindowBaseExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetMaxSizeFunc m_wxWindowBaseExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxWindowBase::GetMaxSize();
    if (*m_wxWindowBaseExtGetMaxSize != NULL){
      return m_wxWindowBaseExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetMinClientSizeFunc m_wxWindowBaseExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxWindowBase::GetMinClientSize();
    if (*m_wxWindowBaseExtGetMinClientSize != NULL){
      return m_wxWindowBaseExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetMinSizeFunc m_wxWindowBaseExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxWindowBase::GetMinSize();
    if (*m_wxWindowBaseExtGetMinSize != NULL){
      return m_wxWindowBaseExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetNameFunc m_wxWindowBaseExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxWindowBase::GetName();
    if (*m_wxWindowBaseExtGetName != NULL){
      return m_wxWindowBaseExtGetName(this, res);
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
      return m_wxWindowBaseExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtInformFirstDirectionintintintFunc m_wxWindowBaseExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxWindowBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxWindowBaseExtInformFirstDirectionintintint != NULL){
      return m_wxWindowBaseExtInformFirstDirectionintintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtLowerFunc m_wxWindowBaseExtLower = NULL;
  virtual void Lower() override
  {
    if (*m_wxWindowBaseExtLower != NULL){
      return m_wxWindowBaseExtLower(this);
    }
  }
  wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxWindowBase::OnDynamicBind(param0);
    if (*m_wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtProcessEventwxEventRFunc m_wxWindowBaseExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxWindowBase::ProcessEvent(event);
    if (*m_wxWindowBaseExtProcessEventwxEventR != NULL){
      return m_wxWindowBaseExtProcessEventwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtQueueEventwxEventPFunc m_wxWindowBaseExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxWindowBase::QueueEvent(event);
    if (*m_wxWindowBaseExtQueueEventwxEventP != NULL){
      return m_wxWindowBaseExtQueueEventwxEventP(this, event);
    }
  }
  wxWindowBaseExtRaiseFunc m_wxWindowBaseExtRaise = NULL;
  virtual void Raise() override
  {
    if (*m_wxWindowBaseExtRaise != NULL){
      return m_wxWindowBaseExtRaise(this);
    }
  }
  wxWindowBaseExtSearchEventTablewxEventTableRwxEventRFunc m_wxWindowBaseExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxWindowBase::SearchEventTable(table, event);
    if (*m_wxWindowBaseExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxWindowBaseExtSearchEventTablewxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtSendSizeEventintFunc m_wxWindowBaseExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxWindowBase::SendSizeEvent(flags);
    if (*m_wxWindowBaseExtSendSizeEventint != NULL){
      return m_wxWindowBaseExtSendSizeEventint(this, flags);
    }
  }
  wxWindowBaseExtSetIdwxWindowIDFunc m_wxWindowBaseExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxWindowBase::SetId(winid);
    if (*m_wxWindowBaseExtSetIdwxWindowID != NULL){
      return m_wxWindowBaseExtSetIdwxWindowID(this, winid);
    }
  }
  wxWindowBaseExtSetLabelwxStringCRFunc m_wxWindowBaseExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    if (*m_wxWindowBaseExtSetLabelwxStringCR != NULL){
      return m_wxWindowBaseExtSetLabelwxStringCR(this, label);
    }
  }
  wxWindowBaseExtSetLayoutDirectionwxLayoutDirectionFunc m_wxWindowBaseExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxWindowBase::SetLayoutDirection(param0);
    if (*m_wxWindowBaseExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxWindowBaseExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxWindowBaseExtSetMaxClientSizewxSizeCRFunc m_wxWindowBaseExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxWindowBase::SetMaxClientSize(size);
    if (*m_wxWindowBaseExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxWindowBaseExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxWindowBaseExtSetMaxSizewxSizeCRFunc m_wxWindowBaseExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxWindowBase::SetMaxSize(maxSize);
    if (*m_wxWindowBaseExtSetMaxSizewxSizeCR != NULL){
      return m_wxWindowBaseExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxWindowBaseExtSetMinClientSizewxSizeCRFunc m_wxWindowBaseExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxWindowBase::SetMinClientSize(size);
    if (*m_wxWindowBaseExtSetMinClientSizewxSizeCR != NULL){
      return m_wxWindowBaseExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxWindowBaseExtSetMinSizewxSizeCRFunc m_wxWindowBaseExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxWindowBase::SetMinSize(minSize);
    if (*m_wxWindowBaseExtSetMinSizewxSizeCR != NULL){
      return m_wxWindowBaseExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxWindowBaseExtSetNamewxStringCRFunc m_wxWindowBaseExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxWindowBase::SetName(name);
    if (*m_wxWindowBaseExtSetNamewxStringCR != NULL){
      return m_wxWindowBaseExtSetNamewxStringCR(this, name);
    }
  }
  wxWindowBaseExtSetNextHandlerwxEvtHandlerPFunc m_wxWindowBaseExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxWindowBase::SetNextHandler(handler);
    if (*m_wxWindowBaseExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxWindowBaseExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxWindowBaseExtSetPreviousHandlerwxEvtHandlerPFunc m_wxWindowBaseExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxWindowBase::SetPreviousHandler(handler);
    if (*m_wxWindowBaseExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxWindowBaseExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxWindowBaseExtSetSizeHintsintintintintintintFunc m_wxWindowBaseExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxWindowBase::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxWindowBaseExtSetSizeHintsintintintintintint != NULL){
      return m_wxWindowBaseExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxWindowBaseExtTryAfterwxEventRFunc m_wxWindowBaseExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxWindowBase::TryAfter(event);
    if (*m_wxWindowBaseExtTryAfterwxEventR != NULL){
      return m_wxWindowBaseExtTryAfterwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtTryBeforewxEventRFunc m_wxWindowBaseExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxWindowBase::TryBefore(event);
    if (*m_wxWindowBaseExtTryBeforewxEventR != NULL){
      return m_wxWindowBaseExtTryBeforewxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtWindowToClientSizewxSizeCRFunc m_wxWindowBaseExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxWindowBase::WindowToClientSize(size);
    if (*m_wxWindowBaseExtWindowToClientSizewxSizeCR != NULL){
      return m_wxWindowBaseExtWindowToClientSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExt(wxWindowBaseExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxWindowBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxWindowBaseExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxWindowBaseExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxWindowBaseExtCreateRefDataFunc a_CreateRefData, wxWindowBaseExtDestroyFunc a_Destroy, wxWindowBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxWindowBaseExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxWindowBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxWindowBaseExtFitFunc a_Fit, wxWindowBaseExtFitInsideFunc a_FitInside, wxWindowBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxWindowBaseExtGetClassInfoFunc a_GetClassInfo, wxWindowBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxWindowBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxWindowBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxWindowBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxWindowBaseExtGetEventHashTableFunc a_GetEventHashTable, wxWindowBaseExtGetEventTableFunc a_GetEventTable, wxWindowBaseExtGetLabelFunc a_GetLabel, wxWindowBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxWindowBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxWindowBaseExtGetMaxSizeFunc a_GetMaxSize, wxWindowBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxWindowBaseExtGetMinSizeFunc a_GetMinSize, wxWindowBaseExtGetNameFunc a_GetName, wxWindowBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxWindowBaseExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxWindowBaseExtLowerFunc a_Lower, wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxWindowBaseExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxWindowBaseExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxWindowBaseExtRaiseFunc a_Raise, wxWindowBaseExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxWindowBaseExtSendSizeEventintFunc a_SendSizeEventint, wxWindowBaseExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxWindowBaseExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxWindowBaseExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxWindowBaseExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxWindowBaseExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxWindowBaseExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxWindowBaseExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxWindowBaseExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxWindowBaseExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxWindowBaseExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxWindowBaseExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxWindowBaseExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxWindowBaseExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxWindowBaseExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxWindowBase() {
    m_wxWindowBaseExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxWindowBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxWindowBaseExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxWindowBaseExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxWindowBaseExtCreateRefData = a_CreateRefData;
    m_wxWindowBaseExtDestroy = a_Destroy;
    m_wxWindowBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxWindowBaseExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxWindowBaseExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxWindowBaseExtFit = a_Fit;
    m_wxWindowBaseExtFitInside = a_FitInside;
    m_wxWindowBaseExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxWindowBaseExtGetClassInfo = a_GetClassInfo;
    m_wxWindowBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxWindowBaseExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxWindowBaseExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxWindowBaseExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxWindowBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxWindowBaseExtGetEventTable = a_GetEventTable;
    m_wxWindowBaseExtGetLabel = a_GetLabel;
    m_wxWindowBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxWindowBaseExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxWindowBaseExtGetMaxSize = a_GetMaxSize;
    m_wxWindowBaseExtGetMinClientSize = a_GetMinClientSize;
    m_wxWindowBaseExtGetMinSize = a_GetMinSize;
    m_wxWindowBaseExtGetName = a_GetName;
    m_wxWindowBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxWindowBaseExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxWindowBaseExtLower = a_Lower;
    m_wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxWindowBaseExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxWindowBaseExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxWindowBaseExtRaise = a_Raise;
    m_wxWindowBaseExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxWindowBaseExtSendSizeEventint = a_SendSizeEventint;
    m_wxWindowBaseExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxWindowBaseExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxWindowBaseExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxWindowBaseExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxWindowBaseExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxWindowBaseExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxWindowBaseExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxWindowBaseExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxWindowBaseExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxWindowBaseExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxWindowBaseExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxWindowBaseExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxWindowBaseExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxWindowBaseExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
  }
};

class wxWindowExt: public wxWindow
{
public:
  wxWindowExt(): wxWindow()  {  }
  wxWindowExt(wxWindow* parent, wxWindowID id, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = 0, wxString const& name = wxString::FromAscii(wxPanelNameStr)): wxWindow(parent, id, pos, size, style, name)  {  }
  virtual ~wxWindowExt() override  {  }
  wxWindowExtAcceptsFocusFunc m_wxWindowExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxWindow::AcceptsFocus();
    if (*m_wxWindowExtAcceptsFocus != NULL){
      return m_wxWindowExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtAddPendingEventwxEventCRFunc m_wxWindowExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxWindow::AddPendingEvent(event);
    if (*m_wxWindowExtAddPendingEventwxEventCR != NULL){
      return m_wxWindowExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxWindow::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtAlwaysShowScrollbarsboolboolFunc m_wxWindowExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxWindow::AlwaysShowScrollbars(horz, vert);
    if (*m_wxWindowExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxWindowExtAlwaysShowScrollbarsboolbool(this, horz, vert);
    }
  }
  wxWindowExtBeginRepositioningChildrenFunc m_wxWindowExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxWindow::BeginRepositioningChildren();
    if (*m_wxWindowExtBeginRepositioningChildren != NULL){
      return m_wxWindowExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtCanSetTransparentFunc m_wxWindowExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxWindow::CanSetTransparent();
    if (*m_wxWindowExtCanSetTransparent != NULL){
      return m_wxWindowExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtClearBackgroundFunc m_wxWindowExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxWindow::ClearBackground();
    if (*m_wxWindowExtClearBackground != NULL){
      return m_wxWindowExtClearBackground(this);
    }
  }
  wxWindowExtClientToWindowSizewxSizeCRFunc m_wxWindowExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxWindow::ClientToWindowSize(size);
    if (*m_wxWindowExtClientToWindowSizewxSizeCR != NULL){
      return m_wxWindowExtClientToWindowSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtCloneRefDatawxObjectRefDataCPFunc m_wxWindowExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxWindow::CloneRefData(data);
    if (*m_wxWindowExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxWindowExtCloneRefDatawxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtCreateRefDataFunc m_wxWindowExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxWindow::CreateRefData();
    if (*m_wxWindowExtCreateRefData != NULL){
      return m_wxWindowExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDestroyFunc m_wxWindowExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxWindow::Destroy();
    if (*m_wxWindowExtDestroy != NULL){
      return m_wxWindowExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoCaptureMouseFunc m_wxWindowExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxWindow::DoCaptureMouse();
    if (*m_wxWindowExtDoCaptureMouse != NULL){
      return m_wxWindowExtDoCaptureMouse(this);
    }
  }
  wxWindowExtDoClientToScreenintPintPFunc m_wxWindowExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxWindow::DoClientToScreen(x, y);
    if (*m_wxWindowExtDoClientToScreenintPintP != NULL){
      return m_wxWindowExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxWindowExtDoEnableboolFunc m_wxWindowExtDoEnablebool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxWindow::DoEnable(enable);
    if (*m_wxWindowExtDoEnablebool != NULL){
      return m_wxWindowExtDoEnablebool(this, enable);
    }
  }
  wxWindowExtDoFreezeFunc m_wxWindowExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxWindow::DoFreeze();
    if (*m_wxWindowExtDoFreeze != NULL){
      return m_wxWindowExtDoFreeze(this);
    }
  }
  wxWindowExtDoGetBestSizeFunc m_wxWindowExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxWindow::DoGetBestSize();
    if (*m_wxWindowExtDoGetBestSize != NULL){
      return m_wxWindowExtDoGetBestSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetClientSizeintPintPFunc m_wxWindowExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxWindow::DoGetClientSize(width, height);
    if (*m_wxWindowExtDoGetClientSizeintPintP != NULL){
      return m_wxWindowExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxWindowExtDoGetPositionintPintPFunc m_wxWindowExtDoGetPositionintPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxWindow::DoGetPosition(x, y);
    if (*m_wxWindowExtDoGetPositionintPintP != NULL){
      return m_wxWindowExtDoGetPositionintPintP(this, x, y);
    }
  }
  wxWindowExtDoGetSizeintPintPFunc m_wxWindowExtDoGetSizeintPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxWindow::DoGetSize(width, height);
    if (*m_wxWindowExtDoGetSizeintPintP != NULL){
      return m_wxWindowExtDoGetSizeintPintP(this, width, height);
    }
  }
  wxWindowExtDoGetSizeFromClientSizewxSizeCRFunc m_wxWindowExtDoGetSizeFromClientSizewxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxWindow::DoGetSizeFromClientSize(size);
    if (*m_wxWindowExtDoGetSizeFromClientSizewxSizeCR != NULL){
      return m_wxWindowExtDoGetSizeFromClientSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxWindow::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxWindowExtDoGetVirtualSizeFunc m_wxWindowExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxWindow::DoGetVirtualSize();
    if (*m_wxWindowExtDoGetVirtualSize != NULL){
      return m_wxWindowExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoMoveWindowintintintintFunc m_wxWindowExtDoMoveWindowintintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxWindow::DoMoveWindow(x, y, width, height);
    if (*m_wxWindowExtDoMoveWindowintintintint != NULL){
      return m_wxWindowExtDoMoveWindowintintintint(this, x, y, width, height);
    }
  }
  wxWindowExtDoPopupMenuwxMenuPintintFunc m_wxWindowExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxWindow::DoPopupMenu(menu, x, y);
    if (*m_wxWindowExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxWindowExtDoPopupMenuwxMenuPintint(this, menu, x, y, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoReleaseMouseFunc m_wxWindowExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxWindow::DoReleaseMouse();
    if (*m_wxWindowExtDoReleaseMouse != NULL){
      return m_wxWindowExtDoReleaseMouse(this);
    }
  }
  wxWindowExtDoScreenToClientintPintPFunc m_wxWindowExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxWindow::DoScreenToClient(x, y);
    if (*m_wxWindowExtDoScreenToClientintPintP != NULL){
      return m_wxWindowExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxWindowExtDoSetClientSizeintintFunc m_wxWindowExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxWindow::DoSetClientSize(width, height);
    if (*m_wxWindowExtDoSetClientSizeintint != NULL){
      return m_wxWindowExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxWindowExtDoSetSizeintintintintintFunc m_wxWindowExtDoSetSizeintintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxWindow::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxWindowExtDoSetSizeintintintintint != NULL){
      return m_wxWindowExtDoSetSizeintintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxWindowExtDoSetToolTipwxToolTipPFunc m_wxWindowExtDoSetToolTipwxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxWindow::DoSetToolTip(tip);
    if (*m_wxWindowExtDoSetToolTipwxToolTipP != NULL){
      return m_wxWindowExtDoSetToolTipwxToolTipP(this, tip);
    }
  }
  wxWindowExtDoSetVirtualSizeintintFunc m_wxWindowExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxWindow::DoSetVirtualSize(x, y);
    if (*m_wxWindowExtDoSetVirtualSizeintint != NULL){
      return m_wxWindowExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxWindowExtDoSetWindowVariantwxWindowVariantFunc m_wxWindowExtDoSetWindowVariantwxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxWindow::DoSetWindowVariant(variant);
    if (*m_wxWindowExtDoSetWindowVariantwxWindowVariant != NULL){
      return m_wxWindowExtDoSetWindowVariantwxWindowVariant(this, variant);
    }
  }
  wxWindowExtDoThawFunc m_wxWindowExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxWindow::DoThaw();
    if (*m_wxWindowExtDoThaw != NULL){
      return m_wxWindowExtDoThaw(this);
    }
  }
  wxWindowExtEnableTouchEventsintFunc m_wxWindowExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxWindow::EnableTouchEvents(eventsMask);
    if (*m_wxWindowExtEnableTouchEventsint != NULL){
      return m_wxWindowExtEnableTouchEventsint(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtEnableVisibleFocusboolFunc m_wxWindowExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxWindow::EnableVisibleFocus(enabled);
    if (*m_wxWindowExtEnableVisibleFocusbool != NULL){
      return m_wxWindowExtEnableVisibleFocusbool(this, enabled);
    }
  }
  wxWindowExtEndRepositioningChildrenFunc m_wxWindowExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxWindow::EndRepositioningChildren();
    if (*m_wxWindowExtEndRepositioningChildren != NULL){
      return m_wxWindowExtEndRepositioningChildren(this);
    }
  }
  wxWindowExtFitFunc m_wxWindowExtFit = NULL;
  virtual void Fit() override
  {
    wxWindow::Fit();
    if (*m_wxWindowExtFit != NULL){
      return m_wxWindowExtFit(this);
    }
  }
  wxWindowExtFitInsideFunc m_wxWindowExtFitInside = NULL;
  virtual void FitInside() override
  {
    wxWindow::FitInside();
    if (*m_wxWindowExtFitInside != NULL){
      return m_wxWindowExtFitInside(this);
    }
  }
  wxWindowExtGetBestVirtualSizeFunc m_wxWindowExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxWindow::GetBestVirtualSize();
    if (*m_wxWindowExtGetBestVirtualSize != NULL){
      return m_wxWindowExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetCharHeightFunc m_wxWindowExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxWindow::GetCharHeight();
    if (*m_wxWindowExtGetCharHeight != NULL){
      return m_wxWindowExtGetCharHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetCharWidthFunc m_wxWindowExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxWindow::GetCharWidth();
    if (*m_wxWindowExtGetCharWidth != NULL){
      return m_wxWindowExtGetCharWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetClassInfoFunc m_wxWindowExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxWindow::GetClassInfo();
    if (*m_wxWindowExtGetClassInfo != NULL){
      return m_wxWindowExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetClientAreaOriginFunc m_wxWindowExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxWindow::GetClientAreaOrigin();
    if (*m_wxWindowExtGetClientAreaOrigin != NULL){
      return m_wxWindowExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetContentScaleFactorFunc m_wxWindowExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxWindow::GetContentScaleFactor();
    if (*m_wxWindowExtGetContentScaleFactor != NULL){
      return m_wxWindowExtGetContentScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetDPIFunc m_wxWindowExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxWindow::GetDPI();
    if (*m_wxWindowExtGetDPI != NULL){
      return m_wxWindowExtGetDPI(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetDPIScaleFactorFunc m_wxWindowExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxWindow::GetDPIScaleFactor();
    if (*m_wxWindowExtGetDPIScaleFactor != NULL){
      return m_wxWindowExtGetDPIScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetEffectiveMinSizeFunc m_wxWindowExtGetEffectiveMinSize = NULL;
  virtual wxSize GetEffectiveMinSize() const override
  {
    wxSize res = wxWindow::GetEffectiveMinSize();
    if (*m_wxWindowExtGetEffectiveMinSize != NULL){
      return m_wxWindowExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetEventHashTableFunc m_wxWindowExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxWindow::GetEventHashTable();
    if (*m_wxWindowExtGetEventHashTable != NULL){
      return m_wxWindowExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetEventTableFunc m_wxWindowExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxWindow::GetEventTable();
    if (*m_wxWindowExtGetEventTable != NULL){
      return m_wxWindowExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetHandleFunc m_wxWindowExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxWindow::GetHandle();
    if (*m_wxWindowExtGetHandle != NULL){
      return m_wxWindowExtGetHandle(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetLabelFunc m_wxWindowExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    if (*m_wxWindowExtGetLabel != NULL){
      return m_wxWindowExtGetLabel(this);
    }
    else {
      return "";
    }
  }
  wxWindowExtGetLayoutDirectionFunc m_wxWindowExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxWindow::GetLayoutDirection();
    if (*m_wxWindowExtGetLayoutDirection != NULL){
      return m_wxWindowExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetMaxClientSizeFunc m_wxWindowExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxWindow::GetMaxClientSize();
    if (*m_wxWindowExtGetMaxClientSize != NULL){
      return m_wxWindowExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetMaxSizeFunc m_wxWindowExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxWindow::GetMaxSize();
    if (*m_wxWindowExtGetMaxSize != NULL){
      return m_wxWindowExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetMinClientSizeFunc m_wxWindowExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxWindow::GetMinClientSize();
    if (*m_wxWindowExtGetMinClientSize != NULL){
      return m_wxWindowExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetMinSizeFunc m_wxWindowExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxWindow::GetMinSize();
    if (*m_wxWindowExtGetMinSize != NULL){
      return m_wxWindowExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetNameFunc m_wxWindowExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxWindow::GetName();
    if (*m_wxWindowExtGetName != NULL){
      return m_wxWindowExtGetName(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetScrollPosintFunc m_wxWindowExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxWindow::GetScrollPos(orient);
    if (*m_wxWindowExtGetScrollPosint != NULL){
      return m_wxWindowExtGetScrollPosint(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetScrollRangeintFunc m_wxWindowExtGetScrollRangeint = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxWindow::GetScrollRange(orient);
    if (*m_wxWindowExtGetScrollRangeint != NULL){
      return m_wxWindowExtGetScrollRangeint(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetScrollThumbintFunc m_wxWindowExtGetScrollThumbint = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxWindow::GetScrollThumb(orient);
    if (*m_wxWindowExtGetScrollThumbint != NULL){
      return m_wxWindowExtGetScrollThumbint(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetTransparentFunc m_wxWindowExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxWindow::GetTransparent();
    if (*m_wxWindowExtGetTransparent != NULL){
      return m_wxWindowExtGetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetWindowBorderSizeFunc m_wxWindowExtGetWindowBorderSize = NULL;
  virtual wxSize GetWindowBorderSize() const override
  {
    wxSize res = wxWindow::GetWindowBorderSize();
    if (*m_wxWindowExtGetWindowBorderSize != NULL){
      return m_wxWindowExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtHideWithEffectwxShowEffectunsignedintFunc m_wxWindowExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxWindow::HideWithEffect(effect, timeout);
    if (*m_wxWindowExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxWindowExtHideWithEffectwxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtInformFirstDirectionintintintFunc m_wxWindowExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxWindow::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxWindowExtInformFirstDirectionintintint != NULL){
      return m_wxWindowExtInformFirstDirectionintintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsDoubleBufferedFunc m_wxWindowExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxWindow::IsDoubleBuffered();
    if (*m_wxWindowExtIsDoubleBuffered != NULL){
      return m_wxWindowExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsScrollbarAlwaysShownintFunc m_wxWindowExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxWindow::IsScrollbarAlwaysShown(orient);
    if (*m_wxWindowExtIsScrollbarAlwaysShownint != NULL){
      return m_wxWindowExtIsScrollbarAlwaysShownint(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsTransparentBackgroundSupportedwxStringPFunc m_wxWindowExtIsTransparentBackgroundSupportedwxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxWindow::IsTransparentBackgroundSupported(reason);
    if (*m_wxWindowExtIsTransparentBackgroundSupportedwxStringP != NULL){
      return m_wxWindowExtIsTransparentBackgroundSupportedwxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtLowerFunc m_wxWindowExtLower = NULL;
  virtual void Lower() override
  {
    if (*m_wxWindowExtLower != NULL){
      return m_wxWindowExtLower(this);
    }
  }
  wxWindowExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxWindowExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxWindow::OnDynamicBind(param0);
    if (*m_wxWindowExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxWindowExtOnDynamicBindwxDynamicEventTableEntryR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtProcessEventwxEventRFunc m_wxWindowExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxWindow::ProcessEvent(event);
    if (*m_wxWindowExtProcessEventwxEventR != NULL){
      return m_wxWindowExtProcessEventwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtQueueEventwxEventPFunc m_wxWindowExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxWindow::QueueEvent(event);
    if (*m_wxWindowExtQueueEventwxEventP != NULL){
      return m_wxWindowExtQueueEventwxEventP(this, event);
    }
  }
  wxWindowExtRaiseFunc m_wxWindowExtRaise = NULL;
  virtual void Raise() override
  {
    if (*m_wxWindowExtRaise != NULL){
      return m_wxWindowExtRaise(this);
    }
  }
  wxWindowExtRefreshboolwxRectCPFunc m_wxWindowExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxWindow::Refresh(eraseBackground, rect);
    if (*m_wxWindowExtRefreshboolwxRectCP != NULL){
      return m_wxWindowExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxWindowExtRemoveChildwxWindowBasePFunc m_wxWindowExtRemoveChildwxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxWindow::RemoveChild(child);
    if (*m_wxWindowExtRemoveChildwxWindowBaseP != NULL){
      return m_wxWindowExtRemoveChildwxWindowBaseP(this, child);
    }
  }
  wxWindowExtReparentwxWindowBasePFunc m_wxWindowExtReparentwxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxWindow::Reparent(newParent);
    if (*m_wxWindowExtReparentwxWindowBaseP != NULL){
      return m_wxWindowExtReparentwxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtScrollWindowintintwxRectCPFunc m_wxWindowExtScrollWindowintintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxWindow::ScrollWindow(dx, dy, rect);
    if (*m_wxWindowExtScrollWindowintintwxRectCP != NULL){
      return m_wxWindowExtScrollWindowintintwxRectCP(this, dx, dy, rect);
    }
  }
  wxWindowExtSearchEventTablewxEventTableRwxEventRFunc m_wxWindowExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxWindow::SearchEventTable(table, event);
    if (*m_wxWindowExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxWindowExtSearchEventTablewxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSendSizeEventintFunc m_wxWindowExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxWindow::SendSizeEvent(flags);
    if (*m_wxWindowExtSendSizeEventint != NULL){
      return m_wxWindowExtSendSizeEventint(this, flags);
    }
  }
  wxWindowExtSetBackgroundColourwxColourCRFunc m_wxWindowExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxWindow::SetBackgroundColour(colour);
    if (*m_wxWindowExtSetBackgroundColourwxColourCR != NULL){
      return m_wxWindowExtSetBackgroundColourwxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetBackgroundStylewxBackgroundStyleFunc m_wxWindowExtSetBackgroundStylewxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxWindow::SetBackgroundStyle(style);
    if (*m_wxWindowExtSetBackgroundStylewxBackgroundStyle != NULL){
      return m_wxWindowExtSetBackgroundStylewxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetCursorwxCursorCRFunc m_wxWindowExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxWindow::SetCursor(cursor);
    if (*m_wxWindowExtSetCursorwxCursorCR != NULL){
      return m_wxWindowExtSetCursorwxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetDropTargetwxDropTargetPFunc m_wxWindowExtSetDropTargetwxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxWindow::SetDropTarget(dropTarget);
    if (*m_wxWindowExtSetDropTargetwxDropTargetP != NULL){
      return m_wxWindowExtSetDropTargetwxDropTargetP(this, dropTarget);
    }
  }
  wxWindowExtSetFocusFunc m_wxWindowExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxWindow::SetFocus();
    if (*m_wxWindowExtSetFocus != NULL){
      return m_wxWindowExtSetFocus(this);
    }
  }
  wxWindowExtSetFontwxFontCRFunc m_wxWindowExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxWindow::SetFont(font);
    if (*m_wxWindowExtSetFontwxFontCR != NULL){
      return m_wxWindowExtSetFontwxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetForegroundColourwxColourCRFunc m_wxWindowExtSetForegroundColourwxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxWindow::SetForegroundColour(colour);
    if (*m_wxWindowExtSetForegroundColourwxColourCR != NULL){
      return m_wxWindowExtSetForegroundColourwxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetIdwxWindowIDFunc m_wxWindowExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxWindow::SetId(winid);
    if (*m_wxWindowExtSetIdwxWindowID != NULL){
      return m_wxWindowExtSetIdwxWindowID(this, winid);
    }
  }
  wxWindowExtSetLabelwxStringCRFunc m_wxWindowExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    if (*m_wxWindowExtSetLabelwxStringCR != NULL){
      return m_wxWindowExtSetLabelwxStringCR(this, label);
    }
  }
  wxWindowExtSetLayoutDirectionwxLayoutDirectionFunc m_wxWindowExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxWindow::SetLayoutDirection(param0);
    if (*m_wxWindowExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxWindowExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxWindowExtSetMaxClientSizewxSizeCRFunc m_wxWindowExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxWindow::SetMaxClientSize(size);
    if (*m_wxWindowExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxWindowExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxWindowExtSetMaxSizewxSizeCRFunc m_wxWindowExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxWindow::SetMaxSize(maxSize);
    if (*m_wxWindowExtSetMaxSizewxSizeCR != NULL){
      return m_wxWindowExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxWindowExtSetMinClientSizewxSizeCRFunc m_wxWindowExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxWindow::SetMinClientSize(size);
    if (*m_wxWindowExtSetMinClientSizewxSizeCR != NULL){
      return m_wxWindowExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxWindowExtSetMinSizewxSizeCRFunc m_wxWindowExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxWindow::SetMinSize(minSize);
    if (*m_wxWindowExtSetMinSizewxSizeCR != NULL){
      return m_wxWindowExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxWindowExtSetNamewxStringCRFunc m_wxWindowExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxWindow::SetName(name);
    if (*m_wxWindowExtSetNamewxStringCR != NULL){
      return m_wxWindowExtSetNamewxStringCR(this, name);
    }
  }
  wxWindowExtSetNextHandlerwxEvtHandlerPFunc m_wxWindowExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxWindow::SetNextHandler(handler);
    if (*m_wxWindowExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxWindowExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxWindowExtSetPreviousHandlerwxEvtHandlerPFunc m_wxWindowExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxWindow::SetPreviousHandler(handler);
    if (*m_wxWindowExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxWindowExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxWindowExtSetScrollPosintintboolFunc m_wxWindowExtSetScrollPosintintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxWindow::SetScrollPos(orient, pos, refresh);
    if (*m_wxWindowExtSetScrollPosintintbool != NULL){
      return m_wxWindowExtSetScrollPosintintbool(this, orient, pos, refresh);
    }
  }
  wxWindowExtSetScrollbarintintintintboolFunc m_wxWindowExtSetScrollbarintintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxWindow::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxWindowExtSetScrollbarintintintintbool != NULL){
      return m_wxWindowExtSetScrollbarintintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxWindowExtSetSizeHintsintintintintintintFunc m_wxWindowExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxWindow::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxWindowExtSetSizeHintsintintintintintint != NULL){
      return m_wxWindowExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxWindowExtSetTransparentwxByteFunc m_wxWindowExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxWindow::SetTransparent(alpha);
    if (*m_wxWindowExtSetTransparentwxByte != NULL){
      return m_wxWindowExtSetTransparentwxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtShowboolFunc m_wxWindowExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxWindow::Show(show);
    if (*m_wxWindowExtShowbool != NULL){
      return m_wxWindowExtShowbool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtShowWithEffectwxShowEffectunsignedintFunc m_wxWindowExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxWindow::ShowWithEffect(effect, timeout);
    if (*m_wxWindowExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxWindowExtShowWithEffectwxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtTriggerScrollEventwxEventTypeFunc m_wxWindowExtTriggerScrollEventwxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxWindow::TriggerScrollEvent(scrollEvent);
    if (*m_wxWindowExtTriggerScrollEventwxEventType != NULL){
      return m_wxWindowExtTriggerScrollEventwxEventType(this, scrollEvent);
    }
  }
  wxWindowExtTryAfterwxEventRFunc m_wxWindowExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxWindow::TryAfter(event);
    if (*m_wxWindowExtTryAfterwxEventR != NULL){
      return m_wxWindowExtTryAfterwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtTryBeforewxEventRFunc m_wxWindowExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxWindow::TryBefore(event);
    if (*m_wxWindowExtTryBeforewxEventR != NULL){
      return m_wxWindowExtTryBeforewxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtUpdateFunc m_wxWindowExtUpdate = NULL;
  virtual void Update() override
  {
    wxWindow::Update();
    if (*m_wxWindowExtUpdate != NULL){
      return m_wxWindowExtUpdate(this);
    }
  }
  wxWindowExtWarpPointerintintFunc m_wxWindowExtWarpPointerintint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxWindow::WarpPointer(x, y);
    if (*m_wxWindowExtWarpPointerintint != NULL){
      return m_wxWindowExtWarpPointerintint(this, x, y);
    }
  }
  wxWindowExtWindowToClientSizewxSizeCRFunc m_wxWindowExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxWindow::WindowToClientSize(size);
    if (*m_wxWindowExtWindowToClientSizewxSizeCR != NULL){
      return m_wxWindowExtWindowToClientSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxWindowExt(wxWindowExtAcceptsFocusFunc a_AcceptsFocus, wxWindowExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxWindowExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxWindowExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxWindowExtCanSetTransparentFunc a_CanSetTransparent, wxWindowExtClearBackgroundFunc a_ClearBackground, wxWindowExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxWindowExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxWindowExtCreateRefDataFunc a_CreateRefData, wxWindowExtDestroyFunc a_Destroy, wxWindowExtDoCaptureMouseFunc a_DoCaptureMouse, wxWindowExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxWindowExtDoEnableboolFunc a_DoEnablebool, wxWindowExtDoFreezeFunc a_DoFreeze, wxWindowExtDoGetBestSizeFunc a_DoGetBestSize, wxWindowExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxWindowExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxWindowExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxWindowExtDoGetSizeFromClientSizewxSizeCRFunc a_DoGetSizeFromClientSizewxSizeCR, wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxWindowExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxWindowExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxWindowExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxWindowExtDoReleaseMouseFunc a_DoReleaseMouse, wxWindowExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxWindowExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxWindowExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxWindowExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxWindowExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxWindowExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxWindowExtDoThawFunc a_DoThaw, wxWindowExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxWindowExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxWindowExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxWindowExtFitFunc a_Fit, wxWindowExtFitInsideFunc a_FitInside, wxWindowExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxWindowExtGetCharHeightFunc a_GetCharHeight, wxWindowExtGetCharWidthFunc a_GetCharWidth, wxWindowExtGetClassInfoFunc a_GetClassInfo, wxWindowExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxWindowExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxWindowExtGetDPIFunc a_GetDPI, wxWindowExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxWindowExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxWindowExtGetEventHashTableFunc a_GetEventHashTable, wxWindowExtGetEventTableFunc a_GetEventTable, wxWindowExtGetHandleFunc a_GetHandle, wxWindowExtGetLabelFunc a_GetLabel, wxWindowExtGetLayoutDirectionFunc a_GetLayoutDirection, wxWindowExtGetMaxClientSizeFunc a_GetMaxClientSize, wxWindowExtGetMaxSizeFunc a_GetMaxSize, wxWindowExtGetMinClientSizeFunc a_GetMinClientSize, wxWindowExtGetMinSizeFunc a_GetMinSize, wxWindowExtGetNameFunc a_GetName, wxWindowExtGetScrollPosintFunc a_GetScrollPosint, wxWindowExtGetScrollRangeintFunc a_GetScrollRangeint, wxWindowExtGetScrollThumbintFunc a_GetScrollThumbint, wxWindowExtGetTransparentFunc a_GetTransparent, wxWindowExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxWindowExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxWindowExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxWindowExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxWindowExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxWindowExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxWindowExtLowerFunc a_Lower, wxWindowExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxWindowExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxWindowExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxWindowExtRaiseFunc a_Raise, wxWindowExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxWindowExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxWindowExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxWindowExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxWindowExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxWindowExtSendSizeEventintFunc a_SendSizeEventint, wxWindowExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxWindowExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxWindowExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxWindowExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxWindowExtSetFocusFunc a_SetFocus, wxWindowExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxWindowExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxWindowExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxWindowExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxWindowExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxWindowExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxWindowExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxWindowExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxWindowExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxWindowExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxWindowExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxWindowExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxWindowExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxWindowExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxWindowExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxWindowExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxWindowExtShowboolFunc a_Showbool, wxWindowExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxWindowExtTriggerScrollEventwxEventTypeFunc a_TriggerScrollEventwxEventType, wxWindowExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxWindowExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxWindowExtUpdateFunc a_Update, wxWindowExtWarpPointerintintFunc a_WarpPointerintint, wxWindowExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxWindow() {
    m_wxWindowExtAcceptsFocus = a_AcceptsFocus;
    m_wxWindowExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxWindowExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxWindowExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxWindowExtCanSetTransparent = a_CanSetTransparent;
    m_wxWindowExtClearBackground = a_ClearBackground;
    m_wxWindowExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxWindowExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxWindowExtCreateRefData = a_CreateRefData;
    m_wxWindowExtDestroy = a_Destroy;
    m_wxWindowExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxWindowExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxWindowExtDoEnablebool = a_DoEnablebool;
    m_wxWindowExtDoFreeze = a_DoFreeze;
    m_wxWindowExtDoGetBestSize = a_DoGetBestSize;
    m_wxWindowExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxWindowExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxWindowExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxWindowExtDoGetSizeFromClientSizewxSizeCR = a_DoGetSizeFromClientSizewxSizeCR;
    m_wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxWindowExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxWindowExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxWindowExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxWindowExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxWindowExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxWindowExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxWindowExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxWindowExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxWindowExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxWindowExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxWindowExtDoThaw = a_DoThaw;
    m_wxWindowExtEnableTouchEventsint = a_EnableTouchEventsint;
    m_wxWindowExtEnableVisibleFocusbool = a_EnableVisibleFocusbool;
    m_wxWindowExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxWindowExtFit = a_Fit;
    m_wxWindowExtFitInside = a_FitInside;
    m_wxWindowExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxWindowExtGetCharHeight = a_GetCharHeight;
    m_wxWindowExtGetCharWidth = a_GetCharWidth;
    m_wxWindowExtGetClassInfo = a_GetClassInfo;
    m_wxWindowExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxWindowExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxWindowExtGetDPI = a_GetDPI;
    m_wxWindowExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxWindowExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxWindowExtGetEventHashTable = a_GetEventHashTable;
    m_wxWindowExtGetEventTable = a_GetEventTable;
    m_wxWindowExtGetHandle = a_GetHandle;
    m_wxWindowExtGetLabel = a_GetLabel;
    m_wxWindowExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxWindowExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxWindowExtGetMaxSize = a_GetMaxSize;
    m_wxWindowExtGetMinClientSize = a_GetMinClientSize;
    m_wxWindowExtGetMinSize = a_GetMinSize;
    m_wxWindowExtGetName = a_GetName;
    m_wxWindowExtGetScrollPosint = a_GetScrollPosint;
    m_wxWindowExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxWindowExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxWindowExtGetTransparent = a_GetTransparent;
    m_wxWindowExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxWindowExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxWindowExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxWindowExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxWindowExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxWindowExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxWindowExtLower = a_Lower;
    m_wxWindowExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxWindowExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxWindowExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxWindowExtRaise = a_Raise;
    m_wxWindowExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxWindowExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxWindowExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxWindowExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxWindowExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxWindowExtSendSizeEventint = a_SendSizeEventint;
    m_wxWindowExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxWindowExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxWindowExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxWindowExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxWindowExtSetFocus = a_SetFocus;
    m_wxWindowExtSetFontwxFontCR = a_SetFontwxFontCR;
    m_wxWindowExtSetForegroundColourwxColourCR = a_SetForegroundColourwxColourCR;
    m_wxWindowExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxWindowExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxWindowExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxWindowExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxWindowExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxWindowExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxWindowExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxWindowExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxWindowExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxWindowExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxWindowExtSetScrollPosintintbool = a_SetScrollPosintintbool;
    m_wxWindowExtSetScrollbarintintintintbool = a_SetScrollbarintintintintbool;
    m_wxWindowExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxWindowExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxWindowExtShowbool = a_Showbool;
    m_wxWindowExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxWindowExtTriggerScrollEventwxEventType = a_TriggerScrollEventwxEventType;
    m_wxWindowExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxWindowExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxWindowExtUpdate = a_Update;
    m_wxWindowExtWarpPointerintint = a_WarpPointerintint;
    m_wxWindowExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
  }
};



#endif
