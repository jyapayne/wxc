#ifndef _WX_WINDOW_H_EXT_
#define _WX_WINDOW_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxVisualAttributesExt;
class wxWindowListNodeExt;
typedef void (*wxWindowListNodeExtDeleteDataFunc)(const wxWindowListNodeExt* self);
class wxWindowListExt;
class iteratorExt;
class const_iteratorExt;
class reverse_iteratorExt;
class const_reverse_iteratorExt;
class wxWindowBaseExt;
typedef void (*wxWindowBaseExtAddPendingEventwxEventCRFunc)(const wxWindowBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxWindowBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal);
typedef bool (*wxWindowBaseExtBeginRepositioningChildrenFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtClientToWindowSizewxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& size);
typedef wxObjectRefData* (*wxWindowBaseExtCloneRefDatawxObjectRefDataCPFunc)(const wxWindowBaseExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxWindowBaseExtCreateRefDataFunc)(const wxWindowBaseExt* self);
typedef bool (*wxWindowBaseExtDestroyFunc)(const wxWindowBaseExt* self);
typedef void* (*wxWindowBaseExtDoGetClientDataFunc)(const wxWindowBaseExt* self);
typedef wxClientData* (*wxWindowBaseExtDoGetClientObjectFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtDoGetVirtualSizeFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtDoSetClientDatavoidPFunc)(const wxWindowBaseExt* self, void* data);
typedef void (*wxWindowBaseExtDoSetClientObjectwxClientDataPFunc)(const wxWindowBaseExt* self, wxClientData* data);
typedef void (*wxWindowBaseExtDoSetVirtualSizeintintFunc)(const wxWindowBaseExt* self, int x, int y);
typedef void (*wxWindowBaseExtEndRepositioningChildrenFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtFitFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtFitInsideFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtGetBestVirtualSizeFunc)(const wxWindowBaseExt* self);
typedef wxClassInfo* (*wxWindowBaseExtGetClassInfoFunc)(const wxWindowBaseExt* self);
typedef wxPoint (*wxWindowBaseExtGetClientAreaOriginFunc)(const wxWindowBaseExt* self);
typedef double (*wxWindowBaseExtGetContentScaleFactorFunc)(const wxWindowBaseExt* self);
typedef double (*wxWindowBaseExtGetDPIScaleFactorFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtGetEffectiveMinSizeFunc)(const wxWindowBaseExt* self);
typedef wxEventHashTable& (*wxWindowBaseExtGetEventHashTableFunc)(const wxWindowBaseExt* self);
typedef wxEventTable const* (*wxWindowBaseExtGetEventTableFunc)(const wxWindowBaseExt* self);
typedef wxString (*wxWindowBaseExtGetLabelFunc)(const wxWindowBaseExt* self);
typedef wxLayoutDirection (*wxWindowBaseExtGetLayoutDirectionFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtGetMaxClientSizeFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtGetMaxSizeFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtGetMinClientSizeFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtGetMinSizeFunc)(const wxWindowBaseExt* self);
typedef wxString (*wxWindowBaseExtGetNameFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtGetWindowBorderSizeFunc)(const wxWindowBaseExt* self);
typedef bool (*wxWindowBaseExtInformFirstDirectionintintintFunc)(const wxWindowBaseExt* self, int direction, int size, int availableOtherDir);
typedef void (*wxWindowBaseExtLowerFunc)(const wxWindowBaseExt* self);
typedef bool (*wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxWindowBaseExt* self, wxDynamicEventTableEntry& param0);
typedef bool (*wxWindowBaseExtProcessEventwxEventRFunc)(const wxWindowBaseExt* self, wxEvent& event);
typedef void (*wxWindowBaseExtQueueEventwxEventPFunc)(const wxWindowBaseExt* self, wxEvent* event);
typedef void (*wxWindowBaseExtRaiseFunc)(const wxWindowBaseExt* self);
typedef bool (*wxWindowBaseExtSearchEventTablewxEventTableRwxEventRFunc)(const wxWindowBaseExt* self, wxEventTable& table, wxEvent& event);
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
typedef bool (*wxWindowBaseExtTryAfterwxEventRFunc)(const wxWindowBaseExt* self, wxEvent& event);
typedef bool (*wxWindowBaseExtTryBeforewxEventRFunc)(const wxWindowBaseExt* self, wxEvent& event);
typedef void* (*wxWindowBaseExtWXReservedEvtHandler1voidPFunc)(const wxWindowBaseExt* self, void* param0);
typedef void* (*wxWindowBaseExtWXReservedEvtHandler2voidPFunc)(const wxWindowBaseExt* self, void* param0);
typedef wxSize (*wxWindowBaseExtWindowToClientSizewxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& size);
class wxWindowExt;
typedef bool (*wxWindowExtAcceptsFocusFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtAcceptsFocusFromKeyboardFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtAcceptsFocusRecursivelyFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtAddChildwxWindowBasePFunc)(const wxWindowExt* self, wxWindowBase* child);
typedef void (*wxWindowExtAddPendingEventwxEventCRFunc)(const wxWindowExt* self, wxEvent const& event);
typedef wxCoord (*wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxWindowExt* self, wxCoord x, wxCoord width, wxCoord widthTotal);
typedef void (*wxWindowExtAdjustForParentClientOriginintRintRintFunc)(const wxWindowExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxWindowExtAlwaysShowScrollbarsboolboolFunc)(const wxWindowExt* self, bool param0, bool param1);
typedef void (*wxWindowExtAssociateHandleWXWidgetFunc)(const wxWindowExt* self, WXWidget param0);
typedef bool (*wxWindowExtBeginRepositioningChildrenFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtCanApplyThemeBorderFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtCanBeFocusedFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtCanBeOutsideClientAreaFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtCanScrollintFunc)(const wxWindowExt* self, int orient);
typedef bool (*wxWindowExtCanSetTransparentFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtClearBackgroundFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtClientToWindowSizewxSizeCRFunc)(const wxWindowExt* self, wxSize const& size);
typedef wxObjectRefData* (*wxWindowExtCloneRefDatawxObjectRefDataCPFunc)(const wxWindowExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxWindowExtCreateRefDataFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtDestroyFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDissociateHandleFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoCaptureMouseFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoCentreintFunc)(const wxWindowExt* self, int dir);
typedef void (*wxWindowExtDoClientToScreenintPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoEnableboolFunc)(const wxWindowExt* self, bool param0);
typedef void (*wxWindowExtDoFreezeFunc)(const wxWindowExt* self);
typedef int (*wxWindowExtDoGetBestClientHeightintFunc)(const wxWindowExt* self, int param0);
typedef wxSize (*wxWindowExtDoGetBestClientSizeFunc)(const wxWindowExt* self);
typedef int (*wxWindowExtDoGetBestClientWidthintFunc)(const wxWindowExt* self, int param0);
typedef wxSize (*wxWindowExtDoGetBestSizeFunc)(const wxWindowExt* self);
typedef void* (*wxWindowExtDoGetClientDataFunc)(const wxWindowExt* self);
typedef wxClientData* (*wxWindowExtDoGetClientObjectFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoGetClientSizeintPintPFunc)(const wxWindowExt* self, int* width, int* height);
typedef void (*wxWindowExtDoGetPositionintPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoGetScreenPositionintPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoGetSizeintPintPFunc)(const wxWindowExt* self, int* width, int* height);
typedef wxSize (*wxWindowExtDoGetSizeFromClientSizewxSizeCRFunc)(const wxWindowExt* self, wxSize const& size);
typedef void (*wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxWindowExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* font);
typedef wxSize (*wxWindowExtDoGetVirtualSizeFunc)(const wxWindowExt* self);
typedef wxHitTest (*wxWindowExtDoHitTestwxCoordwxCoordFunc)(const wxWindowExt* self, wxCoord x, wxCoord y);
typedef bool (*wxWindowExtDoIsExposedintintintintFunc)(const wxWindowExt* self, int x, int y, int w, int h);
typedef bool (*wxWindowExtDoIsExposedintintFunc)(const wxWindowExt* self, int x, int y);
typedef void (*wxWindowExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc)(const wxWindowExt* self, wxWindow* win, int move);
typedef void (*wxWindowExtDoMoveWindowintintintintFunc)(const wxWindowExt* self, int x, int y, int width, int height);
typedef bool (*wxWindowExtDoNavigateInintFunc)(const wxWindowExt* self, int flags);
typedef bool (*wxWindowExtDoPhaseintFunc)(const wxWindowExt* self, int phase);
typedef bool (*wxWindowExtDoPopupMenuwxMenuPintintFunc)(const wxWindowExt* self, wxMenu* menu, int x, int y);
typedef void (*wxWindowExtDoReleaseMouseFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoScreenToClientintPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoSetClientDatavoidPFunc)(const wxWindowExt* self, void* data);
typedef void (*wxWindowExtDoSetClientObjectwxClientDataPFunc)(const wxWindowExt* self, wxClientData* data);
typedef void (*wxWindowExtDoSetClientSizeintintFunc)(const wxWindowExt* self, int width, int height);
typedef void (*wxWindowExtDoSetSizeintintintintintFunc)(const wxWindowExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxWindowExtDoSetSizeHintsintintintintintintFunc)(const wxWindowExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxWindowExtDoSetToolTipwxToolTipPFunc)(const wxWindowExt* self, wxToolTip* tip);
typedef void (*wxWindowExtDoSetToolTipTextwxStringCRFunc)(const wxWindowExt* self, wxString const& tip);
typedef void (*wxWindowExtDoSetVirtualSizeintintFunc)(const wxWindowExt* self, int x, int y);
typedef void (*wxWindowExtDoSetWindowVariantwxWindowVariantFunc)(const wxWindowExt* self, wxWindowVariant variant);
typedef void (*wxWindowExtDoThawFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxWindowExt* self, wxUpdateUIEvent& event);
typedef void (*wxWindowExtDragAcceptFilesboolFunc)(const wxWindowExt* self, bool accept);
typedef bool (*wxWindowExtEnableboolFunc)(const wxWindowExt* self, bool enable);
typedef bool (*wxWindowExtEnableTouchEventsintFunc)(const wxWindowExt* self, int param0);
typedef void (*wxWindowExtEnableVisibleFocusboolFunc)(const wxWindowExt* self, bool param0);
typedef void (*wxWindowExtEndRepositioningChildrenFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtFitFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtFitInsideFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtGetBestVirtualSizeFunc)(const wxWindowExt* self);
typedef int (*wxWindowExtGetCharHeightFunc)(const wxWindowExt* self);
typedef int (*wxWindowExtGetCharWidthFunc)(const wxWindowExt* self);
typedef wxClassInfo* (*wxWindowExtGetClassInfoFunc)(const wxWindowExt* self);
typedef wxPoint (*wxWindowExtGetClientAreaOriginFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtGetClientSizeConstraintintPintPFunc)(const wxWindowExt* self, int* w, int* h);
typedef double (*wxWindowExtGetContentScaleFactorFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtGetDPIFunc)(const wxWindowExt* self);
typedef double (*wxWindowExtGetDPIScaleFactorFunc)(const wxWindowExt* self);
typedef wxVisualAttributes (*wxWindowExtGetDefaultAttributesFunc)(const wxWindowExt* self);
typedef wxBorder (*wxWindowExtGetDefaultBorderFunc)(const wxWindowExt* self);
typedef wxBorder (*wxWindowExtGetDefaultBorderForControlFunc)(const wxWindowExt* self);
typedef wxDropTarget* (*wxWindowExtGetDropTargetFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtGetEffectiveMinSizeFunc)(const wxWindowExt* self);
typedef wxEventHashTable& (*wxWindowExtGetEventHashTableFunc)(const wxWindowExt* self);
typedef wxEventTable const* (*wxWindowExtGetEventTableFunc)(const wxWindowExt* self);
typedef WXWidget (*wxWindowExtGetHandleFunc)(const wxWindowExt* self);
typedef wxString (*wxWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc)(const wxWindowExt* self, wxPoint const& pt, wxHelpEvent::Origin origin);
typedef wxString (*wxWindowExtGetLabelFunc)(const wxWindowExt* self);
typedef wxLayoutDirection (*wxWindowExtGetLayoutDirectionFunc)(const wxWindowExt* self);
typedef wxWindow* (*wxWindowExtGetMainWindowOfCompositeControlFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtGetMaxClientSizeFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtGetMaxSizeFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtGetMinClientSizeFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtGetMinSizeFunc)(const wxWindowExt* self);
typedef wxString (*wxWindowExtGetNameFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtGetPositionConstraintintPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef int (*wxWindowExtGetScrollPosintFunc)(const wxWindowExt* self, int orient);
typedef int (*wxWindowExtGetScrollRangeintFunc)(const wxWindowExt* self, int orient);
typedef int (*wxWindowExtGetScrollThumbintFunc)(const wxWindowExt* self, int orient);
typedef void (*wxWindowExtGetSizeConstraintintPintPFunc)(const wxWindowExt* self, int* w, int* h);
typedef bool (*wxWindowExtGetThemeEnabledFunc)(const wxWindowExt* self);
typedef wxByte (*wxWindowExtGetTransparentFunc)(const wxWindowExt* self);
typedef wxValidator* (*wxWindowExtGetValidatorFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtGetWindowBorderSizeFunc)(const wxWindowExt* self);
typedef long (*wxWindowExtGetWindowStyleFlagFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtHasCaptureFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtHasFocusFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtHasMultiplePagesFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtHasTransparentBackgroundFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtHideWithEffectwxShowEffectunsignedintFunc)(const wxWindowExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxWindowExtInformFirstDirectionintintintFunc)(const wxWindowExt* self, int direction, int size, int availableOtherDir);
typedef void (*wxWindowExtInheritAttributesFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtInitDialogFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtIsClientAreaChildwxWindowCPFunc)(const wxWindowExt* self, wxWindow const* param0);
typedef bool (*wxWindowExtIsDoubleBufferedFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtIsRetainedFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtIsScrollbarAlwaysShownintFunc)(const wxWindowExt* self, int param0);
typedef bool (*wxWindowExtIsShownFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtIsShownOnScreenFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtIsThisEnabledFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtIsTopLevelFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxWindowExt* self, wxWindowBase::NavigationKind param0);
typedef bool (*wxWindowExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxWindowExt* self, wxString* reason);
typedef bool (*wxWindowExtLayoutFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtLayoutPhase1intPFunc)(const wxWindowExt* self, int* noChanges);
typedef bool (*wxWindowExtLayoutPhase2intPFunc)(const wxWindowExt* self, int* noChanges);
typedef void (*wxWindowExtLowerFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtMoveConstraintintintFunc)(const wxWindowExt* self, int x, int y);
typedef bool (*wxWindowExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxWindowExt* self, wxDynamicEventTableEntry& param0);
typedef void (*wxWindowExtOnInternalIdleFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtPrepareDCwxDCRFunc)(const wxWindowExt* self, wxDC& param0);
typedef bool (*wxWindowExtProcessEventwxEventRFunc)(const wxWindowExt* self, wxEvent& event);
typedef void (*wxWindowExtQueueEventwxEventPFunc)(const wxWindowExt* self, wxEvent* event);
typedef void (*wxWindowExtRaiseFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtRefreshboolwxRectCPFunc)(const wxWindowExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxWindowExtRegisterHotKeyintintintFunc)(const wxWindowExt* self, int hotkeyId, int modifiers, int keycode);
typedef void (*wxWindowExtRemoveChildwxWindowBasePFunc)(const wxWindowExt* self, wxWindowBase* child);
typedef bool (*wxWindowExtReparentwxWindowBasePFunc)(const wxWindowExt* self, wxWindowBase* newParent);
typedef bool (*wxWindowExtScrollLinesintFunc)(const wxWindowExt* self, int param0);
typedef bool (*wxWindowExtScrollPagesintFunc)(const wxWindowExt* self, int param0);
typedef void (*wxWindowExtScrollWindowintintwxRectCPFunc)(const wxWindowExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxWindowExtSearchEventTablewxEventTableRwxEventRFunc)(const wxWindowExt* self, wxEventTable& table, wxEvent& event);
typedef bool (*wxWindowExtSendIdleEventswxIdleEventRFunc)(const wxWindowExt* self, wxIdleEvent& event);
typedef void (*wxWindowExtSendSizeEventintFunc)(const wxWindowExt* self, int flags);
typedef void (*wxWindowExtSetAcceleratorTablewxAcceleratorTableCRFunc)(const wxWindowExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxWindowExtSetBackgroundColourwxColourCRFunc)(const wxWindowExt* self, wxColour const& colour);
typedef bool (*wxWindowExtSetBackgroundStylewxBackgroundStyleFunc)(const wxWindowExt* self, wxBackgroundStyle style);
typedef void (*wxWindowExtSetCanFocusboolFunc)(const wxWindowExt* self, bool param0);
typedef void (*wxWindowExtSetConstraintSizesboolFunc)(const wxWindowExt* self, bool recurse);
typedef bool (*wxWindowExtSetCursorwxCursorCRFunc)(const wxWindowExt* self, wxCursor const& cursor);
typedef void (*wxWindowExtSetDoubleBufferedboolFunc)(const wxWindowExt* self, bool param0);
typedef void (*wxWindowExtSetDropTargetwxDropTargetPFunc)(const wxWindowExt* self, wxDropTarget* dropTarget);
typedef void (*wxWindowExtSetExtraStylelongFunc)(const wxWindowExt* self, long exStyle);
typedef void (*wxWindowExtSetFocusFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtSetFocusFromKbdFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtSetFontwxFontCRFunc)(const wxWindowExt* self, wxFont const& font);
typedef bool (*wxWindowExtSetForegroundColourwxColourCRFunc)(const wxWindowExt* self, wxColour const& colour);
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
typedef void (*wxWindowExtSetScrollbarintintintintboolFunc)(const wxWindowExt* self, int orient, int pos, int thumbvisible, int range, bool refresh);
typedef void (*wxWindowExtSetSizeConstraintintintintintFunc)(const wxWindowExt* self, int x, int y, int w, int h);
typedef void (*wxWindowExtSetSizeHintsintintintintintintFunc)(const wxWindowExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxWindowExtSetThemeEnabledboolFunc)(const wxWindowExt* self, bool enableTheme);
typedef bool (*wxWindowExtSetTransparentwxByteFunc)(const wxWindowExt* self, wxByte param0);
typedef void (*wxWindowExtSetValidatorwxValidatorCRFunc)(const wxWindowExt* self, wxValidator const& validator);
typedef void (*wxWindowExtSetWindowStyleFlaglongFunc)(const wxWindowExt* self, long style);
typedef bool (*wxWindowExtShouldInheritColoursFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtShowboolFunc)(const wxWindowExt* self, bool show);
typedef bool (*wxWindowExtShowWithEffectwxShowEffectunsignedintFunc)(const wxWindowExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxWindowExtTransferDataFromWindowFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtTransferDataToWindowFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtTriggerScrollEventwxEventTypeFunc)(const wxWindowExt* self, wxEventType scrollEvent);
typedef bool (*wxWindowExtTryAfterwxEventRFunc)(const wxWindowExt* self, wxEvent& event);
typedef bool (*wxWindowExtTryBeforewxEventRFunc)(const wxWindowExt* self, wxEvent& event);
typedef bool (*wxWindowExtUnregisterHotKeyintFunc)(const wxWindowExt* self, int hotkeyId);
typedef void (*wxWindowExtUpdateFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtUpdateWindowUIlongFunc)(const wxWindowExt* self, long flags);
typedef bool (*wxWindowExtValidateFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtWXAdjustFontToOwnPPIwxFontRFunc)(const wxWindowExt* self, wxFont& param0);
typedef wxTextEntry const* (*wxWindowExtWXGetTextEntryFunc)(const wxWindowExt* self);
typedef void* (*wxWindowExtWXReservedEvtHandler1voidPFunc)(const wxWindowExt* self, void* param0);
typedef void* (*wxWindowExtWXReservedEvtHandler2voidPFunc)(const wxWindowExt* self, void* param0);
typedef void* (*wxWindowExtWXReservedWindow1voidPFunc)(const wxWindowExt* self, void* param0);
typedef void* (*wxWindowExtWXReservedWindow2voidPFunc)(const wxWindowExt* self, void* param0);
typedef void* (*wxWindowExtWXReservedWindow3voidPFunc)(const wxWindowExt* self, void* param0);
typedef void (*wxWindowExtWXSetInitialFittingClientSizeintwxSizerPFunc)(const wxWindowExt* self, int flags, wxSizer* sizer);
typedef void (*wxWindowExtWarpPointerintintFunc)(const wxWindowExt* self, int x, int y);
typedef wxSize (*wxWindowExtWindowToClientSizewxSizeCRFunc)(const wxWindowExt* self, wxSize const& size);

class wxVisualAttributesExt: public wxVisualAttributes
{
public:
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


class iteratorExt: public wxWindowList::iterator
{
public:
  iteratorExt(wxWindowList::iterator::Node* node, wxWindowList::iterator::Node* init): iterator(node, init)  {  }
  iteratorExt(): iterator()  {  }
};

class const_iteratorExt: public wxWindowList::const_iterator
{
public:
  const_iteratorExt(wxWindowList::const_iterator::Node* node, wxWindowList::const_iterator::Node* init): const_iterator(node, init)  {  }
  const_iteratorExt(): const_iterator()  {  }
  const_iteratorExt(wxWindowList::iterator const& it): const_iterator(it)  {  }
};

class reverse_iteratorExt: public wxWindowList::reverse_iterator
{
public:
  reverse_iteratorExt(wxWindowList::reverse_iterator::Node* node, wxWindowList::reverse_iterator::Node* init): reverse_iterator(node, init)  {  }
  reverse_iteratorExt(): reverse_iterator()  {  }
};

class const_reverse_iteratorExt: public wxWindowList::const_reverse_iterator
{
public:
  const_reverse_iteratorExt(wxWindowList::const_reverse_iterator::Node* node, wxWindowList::const_reverse_iterator::Node* init): const_reverse_iterator(node, init)  {  }
  const_reverse_iteratorExt(): const_reverse_iterator()  {  }
  const_reverse_iteratorExt(wxWindowList::reverse_iterator const& it): const_reverse_iterator(it)  {  }
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
      return m_wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal);
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
      return m_wxWindowBaseExtBeginRepositioningChildren(this);
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
      return m_wxWindowBaseExtClientToWindowSizewxSizeCR(this, size);
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
      return m_wxWindowBaseExtCloneRefDatawxObjectRefDataCP(this, data);
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
      return m_wxWindowBaseExtCreateRefData(this);
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
      return m_wxWindowBaseExtDestroy(this);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoGetClientDataFunc m_wxWindowBaseExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxWindowBase::DoGetClientData();
    if (*m_wxWindowBaseExtDoGetClientData != NULL){
      return m_wxWindowBaseExtDoGetClientData(this);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoGetClientObjectFunc m_wxWindowBaseExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxWindowBase::DoGetClientObject();
    if (*m_wxWindowBaseExtDoGetClientObject != NULL){
      return m_wxWindowBaseExtDoGetClientObject(this);
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
      return m_wxWindowBaseExtDoGetVirtualSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoSetClientDatavoidPFunc m_wxWindowBaseExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxWindowBase::DoSetClientData(data);
    if (*m_wxWindowBaseExtDoSetClientDatavoidP != NULL){
      return m_wxWindowBaseExtDoSetClientDatavoidP(this, data);
    }
  }
  wxWindowBaseExtDoSetClientObjectwxClientDataPFunc m_wxWindowBaseExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxWindowBase::DoSetClientObject(data);
    if (*m_wxWindowBaseExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxWindowBaseExtDoSetClientObjectwxClientDataP(this, data);
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
      return m_wxWindowBaseExtGetBestVirtualSize(this);
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
      return m_wxWindowBaseExtGetClassInfo(this);
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
      return m_wxWindowBaseExtGetClientAreaOrigin(this);
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
  wxWindowBaseExtGetEventHashTableFunc m_wxWindowBaseExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxWindowBase::GetEventHashTable();
    if (*m_wxWindowBaseExtGetEventHashTable != NULL){
      return m_wxWindowBaseExtGetEventHashTable(this);
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
      return m_wxWindowBaseExtGetEventTable(this);
    }
    else {
      return res;
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
  wxWindowBaseExtGetLayoutDirectionFunc m_wxWindowBaseExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxWindowBase::GetLayoutDirection();
    if (*m_wxWindowBaseExtGetLayoutDirection != NULL){
      return m_wxWindowBaseExtGetLayoutDirection(this);
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
      return m_wxWindowBaseExtGetMaxClientSize(this);
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
      return m_wxWindowBaseExtGetMaxSize(this);
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
      return m_wxWindowBaseExtGetMinClientSize(this);
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
      return m_wxWindowBaseExtGetMinSize(this);
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
      return m_wxWindowBaseExtGetName(this);
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
  wxWindowBaseExtInformFirstDirectionintintintFunc m_wxWindowBaseExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxWindowBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxWindowBaseExtInformFirstDirectionintintint != NULL){
      return m_wxWindowBaseExtInformFirstDirectionintintint(this, direction, size, availableOtherDir);
    }
    else {
      return res;
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
  wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxWindowBase::OnDynamicBind(param0);
    if (*m_wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
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
      return m_wxWindowBaseExtProcessEventwxEventR(this, event);
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
    wxWindowBase::Raise();
    if (*m_wxWindowBaseExtRaise != NULL){
      return m_wxWindowBaseExtRaise(this);
    }
  }
  wxWindowBaseExtSearchEventTablewxEventTableRwxEventRFunc m_wxWindowBaseExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxWindowBase::SearchEventTable(table, event);
    if (*m_wxWindowBaseExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxWindowBaseExtSearchEventTablewxEventTableRwxEventR(this, table, event);
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
    wxWindowBase::SetLabel(label);
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
      return m_wxWindowBaseExtTryAfterwxEventR(this, event);
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
      return m_wxWindowBaseExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtWXReservedEvtHandler1voidPFunc m_wxWindowBaseExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxWindowBase::WXReservedEvtHandler1(param0);
    if (*m_wxWindowBaseExtWXReservedEvtHandler1voidP != NULL){
      return m_wxWindowBaseExtWXReservedEvtHandler1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtWXReservedEvtHandler2voidPFunc m_wxWindowBaseExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxWindowBase::WXReservedEvtHandler2(param0);
    if (*m_wxWindowBaseExtWXReservedEvtHandler2voidP != NULL){
      return m_wxWindowBaseExtWXReservedEvtHandler2voidP(this, param0);
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
      return m_wxWindowBaseExtWindowToClientSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExt(wxWindowBaseExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxWindowBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxWindowBaseExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxWindowBaseExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxWindowBaseExtCreateRefDataFunc a_CreateRefData, wxWindowBaseExtDestroyFunc a_Destroy, wxWindowBaseExtDoGetClientDataFunc a_DoGetClientData, wxWindowBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxWindowBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxWindowBaseExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxWindowBaseExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxWindowBaseExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxWindowBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxWindowBaseExtFitFunc a_Fit, wxWindowBaseExtFitInsideFunc a_FitInside, wxWindowBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxWindowBaseExtGetClassInfoFunc a_GetClassInfo, wxWindowBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxWindowBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxWindowBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxWindowBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxWindowBaseExtGetEventHashTableFunc a_GetEventHashTable, wxWindowBaseExtGetEventTableFunc a_GetEventTable, wxWindowBaseExtGetLabelFunc a_GetLabel, wxWindowBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxWindowBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxWindowBaseExtGetMaxSizeFunc a_GetMaxSize, wxWindowBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxWindowBaseExtGetMinSizeFunc a_GetMinSize, wxWindowBaseExtGetNameFunc a_GetName, wxWindowBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxWindowBaseExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxWindowBaseExtLowerFunc a_Lower, wxWindowBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxWindowBaseExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxWindowBaseExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxWindowBaseExtRaiseFunc a_Raise, wxWindowBaseExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxWindowBaseExtSendSizeEventintFunc a_SendSizeEventint, wxWindowBaseExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxWindowBaseExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxWindowBaseExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxWindowBaseExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxWindowBaseExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxWindowBaseExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxWindowBaseExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxWindowBaseExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxWindowBaseExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxWindowBaseExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxWindowBaseExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxWindowBaseExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxWindowBaseExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxWindowBaseExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxWindowBaseExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxWindowBaseExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxWindowBase() {
    m_wxWindowBaseExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxWindowBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxWindowBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxWindowBaseExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxWindowBaseExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxWindowBaseExtCreateRefData = a_CreateRefData;
    m_wxWindowBaseExtDestroy = a_Destroy;
    m_wxWindowBaseExtDoGetClientData = a_DoGetClientData;
    m_wxWindowBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxWindowBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxWindowBaseExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxWindowBaseExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
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
    m_wxWindowBaseExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxWindowBaseExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
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
      return m_wxWindowExtAcceptsFocus(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtAcceptsFocusFromKeyboardFunc m_wxWindowExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxWindow::AcceptsFocusFromKeyboard();
    if (*m_wxWindowExtAcceptsFocusFromKeyboard != NULL){
      return m_wxWindowExtAcceptsFocusFromKeyboard(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtAcceptsFocusRecursivelyFunc m_wxWindowExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxWindow::AcceptsFocusRecursively();
    if (*m_wxWindowExtAcceptsFocusRecursively != NULL){
      return m_wxWindowExtAcceptsFocusRecursively(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtAddChildwxWindowBasePFunc m_wxWindowExtAddChildwxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxWindow::AddChild(child);
    if (*m_wxWindowExtAddChildwxWindowBaseP != NULL){
      return m_wxWindowExtAddChildwxWindowBaseP(this, child);
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
      return m_wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal);
    }
    else {
      return res;
    }
  }
  wxWindowExtAdjustForParentClientOriginintRintRintFunc m_wxWindowExtAdjustForParentClientOriginintRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxWindow::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxWindowExtAdjustForParentClientOriginintRintRint != NULL){
      return m_wxWindowExtAdjustForParentClientOriginintRintRint(this, x, y, sizeFlags);
    }
  }
  wxWindowExtAlwaysShowScrollbarsboolboolFunc m_wxWindowExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool param0 = true, bool param1 = true) override
  {
    wxWindow::AlwaysShowScrollbars(param0, param1);
    if (*m_wxWindowExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxWindowExtAlwaysShowScrollbarsboolbool(this, param0, param1);
    }
  }
  wxWindowExtAssociateHandleWXWidgetFunc m_wxWindowExtAssociateHandleWXWidget = NULL;
  virtual void AssociateHandle(WXWidget param0) override
  {
    wxWindow::AssociateHandle(param0);
    if (*m_wxWindowExtAssociateHandleWXWidget != NULL){
      return m_wxWindowExtAssociateHandleWXWidget(this, param0);
    }
  }
  wxWindowExtBeginRepositioningChildrenFunc m_wxWindowExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxWindow::BeginRepositioningChildren();
    if (*m_wxWindowExtBeginRepositioningChildren != NULL){
      return m_wxWindowExtBeginRepositioningChildren(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtCanApplyThemeBorderFunc m_wxWindowExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxWindow::CanApplyThemeBorder();
    if (*m_wxWindowExtCanApplyThemeBorder != NULL){
      return m_wxWindowExtCanApplyThemeBorder(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtCanBeFocusedFunc m_wxWindowExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxWindow::CanBeFocused();
    if (*m_wxWindowExtCanBeFocused != NULL){
      return m_wxWindowExtCanBeFocused(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtCanBeOutsideClientAreaFunc m_wxWindowExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxWindow::CanBeOutsideClientArea();
    if (*m_wxWindowExtCanBeOutsideClientArea != NULL){
      return m_wxWindowExtCanBeOutsideClientArea(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtCanScrollintFunc m_wxWindowExtCanScrollint = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxWindow::CanScroll(orient);
    if (*m_wxWindowExtCanScrollint != NULL){
      return m_wxWindowExtCanScrollint(this, orient);
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
      return m_wxWindowExtCanSetTransparent(this);
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
      return m_wxWindowExtClientToWindowSizewxSizeCR(this, size);
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
      return m_wxWindowExtCloneRefDatawxObjectRefDataCP(this, data);
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
      return m_wxWindowExtCreateRefData(this);
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
      return m_wxWindowExtDestroy(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtDissociateHandleFunc m_wxWindowExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxWindow::DissociateHandle();
    if (*m_wxWindowExtDissociateHandle != NULL){
      return m_wxWindowExtDissociateHandle(this);
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
  wxWindowExtDoCentreintFunc m_wxWindowExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxWindow::DoCentre(dir);
    if (*m_wxWindowExtDoCentreint != NULL){
      return m_wxWindowExtDoCentreint(this, dir);
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
  virtual void DoEnable(bool param0) override
  {
    wxWindow::DoEnable(param0);
    if (*m_wxWindowExtDoEnablebool != NULL){
      return m_wxWindowExtDoEnablebool(this, param0);
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
  wxWindowExtDoGetBestClientHeightintFunc m_wxWindowExtDoGetBestClientHeightint = NULL;
  virtual int DoGetBestClientHeight(int param0) const override
  {
    int res = wxWindow::DoGetBestClientHeight(param0);
    if (*m_wxWindowExtDoGetBestClientHeightint != NULL){
      return m_wxWindowExtDoGetBestClientHeightint(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetBestClientSizeFunc m_wxWindowExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxWindow::DoGetBestClientSize();
    if (*m_wxWindowExtDoGetBestClientSize != NULL){
      return m_wxWindowExtDoGetBestClientSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetBestClientWidthintFunc m_wxWindowExtDoGetBestClientWidthint = NULL;
  virtual int DoGetBestClientWidth(int param0) const override
  {
    int res = wxWindow::DoGetBestClientWidth(param0);
    if (*m_wxWindowExtDoGetBestClientWidthint != NULL){
      return m_wxWindowExtDoGetBestClientWidthint(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetBestSizeFunc m_wxWindowExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxWindow::DoGetBestSize();
    if (*m_wxWindowExtDoGetBestSize != NULL){
      return m_wxWindowExtDoGetBestSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetClientDataFunc m_wxWindowExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxWindow::DoGetClientData();
    if (*m_wxWindowExtDoGetClientData != NULL){
      return m_wxWindowExtDoGetClientData(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetClientObjectFunc m_wxWindowExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxWindow::DoGetClientObject();
    if (*m_wxWindowExtDoGetClientObject != NULL){
      return m_wxWindowExtDoGetClientObject(this);
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
  wxWindowExtDoGetScreenPositionintPintPFunc m_wxWindowExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxWindow::DoGetScreenPosition(x, y);
    if (*m_wxWindowExtDoGetScreenPositionintPintP != NULL){
      return m_wxWindowExtDoGetScreenPositionintPintP(this, x, y);
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
      return m_wxWindowExtDoGetSizeFromClientSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* font = __null) const override
  {
    wxWindow::DoGetTextExtent(string, x, y, descent, externalLeading, font);
    if (*m_wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, font);
    }
  }
  wxWindowExtDoGetVirtualSizeFunc m_wxWindowExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxWindow::DoGetVirtualSize();
    if (*m_wxWindowExtDoGetVirtualSize != NULL){
      return m_wxWindowExtDoGetVirtualSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoHitTestwxCoordwxCoordFunc m_wxWindowExtDoHitTestwxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxWindow::DoHitTest(x, y);
    if (*m_wxWindowExtDoHitTestwxCoordwxCoord != NULL){
      return m_wxWindowExtDoHitTestwxCoordwxCoord(this, x, y);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoIsExposedintintintintFunc m_wxWindowExtDoIsExposedintintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxWindow::DoIsExposed(x, y, w, h);
    if (*m_wxWindowExtDoIsExposedintintintint != NULL){
      return m_wxWindowExtDoIsExposedintintintint(this, x, y, w, h);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoIsExposedintintFunc m_wxWindowExtDoIsExposedintint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxWindow::DoIsExposed(x, y);
    if (*m_wxWindowExtDoIsExposedintint != NULL){
      return m_wxWindowExtDoIsExposedintint(this, x, y);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc m_wxWindowExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, WindowOrder move) override
  {
    wxWindow::DoMoveInTabOrder(win, move);
    if (*m_wxWindowExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxWindowExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder(this, win, move);
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
  wxWindowExtDoNavigateInintFunc m_wxWindowExtDoNavigateInint = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxWindow::DoNavigateIn(flags);
    if (*m_wxWindowExtDoNavigateInint != NULL){
      return m_wxWindowExtDoNavigateInint(this, flags);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoPhaseintFunc m_wxWindowExtDoPhaseint = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxWindow::DoPhase(phase);
    if (*m_wxWindowExtDoPhaseint != NULL){
      return m_wxWindowExtDoPhaseint(this, phase);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoPopupMenuwxMenuPintintFunc m_wxWindowExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxWindow::DoPopupMenu(menu, x, y);
    if (*m_wxWindowExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxWindowExtDoPopupMenuwxMenuPintint(this, menu, x, y);
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
  wxWindowExtDoSetClientDatavoidPFunc m_wxWindowExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxWindow::DoSetClientData(data);
    if (*m_wxWindowExtDoSetClientDatavoidP != NULL){
      return m_wxWindowExtDoSetClientDatavoidP(this, data);
    }
  }
  wxWindowExtDoSetClientObjectwxClientDataPFunc m_wxWindowExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxWindow::DoSetClientObject(data);
    if (*m_wxWindowExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxWindowExtDoSetClientObjectwxClientDataP(this, data);
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
  wxWindowExtDoSetSizeHintsintintintintintintFunc m_wxWindowExtDoSetSizeHintsintintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxWindow::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxWindowExtDoSetSizeHintsintintintintintint != NULL){
      return m_wxWindowExtDoSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
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
  wxWindowExtDoSetToolTipTextwxStringCRFunc m_wxWindowExtDoSetToolTipTextwxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxWindow::DoSetToolTipText(tip);
    if (*m_wxWindowExtDoSetToolTipTextwxStringCR != NULL){
      return m_wxWindowExtDoSetToolTipTextwxStringCR(this, tip);
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
  wxWindowExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxWindowExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxWindow::DoUpdateWindowUI(event);
    if (*m_wxWindowExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxWindowExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxWindowExtDragAcceptFilesboolFunc m_wxWindowExtDragAcceptFilesbool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxWindow::DragAcceptFiles(accept);
    if (*m_wxWindowExtDragAcceptFilesbool != NULL){
      return m_wxWindowExtDragAcceptFilesbool(this, accept);
    }
  }
  wxWindowExtEnableboolFunc m_wxWindowExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxWindow::Enable(enable);
    if (*m_wxWindowExtEnablebool != NULL){
      return m_wxWindowExtEnablebool(this, enable);
    }
    else {
      return res;
    }
  }
  wxWindowExtEnableTouchEventsintFunc m_wxWindowExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int param0) override
  {
    bool res = wxWindow::EnableTouchEvents(param0);
    if (*m_wxWindowExtEnableTouchEventsint != NULL){
      return m_wxWindowExtEnableTouchEventsint(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtEnableVisibleFocusboolFunc m_wxWindowExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool param0) override
  {
    wxWindow::EnableVisibleFocus(param0);
    if (*m_wxWindowExtEnableVisibleFocusbool != NULL){
      return m_wxWindowExtEnableVisibleFocusbool(this, param0);
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
      return m_wxWindowExtGetBestVirtualSize(this);
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
      return m_wxWindowExtGetCharHeight(this);
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
      return m_wxWindowExtGetCharWidth(this);
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
      return m_wxWindowExtGetClassInfo(this);
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
      return m_wxWindowExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetClientSizeConstraintintPintPFunc m_wxWindowExtGetClientSizeConstraintintPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxWindow::GetClientSizeConstraint(w, h);
    if (*m_wxWindowExtGetClientSizeConstraintintPintP != NULL){
      return m_wxWindowExtGetClientSizeConstraintintPintP(this, w, h);
    }
  }
  wxWindowExtGetContentScaleFactorFunc m_wxWindowExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxWindow::GetContentScaleFactor();
    if (*m_wxWindowExtGetContentScaleFactor != NULL){
      return m_wxWindowExtGetContentScaleFactor(this);
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
      return m_wxWindowExtGetDPI(this);
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
      return m_wxWindowExtGetDPIScaleFactor(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetDefaultAttributesFunc m_wxWindowExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxWindow::GetDefaultAttributes();
    if (*m_wxWindowExtGetDefaultAttributes != NULL){
      return m_wxWindowExtGetDefaultAttributes(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetDefaultBorderFunc m_wxWindowExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxWindow::GetDefaultBorder();
    if (*m_wxWindowExtGetDefaultBorder != NULL){
      return m_wxWindowExtGetDefaultBorder(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetDefaultBorderForControlFunc m_wxWindowExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxWindow::GetDefaultBorderForControl();
    if (*m_wxWindowExtGetDefaultBorderForControl != NULL){
      return m_wxWindowExtGetDefaultBorderForControl(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetDropTargetFunc m_wxWindowExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxWindow::GetDropTarget();
    if (*m_wxWindowExtGetDropTarget != NULL){
      return m_wxWindowExtGetDropTarget(this);
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
      return m_wxWindowExtGetEffectiveMinSize(this);
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
      return m_wxWindowExtGetEventHashTable(this);
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
      return m_wxWindowExtGetEventTable(this);
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
      return m_wxWindowExtGetHandle(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc m_wxWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxWindow::GetHelpTextAtPoint(pt, origin);
    if (*m_wxWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin != NULL){
      return m_wxWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin(this, pt, origin);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetLabelFunc m_wxWindowExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxWindow::GetLabel();
    if (*m_wxWindowExtGetLabel != NULL){
      return m_wxWindowExtGetLabel(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetLayoutDirectionFunc m_wxWindowExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxWindow::GetLayoutDirection();
    if (*m_wxWindowExtGetLayoutDirection != NULL){
      return m_wxWindowExtGetLayoutDirection(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetMainWindowOfCompositeControlFunc m_wxWindowExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxWindow::GetMainWindowOfCompositeControl();
    if (*m_wxWindowExtGetMainWindowOfCompositeControl != NULL){
      return m_wxWindowExtGetMainWindowOfCompositeControl(this);
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
      return m_wxWindowExtGetMaxClientSize(this);
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
      return m_wxWindowExtGetMaxSize(this);
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
      return m_wxWindowExtGetMinClientSize(this);
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
      return m_wxWindowExtGetMinSize(this);
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
      return m_wxWindowExtGetName(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetPositionConstraintintPintPFunc m_wxWindowExtGetPositionConstraintintPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxWindow::GetPositionConstraint(x, y);
    if (*m_wxWindowExtGetPositionConstraintintPintP != NULL){
      return m_wxWindowExtGetPositionConstraintintPintP(this, x, y);
    }
  }
  wxWindowExtGetScrollPosintFunc m_wxWindowExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxWindow::GetScrollPos(orient);
    if (*m_wxWindowExtGetScrollPosint != NULL){
      return m_wxWindowExtGetScrollPosint(this, orient);
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
      return m_wxWindowExtGetScrollRangeint(this, orient);
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
      return m_wxWindowExtGetScrollThumbint(this, orient);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetSizeConstraintintPintPFunc m_wxWindowExtGetSizeConstraintintPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxWindow::GetSizeConstraint(w, h);
    if (*m_wxWindowExtGetSizeConstraintintPintP != NULL){
      return m_wxWindowExtGetSizeConstraintintPintP(this, w, h);
    }
  }
  wxWindowExtGetThemeEnabledFunc m_wxWindowExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxWindow::GetThemeEnabled();
    if (*m_wxWindowExtGetThemeEnabled != NULL){
      return m_wxWindowExtGetThemeEnabled(this);
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
      return m_wxWindowExtGetTransparent(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetValidatorFunc m_wxWindowExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxWindow::GetValidator();
    if (*m_wxWindowExtGetValidator != NULL){
      return m_wxWindowExtGetValidator(this);
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
      return m_wxWindowExtGetWindowBorderSize(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtGetWindowStyleFlagFunc m_wxWindowExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxWindow::GetWindowStyleFlag();
    if (*m_wxWindowExtGetWindowStyleFlag != NULL){
      return m_wxWindowExtGetWindowStyleFlag(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtHasCaptureFunc m_wxWindowExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxWindow::HasCapture();
    if (*m_wxWindowExtHasCapture != NULL){
      return m_wxWindowExtHasCapture(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtHasFocusFunc m_wxWindowExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxWindow::HasFocus();
    if (*m_wxWindowExtHasFocus != NULL){
      return m_wxWindowExtHasFocus(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtHasMultiplePagesFunc m_wxWindowExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxWindow::HasMultiplePages();
    if (*m_wxWindowExtHasMultiplePages != NULL){
      return m_wxWindowExtHasMultiplePages(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtHasTransparentBackgroundFunc m_wxWindowExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxWindow::HasTransparentBackground();
    if (*m_wxWindowExtHasTransparentBackground != NULL){
      return m_wxWindowExtHasTransparentBackground(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtHideWithEffectwxShowEffectunsignedintFunc m_wxWindowExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxWindow::HideWithEffect(param0, param1);
    if (*m_wxWindowExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxWindowExtHideWithEffectwxShowEffectunsignedint(this, param0, param1);
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
      return m_wxWindowExtInformFirstDirectionintintint(this, direction, size, availableOtherDir);
    }
    else {
      return res;
    }
  }
  wxWindowExtInheritAttributesFunc m_wxWindowExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxWindow::InheritAttributes();
    if (*m_wxWindowExtInheritAttributes != NULL){
      return m_wxWindowExtInheritAttributes(this);
    }
  }
  wxWindowExtInitDialogFunc m_wxWindowExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxWindow::InitDialog();
    if (*m_wxWindowExtInitDialog != NULL){
      return m_wxWindowExtInitDialog(this);
    }
  }
  wxWindowExtIsClientAreaChildwxWindowCPFunc m_wxWindowExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* param0) const override
  {
    bool res = wxWindow::IsClientAreaChild(param0);
    if (*m_wxWindowExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxWindowExtIsClientAreaChildwxWindowCP(this, param0);
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
      return m_wxWindowExtIsDoubleBuffered(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsRetainedFunc m_wxWindowExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxWindow::IsRetained();
    if (*m_wxWindowExtIsRetained != NULL){
      return m_wxWindowExtIsRetained(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsScrollbarAlwaysShownintFunc m_wxWindowExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int param0) const override
  {
    bool res = wxWindow::IsScrollbarAlwaysShown(param0);
    if (*m_wxWindowExtIsScrollbarAlwaysShownint != NULL){
      return m_wxWindowExtIsScrollbarAlwaysShownint(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsShownFunc m_wxWindowExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxWindow::IsShown();
    if (*m_wxWindowExtIsShown != NULL){
      return m_wxWindowExtIsShown(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsShownOnScreenFunc m_wxWindowExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxWindow::IsShownOnScreen();
    if (*m_wxWindowExtIsShownOnScreen != NULL){
      return m_wxWindowExtIsShownOnScreen(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsThisEnabledFunc m_wxWindowExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxWindow::IsThisEnabled();
    if (*m_wxWindowExtIsThisEnabled != NULL){
      return m_wxWindowExtIsThisEnabled(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsTopLevelFunc m_wxWindowExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxWindow::IsTopLevel();
    if (*m_wxWindowExtIsTopLevel != NULL){
      return m_wxWindowExtIsTopLevel(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind param0) const override
  {
    bool res = wxWindow::IsTopNavigationDomain(param0);
    if (*m_wxWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, param0);
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
      return m_wxWindowExtIsTransparentBackgroundSupportedwxStringP(this, reason);
    }
    else {
      return res;
    }
  }
  wxWindowExtLayoutFunc m_wxWindowExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxWindow::Layout();
    if (*m_wxWindowExtLayout != NULL){
      return m_wxWindowExtLayout(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtLayoutPhase1intPFunc m_wxWindowExtLayoutPhase1intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxWindow::LayoutPhase1(noChanges);
    if (*m_wxWindowExtLayoutPhase1intP != NULL){
      return m_wxWindowExtLayoutPhase1intP(this, noChanges);
    }
    else {
      return res;
    }
  }
  wxWindowExtLayoutPhase2intPFunc m_wxWindowExtLayoutPhase2intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxWindow::LayoutPhase2(noChanges);
    if (*m_wxWindowExtLayoutPhase2intP != NULL){
      return m_wxWindowExtLayoutPhase2intP(this, noChanges);
    }
    else {
      return res;
    }
  }
  wxWindowExtLowerFunc m_wxWindowExtLower = NULL;
  virtual void Lower() override
  {
    wxWindow::Lower();
    if (*m_wxWindowExtLower != NULL){
      return m_wxWindowExtLower(this);
    }
  }
  wxWindowExtMoveConstraintintintFunc m_wxWindowExtMoveConstraintintint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxWindow::MoveConstraint(x, y);
    if (*m_wxWindowExtMoveConstraintintint != NULL){
      return m_wxWindowExtMoveConstraintintint(this, x, y);
    }
  }
  wxWindowExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxWindowExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxWindow::OnDynamicBind(param0);
    if (*m_wxWindowExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxWindowExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtOnInternalIdleFunc m_wxWindowExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxWindow::OnInternalIdle();
    if (*m_wxWindowExtOnInternalIdle != NULL){
      return m_wxWindowExtOnInternalIdle(this);
    }
  }
  wxWindowExtPrepareDCwxDCRFunc m_wxWindowExtPrepareDCwxDCR = NULL;
  virtual void PrepareDC(wxDC& param0) override
  {
    wxWindow::PrepareDC(param0);
    if (*m_wxWindowExtPrepareDCwxDCR != NULL){
      return m_wxWindowExtPrepareDCwxDCR(this, param0);
    }
  }
  wxWindowExtProcessEventwxEventRFunc m_wxWindowExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxWindow::ProcessEvent(event);
    if (*m_wxWindowExtProcessEventwxEventR != NULL){
      return m_wxWindowExtProcessEventwxEventR(this, event);
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
    wxWindow::Raise();
    if (*m_wxWindowExtRaise != NULL){
      return m_wxWindowExtRaise(this);
    }
  }
  wxWindowExtRefreshboolwxRectCPFunc m_wxWindowExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = (const wxRect*)__null) override
  {
    wxWindow::Refresh(eraseBackground, rect);
    if (*m_wxWindowExtRefreshboolwxRectCP != NULL){
      return m_wxWindowExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxWindowExtRegisterHotKeyintintintFunc m_wxWindowExtRegisterHotKeyintintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxWindow::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxWindowExtRegisterHotKeyintintint != NULL){
      return m_wxWindowExtRegisterHotKeyintintint(this, hotkeyId, modifiers, keycode);
    }
    else {
      return res;
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
      return m_wxWindowExtReparentwxWindowBaseP(this, newParent);
    }
    else {
      return res;
    }
  }
  wxWindowExtScrollLinesintFunc m_wxWindowExtScrollLinesint = NULL;
  virtual bool ScrollLines(int param0) override
  {
    bool res = wxWindow::ScrollLines(param0);
    if (*m_wxWindowExtScrollLinesint != NULL){
      return m_wxWindowExtScrollLinesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtScrollPagesintFunc m_wxWindowExtScrollPagesint = NULL;
  virtual bool ScrollPages(int param0) override
  {
    bool res = wxWindow::ScrollPages(param0);
    if (*m_wxWindowExtScrollPagesint != NULL){
      return m_wxWindowExtScrollPagesint(this, param0);
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
      return m_wxWindowExtSearchEventTablewxEventTableRwxEventR(this, table, event);
    }
    else {
      return res;
    }
  }
  wxWindowExtSendIdleEventswxIdleEventRFunc m_wxWindowExtSendIdleEventswxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxWindow::SendIdleEvents(event);
    if (*m_wxWindowExtSendIdleEventswxIdleEventR != NULL){
      return m_wxWindowExtSendIdleEventswxIdleEventR(this, event);
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
  wxWindowExtSetAcceleratorTablewxAcceleratorTableCRFunc m_wxWindowExtSetAcceleratorTablewxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxWindow::SetAcceleratorTable(accel);
    if (*m_wxWindowExtSetAcceleratorTablewxAcceleratorTableCR != NULL){
      return m_wxWindowExtSetAcceleratorTablewxAcceleratorTableCR(this, accel);
    }
  }
  wxWindowExtSetBackgroundColourwxColourCRFunc m_wxWindowExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxWindow::SetBackgroundColour(colour);
    if (*m_wxWindowExtSetBackgroundColourwxColourCR != NULL){
      return m_wxWindowExtSetBackgroundColourwxColourCR(this, colour);
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
      return m_wxWindowExtSetBackgroundStylewxBackgroundStyle(this, style);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetCanFocusboolFunc m_wxWindowExtSetCanFocusbool = NULL;
  virtual void SetCanFocus(bool param0) override
  {
    wxWindow::SetCanFocus(param0);
    if (*m_wxWindowExtSetCanFocusbool != NULL){
      return m_wxWindowExtSetCanFocusbool(this, param0);
    }
  }
  wxWindowExtSetConstraintSizesboolFunc m_wxWindowExtSetConstraintSizesbool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxWindow::SetConstraintSizes(recurse);
    if (*m_wxWindowExtSetConstraintSizesbool != NULL){
      return m_wxWindowExtSetConstraintSizesbool(this, recurse);
    }
  }
  wxWindowExtSetCursorwxCursorCRFunc m_wxWindowExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxWindow::SetCursor(cursor);
    if (*m_wxWindowExtSetCursorwxCursorCR != NULL){
      return m_wxWindowExtSetCursorwxCursorCR(this, cursor);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetDoubleBufferedboolFunc m_wxWindowExtSetDoubleBufferedbool = NULL;
  virtual void SetDoubleBuffered(bool param0) override
  {
    wxWindow::SetDoubleBuffered(param0);
    if (*m_wxWindowExtSetDoubleBufferedbool != NULL){
      return m_wxWindowExtSetDoubleBufferedbool(this, param0);
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
  wxWindowExtSetExtraStylelongFunc m_wxWindowExtSetExtraStylelong = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxWindow::SetExtraStyle(exStyle);
    if (*m_wxWindowExtSetExtraStylelong != NULL){
      return m_wxWindowExtSetExtraStylelong(this, exStyle);
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
  wxWindowExtSetFocusFromKbdFunc m_wxWindowExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxWindow::SetFocusFromKbd();
    if (*m_wxWindowExtSetFocusFromKbd != NULL){
      return m_wxWindowExtSetFocusFromKbd(this);
    }
  }
  wxWindowExtSetFontwxFontCRFunc m_wxWindowExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxWindow::SetFont(font);
    if (*m_wxWindowExtSetFontwxFontCR != NULL){
      return m_wxWindowExtSetFontwxFontCR(this, font);
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
      return m_wxWindowExtSetForegroundColourwxColourCR(this, colour);
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
    wxWindow::SetLabel(label);
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
  virtual void SetScrollbar(int orient, int pos, int thumbvisible, int range, bool refresh = true) override
  {
    wxWindow::SetScrollbar(orient, pos, thumbvisible, range, refresh);
    if (*m_wxWindowExtSetScrollbarintintintintbool != NULL){
      return m_wxWindowExtSetScrollbarintintintintbool(this, orient, pos, thumbvisible, range, refresh);
    }
  }
  wxWindowExtSetSizeConstraintintintintintFunc m_wxWindowExtSetSizeConstraintintintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxWindow::SetSizeConstraint(x, y, w, h);
    if (*m_wxWindowExtSetSizeConstraintintintintint != NULL){
      return m_wxWindowExtSetSizeConstraintintintintint(this, x, y, w, h);
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
  wxWindowExtSetThemeEnabledboolFunc m_wxWindowExtSetThemeEnabledbool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxWindow::SetThemeEnabled(enableTheme);
    if (*m_wxWindowExtSetThemeEnabledbool != NULL){
      return m_wxWindowExtSetThemeEnabledbool(this, enableTheme);
    }
  }
  wxWindowExtSetTransparentwxByteFunc m_wxWindowExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte param0) override
  {
    bool res = wxWindow::SetTransparent(param0);
    if (*m_wxWindowExtSetTransparentwxByte != NULL){
      return m_wxWindowExtSetTransparentwxByte(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetValidatorwxValidatorCRFunc m_wxWindowExtSetValidatorwxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxWindow::SetValidator(validator);
    if (*m_wxWindowExtSetValidatorwxValidatorCR != NULL){
      return m_wxWindowExtSetValidatorwxValidatorCR(this, validator);
    }
  }
  wxWindowExtSetWindowStyleFlaglongFunc m_wxWindowExtSetWindowStyleFlaglong = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxWindow::SetWindowStyleFlag(style);
    if (*m_wxWindowExtSetWindowStyleFlaglong != NULL){
      return m_wxWindowExtSetWindowStyleFlaglong(this, style);
    }
  }
  wxWindowExtShouldInheritColoursFunc m_wxWindowExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxWindow::ShouldInheritColours();
    if (*m_wxWindowExtShouldInheritColours != NULL){
      return m_wxWindowExtShouldInheritColours(this);
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
      return m_wxWindowExtShowbool(this, show);
    }
    else {
      return res;
    }
  }
  wxWindowExtShowWithEffectwxShowEffectunsignedintFunc m_wxWindowExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxWindow::ShowWithEffect(param0, param1);
    if (*m_wxWindowExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxWindowExtShowWithEffectwxShowEffectunsignedint(this, param0, param1);
    }
    else {
      return res;
    }
  }
  wxWindowExtTransferDataFromWindowFunc m_wxWindowExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxWindow::TransferDataFromWindow();
    if (*m_wxWindowExtTransferDataFromWindow != NULL){
      return m_wxWindowExtTransferDataFromWindow(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtTransferDataToWindowFunc m_wxWindowExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxWindow::TransferDataToWindow();
    if (*m_wxWindowExtTransferDataToWindow != NULL){
      return m_wxWindowExtTransferDataToWindow(this);
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
      return m_wxWindowExtTryAfterwxEventR(this, event);
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
      return m_wxWindowExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxWindowExtUnregisterHotKeyintFunc m_wxWindowExtUnregisterHotKeyint = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxWindow::UnregisterHotKey(hotkeyId);
    if (*m_wxWindowExtUnregisterHotKeyint != NULL){
      return m_wxWindowExtUnregisterHotKeyint(this, hotkeyId);
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
  wxWindowExtUpdateWindowUIlongFunc m_wxWindowExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxWindow::UpdateWindowUI(flags);
    if (*m_wxWindowExtUpdateWindowUIlong != NULL){
      return m_wxWindowExtUpdateWindowUIlong(this, flags);
    }
  }
  wxWindowExtValidateFunc m_wxWindowExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxWindow::Validate();
    if (*m_wxWindowExtValidate != NULL){
      return m_wxWindowExtValidate(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXAdjustFontToOwnPPIwxFontRFunc m_wxWindowExtWXAdjustFontToOwnPPIwxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& param0) const override
  {
    wxWindow::WXAdjustFontToOwnPPI(param0);
    if (*m_wxWindowExtWXAdjustFontToOwnPPIwxFontR != NULL){
      return m_wxWindowExtWXAdjustFontToOwnPPIwxFontR(this, param0);
    }
  }
  wxWindowExtWXGetTextEntryFunc m_wxWindowExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxWindow::WXGetTextEntry();
    if (*m_wxWindowExtWXGetTextEntry != NULL){
      return m_wxWindowExtWXGetTextEntry(this);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXReservedEvtHandler1voidPFunc m_wxWindowExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxWindow::WXReservedEvtHandler1(param0);
    if (*m_wxWindowExtWXReservedEvtHandler1voidP != NULL){
      return m_wxWindowExtWXReservedEvtHandler1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXReservedEvtHandler2voidPFunc m_wxWindowExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxWindow::WXReservedEvtHandler2(param0);
    if (*m_wxWindowExtWXReservedEvtHandler2voidP != NULL){
      return m_wxWindowExtWXReservedEvtHandler2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXReservedWindow1voidPFunc m_wxWindowExtWXReservedWindow1voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxWindow::WXReservedWindow1(param0);
    if (*m_wxWindowExtWXReservedWindow1voidP != NULL){
      return m_wxWindowExtWXReservedWindow1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXReservedWindow2voidPFunc m_wxWindowExtWXReservedWindow2voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxWindow::WXReservedWindow2(param0);
    if (*m_wxWindowExtWXReservedWindow2voidP != NULL){
      return m_wxWindowExtWXReservedWindow2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXReservedWindow3voidPFunc m_wxWindowExtWXReservedWindow3voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxWindow::WXReservedWindow3(param0);
    if (*m_wxWindowExtWXReservedWindow3voidP != NULL){
      return m_wxWindowExtWXReservedWindow3voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXSetInitialFittingClientSizeintwxSizerPFunc m_wxWindowExtWXSetInitialFittingClientSizeintwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxWindow::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxWindowExtWXSetInitialFittingClientSizeintwxSizerP != NULL){
      return m_wxWindowExtWXSetInitialFittingClientSizeintwxSizerP(this, flags, sizer);
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
      return m_wxWindowExtWindowToClientSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxWindowExt(wxWindowExtAcceptsFocusFunc a_AcceptsFocus, wxWindowExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxWindowExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxWindowExtAddChildwxWindowBasePFunc a_AddChildwxWindowBaseP, wxWindowExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxWindowExtAdjustForParentClientOriginintRintRintFunc a_AdjustForParentClientOriginintRintRint, wxWindowExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxWindowExtAssociateHandleWXWidgetFunc a_AssociateHandleWXWidget, wxWindowExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxWindowExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxWindowExtCanBeFocusedFunc a_CanBeFocused, wxWindowExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxWindowExtCanScrollintFunc a_CanScrollint, wxWindowExtCanSetTransparentFunc a_CanSetTransparent, wxWindowExtClearBackgroundFunc a_ClearBackground, wxWindowExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxWindowExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxWindowExtCreateRefDataFunc a_CreateRefData, wxWindowExtDestroyFunc a_Destroy, wxWindowExtDissociateHandleFunc a_DissociateHandle, wxWindowExtDoCaptureMouseFunc a_DoCaptureMouse, wxWindowExtDoCentreintFunc a_DoCentreint, wxWindowExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxWindowExtDoEnableboolFunc a_DoEnablebool, wxWindowExtDoFreezeFunc a_DoFreeze, wxWindowExtDoGetBestClientHeightintFunc a_DoGetBestClientHeightint, wxWindowExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxWindowExtDoGetBestClientWidthintFunc a_DoGetBestClientWidthint, wxWindowExtDoGetBestSizeFunc a_DoGetBestSize, wxWindowExtDoGetClientDataFunc a_DoGetClientData, wxWindowExtDoGetClientObjectFunc a_DoGetClientObject, wxWindowExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxWindowExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxWindowExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxWindowExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxWindowExtDoGetSizeFromClientSizewxSizeCRFunc a_DoGetSizeFromClientSizewxSizeCR, wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxWindowExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxWindowExtDoHitTestwxCoordwxCoordFunc a_DoHitTestwxCoordwxCoord, wxWindowExtDoIsExposedintintintintFunc a_DoIsExposedintintintint, wxWindowExtDoIsExposedintintFunc a_DoIsExposedintint, wxWindowExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder, wxWindowExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxWindowExtDoNavigateInintFunc a_DoNavigateInint, wxWindowExtDoPhaseintFunc a_DoPhaseint, wxWindowExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxWindowExtDoReleaseMouseFunc a_DoReleaseMouse, wxWindowExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxWindowExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxWindowExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxWindowExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxWindowExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxWindowExtDoSetSizeHintsintintintintintintFunc a_DoSetSizeHintsintintintintintint, wxWindowExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxWindowExtDoSetToolTipTextwxStringCRFunc a_DoSetToolTipTextwxStringCR, wxWindowExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxWindowExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxWindowExtDoThawFunc a_DoThaw, wxWindowExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxWindowExtDragAcceptFilesboolFunc a_DragAcceptFilesbool, wxWindowExtEnableboolFunc a_Enablebool, wxWindowExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxWindowExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxWindowExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxWindowExtFitFunc a_Fit, wxWindowExtFitInsideFunc a_FitInside, wxWindowExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxWindowExtGetCharHeightFunc a_GetCharHeight, wxWindowExtGetCharWidthFunc a_GetCharWidth, wxWindowExtGetClassInfoFunc a_GetClassInfo, wxWindowExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxWindowExtGetClientSizeConstraintintPintPFunc a_GetClientSizeConstraintintPintP, wxWindowExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxWindowExtGetDPIFunc a_GetDPI, wxWindowExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxWindowExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxWindowExtGetDefaultBorderFunc a_GetDefaultBorder, wxWindowExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxWindowExtGetDropTargetFunc a_GetDropTarget, wxWindowExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxWindowExtGetEventHashTableFunc a_GetEventHashTable, wxWindowExtGetEventTableFunc a_GetEventTable, wxWindowExtGetHandleFunc a_GetHandle, wxWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin, wxWindowExtGetLabelFunc a_GetLabel, wxWindowExtGetLayoutDirectionFunc a_GetLayoutDirection, wxWindowExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxWindowExtGetMaxClientSizeFunc a_GetMaxClientSize, wxWindowExtGetMaxSizeFunc a_GetMaxSize, wxWindowExtGetMinClientSizeFunc a_GetMinClientSize, wxWindowExtGetMinSizeFunc a_GetMinSize, wxWindowExtGetNameFunc a_GetName, wxWindowExtGetPositionConstraintintPintPFunc a_GetPositionConstraintintPintP, wxWindowExtGetScrollPosintFunc a_GetScrollPosint, wxWindowExtGetScrollRangeintFunc a_GetScrollRangeint, wxWindowExtGetScrollThumbintFunc a_GetScrollThumbint, wxWindowExtGetSizeConstraintintPintPFunc a_GetSizeConstraintintPintP, wxWindowExtGetThemeEnabledFunc a_GetThemeEnabled, wxWindowExtGetTransparentFunc a_GetTransparent, wxWindowExtGetValidatorFunc a_GetValidator, wxWindowExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxWindowExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxWindowExtHasCaptureFunc a_HasCapture, wxWindowExtHasFocusFunc a_HasFocus, wxWindowExtHasMultiplePagesFunc a_HasMultiplePages, wxWindowExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxWindowExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxWindowExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxWindowExtInheritAttributesFunc a_InheritAttributes, wxWindowExtInitDialogFunc a_InitDialog, wxWindowExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxWindowExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxWindowExtIsRetainedFunc a_IsRetained, wxWindowExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxWindowExtIsShownFunc a_IsShown, wxWindowExtIsShownOnScreenFunc a_IsShownOnScreen, wxWindowExtIsThisEnabledFunc a_IsThisEnabled, wxWindowExtIsTopLevelFunc a_IsTopLevel, wxWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxWindowExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxWindowExtLayoutFunc a_Layout, wxWindowExtLayoutPhase1intPFunc a_LayoutPhase1intP, wxWindowExtLayoutPhase2intPFunc a_LayoutPhase2intP, wxWindowExtLowerFunc a_Lower, wxWindowExtMoveConstraintintintFunc a_MoveConstraintintint, wxWindowExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxWindowExtOnInternalIdleFunc a_OnInternalIdle, wxWindowExtPrepareDCwxDCRFunc a_PrepareDCwxDCR, wxWindowExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxWindowExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxWindowExtRaiseFunc a_Raise, wxWindowExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxWindowExtRegisterHotKeyintintintFunc a_RegisterHotKeyintintint, wxWindowExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxWindowExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxWindowExtScrollLinesintFunc a_ScrollLinesint, wxWindowExtScrollPagesintFunc a_ScrollPagesint, wxWindowExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxWindowExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxWindowExtSendIdleEventswxIdleEventRFunc a_SendIdleEventswxIdleEventR, wxWindowExtSendSizeEventintFunc a_SendSizeEventint, wxWindowExtSetAcceleratorTablewxAcceleratorTableCRFunc a_SetAcceleratorTablewxAcceleratorTableCR, wxWindowExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxWindowExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxWindowExtSetCanFocusboolFunc a_SetCanFocusbool, wxWindowExtSetConstraintSizesboolFunc a_SetConstraintSizesbool, wxWindowExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxWindowExtSetDoubleBufferedboolFunc a_SetDoubleBufferedbool, wxWindowExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxWindowExtSetExtraStylelongFunc a_SetExtraStylelong, wxWindowExtSetFocusFunc a_SetFocus, wxWindowExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxWindowExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxWindowExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxWindowExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxWindowExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxWindowExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxWindowExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxWindowExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxWindowExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxWindowExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxWindowExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxWindowExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxWindowExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxWindowExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxWindowExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxWindowExtSetSizeConstraintintintintintFunc a_SetSizeConstraintintintintint, wxWindowExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxWindowExtSetThemeEnabledboolFunc a_SetThemeEnabledbool, wxWindowExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxWindowExtSetValidatorwxValidatorCRFunc a_SetValidatorwxValidatorCR, wxWindowExtSetWindowStyleFlaglongFunc a_SetWindowStyleFlaglong, wxWindowExtShouldInheritColoursFunc a_ShouldInheritColours, wxWindowExtShowboolFunc a_Showbool, wxWindowExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxWindowExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxWindowExtTransferDataToWindowFunc a_TransferDataToWindow, wxWindowExtTriggerScrollEventwxEventTypeFunc a_TriggerScrollEventwxEventType, wxWindowExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxWindowExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxWindowExtUnregisterHotKeyintFunc a_UnregisterHotKeyint, wxWindowExtUpdateFunc a_Update, wxWindowExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxWindowExtValidateFunc a_Validate, wxWindowExtWXAdjustFontToOwnPPIwxFontRFunc a_WXAdjustFontToOwnPPIwxFontR, wxWindowExtWXGetTextEntryFunc a_WXGetTextEntry, wxWindowExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxWindowExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxWindowExtWXReservedWindow1voidPFunc a_WXReservedWindow1voidP, wxWindowExtWXReservedWindow2voidPFunc a_WXReservedWindow2voidP, wxWindowExtWXReservedWindow3voidPFunc a_WXReservedWindow3voidP, wxWindowExtWXSetInitialFittingClientSizeintwxSizerPFunc a_WXSetInitialFittingClientSizeintwxSizerP, wxWindowExtWarpPointerintintFunc a_WarpPointerintint, wxWindowExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxWindow() {
    m_wxWindowExtAcceptsFocus = a_AcceptsFocus;
    m_wxWindowExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxWindowExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxWindowExtAddChildwxWindowBaseP = a_AddChildwxWindowBaseP;
    m_wxWindowExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxWindowExtAdjustForParentClientOriginintRintRint = a_AdjustForParentClientOriginintRintRint;
    m_wxWindowExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxWindowExtAssociateHandleWXWidget = a_AssociateHandleWXWidget;
    m_wxWindowExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxWindowExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxWindowExtCanBeFocused = a_CanBeFocused;
    m_wxWindowExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxWindowExtCanScrollint = a_CanScrollint;
    m_wxWindowExtCanSetTransparent = a_CanSetTransparent;
    m_wxWindowExtClearBackground = a_ClearBackground;
    m_wxWindowExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxWindowExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxWindowExtCreateRefData = a_CreateRefData;
    m_wxWindowExtDestroy = a_Destroy;
    m_wxWindowExtDissociateHandle = a_DissociateHandle;
    m_wxWindowExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxWindowExtDoCentreint = a_DoCentreint;
    m_wxWindowExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxWindowExtDoEnablebool = a_DoEnablebool;
    m_wxWindowExtDoFreeze = a_DoFreeze;
    m_wxWindowExtDoGetBestClientHeightint = a_DoGetBestClientHeightint;
    m_wxWindowExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxWindowExtDoGetBestClientWidthint = a_DoGetBestClientWidthint;
    m_wxWindowExtDoGetBestSize = a_DoGetBestSize;
    m_wxWindowExtDoGetClientData = a_DoGetClientData;
    m_wxWindowExtDoGetClientObject = a_DoGetClientObject;
    m_wxWindowExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxWindowExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxWindowExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxWindowExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxWindowExtDoGetSizeFromClientSizewxSizeCR = a_DoGetSizeFromClientSizewxSizeCR;
    m_wxWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxWindowExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxWindowExtDoHitTestwxCoordwxCoord = a_DoHitTestwxCoordwxCoord;
    m_wxWindowExtDoIsExposedintintintint = a_DoIsExposedintintintint;
    m_wxWindowExtDoIsExposedintint = a_DoIsExposedintint;
    m_wxWindowExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder;
    m_wxWindowExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxWindowExtDoNavigateInint = a_DoNavigateInint;
    m_wxWindowExtDoPhaseint = a_DoPhaseint;
    m_wxWindowExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxWindowExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxWindowExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxWindowExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxWindowExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxWindowExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxWindowExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxWindowExtDoSetSizeHintsintintintintintint = a_DoSetSizeHintsintintintintintint;
    m_wxWindowExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxWindowExtDoSetToolTipTextwxStringCR = a_DoSetToolTipTextwxStringCR;
    m_wxWindowExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxWindowExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxWindowExtDoThaw = a_DoThaw;
    m_wxWindowExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxWindowExtDragAcceptFilesbool = a_DragAcceptFilesbool;
    m_wxWindowExtEnablebool = a_Enablebool;
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
    m_wxWindowExtGetClientSizeConstraintintPintP = a_GetClientSizeConstraintintPintP;
    m_wxWindowExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxWindowExtGetDPI = a_GetDPI;
    m_wxWindowExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxWindowExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxWindowExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxWindowExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxWindowExtGetDropTarget = a_GetDropTarget;
    m_wxWindowExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxWindowExtGetEventHashTable = a_GetEventHashTable;
    m_wxWindowExtGetEventTable = a_GetEventTable;
    m_wxWindowExtGetHandle = a_GetHandle;
    m_wxWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin;
    m_wxWindowExtGetLabel = a_GetLabel;
    m_wxWindowExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxWindowExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxWindowExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxWindowExtGetMaxSize = a_GetMaxSize;
    m_wxWindowExtGetMinClientSize = a_GetMinClientSize;
    m_wxWindowExtGetMinSize = a_GetMinSize;
    m_wxWindowExtGetName = a_GetName;
    m_wxWindowExtGetPositionConstraintintPintP = a_GetPositionConstraintintPintP;
    m_wxWindowExtGetScrollPosint = a_GetScrollPosint;
    m_wxWindowExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxWindowExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxWindowExtGetSizeConstraintintPintP = a_GetSizeConstraintintPintP;
    m_wxWindowExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxWindowExtGetTransparent = a_GetTransparent;
    m_wxWindowExtGetValidator = a_GetValidator;
    m_wxWindowExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxWindowExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxWindowExtHasCapture = a_HasCapture;
    m_wxWindowExtHasFocus = a_HasFocus;
    m_wxWindowExtHasMultiplePages = a_HasMultiplePages;
    m_wxWindowExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxWindowExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxWindowExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxWindowExtInheritAttributes = a_InheritAttributes;
    m_wxWindowExtInitDialog = a_InitDialog;
    m_wxWindowExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxWindowExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxWindowExtIsRetained = a_IsRetained;
    m_wxWindowExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxWindowExtIsShown = a_IsShown;
    m_wxWindowExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxWindowExtIsThisEnabled = a_IsThisEnabled;
    m_wxWindowExtIsTopLevel = a_IsTopLevel;
    m_wxWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxWindowExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxWindowExtLayout = a_Layout;
    m_wxWindowExtLayoutPhase1intP = a_LayoutPhase1intP;
    m_wxWindowExtLayoutPhase2intP = a_LayoutPhase2intP;
    m_wxWindowExtLower = a_Lower;
    m_wxWindowExtMoveConstraintintint = a_MoveConstraintintint;
    m_wxWindowExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxWindowExtOnInternalIdle = a_OnInternalIdle;
    m_wxWindowExtPrepareDCwxDCR = a_PrepareDCwxDCR;
    m_wxWindowExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxWindowExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxWindowExtRaise = a_Raise;
    m_wxWindowExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxWindowExtRegisterHotKeyintintint = a_RegisterHotKeyintintint;
    m_wxWindowExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxWindowExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxWindowExtScrollLinesint = a_ScrollLinesint;
    m_wxWindowExtScrollPagesint = a_ScrollPagesint;
    m_wxWindowExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxWindowExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxWindowExtSendIdleEventswxIdleEventR = a_SendIdleEventswxIdleEventR;
    m_wxWindowExtSendSizeEventint = a_SendSizeEventint;
    m_wxWindowExtSetAcceleratorTablewxAcceleratorTableCR = a_SetAcceleratorTablewxAcceleratorTableCR;
    m_wxWindowExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxWindowExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxWindowExtSetCanFocusbool = a_SetCanFocusbool;
    m_wxWindowExtSetConstraintSizesbool = a_SetConstraintSizesbool;
    m_wxWindowExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxWindowExtSetDoubleBufferedbool = a_SetDoubleBufferedbool;
    m_wxWindowExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxWindowExtSetExtraStylelong = a_SetExtraStylelong;
    m_wxWindowExtSetFocus = a_SetFocus;
    m_wxWindowExtSetFocusFromKbd = a_SetFocusFromKbd;
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
    m_wxWindowExtSetSizeConstraintintintintint = a_SetSizeConstraintintintintint;
    m_wxWindowExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxWindowExtSetThemeEnabledbool = a_SetThemeEnabledbool;
    m_wxWindowExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxWindowExtSetValidatorwxValidatorCR = a_SetValidatorwxValidatorCR;
    m_wxWindowExtSetWindowStyleFlaglong = a_SetWindowStyleFlaglong;
    m_wxWindowExtShouldInheritColours = a_ShouldInheritColours;
    m_wxWindowExtShowbool = a_Showbool;
    m_wxWindowExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxWindowExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxWindowExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxWindowExtTriggerScrollEventwxEventType = a_TriggerScrollEventwxEventType;
    m_wxWindowExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxWindowExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxWindowExtUnregisterHotKeyint = a_UnregisterHotKeyint;
    m_wxWindowExtUpdate = a_Update;
    m_wxWindowExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxWindowExtValidate = a_Validate;
    m_wxWindowExtWXAdjustFontToOwnPPIwxFontR = a_WXAdjustFontToOwnPPIwxFontR;
    m_wxWindowExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxWindowExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxWindowExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxWindowExtWXReservedWindow1voidP = a_WXReservedWindow1voidP;
    m_wxWindowExtWXReservedWindow2voidP = a_WXReservedWindow2voidP;
    m_wxWindowExtWXReservedWindow3voidP = a_WXReservedWindow3voidP;
    m_wxWindowExtWXSetInitialFittingClientSizeintwxSizerP = a_WXSetInitialFittingClientSizeintwxSizerP;
    m_wxWindowExtWarpPointerintint = a_WarpPointerintint;
    m_wxWindowExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
  }
};



#endif
