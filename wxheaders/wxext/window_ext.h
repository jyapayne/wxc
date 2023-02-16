#ifndef _WX_WINDOW_H_EXT_
#define _WX_WINDOW_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxWindowListNodeExt;
typedef void (*wxWindowListNodeExtDeleteDataFunc)(const wxWindowListNodeExt* self);
class wxWindowListExt;
typedef wxNodeBase* (*wxWindowListExtCreateNode__wxNodeBasePwxNodeBasePvoidPwxListKeyCRFunc)(const wxWindowListExt* self, wxNodeBase* prev, wxNodeBase* next, void* data, wxListKey const& key, wxNodeBase* res);
typedef wxWindowListNode* (*wxWindowListExtFind__wxListKeyCRFunc)(const wxWindowListExt* self, wxListKey const& key, wxWindowListNode* res);
class wxWindowBaseExt;
typedef bool (*wxWindowBaseExtAcceptsFocusFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtAcceptsFocusFromKeyboardFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtAcceptsFocusRecursivelyFunc)(const wxWindowBaseExt* self, bool res);
typedef void (*wxWindowBaseExtAddChild__wxWindowBasePFunc)(const wxWindowBaseExt* self, wxWindowBase* child);
typedef void (*wxWindowBaseExtAddPendingEvent__wxEventCRFunc)(const wxWindowBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxWindowBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxWindowBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxWindowBaseExtAdjustForParentClientOrigin__intRintRintFunc)(const wxWindowBaseExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxWindowBaseExtAlwaysShowScrollbars__boolboolFunc)(const wxWindowBaseExt* self, bool horz, bool vert);
typedef void (*wxWindowBaseExtAssociateHandle__WXWidgetFunc)(const wxWindowBaseExt* self, WXWidget handle);
typedef bool (*wxWindowBaseExtBeginRepositioningChildrenFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtCanApplyThemeBorderFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtCanBeFocusedFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtCanBeOutsideClientAreaFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtCanScroll__intFunc)(const wxWindowBaseExt* self, int orient, bool res);
typedef bool (*wxWindowBaseExtCanSetTransparentFunc)(const wxWindowBaseExt* self, bool res);
typedef void (*wxWindowBaseExtClearBackgroundFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtClientToWindowSize__wxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxWindowBaseExtCloneRefData__wxObjectRefDataCPFunc)(const wxWindowBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxWindowBaseExtCreateRefDataFunc)(const wxWindowBaseExt* self, wxObjectRefData* res);
typedef bool (*wxWindowBaseExtDestroyFunc)(const wxWindowBaseExt* self, bool res);
typedef void (*wxWindowBaseExtDissociateHandleFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtDoCaptureMouseFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtDoCentre__intFunc)(const wxWindowBaseExt* self, int dir);
typedef void (*wxWindowBaseExtDoClientToScreen__intPintPFunc)(const wxWindowBaseExt* self, int* x, int* y);
typedef void (*wxWindowBaseExtDoEnable__boolFunc)(const wxWindowBaseExt* self, bool enable);
typedef void (*wxWindowBaseExtDoFreezeFunc)(const wxWindowBaseExt* self);
typedef int (*wxWindowBaseExtDoGetBestClientHeight__intFunc)(const wxWindowBaseExt* self, int width, int res);
typedef wxSize (*wxWindowBaseExtDoGetBestClientSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef int (*wxWindowBaseExtDoGetBestClientWidth__intFunc)(const wxWindowBaseExt* self, int height, int res);
typedef wxSize (*wxWindowBaseExtDoGetBestSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef void* (*wxWindowBaseExtDoGetClientDataFunc)(const wxWindowBaseExt* self, void* res);
typedef wxClientData* (*wxWindowBaseExtDoGetClientObjectFunc)(const wxWindowBaseExt* self, wxClientData* res);
typedef void (*wxWindowBaseExtDoGetClientSize__intPintPFunc)(const wxWindowBaseExt* self, int* width, int* height);
typedef void (*wxWindowBaseExtDoGetPosition__intPintPFunc)(const wxWindowBaseExt* self, int* x, int* y);
typedef void (*wxWindowBaseExtDoGetScreenPosition__intPintPFunc)(const wxWindowBaseExt* self, int* x, int* y);
typedef void (*wxWindowBaseExtDoGetSize__intPintPFunc)(const wxWindowBaseExt* self, int* width, int* height);
typedef void (*wxWindowBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxWindowBaseExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* font);
typedef wxSize (*wxWindowBaseExtDoGetVirtualSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxHitTest (*wxWindowBaseExtDoHitTest__wxCoordwxCoordFunc)(const wxWindowBaseExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxWindowBaseExtDoIsExposed__intintintintFunc)(const wxWindowBaseExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxWindowBaseExtDoIsExposed__intintFunc)(const wxWindowBaseExt* self, int x, int y, bool res);
typedef void (*wxWindowBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxWindowBaseExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxWindowBaseExtDoMoveWindow__intintintintFunc)(const wxWindowBaseExt* self, int x, int y, int width, int height);
typedef bool (*wxWindowBaseExtDoNavigateIn__intFunc)(const wxWindowBaseExt* self, int flags, bool res);
typedef bool (*wxWindowBaseExtDoPhase__intFunc)(const wxWindowBaseExt* self, int phase, bool res);
typedef bool (*wxWindowBaseExtDoPopupMenu__wxMenuPintintFunc)(const wxWindowBaseExt* self, wxMenu* menu, int x, int y);
typedef void (*wxWindowBaseExtDoReleaseMouseFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtDoScreenToClient__intPintPFunc)(const wxWindowBaseExt* self, int* x, int* y);
typedef void (*wxWindowBaseExtDoSetClientData__voidPFunc)(const wxWindowBaseExt* self, void* data);
typedef void (*wxWindowBaseExtDoSetClientObject__wxClientDataPFunc)(const wxWindowBaseExt* self, wxClientData* data);
typedef void (*wxWindowBaseExtDoSetClientSize__intintFunc)(const wxWindowBaseExt* self, int width, int height);
typedef void (*wxWindowBaseExtDoSetSize__intintintintintFunc)(const wxWindowBaseExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxWindowBaseExtDoSetSizeHints__intintintintintintFunc)(const wxWindowBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxWindowBaseExtDoSetToolTip__wxToolTipPFunc)(const wxWindowBaseExt* self, wxToolTip* tip);
typedef void (*wxWindowBaseExtDoSetToolTipText__wxStringCRFunc)(const wxWindowBaseExt* self, wxString const& tip);
typedef void (*wxWindowBaseExtDoSetVirtualSize__intintFunc)(const wxWindowBaseExt* self, int x, int y);
typedef void (*wxWindowBaseExtDoSetWindowVariant__wxWindowVariantFunc)(const wxWindowBaseExt* self, wxWindowVariant variant);
typedef void (*wxWindowBaseExtDoThawFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxWindowBaseExt* self, wxUpdateUIEvent& event);
typedef void (*wxWindowBaseExtDragAcceptFiles__boolFunc)(const wxWindowBaseExt* self, bool accept);
typedef bool (*wxWindowBaseExtEnable__boolFunc)(const wxWindowBaseExt* self, bool enable, bool res);
typedef bool (*wxWindowBaseExtEnableTouchEvents__intFunc)(const wxWindowBaseExt* self, int eventsMask, bool res);
typedef void (*wxWindowBaseExtEnableVisibleFocus__boolFunc)(const wxWindowBaseExt* self, bool enabled);
typedef void (*wxWindowBaseExtEndRepositioningChildrenFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtFitFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtFitInsideFunc)(const wxWindowBaseExt* self);
typedef wxSize (*wxWindowBaseExtGetBestVirtualSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef int (*wxWindowBaseExtGetCharHeightFunc)(const wxWindowBaseExt* self);
typedef int (*wxWindowBaseExtGetCharWidthFunc)(const wxWindowBaseExt* self);
typedef wxClassInfo* (*wxWindowBaseExtGetClassInfoFunc)(const wxWindowBaseExt* self, wxClassInfo* res);
typedef wxPoint (*wxWindowBaseExtGetClientAreaOriginFunc)(const wxWindowBaseExt* self, wxPoint res);
typedef void (*wxWindowBaseExtGetClientSizeConstraint__intPintPFunc)(const wxWindowBaseExt* self, int* w, int* h);
typedef double (*wxWindowBaseExtGetContentScaleFactorFunc)(const wxWindowBaseExt* self, double res);
typedef wxSize (*wxWindowBaseExtGetDPIFunc)(const wxWindowBaseExt* self, wxSize res);
typedef double (*wxWindowBaseExtGetDPIScaleFactorFunc)(const wxWindowBaseExt* self, double res);
typedef wxVisualAttributes (*wxWindowBaseExtGetDefaultAttributesFunc)(const wxWindowBaseExt* self, wxVisualAttributes res);
typedef wxBorder (*wxWindowBaseExtGetDefaultBorderFunc)(const wxWindowBaseExt* self, wxBorder res);
typedef wxBorder (*wxWindowBaseExtGetDefaultBorderForControlFunc)(const wxWindowBaseExt* self, wxBorder res);
typedef wxDropTarget* (*wxWindowBaseExtGetDropTargetFunc)(const wxWindowBaseExt* self, wxDropTarget* res);
typedef wxSize (*wxWindowBaseExtGetEffectiveMinSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxEventHashTable& (*wxWindowBaseExtGetEventHashTableFunc)(const wxWindowBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxWindowBaseExtGetEventTableFunc)(const wxWindowBaseExt* self, wxEventTable const* res);
typedef WXWidget (*wxWindowBaseExtGetHandleFunc)(const wxWindowBaseExt* self);
typedef wxString (*wxWindowBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxWindowBaseExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxWindowBaseExtGetLabelFunc)(const wxWindowBaseExt* self);
typedef wxLayoutDirection (*wxWindowBaseExtGetLayoutDirectionFunc)(const wxWindowBaseExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxWindowBaseExtGetMainWindowOfCompositeControlFunc)(const wxWindowBaseExt* self, wxWindow* res);
typedef wxSize (*wxWindowBaseExtGetMaxClientSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxSize (*wxWindowBaseExtGetMaxSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxSize (*wxWindowBaseExtGetMinClientSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxSize (*wxWindowBaseExtGetMinSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef wxString (*wxWindowBaseExtGetNameFunc)(const wxWindowBaseExt* self, wxString res);
typedef void (*wxWindowBaseExtGetPositionConstraint__intPintPFunc)(const wxWindowBaseExt* self, int* x, int* y);
typedef int (*wxWindowBaseExtGetScrollPos__intFunc)(const wxWindowBaseExt* self, int orient);
typedef int (*wxWindowBaseExtGetScrollRange__intFunc)(const wxWindowBaseExt* self, int orient);
typedef int (*wxWindowBaseExtGetScrollThumb__intFunc)(const wxWindowBaseExt* self, int orient);
typedef void (*wxWindowBaseExtGetSizeConstraint__intPintPFunc)(const wxWindowBaseExt* self, int* w, int* h);
typedef bool (*wxWindowBaseExtGetThemeEnabledFunc)(const wxWindowBaseExt* self, bool res);
typedef wxValidator* (*wxWindowBaseExtGetValidatorFunc)(const wxWindowBaseExt* self, wxValidator* res);
typedef wxSize (*wxWindowBaseExtGetWindowBorderSizeFunc)(const wxWindowBaseExt* self, wxSize res);
typedef long (*wxWindowBaseExtGetWindowStyleFlagFunc)(const wxWindowBaseExt* self, long res);
typedef bool (*wxWindowBaseExtHasCaptureFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtHasFocusFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtHasMultiplePagesFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtHasTransparentBackgroundFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxWindowBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxWindowBaseExtInformFirstDirection__intintintFunc)(const wxWindowBaseExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxWindowBaseExtInheritAttributesFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtInitDialogFunc)(const wxWindowBaseExt* self);
typedef bool (*wxWindowBaseExtIsClientAreaChild__wxWindowCPFunc)(const wxWindowBaseExt* self, wxWindow const* child, bool res);
typedef bool (*wxWindowBaseExtIsDoubleBufferedFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtIsRetainedFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtIsScrollbarAlwaysShown__intFunc)(const wxWindowBaseExt* self, int orient, bool res);
typedef bool (*wxWindowBaseExtIsShownFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtIsShownOnScreenFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtIsThisEnabledFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtIsTopLevelFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxWindowBaseExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxWindowBaseExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxWindowBaseExt* self, wxString* reason, bool res);
typedef bool (*wxWindowBaseExtLayoutFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtLayoutPhase1__intPFunc)(const wxWindowBaseExt* self, int* noChanges, bool res);
typedef bool (*wxWindowBaseExtLayoutPhase2__intPFunc)(const wxWindowBaseExt* self, int* noChanges, bool res);
typedef void (*wxWindowBaseExtLowerFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtMoveConstraint__intintFunc)(const wxWindowBaseExt* self, int x, int y);
typedef bool (*wxWindowBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxWindowBaseExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxWindowBaseExtOnInternalIdleFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtPrepareDC__wxDCRFunc)(const wxWindowBaseExt* self, wxDC& dc);
typedef bool (*wxWindowBaseExtProcessEvent__wxEventRFunc)(const wxWindowBaseExt* self, wxEvent& event, bool res);
typedef void (*wxWindowBaseExtQueueEvent__wxEventPFunc)(const wxWindowBaseExt* self, wxEvent* event);
typedef void (*wxWindowBaseExtRaiseFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtRefresh__boolwxRectCPFunc)(const wxWindowBaseExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxWindowBaseExtRegisterHotKey__intintintFunc)(const wxWindowBaseExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxWindowBaseExtRemoveChild__wxWindowBasePFunc)(const wxWindowBaseExt* self, wxWindowBase* child);
typedef bool (*wxWindowBaseExtReparent__wxWindowBasePFunc)(const wxWindowBaseExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxWindowBaseExtScrollLines__intFunc)(const wxWindowBaseExt* self, int lines, bool res);
typedef bool (*wxWindowBaseExtScrollPages__intFunc)(const wxWindowBaseExt* self, int pages, bool res);
typedef void (*wxWindowBaseExtScrollWindow__intintwxRectCPFunc)(const wxWindowBaseExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxWindowBaseExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxWindowBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxWindowBaseExtSendIdleEvents__wxIdleEventRFunc)(const wxWindowBaseExt* self, wxIdleEvent& event, bool res);
typedef void (*wxWindowBaseExtSendSizeEvent__intFunc)(const wxWindowBaseExt* self, int flags);
typedef void (*wxWindowBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxWindowBaseExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxWindowBaseExtSetBackgroundColour__wxColourCRFunc)(const wxWindowBaseExt* self, wxColour const& colour, bool res);
typedef bool (*wxWindowBaseExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxWindowBaseExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxWindowBaseExtSetCanFocus__boolFunc)(const wxWindowBaseExt* self, bool canFocus);
typedef void (*wxWindowBaseExtSetConstraintSizes__boolFunc)(const wxWindowBaseExt* self, bool recurse);
typedef bool (*wxWindowBaseExtSetCursor__wxCursorCRFunc)(const wxWindowBaseExt* self, wxCursor const& cursor, bool res);
typedef void (*wxWindowBaseExtSetDoubleBuffered__boolFunc)(const wxWindowBaseExt* self, bool on);
typedef void (*wxWindowBaseExtSetDropTarget__wxDropTargetPFunc)(const wxWindowBaseExt* self, wxDropTarget* dropTarget);
typedef void (*wxWindowBaseExtSetExtraStyle__longFunc)(const wxWindowBaseExt* self, long exStyle);
typedef void (*wxWindowBaseExtSetFocusFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtSetFocusFromKbdFunc)(const wxWindowBaseExt* self);
typedef bool (*wxWindowBaseExtSetFont__wxFontCRFunc)(const wxWindowBaseExt* self, wxFont const& font);
typedef bool (*wxWindowBaseExtSetForegroundColour__wxColourCRFunc)(const wxWindowBaseExt* self, wxColour const& colour, bool res);
typedef void (*wxWindowBaseExtSetId__wxWindowIDFunc)(const wxWindowBaseExt* self, wxWindowID winid);
typedef void (*wxWindowBaseExtSetLabel__wxStringCRFunc)(const wxWindowBaseExt* self, wxString const& label);
typedef void (*wxWindowBaseExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxWindowBaseExt* self, wxLayoutDirection dir);
typedef void (*wxWindowBaseExtSetMaxClientSize__wxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& size);
typedef void (*wxWindowBaseExtSetMaxSize__wxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& maxSize);
typedef void (*wxWindowBaseExtSetMinClientSize__wxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& size);
typedef void (*wxWindowBaseExtSetMinSize__wxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& minSize);
typedef void (*wxWindowBaseExtSetName__wxStringCRFunc)(const wxWindowBaseExt* self, wxString const& name);
typedef void (*wxWindowBaseExtSetNextHandler__wxEvtHandlerPFunc)(const wxWindowBaseExt* self, wxEvtHandler* handler);
typedef void (*wxWindowBaseExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxWindowBaseExt* self, wxEvtHandler* handler);
typedef void (*wxWindowBaseExtSetScrollPos__intintboolFunc)(const wxWindowBaseExt* self, int orient, int pos, bool refresh);
typedef void (*wxWindowBaseExtSetScrollbar__intintintintboolFunc)(const wxWindowBaseExt* self, int orient, int pos, int thumbvisible, int range, bool refresh);
typedef void (*wxWindowBaseExtSetSizeConstraint__intintintintFunc)(const wxWindowBaseExt* self, int x, int y, int w, int h);
typedef void (*wxWindowBaseExtSetSizeHints__intintintintintintFunc)(const wxWindowBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxWindowBaseExtSetThemeEnabled__boolFunc)(const wxWindowBaseExt* self, bool enableTheme);
typedef bool (*wxWindowBaseExtSetTransparent__wxByteFunc)(const wxWindowBaseExt* self, wxByte alpha, bool res);
typedef void (*wxWindowBaseExtSetValidator__wxValidatorCRFunc)(const wxWindowBaseExt* self, wxValidator const& validator);
typedef void (*wxWindowBaseExtSetWindowStyleFlag__longFunc)(const wxWindowBaseExt* self, long style);
typedef bool (*wxWindowBaseExtShouldInheritColoursFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtShow__boolFunc)(const wxWindowBaseExt* self, bool show, bool res);
typedef bool (*wxWindowBaseExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxWindowBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxWindowBaseExtTransferDataFromWindowFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtTransferDataToWindowFunc)(const wxWindowBaseExt* self, bool res);
typedef bool (*wxWindowBaseExtTryAfter__wxEventRFunc)(const wxWindowBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxWindowBaseExtTryBefore__wxEventRFunc)(const wxWindowBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxWindowBaseExtUnregisterHotKey__intFunc)(const wxWindowBaseExt* self, int hotkeyId, bool res);
typedef void (*wxWindowBaseExtUpdateFunc)(const wxWindowBaseExt* self);
typedef void (*wxWindowBaseExtUpdateWindowUI__longFunc)(const wxWindowBaseExt* self, long flags);
typedef bool (*wxWindowBaseExtValidateFunc)(const wxWindowBaseExt* self, bool res);
typedef void (*wxWindowBaseExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxWindowBaseExt* self, wxFont& font);
typedef wxTextEntry const* (*wxWindowBaseExtWXGetTextEntryFunc)(const wxWindowBaseExt* self, wxTextEntry const* res);
typedef void* (*wxWindowBaseExtWXReservedEvtHandler1__voidPFunc)(const wxWindowBaseExt* self, void* param0, void* res);
typedef void* (*wxWindowBaseExtWXReservedEvtHandler2__voidPFunc)(const wxWindowBaseExt* self, void* param0, void* res);
typedef void* (*wxWindowBaseExtWXReservedWindow1__voidPFunc)(const wxWindowBaseExt* self, void* param0, void* res);
typedef void* (*wxWindowBaseExtWXReservedWindow2__voidPFunc)(const wxWindowBaseExt* self, void* param0, void* res);
typedef void* (*wxWindowBaseExtWXReservedWindow3__voidPFunc)(const wxWindowBaseExt* self, void* param0, void* res);
typedef void (*wxWindowBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxWindowBaseExt* self, int flags, wxSizer* sizer);
typedef void (*wxWindowBaseExtWarpPointer__intintFunc)(const wxWindowBaseExt* self, int x, int y);
typedef wxSize (*wxWindowBaseExtWindowToClientSize__wxSizeCRFunc)(const wxWindowBaseExt* self, wxSize const& size, wxSize res);
class wxWindowExt;
typedef bool (*wxWindowExtAcceptsFocusFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtAcceptsFocusFromKeyboardFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtAcceptsFocusRecursivelyFunc)(const wxWindowExt* self, bool res);
typedef void (*wxWindowExtAddChild__wxWindowBasePFunc)(const wxWindowExt* self, wxWindowBase* child);
typedef void (*wxWindowExtAddPendingEvent__wxEventCRFunc)(const wxWindowExt* self, wxEvent const& event);
typedef wxCoord (*wxWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxWindowExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxWindowExtAdjustForParentClientOrigin__intRintRintFunc)(const wxWindowExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxWindowExtAlwaysShowScrollbars__boolboolFunc)(const wxWindowExt* self, bool horz, bool vert);
typedef void (*wxWindowExtAssociateHandle__WXWidgetFunc)(const wxWindowExt* self, WXWidget handle);
typedef bool (*wxWindowExtBeginRepositioningChildrenFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtCanApplyThemeBorderFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtCanBeFocusedFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtCanBeOutsideClientAreaFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtCanScroll__intFunc)(const wxWindowExt* self, int orient, bool res);
typedef bool (*wxWindowExtCanSetTransparentFunc)(const wxWindowExt* self, bool res);
typedef void (*wxWindowExtClearBackgroundFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtClientToWindowSize__wxSizeCRFunc)(const wxWindowExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxWindowExtCloneRefData__wxObjectRefDataCPFunc)(const wxWindowExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxWindowExtCreateRefDataFunc)(const wxWindowExt* self, wxObjectRefData* res);
typedef bool (*wxWindowExtDestroyFunc)(const wxWindowExt* self, bool res);
typedef void (*wxWindowExtDissociateHandleFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoCaptureMouseFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoCentre__intFunc)(const wxWindowExt* self, int dir);
typedef void (*wxWindowExtDoClientToScreen__intPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoEnable__boolFunc)(const wxWindowExt* self, bool enable);
typedef void (*wxWindowExtDoFreezeFunc)(const wxWindowExt* self);
typedef int (*wxWindowExtDoGetBestClientHeight__intFunc)(const wxWindowExt* self, int width, int res);
typedef wxSize (*wxWindowExtDoGetBestClientSizeFunc)(const wxWindowExt* self, wxSize res);
typedef int (*wxWindowExtDoGetBestClientWidth__intFunc)(const wxWindowExt* self, int height, int res);
typedef wxSize (*wxWindowExtDoGetBestSizeFunc)(const wxWindowExt* self, wxSize res);
typedef void* (*wxWindowExtDoGetClientDataFunc)(const wxWindowExt* self, void* res);
typedef wxClientData* (*wxWindowExtDoGetClientObjectFunc)(const wxWindowExt* self, wxClientData* res);
typedef void (*wxWindowExtDoGetClientSize__intPintPFunc)(const wxWindowExt* self, int* width, int* height);
typedef void (*wxWindowExtDoGetPosition__intPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoGetScreenPosition__intPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoGetSize__intPintPFunc)(const wxWindowExt* self, int* width, int* height);
typedef wxSize (*wxWindowExtDoGetSizeFromClientSize__wxSizeCRFunc)(const wxWindowExt* self, wxSize const& size, wxSize res);
typedef void (*wxWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxWindowExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* font);
typedef wxSize (*wxWindowExtDoGetVirtualSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxHitTest (*wxWindowExtDoHitTest__wxCoordwxCoordFunc)(const wxWindowExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxWindowExtDoIsExposed__intintintintFunc)(const wxWindowExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxWindowExtDoIsExposed__intintFunc)(const wxWindowExt* self, int x, int y, bool res);
typedef void (*wxWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxWindowExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxWindowExtDoMoveWindow__intintintintFunc)(const wxWindowExt* self, int x, int y, int width, int height);
typedef bool (*wxWindowExtDoNavigateIn__intFunc)(const wxWindowExt* self, int flags, bool res);
typedef bool (*wxWindowExtDoPhase__intFunc)(const wxWindowExt* self, int phase, bool res);
typedef bool (*wxWindowExtDoPopupMenu__wxMenuPintintFunc)(const wxWindowExt* self, wxMenu* menu, int x, int y);
typedef void (*wxWindowExtDoReleaseMouseFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoScreenToClient__intPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef void (*wxWindowExtDoSetClientData__voidPFunc)(const wxWindowExt* self, void* data);
typedef void (*wxWindowExtDoSetClientObject__wxClientDataPFunc)(const wxWindowExt* self, wxClientData* data);
typedef void (*wxWindowExtDoSetClientSize__intintFunc)(const wxWindowExt* self, int width, int height);
typedef void (*wxWindowExtDoSetSize__intintintintintFunc)(const wxWindowExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxWindowExtDoSetSizeHints__intintintintintintFunc)(const wxWindowExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxWindowExtDoSetToolTip__wxToolTipPFunc)(const wxWindowExt* self, wxToolTip* tip);
typedef void (*wxWindowExtDoSetToolTipText__wxStringCRFunc)(const wxWindowExt* self, wxString const& tip);
typedef void (*wxWindowExtDoSetVirtualSize__intintFunc)(const wxWindowExt* self, int x, int y);
typedef void (*wxWindowExtDoSetWindowVariant__wxWindowVariantFunc)(const wxWindowExt* self, wxWindowVariant variant);
typedef void (*wxWindowExtDoThawFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxWindowExt* self, wxUpdateUIEvent& event);
typedef void (*wxWindowExtDragAcceptFiles__boolFunc)(const wxWindowExt* self, bool accept);
typedef bool (*wxWindowExtEnable__boolFunc)(const wxWindowExt* self, bool enable, bool res);
typedef bool (*wxWindowExtEnableTouchEvents__intFunc)(const wxWindowExt* self, int eventsMask, bool res);
typedef void (*wxWindowExtEnableVisibleFocus__boolFunc)(const wxWindowExt* self, bool enabled);
typedef void (*wxWindowExtEndRepositioningChildrenFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtFitFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtFitInsideFunc)(const wxWindowExt* self);
typedef wxSize (*wxWindowExtGetBestVirtualSizeFunc)(const wxWindowExt* self, wxSize res);
typedef int (*wxWindowExtGetCharHeightFunc)(const wxWindowExt* self);
typedef int (*wxWindowExtGetCharWidthFunc)(const wxWindowExt* self);
typedef wxClassInfo* (*wxWindowExtGetClassInfoFunc)(const wxWindowExt* self, wxClassInfo* res);
typedef wxPoint (*wxWindowExtGetClientAreaOriginFunc)(const wxWindowExt* self, wxPoint res);
typedef void (*wxWindowExtGetClientSizeConstraint__intPintPFunc)(const wxWindowExt* self, int* w, int* h);
typedef double (*wxWindowExtGetContentScaleFactorFunc)(const wxWindowExt* self, double res);
typedef wxSize (*wxWindowExtGetDPIFunc)(const wxWindowExt* self, wxSize res);
typedef double (*wxWindowExtGetDPIScaleFactorFunc)(const wxWindowExt* self, double res);
typedef wxVisualAttributes (*wxWindowExtGetDefaultAttributesFunc)(const wxWindowExt* self, wxVisualAttributes res);
typedef wxBorder (*wxWindowExtGetDefaultBorderFunc)(const wxWindowExt* self, wxBorder res);
typedef wxBorder (*wxWindowExtGetDefaultBorderForControlFunc)(const wxWindowExt* self, wxBorder res);
typedef wxDropTarget* (*wxWindowExtGetDropTargetFunc)(const wxWindowExt* self, wxDropTarget* res);
typedef wxSize (*wxWindowExtGetEffectiveMinSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxEventHashTable& (*wxWindowExtGetEventHashTableFunc)(const wxWindowExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxWindowExtGetEventTableFunc)(const wxWindowExt* self, wxEventTable const* res);
typedef WXWidget (*wxWindowExtGetHandleFunc)(const wxWindowExt* self);
typedef wxString (*wxWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxWindowExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxWindowExtGetLabelFunc)(const wxWindowExt* self);
typedef wxLayoutDirection (*wxWindowExtGetLayoutDirectionFunc)(const wxWindowExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxWindowExtGetMainWindowOfCompositeControlFunc)(const wxWindowExt* self, wxWindow* res);
typedef wxSize (*wxWindowExtGetMaxClientSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxSize (*wxWindowExtGetMaxSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxSize (*wxWindowExtGetMinClientSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxSize (*wxWindowExtGetMinSizeFunc)(const wxWindowExt* self, wxSize res);
typedef wxString (*wxWindowExtGetNameFunc)(const wxWindowExt* self, wxString res);
typedef void (*wxWindowExtGetPositionConstraint__intPintPFunc)(const wxWindowExt* self, int* x, int* y);
typedef int (*wxWindowExtGetScrollPos__intFunc)(const wxWindowExt* self, int orient);
typedef int (*wxWindowExtGetScrollRange__intFunc)(const wxWindowExt* self, int orient);
typedef int (*wxWindowExtGetScrollThumb__intFunc)(const wxWindowExt* self, int orient);
typedef void (*wxWindowExtGetSizeConstraint__intPintPFunc)(const wxWindowExt* self, int* w, int* h);
typedef bool (*wxWindowExtGetThemeEnabledFunc)(const wxWindowExt* self, bool res);
typedef wxByte (*wxWindowExtGetTransparentFunc)(const wxWindowExt* self, wxByte res);
typedef wxValidator* (*wxWindowExtGetValidatorFunc)(const wxWindowExt* self, wxValidator* res);
typedef wxSize (*wxWindowExtGetWindowBorderSizeFunc)(const wxWindowExt* self, wxSize res);
typedef long (*wxWindowExtGetWindowStyleFlagFunc)(const wxWindowExt* self, long res);
typedef bool (*wxWindowExtHasCaptureFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtHasFocusFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtHasMultiplePagesFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtHasTransparentBackgroundFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxWindowExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxWindowExtInformFirstDirection__intintintFunc)(const wxWindowExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxWindowExtInheritAttributesFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtInitDialogFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtIsClientAreaChild__wxWindowCPFunc)(const wxWindowExt* self, wxWindow const* child, bool res);
typedef bool (*wxWindowExtIsDoubleBufferedFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtIsRetainedFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtIsScrollbarAlwaysShown__intFunc)(const wxWindowExt* self, int orient, bool res);
typedef bool (*wxWindowExtIsShownFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtIsShownOnScreenFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtIsThisEnabledFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtIsTopLevelFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxWindowExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxWindowExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxWindowExt* self, wxString* reason, bool res);
typedef bool (*wxWindowExtLayoutFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtLayoutPhase1__intPFunc)(const wxWindowExt* self, int* noChanges, bool res);
typedef bool (*wxWindowExtLayoutPhase2__intPFunc)(const wxWindowExt* self, int* noChanges, bool res);
typedef void (*wxWindowExtLowerFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtMoveConstraint__intintFunc)(const wxWindowExt* self, int x, int y);
typedef bool (*wxWindowExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxWindowExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxWindowExtOnInternalIdleFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtPrepareDC__wxDCRFunc)(const wxWindowExt* self, wxDC& dc);
typedef bool (*wxWindowExtProcessEvent__wxEventRFunc)(const wxWindowExt* self, wxEvent& event, bool res);
typedef void (*wxWindowExtQueueEvent__wxEventPFunc)(const wxWindowExt* self, wxEvent* event);
typedef void (*wxWindowExtRaiseFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtRefresh__boolwxRectCPFunc)(const wxWindowExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxWindowExtRegisterHotKey__intintintFunc)(const wxWindowExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxWindowExtRemoveChild__wxWindowBasePFunc)(const wxWindowExt* self, wxWindowBase* child);
typedef bool (*wxWindowExtReparent__wxWindowBasePFunc)(const wxWindowExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxWindowExtScrollLines__intFunc)(const wxWindowExt* self, int lines, bool res);
typedef bool (*wxWindowExtScrollPages__intFunc)(const wxWindowExt* self, int pages, bool res);
typedef void (*wxWindowExtScrollWindow__intintwxRectCPFunc)(const wxWindowExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxWindowExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxWindowExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxWindowExtSendIdleEvents__wxIdleEventRFunc)(const wxWindowExt* self, wxIdleEvent& event, bool res);
typedef void (*wxWindowExtSendSizeEvent__intFunc)(const wxWindowExt* self, int flags);
typedef void (*wxWindowExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxWindowExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxWindowExtSetBackgroundColour__wxColourCRFunc)(const wxWindowExt* self, wxColour const& colour, bool res);
typedef bool (*wxWindowExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxWindowExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxWindowExtSetCanFocus__boolFunc)(const wxWindowExt* self, bool canFocus);
typedef void (*wxWindowExtSetConstraintSizes__boolFunc)(const wxWindowExt* self, bool recurse);
typedef bool (*wxWindowExtSetCursor__wxCursorCRFunc)(const wxWindowExt* self, wxCursor const& cursor, bool res);
typedef void (*wxWindowExtSetDoubleBuffered__boolFunc)(const wxWindowExt* self, bool on);
typedef void (*wxWindowExtSetDropTarget__wxDropTargetPFunc)(const wxWindowExt* self, wxDropTarget* dropTarget);
typedef void (*wxWindowExtSetExtraStyle__longFunc)(const wxWindowExt* self, long exStyle);
typedef void (*wxWindowExtSetFocusFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtSetFocusFromKbdFunc)(const wxWindowExt* self);
typedef bool (*wxWindowExtSetFont__wxFontCRFunc)(const wxWindowExt* self, wxFont const& font);
typedef bool (*wxWindowExtSetForegroundColour__wxColourCRFunc)(const wxWindowExt* self, wxColour const& colour, bool res);
typedef void (*wxWindowExtSetId__wxWindowIDFunc)(const wxWindowExt* self, wxWindowID winid);
typedef void (*wxWindowExtSetLabel__wxStringCRFunc)(const wxWindowExt* self, wxString const& label);
typedef void (*wxWindowExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxWindowExt* self, wxLayoutDirection dir);
typedef void (*wxWindowExtSetMaxClientSize__wxSizeCRFunc)(const wxWindowExt* self, wxSize const& size);
typedef void (*wxWindowExtSetMaxSize__wxSizeCRFunc)(const wxWindowExt* self, wxSize const& maxSize);
typedef void (*wxWindowExtSetMinClientSize__wxSizeCRFunc)(const wxWindowExt* self, wxSize const& size);
typedef void (*wxWindowExtSetMinSize__wxSizeCRFunc)(const wxWindowExt* self, wxSize const& minSize);
typedef void (*wxWindowExtSetName__wxStringCRFunc)(const wxWindowExt* self, wxString const& name);
typedef void (*wxWindowExtSetNextHandler__wxEvtHandlerPFunc)(const wxWindowExt* self, wxEvtHandler* handler);
typedef void (*wxWindowExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxWindowExt* self, wxEvtHandler* handler);
typedef void (*wxWindowExtSetScrollPos__intintboolFunc)(const wxWindowExt* self, int orient, int pos, bool refresh);
typedef void (*wxWindowExtSetScrollbar__intintintintboolFunc)(const wxWindowExt* self, int orient, int pos, int thumbvisible, int range, bool refresh);
typedef void (*wxWindowExtSetSizeConstraint__intintintintFunc)(const wxWindowExt* self, int x, int y, int w, int h);
typedef void (*wxWindowExtSetSizeHints__intintintintintintFunc)(const wxWindowExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxWindowExtSetThemeEnabled__boolFunc)(const wxWindowExt* self, bool enableTheme);
typedef bool (*wxWindowExtSetTransparent__wxByteFunc)(const wxWindowExt* self, wxByte alpha, bool res);
typedef void (*wxWindowExtSetValidator__wxValidatorCRFunc)(const wxWindowExt* self, wxValidator const& validator);
typedef void (*wxWindowExtSetWindowStyleFlag__longFunc)(const wxWindowExt* self, long style);
typedef bool (*wxWindowExtShouldInheritColoursFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtShow__boolFunc)(const wxWindowExt* self, bool show, bool res);
typedef bool (*wxWindowExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxWindowExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxWindowExtTransferDataFromWindowFunc)(const wxWindowExt* self, bool res);
typedef bool (*wxWindowExtTransferDataToWindowFunc)(const wxWindowExt* self, bool res);
typedef void (*wxWindowExtTriggerScrollEvent__wxEventTypeFunc)(const wxWindowExt* self, wxEventType scrollEvent);
typedef bool (*wxWindowExtTryAfter__wxEventRFunc)(const wxWindowExt* self, wxEvent& event, bool res);
typedef bool (*wxWindowExtTryBefore__wxEventRFunc)(const wxWindowExt* self, wxEvent& event, bool res);
typedef bool (*wxWindowExtUnregisterHotKey__intFunc)(const wxWindowExt* self, int hotkeyId, bool res);
typedef void (*wxWindowExtUpdateFunc)(const wxWindowExt* self);
typedef void (*wxWindowExtUpdateWindowUI__longFunc)(const wxWindowExt* self, long flags);
typedef bool (*wxWindowExtValidateFunc)(const wxWindowExt* self, bool res);
typedef void (*wxWindowExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxWindowExt* self, wxFont& font);
typedef wxTextEntry const* (*wxWindowExtWXGetTextEntryFunc)(const wxWindowExt* self, wxTextEntry const* res);
typedef void* (*wxWindowExtWXReservedEvtHandler1__voidPFunc)(const wxWindowExt* self, void* param0, void* res);
typedef void* (*wxWindowExtWXReservedEvtHandler2__voidPFunc)(const wxWindowExt* self, void* param0, void* res);
typedef void* (*wxWindowExtWXReservedWindow1__voidPFunc)(const wxWindowExt* self, void* param0, void* res);
typedef void* (*wxWindowExtWXReservedWindow2__voidPFunc)(const wxWindowExt* self, void* param0, void* res);
typedef void* (*wxWindowExtWXReservedWindow3__voidPFunc)(const wxWindowExt* self, void* param0, void* res);
typedef void (*wxWindowExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxWindowExt* self, int flags, wxSizer* sizer);
typedef void (*wxWindowExtWarpPointer__intintFunc)(const wxWindowExt* self, int x, int y);
typedef wxSize (*wxWindowExtWindowToClientSize__wxSizeCRFunc)(const wxWindowExt* self, wxSize const& size, wxSize res);

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
  wxWindowListExt(wxKeyType keyType = wxKEY_NONE): wxWindowList(keyType)  {  }
  wxWindowListExt(wxWindowList const& list): wxWindowList(list)  {  }
  explicit wxWindowListExt(wxWindowList::size_type n, wxWindowList::const_reference v = value_type()): wxWindowList(n, v)  {  }
  wxWindowListExt(wxWindowList::const_iterator const& first, wxWindowList::const_iterator const& last): wxWindowList(first, last)  {  }
  wxWindowListExtCreateNode__wxNodeBasePwxNodeBasePvoidPwxListKeyCRFunc m_wxWindowListExtCreateNode__wxNodeBasePwxNodeBasePvoidPwxListKeyCR = NULL;
  virtual wxNodeBase* CreateNode(wxNodeBase* prev, wxNodeBase* next, void* data, wxListKey const& key = wxDefaultListKey) override
  {
    wxNodeBase* res = wxWindowList::CreateNode(prev, next, data, key);
    if (*m_wxWindowListExtCreateNode__wxNodeBasePwxNodeBasePvoidPwxListKeyCR != NULL){
      return m_wxWindowListExtCreateNode__wxNodeBasePwxNodeBasePvoidPwxListKeyCR(this, prev, next, data, key, res);
    }
    else {
      return res;
    }
  }
  wxWindowListExtFind__wxListKeyCRFunc m_wxWindowListExtFind__wxListKeyCR = NULL;
  virtual wxWindowListNode* Find(wxListKey const& key) const override
  {
    wxWindowListNode* res = wxWindowList::Find(key);
    if (*m_wxWindowListExtFind__wxListKeyCR != NULL){
      return m_wxWindowListExtFind__wxListKeyCR(this, key, res);
    }
    else {
      return res;
    }
  }
  wxWindowListExt(wxWindowListExtCreateNode__wxNodeBasePwxNodeBasePvoidPwxListKeyCRFunc a_CreateNode__wxNodeBasePwxNodeBasePvoidPwxListKeyCR, wxWindowListExtFind__wxListKeyCRFunc a_Find__wxListKeyCR): wxWindowList() {
    m_wxWindowListExtCreateNode__wxNodeBasePwxNodeBasePvoidPwxListKeyCR = a_CreateNode__wxNodeBasePwxNodeBasePvoidPwxListKeyCR;
    m_wxWindowListExtFind__wxListKeyCR = a_Find__wxListKeyCR;
  }
};

class wxWindowBaseExt: public wxWindowBase
{
public:
  wxWindowBaseExt(): wxWindowBase()  {  }
  virtual ~wxWindowBaseExt() override  {  }
  wxWindowBaseExtAcceptsFocusFunc m_wxWindowBaseExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxWindowBase::AcceptsFocus();
    if (*m_wxWindowBaseExtAcceptsFocus != NULL){
      return m_wxWindowBaseExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtAcceptsFocusFromKeyboardFunc m_wxWindowBaseExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxWindowBase::AcceptsFocusFromKeyboard();
    if (*m_wxWindowBaseExtAcceptsFocusFromKeyboard != NULL){
      return m_wxWindowBaseExtAcceptsFocusFromKeyboard(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtAcceptsFocusRecursivelyFunc m_wxWindowBaseExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxWindowBase::AcceptsFocusRecursively();
    if (*m_wxWindowBaseExtAcceptsFocusRecursively != NULL){
      return m_wxWindowBaseExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtAddChild__wxWindowBasePFunc m_wxWindowBaseExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxWindowBase::AddChild(child);
    if (*m_wxWindowBaseExtAddChild__wxWindowBaseP != NULL){
      return m_wxWindowBaseExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxWindowBaseExtAddPendingEvent__wxEventCRFunc m_wxWindowBaseExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxWindowBase::AddPendingEvent(event);
    if (*m_wxWindowBaseExtAddPendingEvent__wxEventCR != NULL){
      return m_wxWindowBaseExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxWindowBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxWindowBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxWindowBase::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxWindowBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxWindowBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtAdjustForParentClientOrigin__intRintRintFunc m_wxWindowBaseExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxWindowBase::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxWindowBaseExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxWindowBaseExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxWindowBaseExtAlwaysShowScrollbars__boolboolFunc m_wxWindowBaseExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxWindowBase::AlwaysShowScrollbars(horz, vert);
    if (*m_wxWindowBaseExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxWindowBaseExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxWindowBaseExtAssociateHandle__WXWidgetFunc m_wxWindowBaseExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxWindowBase::AssociateHandle(handle);
    if (*m_wxWindowBaseExtAssociateHandle__WXWidget != NULL){
      return m_wxWindowBaseExtAssociateHandle__WXWidget(this, handle);
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
  wxWindowBaseExtCanApplyThemeBorderFunc m_wxWindowBaseExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxWindowBase::CanApplyThemeBorder();
    if (*m_wxWindowBaseExtCanApplyThemeBorder != NULL){
      return m_wxWindowBaseExtCanApplyThemeBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtCanBeFocusedFunc m_wxWindowBaseExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxWindowBase::CanBeFocused();
    if (*m_wxWindowBaseExtCanBeFocused != NULL){
      return m_wxWindowBaseExtCanBeFocused(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtCanBeOutsideClientAreaFunc m_wxWindowBaseExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxWindowBase::CanBeOutsideClientArea();
    if (*m_wxWindowBaseExtCanBeOutsideClientArea != NULL){
      return m_wxWindowBaseExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtCanScroll__intFunc m_wxWindowBaseExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxWindowBase::CanScroll(orient);
    if (*m_wxWindowBaseExtCanScroll__int != NULL){
      return m_wxWindowBaseExtCanScroll__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtCanSetTransparentFunc m_wxWindowBaseExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxWindowBase::CanSetTransparent();
    if (*m_wxWindowBaseExtCanSetTransparent != NULL){
      return m_wxWindowBaseExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtClearBackgroundFunc m_wxWindowBaseExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxWindowBase::ClearBackground();
    if (*m_wxWindowBaseExtClearBackground != NULL){
      return m_wxWindowBaseExtClearBackground(this);
    }
  }
  wxWindowBaseExtClientToWindowSize__wxSizeCRFunc m_wxWindowBaseExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxWindowBase::ClientToWindowSize(size);
    if (*m_wxWindowBaseExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxWindowBaseExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtCloneRefData__wxObjectRefDataCPFunc m_wxWindowBaseExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxWindowBase::CloneRefData(data);
    if (*m_wxWindowBaseExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxWindowBaseExtCloneRefData__wxObjectRefDataCP(this, data, res);
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
  wxWindowBaseExtDissociateHandleFunc m_wxWindowBaseExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxWindowBase::DissociateHandle();
    if (*m_wxWindowBaseExtDissociateHandle != NULL){
      return m_wxWindowBaseExtDissociateHandle(this);
    }
  }
  wxWindowBaseExtDoCaptureMouseFunc m_wxWindowBaseExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    if (*m_wxWindowBaseExtDoCaptureMouse != NULL){
      return m_wxWindowBaseExtDoCaptureMouse(this);
    }
  }
  wxWindowBaseExtDoCentre__intFunc m_wxWindowBaseExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxWindowBase::DoCentre(dir);
    if (*m_wxWindowBaseExtDoCentre__int != NULL){
      return m_wxWindowBaseExtDoCentre__int(this, dir);
    }
  }
  wxWindowBaseExtDoClientToScreen__intPintPFunc m_wxWindowBaseExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    if (*m_wxWindowBaseExtDoClientToScreen__intPintP != NULL){
      return m_wxWindowBaseExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxWindowBaseExtDoEnable__boolFunc m_wxWindowBaseExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxWindowBase::DoEnable(enable);
    if (*m_wxWindowBaseExtDoEnable__bool != NULL){
      return m_wxWindowBaseExtDoEnable__bool(this, enable);
    }
  }
  wxWindowBaseExtDoFreezeFunc m_wxWindowBaseExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxWindowBase::DoFreeze();
    if (*m_wxWindowBaseExtDoFreeze != NULL){
      return m_wxWindowBaseExtDoFreeze(this);
    }
  }
  wxWindowBaseExtDoGetBestClientHeight__intFunc m_wxWindowBaseExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxWindowBase::DoGetBestClientHeight(width);
    if (*m_wxWindowBaseExtDoGetBestClientHeight__int != NULL){
      return m_wxWindowBaseExtDoGetBestClientHeight__int(this, width, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoGetBestClientSizeFunc m_wxWindowBaseExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxWindowBase::DoGetBestClientSize();
    if (*m_wxWindowBaseExtDoGetBestClientSize != NULL){
      return m_wxWindowBaseExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoGetBestClientWidth__intFunc m_wxWindowBaseExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxWindowBase::DoGetBestClientWidth(height);
    if (*m_wxWindowBaseExtDoGetBestClientWidth__int != NULL){
      return m_wxWindowBaseExtDoGetBestClientWidth__int(this, height, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoGetBestSizeFunc m_wxWindowBaseExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxWindowBase::DoGetBestSize();
    if (*m_wxWindowBaseExtDoGetBestSize != NULL){
      return m_wxWindowBaseExtDoGetBestSize(this, res);
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
      return m_wxWindowBaseExtDoGetClientData(this, res);
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
      return m_wxWindowBaseExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoGetClientSize__intPintPFunc m_wxWindowBaseExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    if (*m_wxWindowBaseExtDoGetClientSize__intPintP != NULL){
      return m_wxWindowBaseExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxWindowBaseExtDoGetPosition__intPintPFunc m_wxWindowBaseExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    if (*m_wxWindowBaseExtDoGetPosition__intPintP != NULL){
      return m_wxWindowBaseExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxWindowBaseExtDoGetScreenPosition__intPintPFunc m_wxWindowBaseExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxWindowBase::DoGetScreenPosition(x, y);
    if (*m_wxWindowBaseExtDoGetScreenPosition__intPintP != NULL){
      return m_wxWindowBaseExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxWindowBaseExtDoGetSize__intPintPFunc m_wxWindowBaseExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    if (*m_wxWindowBaseExtDoGetSize__intPintP != NULL){
      return m_wxWindowBaseExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxWindowBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxWindowBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* font = __null) const override
  {
    if (*m_wxWindowBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxWindowBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, font);
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
  wxWindowBaseExtDoHitTest__wxCoordwxCoordFunc m_wxWindowBaseExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxWindowBase::DoHitTest(x, y);
    if (*m_wxWindowBaseExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxWindowBaseExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoIsExposed__intintintintFunc m_wxWindowBaseExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxWindowBase::DoIsExposed(x, y, w, h);
    if (*m_wxWindowBaseExtDoIsExposed__intintintint != NULL){
      return m_wxWindowBaseExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoIsExposed__intintFunc m_wxWindowBaseExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxWindowBase::DoIsExposed(x, y);
    if (*m_wxWindowBaseExtDoIsExposed__intint != NULL){
      return m_wxWindowBaseExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxWindowBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxWindowBase::DoMoveInTabOrder(win, move);
    if (*m_wxWindowBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxWindowBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxWindowBaseExtDoMoveWindow__intintintintFunc m_wxWindowBaseExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    if (*m_wxWindowBaseExtDoMoveWindow__intintintint != NULL){
      return m_wxWindowBaseExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxWindowBaseExtDoNavigateIn__intFunc m_wxWindowBaseExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxWindowBase::DoNavigateIn(flags);
    if (*m_wxWindowBaseExtDoNavigateIn__int != NULL){
      return m_wxWindowBaseExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoPhase__intFunc m_wxWindowBaseExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxWindowBase::DoPhase(phase);
    if (*m_wxWindowBaseExtDoPhase__int != NULL){
      return m_wxWindowBaseExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtDoPopupMenu__wxMenuPintintFunc m_wxWindowBaseExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    if (*m_wxWindowBaseExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxWindowBaseExtDoPopupMenu__wxMenuPintint(this, menu, x, y);
    }
    else {
      return false;
    }
  }
  wxWindowBaseExtDoReleaseMouseFunc m_wxWindowBaseExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    if (*m_wxWindowBaseExtDoReleaseMouse != NULL){
      return m_wxWindowBaseExtDoReleaseMouse(this);
    }
  }
  wxWindowBaseExtDoScreenToClient__intPintPFunc m_wxWindowBaseExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    if (*m_wxWindowBaseExtDoScreenToClient__intPintP != NULL){
      return m_wxWindowBaseExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxWindowBaseExtDoSetClientData__voidPFunc m_wxWindowBaseExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxWindowBase::DoSetClientData(data);
    if (*m_wxWindowBaseExtDoSetClientData__voidP != NULL){
      return m_wxWindowBaseExtDoSetClientData__voidP(this, data);
    }
  }
  wxWindowBaseExtDoSetClientObject__wxClientDataPFunc m_wxWindowBaseExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxWindowBase::DoSetClientObject(data);
    if (*m_wxWindowBaseExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxWindowBaseExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxWindowBaseExtDoSetClientSize__intintFunc m_wxWindowBaseExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    if (*m_wxWindowBaseExtDoSetClientSize__intint != NULL){
      return m_wxWindowBaseExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxWindowBaseExtDoSetSize__intintintintintFunc m_wxWindowBaseExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    if (*m_wxWindowBaseExtDoSetSize__intintintintint != NULL){
      return m_wxWindowBaseExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxWindowBaseExtDoSetSizeHints__intintintintintintFunc m_wxWindowBaseExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxWindowBase::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxWindowBaseExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxWindowBaseExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxWindowBaseExtDoSetToolTip__wxToolTipPFunc m_wxWindowBaseExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxWindowBase::DoSetToolTip(tip);
    if (*m_wxWindowBaseExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxWindowBaseExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxWindowBaseExtDoSetToolTipText__wxStringCRFunc m_wxWindowBaseExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxWindowBase::DoSetToolTipText(tip);
    if (*m_wxWindowBaseExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxWindowBaseExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxWindowBaseExtDoSetVirtualSize__intintFunc m_wxWindowBaseExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxWindowBase::DoSetVirtualSize(x, y);
    if (*m_wxWindowBaseExtDoSetVirtualSize__intint != NULL){
      return m_wxWindowBaseExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxWindowBaseExtDoSetWindowVariant__wxWindowVariantFunc m_wxWindowBaseExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxWindowBase::DoSetWindowVariant(variant);
    if (*m_wxWindowBaseExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxWindowBaseExtDoSetWindowVariant__wxWindowVariant(this, variant);
    }
  }
  wxWindowBaseExtDoThawFunc m_wxWindowBaseExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxWindowBase::DoThaw();
    if (*m_wxWindowBaseExtDoThaw != NULL){
      return m_wxWindowBaseExtDoThaw(this);
    }
  }
  wxWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxWindowBase::DoUpdateWindowUI(event);
    if (*m_wxWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxWindowBaseExtDragAcceptFiles__boolFunc m_wxWindowBaseExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxWindowBase::DragAcceptFiles(accept);
    if (*m_wxWindowBaseExtDragAcceptFiles__bool != NULL){
      return m_wxWindowBaseExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxWindowBaseExtEnable__boolFunc m_wxWindowBaseExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxWindowBase::Enable(enable);
    if (*m_wxWindowBaseExtEnable__bool != NULL){
      return m_wxWindowBaseExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtEnableTouchEvents__intFunc m_wxWindowBaseExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxWindowBase::EnableTouchEvents(eventsMask);
    if (*m_wxWindowBaseExtEnableTouchEvents__int != NULL){
      return m_wxWindowBaseExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtEnableVisibleFocus__boolFunc m_wxWindowBaseExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxWindowBase::EnableVisibleFocus(enabled);
    if (*m_wxWindowBaseExtEnableVisibleFocus__bool != NULL){
      return m_wxWindowBaseExtEnableVisibleFocus__bool(this, enabled);
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
  wxWindowBaseExtGetCharHeightFunc m_wxWindowBaseExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    if (*m_wxWindowBaseExtGetCharHeight != NULL){
      return m_wxWindowBaseExtGetCharHeight(this);
    }
    else {
      return 0;
    }
  }
  wxWindowBaseExtGetCharWidthFunc m_wxWindowBaseExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    if (*m_wxWindowBaseExtGetCharWidth != NULL){
      return m_wxWindowBaseExtGetCharWidth(this);
    }
    else {
      return 0;
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
  wxWindowBaseExtGetClientSizeConstraint__intPintPFunc m_wxWindowBaseExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxWindowBase::GetClientSizeConstraint(w, h);
    if (*m_wxWindowBaseExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxWindowBaseExtGetClientSizeConstraint__intPintP(this, w, h);
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
  wxWindowBaseExtGetDPIFunc m_wxWindowBaseExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxWindowBase::GetDPI();
    if (*m_wxWindowBaseExtGetDPI != NULL){
      return m_wxWindowBaseExtGetDPI(this, res);
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
  wxWindowBaseExtGetDefaultAttributesFunc m_wxWindowBaseExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxWindowBase::GetDefaultAttributes();
    if (*m_wxWindowBaseExtGetDefaultAttributes != NULL){
      return m_wxWindowBaseExtGetDefaultAttributes(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetDefaultBorderFunc m_wxWindowBaseExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxWindowBase::GetDefaultBorder();
    if (*m_wxWindowBaseExtGetDefaultBorder != NULL){
      return m_wxWindowBaseExtGetDefaultBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetDefaultBorderForControlFunc m_wxWindowBaseExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxWindowBase::GetDefaultBorderForControl();
    if (*m_wxWindowBaseExtGetDefaultBorderForControl != NULL){
      return m_wxWindowBaseExtGetDefaultBorderForControl(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetDropTargetFunc m_wxWindowBaseExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxWindowBase::GetDropTarget();
    if (*m_wxWindowBaseExtGetDropTarget != NULL){
      return m_wxWindowBaseExtGetDropTarget(this, res);
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
  wxWindowBaseExtGetHandleFunc m_wxWindowBaseExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    if (*m_wxWindowBaseExtGetHandle != NULL){
      return m_wxWindowBaseExtGetHandle(this);
    }
    else {
      return NULL;
    }
  }
  wxWindowBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxWindowBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxWindowBase::GetHelpTextAtPoint(pt, origin);
    if (*m_wxWindowBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxWindowBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
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
  wxWindowBaseExtGetMainWindowOfCompositeControlFunc m_wxWindowBaseExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxWindowBase::GetMainWindowOfCompositeControl();
    if (*m_wxWindowBaseExtGetMainWindowOfCompositeControl != NULL){
      return m_wxWindowBaseExtGetMainWindowOfCompositeControl(this, res);
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
  wxWindowBaseExtGetPositionConstraint__intPintPFunc m_wxWindowBaseExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxWindowBase::GetPositionConstraint(x, y);
    if (*m_wxWindowBaseExtGetPositionConstraint__intPintP != NULL){
      return m_wxWindowBaseExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxWindowBaseExtGetScrollPos__intFunc m_wxWindowBaseExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    if (*m_wxWindowBaseExtGetScrollPos__int != NULL){
      return m_wxWindowBaseExtGetScrollPos__int(this, orient);
    }
    else {
      return 0;
    }
  }
  wxWindowBaseExtGetScrollRange__intFunc m_wxWindowBaseExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    if (*m_wxWindowBaseExtGetScrollRange__int != NULL){
      return m_wxWindowBaseExtGetScrollRange__int(this, orient);
    }
    else {
      return 0;
    }
  }
  wxWindowBaseExtGetScrollThumb__intFunc m_wxWindowBaseExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    if (*m_wxWindowBaseExtGetScrollThumb__int != NULL){
      return m_wxWindowBaseExtGetScrollThumb__int(this, orient);
    }
    else {
      return 0;
    }
  }
  wxWindowBaseExtGetSizeConstraint__intPintPFunc m_wxWindowBaseExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxWindowBase::GetSizeConstraint(w, h);
    if (*m_wxWindowBaseExtGetSizeConstraint__intPintP != NULL){
      return m_wxWindowBaseExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxWindowBaseExtGetThemeEnabledFunc m_wxWindowBaseExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxWindowBase::GetThemeEnabled();
    if (*m_wxWindowBaseExtGetThemeEnabled != NULL){
      return m_wxWindowBaseExtGetThemeEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtGetValidatorFunc m_wxWindowBaseExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxWindowBase::GetValidator();
    if (*m_wxWindowBaseExtGetValidator != NULL){
      return m_wxWindowBaseExtGetValidator(this, res);
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
  wxWindowBaseExtGetWindowStyleFlagFunc m_wxWindowBaseExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxWindowBase::GetWindowStyleFlag();
    if (*m_wxWindowBaseExtGetWindowStyleFlag != NULL){
      return m_wxWindowBaseExtGetWindowStyleFlag(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtHasCaptureFunc m_wxWindowBaseExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxWindowBase::HasCapture();
    if (*m_wxWindowBaseExtHasCapture != NULL){
      return m_wxWindowBaseExtHasCapture(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtHasFocusFunc m_wxWindowBaseExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxWindowBase::HasFocus();
    if (*m_wxWindowBaseExtHasFocus != NULL){
      return m_wxWindowBaseExtHasFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtHasMultiplePagesFunc m_wxWindowBaseExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxWindowBase::HasMultiplePages();
    if (*m_wxWindowBaseExtHasMultiplePages != NULL){
      return m_wxWindowBaseExtHasMultiplePages(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtHasTransparentBackgroundFunc m_wxWindowBaseExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxWindowBase::HasTransparentBackground();
    if (*m_wxWindowBaseExtHasTransparentBackground != NULL){
      return m_wxWindowBaseExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtHideWithEffect__wxShowEffectunsignedintFunc m_wxWindowBaseExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxWindowBase::HideWithEffect(effect, timeout);
    if (*m_wxWindowBaseExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxWindowBaseExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtInformFirstDirection__intintintFunc m_wxWindowBaseExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxWindowBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxWindowBaseExtInformFirstDirection__intintint != NULL){
      return m_wxWindowBaseExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtInheritAttributesFunc m_wxWindowBaseExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxWindowBase::InheritAttributes();
    if (*m_wxWindowBaseExtInheritAttributes != NULL){
      return m_wxWindowBaseExtInheritAttributes(this);
    }
  }
  wxWindowBaseExtInitDialogFunc m_wxWindowBaseExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxWindowBase::InitDialog();
    if (*m_wxWindowBaseExtInitDialog != NULL){
      return m_wxWindowBaseExtInitDialog(this);
    }
  }
  wxWindowBaseExtIsClientAreaChild__wxWindowCPFunc m_wxWindowBaseExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxWindowBase::IsClientAreaChild(child);
    if (*m_wxWindowBaseExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxWindowBaseExtIsClientAreaChild__wxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtIsDoubleBufferedFunc m_wxWindowBaseExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxWindowBase::IsDoubleBuffered();
    if (*m_wxWindowBaseExtIsDoubleBuffered != NULL){
      return m_wxWindowBaseExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtIsRetainedFunc m_wxWindowBaseExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxWindowBase::IsRetained();
    if (*m_wxWindowBaseExtIsRetained != NULL){
      return m_wxWindowBaseExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtIsScrollbarAlwaysShown__intFunc m_wxWindowBaseExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxWindowBase::IsScrollbarAlwaysShown(orient);
    if (*m_wxWindowBaseExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxWindowBaseExtIsScrollbarAlwaysShown__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtIsShownFunc m_wxWindowBaseExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxWindowBase::IsShown();
    if (*m_wxWindowBaseExtIsShown != NULL){
      return m_wxWindowBaseExtIsShown(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtIsShownOnScreenFunc m_wxWindowBaseExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxWindowBase::IsShownOnScreen();
    if (*m_wxWindowBaseExtIsShownOnScreen != NULL){
      return m_wxWindowBaseExtIsShownOnScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtIsThisEnabledFunc m_wxWindowBaseExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxWindowBase::IsThisEnabled();
    if (*m_wxWindowBaseExtIsThisEnabled != NULL){
      return m_wxWindowBaseExtIsThisEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtIsTopLevelFunc m_wxWindowBaseExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxWindowBase::IsTopLevel();
    if (*m_wxWindowBaseExtIsTopLevel != NULL){
      return m_wxWindowBaseExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxWindowBase::IsTopNavigationDomain(kind);
    if (*m_wxWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtIsTransparentBackgroundSupported__wxStringPFunc m_wxWindowBaseExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxWindowBase::IsTransparentBackgroundSupported(reason);
    if (*m_wxWindowBaseExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxWindowBaseExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtLayoutFunc m_wxWindowBaseExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxWindowBase::Layout();
    if (*m_wxWindowBaseExtLayout != NULL){
      return m_wxWindowBaseExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtLayoutPhase1__intPFunc m_wxWindowBaseExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxWindowBase::LayoutPhase1(noChanges);
    if (*m_wxWindowBaseExtLayoutPhase1__intP != NULL){
      return m_wxWindowBaseExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtLayoutPhase2__intPFunc m_wxWindowBaseExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxWindowBase::LayoutPhase2(noChanges);
    if (*m_wxWindowBaseExtLayoutPhase2__intP != NULL){
      return m_wxWindowBaseExtLayoutPhase2__intP(this, noChanges, res);
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
  wxWindowBaseExtMoveConstraint__intintFunc m_wxWindowBaseExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxWindowBase::MoveConstraint(x, y);
    if (*m_wxWindowBaseExtMoveConstraint__intint != NULL){
      return m_wxWindowBaseExtMoveConstraint__intint(this, x, y);
    }
  }
  wxWindowBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxWindowBaseExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxWindowBase::OnDynamicBind(entry);
    if (*m_wxWindowBaseExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxWindowBaseExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtOnInternalIdleFunc m_wxWindowBaseExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxWindowBase::OnInternalIdle();
    if (*m_wxWindowBaseExtOnInternalIdle != NULL){
      return m_wxWindowBaseExtOnInternalIdle(this);
    }
  }
  wxWindowBaseExtPrepareDC__wxDCRFunc m_wxWindowBaseExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxWindowBase::PrepareDC(dc);
    if (*m_wxWindowBaseExtPrepareDC__wxDCR != NULL){
      return m_wxWindowBaseExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxWindowBaseExtProcessEvent__wxEventRFunc m_wxWindowBaseExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxWindowBase::ProcessEvent(event);
    if (*m_wxWindowBaseExtProcessEvent__wxEventR != NULL){
      return m_wxWindowBaseExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtQueueEvent__wxEventPFunc m_wxWindowBaseExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxWindowBase::QueueEvent(event);
    if (*m_wxWindowBaseExtQueueEvent__wxEventP != NULL){
      return m_wxWindowBaseExtQueueEvent__wxEventP(this, event);
    }
  }
  wxWindowBaseExtRaiseFunc m_wxWindowBaseExtRaise = NULL;
  virtual void Raise() override
  {
    if (*m_wxWindowBaseExtRaise != NULL){
      return m_wxWindowBaseExtRaise(this);
    }
  }
  wxWindowBaseExtRefresh__boolwxRectCPFunc m_wxWindowBaseExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = (const wxRect*)__null) override
  {
    if (*m_wxWindowBaseExtRefresh__boolwxRectCP != NULL){
      return m_wxWindowBaseExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxWindowBaseExtRegisterHotKey__intintintFunc m_wxWindowBaseExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxWindowBase::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxWindowBaseExtRegisterHotKey__intintint != NULL){
      return m_wxWindowBaseExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtRemoveChild__wxWindowBasePFunc m_wxWindowBaseExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxWindowBase::RemoveChild(child);
    if (*m_wxWindowBaseExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxWindowBaseExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxWindowBaseExtReparent__wxWindowBasePFunc m_wxWindowBaseExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxWindowBase::Reparent(newParent);
    if (*m_wxWindowBaseExtReparent__wxWindowBaseP != NULL){
      return m_wxWindowBaseExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtScrollLines__intFunc m_wxWindowBaseExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxWindowBase::ScrollLines(lines);
    if (*m_wxWindowBaseExtScrollLines__int != NULL){
      return m_wxWindowBaseExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtScrollPages__intFunc m_wxWindowBaseExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxWindowBase::ScrollPages(pages);
    if (*m_wxWindowBaseExtScrollPages__int != NULL){
      return m_wxWindowBaseExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtScrollWindow__intintwxRectCPFunc m_wxWindowBaseExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    if (*m_wxWindowBaseExtScrollWindow__intintwxRectCP != NULL){
      return m_wxWindowBaseExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxWindowBaseExtSearchEventTable__wxEventTableRwxEventRFunc m_wxWindowBaseExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxWindowBase::SearchEventTable(table, event);
    if (*m_wxWindowBaseExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxWindowBaseExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtSendIdleEvents__wxIdleEventRFunc m_wxWindowBaseExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxWindowBase::SendIdleEvents(event);
    if (*m_wxWindowBaseExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxWindowBaseExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtSendSizeEvent__intFunc m_wxWindowBaseExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxWindowBase::SendSizeEvent(flags);
    if (*m_wxWindowBaseExtSendSizeEvent__int != NULL){
      return m_wxWindowBaseExtSendSizeEvent__int(this, flags);
    }
  }
  wxWindowBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxWindowBaseExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxWindowBase::SetAcceleratorTable(accel);
    if (*m_wxWindowBaseExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxWindowBaseExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxWindowBaseExtSetBackgroundColour__wxColourCRFunc m_wxWindowBaseExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxWindowBase::SetBackgroundColour(colour);
    if (*m_wxWindowBaseExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxWindowBaseExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxWindowBaseExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxWindowBase::SetBackgroundStyle(style);
    if (*m_wxWindowBaseExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxWindowBaseExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtSetCanFocus__boolFunc m_wxWindowBaseExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxWindowBase::SetCanFocus(canFocus);
    if (*m_wxWindowBaseExtSetCanFocus__bool != NULL){
      return m_wxWindowBaseExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxWindowBaseExtSetConstraintSizes__boolFunc m_wxWindowBaseExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxWindowBase::SetConstraintSizes(recurse);
    if (*m_wxWindowBaseExtSetConstraintSizes__bool != NULL){
      return m_wxWindowBaseExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxWindowBaseExtSetCursor__wxCursorCRFunc m_wxWindowBaseExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxWindowBase::SetCursor(cursor);
    if (*m_wxWindowBaseExtSetCursor__wxCursorCR != NULL){
      return m_wxWindowBaseExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtSetDoubleBuffered__boolFunc m_wxWindowBaseExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxWindowBase::SetDoubleBuffered(on);
    if (*m_wxWindowBaseExtSetDoubleBuffered__bool != NULL){
      return m_wxWindowBaseExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxWindowBaseExtSetDropTarget__wxDropTargetPFunc m_wxWindowBaseExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    if (*m_wxWindowBaseExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxWindowBaseExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxWindowBaseExtSetExtraStyle__longFunc m_wxWindowBaseExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxWindowBase::SetExtraStyle(exStyle);
    if (*m_wxWindowBaseExtSetExtraStyle__long != NULL){
      return m_wxWindowBaseExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxWindowBaseExtSetFocusFunc m_wxWindowBaseExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    if (*m_wxWindowBaseExtSetFocus != NULL){
      return m_wxWindowBaseExtSetFocus(this);
    }
  }
  wxWindowBaseExtSetFocusFromKbdFunc m_wxWindowBaseExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxWindowBase::SetFocusFromKbd();
    if (*m_wxWindowBaseExtSetFocusFromKbd != NULL){
      return m_wxWindowBaseExtSetFocusFromKbd(this);
    }
  }
  wxWindowBaseExtSetFont__wxFontCRFunc m_wxWindowBaseExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    if (*m_wxWindowBaseExtSetFont__wxFontCR != NULL){
      return m_wxWindowBaseExtSetFont__wxFontCR(this, font);
    }
    else {
      return false;
    }
  }
  wxWindowBaseExtSetForegroundColour__wxColourCRFunc m_wxWindowBaseExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxWindowBase::SetForegroundColour(colour);
    if (*m_wxWindowBaseExtSetForegroundColour__wxColourCR != NULL){
      return m_wxWindowBaseExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtSetId__wxWindowIDFunc m_wxWindowBaseExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxWindowBase::SetId(winid);
    if (*m_wxWindowBaseExtSetId__wxWindowID != NULL){
      return m_wxWindowBaseExtSetId__wxWindowID(this, winid);
    }
  }
  wxWindowBaseExtSetLabel__wxStringCRFunc m_wxWindowBaseExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    if (*m_wxWindowBaseExtSetLabel__wxStringCR != NULL){
      return m_wxWindowBaseExtSetLabel__wxStringCR(this, label);
    }
  }
  wxWindowBaseExtSetLayoutDirection__wxLayoutDirectionFunc m_wxWindowBaseExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxWindowBase::SetLayoutDirection(dir);
    if (*m_wxWindowBaseExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxWindowBaseExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxWindowBaseExtSetMaxClientSize__wxSizeCRFunc m_wxWindowBaseExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxWindowBase::SetMaxClientSize(size);
    if (*m_wxWindowBaseExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxWindowBaseExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxWindowBaseExtSetMaxSize__wxSizeCRFunc m_wxWindowBaseExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxWindowBase::SetMaxSize(maxSize);
    if (*m_wxWindowBaseExtSetMaxSize__wxSizeCR != NULL){
      return m_wxWindowBaseExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxWindowBaseExtSetMinClientSize__wxSizeCRFunc m_wxWindowBaseExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxWindowBase::SetMinClientSize(size);
    if (*m_wxWindowBaseExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxWindowBaseExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxWindowBaseExtSetMinSize__wxSizeCRFunc m_wxWindowBaseExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxWindowBase::SetMinSize(minSize);
    if (*m_wxWindowBaseExtSetMinSize__wxSizeCR != NULL){
      return m_wxWindowBaseExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxWindowBaseExtSetName__wxStringCRFunc m_wxWindowBaseExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxWindowBase::SetName(name);
    if (*m_wxWindowBaseExtSetName__wxStringCR != NULL){
      return m_wxWindowBaseExtSetName__wxStringCR(this, name);
    }
  }
  wxWindowBaseExtSetNextHandler__wxEvtHandlerPFunc m_wxWindowBaseExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxWindowBase::SetNextHandler(handler);
    if (*m_wxWindowBaseExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxWindowBaseExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxWindowBaseExtSetPreviousHandler__wxEvtHandlerPFunc m_wxWindowBaseExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxWindowBase::SetPreviousHandler(handler);
    if (*m_wxWindowBaseExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxWindowBaseExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxWindowBaseExtSetScrollPos__intintboolFunc m_wxWindowBaseExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    if (*m_wxWindowBaseExtSetScrollPos__intintbool != NULL){
      return m_wxWindowBaseExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxWindowBaseExtSetScrollbar__intintintintboolFunc m_wxWindowBaseExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbvisible, int range, bool refresh = true) override
  {
    if (*m_wxWindowBaseExtSetScrollbar__intintintintbool != NULL){
      return m_wxWindowBaseExtSetScrollbar__intintintintbool(this, orient, pos, thumbvisible, range, refresh);
    }
  }
  wxWindowBaseExtSetSizeConstraint__intintintintFunc m_wxWindowBaseExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxWindowBase::SetSizeConstraint(x, y, w, h);
    if (*m_wxWindowBaseExtSetSizeConstraint__intintintint != NULL){
      return m_wxWindowBaseExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxWindowBaseExtSetSizeHints__intintintintintintFunc m_wxWindowBaseExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxWindowBase::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxWindowBaseExtSetSizeHints__intintintintintint != NULL){
      return m_wxWindowBaseExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxWindowBaseExtSetThemeEnabled__boolFunc m_wxWindowBaseExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxWindowBase::SetThemeEnabled(enableTheme);
    if (*m_wxWindowBaseExtSetThemeEnabled__bool != NULL){
      return m_wxWindowBaseExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxWindowBaseExtSetTransparent__wxByteFunc m_wxWindowBaseExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxWindowBase::SetTransparent(alpha);
    if (*m_wxWindowBaseExtSetTransparent__wxByte != NULL){
      return m_wxWindowBaseExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtSetValidator__wxValidatorCRFunc m_wxWindowBaseExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxWindowBase::SetValidator(validator);
    if (*m_wxWindowBaseExtSetValidator__wxValidatorCR != NULL){
      return m_wxWindowBaseExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxWindowBaseExtSetWindowStyleFlag__longFunc m_wxWindowBaseExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxWindowBase::SetWindowStyleFlag(style);
    if (*m_wxWindowBaseExtSetWindowStyleFlag__long != NULL){
      return m_wxWindowBaseExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxWindowBaseExtShouldInheritColoursFunc m_wxWindowBaseExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxWindowBase::ShouldInheritColours();
    if (*m_wxWindowBaseExtShouldInheritColours != NULL){
      return m_wxWindowBaseExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtShow__boolFunc m_wxWindowBaseExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxWindowBase::Show(show);
    if (*m_wxWindowBaseExtShow__bool != NULL){
      return m_wxWindowBaseExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtShowWithEffect__wxShowEffectunsignedintFunc m_wxWindowBaseExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxWindowBase::ShowWithEffect(effect, timeout);
    if (*m_wxWindowBaseExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxWindowBaseExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtTransferDataFromWindowFunc m_wxWindowBaseExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxWindowBase::TransferDataFromWindow();
    if (*m_wxWindowBaseExtTransferDataFromWindow != NULL){
      return m_wxWindowBaseExtTransferDataFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtTransferDataToWindowFunc m_wxWindowBaseExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxWindowBase::TransferDataToWindow();
    if (*m_wxWindowBaseExtTransferDataToWindow != NULL){
      return m_wxWindowBaseExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtTryAfter__wxEventRFunc m_wxWindowBaseExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxWindowBase::TryAfter(event);
    if (*m_wxWindowBaseExtTryAfter__wxEventR != NULL){
      return m_wxWindowBaseExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtTryBefore__wxEventRFunc m_wxWindowBaseExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxWindowBase::TryBefore(event);
    if (*m_wxWindowBaseExtTryBefore__wxEventR != NULL){
      return m_wxWindowBaseExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtUnregisterHotKey__intFunc m_wxWindowBaseExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxWindowBase::UnregisterHotKey(hotkeyId);
    if (*m_wxWindowBaseExtUnregisterHotKey__int != NULL){
      return m_wxWindowBaseExtUnregisterHotKey__int(this, hotkeyId, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtUpdateFunc m_wxWindowBaseExtUpdate = NULL;
  virtual void Update() override
  {
    wxWindowBase::Update();
    if (*m_wxWindowBaseExtUpdate != NULL){
      return m_wxWindowBaseExtUpdate(this);
    }
  }
  wxWindowBaseExtUpdateWindowUI__longFunc m_wxWindowBaseExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxWindowBase::UpdateWindowUI(flags);
    if (*m_wxWindowBaseExtUpdateWindowUI__long != NULL){
      return m_wxWindowBaseExtUpdateWindowUI__long(this, flags);
    }
  }
  wxWindowBaseExtValidateFunc m_wxWindowBaseExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxWindowBase::Validate();
    if (*m_wxWindowBaseExtValidate != NULL){
      return m_wxWindowBaseExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxWindowBaseExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxWindowBase::WXAdjustFontToOwnPPI(font);
    if (*m_wxWindowBaseExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxWindowBaseExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxWindowBaseExtWXGetTextEntryFunc m_wxWindowBaseExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxWindowBase::WXGetTextEntry();
    if (*m_wxWindowBaseExtWXGetTextEntry != NULL){
      return m_wxWindowBaseExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtWXReservedEvtHandler1__voidPFunc m_wxWindowBaseExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxWindowBase::WXReservedEvtHandler1(param0);
    if (*m_wxWindowBaseExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxWindowBaseExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtWXReservedEvtHandler2__voidPFunc m_wxWindowBaseExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxWindowBase::WXReservedEvtHandler2(param0);
    if (*m_wxWindowBaseExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxWindowBaseExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtWXReservedWindow1__voidPFunc m_wxWindowBaseExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxWindowBase::WXReservedWindow1(param0);
    if (*m_wxWindowBaseExtWXReservedWindow1__voidP != NULL){
      return m_wxWindowBaseExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtWXReservedWindow2__voidPFunc m_wxWindowBaseExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxWindowBase::WXReservedWindow2(param0);
    if (*m_wxWindowBaseExtWXReservedWindow2__voidP != NULL){
      return m_wxWindowBaseExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtWXReservedWindow3__voidPFunc m_wxWindowBaseExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxWindowBase::WXReservedWindow3(param0);
    if (*m_wxWindowBaseExtWXReservedWindow3__voidP != NULL){
      return m_wxWindowBaseExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxWindowBaseExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxWindowBase::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxWindowBaseExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxWindowBaseExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxWindowBaseExtWarpPointer__intintFunc m_wxWindowBaseExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    if (*m_wxWindowBaseExtWarpPointer__intint != NULL){
      return m_wxWindowBaseExtWarpPointer__intint(this, x, y);
    }
  }
  wxWindowBaseExtWindowToClientSize__wxSizeCRFunc m_wxWindowBaseExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxWindowBase::WindowToClientSize(size);
    if (*m_wxWindowBaseExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxWindowBaseExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxWindowBaseExt(wxWindowBaseExtAcceptsFocusFunc a_AcceptsFocus, wxWindowBaseExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxWindowBaseExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxWindowBaseExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxWindowBaseExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxWindowBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxWindowBaseExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxWindowBaseExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxWindowBaseExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxWindowBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxWindowBaseExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxWindowBaseExtCanBeFocusedFunc a_CanBeFocused, wxWindowBaseExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxWindowBaseExtCanScroll__intFunc a_CanScroll__int, wxWindowBaseExtCanSetTransparentFunc a_CanSetTransparent, wxWindowBaseExtClearBackgroundFunc a_ClearBackground, wxWindowBaseExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxWindowBaseExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxWindowBaseExtCreateRefDataFunc a_CreateRefData, wxWindowBaseExtDestroyFunc a_Destroy, wxWindowBaseExtDissociateHandleFunc a_DissociateHandle, wxWindowBaseExtDoCaptureMouseFunc a_DoCaptureMouse, wxWindowBaseExtDoCentre__intFunc a_DoCentre__int, wxWindowBaseExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxWindowBaseExtDoEnable__boolFunc a_DoEnable__bool, wxWindowBaseExtDoFreezeFunc a_DoFreeze, wxWindowBaseExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxWindowBaseExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxWindowBaseExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxWindowBaseExtDoGetBestSizeFunc a_DoGetBestSize, wxWindowBaseExtDoGetClientDataFunc a_DoGetClientData, wxWindowBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxWindowBaseExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxWindowBaseExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxWindowBaseExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxWindowBaseExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxWindowBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxWindowBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxWindowBaseExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxWindowBaseExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxWindowBaseExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxWindowBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxWindowBaseExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxWindowBaseExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxWindowBaseExtDoPhase__intFunc a_DoPhase__int, wxWindowBaseExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxWindowBaseExtDoReleaseMouseFunc a_DoReleaseMouse, wxWindowBaseExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxWindowBaseExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxWindowBaseExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxWindowBaseExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxWindowBaseExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxWindowBaseExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxWindowBaseExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxWindowBaseExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxWindowBaseExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxWindowBaseExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxWindowBaseExtDoThawFunc a_DoThaw, wxWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxWindowBaseExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxWindowBaseExtEnable__boolFunc a_Enable__bool, wxWindowBaseExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxWindowBaseExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxWindowBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxWindowBaseExtFitFunc a_Fit, wxWindowBaseExtFitInsideFunc a_FitInside, wxWindowBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxWindowBaseExtGetCharHeightFunc a_GetCharHeight, wxWindowBaseExtGetCharWidthFunc a_GetCharWidth, wxWindowBaseExtGetClassInfoFunc a_GetClassInfo, wxWindowBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxWindowBaseExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxWindowBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxWindowBaseExtGetDPIFunc a_GetDPI, wxWindowBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxWindowBaseExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxWindowBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxWindowBaseExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxWindowBaseExtGetDropTargetFunc a_GetDropTarget, wxWindowBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxWindowBaseExtGetEventHashTableFunc a_GetEventHashTable, wxWindowBaseExtGetEventTableFunc a_GetEventTable, wxWindowBaseExtGetHandleFunc a_GetHandle, wxWindowBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxWindowBaseExtGetLabelFunc a_GetLabel, wxWindowBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxWindowBaseExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxWindowBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxWindowBaseExtGetMaxSizeFunc a_GetMaxSize, wxWindowBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxWindowBaseExtGetMinSizeFunc a_GetMinSize, wxWindowBaseExtGetNameFunc a_GetName, wxWindowBaseExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxWindowBaseExtGetScrollPos__intFunc a_GetScrollPos__int, wxWindowBaseExtGetScrollRange__intFunc a_GetScrollRange__int, wxWindowBaseExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxWindowBaseExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxWindowBaseExtGetThemeEnabledFunc a_GetThemeEnabled, wxWindowBaseExtGetValidatorFunc a_GetValidator, wxWindowBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxWindowBaseExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxWindowBaseExtHasCaptureFunc a_HasCapture, wxWindowBaseExtHasFocusFunc a_HasFocus, wxWindowBaseExtHasMultiplePagesFunc a_HasMultiplePages, wxWindowBaseExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxWindowBaseExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxWindowBaseExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxWindowBaseExtInheritAttributesFunc a_InheritAttributes, wxWindowBaseExtInitDialogFunc a_InitDialog, wxWindowBaseExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxWindowBaseExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxWindowBaseExtIsRetainedFunc a_IsRetained, wxWindowBaseExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxWindowBaseExtIsShownFunc a_IsShown, wxWindowBaseExtIsShownOnScreenFunc a_IsShownOnScreen, wxWindowBaseExtIsThisEnabledFunc a_IsThisEnabled, wxWindowBaseExtIsTopLevelFunc a_IsTopLevel, wxWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxWindowBaseExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxWindowBaseExtLayoutFunc a_Layout, wxWindowBaseExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxWindowBaseExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxWindowBaseExtLowerFunc a_Lower, wxWindowBaseExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxWindowBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxWindowBaseExtOnInternalIdleFunc a_OnInternalIdle, wxWindowBaseExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxWindowBaseExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxWindowBaseExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxWindowBaseExtRaiseFunc a_Raise, wxWindowBaseExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxWindowBaseExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxWindowBaseExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxWindowBaseExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxWindowBaseExtScrollLines__intFunc a_ScrollLines__int, wxWindowBaseExtScrollPages__intFunc a_ScrollPages__int, wxWindowBaseExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxWindowBaseExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxWindowBaseExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxWindowBaseExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxWindowBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxWindowBaseExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxWindowBaseExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxWindowBaseExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxWindowBaseExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxWindowBaseExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxWindowBaseExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxWindowBaseExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxWindowBaseExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxWindowBaseExtSetFocusFunc a_SetFocus, wxWindowBaseExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxWindowBaseExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxWindowBaseExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxWindowBaseExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxWindowBaseExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxWindowBaseExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxWindowBaseExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxWindowBaseExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxWindowBaseExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxWindowBaseExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxWindowBaseExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxWindowBaseExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxWindowBaseExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxWindowBaseExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxWindowBaseExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxWindowBaseExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxWindowBaseExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxWindowBaseExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxWindowBaseExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxWindowBaseExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxWindowBaseExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxWindowBaseExtShouldInheritColoursFunc a_ShouldInheritColours, wxWindowBaseExtShow__boolFunc a_Show__bool, wxWindowBaseExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxWindowBaseExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxWindowBaseExtTransferDataToWindowFunc a_TransferDataToWindow, wxWindowBaseExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxWindowBaseExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxWindowBaseExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxWindowBaseExtUpdateFunc a_Update, wxWindowBaseExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxWindowBaseExtValidateFunc a_Validate, wxWindowBaseExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxWindowBaseExtWXGetTextEntryFunc a_WXGetTextEntry, wxWindowBaseExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxWindowBaseExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxWindowBaseExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxWindowBaseExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxWindowBaseExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxWindowBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxWindowBaseExtWarpPointer__intintFunc a_WarpPointer__intint, wxWindowBaseExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxWindowBase() {
    m_wxWindowBaseExtAcceptsFocus = a_AcceptsFocus;
    m_wxWindowBaseExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxWindowBaseExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxWindowBaseExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxWindowBaseExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxWindowBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxWindowBaseExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxWindowBaseExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxWindowBaseExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxWindowBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxWindowBaseExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxWindowBaseExtCanBeFocused = a_CanBeFocused;
    m_wxWindowBaseExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxWindowBaseExtCanScroll__int = a_CanScroll__int;
    m_wxWindowBaseExtCanSetTransparent = a_CanSetTransparent;
    m_wxWindowBaseExtClearBackground = a_ClearBackground;
    m_wxWindowBaseExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxWindowBaseExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxWindowBaseExtCreateRefData = a_CreateRefData;
    m_wxWindowBaseExtDestroy = a_Destroy;
    m_wxWindowBaseExtDissociateHandle = a_DissociateHandle;
    m_wxWindowBaseExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxWindowBaseExtDoCentre__int = a_DoCentre__int;
    m_wxWindowBaseExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxWindowBaseExtDoEnable__bool = a_DoEnable__bool;
    m_wxWindowBaseExtDoFreeze = a_DoFreeze;
    m_wxWindowBaseExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxWindowBaseExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxWindowBaseExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxWindowBaseExtDoGetBestSize = a_DoGetBestSize;
    m_wxWindowBaseExtDoGetClientData = a_DoGetClientData;
    m_wxWindowBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxWindowBaseExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxWindowBaseExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxWindowBaseExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxWindowBaseExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxWindowBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxWindowBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxWindowBaseExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxWindowBaseExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxWindowBaseExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxWindowBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxWindowBaseExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxWindowBaseExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxWindowBaseExtDoPhase__int = a_DoPhase__int;
    m_wxWindowBaseExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxWindowBaseExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxWindowBaseExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxWindowBaseExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxWindowBaseExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxWindowBaseExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxWindowBaseExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxWindowBaseExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxWindowBaseExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxWindowBaseExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxWindowBaseExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxWindowBaseExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxWindowBaseExtDoThaw = a_DoThaw;
    m_wxWindowBaseExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxWindowBaseExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxWindowBaseExtEnable__bool = a_Enable__bool;
    m_wxWindowBaseExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxWindowBaseExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxWindowBaseExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxWindowBaseExtFit = a_Fit;
    m_wxWindowBaseExtFitInside = a_FitInside;
    m_wxWindowBaseExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxWindowBaseExtGetCharHeight = a_GetCharHeight;
    m_wxWindowBaseExtGetCharWidth = a_GetCharWidth;
    m_wxWindowBaseExtGetClassInfo = a_GetClassInfo;
    m_wxWindowBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxWindowBaseExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
    m_wxWindowBaseExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxWindowBaseExtGetDPI = a_GetDPI;
    m_wxWindowBaseExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxWindowBaseExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxWindowBaseExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxWindowBaseExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxWindowBaseExtGetDropTarget = a_GetDropTarget;
    m_wxWindowBaseExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxWindowBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxWindowBaseExtGetEventTable = a_GetEventTable;
    m_wxWindowBaseExtGetHandle = a_GetHandle;
    m_wxWindowBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxWindowBaseExtGetLabel = a_GetLabel;
    m_wxWindowBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxWindowBaseExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxWindowBaseExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxWindowBaseExtGetMaxSize = a_GetMaxSize;
    m_wxWindowBaseExtGetMinClientSize = a_GetMinClientSize;
    m_wxWindowBaseExtGetMinSize = a_GetMinSize;
    m_wxWindowBaseExtGetName = a_GetName;
    m_wxWindowBaseExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxWindowBaseExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxWindowBaseExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxWindowBaseExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxWindowBaseExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxWindowBaseExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxWindowBaseExtGetValidator = a_GetValidator;
    m_wxWindowBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxWindowBaseExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxWindowBaseExtHasCapture = a_HasCapture;
    m_wxWindowBaseExtHasFocus = a_HasFocus;
    m_wxWindowBaseExtHasMultiplePages = a_HasMultiplePages;
    m_wxWindowBaseExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxWindowBaseExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxWindowBaseExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxWindowBaseExtInheritAttributes = a_InheritAttributes;
    m_wxWindowBaseExtInitDialog = a_InitDialog;
    m_wxWindowBaseExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxWindowBaseExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxWindowBaseExtIsRetained = a_IsRetained;
    m_wxWindowBaseExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxWindowBaseExtIsShown = a_IsShown;
    m_wxWindowBaseExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxWindowBaseExtIsThisEnabled = a_IsThisEnabled;
    m_wxWindowBaseExtIsTopLevel = a_IsTopLevel;
    m_wxWindowBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxWindowBaseExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxWindowBaseExtLayout = a_Layout;
    m_wxWindowBaseExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxWindowBaseExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxWindowBaseExtLower = a_Lower;
    m_wxWindowBaseExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxWindowBaseExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxWindowBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxWindowBaseExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxWindowBaseExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxWindowBaseExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxWindowBaseExtRaise = a_Raise;
    m_wxWindowBaseExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxWindowBaseExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxWindowBaseExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxWindowBaseExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxWindowBaseExtScrollLines__int = a_ScrollLines__int;
    m_wxWindowBaseExtScrollPages__int = a_ScrollPages__int;
    m_wxWindowBaseExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxWindowBaseExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxWindowBaseExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxWindowBaseExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxWindowBaseExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxWindowBaseExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxWindowBaseExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxWindowBaseExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxWindowBaseExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxWindowBaseExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxWindowBaseExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxWindowBaseExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxWindowBaseExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxWindowBaseExtSetFocus = a_SetFocus;
    m_wxWindowBaseExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxWindowBaseExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxWindowBaseExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxWindowBaseExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxWindowBaseExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxWindowBaseExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxWindowBaseExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxWindowBaseExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxWindowBaseExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxWindowBaseExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxWindowBaseExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxWindowBaseExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxWindowBaseExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxWindowBaseExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxWindowBaseExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxWindowBaseExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxWindowBaseExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxWindowBaseExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxWindowBaseExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxWindowBaseExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxWindowBaseExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxWindowBaseExtShouldInheritColours = a_ShouldInheritColours;
    m_wxWindowBaseExtShow__bool = a_Show__bool;
    m_wxWindowBaseExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxWindowBaseExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxWindowBaseExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxWindowBaseExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxWindowBaseExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxWindowBaseExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxWindowBaseExtUpdate = a_Update;
    m_wxWindowBaseExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxWindowBaseExtValidate = a_Validate;
    m_wxWindowBaseExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxWindowBaseExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxWindowBaseExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxWindowBaseExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxWindowBaseExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxWindowBaseExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxWindowBaseExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxWindowBaseExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxWindowBaseExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxWindowBaseExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
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
  wxWindowExtAcceptsFocusFromKeyboardFunc m_wxWindowExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxWindow::AcceptsFocusFromKeyboard();
    if (*m_wxWindowExtAcceptsFocusFromKeyboard != NULL){
      return m_wxWindowExtAcceptsFocusFromKeyboard(this, res);
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
      return m_wxWindowExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtAddChild__wxWindowBasePFunc m_wxWindowExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxWindow::AddChild(child);
    if (*m_wxWindowExtAddChild__wxWindowBaseP != NULL){
      return m_wxWindowExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxWindowExtAddPendingEvent__wxEventCRFunc m_wxWindowExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxWindow::AddPendingEvent(event);
    if (*m_wxWindowExtAddPendingEvent__wxEventCR != NULL){
      return m_wxWindowExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxWindow::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtAdjustForParentClientOrigin__intRintRintFunc m_wxWindowExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxWindow::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxWindowExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxWindowExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxWindowExtAlwaysShowScrollbars__boolboolFunc m_wxWindowExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxWindow::AlwaysShowScrollbars(horz, vert);
    if (*m_wxWindowExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxWindowExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxWindowExtAssociateHandle__WXWidgetFunc m_wxWindowExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxWindow::AssociateHandle(handle);
    if (*m_wxWindowExtAssociateHandle__WXWidget != NULL){
      return m_wxWindowExtAssociateHandle__WXWidget(this, handle);
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
  wxWindowExtCanApplyThemeBorderFunc m_wxWindowExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxWindow::CanApplyThemeBorder();
    if (*m_wxWindowExtCanApplyThemeBorder != NULL){
      return m_wxWindowExtCanApplyThemeBorder(this, res);
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
      return m_wxWindowExtCanBeFocused(this, res);
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
      return m_wxWindowExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtCanScroll__intFunc m_wxWindowExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxWindow::CanScroll(orient);
    if (*m_wxWindowExtCanScroll__int != NULL){
      return m_wxWindowExtCanScroll__int(this, orient, res);
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
  wxWindowExtClientToWindowSize__wxSizeCRFunc m_wxWindowExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxWindow::ClientToWindowSize(size);
    if (*m_wxWindowExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxWindowExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtCloneRefData__wxObjectRefDataCPFunc m_wxWindowExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxWindow::CloneRefData(data);
    if (*m_wxWindowExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxWindowExtCloneRefData__wxObjectRefDataCP(this, data, res);
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
    if (*m_wxWindowExtDoCaptureMouse != NULL){
      return m_wxWindowExtDoCaptureMouse(this);
    }
  }
  wxWindowExtDoCentre__intFunc m_wxWindowExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxWindow::DoCentre(dir);
    if (*m_wxWindowExtDoCentre__int != NULL){
      return m_wxWindowExtDoCentre__int(this, dir);
    }
  }
  wxWindowExtDoClientToScreen__intPintPFunc m_wxWindowExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    if (*m_wxWindowExtDoClientToScreen__intPintP != NULL){
      return m_wxWindowExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxWindowExtDoEnable__boolFunc m_wxWindowExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxWindow::DoEnable(enable);
    if (*m_wxWindowExtDoEnable__bool != NULL){
      return m_wxWindowExtDoEnable__bool(this, enable);
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
  wxWindowExtDoGetBestClientHeight__intFunc m_wxWindowExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxWindow::DoGetBestClientHeight(width);
    if (*m_wxWindowExtDoGetBestClientHeight__int != NULL){
      return m_wxWindowExtDoGetBestClientHeight__int(this, width, res);
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
      return m_wxWindowExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetBestClientWidth__intFunc m_wxWindowExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxWindow::DoGetBestClientWidth(height);
    if (*m_wxWindowExtDoGetBestClientWidth__int != NULL){
      return m_wxWindowExtDoGetBestClientWidth__int(this, height, res);
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
      return m_wxWindowExtDoGetBestSize(this, res);
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
      return m_wxWindowExtDoGetClientData(this, res);
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
      return m_wxWindowExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetClientSize__intPintPFunc m_wxWindowExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    if (*m_wxWindowExtDoGetClientSize__intPintP != NULL){
      return m_wxWindowExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxWindowExtDoGetPosition__intPintPFunc m_wxWindowExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    if (*m_wxWindowExtDoGetPosition__intPintP != NULL){
      return m_wxWindowExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxWindowExtDoGetScreenPosition__intPintPFunc m_wxWindowExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxWindow::DoGetScreenPosition(x, y);
    if (*m_wxWindowExtDoGetScreenPosition__intPintP != NULL){
      return m_wxWindowExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxWindowExtDoGetSize__intPintPFunc m_wxWindowExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    if (*m_wxWindowExtDoGetSize__intPintP != NULL){
      return m_wxWindowExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxWindowExtDoGetSizeFromClientSize__wxSizeCRFunc m_wxWindowExtDoGetSizeFromClientSize__wxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxWindow::DoGetSizeFromClientSize(size);
    if (*m_wxWindowExtDoGetSizeFromClientSize__wxSizeCR != NULL){
      return m_wxWindowExtDoGetSizeFromClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* font = __null) const override
  {
    if (*m_wxWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, font);
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
  wxWindowExtDoHitTest__wxCoordwxCoordFunc m_wxWindowExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxWindow::DoHitTest(x, y);
    if (*m_wxWindowExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxWindowExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoIsExposed__intintintintFunc m_wxWindowExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxWindow::DoIsExposed(x, y, w, h);
    if (*m_wxWindowExtDoIsExposed__intintintint != NULL){
      return m_wxWindowExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoIsExposed__intintFunc m_wxWindowExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxWindow::DoIsExposed(x, y);
    if (*m_wxWindowExtDoIsExposed__intint != NULL){
      return m_wxWindowExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxWindow::DoMoveInTabOrder(win, move);
    if (*m_wxWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxWindowExtDoMoveWindow__intintintintFunc m_wxWindowExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    if (*m_wxWindowExtDoMoveWindow__intintintint != NULL){
      return m_wxWindowExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxWindowExtDoNavigateIn__intFunc m_wxWindowExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxWindow::DoNavigateIn(flags);
    if (*m_wxWindowExtDoNavigateIn__int != NULL){
      return m_wxWindowExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoPhase__intFunc m_wxWindowExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxWindow::DoPhase(phase);
    if (*m_wxWindowExtDoPhase__int != NULL){
      return m_wxWindowExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtDoPopupMenu__wxMenuPintintFunc m_wxWindowExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    if (*m_wxWindowExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxWindowExtDoPopupMenu__wxMenuPintint(this, menu, x, y);
    }
    else {
      return false;
    }
  }
  wxWindowExtDoReleaseMouseFunc m_wxWindowExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    if (*m_wxWindowExtDoReleaseMouse != NULL){
      return m_wxWindowExtDoReleaseMouse(this);
    }
  }
  wxWindowExtDoScreenToClient__intPintPFunc m_wxWindowExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    if (*m_wxWindowExtDoScreenToClient__intPintP != NULL){
      return m_wxWindowExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxWindowExtDoSetClientData__voidPFunc m_wxWindowExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxWindow::DoSetClientData(data);
    if (*m_wxWindowExtDoSetClientData__voidP != NULL){
      return m_wxWindowExtDoSetClientData__voidP(this, data);
    }
  }
  wxWindowExtDoSetClientObject__wxClientDataPFunc m_wxWindowExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxWindow::DoSetClientObject(data);
    if (*m_wxWindowExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxWindowExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxWindowExtDoSetClientSize__intintFunc m_wxWindowExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    if (*m_wxWindowExtDoSetClientSize__intint != NULL){
      return m_wxWindowExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxWindowExtDoSetSize__intintintintintFunc m_wxWindowExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    if (*m_wxWindowExtDoSetSize__intintintintint != NULL){
      return m_wxWindowExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxWindowExtDoSetSizeHints__intintintintintintFunc m_wxWindowExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxWindow::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxWindowExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxWindowExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxWindowExtDoSetToolTip__wxToolTipPFunc m_wxWindowExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxWindow::DoSetToolTip(tip);
    if (*m_wxWindowExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxWindowExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxWindowExtDoSetToolTipText__wxStringCRFunc m_wxWindowExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxWindow::DoSetToolTipText(tip);
    if (*m_wxWindowExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxWindowExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxWindowExtDoSetVirtualSize__intintFunc m_wxWindowExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxWindow::DoSetVirtualSize(x, y);
    if (*m_wxWindowExtDoSetVirtualSize__intint != NULL){
      return m_wxWindowExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxWindowExtDoSetWindowVariant__wxWindowVariantFunc m_wxWindowExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxWindow::DoSetWindowVariant(variant);
    if (*m_wxWindowExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxWindowExtDoSetWindowVariant__wxWindowVariant(this, variant);
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
  wxWindowExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxWindowExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxWindow::DoUpdateWindowUI(event);
    if (*m_wxWindowExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxWindowExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxWindowExtDragAcceptFiles__boolFunc m_wxWindowExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxWindow::DragAcceptFiles(accept);
    if (*m_wxWindowExtDragAcceptFiles__bool != NULL){
      return m_wxWindowExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxWindowExtEnable__boolFunc m_wxWindowExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxWindow::Enable(enable);
    if (*m_wxWindowExtEnable__bool != NULL){
      return m_wxWindowExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtEnableTouchEvents__intFunc m_wxWindowExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxWindow::EnableTouchEvents(eventsMask);
    if (*m_wxWindowExtEnableTouchEvents__int != NULL){
      return m_wxWindowExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtEnableVisibleFocus__boolFunc m_wxWindowExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxWindow::EnableVisibleFocus(enabled);
    if (*m_wxWindowExtEnableVisibleFocus__bool != NULL){
      return m_wxWindowExtEnableVisibleFocus__bool(this, enabled);
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
    if (*m_wxWindowExtGetCharHeight != NULL){
      return m_wxWindowExtGetCharHeight(this);
    }
    else {
      return 0;
    }
  }
  wxWindowExtGetCharWidthFunc m_wxWindowExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    if (*m_wxWindowExtGetCharWidth != NULL){
      return m_wxWindowExtGetCharWidth(this);
    }
    else {
      return 0;
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
  wxWindowExtGetClientSizeConstraint__intPintPFunc m_wxWindowExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxWindow::GetClientSizeConstraint(w, h);
    if (*m_wxWindowExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxWindowExtGetClientSizeConstraint__intPintP(this, w, h);
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
  wxWindowExtGetDefaultAttributesFunc m_wxWindowExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxWindow::GetDefaultAttributes();
    if (*m_wxWindowExtGetDefaultAttributes != NULL){
      return m_wxWindowExtGetDefaultAttributes(this, res);
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
      return m_wxWindowExtGetDefaultBorder(this, res);
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
      return m_wxWindowExtGetDefaultBorderForControl(this, res);
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
      return m_wxWindowExtGetDropTarget(this, res);
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
    if (*m_wxWindowExtGetHandle != NULL){
      return m_wxWindowExtGetHandle(this);
    }
    else {
      return NULL;
    }
  }
  wxWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxWindow::GetHelpTextAtPoint(pt, origin);
    if (*m_wxWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
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
  wxWindowExtGetMainWindowOfCompositeControlFunc m_wxWindowExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxWindow::GetMainWindowOfCompositeControl();
    if (*m_wxWindowExtGetMainWindowOfCompositeControl != NULL){
      return m_wxWindowExtGetMainWindowOfCompositeControl(this, res);
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
  wxWindowExtGetPositionConstraint__intPintPFunc m_wxWindowExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxWindow::GetPositionConstraint(x, y);
    if (*m_wxWindowExtGetPositionConstraint__intPintP != NULL){
      return m_wxWindowExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxWindowExtGetScrollPos__intFunc m_wxWindowExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    if (*m_wxWindowExtGetScrollPos__int != NULL){
      return m_wxWindowExtGetScrollPos__int(this, orient);
    }
    else {
      return 0;
    }
  }
  wxWindowExtGetScrollRange__intFunc m_wxWindowExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    if (*m_wxWindowExtGetScrollRange__int != NULL){
      return m_wxWindowExtGetScrollRange__int(this, orient);
    }
    else {
      return 0;
    }
  }
  wxWindowExtGetScrollThumb__intFunc m_wxWindowExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    if (*m_wxWindowExtGetScrollThumb__int != NULL){
      return m_wxWindowExtGetScrollThumb__int(this, orient);
    }
    else {
      return 0;
    }
  }
  wxWindowExtGetSizeConstraint__intPintPFunc m_wxWindowExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxWindow::GetSizeConstraint(w, h);
    if (*m_wxWindowExtGetSizeConstraint__intPintP != NULL){
      return m_wxWindowExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxWindowExtGetThemeEnabledFunc m_wxWindowExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxWindow::GetThemeEnabled();
    if (*m_wxWindowExtGetThemeEnabled != NULL){
      return m_wxWindowExtGetThemeEnabled(this, res);
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
  wxWindowExtGetValidatorFunc m_wxWindowExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxWindow::GetValidator();
    if (*m_wxWindowExtGetValidator != NULL){
      return m_wxWindowExtGetValidator(this, res);
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
  wxWindowExtGetWindowStyleFlagFunc m_wxWindowExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxWindow::GetWindowStyleFlag();
    if (*m_wxWindowExtGetWindowStyleFlag != NULL){
      return m_wxWindowExtGetWindowStyleFlag(this, res);
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
      return m_wxWindowExtHasCapture(this, res);
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
      return m_wxWindowExtHasFocus(this, res);
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
      return m_wxWindowExtHasMultiplePages(this, res);
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
      return m_wxWindowExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtHideWithEffect__wxShowEffectunsignedintFunc m_wxWindowExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxWindow::HideWithEffect(effect, timeout);
    if (*m_wxWindowExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxWindowExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtInformFirstDirection__intintintFunc m_wxWindowExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxWindow::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxWindowExtInformFirstDirection__intintint != NULL){
      return m_wxWindowExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
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
  wxWindowExtIsClientAreaChild__wxWindowCPFunc m_wxWindowExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxWindow::IsClientAreaChild(child);
    if (*m_wxWindowExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxWindowExtIsClientAreaChild__wxWindowCP(this, child, res);
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
  wxWindowExtIsRetainedFunc m_wxWindowExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxWindow::IsRetained();
    if (*m_wxWindowExtIsRetained != NULL){
      return m_wxWindowExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsScrollbarAlwaysShown__intFunc m_wxWindowExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxWindow::IsScrollbarAlwaysShown(orient);
    if (*m_wxWindowExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxWindowExtIsScrollbarAlwaysShown__int(this, orient, res);
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
      return m_wxWindowExtIsShown(this, res);
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
      return m_wxWindowExtIsShownOnScreen(this, res);
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
      return m_wxWindowExtIsThisEnabled(this, res);
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
      return m_wxWindowExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxWindow::IsTopNavigationDomain(kind);
    if (*m_wxWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtIsTransparentBackgroundSupported__wxStringPFunc m_wxWindowExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxWindow::IsTransparentBackgroundSupported(reason);
    if (*m_wxWindowExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxWindowExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
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
      return m_wxWindowExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtLayoutPhase1__intPFunc m_wxWindowExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxWindow::LayoutPhase1(noChanges);
    if (*m_wxWindowExtLayoutPhase1__intP != NULL){
      return m_wxWindowExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtLayoutPhase2__intPFunc m_wxWindowExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxWindow::LayoutPhase2(noChanges);
    if (*m_wxWindowExtLayoutPhase2__intP != NULL){
      return m_wxWindowExtLayoutPhase2__intP(this, noChanges, res);
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
  wxWindowExtMoveConstraint__intintFunc m_wxWindowExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxWindow::MoveConstraint(x, y);
    if (*m_wxWindowExtMoveConstraint__intint != NULL){
      return m_wxWindowExtMoveConstraint__intint(this, x, y);
    }
  }
  wxWindowExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxWindowExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxWindow::OnDynamicBind(entry);
    if (*m_wxWindowExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxWindowExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
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
  wxWindowExtPrepareDC__wxDCRFunc m_wxWindowExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxWindow::PrepareDC(dc);
    if (*m_wxWindowExtPrepareDC__wxDCR != NULL){
      return m_wxWindowExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxWindowExtProcessEvent__wxEventRFunc m_wxWindowExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxWindow::ProcessEvent(event);
    if (*m_wxWindowExtProcessEvent__wxEventR != NULL){
      return m_wxWindowExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtQueueEvent__wxEventPFunc m_wxWindowExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxWindow::QueueEvent(event);
    if (*m_wxWindowExtQueueEvent__wxEventP != NULL){
      return m_wxWindowExtQueueEvent__wxEventP(this, event);
    }
  }
  wxWindowExtRaiseFunc m_wxWindowExtRaise = NULL;
  virtual void Raise() override
  {
    if (*m_wxWindowExtRaise != NULL){
      return m_wxWindowExtRaise(this);
    }
  }
  wxWindowExtRefresh__boolwxRectCPFunc m_wxWindowExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = (const wxRect*)__null) override
  {
    if (*m_wxWindowExtRefresh__boolwxRectCP != NULL){
      return m_wxWindowExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxWindowExtRegisterHotKey__intintintFunc m_wxWindowExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxWindow::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxWindowExtRegisterHotKey__intintint != NULL){
      return m_wxWindowExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtRemoveChild__wxWindowBasePFunc m_wxWindowExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxWindow::RemoveChild(child);
    if (*m_wxWindowExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxWindowExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxWindowExtReparent__wxWindowBasePFunc m_wxWindowExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxWindow::Reparent(newParent);
    if (*m_wxWindowExtReparent__wxWindowBaseP != NULL){
      return m_wxWindowExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtScrollLines__intFunc m_wxWindowExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxWindow::ScrollLines(lines);
    if (*m_wxWindowExtScrollLines__int != NULL){
      return m_wxWindowExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtScrollPages__intFunc m_wxWindowExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxWindow::ScrollPages(pages);
    if (*m_wxWindowExtScrollPages__int != NULL){
      return m_wxWindowExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtScrollWindow__intintwxRectCPFunc m_wxWindowExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    if (*m_wxWindowExtScrollWindow__intintwxRectCP != NULL){
      return m_wxWindowExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxWindowExtSearchEventTable__wxEventTableRwxEventRFunc m_wxWindowExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxWindow::SearchEventTable(table, event);
    if (*m_wxWindowExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxWindowExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSendIdleEvents__wxIdleEventRFunc m_wxWindowExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxWindow::SendIdleEvents(event);
    if (*m_wxWindowExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxWindowExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSendSizeEvent__intFunc m_wxWindowExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxWindow::SendSizeEvent(flags);
    if (*m_wxWindowExtSendSizeEvent__int != NULL){
      return m_wxWindowExtSendSizeEvent__int(this, flags);
    }
  }
  wxWindowExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxWindowExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxWindow::SetAcceleratorTable(accel);
    if (*m_wxWindowExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxWindowExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxWindowExtSetBackgroundColour__wxColourCRFunc m_wxWindowExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxWindow::SetBackgroundColour(colour);
    if (*m_wxWindowExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxWindowExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxWindowExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxWindow::SetBackgroundStyle(style);
    if (*m_wxWindowExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxWindowExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetCanFocus__boolFunc m_wxWindowExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxWindow::SetCanFocus(canFocus);
    if (*m_wxWindowExtSetCanFocus__bool != NULL){
      return m_wxWindowExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxWindowExtSetConstraintSizes__boolFunc m_wxWindowExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxWindow::SetConstraintSizes(recurse);
    if (*m_wxWindowExtSetConstraintSizes__bool != NULL){
      return m_wxWindowExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxWindowExtSetCursor__wxCursorCRFunc m_wxWindowExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxWindow::SetCursor(cursor);
    if (*m_wxWindowExtSetCursor__wxCursorCR != NULL){
      return m_wxWindowExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetDoubleBuffered__boolFunc m_wxWindowExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxWindow::SetDoubleBuffered(on);
    if (*m_wxWindowExtSetDoubleBuffered__bool != NULL){
      return m_wxWindowExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxWindowExtSetDropTarget__wxDropTargetPFunc m_wxWindowExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    if (*m_wxWindowExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxWindowExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxWindowExtSetExtraStyle__longFunc m_wxWindowExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxWindow::SetExtraStyle(exStyle);
    if (*m_wxWindowExtSetExtraStyle__long != NULL){
      return m_wxWindowExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxWindowExtSetFocusFunc m_wxWindowExtSetFocus = NULL;
  virtual void SetFocus() override
  {
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
  wxWindowExtSetFont__wxFontCRFunc m_wxWindowExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    if (*m_wxWindowExtSetFont__wxFontCR != NULL){
      return m_wxWindowExtSetFont__wxFontCR(this, font);
    }
    else {
      return false;
    }
  }
  wxWindowExtSetForegroundColour__wxColourCRFunc m_wxWindowExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxWindow::SetForegroundColour(colour);
    if (*m_wxWindowExtSetForegroundColour__wxColourCR != NULL){
      return m_wxWindowExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetId__wxWindowIDFunc m_wxWindowExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxWindow::SetId(winid);
    if (*m_wxWindowExtSetId__wxWindowID != NULL){
      return m_wxWindowExtSetId__wxWindowID(this, winid);
    }
  }
  wxWindowExtSetLabel__wxStringCRFunc m_wxWindowExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    if (*m_wxWindowExtSetLabel__wxStringCR != NULL){
      return m_wxWindowExtSetLabel__wxStringCR(this, label);
    }
  }
  wxWindowExtSetLayoutDirection__wxLayoutDirectionFunc m_wxWindowExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxWindow::SetLayoutDirection(dir);
    if (*m_wxWindowExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxWindowExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxWindowExtSetMaxClientSize__wxSizeCRFunc m_wxWindowExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxWindow::SetMaxClientSize(size);
    if (*m_wxWindowExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxWindowExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxWindowExtSetMaxSize__wxSizeCRFunc m_wxWindowExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxWindow::SetMaxSize(maxSize);
    if (*m_wxWindowExtSetMaxSize__wxSizeCR != NULL){
      return m_wxWindowExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxWindowExtSetMinClientSize__wxSizeCRFunc m_wxWindowExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxWindow::SetMinClientSize(size);
    if (*m_wxWindowExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxWindowExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxWindowExtSetMinSize__wxSizeCRFunc m_wxWindowExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxWindow::SetMinSize(minSize);
    if (*m_wxWindowExtSetMinSize__wxSizeCR != NULL){
      return m_wxWindowExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxWindowExtSetName__wxStringCRFunc m_wxWindowExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxWindow::SetName(name);
    if (*m_wxWindowExtSetName__wxStringCR != NULL){
      return m_wxWindowExtSetName__wxStringCR(this, name);
    }
  }
  wxWindowExtSetNextHandler__wxEvtHandlerPFunc m_wxWindowExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxWindow::SetNextHandler(handler);
    if (*m_wxWindowExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxWindowExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxWindowExtSetPreviousHandler__wxEvtHandlerPFunc m_wxWindowExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxWindow::SetPreviousHandler(handler);
    if (*m_wxWindowExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxWindowExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxWindowExtSetScrollPos__intintboolFunc m_wxWindowExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    if (*m_wxWindowExtSetScrollPos__intintbool != NULL){
      return m_wxWindowExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxWindowExtSetScrollbar__intintintintboolFunc m_wxWindowExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbvisible, int range, bool refresh = true) override
  {
    if (*m_wxWindowExtSetScrollbar__intintintintbool != NULL){
      return m_wxWindowExtSetScrollbar__intintintintbool(this, orient, pos, thumbvisible, range, refresh);
    }
  }
  wxWindowExtSetSizeConstraint__intintintintFunc m_wxWindowExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxWindow::SetSizeConstraint(x, y, w, h);
    if (*m_wxWindowExtSetSizeConstraint__intintintint != NULL){
      return m_wxWindowExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxWindowExtSetSizeHints__intintintintintintFunc m_wxWindowExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxWindow::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxWindowExtSetSizeHints__intintintintintint != NULL){
      return m_wxWindowExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxWindowExtSetThemeEnabled__boolFunc m_wxWindowExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxWindow::SetThemeEnabled(enableTheme);
    if (*m_wxWindowExtSetThemeEnabled__bool != NULL){
      return m_wxWindowExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxWindowExtSetTransparent__wxByteFunc m_wxWindowExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxWindow::SetTransparent(alpha);
    if (*m_wxWindowExtSetTransparent__wxByte != NULL){
      return m_wxWindowExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtSetValidator__wxValidatorCRFunc m_wxWindowExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxWindow::SetValidator(validator);
    if (*m_wxWindowExtSetValidator__wxValidatorCR != NULL){
      return m_wxWindowExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxWindowExtSetWindowStyleFlag__longFunc m_wxWindowExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxWindow::SetWindowStyleFlag(style);
    if (*m_wxWindowExtSetWindowStyleFlag__long != NULL){
      return m_wxWindowExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxWindowExtShouldInheritColoursFunc m_wxWindowExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxWindow::ShouldInheritColours();
    if (*m_wxWindowExtShouldInheritColours != NULL){
      return m_wxWindowExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtShow__boolFunc m_wxWindowExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxWindow::Show(show);
    if (*m_wxWindowExtShow__bool != NULL){
      return m_wxWindowExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtShowWithEffect__wxShowEffectunsignedintFunc m_wxWindowExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxWindow::ShowWithEffect(effect, timeout);
    if (*m_wxWindowExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxWindowExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
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
      return m_wxWindowExtTransferDataFromWindow(this, res);
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
      return m_wxWindowExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtTriggerScrollEvent__wxEventTypeFunc m_wxWindowExtTriggerScrollEvent__wxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxWindow::TriggerScrollEvent(scrollEvent);
    if (*m_wxWindowExtTriggerScrollEvent__wxEventType != NULL){
      return m_wxWindowExtTriggerScrollEvent__wxEventType(this, scrollEvent);
    }
  }
  wxWindowExtTryAfter__wxEventRFunc m_wxWindowExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxWindow::TryAfter(event);
    if (*m_wxWindowExtTryAfter__wxEventR != NULL){
      return m_wxWindowExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtTryBefore__wxEventRFunc m_wxWindowExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxWindow::TryBefore(event);
    if (*m_wxWindowExtTryBefore__wxEventR != NULL){
      return m_wxWindowExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtUnregisterHotKey__intFunc m_wxWindowExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxWindow::UnregisterHotKey(hotkeyId);
    if (*m_wxWindowExtUnregisterHotKey__int != NULL){
      return m_wxWindowExtUnregisterHotKey__int(this, hotkeyId, res);
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
  wxWindowExtUpdateWindowUI__longFunc m_wxWindowExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxWindow::UpdateWindowUI(flags);
    if (*m_wxWindowExtUpdateWindowUI__long != NULL){
      return m_wxWindowExtUpdateWindowUI__long(this, flags);
    }
  }
  wxWindowExtValidateFunc m_wxWindowExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxWindow::Validate();
    if (*m_wxWindowExtValidate != NULL){
      return m_wxWindowExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxWindowExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxWindow::WXAdjustFontToOwnPPI(font);
    if (*m_wxWindowExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxWindowExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxWindowExtWXGetTextEntryFunc m_wxWindowExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxWindow::WXGetTextEntry();
    if (*m_wxWindowExtWXGetTextEntry != NULL){
      return m_wxWindowExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXReservedEvtHandler1__voidPFunc m_wxWindowExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxWindow::WXReservedEvtHandler1(param0);
    if (*m_wxWindowExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxWindowExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXReservedEvtHandler2__voidPFunc m_wxWindowExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxWindow::WXReservedEvtHandler2(param0);
    if (*m_wxWindowExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxWindowExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXReservedWindow1__voidPFunc m_wxWindowExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxWindow::WXReservedWindow1(param0);
    if (*m_wxWindowExtWXReservedWindow1__voidP != NULL){
      return m_wxWindowExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXReservedWindow2__voidPFunc m_wxWindowExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxWindow::WXReservedWindow2(param0);
    if (*m_wxWindowExtWXReservedWindow2__voidP != NULL){
      return m_wxWindowExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXReservedWindow3__voidPFunc m_wxWindowExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxWindow::WXReservedWindow3(param0);
    if (*m_wxWindowExtWXReservedWindow3__voidP != NULL){
      return m_wxWindowExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxWindowExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxWindowExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxWindow::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxWindowExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxWindowExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxWindowExtWarpPointer__intintFunc m_wxWindowExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    if (*m_wxWindowExtWarpPointer__intint != NULL){
      return m_wxWindowExtWarpPointer__intint(this, x, y);
    }
  }
  wxWindowExtWindowToClientSize__wxSizeCRFunc m_wxWindowExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxWindow::WindowToClientSize(size);
    if (*m_wxWindowExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxWindowExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxWindowExt(wxWindowExtAcceptsFocusFunc a_AcceptsFocus, wxWindowExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxWindowExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxWindowExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxWindowExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxWindowExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxWindowExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxWindowExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxWindowExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxWindowExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxWindowExtCanBeFocusedFunc a_CanBeFocused, wxWindowExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxWindowExtCanScroll__intFunc a_CanScroll__int, wxWindowExtCanSetTransparentFunc a_CanSetTransparent, wxWindowExtClearBackgroundFunc a_ClearBackground, wxWindowExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxWindowExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxWindowExtCreateRefDataFunc a_CreateRefData, wxWindowExtDestroyFunc a_Destroy, wxWindowExtDissociateHandleFunc a_DissociateHandle, wxWindowExtDoCaptureMouseFunc a_DoCaptureMouse, wxWindowExtDoCentre__intFunc a_DoCentre__int, wxWindowExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxWindowExtDoEnable__boolFunc a_DoEnable__bool, wxWindowExtDoFreezeFunc a_DoFreeze, wxWindowExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxWindowExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxWindowExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxWindowExtDoGetBestSizeFunc a_DoGetBestSize, wxWindowExtDoGetClientDataFunc a_DoGetClientData, wxWindowExtDoGetClientObjectFunc a_DoGetClientObject, wxWindowExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxWindowExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxWindowExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxWindowExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxWindowExtDoGetSizeFromClientSize__wxSizeCRFunc a_DoGetSizeFromClientSize__wxSizeCR, wxWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxWindowExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxWindowExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxWindowExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxWindowExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxWindowExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxWindowExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxWindowExtDoPhase__intFunc a_DoPhase__int, wxWindowExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxWindowExtDoReleaseMouseFunc a_DoReleaseMouse, wxWindowExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxWindowExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxWindowExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxWindowExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxWindowExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxWindowExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxWindowExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxWindowExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxWindowExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxWindowExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxWindowExtDoThawFunc a_DoThaw, wxWindowExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxWindowExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxWindowExtEnable__boolFunc a_Enable__bool, wxWindowExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxWindowExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxWindowExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxWindowExtFitFunc a_Fit, wxWindowExtFitInsideFunc a_FitInside, wxWindowExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxWindowExtGetCharHeightFunc a_GetCharHeight, wxWindowExtGetCharWidthFunc a_GetCharWidth, wxWindowExtGetClassInfoFunc a_GetClassInfo, wxWindowExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxWindowExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxWindowExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxWindowExtGetDPIFunc a_GetDPI, wxWindowExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxWindowExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxWindowExtGetDefaultBorderFunc a_GetDefaultBorder, wxWindowExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxWindowExtGetDropTargetFunc a_GetDropTarget, wxWindowExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxWindowExtGetEventHashTableFunc a_GetEventHashTable, wxWindowExtGetEventTableFunc a_GetEventTable, wxWindowExtGetHandleFunc a_GetHandle, wxWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxWindowExtGetLabelFunc a_GetLabel, wxWindowExtGetLayoutDirectionFunc a_GetLayoutDirection, wxWindowExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxWindowExtGetMaxClientSizeFunc a_GetMaxClientSize, wxWindowExtGetMaxSizeFunc a_GetMaxSize, wxWindowExtGetMinClientSizeFunc a_GetMinClientSize, wxWindowExtGetMinSizeFunc a_GetMinSize, wxWindowExtGetNameFunc a_GetName, wxWindowExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxWindowExtGetScrollPos__intFunc a_GetScrollPos__int, wxWindowExtGetScrollRange__intFunc a_GetScrollRange__int, wxWindowExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxWindowExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxWindowExtGetThemeEnabledFunc a_GetThemeEnabled, wxWindowExtGetTransparentFunc a_GetTransparent, wxWindowExtGetValidatorFunc a_GetValidator, wxWindowExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxWindowExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxWindowExtHasCaptureFunc a_HasCapture, wxWindowExtHasFocusFunc a_HasFocus, wxWindowExtHasMultiplePagesFunc a_HasMultiplePages, wxWindowExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxWindowExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxWindowExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxWindowExtInheritAttributesFunc a_InheritAttributes, wxWindowExtInitDialogFunc a_InitDialog, wxWindowExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxWindowExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxWindowExtIsRetainedFunc a_IsRetained, wxWindowExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxWindowExtIsShownFunc a_IsShown, wxWindowExtIsShownOnScreenFunc a_IsShownOnScreen, wxWindowExtIsThisEnabledFunc a_IsThisEnabled, wxWindowExtIsTopLevelFunc a_IsTopLevel, wxWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxWindowExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxWindowExtLayoutFunc a_Layout, wxWindowExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxWindowExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxWindowExtLowerFunc a_Lower, wxWindowExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxWindowExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxWindowExtOnInternalIdleFunc a_OnInternalIdle, wxWindowExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxWindowExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxWindowExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxWindowExtRaiseFunc a_Raise, wxWindowExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxWindowExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxWindowExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxWindowExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxWindowExtScrollLines__intFunc a_ScrollLines__int, wxWindowExtScrollPages__intFunc a_ScrollPages__int, wxWindowExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxWindowExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxWindowExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxWindowExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxWindowExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxWindowExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxWindowExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxWindowExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxWindowExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxWindowExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxWindowExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxWindowExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxWindowExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxWindowExtSetFocusFunc a_SetFocus, wxWindowExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxWindowExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxWindowExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxWindowExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxWindowExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxWindowExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxWindowExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxWindowExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxWindowExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxWindowExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxWindowExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxWindowExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxWindowExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxWindowExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxWindowExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxWindowExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxWindowExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxWindowExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxWindowExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxWindowExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxWindowExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxWindowExtShouldInheritColoursFunc a_ShouldInheritColours, wxWindowExtShow__boolFunc a_Show__bool, wxWindowExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxWindowExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxWindowExtTransferDataToWindowFunc a_TransferDataToWindow, wxWindowExtTriggerScrollEvent__wxEventTypeFunc a_TriggerScrollEvent__wxEventType, wxWindowExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxWindowExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxWindowExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxWindowExtUpdateFunc a_Update, wxWindowExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxWindowExtValidateFunc a_Validate, wxWindowExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxWindowExtWXGetTextEntryFunc a_WXGetTextEntry, wxWindowExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxWindowExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxWindowExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxWindowExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxWindowExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxWindowExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxWindowExtWarpPointer__intintFunc a_WarpPointer__intint, wxWindowExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxWindow() {
    m_wxWindowExtAcceptsFocus = a_AcceptsFocus;
    m_wxWindowExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxWindowExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxWindowExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxWindowExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxWindowExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxWindowExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxWindowExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxWindowExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxWindowExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxWindowExtCanBeFocused = a_CanBeFocused;
    m_wxWindowExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxWindowExtCanScroll__int = a_CanScroll__int;
    m_wxWindowExtCanSetTransparent = a_CanSetTransparent;
    m_wxWindowExtClearBackground = a_ClearBackground;
    m_wxWindowExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxWindowExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxWindowExtCreateRefData = a_CreateRefData;
    m_wxWindowExtDestroy = a_Destroy;
    m_wxWindowExtDissociateHandle = a_DissociateHandle;
    m_wxWindowExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxWindowExtDoCentre__int = a_DoCentre__int;
    m_wxWindowExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxWindowExtDoEnable__bool = a_DoEnable__bool;
    m_wxWindowExtDoFreeze = a_DoFreeze;
    m_wxWindowExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxWindowExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxWindowExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxWindowExtDoGetBestSize = a_DoGetBestSize;
    m_wxWindowExtDoGetClientData = a_DoGetClientData;
    m_wxWindowExtDoGetClientObject = a_DoGetClientObject;
    m_wxWindowExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxWindowExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxWindowExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxWindowExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxWindowExtDoGetSizeFromClientSize__wxSizeCR = a_DoGetSizeFromClientSize__wxSizeCR;
    m_wxWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxWindowExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxWindowExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxWindowExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxWindowExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxWindowExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxWindowExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxWindowExtDoPhase__int = a_DoPhase__int;
    m_wxWindowExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxWindowExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxWindowExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxWindowExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxWindowExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxWindowExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxWindowExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxWindowExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxWindowExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxWindowExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxWindowExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxWindowExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxWindowExtDoThaw = a_DoThaw;
    m_wxWindowExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxWindowExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxWindowExtEnable__bool = a_Enable__bool;
    m_wxWindowExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxWindowExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxWindowExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxWindowExtFit = a_Fit;
    m_wxWindowExtFitInside = a_FitInside;
    m_wxWindowExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxWindowExtGetCharHeight = a_GetCharHeight;
    m_wxWindowExtGetCharWidth = a_GetCharWidth;
    m_wxWindowExtGetClassInfo = a_GetClassInfo;
    m_wxWindowExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxWindowExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
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
    m_wxWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxWindowExtGetLabel = a_GetLabel;
    m_wxWindowExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxWindowExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxWindowExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxWindowExtGetMaxSize = a_GetMaxSize;
    m_wxWindowExtGetMinClientSize = a_GetMinClientSize;
    m_wxWindowExtGetMinSize = a_GetMinSize;
    m_wxWindowExtGetName = a_GetName;
    m_wxWindowExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxWindowExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxWindowExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxWindowExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxWindowExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxWindowExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxWindowExtGetTransparent = a_GetTransparent;
    m_wxWindowExtGetValidator = a_GetValidator;
    m_wxWindowExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxWindowExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxWindowExtHasCapture = a_HasCapture;
    m_wxWindowExtHasFocus = a_HasFocus;
    m_wxWindowExtHasMultiplePages = a_HasMultiplePages;
    m_wxWindowExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxWindowExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxWindowExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxWindowExtInheritAttributes = a_InheritAttributes;
    m_wxWindowExtInitDialog = a_InitDialog;
    m_wxWindowExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxWindowExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxWindowExtIsRetained = a_IsRetained;
    m_wxWindowExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxWindowExtIsShown = a_IsShown;
    m_wxWindowExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxWindowExtIsThisEnabled = a_IsThisEnabled;
    m_wxWindowExtIsTopLevel = a_IsTopLevel;
    m_wxWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxWindowExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxWindowExtLayout = a_Layout;
    m_wxWindowExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxWindowExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxWindowExtLower = a_Lower;
    m_wxWindowExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxWindowExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxWindowExtOnInternalIdle = a_OnInternalIdle;
    m_wxWindowExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxWindowExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxWindowExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxWindowExtRaise = a_Raise;
    m_wxWindowExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxWindowExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxWindowExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxWindowExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxWindowExtScrollLines__int = a_ScrollLines__int;
    m_wxWindowExtScrollPages__int = a_ScrollPages__int;
    m_wxWindowExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxWindowExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxWindowExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxWindowExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxWindowExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxWindowExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxWindowExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxWindowExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxWindowExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxWindowExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxWindowExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxWindowExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxWindowExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxWindowExtSetFocus = a_SetFocus;
    m_wxWindowExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxWindowExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxWindowExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxWindowExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxWindowExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxWindowExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxWindowExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxWindowExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxWindowExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxWindowExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxWindowExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxWindowExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxWindowExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxWindowExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxWindowExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxWindowExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxWindowExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxWindowExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxWindowExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxWindowExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxWindowExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxWindowExtShouldInheritColours = a_ShouldInheritColours;
    m_wxWindowExtShow__bool = a_Show__bool;
    m_wxWindowExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxWindowExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxWindowExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxWindowExtTriggerScrollEvent__wxEventType = a_TriggerScrollEvent__wxEventType;
    m_wxWindowExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxWindowExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxWindowExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxWindowExtUpdate = a_Update;
    m_wxWindowExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxWindowExtValidate = a_Validate;
    m_wxWindowExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxWindowExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxWindowExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxWindowExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxWindowExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxWindowExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxWindowExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxWindowExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxWindowExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxWindowExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
  }
};



#endif
