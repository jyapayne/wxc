#ifndef _WX_PANEL_H_EXT_
#define _WX_PANEL_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxNavigationEnabledWindowExt;
typedef bool (*wxNavigationEnabledWindowExtAcceptsFocusFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtAcceptsFocusFromKeyboardFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtAcceptsFocusRecursivelyFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef void (*wxNavigationEnabledWindowExtAddChild__wxWindowBasePFunc)(const wxNavigationEnabledWindowExt* self, wxWindowBase* child);
typedef void (*wxNavigationEnabledWindowExtAddPendingEvent__wxEventCRFunc)(const wxNavigationEnabledWindowExt* self, wxEvent const& event);
typedef wxCoord (*wxNavigationEnabledWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxNavigationEnabledWindowExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxNavigationEnabledWindowExtAdjustForParentClientOrigin__intRintRintFunc)(const wxNavigationEnabledWindowExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxNavigationEnabledWindowExtAlwaysShowScrollbars__boolboolFunc)(const wxNavigationEnabledWindowExt* self, bool horz, bool vert);
typedef void (*wxNavigationEnabledWindowExtAssociateHandle__WXWidgetFunc)(const wxNavigationEnabledWindowExt* self, WXWidget handle);
typedef bool (*wxNavigationEnabledWindowExtBeginRepositioningChildrenFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtCanApplyThemeBorderFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtCanBeFocusedFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtCanBeOutsideClientAreaFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtCanScroll__intFunc)(const wxNavigationEnabledWindowExt* self, int orient, bool res);
typedef bool (*wxNavigationEnabledWindowExtCanSetTransparentFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef void (*wxNavigationEnabledWindowExtClearBackgroundFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtClientToWindowSize__wxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxNavigationEnabledWindowExtCloneRefData__wxObjectRefDataCPFunc)(const wxNavigationEnabledWindowExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxNavigationEnabledWindowExtCreateRefDataFunc)(const wxNavigationEnabledWindowExt* self, wxObjectRefData* res);
typedef bool (*wxNavigationEnabledWindowExtDestroyFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef void (*wxNavigationEnabledWindowExtDissociateHandleFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtDoCaptureMouseFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtDoCentre__intFunc)(const wxNavigationEnabledWindowExt* self, int dir);
typedef void (*wxNavigationEnabledWindowExtDoClientToScreen__intPintPFunc)(const wxNavigationEnabledWindowExt* self, int* x, int* y);
typedef void (*wxNavigationEnabledWindowExtDoEnable__boolFunc)(const wxNavigationEnabledWindowExt* self, bool enable);
typedef void (*wxNavigationEnabledWindowExtDoFreezeFunc)(const wxNavigationEnabledWindowExt* self);
typedef int (*wxNavigationEnabledWindowExtDoGetBestClientHeight__intFunc)(const wxNavigationEnabledWindowExt* self, int width, int res);
typedef wxSize (*wxNavigationEnabledWindowExtDoGetBestClientSizeFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef int (*wxNavigationEnabledWindowExtDoGetBestClientWidth__intFunc)(const wxNavigationEnabledWindowExt* self, int height, int res);
typedef wxSize (*wxNavigationEnabledWindowExtDoGetBestSizeFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef void* (*wxNavigationEnabledWindowExtDoGetClientDataFunc)(const wxNavigationEnabledWindowExt* self, void* res);
typedef wxClientData* (*wxNavigationEnabledWindowExtDoGetClientObjectFunc)(const wxNavigationEnabledWindowExt* self, wxClientData* res);
typedef void (*wxNavigationEnabledWindowExtDoGetClientSize__intPintPFunc)(const wxNavigationEnabledWindowExt* self, int* width, int* height);
typedef void (*wxNavigationEnabledWindowExtDoGetPosition__intPintPFunc)(const wxNavigationEnabledWindowExt* self, int* x, int* y);
typedef void (*wxNavigationEnabledWindowExtDoGetScreenPosition__intPintPFunc)(const wxNavigationEnabledWindowExt* self, int* x, int* y);
typedef void (*wxNavigationEnabledWindowExtDoGetSize__intPintPFunc)(const wxNavigationEnabledWindowExt* self, int* width, int* height);
typedef wxSize (*wxNavigationEnabledWindowExtDoGetSizeFromClientSize__wxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& size, wxSize res);
typedef void (*wxNavigationEnabledWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxNavigationEnabledWindowExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxNavigationEnabledWindowExtDoGetVirtualSizeFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef wxHitTest (*wxNavigationEnabledWindowExtDoHitTest__wxCoordwxCoordFunc)(const wxNavigationEnabledWindowExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxNavigationEnabledWindowExtDoIsExposed__intintintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxNavigationEnabledWindowExtDoIsExposed__intintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y, bool res);
typedef void (*wxNavigationEnabledWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxNavigationEnabledWindowExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxNavigationEnabledWindowExtDoMoveWindow__intintintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y, int width, int height);
typedef bool (*wxNavigationEnabledWindowExtDoNavigateIn__intFunc)(const wxNavigationEnabledWindowExt* self, int flags, bool res);
typedef bool (*wxNavigationEnabledWindowExtDoPhase__intFunc)(const wxNavigationEnabledWindowExt* self, int phase, bool res);
typedef bool (*wxNavigationEnabledWindowExtDoPopupMenu__wxMenuPintintFunc)(const wxNavigationEnabledWindowExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxNavigationEnabledWindowExtDoReleaseMouseFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtDoScreenToClient__intPintPFunc)(const wxNavigationEnabledWindowExt* self, int* x, int* y);
typedef void (*wxNavigationEnabledWindowExtDoSetClientData__voidPFunc)(const wxNavigationEnabledWindowExt* self, void* data);
typedef void (*wxNavigationEnabledWindowExtDoSetClientObject__wxClientDataPFunc)(const wxNavigationEnabledWindowExt* self, wxClientData* data);
typedef void (*wxNavigationEnabledWindowExtDoSetClientSize__intintFunc)(const wxNavigationEnabledWindowExt* self, int width, int height);
typedef void (*wxNavigationEnabledWindowExtDoSetSize__intintintintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxNavigationEnabledWindowExtDoSetSizeHints__intintintintintintFunc)(const wxNavigationEnabledWindowExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxNavigationEnabledWindowExtDoSetToolTip__wxToolTipPFunc)(const wxNavigationEnabledWindowExt* self, wxToolTip* tip);
typedef void (*wxNavigationEnabledWindowExtDoSetToolTipText__wxStringCRFunc)(const wxNavigationEnabledWindowExt* self, wxString const& tip);
typedef void (*wxNavigationEnabledWindowExtDoSetVirtualSize__intintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y);
typedef void (*wxNavigationEnabledWindowExtDoSetWindowVariant__wxWindowVariantFunc)(const wxNavigationEnabledWindowExt* self, wxWindowVariant variant);
typedef void (*wxNavigationEnabledWindowExtDoThawFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxNavigationEnabledWindowExt* self, wxUpdateUIEvent& event);
typedef void (*wxNavigationEnabledWindowExtDragAcceptFiles__boolFunc)(const wxNavigationEnabledWindowExt* self, bool accept);
typedef bool (*wxNavigationEnabledWindowExtEnable__boolFunc)(const wxNavigationEnabledWindowExt* self, bool enable, bool res);
typedef bool (*wxNavigationEnabledWindowExtEnableTouchEvents__intFunc)(const wxNavigationEnabledWindowExt* self, int eventsMask, bool res);
typedef void (*wxNavigationEnabledWindowExtEnableVisibleFocus__boolFunc)(const wxNavigationEnabledWindowExt* self, bool enabled);
typedef void (*wxNavigationEnabledWindowExtEndRepositioningChildrenFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtFitFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtFitInsideFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtGetBestVirtualSizeFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef int (*wxNavigationEnabledWindowExtGetCharHeightFunc)(const wxNavigationEnabledWindowExt* self, int res);
typedef int (*wxNavigationEnabledWindowExtGetCharWidthFunc)(const wxNavigationEnabledWindowExt* self, int res);
typedef wxClassInfo* (*wxNavigationEnabledWindowExtGetClassInfoFunc)(const wxNavigationEnabledWindowExt* self, wxClassInfo* res);
typedef wxPoint (*wxNavigationEnabledWindowExtGetClientAreaOriginFunc)(const wxNavigationEnabledWindowExt* self, wxPoint res);
typedef void (*wxNavigationEnabledWindowExtGetClientSizeConstraint__intPintPFunc)(const wxNavigationEnabledWindowExt* self, int* w, int* h);
typedef double (*wxNavigationEnabledWindowExtGetContentScaleFactorFunc)(const wxNavigationEnabledWindowExt* self, double res);
typedef wxSize (*wxNavigationEnabledWindowExtGetDPIFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef double (*wxNavigationEnabledWindowExtGetDPIScaleFactorFunc)(const wxNavigationEnabledWindowExt* self, double res);
typedef wxVisualAttributes (*wxNavigationEnabledWindowExtGetDefaultAttributesFunc)(const wxNavigationEnabledWindowExt* self, wxVisualAttributes res);
typedef wxBorder (*wxNavigationEnabledWindowExtGetDefaultBorderFunc)(const wxNavigationEnabledWindowExt* self, wxBorder res);
typedef wxBorder (*wxNavigationEnabledWindowExtGetDefaultBorderForControlFunc)(const wxNavigationEnabledWindowExt* self, wxBorder res);
typedef wxDropTarget* (*wxNavigationEnabledWindowExtGetDropTargetFunc)(const wxNavigationEnabledWindowExt* self, wxDropTarget* res);
typedef wxSize (*wxNavigationEnabledWindowExtGetEffectiveMinSizeFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef wxEventHashTable& (*wxNavigationEnabledWindowExtGetEventHashTableFunc)(const wxNavigationEnabledWindowExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxNavigationEnabledWindowExtGetEventTableFunc)(const wxNavigationEnabledWindowExt* self, wxEventTable const* res);
typedef WXWidget (*wxNavigationEnabledWindowExtGetHandleFunc)(const wxNavigationEnabledWindowExt* self, WXWidget res);
typedef wxString (*wxNavigationEnabledWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxNavigationEnabledWindowExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxNavigationEnabledWindowExtGetLabelFunc)(const wxNavigationEnabledWindowExt* self, wxString res);
typedef wxLayoutDirection (*wxNavigationEnabledWindowExtGetLayoutDirectionFunc)(const wxNavigationEnabledWindowExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxNavigationEnabledWindowExtGetMainWindowOfCompositeControlFunc)(const wxNavigationEnabledWindowExt* self, wxWindow* res);
typedef wxSize (*wxNavigationEnabledWindowExtGetMaxClientSizeFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef wxSize (*wxNavigationEnabledWindowExtGetMaxSizeFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef wxSize (*wxNavigationEnabledWindowExtGetMinClientSizeFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef wxSize (*wxNavigationEnabledWindowExtGetMinSizeFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef wxString (*wxNavigationEnabledWindowExtGetNameFunc)(const wxNavigationEnabledWindowExt* self, wxString res);
typedef void (*wxNavigationEnabledWindowExtGetPositionConstraint__intPintPFunc)(const wxNavigationEnabledWindowExt* self, int* x, int* y);
typedef int (*wxNavigationEnabledWindowExtGetScrollPos__intFunc)(const wxNavigationEnabledWindowExt* self, int orient, int res);
typedef int (*wxNavigationEnabledWindowExtGetScrollRange__intFunc)(const wxNavigationEnabledWindowExt* self, int orient, int res);
typedef int (*wxNavigationEnabledWindowExtGetScrollThumb__intFunc)(const wxNavigationEnabledWindowExt* self, int orient, int res);
typedef void (*wxNavigationEnabledWindowExtGetSizeConstraint__intPintPFunc)(const wxNavigationEnabledWindowExt* self, int* w, int* h);
typedef bool (*wxNavigationEnabledWindowExtGetThemeEnabledFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef wxByte (*wxNavigationEnabledWindowExtGetTransparentFunc)(const wxNavigationEnabledWindowExt* self, wxByte res);
typedef wxValidator* (*wxNavigationEnabledWindowExtGetValidatorFunc)(const wxNavigationEnabledWindowExt* self, wxValidator* res);
typedef wxSize (*wxNavigationEnabledWindowExtGetWindowBorderSizeFunc)(const wxNavigationEnabledWindowExt* self, wxSize res);
typedef long (*wxNavigationEnabledWindowExtGetWindowStyleFlagFunc)(const wxNavigationEnabledWindowExt* self, long res);
typedef bool (*wxNavigationEnabledWindowExtHasCaptureFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtHasFocusFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtHasMultiplePagesFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtHasTransparentBackgroundFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxNavigationEnabledWindowExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxNavigationEnabledWindowExtInformFirstDirection__intintintFunc)(const wxNavigationEnabledWindowExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxNavigationEnabledWindowExtInheritAttributesFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtInitDialogFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtIsClientAreaChild__wxWindowCPFunc)(const wxNavigationEnabledWindowExt* self, wxWindow const* child, bool res);
typedef bool (*wxNavigationEnabledWindowExtIsDoubleBufferedFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtIsRetainedFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtIsScrollbarAlwaysShown__intFunc)(const wxNavigationEnabledWindowExt* self, int orient, bool res);
typedef bool (*wxNavigationEnabledWindowExtIsShownFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtIsShownOnScreenFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtIsThisEnabledFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtIsTopLevelFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxNavigationEnabledWindowExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxNavigationEnabledWindowExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxNavigationEnabledWindowExt* self, wxString* reason, bool res);
typedef bool (*wxNavigationEnabledWindowExtLayoutFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtLayoutPhase1__intPFunc)(const wxNavigationEnabledWindowExt* self, int* noChanges, bool res);
typedef bool (*wxNavigationEnabledWindowExtLayoutPhase2__intPFunc)(const wxNavigationEnabledWindowExt* self, int* noChanges, bool res);
typedef void (*wxNavigationEnabledWindowExtLowerFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtMoveConstraint__intintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y);
typedef bool (*wxNavigationEnabledWindowExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxNavigationEnabledWindowExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxNavigationEnabledWindowExtOnInternalIdleFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtPrepareDC__wxDCRFunc)(const wxNavigationEnabledWindowExt* self, wxDC& dc);
typedef bool (*wxNavigationEnabledWindowExtProcessEvent__wxEventRFunc)(const wxNavigationEnabledWindowExt* self, wxEvent& event, bool res);
typedef void (*wxNavigationEnabledWindowExtQueueEvent__wxEventPFunc)(const wxNavigationEnabledWindowExt* self, wxEvent* event);
typedef void (*wxNavigationEnabledWindowExtRaiseFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtRefresh__boolwxRectCPFunc)(const wxNavigationEnabledWindowExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxNavigationEnabledWindowExtRegisterHotKey__intintintFunc)(const wxNavigationEnabledWindowExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxNavigationEnabledWindowExtRemoveChild__wxWindowBasePFunc)(const wxNavigationEnabledWindowExt* self, wxWindowBase* child);
typedef bool (*wxNavigationEnabledWindowExtReparent__wxWindowBasePFunc)(const wxNavigationEnabledWindowExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxNavigationEnabledWindowExtScrollLines__intFunc)(const wxNavigationEnabledWindowExt* self, int lines, bool res);
typedef bool (*wxNavigationEnabledWindowExtScrollPages__intFunc)(const wxNavigationEnabledWindowExt* self, int pages, bool res);
typedef void (*wxNavigationEnabledWindowExtScrollWindow__intintwxRectCPFunc)(const wxNavigationEnabledWindowExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxNavigationEnabledWindowExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxNavigationEnabledWindowExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxNavigationEnabledWindowExtSendIdleEvents__wxIdleEventRFunc)(const wxNavigationEnabledWindowExt* self, wxIdleEvent& event, bool res);
typedef void (*wxNavigationEnabledWindowExtSendSizeEvent__intFunc)(const wxNavigationEnabledWindowExt* self, int flags);
typedef void (*wxNavigationEnabledWindowExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxNavigationEnabledWindowExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxNavigationEnabledWindowExtSetBackgroundColour__wxColourCRFunc)(const wxNavigationEnabledWindowExt* self, wxColour const& colour, bool res);
typedef bool (*wxNavigationEnabledWindowExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxNavigationEnabledWindowExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxNavigationEnabledWindowExtSetCanFocus__boolFunc)(const wxNavigationEnabledWindowExt* self, bool canFocus);
typedef void (*wxNavigationEnabledWindowExtSetConstraintSizes__boolFunc)(const wxNavigationEnabledWindowExt* self, bool recurse);
typedef bool (*wxNavigationEnabledWindowExtSetCursor__wxCursorCRFunc)(const wxNavigationEnabledWindowExt* self, wxCursor const& cursor, bool res);
typedef void (*wxNavigationEnabledWindowExtSetDoubleBuffered__boolFunc)(const wxNavigationEnabledWindowExt* self, bool on);
typedef void (*wxNavigationEnabledWindowExtSetDropTarget__wxDropTargetPFunc)(const wxNavigationEnabledWindowExt* self, wxDropTarget* dropTarget);
typedef void (*wxNavigationEnabledWindowExtSetExtraStyle__longFunc)(const wxNavigationEnabledWindowExt* self, long exStyle);
typedef void (*wxNavigationEnabledWindowExtSetFocusFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtSetFocusFromKbdFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtSetFont__wxFontCRFunc)(const wxNavigationEnabledWindowExt* self, wxFont const& font, bool res);
typedef bool (*wxNavigationEnabledWindowExtSetForegroundColour__wxColourCRFunc)(const wxNavigationEnabledWindowExt* self, wxColour const& colour, bool res);
typedef void (*wxNavigationEnabledWindowExtSetId__wxWindowIDFunc)(const wxNavigationEnabledWindowExt* self, wxWindowID winid);
typedef void (*wxNavigationEnabledWindowExtSetLabel__wxStringCRFunc)(const wxNavigationEnabledWindowExt* self, wxString const& label);
typedef void (*wxNavigationEnabledWindowExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxNavigationEnabledWindowExt* self, wxLayoutDirection dir);
typedef void (*wxNavigationEnabledWindowExtSetMaxClientSize__wxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& size);
typedef void (*wxNavigationEnabledWindowExtSetMaxSize__wxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& maxSize);
typedef void (*wxNavigationEnabledWindowExtSetMinClientSize__wxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& size);
typedef void (*wxNavigationEnabledWindowExtSetMinSize__wxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& minSize);
typedef void (*wxNavigationEnabledWindowExtSetName__wxStringCRFunc)(const wxNavigationEnabledWindowExt* self, wxString const& name);
typedef void (*wxNavigationEnabledWindowExtSetNextHandler__wxEvtHandlerPFunc)(const wxNavigationEnabledWindowExt* self, wxEvtHandler* handler);
typedef void (*wxNavigationEnabledWindowExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxNavigationEnabledWindowExt* self, wxEvtHandler* handler);
typedef void (*wxNavigationEnabledWindowExtSetScrollPos__intintboolFunc)(const wxNavigationEnabledWindowExt* self, int orient, int pos, bool refresh);
typedef void (*wxNavigationEnabledWindowExtSetScrollbar__intintintintboolFunc)(const wxNavigationEnabledWindowExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxNavigationEnabledWindowExtSetSizeConstraint__intintintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y, int w, int h);
typedef void (*wxNavigationEnabledWindowExtSetSizeHints__intintintintintintFunc)(const wxNavigationEnabledWindowExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxNavigationEnabledWindowExtSetThemeEnabled__boolFunc)(const wxNavigationEnabledWindowExt* self, bool enableTheme);
typedef bool (*wxNavigationEnabledWindowExtSetTransparent__wxByteFunc)(const wxNavigationEnabledWindowExt* self, wxByte alpha, bool res);
typedef void (*wxNavigationEnabledWindowExtSetValidator__wxValidatorCRFunc)(const wxNavigationEnabledWindowExt* self, wxValidator const& validator);
typedef void (*wxNavigationEnabledWindowExtSetWindowStyleFlag__longFunc)(const wxNavigationEnabledWindowExt* self, long style);
typedef bool (*wxNavigationEnabledWindowExtShouldInheritColoursFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtShow__boolFunc)(const wxNavigationEnabledWindowExt* self, bool show, bool res);
typedef bool (*wxNavigationEnabledWindowExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxNavigationEnabledWindowExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxNavigationEnabledWindowExtTransferDataFromWindowFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef bool (*wxNavigationEnabledWindowExtTransferDataToWindowFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef void (*wxNavigationEnabledWindowExtTriggerScrollEvent__wxEventTypeFunc)(const wxNavigationEnabledWindowExt* self, wxEventType scrollEvent);
typedef bool (*wxNavigationEnabledWindowExtTryAfter__wxEventRFunc)(const wxNavigationEnabledWindowExt* self, wxEvent& event, bool res);
typedef bool (*wxNavigationEnabledWindowExtTryBefore__wxEventRFunc)(const wxNavigationEnabledWindowExt* self, wxEvent& event, bool res);
typedef bool (*wxNavigationEnabledWindowExtUnregisterHotKey__intFunc)(const wxNavigationEnabledWindowExt* self, int hotkeyId, bool res);
typedef void (*wxNavigationEnabledWindowExtUpdateFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtUpdateWindowUI__longFunc)(const wxNavigationEnabledWindowExt* self, long flags);
typedef bool (*wxNavigationEnabledWindowExtValidateFunc)(const wxNavigationEnabledWindowExt* self, bool res);
typedef void (*wxNavigationEnabledWindowExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxNavigationEnabledWindowExt* self, wxFont& font);
typedef wxTextEntry const* (*wxNavigationEnabledWindowExtWXGetTextEntryFunc)(const wxNavigationEnabledWindowExt* self, wxTextEntry const* res);
typedef void* (*wxNavigationEnabledWindowExtWXReservedEvtHandler1__voidPFunc)(const wxNavigationEnabledWindowExt* self, void* param0, void* res);
typedef void* (*wxNavigationEnabledWindowExtWXReservedEvtHandler2__voidPFunc)(const wxNavigationEnabledWindowExt* self, void* param0, void* res);
typedef void* (*wxNavigationEnabledWindowExtWXReservedWindow1__voidPFunc)(const wxNavigationEnabledWindowExt* self, void* param0, void* res);
typedef void* (*wxNavigationEnabledWindowExtWXReservedWindow2__voidPFunc)(const wxNavigationEnabledWindowExt* self, void* param0, void* res);
typedef void* (*wxNavigationEnabledWindowExtWXReservedWindow3__voidPFunc)(const wxNavigationEnabledWindowExt* self, void* param0, void* res);
typedef void (*wxNavigationEnabledWindowExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxNavigationEnabledWindowExt* self, int flags, wxSizer* sizer);
typedef void (*wxNavigationEnabledWindowExtWarpPointer__intintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y);
typedef wxSize (*wxNavigationEnabledWindowExtWindowToClientSize__wxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& size, wxSize res);
class wxPanelBaseExt;
typedef bool (*wxPanelBaseExtAcceptsFocusFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtAcceptsFocusFromKeyboardFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtAcceptsFocusRecursivelyFunc)(const wxPanelBaseExt* self, bool res);
typedef void (*wxPanelBaseExtAddChild__wxWindowBasePFunc)(const wxPanelBaseExt* self, wxWindowBase* child);
typedef void (*wxPanelBaseExtAddPendingEvent__wxEventCRFunc)(const wxPanelBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxPanelBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxPanelBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxPanelBaseExtAdjustForParentClientOrigin__intRintRintFunc)(const wxPanelBaseExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxPanelBaseExtAlwaysShowScrollbars__boolboolFunc)(const wxPanelBaseExt* self, bool horz, bool vert);
typedef void (*wxPanelBaseExtAssociateHandle__WXWidgetFunc)(const wxPanelBaseExt* self, WXWidget handle);
typedef bool (*wxPanelBaseExtBeginRepositioningChildrenFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtCanApplyThemeBorderFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtCanBeFocusedFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtCanBeOutsideClientAreaFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtCanScroll__intFunc)(const wxPanelBaseExt* self, int orient, bool res);
typedef bool (*wxPanelBaseExtCanSetTransparentFunc)(const wxPanelBaseExt* self, bool res);
typedef void (*wxPanelBaseExtClearBackgroundFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtClientToWindowSize__wxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxPanelBaseExtCloneRefData__wxObjectRefDataCPFunc)(const wxPanelBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxPanelBaseExtCreateRefDataFunc)(const wxPanelBaseExt* self, wxObjectRefData* res);
typedef bool (*wxPanelBaseExtDestroyFunc)(const wxPanelBaseExt* self, bool res);
typedef void (*wxPanelBaseExtDissociateHandleFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtDoCaptureMouseFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtDoCentre__intFunc)(const wxPanelBaseExt* self, int dir);
typedef void (*wxPanelBaseExtDoClientToScreen__intPintPFunc)(const wxPanelBaseExt* self, int* x, int* y);
typedef void (*wxPanelBaseExtDoEnable__boolFunc)(const wxPanelBaseExt* self, bool enable);
typedef void (*wxPanelBaseExtDoFreezeFunc)(const wxPanelBaseExt* self);
typedef int (*wxPanelBaseExtDoGetBestClientHeight__intFunc)(const wxPanelBaseExt* self, int width, int res);
typedef wxSize (*wxPanelBaseExtDoGetBestClientSizeFunc)(const wxPanelBaseExt* self, wxSize res);
typedef int (*wxPanelBaseExtDoGetBestClientWidth__intFunc)(const wxPanelBaseExt* self, int height, int res);
typedef wxSize (*wxPanelBaseExtDoGetBestSizeFunc)(const wxPanelBaseExt* self, wxSize res);
typedef void* (*wxPanelBaseExtDoGetClientDataFunc)(const wxPanelBaseExt* self, void* res);
typedef wxClientData* (*wxPanelBaseExtDoGetClientObjectFunc)(const wxPanelBaseExt* self, wxClientData* res);
typedef void (*wxPanelBaseExtDoGetClientSize__intPintPFunc)(const wxPanelBaseExt* self, int* width, int* height);
typedef void (*wxPanelBaseExtDoGetPosition__intPintPFunc)(const wxPanelBaseExt* self, int* x, int* y);
typedef void (*wxPanelBaseExtDoGetScreenPosition__intPintPFunc)(const wxPanelBaseExt* self, int* x, int* y);
typedef void (*wxPanelBaseExtDoGetSize__intPintPFunc)(const wxPanelBaseExt* self, int* width, int* height);
typedef wxSize (*wxPanelBaseExtDoGetSizeFromClientSize__wxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& size, wxSize res);
typedef void (*wxPanelBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxPanelBaseExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxPanelBaseExtDoGetVirtualSizeFunc)(const wxPanelBaseExt* self, wxSize res);
typedef wxHitTest (*wxPanelBaseExtDoHitTest__wxCoordwxCoordFunc)(const wxPanelBaseExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxPanelBaseExtDoIsExposed__intintintintFunc)(const wxPanelBaseExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxPanelBaseExtDoIsExposed__intintFunc)(const wxPanelBaseExt* self, int x, int y, bool res);
typedef void (*wxPanelBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxPanelBaseExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxPanelBaseExtDoMoveWindow__intintintintFunc)(const wxPanelBaseExt* self, int x, int y, int width, int height);
typedef bool (*wxPanelBaseExtDoNavigateIn__intFunc)(const wxPanelBaseExt* self, int flags, bool res);
typedef bool (*wxPanelBaseExtDoPhase__intFunc)(const wxPanelBaseExt* self, int phase, bool res);
typedef bool (*wxPanelBaseExtDoPopupMenu__wxMenuPintintFunc)(const wxPanelBaseExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxPanelBaseExtDoReleaseMouseFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtDoScreenToClient__intPintPFunc)(const wxPanelBaseExt* self, int* x, int* y);
typedef void (*wxPanelBaseExtDoSetClientData__voidPFunc)(const wxPanelBaseExt* self, void* data);
typedef void (*wxPanelBaseExtDoSetClientObject__wxClientDataPFunc)(const wxPanelBaseExt* self, wxClientData* data);
typedef void (*wxPanelBaseExtDoSetClientSize__intintFunc)(const wxPanelBaseExt* self, int width, int height);
typedef void (*wxPanelBaseExtDoSetSize__intintintintintFunc)(const wxPanelBaseExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxPanelBaseExtDoSetSizeHints__intintintintintintFunc)(const wxPanelBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxPanelBaseExtDoSetToolTip__wxToolTipPFunc)(const wxPanelBaseExt* self, wxToolTip* tip);
typedef void (*wxPanelBaseExtDoSetToolTipText__wxStringCRFunc)(const wxPanelBaseExt* self, wxString const& tip);
typedef void (*wxPanelBaseExtDoSetVirtualSize__intintFunc)(const wxPanelBaseExt* self, int x, int y);
typedef void (*wxPanelBaseExtDoSetWindowVariant__wxWindowVariantFunc)(const wxPanelBaseExt* self, wxWindowVariant variant);
typedef void (*wxPanelBaseExtDoThawFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxPanelBaseExt* self, wxUpdateUIEvent& event);
typedef void (*wxPanelBaseExtDragAcceptFiles__boolFunc)(const wxPanelBaseExt* self, bool accept);
typedef bool (*wxPanelBaseExtEnable__boolFunc)(const wxPanelBaseExt* self, bool enable, bool res);
typedef bool (*wxPanelBaseExtEnableTouchEvents__intFunc)(const wxPanelBaseExt* self, int eventsMask, bool res);
typedef void (*wxPanelBaseExtEnableVisibleFocus__boolFunc)(const wxPanelBaseExt* self, bool enabled);
typedef void (*wxPanelBaseExtEndRepositioningChildrenFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtFitFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtFitInsideFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtGetBestVirtualSizeFunc)(const wxPanelBaseExt* self, wxSize res);
typedef int (*wxPanelBaseExtGetCharHeightFunc)(const wxPanelBaseExt* self, int res);
typedef int (*wxPanelBaseExtGetCharWidthFunc)(const wxPanelBaseExt* self, int res);
typedef wxClassInfo* (*wxPanelBaseExtGetClassInfoFunc)(const wxPanelBaseExt* self, wxClassInfo* res);
typedef wxPoint (*wxPanelBaseExtGetClientAreaOriginFunc)(const wxPanelBaseExt* self, wxPoint res);
typedef void (*wxPanelBaseExtGetClientSizeConstraint__intPintPFunc)(const wxPanelBaseExt* self, int* w, int* h);
typedef double (*wxPanelBaseExtGetContentScaleFactorFunc)(const wxPanelBaseExt* self, double res);
typedef wxSize (*wxPanelBaseExtGetDPIFunc)(const wxPanelBaseExt* self, wxSize res);
typedef double (*wxPanelBaseExtGetDPIScaleFactorFunc)(const wxPanelBaseExt* self, double res);
typedef wxVisualAttributes (*wxPanelBaseExtGetDefaultAttributesFunc)(const wxPanelBaseExt* self, wxVisualAttributes res);
typedef wxBorder (*wxPanelBaseExtGetDefaultBorderFunc)(const wxPanelBaseExt* self, wxBorder res);
typedef wxBorder (*wxPanelBaseExtGetDefaultBorderForControlFunc)(const wxPanelBaseExt* self, wxBorder res);
typedef wxDropTarget* (*wxPanelBaseExtGetDropTargetFunc)(const wxPanelBaseExt* self, wxDropTarget* res);
typedef wxSize (*wxPanelBaseExtGetEffectiveMinSizeFunc)(const wxPanelBaseExt* self, wxSize res);
typedef wxEventHashTable& (*wxPanelBaseExtGetEventHashTableFunc)(const wxPanelBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxPanelBaseExtGetEventTableFunc)(const wxPanelBaseExt* self, wxEventTable const* res);
typedef WXWidget (*wxPanelBaseExtGetHandleFunc)(const wxPanelBaseExt* self, WXWidget res);
typedef wxString (*wxPanelBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxPanelBaseExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxPanelBaseExtGetLabelFunc)(const wxPanelBaseExt* self, wxString res);
typedef wxLayoutDirection (*wxPanelBaseExtGetLayoutDirectionFunc)(const wxPanelBaseExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxPanelBaseExtGetMainWindowOfCompositeControlFunc)(const wxPanelBaseExt* self, wxWindow* res);
typedef wxSize (*wxPanelBaseExtGetMaxClientSizeFunc)(const wxPanelBaseExt* self, wxSize res);
typedef wxSize (*wxPanelBaseExtGetMaxSizeFunc)(const wxPanelBaseExt* self, wxSize res);
typedef wxSize (*wxPanelBaseExtGetMinClientSizeFunc)(const wxPanelBaseExt* self, wxSize res);
typedef wxSize (*wxPanelBaseExtGetMinSizeFunc)(const wxPanelBaseExt* self, wxSize res);
typedef wxString (*wxPanelBaseExtGetNameFunc)(const wxPanelBaseExt* self, wxString res);
typedef void (*wxPanelBaseExtGetPositionConstraint__intPintPFunc)(const wxPanelBaseExt* self, int* x, int* y);
typedef int (*wxPanelBaseExtGetScrollPos__intFunc)(const wxPanelBaseExt* self, int orient, int res);
typedef int (*wxPanelBaseExtGetScrollRange__intFunc)(const wxPanelBaseExt* self, int orient, int res);
typedef int (*wxPanelBaseExtGetScrollThumb__intFunc)(const wxPanelBaseExt* self, int orient, int res);
typedef void (*wxPanelBaseExtGetSizeConstraint__intPintPFunc)(const wxPanelBaseExt* self, int* w, int* h);
typedef bool (*wxPanelBaseExtGetThemeEnabledFunc)(const wxPanelBaseExt* self, bool res);
typedef wxByte (*wxPanelBaseExtGetTransparentFunc)(const wxPanelBaseExt* self, wxByte res);
typedef wxValidator* (*wxPanelBaseExtGetValidatorFunc)(const wxPanelBaseExt* self, wxValidator* res);
typedef wxSize (*wxPanelBaseExtGetWindowBorderSizeFunc)(const wxPanelBaseExt* self, wxSize res);
typedef long (*wxPanelBaseExtGetWindowStyleFlagFunc)(const wxPanelBaseExt* self, long res);
typedef bool (*wxPanelBaseExtHasCaptureFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtHasFocusFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtHasMultiplePagesFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtHasTransparentBackgroundFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxPanelBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxPanelBaseExtInformFirstDirection__intintintFunc)(const wxPanelBaseExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxPanelBaseExtInheritAttributesFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtInitDialogFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtIsClientAreaChild__wxWindowCPFunc)(const wxPanelBaseExt* self, wxWindow const* child, bool res);
typedef bool (*wxPanelBaseExtIsDoubleBufferedFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtIsRetainedFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtIsScrollbarAlwaysShown__intFunc)(const wxPanelBaseExt* self, int orient, bool res);
typedef bool (*wxPanelBaseExtIsShownFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtIsShownOnScreenFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtIsThisEnabledFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtIsTopLevelFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxPanelBaseExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxPanelBaseExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxPanelBaseExt* self, wxString* reason, bool res);
typedef bool (*wxPanelBaseExtLayoutFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtLayoutPhase1__intPFunc)(const wxPanelBaseExt* self, int* noChanges, bool res);
typedef bool (*wxPanelBaseExtLayoutPhase2__intPFunc)(const wxPanelBaseExt* self, int* noChanges, bool res);
typedef void (*wxPanelBaseExtLowerFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtMoveConstraint__intintFunc)(const wxPanelBaseExt* self, int x, int y);
typedef bool (*wxPanelBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxPanelBaseExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxPanelBaseExtOnInternalIdleFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtPrepareDC__wxDCRFunc)(const wxPanelBaseExt* self, wxDC& dc);
typedef bool (*wxPanelBaseExtProcessEvent__wxEventRFunc)(const wxPanelBaseExt* self, wxEvent& event, bool res);
typedef void (*wxPanelBaseExtQueueEvent__wxEventPFunc)(const wxPanelBaseExt* self, wxEvent* event);
typedef void (*wxPanelBaseExtRaiseFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtRefresh__boolwxRectCPFunc)(const wxPanelBaseExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxPanelBaseExtRegisterHotKey__intintintFunc)(const wxPanelBaseExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxPanelBaseExtRemoveChild__wxWindowBasePFunc)(const wxPanelBaseExt* self, wxWindowBase* child);
typedef bool (*wxPanelBaseExtReparent__wxWindowBasePFunc)(const wxPanelBaseExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxPanelBaseExtScrollLines__intFunc)(const wxPanelBaseExt* self, int lines, bool res);
typedef bool (*wxPanelBaseExtScrollPages__intFunc)(const wxPanelBaseExt* self, int pages, bool res);
typedef void (*wxPanelBaseExtScrollWindow__intintwxRectCPFunc)(const wxPanelBaseExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxPanelBaseExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxPanelBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxPanelBaseExtSendIdleEvents__wxIdleEventRFunc)(const wxPanelBaseExt* self, wxIdleEvent& event, bool res);
typedef void (*wxPanelBaseExtSendSizeEvent__intFunc)(const wxPanelBaseExt* self, int flags);
typedef void (*wxPanelBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxPanelBaseExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxPanelBaseExtSetBackgroundColour__wxColourCRFunc)(const wxPanelBaseExt* self, wxColour const& colour, bool res);
typedef bool (*wxPanelBaseExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxPanelBaseExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxPanelBaseExtSetCanFocus__boolFunc)(const wxPanelBaseExt* self, bool canFocus);
typedef void (*wxPanelBaseExtSetConstraintSizes__boolFunc)(const wxPanelBaseExt* self, bool recurse);
typedef bool (*wxPanelBaseExtSetCursor__wxCursorCRFunc)(const wxPanelBaseExt* self, wxCursor const& cursor, bool res);
typedef void (*wxPanelBaseExtSetDoubleBuffered__boolFunc)(const wxPanelBaseExt* self, bool on);
typedef void (*wxPanelBaseExtSetDropTarget__wxDropTargetPFunc)(const wxPanelBaseExt* self, wxDropTarget* dropTarget);
typedef void (*wxPanelBaseExtSetExtraStyle__longFunc)(const wxPanelBaseExt* self, long exStyle);
typedef void (*wxPanelBaseExtSetFocusFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtSetFocusFromKbdFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtSetFont__wxFontCRFunc)(const wxPanelBaseExt* self, wxFont const& font, bool res);
typedef bool (*wxPanelBaseExtSetForegroundColour__wxColourCRFunc)(const wxPanelBaseExt* self, wxColour const& colour, bool res);
typedef void (*wxPanelBaseExtSetId__wxWindowIDFunc)(const wxPanelBaseExt* self, wxWindowID winid);
typedef void (*wxPanelBaseExtSetLabel__wxStringCRFunc)(const wxPanelBaseExt* self, wxString const& label);
typedef void (*wxPanelBaseExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxPanelBaseExt* self, wxLayoutDirection dir);
typedef void (*wxPanelBaseExtSetMaxClientSize__wxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& size);
typedef void (*wxPanelBaseExtSetMaxSize__wxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& maxSize);
typedef void (*wxPanelBaseExtSetMinClientSize__wxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& size);
typedef void (*wxPanelBaseExtSetMinSize__wxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& minSize);
typedef void (*wxPanelBaseExtSetName__wxStringCRFunc)(const wxPanelBaseExt* self, wxString const& name);
typedef void (*wxPanelBaseExtSetNextHandler__wxEvtHandlerPFunc)(const wxPanelBaseExt* self, wxEvtHandler* handler);
typedef void (*wxPanelBaseExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxPanelBaseExt* self, wxEvtHandler* handler);
typedef void (*wxPanelBaseExtSetScrollPos__intintboolFunc)(const wxPanelBaseExt* self, int orient, int pos, bool refresh);
typedef void (*wxPanelBaseExtSetScrollbar__intintintintboolFunc)(const wxPanelBaseExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxPanelBaseExtSetSizeConstraint__intintintintFunc)(const wxPanelBaseExt* self, int x, int y, int w, int h);
typedef void (*wxPanelBaseExtSetSizeHints__intintintintintintFunc)(const wxPanelBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxPanelBaseExtSetThemeEnabled__boolFunc)(const wxPanelBaseExt* self, bool enableTheme);
typedef bool (*wxPanelBaseExtSetTransparent__wxByteFunc)(const wxPanelBaseExt* self, wxByte alpha, bool res);
typedef void (*wxPanelBaseExtSetValidator__wxValidatorCRFunc)(const wxPanelBaseExt* self, wxValidator const& validator);
typedef void (*wxPanelBaseExtSetWindowStyleFlag__longFunc)(const wxPanelBaseExt* self, long style);
typedef bool (*wxPanelBaseExtShouldInheritColoursFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtShow__boolFunc)(const wxPanelBaseExt* self, bool show, bool res);
typedef bool (*wxPanelBaseExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxPanelBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxPanelBaseExtTransferDataFromWindowFunc)(const wxPanelBaseExt* self, bool res);
typedef bool (*wxPanelBaseExtTransferDataToWindowFunc)(const wxPanelBaseExt* self, bool res);
typedef void (*wxPanelBaseExtTriggerScrollEvent__wxEventTypeFunc)(const wxPanelBaseExt* self, wxEventType scrollEvent);
typedef bool (*wxPanelBaseExtTryAfter__wxEventRFunc)(const wxPanelBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxPanelBaseExtTryBefore__wxEventRFunc)(const wxPanelBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxPanelBaseExtUnregisterHotKey__intFunc)(const wxPanelBaseExt* self, int hotkeyId, bool res);
typedef void (*wxPanelBaseExtUpdateFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtUpdateWindowUI__longFunc)(const wxPanelBaseExt* self, long flags);
typedef bool (*wxPanelBaseExtValidateFunc)(const wxPanelBaseExt* self, bool res);
typedef void (*wxPanelBaseExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxPanelBaseExt* self, wxFont& font);
typedef wxTextEntry const* (*wxPanelBaseExtWXGetTextEntryFunc)(const wxPanelBaseExt* self, wxTextEntry const* res);
typedef void* (*wxPanelBaseExtWXReservedEvtHandler1__voidPFunc)(const wxPanelBaseExt* self, void* param0, void* res);
typedef void* (*wxPanelBaseExtWXReservedEvtHandler2__voidPFunc)(const wxPanelBaseExt* self, void* param0, void* res);
typedef void* (*wxPanelBaseExtWXReservedWindow1__voidPFunc)(const wxPanelBaseExt* self, void* param0, void* res);
typedef void* (*wxPanelBaseExtWXReservedWindow2__voidPFunc)(const wxPanelBaseExt* self, void* param0, void* res);
typedef void* (*wxPanelBaseExtWXReservedWindow3__voidPFunc)(const wxPanelBaseExt* self, void* param0, void* res);
typedef void (*wxPanelBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxPanelBaseExt* self, int flags, wxSizer* sizer);
typedef void (*wxPanelBaseExtWarpPointer__intintFunc)(const wxPanelBaseExt* self, int x, int y);
typedef wxSize (*wxPanelBaseExtWindowToClientSize__wxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& size, wxSize res);
class wxPanelExt;
typedef bool (*wxPanelExtAcceptsFocusFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtAcceptsFocusFromKeyboardFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtAcceptsFocusRecursivelyFunc)(const wxPanelExt* self, bool res);
typedef void (*wxPanelExtAddChild__wxWindowBasePFunc)(const wxPanelExt* self, wxWindowBase* child);
typedef void (*wxPanelExtAddPendingEvent__wxEventCRFunc)(const wxPanelExt* self, wxEvent const& event);
typedef wxCoord (*wxPanelExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxPanelExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxPanelExtAdjustForParentClientOrigin__intRintRintFunc)(const wxPanelExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxPanelExtAlwaysShowScrollbars__boolboolFunc)(const wxPanelExt* self, bool horz, bool vert);
typedef void (*wxPanelExtAssociateHandle__WXWidgetFunc)(const wxPanelExt* self, WXWidget handle);
typedef bool (*wxPanelExtBeginRepositioningChildrenFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtCanApplyThemeBorderFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtCanBeFocusedFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtCanBeOutsideClientAreaFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtCanScroll__intFunc)(const wxPanelExt* self, int orient, bool res);
typedef bool (*wxPanelExtCanSetTransparentFunc)(const wxPanelExt* self, bool res);
typedef void (*wxPanelExtClearBackgroundFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtClientToWindowSize__wxSizeCRFunc)(const wxPanelExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxPanelExtCloneRefData__wxObjectRefDataCPFunc)(const wxPanelExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxPanelExtCreateRefDataFunc)(const wxPanelExt* self, wxObjectRefData* res);
typedef bool (*wxPanelExtDestroyFunc)(const wxPanelExt* self, bool res);
typedef void (*wxPanelExtDissociateHandleFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtDoCaptureMouseFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtDoCentre__intFunc)(const wxPanelExt* self, int dir);
typedef void (*wxPanelExtDoClientToScreen__intPintPFunc)(const wxPanelExt* self, int* x, int* y);
typedef void (*wxPanelExtDoEnable__boolFunc)(const wxPanelExt* self, bool enable);
typedef void (*wxPanelExtDoFreezeFunc)(const wxPanelExt* self);
typedef int (*wxPanelExtDoGetBestClientHeight__intFunc)(const wxPanelExt* self, int width, int res);
typedef wxSize (*wxPanelExtDoGetBestClientSizeFunc)(const wxPanelExt* self, wxSize res);
typedef int (*wxPanelExtDoGetBestClientWidth__intFunc)(const wxPanelExt* self, int height, int res);
typedef wxSize (*wxPanelExtDoGetBestSizeFunc)(const wxPanelExt* self, wxSize res);
typedef void* (*wxPanelExtDoGetClientDataFunc)(const wxPanelExt* self, void* res);
typedef wxClientData* (*wxPanelExtDoGetClientObjectFunc)(const wxPanelExt* self, wxClientData* res);
typedef void (*wxPanelExtDoGetClientSize__intPintPFunc)(const wxPanelExt* self, int* width, int* height);
typedef void (*wxPanelExtDoGetPosition__intPintPFunc)(const wxPanelExt* self, int* x, int* y);
typedef void (*wxPanelExtDoGetScreenPosition__intPintPFunc)(const wxPanelExt* self, int* x, int* y);
typedef void (*wxPanelExtDoGetSize__intPintPFunc)(const wxPanelExt* self, int* width, int* height);
typedef wxSize (*wxPanelExtDoGetSizeFromClientSize__wxSizeCRFunc)(const wxPanelExt* self, wxSize const& size, wxSize res);
typedef void (*wxPanelExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxPanelExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxPanelExtDoGetVirtualSizeFunc)(const wxPanelExt* self, wxSize res);
typedef wxHitTest (*wxPanelExtDoHitTest__wxCoordwxCoordFunc)(const wxPanelExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxPanelExtDoIsExposed__intintintintFunc)(const wxPanelExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxPanelExtDoIsExposed__intintFunc)(const wxPanelExt* self, int x, int y, bool res);
typedef void (*wxPanelExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxPanelExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxPanelExtDoMoveWindow__intintintintFunc)(const wxPanelExt* self, int x, int y, int width, int height);
typedef bool (*wxPanelExtDoNavigateIn__intFunc)(const wxPanelExt* self, int flags, bool res);
typedef bool (*wxPanelExtDoPhase__intFunc)(const wxPanelExt* self, int phase, bool res);
typedef bool (*wxPanelExtDoPopupMenu__wxMenuPintintFunc)(const wxPanelExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxPanelExtDoReleaseMouseFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtDoScreenToClient__intPintPFunc)(const wxPanelExt* self, int* x, int* y);
typedef void (*wxPanelExtDoSetClientData__voidPFunc)(const wxPanelExt* self, void* data);
typedef void (*wxPanelExtDoSetClientObject__wxClientDataPFunc)(const wxPanelExt* self, wxClientData* data);
typedef void (*wxPanelExtDoSetClientSize__intintFunc)(const wxPanelExt* self, int width, int height);
typedef void (*wxPanelExtDoSetSize__intintintintintFunc)(const wxPanelExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxPanelExtDoSetSizeHints__intintintintintintFunc)(const wxPanelExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxPanelExtDoSetToolTip__wxToolTipPFunc)(const wxPanelExt* self, wxToolTip* tip);
typedef void (*wxPanelExtDoSetToolTipText__wxStringCRFunc)(const wxPanelExt* self, wxString const& tip);
typedef void (*wxPanelExtDoSetVirtualSize__intintFunc)(const wxPanelExt* self, int x, int y);
typedef void (*wxPanelExtDoSetWindowVariant__wxWindowVariantFunc)(const wxPanelExt* self, wxWindowVariant variant);
typedef void (*wxPanelExtDoThawFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxPanelExt* self, wxUpdateUIEvent& event);
typedef void (*wxPanelExtDragAcceptFiles__boolFunc)(const wxPanelExt* self, bool accept);
typedef bool (*wxPanelExtEnable__boolFunc)(const wxPanelExt* self, bool enable, bool res);
typedef bool (*wxPanelExtEnableTouchEvents__intFunc)(const wxPanelExt* self, int eventsMask, bool res);
typedef void (*wxPanelExtEnableVisibleFocus__boolFunc)(const wxPanelExt* self, bool enabled);
typedef void (*wxPanelExtEndRepositioningChildrenFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtFitFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtFitInsideFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtGetBestVirtualSizeFunc)(const wxPanelExt* self, wxSize res);
typedef int (*wxPanelExtGetCharHeightFunc)(const wxPanelExt* self, int res);
typedef int (*wxPanelExtGetCharWidthFunc)(const wxPanelExt* self, int res);
typedef wxClassInfo* (*wxPanelExtGetClassInfoFunc)(const wxPanelExt* self, wxClassInfo* res);
typedef wxPoint (*wxPanelExtGetClientAreaOriginFunc)(const wxPanelExt* self, wxPoint res);
typedef void (*wxPanelExtGetClientSizeConstraint__intPintPFunc)(const wxPanelExt* self, int* w, int* h);
typedef double (*wxPanelExtGetContentScaleFactorFunc)(const wxPanelExt* self, double res);
typedef wxSize (*wxPanelExtGetDPIFunc)(const wxPanelExt* self, wxSize res);
typedef double (*wxPanelExtGetDPIScaleFactorFunc)(const wxPanelExt* self, double res);
typedef wxVisualAttributes (*wxPanelExtGetDefaultAttributesFunc)(const wxPanelExt* self, wxVisualAttributes res);
typedef wxBorder (*wxPanelExtGetDefaultBorderFunc)(const wxPanelExt* self, wxBorder res);
typedef wxBorder (*wxPanelExtGetDefaultBorderForControlFunc)(const wxPanelExt* self, wxBorder res);
typedef wxDropTarget* (*wxPanelExtGetDropTargetFunc)(const wxPanelExt* self, wxDropTarget* res);
typedef wxSize (*wxPanelExtGetEffectiveMinSizeFunc)(const wxPanelExt* self, wxSize res);
typedef wxEventHashTable& (*wxPanelExtGetEventHashTableFunc)(const wxPanelExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxPanelExtGetEventTableFunc)(const wxPanelExt* self, wxEventTable const* res);
typedef WXWidget (*wxPanelExtGetHandleFunc)(const wxPanelExt* self, WXWidget res);
typedef wxString (*wxPanelExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxPanelExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxPanelExtGetLabelFunc)(const wxPanelExt* self, wxString res);
typedef wxLayoutDirection (*wxPanelExtGetLayoutDirectionFunc)(const wxPanelExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxPanelExtGetMainWindowOfCompositeControlFunc)(const wxPanelExt* self, wxWindow* res);
typedef wxSize (*wxPanelExtGetMaxClientSizeFunc)(const wxPanelExt* self, wxSize res);
typedef wxSize (*wxPanelExtGetMaxSizeFunc)(const wxPanelExt* self, wxSize res);
typedef wxSize (*wxPanelExtGetMinClientSizeFunc)(const wxPanelExt* self, wxSize res);
typedef wxSize (*wxPanelExtGetMinSizeFunc)(const wxPanelExt* self, wxSize res);
typedef wxString (*wxPanelExtGetNameFunc)(const wxPanelExt* self, wxString res);
typedef void (*wxPanelExtGetPositionConstraint__intPintPFunc)(const wxPanelExt* self, int* x, int* y);
typedef int (*wxPanelExtGetScrollPos__intFunc)(const wxPanelExt* self, int orient, int res);
typedef int (*wxPanelExtGetScrollRange__intFunc)(const wxPanelExt* self, int orient, int res);
typedef int (*wxPanelExtGetScrollThumb__intFunc)(const wxPanelExt* self, int orient, int res);
typedef void (*wxPanelExtGetSizeConstraint__intPintPFunc)(const wxPanelExt* self, int* w, int* h);
typedef bool (*wxPanelExtGetThemeEnabledFunc)(const wxPanelExt* self, bool res);
typedef wxByte (*wxPanelExtGetTransparentFunc)(const wxPanelExt* self, wxByte res);
typedef wxValidator* (*wxPanelExtGetValidatorFunc)(const wxPanelExt* self, wxValidator* res);
typedef wxSize (*wxPanelExtGetWindowBorderSizeFunc)(const wxPanelExt* self, wxSize res);
typedef long (*wxPanelExtGetWindowStyleFlagFunc)(const wxPanelExt* self, long res);
typedef bool (*wxPanelExtHasCaptureFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtHasFocusFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtHasMultiplePagesFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtHasTransparentBackgroundFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxPanelExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxPanelExtInformFirstDirection__intintintFunc)(const wxPanelExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxPanelExtInheritAttributesFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtInitDialogFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtIsClientAreaChild__wxWindowCPFunc)(const wxPanelExt* self, wxWindow const* child, bool res);
typedef bool (*wxPanelExtIsDoubleBufferedFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtIsRetainedFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtIsScrollbarAlwaysShown__intFunc)(const wxPanelExt* self, int orient, bool res);
typedef bool (*wxPanelExtIsShownFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtIsShownOnScreenFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtIsThisEnabledFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtIsTopLevelFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxPanelExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxPanelExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxPanelExt* self, wxString* reason, bool res);
typedef bool (*wxPanelExtLayoutFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtLayoutPhase1__intPFunc)(const wxPanelExt* self, int* noChanges, bool res);
typedef bool (*wxPanelExtLayoutPhase2__intPFunc)(const wxPanelExt* self, int* noChanges, bool res);
typedef void (*wxPanelExtLowerFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtMoveConstraint__intintFunc)(const wxPanelExt* self, int x, int y);
typedef bool (*wxPanelExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxPanelExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxPanelExtOnInternalIdleFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtPrepareDC__wxDCRFunc)(const wxPanelExt* self, wxDC& dc);
typedef bool (*wxPanelExtProcessEvent__wxEventRFunc)(const wxPanelExt* self, wxEvent& event, bool res);
typedef void (*wxPanelExtQueueEvent__wxEventPFunc)(const wxPanelExt* self, wxEvent* event);
typedef void (*wxPanelExtRaiseFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtRefresh__boolwxRectCPFunc)(const wxPanelExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxPanelExtRegisterHotKey__intintintFunc)(const wxPanelExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxPanelExtRemoveChild__wxWindowBasePFunc)(const wxPanelExt* self, wxWindowBase* child);
typedef bool (*wxPanelExtReparent__wxWindowBasePFunc)(const wxPanelExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxPanelExtScrollLines__intFunc)(const wxPanelExt* self, int lines, bool res);
typedef bool (*wxPanelExtScrollPages__intFunc)(const wxPanelExt* self, int pages, bool res);
typedef void (*wxPanelExtScrollWindow__intintwxRectCPFunc)(const wxPanelExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxPanelExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxPanelExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxPanelExtSendIdleEvents__wxIdleEventRFunc)(const wxPanelExt* self, wxIdleEvent& event, bool res);
typedef void (*wxPanelExtSendSizeEvent__intFunc)(const wxPanelExt* self, int flags);
typedef void (*wxPanelExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxPanelExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxPanelExtSetBackgroundColour__wxColourCRFunc)(const wxPanelExt* self, wxColour const& colour, bool res);
typedef bool (*wxPanelExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxPanelExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxPanelExtSetCanFocus__boolFunc)(const wxPanelExt* self, bool canFocus);
typedef void (*wxPanelExtSetConstraintSizes__boolFunc)(const wxPanelExt* self, bool recurse);
typedef bool (*wxPanelExtSetCursor__wxCursorCRFunc)(const wxPanelExt* self, wxCursor const& cursor, bool res);
typedef void (*wxPanelExtSetDoubleBuffered__boolFunc)(const wxPanelExt* self, bool on);
typedef void (*wxPanelExtSetDropTarget__wxDropTargetPFunc)(const wxPanelExt* self, wxDropTarget* dropTarget);
typedef void (*wxPanelExtSetExtraStyle__longFunc)(const wxPanelExt* self, long exStyle);
typedef void (*wxPanelExtSetFocusFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtSetFocusFromKbdFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtSetFont__wxFontCRFunc)(const wxPanelExt* self, wxFont const& font, bool res);
typedef bool (*wxPanelExtSetForegroundColour__wxColourCRFunc)(const wxPanelExt* self, wxColour const& colour, bool res);
typedef void (*wxPanelExtSetId__wxWindowIDFunc)(const wxPanelExt* self, wxWindowID winid);
typedef void (*wxPanelExtSetLabel__wxStringCRFunc)(const wxPanelExt* self, wxString const& label);
typedef void (*wxPanelExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxPanelExt* self, wxLayoutDirection dir);
typedef void (*wxPanelExtSetMaxClientSize__wxSizeCRFunc)(const wxPanelExt* self, wxSize const& size);
typedef void (*wxPanelExtSetMaxSize__wxSizeCRFunc)(const wxPanelExt* self, wxSize const& maxSize);
typedef void (*wxPanelExtSetMinClientSize__wxSizeCRFunc)(const wxPanelExt* self, wxSize const& size);
typedef void (*wxPanelExtSetMinSize__wxSizeCRFunc)(const wxPanelExt* self, wxSize const& minSize);
typedef void (*wxPanelExtSetName__wxStringCRFunc)(const wxPanelExt* self, wxString const& name);
typedef void (*wxPanelExtSetNextHandler__wxEvtHandlerPFunc)(const wxPanelExt* self, wxEvtHandler* handler);
typedef void (*wxPanelExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxPanelExt* self, wxEvtHandler* handler);
typedef void (*wxPanelExtSetScrollPos__intintboolFunc)(const wxPanelExt* self, int orient, int pos, bool refresh);
typedef void (*wxPanelExtSetScrollbar__intintintintboolFunc)(const wxPanelExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxPanelExtSetSizeConstraint__intintintintFunc)(const wxPanelExt* self, int x, int y, int w, int h);
typedef void (*wxPanelExtSetSizeHints__intintintintintintFunc)(const wxPanelExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxPanelExtSetThemeEnabled__boolFunc)(const wxPanelExt* self, bool enableTheme);
typedef bool (*wxPanelExtSetTransparent__wxByteFunc)(const wxPanelExt* self, wxByte alpha, bool res);
typedef void (*wxPanelExtSetValidator__wxValidatorCRFunc)(const wxPanelExt* self, wxValidator const& validator);
typedef void (*wxPanelExtSetWindowStyleFlag__longFunc)(const wxPanelExt* self, long style);
typedef bool (*wxPanelExtShouldInheritColoursFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtShow__boolFunc)(const wxPanelExt* self, bool show, bool res);
typedef bool (*wxPanelExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxPanelExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxPanelExtTransferDataFromWindowFunc)(const wxPanelExt* self, bool res);
typedef bool (*wxPanelExtTransferDataToWindowFunc)(const wxPanelExt* self, bool res);
typedef void (*wxPanelExtTriggerScrollEvent__wxEventTypeFunc)(const wxPanelExt* self, wxEventType scrollEvent);
typedef bool (*wxPanelExtTryAfter__wxEventRFunc)(const wxPanelExt* self, wxEvent& event, bool res);
typedef bool (*wxPanelExtTryBefore__wxEventRFunc)(const wxPanelExt* self, wxEvent& event, bool res);
typedef bool (*wxPanelExtUnregisterHotKey__intFunc)(const wxPanelExt* self, int hotkeyId, bool res);
typedef void (*wxPanelExtUpdateFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtUpdateWindowUI__longFunc)(const wxPanelExt* self, long flags);
typedef bool (*wxPanelExtValidateFunc)(const wxPanelExt* self, bool res);
typedef void (*wxPanelExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxPanelExt* self, wxFont& font);
typedef wxTextEntry const* (*wxPanelExtWXGetTextEntryFunc)(const wxPanelExt* self, wxTextEntry const* res);
typedef void* (*wxPanelExtWXReservedEvtHandler1__voidPFunc)(const wxPanelExt* self, void* param0, void* res);
typedef void* (*wxPanelExtWXReservedEvtHandler2__voidPFunc)(const wxPanelExt* self, void* param0, void* res);
typedef void* (*wxPanelExtWXReservedWindow1__voidPFunc)(const wxPanelExt* self, void* param0, void* res);
typedef void* (*wxPanelExtWXReservedWindow2__voidPFunc)(const wxPanelExt* self, void* param0, void* res);
typedef void* (*wxPanelExtWXReservedWindow3__voidPFunc)(const wxPanelExt* self, void* param0, void* res);
typedef void (*wxPanelExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxPanelExt* self, int flags, wxSizer* sizer);
typedef void (*wxPanelExtWarpPointer__intintFunc)(const wxPanelExt* self, int x, int y);
typedef wxSize (*wxPanelExtWindowToClientSize__wxSizeCRFunc)(const wxPanelExt* self, wxSize const& size, wxSize res);

class wxNavigationEnabledWindowExt: public wxNavigationEnabledWindow
{
public:
  wxNavigationEnabledWindowExt(): wxNavigationEnabledWindow()  {  }
  wxNavigationEnabledWindowExtAcceptsFocusFunc m_wxNavigationEnabledWindowExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxNavigationEnabledWindow::AcceptsFocus();
    if (*m_wxNavigationEnabledWindowExtAcceptsFocus != NULL){
      return m_wxNavigationEnabledWindowExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtAcceptsFocusFromKeyboardFunc m_wxNavigationEnabledWindowExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxNavigationEnabledWindow::AcceptsFocusFromKeyboard();
    if (*m_wxNavigationEnabledWindowExtAcceptsFocusFromKeyboard != NULL){
      return m_wxNavigationEnabledWindowExtAcceptsFocusFromKeyboard(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtAcceptsFocusRecursivelyFunc m_wxNavigationEnabledWindowExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxNavigationEnabledWindow::AcceptsFocusRecursively();
    if (*m_wxNavigationEnabledWindowExtAcceptsFocusRecursively != NULL){
      return m_wxNavigationEnabledWindowExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtAddChild__wxWindowBasePFunc m_wxNavigationEnabledWindowExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxNavigationEnabledWindow::AddChild(child);
    if (*m_wxNavigationEnabledWindowExtAddChild__wxWindowBaseP != NULL){
      return m_wxNavigationEnabledWindowExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxNavigationEnabledWindowExtAddPendingEvent__wxEventCRFunc m_wxNavigationEnabledWindowExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxNavigationEnabledWindow::AddPendingEvent(event);
    if (*m_wxNavigationEnabledWindowExtAddPendingEvent__wxEventCR != NULL){
      return m_wxNavigationEnabledWindowExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxNavigationEnabledWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxNavigationEnabledWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxNavigationEnabledWindow::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxNavigationEnabledWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxNavigationEnabledWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtAdjustForParentClientOrigin__intRintRintFunc m_wxNavigationEnabledWindowExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxNavigationEnabledWindow::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxNavigationEnabledWindowExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxNavigationEnabledWindowExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxNavigationEnabledWindowExtAlwaysShowScrollbars__boolboolFunc m_wxNavigationEnabledWindowExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxNavigationEnabledWindow::AlwaysShowScrollbars(horz, vert);
    if (*m_wxNavigationEnabledWindowExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxNavigationEnabledWindowExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxNavigationEnabledWindowExtAssociateHandle__WXWidgetFunc m_wxNavigationEnabledWindowExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxNavigationEnabledWindow::AssociateHandle(handle);
    if (*m_wxNavigationEnabledWindowExtAssociateHandle__WXWidget != NULL){
      return m_wxNavigationEnabledWindowExtAssociateHandle__WXWidget(this, handle);
    }
  }
  wxNavigationEnabledWindowExtBeginRepositioningChildrenFunc m_wxNavigationEnabledWindowExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxNavigationEnabledWindow::BeginRepositioningChildren();
    if (*m_wxNavigationEnabledWindowExtBeginRepositioningChildren != NULL){
      return m_wxNavigationEnabledWindowExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtCanApplyThemeBorderFunc m_wxNavigationEnabledWindowExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxNavigationEnabledWindow::CanApplyThemeBorder();
    if (*m_wxNavigationEnabledWindowExtCanApplyThemeBorder != NULL){
      return m_wxNavigationEnabledWindowExtCanApplyThemeBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtCanBeFocusedFunc m_wxNavigationEnabledWindowExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxNavigationEnabledWindow::CanBeFocused();
    if (*m_wxNavigationEnabledWindowExtCanBeFocused != NULL){
      return m_wxNavigationEnabledWindowExtCanBeFocused(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtCanBeOutsideClientAreaFunc m_wxNavigationEnabledWindowExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxNavigationEnabledWindow::CanBeOutsideClientArea();
    if (*m_wxNavigationEnabledWindowExtCanBeOutsideClientArea != NULL){
      return m_wxNavigationEnabledWindowExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtCanScroll__intFunc m_wxNavigationEnabledWindowExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxNavigationEnabledWindow::CanScroll(orient);
    if (*m_wxNavigationEnabledWindowExtCanScroll__int != NULL){
      return m_wxNavigationEnabledWindowExtCanScroll__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtCanSetTransparentFunc m_wxNavigationEnabledWindowExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxNavigationEnabledWindow::CanSetTransparent();
    if (*m_wxNavigationEnabledWindowExtCanSetTransparent != NULL){
      return m_wxNavigationEnabledWindowExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtClearBackgroundFunc m_wxNavigationEnabledWindowExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxNavigationEnabledWindow::ClearBackground();
    if (*m_wxNavigationEnabledWindowExtClearBackground != NULL){
      return m_wxNavigationEnabledWindowExtClearBackground(this);
    }
  }
  wxNavigationEnabledWindowExtClientToWindowSize__wxSizeCRFunc m_wxNavigationEnabledWindowExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxNavigationEnabledWindow::ClientToWindowSize(size);
    if (*m_wxNavigationEnabledWindowExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtCloneRefData__wxObjectRefDataCPFunc m_wxNavigationEnabledWindowExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxNavigationEnabledWindow::CloneRefData(data);
    if (*m_wxNavigationEnabledWindowExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxNavigationEnabledWindowExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtCreateRefDataFunc m_wxNavigationEnabledWindowExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxNavigationEnabledWindow::CreateRefData();
    if (*m_wxNavigationEnabledWindowExtCreateRefData != NULL){
      return m_wxNavigationEnabledWindowExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDestroyFunc m_wxNavigationEnabledWindowExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxNavigationEnabledWindow::Destroy();
    if (*m_wxNavigationEnabledWindowExtDestroy != NULL){
      return m_wxNavigationEnabledWindowExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDissociateHandleFunc m_wxNavigationEnabledWindowExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxNavigationEnabledWindow::DissociateHandle();
    if (*m_wxNavigationEnabledWindowExtDissociateHandle != NULL){
      return m_wxNavigationEnabledWindowExtDissociateHandle(this);
    }
  }
  wxNavigationEnabledWindowExtDoCaptureMouseFunc m_wxNavigationEnabledWindowExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxNavigationEnabledWindow::DoCaptureMouse();
    if (*m_wxNavigationEnabledWindowExtDoCaptureMouse != NULL){
      return m_wxNavigationEnabledWindowExtDoCaptureMouse(this);
    }
  }
  wxNavigationEnabledWindowExtDoCentre__intFunc m_wxNavigationEnabledWindowExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxNavigationEnabledWindow::DoCentre(dir);
    if (*m_wxNavigationEnabledWindowExtDoCentre__int != NULL){
      return m_wxNavigationEnabledWindowExtDoCentre__int(this, dir);
    }
  }
  wxNavigationEnabledWindowExtDoClientToScreen__intPintPFunc m_wxNavigationEnabledWindowExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxNavigationEnabledWindow::DoClientToScreen(x, y);
    if (*m_wxNavigationEnabledWindowExtDoClientToScreen__intPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtDoEnable__boolFunc m_wxNavigationEnabledWindowExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxNavigationEnabledWindow::DoEnable(enable);
    if (*m_wxNavigationEnabledWindowExtDoEnable__bool != NULL){
      return m_wxNavigationEnabledWindowExtDoEnable__bool(this, enable);
    }
  }
  wxNavigationEnabledWindowExtDoFreezeFunc m_wxNavigationEnabledWindowExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxNavigationEnabledWindow::DoFreeze();
    if (*m_wxNavigationEnabledWindowExtDoFreeze != NULL){
      return m_wxNavigationEnabledWindowExtDoFreeze(this);
    }
  }
  wxNavigationEnabledWindowExtDoGetBestClientHeight__intFunc m_wxNavigationEnabledWindowExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxNavigationEnabledWindow::DoGetBestClientHeight(width);
    if (*m_wxNavigationEnabledWindowExtDoGetBestClientHeight__int != NULL){
      return m_wxNavigationEnabledWindowExtDoGetBestClientHeight__int(this, width, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoGetBestClientSizeFunc m_wxNavigationEnabledWindowExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::DoGetBestClientSize();
    if (*m_wxNavigationEnabledWindowExtDoGetBestClientSize != NULL){
      return m_wxNavigationEnabledWindowExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoGetBestClientWidth__intFunc m_wxNavigationEnabledWindowExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxNavigationEnabledWindow::DoGetBestClientWidth(height);
    if (*m_wxNavigationEnabledWindowExtDoGetBestClientWidth__int != NULL){
      return m_wxNavigationEnabledWindowExtDoGetBestClientWidth__int(this, height, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoGetBestSizeFunc m_wxNavigationEnabledWindowExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::DoGetBestSize();
    if (*m_wxNavigationEnabledWindowExtDoGetBestSize != NULL){
      return m_wxNavigationEnabledWindowExtDoGetBestSize(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoGetClientDataFunc m_wxNavigationEnabledWindowExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxNavigationEnabledWindow::DoGetClientData();
    if (*m_wxNavigationEnabledWindowExtDoGetClientData != NULL){
      return m_wxNavigationEnabledWindowExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoGetClientObjectFunc m_wxNavigationEnabledWindowExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxNavigationEnabledWindow::DoGetClientObject();
    if (*m_wxNavigationEnabledWindowExtDoGetClientObject != NULL){
      return m_wxNavigationEnabledWindowExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoGetClientSize__intPintPFunc m_wxNavigationEnabledWindowExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxNavigationEnabledWindow::DoGetClientSize(width, height);
    if (*m_wxNavigationEnabledWindowExtDoGetClientSize__intPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxNavigationEnabledWindowExtDoGetPosition__intPintPFunc m_wxNavigationEnabledWindowExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxNavigationEnabledWindow::DoGetPosition(x, y);
    if (*m_wxNavigationEnabledWindowExtDoGetPosition__intPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtDoGetScreenPosition__intPintPFunc m_wxNavigationEnabledWindowExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxNavigationEnabledWindow::DoGetScreenPosition(x, y);
    if (*m_wxNavigationEnabledWindowExtDoGetScreenPosition__intPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtDoGetSize__intPintPFunc m_wxNavigationEnabledWindowExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxNavigationEnabledWindow::DoGetSize(width, height);
    if (*m_wxNavigationEnabledWindowExtDoGetSize__intPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxNavigationEnabledWindowExtDoGetSizeFromClientSize__wxSizeCRFunc m_wxNavigationEnabledWindowExtDoGetSizeFromClientSize__wxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxNavigationEnabledWindow::DoGetSizeFromClientSize(size);
    if (*m_wxNavigationEnabledWindowExtDoGetSizeFromClientSize__wxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtDoGetSizeFromClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxNavigationEnabledWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxNavigationEnabledWindow::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxNavigationEnabledWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxNavigationEnabledWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxNavigationEnabledWindowExtDoGetVirtualSizeFunc m_wxNavigationEnabledWindowExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::DoGetVirtualSize();
    if (*m_wxNavigationEnabledWindowExtDoGetVirtualSize != NULL){
      return m_wxNavigationEnabledWindowExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoHitTest__wxCoordwxCoordFunc m_wxNavigationEnabledWindowExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxNavigationEnabledWindow::DoHitTest(x, y);
    if (*m_wxNavigationEnabledWindowExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxNavigationEnabledWindowExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoIsExposed__intintintintFunc m_wxNavigationEnabledWindowExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxNavigationEnabledWindow::DoIsExposed(x, y, w, h);
    if (*m_wxNavigationEnabledWindowExtDoIsExposed__intintintint != NULL){
      return m_wxNavigationEnabledWindowExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoIsExposed__intintFunc m_wxNavigationEnabledWindowExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxNavigationEnabledWindow::DoIsExposed(x, y);
    if (*m_wxNavigationEnabledWindowExtDoIsExposed__intint != NULL){
      return m_wxNavigationEnabledWindowExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxNavigationEnabledWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxNavigationEnabledWindow::DoMoveInTabOrder(win, move);
    if (*m_wxNavigationEnabledWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxNavigationEnabledWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxNavigationEnabledWindowExtDoMoveWindow__intintintintFunc m_wxNavigationEnabledWindowExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxNavigationEnabledWindow::DoMoveWindow(x, y, width, height);
    if (*m_wxNavigationEnabledWindowExtDoMoveWindow__intintintint != NULL){
      return m_wxNavigationEnabledWindowExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxNavigationEnabledWindowExtDoNavigateIn__intFunc m_wxNavigationEnabledWindowExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxNavigationEnabledWindow::DoNavigateIn(flags);
    if (*m_wxNavigationEnabledWindowExtDoNavigateIn__int != NULL){
      return m_wxNavigationEnabledWindowExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoPhase__intFunc m_wxNavigationEnabledWindowExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxNavigationEnabledWindow::DoPhase(phase);
    if (*m_wxNavigationEnabledWindowExtDoPhase__int != NULL){
      return m_wxNavigationEnabledWindowExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoPopupMenu__wxMenuPintintFunc m_wxNavigationEnabledWindowExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxNavigationEnabledWindow::DoPopupMenu(menu, x, y);
    if (*m_wxNavigationEnabledWindowExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxNavigationEnabledWindowExtDoPopupMenu__wxMenuPintint(this, menu, x, y, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoReleaseMouseFunc m_wxNavigationEnabledWindowExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxNavigationEnabledWindow::DoReleaseMouse();
    if (*m_wxNavigationEnabledWindowExtDoReleaseMouse != NULL){
      return m_wxNavigationEnabledWindowExtDoReleaseMouse(this);
    }
  }
  wxNavigationEnabledWindowExtDoScreenToClient__intPintPFunc m_wxNavigationEnabledWindowExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxNavigationEnabledWindow::DoScreenToClient(x, y);
    if (*m_wxNavigationEnabledWindowExtDoScreenToClient__intPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtDoSetClientData__voidPFunc m_wxNavigationEnabledWindowExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxNavigationEnabledWindow::DoSetClientData(data);
    if (*m_wxNavigationEnabledWindowExtDoSetClientData__voidP != NULL){
      return m_wxNavigationEnabledWindowExtDoSetClientData__voidP(this, data);
    }
  }
  wxNavigationEnabledWindowExtDoSetClientObject__wxClientDataPFunc m_wxNavigationEnabledWindowExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxNavigationEnabledWindow::DoSetClientObject(data);
    if (*m_wxNavigationEnabledWindowExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxNavigationEnabledWindowExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxNavigationEnabledWindowExtDoSetClientSize__intintFunc m_wxNavigationEnabledWindowExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxNavigationEnabledWindow::DoSetClientSize(width, height);
    if (*m_wxNavigationEnabledWindowExtDoSetClientSize__intint != NULL){
      return m_wxNavigationEnabledWindowExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxNavigationEnabledWindowExtDoSetSize__intintintintintFunc m_wxNavigationEnabledWindowExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxNavigationEnabledWindow::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxNavigationEnabledWindowExtDoSetSize__intintintintint != NULL){
      return m_wxNavigationEnabledWindowExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxNavigationEnabledWindowExtDoSetSizeHints__intintintintintintFunc m_wxNavigationEnabledWindowExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxNavigationEnabledWindow::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxNavigationEnabledWindowExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxNavigationEnabledWindowExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxNavigationEnabledWindowExtDoSetToolTip__wxToolTipPFunc m_wxNavigationEnabledWindowExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxNavigationEnabledWindow::DoSetToolTip(tip);
    if (*m_wxNavigationEnabledWindowExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxNavigationEnabledWindowExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxNavigationEnabledWindowExtDoSetToolTipText__wxStringCRFunc m_wxNavigationEnabledWindowExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxNavigationEnabledWindow::DoSetToolTipText(tip);
    if (*m_wxNavigationEnabledWindowExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxNavigationEnabledWindowExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxNavigationEnabledWindowExtDoSetVirtualSize__intintFunc m_wxNavigationEnabledWindowExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxNavigationEnabledWindow::DoSetVirtualSize(x, y);
    if (*m_wxNavigationEnabledWindowExtDoSetVirtualSize__intint != NULL){
      return m_wxNavigationEnabledWindowExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtDoSetWindowVariant__wxWindowVariantFunc m_wxNavigationEnabledWindowExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxNavigationEnabledWindow::DoSetWindowVariant(variant);
    if (*m_wxNavigationEnabledWindowExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxNavigationEnabledWindowExtDoSetWindowVariant__wxWindowVariant(this, variant);
    }
  }
  wxNavigationEnabledWindowExtDoThawFunc m_wxNavigationEnabledWindowExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxNavigationEnabledWindow::DoThaw();
    if (*m_wxNavigationEnabledWindowExtDoThaw != NULL){
      return m_wxNavigationEnabledWindowExtDoThaw(this);
    }
  }
  wxNavigationEnabledWindowExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxNavigationEnabledWindowExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxNavigationEnabledWindow::DoUpdateWindowUI(event);
    if (*m_wxNavigationEnabledWindowExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxNavigationEnabledWindowExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxNavigationEnabledWindowExtDragAcceptFiles__boolFunc m_wxNavigationEnabledWindowExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxNavigationEnabledWindow::DragAcceptFiles(accept);
    if (*m_wxNavigationEnabledWindowExtDragAcceptFiles__bool != NULL){
      return m_wxNavigationEnabledWindowExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxNavigationEnabledWindowExtEnable__boolFunc m_wxNavigationEnabledWindowExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxNavigationEnabledWindow::Enable(enable);
    if (*m_wxNavigationEnabledWindowExtEnable__bool != NULL){
      return m_wxNavigationEnabledWindowExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtEnableTouchEvents__intFunc m_wxNavigationEnabledWindowExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxNavigationEnabledWindow::EnableTouchEvents(eventsMask);
    if (*m_wxNavigationEnabledWindowExtEnableTouchEvents__int != NULL){
      return m_wxNavigationEnabledWindowExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtEnableVisibleFocus__boolFunc m_wxNavigationEnabledWindowExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxNavigationEnabledWindow::EnableVisibleFocus(enabled);
    if (*m_wxNavigationEnabledWindowExtEnableVisibleFocus__bool != NULL){
      return m_wxNavigationEnabledWindowExtEnableVisibleFocus__bool(this, enabled);
    }
  }
  wxNavigationEnabledWindowExtEndRepositioningChildrenFunc m_wxNavigationEnabledWindowExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxNavigationEnabledWindow::EndRepositioningChildren();
    if (*m_wxNavigationEnabledWindowExtEndRepositioningChildren != NULL){
      return m_wxNavigationEnabledWindowExtEndRepositioningChildren(this);
    }
  }
  wxNavigationEnabledWindowExtFitFunc m_wxNavigationEnabledWindowExtFit = NULL;
  virtual void Fit() override
  {
    wxNavigationEnabledWindow::Fit();
    if (*m_wxNavigationEnabledWindowExtFit != NULL){
      return m_wxNavigationEnabledWindowExtFit(this);
    }
  }
  wxNavigationEnabledWindowExtFitInsideFunc m_wxNavigationEnabledWindowExtFitInside = NULL;
  virtual void FitInside() override
  {
    wxNavigationEnabledWindow::FitInside();
    if (*m_wxNavigationEnabledWindowExtFitInside != NULL){
      return m_wxNavigationEnabledWindowExtFitInside(this);
    }
  }
  wxNavigationEnabledWindowExtGetBestVirtualSizeFunc m_wxNavigationEnabledWindowExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::GetBestVirtualSize();
    if (*m_wxNavigationEnabledWindowExtGetBestVirtualSize != NULL){
      return m_wxNavigationEnabledWindowExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetCharHeightFunc m_wxNavigationEnabledWindowExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxNavigationEnabledWindow::GetCharHeight();
    if (*m_wxNavigationEnabledWindowExtGetCharHeight != NULL){
      return m_wxNavigationEnabledWindowExtGetCharHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetCharWidthFunc m_wxNavigationEnabledWindowExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxNavigationEnabledWindow::GetCharWidth();
    if (*m_wxNavigationEnabledWindowExtGetCharWidth != NULL){
      return m_wxNavigationEnabledWindowExtGetCharWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetClassInfoFunc m_wxNavigationEnabledWindowExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxNavigationEnabledWindow::GetClassInfo();
    if (*m_wxNavigationEnabledWindowExtGetClassInfo != NULL){
      return m_wxNavigationEnabledWindowExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetClientAreaOriginFunc m_wxNavigationEnabledWindowExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxNavigationEnabledWindow::GetClientAreaOrigin();
    if (*m_wxNavigationEnabledWindowExtGetClientAreaOrigin != NULL){
      return m_wxNavigationEnabledWindowExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetClientSizeConstraint__intPintPFunc m_wxNavigationEnabledWindowExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxNavigationEnabledWindow::GetClientSizeConstraint(w, h);
    if (*m_wxNavigationEnabledWindowExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxNavigationEnabledWindowExtGetClientSizeConstraint__intPintP(this, w, h);
    }
  }
  wxNavigationEnabledWindowExtGetContentScaleFactorFunc m_wxNavigationEnabledWindowExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxNavigationEnabledWindow::GetContentScaleFactor();
    if (*m_wxNavigationEnabledWindowExtGetContentScaleFactor != NULL){
      return m_wxNavigationEnabledWindowExtGetContentScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetDPIFunc m_wxNavigationEnabledWindowExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxNavigationEnabledWindow::GetDPI();
    if (*m_wxNavigationEnabledWindowExtGetDPI != NULL){
      return m_wxNavigationEnabledWindowExtGetDPI(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetDPIScaleFactorFunc m_wxNavigationEnabledWindowExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxNavigationEnabledWindow::GetDPIScaleFactor();
    if (*m_wxNavigationEnabledWindowExtGetDPIScaleFactor != NULL){
      return m_wxNavigationEnabledWindowExtGetDPIScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetDefaultAttributesFunc m_wxNavigationEnabledWindowExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxNavigationEnabledWindow::GetDefaultAttributes();
    if (*m_wxNavigationEnabledWindowExtGetDefaultAttributes != NULL){
      return m_wxNavigationEnabledWindowExtGetDefaultAttributes(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetDefaultBorderFunc m_wxNavigationEnabledWindowExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxNavigationEnabledWindow::GetDefaultBorder();
    if (*m_wxNavigationEnabledWindowExtGetDefaultBorder != NULL){
      return m_wxNavigationEnabledWindowExtGetDefaultBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetDefaultBorderForControlFunc m_wxNavigationEnabledWindowExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxNavigationEnabledWindow::GetDefaultBorderForControl();
    if (*m_wxNavigationEnabledWindowExtGetDefaultBorderForControl != NULL){
      return m_wxNavigationEnabledWindowExtGetDefaultBorderForControl(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetDropTargetFunc m_wxNavigationEnabledWindowExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxNavigationEnabledWindow::GetDropTarget();
    if (*m_wxNavigationEnabledWindowExtGetDropTarget != NULL){
      return m_wxNavigationEnabledWindowExtGetDropTarget(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetEffectiveMinSizeFunc m_wxNavigationEnabledWindowExtGetEffectiveMinSize = NULL;
  virtual wxSize GetEffectiveMinSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::GetEffectiveMinSize();
    if (*m_wxNavigationEnabledWindowExtGetEffectiveMinSize != NULL){
      return m_wxNavigationEnabledWindowExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetEventHashTableFunc m_wxNavigationEnabledWindowExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxNavigationEnabledWindow::GetEventHashTable();
    if (*m_wxNavigationEnabledWindowExtGetEventHashTable != NULL){
      return m_wxNavigationEnabledWindowExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetEventTableFunc m_wxNavigationEnabledWindowExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxNavigationEnabledWindow::GetEventTable();
    if (*m_wxNavigationEnabledWindowExtGetEventTable != NULL){
      return m_wxNavigationEnabledWindowExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetHandleFunc m_wxNavigationEnabledWindowExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxNavigationEnabledWindow::GetHandle();
    if (*m_wxNavigationEnabledWindowExtGetHandle != NULL){
      return m_wxNavigationEnabledWindowExtGetHandle(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxNavigationEnabledWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxNavigationEnabledWindow::GetHelpTextAtPoint(pt, origin);
    if (*m_wxNavigationEnabledWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxNavigationEnabledWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetLabelFunc m_wxNavigationEnabledWindowExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxNavigationEnabledWindow::GetLabel();
    if (*m_wxNavigationEnabledWindowExtGetLabel != NULL){
      return m_wxNavigationEnabledWindowExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetLayoutDirectionFunc m_wxNavigationEnabledWindowExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxNavigationEnabledWindow::GetLayoutDirection();
    if (*m_wxNavigationEnabledWindowExtGetLayoutDirection != NULL){
      return m_wxNavigationEnabledWindowExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetMainWindowOfCompositeControlFunc m_wxNavigationEnabledWindowExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxNavigationEnabledWindow::GetMainWindowOfCompositeControl();
    if (*m_wxNavigationEnabledWindowExtGetMainWindowOfCompositeControl != NULL){
      return m_wxNavigationEnabledWindowExtGetMainWindowOfCompositeControl(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetMaxClientSizeFunc m_wxNavigationEnabledWindowExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::GetMaxClientSize();
    if (*m_wxNavigationEnabledWindowExtGetMaxClientSize != NULL){
      return m_wxNavigationEnabledWindowExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetMaxSizeFunc m_wxNavigationEnabledWindowExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::GetMaxSize();
    if (*m_wxNavigationEnabledWindowExtGetMaxSize != NULL){
      return m_wxNavigationEnabledWindowExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetMinClientSizeFunc m_wxNavigationEnabledWindowExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::GetMinClientSize();
    if (*m_wxNavigationEnabledWindowExtGetMinClientSize != NULL){
      return m_wxNavigationEnabledWindowExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetMinSizeFunc m_wxNavigationEnabledWindowExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::GetMinSize();
    if (*m_wxNavigationEnabledWindowExtGetMinSize != NULL){
      return m_wxNavigationEnabledWindowExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetNameFunc m_wxNavigationEnabledWindowExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxNavigationEnabledWindow::GetName();
    if (*m_wxNavigationEnabledWindowExtGetName != NULL){
      return m_wxNavigationEnabledWindowExtGetName(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetPositionConstraint__intPintPFunc m_wxNavigationEnabledWindowExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxNavigationEnabledWindow::GetPositionConstraint(x, y);
    if (*m_wxNavigationEnabledWindowExtGetPositionConstraint__intPintP != NULL){
      return m_wxNavigationEnabledWindowExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtGetScrollPos__intFunc m_wxNavigationEnabledWindowExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxNavigationEnabledWindow::GetScrollPos(orient);
    if (*m_wxNavigationEnabledWindowExtGetScrollPos__int != NULL){
      return m_wxNavigationEnabledWindowExtGetScrollPos__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetScrollRange__intFunc m_wxNavigationEnabledWindowExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxNavigationEnabledWindow::GetScrollRange(orient);
    if (*m_wxNavigationEnabledWindowExtGetScrollRange__int != NULL){
      return m_wxNavigationEnabledWindowExtGetScrollRange__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetScrollThumb__intFunc m_wxNavigationEnabledWindowExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxNavigationEnabledWindow::GetScrollThumb(orient);
    if (*m_wxNavigationEnabledWindowExtGetScrollThumb__int != NULL){
      return m_wxNavigationEnabledWindowExtGetScrollThumb__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetSizeConstraint__intPintPFunc m_wxNavigationEnabledWindowExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxNavigationEnabledWindow::GetSizeConstraint(w, h);
    if (*m_wxNavigationEnabledWindowExtGetSizeConstraint__intPintP != NULL){
      return m_wxNavigationEnabledWindowExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxNavigationEnabledWindowExtGetThemeEnabledFunc m_wxNavigationEnabledWindowExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxNavigationEnabledWindow::GetThemeEnabled();
    if (*m_wxNavigationEnabledWindowExtGetThemeEnabled != NULL){
      return m_wxNavigationEnabledWindowExtGetThemeEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetTransparentFunc m_wxNavigationEnabledWindowExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxNavigationEnabledWindow::GetTransparent();
    if (*m_wxNavigationEnabledWindowExtGetTransparent != NULL){
      return m_wxNavigationEnabledWindowExtGetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetValidatorFunc m_wxNavigationEnabledWindowExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxNavigationEnabledWindow::GetValidator();
    if (*m_wxNavigationEnabledWindowExtGetValidator != NULL){
      return m_wxNavigationEnabledWindowExtGetValidator(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetWindowBorderSizeFunc m_wxNavigationEnabledWindowExtGetWindowBorderSize = NULL;
  virtual wxSize GetWindowBorderSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::GetWindowBorderSize();
    if (*m_wxNavigationEnabledWindowExtGetWindowBorderSize != NULL){
      return m_wxNavigationEnabledWindowExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetWindowStyleFlagFunc m_wxNavigationEnabledWindowExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxNavigationEnabledWindow::GetWindowStyleFlag();
    if (*m_wxNavigationEnabledWindowExtGetWindowStyleFlag != NULL){
      return m_wxNavigationEnabledWindowExtGetWindowStyleFlag(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtHasCaptureFunc m_wxNavigationEnabledWindowExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxNavigationEnabledWindow::HasCapture();
    if (*m_wxNavigationEnabledWindowExtHasCapture != NULL){
      return m_wxNavigationEnabledWindowExtHasCapture(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtHasFocusFunc m_wxNavigationEnabledWindowExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxNavigationEnabledWindow::HasFocus();
    if (*m_wxNavigationEnabledWindowExtHasFocus != NULL){
      return m_wxNavigationEnabledWindowExtHasFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtHasMultiplePagesFunc m_wxNavigationEnabledWindowExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxNavigationEnabledWindow::HasMultiplePages();
    if (*m_wxNavigationEnabledWindowExtHasMultiplePages != NULL){
      return m_wxNavigationEnabledWindowExtHasMultiplePages(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtHasTransparentBackgroundFunc m_wxNavigationEnabledWindowExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxNavigationEnabledWindow::HasTransparentBackground();
    if (*m_wxNavigationEnabledWindowExtHasTransparentBackground != NULL){
      return m_wxNavigationEnabledWindowExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtHideWithEffect__wxShowEffectunsignedintFunc m_wxNavigationEnabledWindowExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxNavigationEnabledWindow::HideWithEffect(effect, timeout);
    if (*m_wxNavigationEnabledWindowExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxNavigationEnabledWindowExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtInformFirstDirection__intintintFunc m_wxNavigationEnabledWindowExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxNavigationEnabledWindow::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxNavigationEnabledWindowExtInformFirstDirection__intintint != NULL){
      return m_wxNavigationEnabledWindowExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtInheritAttributesFunc m_wxNavigationEnabledWindowExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxNavigationEnabledWindow::InheritAttributes();
    if (*m_wxNavigationEnabledWindowExtInheritAttributes != NULL){
      return m_wxNavigationEnabledWindowExtInheritAttributes(this);
    }
  }
  wxNavigationEnabledWindowExtInitDialogFunc m_wxNavigationEnabledWindowExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxNavigationEnabledWindow::InitDialog();
    if (*m_wxNavigationEnabledWindowExtInitDialog != NULL){
      return m_wxNavigationEnabledWindowExtInitDialog(this);
    }
  }
  wxNavigationEnabledWindowExtIsClientAreaChild__wxWindowCPFunc m_wxNavigationEnabledWindowExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxNavigationEnabledWindow::IsClientAreaChild(child);
    if (*m_wxNavigationEnabledWindowExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxNavigationEnabledWindowExtIsClientAreaChild__wxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsDoubleBufferedFunc m_wxNavigationEnabledWindowExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxNavigationEnabledWindow::IsDoubleBuffered();
    if (*m_wxNavigationEnabledWindowExtIsDoubleBuffered != NULL){
      return m_wxNavigationEnabledWindowExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsRetainedFunc m_wxNavigationEnabledWindowExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxNavigationEnabledWindow::IsRetained();
    if (*m_wxNavigationEnabledWindowExtIsRetained != NULL){
      return m_wxNavigationEnabledWindowExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsScrollbarAlwaysShown__intFunc m_wxNavigationEnabledWindowExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxNavigationEnabledWindow::IsScrollbarAlwaysShown(orient);
    if (*m_wxNavigationEnabledWindowExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxNavigationEnabledWindowExtIsScrollbarAlwaysShown__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsShownFunc m_wxNavigationEnabledWindowExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxNavigationEnabledWindow::IsShown();
    if (*m_wxNavigationEnabledWindowExtIsShown != NULL){
      return m_wxNavigationEnabledWindowExtIsShown(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsShownOnScreenFunc m_wxNavigationEnabledWindowExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxNavigationEnabledWindow::IsShownOnScreen();
    if (*m_wxNavigationEnabledWindowExtIsShownOnScreen != NULL){
      return m_wxNavigationEnabledWindowExtIsShownOnScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsThisEnabledFunc m_wxNavigationEnabledWindowExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxNavigationEnabledWindow::IsThisEnabled();
    if (*m_wxNavigationEnabledWindowExtIsThisEnabled != NULL){
      return m_wxNavigationEnabledWindowExtIsThisEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsTopLevelFunc m_wxNavigationEnabledWindowExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxNavigationEnabledWindow::IsTopLevel();
    if (*m_wxNavigationEnabledWindowExtIsTopLevel != NULL){
      return m_wxNavigationEnabledWindowExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxNavigationEnabledWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxNavigationEnabledWindow::IsTopNavigationDomain(kind);
    if (*m_wxNavigationEnabledWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxNavigationEnabledWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsTransparentBackgroundSupported__wxStringPFunc m_wxNavigationEnabledWindowExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxNavigationEnabledWindow::IsTransparentBackgroundSupported(reason);
    if (*m_wxNavigationEnabledWindowExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxNavigationEnabledWindowExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtLayoutFunc m_wxNavigationEnabledWindowExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxNavigationEnabledWindow::Layout();
    if (*m_wxNavigationEnabledWindowExtLayout != NULL){
      return m_wxNavigationEnabledWindowExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtLayoutPhase1__intPFunc m_wxNavigationEnabledWindowExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxNavigationEnabledWindow::LayoutPhase1(noChanges);
    if (*m_wxNavigationEnabledWindowExtLayoutPhase1__intP != NULL){
      return m_wxNavigationEnabledWindowExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtLayoutPhase2__intPFunc m_wxNavigationEnabledWindowExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxNavigationEnabledWindow::LayoutPhase2(noChanges);
    if (*m_wxNavigationEnabledWindowExtLayoutPhase2__intP != NULL){
      return m_wxNavigationEnabledWindowExtLayoutPhase2__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtLowerFunc m_wxNavigationEnabledWindowExtLower = NULL;
  virtual void Lower() override
  {
    wxNavigationEnabledWindow::Lower();
    if (*m_wxNavigationEnabledWindowExtLower != NULL){
      return m_wxNavigationEnabledWindowExtLower(this);
    }
  }
  wxNavigationEnabledWindowExtMoveConstraint__intintFunc m_wxNavigationEnabledWindowExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxNavigationEnabledWindow::MoveConstraint(x, y);
    if (*m_wxNavigationEnabledWindowExtMoveConstraint__intint != NULL){
      return m_wxNavigationEnabledWindowExtMoveConstraint__intint(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxNavigationEnabledWindowExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxNavigationEnabledWindow::OnDynamicBind(entry);
    if (*m_wxNavigationEnabledWindowExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxNavigationEnabledWindowExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtOnInternalIdleFunc m_wxNavigationEnabledWindowExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxNavigationEnabledWindow::OnInternalIdle();
    if (*m_wxNavigationEnabledWindowExtOnInternalIdle != NULL){
      return m_wxNavigationEnabledWindowExtOnInternalIdle(this);
    }
  }
  wxNavigationEnabledWindowExtPrepareDC__wxDCRFunc m_wxNavigationEnabledWindowExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxNavigationEnabledWindow::PrepareDC(dc);
    if (*m_wxNavigationEnabledWindowExtPrepareDC__wxDCR != NULL){
      return m_wxNavigationEnabledWindowExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxNavigationEnabledWindowExtProcessEvent__wxEventRFunc m_wxNavigationEnabledWindowExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxNavigationEnabledWindow::ProcessEvent(event);
    if (*m_wxNavigationEnabledWindowExtProcessEvent__wxEventR != NULL){
      return m_wxNavigationEnabledWindowExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtQueueEvent__wxEventPFunc m_wxNavigationEnabledWindowExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxNavigationEnabledWindow::QueueEvent(event);
    if (*m_wxNavigationEnabledWindowExtQueueEvent__wxEventP != NULL){
      return m_wxNavigationEnabledWindowExtQueueEvent__wxEventP(this, event);
    }
  }
  wxNavigationEnabledWindowExtRaiseFunc m_wxNavigationEnabledWindowExtRaise = NULL;
  virtual void Raise() override
  {
    wxNavigationEnabledWindow::Raise();
    if (*m_wxNavigationEnabledWindowExtRaise != NULL){
      return m_wxNavigationEnabledWindowExtRaise(this);
    }
  }
  wxNavigationEnabledWindowExtRefresh__boolwxRectCPFunc m_wxNavigationEnabledWindowExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxNavigationEnabledWindow::Refresh(eraseBackground, rect);
    if (*m_wxNavigationEnabledWindowExtRefresh__boolwxRectCP != NULL){
      return m_wxNavigationEnabledWindowExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxNavigationEnabledWindowExtRegisterHotKey__intintintFunc m_wxNavigationEnabledWindowExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxNavigationEnabledWindow::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxNavigationEnabledWindowExtRegisterHotKey__intintint != NULL){
      return m_wxNavigationEnabledWindowExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtRemoveChild__wxWindowBasePFunc m_wxNavigationEnabledWindowExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxNavigationEnabledWindow::RemoveChild(child);
    if (*m_wxNavigationEnabledWindowExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxNavigationEnabledWindowExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxNavigationEnabledWindowExtReparent__wxWindowBasePFunc m_wxNavigationEnabledWindowExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxNavigationEnabledWindow::Reparent(newParent);
    if (*m_wxNavigationEnabledWindowExtReparent__wxWindowBaseP != NULL){
      return m_wxNavigationEnabledWindowExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtScrollLines__intFunc m_wxNavigationEnabledWindowExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxNavigationEnabledWindow::ScrollLines(lines);
    if (*m_wxNavigationEnabledWindowExtScrollLines__int != NULL){
      return m_wxNavigationEnabledWindowExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtScrollPages__intFunc m_wxNavigationEnabledWindowExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxNavigationEnabledWindow::ScrollPages(pages);
    if (*m_wxNavigationEnabledWindowExtScrollPages__int != NULL){
      return m_wxNavigationEnabledWindowExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtScrollWindow__intintwxRectCPFunc m_wxNavigationEnabledWindowExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxNavigationEnabledWindow::ScrollWindow(dx, dy, rect);
    if (*m_wxNavigationEnabledWindowExtScrollWindow__intintwxRectCP != NULL){
      return m_wxNavigationEnabledWindowExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxNavigationEnabledWindowExtSearchEventTable__wxEventTableRwxEventRFunc m_wxNavigationEnabledWindowExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxNavigationEnabledWindow::SearchEventTable(table, event);
    if (*m_wxNavigationEnabledWindowExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxNavigationEnabledWindowExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSendIdleEvents__wxIdleEventRFunc m_wxNavigationEnabledWindowExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxNavigationEnabledWindow::SendIdleEvents(event);
    if (*m_wxNavigationEnabledWindowExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxNavigationEnabledWindowExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSendSizeEvent__intFunc m_wxNavigationEnabledWindowExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxNavigationEnabledWindow::SendSizeEvent(flags);
    if (*m_wxNavigationEnabledWindowExtSendSizeEvent__int != NULL){
      return m_wxNavigationEnabledWindowExtSendSizeEvent__int(this, flags);
    }
  }
  wxNavigationEnabledWindowExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxNavigationEnabledWindowExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxNavigationEnabledWindow::SetAcceleratorTable(accel);
    if (*m_wxNavigationEnabledWindowExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxNavigationEnabledWindowExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxNavigationEnabledWindowExtSetBackgroundColour__wxColourCRFunc m_wxNavigationEnabledWindowExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxNavigationEnabledWindow::SetBackgroundColour(colour);
    if (*m_wxNavigationEnabledWindowExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxNavigationEnabledWindowExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxNavigationEnabledWindowExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxNavigationEnabledWindow::SetBackgroundStyle(style);
    if (*m_wxNavigationEnabledWindowExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxNavigationEnabledWindowExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetCanFocus__boolFunc m_wxNavigationEnabledWindowExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxNavigationEnabledWindow::SetCanFocus(canFocus);
    if (*m_wxNavigationEnabledWindowExtSetCanFocus__bool != NULL){
      return m_wxNavigationEnabledWindowExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxNavigationEnabledWindowExtSetConstraintSizes__boolFunc m_wxNavigationEnabledWindowExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxNavigationEnabledWindow::SetConstraintSizes(recurse);
    if (*m_wxNavigationEnabledWindowExtSetConstraintSizes__bool != NULL){
      return m_wxNavigationEnabledWindowExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxNavigationEnabledWindowExtSetCursor__wxCursorCRFunc m_wxNavigationEnabledWindowExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxNavigationEnabledWindow::SetCursor(cursor);
    if (*m_wxNavigationEnabledWindowExtSetCursor__wxCursorCR != NULL){
      return m_wxNavigationEnabledWindowExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetDoubleBuffered__boolFunc m_wxNavigationEnabledWindowExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxNavigationEnabledWindow::SetDoubleBuffered(on);
    if (*m_wxNavigationEnabledWindowExtSetDoubleBuffered__bool != NULL){
      return m_wxNavigationEnabledWindowExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxNavigationEnabledWindowExtSetDropTarget__wxDropTargetPFunc m_wxNavigationEnabledWindowExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxNavigationEnabledWindow::SetDropTarget(dropTarget);
    if (*m_wxNavigationEnabledWindowExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxNavigationEnabledWindowExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxNavigationEnabledWindowExtSetExtraStyle__longFunc m_wxNavigationEnabledWindowExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxNavigationEnabledWindow::SetExtraStyle(exStyle);
    if (*m_wxNavigationEnabledWindowExtSetExtraStyle__long != NULL){
      return m_wxNavigationEnabledWindowExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxNavigationEnabledWindowExtSetFocusFunc m_wxNavigationEnabledWindowExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxNavigationEnabledWindow::SetFocus();
    if (*m_wxNavigationEnabledWindowExtSetFocus != NULL){
      return m_wxNavigationEnabledWindowExtSetFocus(this);
    }
  }
  wxNavigationEnabledWindowExtSetFocusFromKbdFunc m_wxNavigationEnabledWindowExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxNavigationEnabledWindow::SetFocusFromKbd();
    if (*m_wxNavigationEnabledWindowExtSetFocusFromKbd != NULL){
      return m_wxNavigationEnabledWindowExtSetFocusFromKbd(this);
    }
  }
  wxNavigationEnabledWindowExtSetFont__wxFontCRFunc m_wxNavigationEnabledWindowExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxNavigationEnabledWindow::SetFont(font);
    if (*m_wxNavigationEnabledWindowExtSetFont__wxFontCR != NULL){
      return m_wxNavigationEnabledWindowExtSetFont__wxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetForegroundColour__wxColourCRFunc m_wxNavigationEnabledWindowExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxNavigationEnabledWindow::SetForegroundColour(colour);
    if (*m_wxNavigationEnabledWindowExtSetForegroundColour__wxColourCR != NULL){
      return m_wxNavigationEnabledWindowExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetId__wxWindowIDFunc m_wxNavigationEnabledWindowExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxNavigationEnabledWindow::SetId(winid);
    if (*m_wxNavigationEnabledWindowExtSetId__wxWindowID != NULL){
      return m_wxNavigationEnabledWindowExtSetId__wxWindowID(this, winid);
    }
  }
  wxNavigationEnabledWindowExtSetLabel__wxStringCRFunc m_wxNavigationEnabledWindowExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxNavigationEnabledWindow::SetLabel(label);
    if (*m_wxNavigationEnabledWindowExtSetLabel__wxStringCR != NULL){
      return m_wxNavigationEnabledWindowExtSetLabel__wxStringCR(this, label);
    }
  }
  wxNavigationEnabledWindowExtSetLayoutDirection__wxLayoutDirectionFunc m_wxNavigationEnabledWindowExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxNavigationEnabledWindow::SetLayoutDirection(dir);
    if (*m_wxNavigationEnabledWindowExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxNavigationEnabledWindowExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxNavigationEnabledWindowExtSetMaxClientSize__wxSizeCRFunc m_wxNavigationEnabledWindowExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxNavigationEnabledWindow::SetMaxClientSize(size);
    if (*m_wxNavigationEnabledWindowExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxNavigationEnabledWindowExtSetMaxSize__wxSizeCRFunc m_wxNavigationEnabledWindowExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxNavigationEnabledWindow::SetMaxSize(maxSize);
    if (*m_wxNavigationEnabledWindowExtSetMaxSize__wxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxNavigationEnabledWindowExtSetMinClientSize__wxSizeCRFunc m_wxNavigationEnabledWindowExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxNavigationEnabledWindow::SetMinClientSize(size);
    if (*m_wxNavigationEnabledWindowExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxNavigationEnabledWindowExtSetMinSize__wxSizeCRFunc m_wxNavigationEnabledWindowExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxNavigationEnabledWindow::SetMinSize(minSize);
    if (*m_wxNavigationEnabledWindowExtSetMinSize__wxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxNavigationEnabledWindowExtSetName__wxStringCRFunc m_wxNavigationEnabledWindowExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxNavigationEnabledWindow::SetName(name);
    if (*m_wxNavigationEnabledWindowExtSetName__wxStringCR != NULL){
      return m_wxNavigationEnabledWindowExtSetName__wxStringCR(this, name);
    }
  }
  wxNavigationEnabledWindowExtSetNextHandler__wxEvtHandlerPFunc m_wxNavigationEnabledWindowExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxNavigationEnabledWindow::SetNextHandler(handler);
    if (*m_wxNavigationEnabledWindowExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxNavigationEnabledWindowExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxNavigationEnabledWindowExtSetPreviousHandler__wxEvtHandlerPFunc m_wxNavigationEnabledWindowExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxNavigationEnabledWindow::SetPreviousHandler(handler);
    if (*m_wxNavigationEnabledWindowExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxNavigationEnabledWindowExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxNavigationEnabledWindowExtSetScrollPos__intintboolFunc m_wxNavigationEnabledWindowExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxNavigationEnabledWindow::SetScrollPos(orient, pos, refresh);
    if (*m_wxNavigationEnabledWindowExtSetScrollPos__intintbool != NULL){
      return m_wxNavigationEnabledWindowExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxNavigationEnabledWindowExtSetScrollbar__intintintintboolFunc m_wxNavigationEnabledWindowExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxNavigationEnabledWindow::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxNavigationEnabledWindowExtSetScrollbar__intintintintbool != NULL){
      return m_wxNavigationEnabledWindowExtSetScrollbar__intintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxNavigationEnabledWindowExtSetSizeConstraint__intintintintFunc m_wxNavigationEnabledWindowExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxNavigationEnabledWindow::SetSizeConstraint(x, y, w, h);
    if (*m_wxNavigationEnabledWindowExtSetSizeConstraint__intintintint != NULL){
      return m_wxNavigationEnabledWindowExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxNavigationEnabledWindowExtSetSizeHints__intintintintintintFunc m_wxNavigationEnabledWindowExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxNavigationEnabledWindow::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxNavigationEnabledWindowExtSetSizeHints__intintintintintint != NULL){
      return m_wxNavigationEnabledWindowExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxNavigationEnabledWindowExtSetThemeEnabled__boolFunc m_wxNavigationEnabledWindowExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxNavigationEnabledWindow::SetThemeEnabled(enableTheme);
    if (*m_wxNavigationEnabledWindowExtSetThemeEnabled__bool != NULL){
      return m_wxNavigationEnabledWindowExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxNavigationEnabledWindowExtSetTransparent__wxByteFunc m_wxNavigationEnabledWindowExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxNavigationEnabledWindow::SetTransparent(alpha);
    if (*m_wxNavigationEnabledWindowExtSetTransparent__wxByte != NULL){
      return m_wxNavigationEnabledWindowExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetValidator__wxValidatorCRFunc m_wxNavigationEnabledWindowExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxNavigationEnabledWindow::SetValidator(validator);
    if (*m_wxNavigationEnabledWindowExtSetValidator__wxValidatorCR != NULL){
      return m_wxNavigationEnabledWindowExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxNavigationEnabledWindowExtSetWindowStyleFlag__longFunc m_wxNavigationEnabledWindowExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxNavigationEnabledWindow::SetWindowStyleFlag(style);
    if (*m_wxNavigationEnabledWindowExtSetWindowStyleFlag__long != NULL){
      return m_wxNavigationEnabledWindowExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxNavigationEnabledWindowExtShouldInheritColoursFunc m_wxNavigationEnabledWindowExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxNavigationEnabledWindow::ShouldInheritColours();
    if (*m_wxNavigationEnabledWindowExtShouldInheritColours != NULL){
      return m_wxNavigationEnabledWindowExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtShow__boolFunc m_wxNavigationEnabledWindowExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxNavigationEnabledWindow::Show(show);
    if (*m_wxNavigationEnabledWindowExtShow__bool != NULL){
      return m_wxNavigationEnabledWindowExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtShowWithEffect__wxShowEffectunsignedintFunc m_wxNavigationEnabledWindowExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxNavigationEnabledWindow::ShowWithEffect(effect, timeout);
    if (*m_wxNavigationEnabledWindowExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxNavigationEnabledWindowExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtTransferDataFromWindowFunc m_wxNavigationEnabledWindowExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxNavigationEnabledWindow::TransferDataFromWindow();
    if (*m_wxNavigationEnabledWindowExtTransferDataFromWindow != NULL){
      return m_wxNavigationEnabledWindowExtTransferDataFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtTransferDataToWindowFunc m_wxNavigationEnabledWindowExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxNavigationEnabledWindow::TransferDataToWindow();
    if (*m_wxNavigationEnabledWindowExtTransferDataToWindow != NULL){
      return m_wxNavigationEnabledWindowExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtTriggerScrollEvent__wxEventTypeFunc m_wxNavigationEnabledWindowExtTriggerScrollEvent__wxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxNavigationEnabledWindow::TriggerScrollEvent(scrollEvent);
    if (*m_wxNavigationEnabledWindowExtTriggerScrollEvent__wxEventType != NULL){
      return m_wxNavigationEnabledWindowExtTriggerScrollEvent__wxEventType(this, scrollEvent);
    }
  }
  wxNavigationEnabledWindowExtTryAfter__wxEventRFunc m_wxNavigationEnabledWindowExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxNavigationEnabledWindow::TryAfter(event);
    if (*m_wxNavigationEnabledWindowExtTryAfter__wxEventR != NULL){
      return m_wxNavigationEnabledWindowExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtTryBefore__wxEventRFunc m_wxNavigationEnabledWindowExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxNavigationEnabledWindow::TryBefore(event);
    if (*m_wxNavigationEnabledWindowExtTryBefore__wxEventR != NULL){
      return m_wxNavigationEnabledWindowExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtUnregisterHotKey__intFunc m_wxNavigationEnabledWindowExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxNavigationEnabledWindow::UnregisterHotKey(hotkeyId);
    if (*m_wxNavigationEnabledWindowExtUnregisterHotKey__int != NULL){
      return m_wxNavigationEnabledWindowExtUnregisterHotKey__int(this, hotkeyId, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtUpdateFunc m_wxNavigationEnabledWindowExtUpdate = NULL;
  virtual void Update() override
  {
    wxNavigationEnabledWindow::Update();
    if (*m_wxNavigationEnabledWindowExtUpdate != NULL){
      return m_wxNavigationEnabledWindowExtUpdate(this);
    }
  }
  wxNavigationEnabledWindowExtUpdateWindowUI__longFunc m_wxNavigationEnabledWindowExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxNavigationEnabledWindow::UpdateWindowUI(flags);
    if (*m_wxNavigationEnabledWindowExtUpdateWindowUI__long != NULL){
      return m_wxNavigationEnabledWindowExtUpdateWindowUI__long(this, flags);
    }
  }
  wxNavigationEnabledWindowExtValidateFunc m_wxNavigationEnabledWindowExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxNavigationEnabledWindow::Validate();
    if (*m_wxNavigationEnabledWindowExtValidate != NULL){
      return m_wxNavigationEnabledWindowExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxNavigationEnabledWindowExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxNavigationEnabledWindow::WXAdjustFontToOwnPPI(font);
    if (*m_wxNavigationEnabledWindowExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxNavigationEnabledWindowExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxNavigationEnabledWindowExtWXGetTextEntryFunc m_wxNavigationEnabledWindowExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxNavigationEnabledWindow::WXGetTextEntry();
    if (*m_wxNavigationEnabledWindowExtWXGetTextEntry != NULL){
      return m_wxNavigationEnabledWindowExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXReservedEvtHandler1__voidPFunc m_wxNavigationEnabledWindowExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxNavigationEnabledWindow::WXReservedEvtHandler1(param0);
    if (*m_wxNavigationEnabledWindowExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxNavigationEnabledWindowExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXReservedEvtHandler2__voidPFunc m_wxNavigationEnabledWindowExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxNavigationEnabledWindow::WXReservedEvtHandler2(param0);
    if (*m_wxNavigationEnabledWindowExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxNavigationEnabledWindowExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXReservedWindow1__voidPFunc m_wxNavigationEnabledWindowExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxNavigationEnabledWindow::WXReservedWindow1(param0);
    if (*m_wxNavigationEnabledWindowExtWXReservedWindow1__voidP != NULL){
      return m_wxNavigationEnabledWindowExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXReservedWindow2__voidPFunc m_wxNavigationEnabledWindowExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxNavigationEnabledWindow::WXReservedWindow2(param0);
    if (*m_wxNavigationEnabledWindowExtWXReservedWindow2__voidP != NULL){
      return m_wxNavigationEnabledWindowExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXReservedWindow3__voidPFunc m_wxNavigationEnabledWindowExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxNavigationEnabledWindow::WXReservedWindow3(param0);
    if (*m_wxNavigationEnabledWindowExtWXReservedWindow3__voidP != NULL){
      return m_wxNavigationEnabledWindowExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxNavigationEnabledWindowExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxNavigationEnabledWindow::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxNavigationEnabledWindowExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxNavigationEnabledWindowExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxNavigationEnabledWindowExtWarpPointer__intintFunc m_wxNavigationEnabledWindowExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxNavigationEnabledWindow::WarpPointer(x, y);
    if (*m_wxNavigationEnabledWindowExtWarpPointer__intint != NULL){
      return m_wxNavigationEnabledWindowExtWarpPointer__intint(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtWindowToClientSize__wxSizeCRFunc m_wxNavigationEnabledWindowExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxNavigationEnabledWindow::WindowToClientSize(size);
    if (*m_wxNavigationEnabledWindowExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExt(wxNavigationEnabledWindowExtAcceptsFocusFunc a_AcceptsFocus, wxNavigationEnabledWindowExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxNavigationEnabledWindowExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxNavigationEnabledWindowExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxNavigationEnabledWindowExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxNavigationEnabledWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxNavigationEnabledWindowExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxNavigationEnabledWindowExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxNavigationEnabledWindowExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxNavigationEnabledWindowExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxNavigationEnabledWindowExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxNavigationEnabledWindowExtCanBeFocusedFunc a_CanBeFocused, wxNavigationEnabledWindowExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxNavigationEnabledWindowExtCanScroll__intFunc a_CanScroll__int, wxNavigationEnabledWindowExtCanSetTransparentFunc a_CanSetTransparent, wxNavigationEnabledWindowExtClearBackgroundFunc a_ClearBackground, wxNavigationEnabledWindowExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxNavigationEnabledWindowExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxNavigationEnabledWindowExtCreateRefDataFunc a_CreateRefData, wxNavigationEnabledWindowExtDestroyFunc a_Destroy, wxNavigationEnabledWindowExtDissociateHandleFunc a_DissociateHandle, wxNavigationEnabledWindowExtDoCaptureMouseFunc a_DoCaptureMouse, wxNavigationEnabledWindowExtDoCentre__intFunc a_DoCentre__int, wxNavigationEnabledWindowExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxNavigationEnabledWindowExtDoEnable__boolFunc a_DoEnable__bool, wxNavigationEnabledWindowExtDoFreezeFunc a_DoFreeze, wxNavigationEnabledWindowExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxNavigationEnabledWindowExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxNavigationEnabledWindowExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxNavigationEnabledWindowExtDoGetBestSizeFunc a_DoGetBestSize, wxNavigationEnabledWindowExtDoGetClientDataFunc a_DoGetClientData, wxNavigationEnabledWindowExtDoGetClientObjectFunc a_DoGetClientObject, wxNavigationEnabledWindowExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxNavigationEnabledWindowExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxNavigationEnabledWindowExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxNavigationEnabledWindowExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxNavigationEnabledWindowExtDoGetSizeFromClientSize__wxSizeCRFunc a_DoGetSizeFromClientSize__wxSizeCR, wxNavigationEnabledWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxNavigationEnabledWindowExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxNavigationEnabledWindowExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxNavigationEnabledWindowExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxNavigationEnabledWindowExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxNavigationEnabledWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxNavigationEnabledWindowExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxNavigationEnabledWindowExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxNavigationEnabledWindowExtDoPhase__intFunc a_DoPhase__int, wxNavigationEnabledWindowExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxNavigationEnabledWindowExtDoReleaseMouseFunc a_DoReleaseMouse, wxNavigationEnabledWindowExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxNavigationEnabledWindowExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxNavigationEnabledWindowExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxNavigationEnabledWindowExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxNavigationEnabledWindowExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxNavigationEnabledWindowExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxNavigationEnabledWindowExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxNavigationEnabledWindowExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxNavigationEnabledWindowExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxNavigationEnabledWindowExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxNavigationEnabledWindowExtDoThawFunc a_DoThaw, wxNavigationEnabledWindowExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxNavigationEnabledWindowExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxNavigationEnabledWindowExtEnable__boolFunc a_Enable__bool, wxNavigationEnabledWindowExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxNavigationEnabledWindowExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxNavigationEnabledWindowExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxNavigationEnabledWindowExtFitFunc a_Fit, wxNavigationEnabledWindowExtFitInsideFunc a_FitInside, wxNavigationEnabledWindowExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxNavigationEnabledWindowExtGetCharHeightFunc a_GetCharHeight, wxNavigationEnabledWindowExtGetCharWidthFunc a_GetCharWidth, wxNavigationEnabledWindowExtGetClassInfoFunc a_GetClassInfo, wxNavigationEnabledWindowExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxNavigationEnabledWindowExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxNavigationEnabledWindowExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxNavigationEnabledWindowExtGetDPIFunc a_GetDPI, wxNavigationEnabledWindowExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxNavigationEnabledWindowExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxNavigationEnabledWindowExtGetDefaultBorderFunc a_GetDefaultBorder, wxNavigationEnabledWindowExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxNavigationEnabledWindowExtGetDropTargetFunc a_GetDropTarget, wxNavigationEnabledWindowExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxNavigationEnabledWindowExtGetEventHashTableFunc a_GetEventHashTable, wxNavigationEnabledWindowExtGetEventTableFunc a_GetEventTable, wxNavigationEnabledWindowExtGetHandleFunc a_GetHandle, wxNavigationEnabledWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxNavigationEnabledWindowExtGetLabelFunc a_GetLabel, wxNavigationEnabledWindowExtGetLayoutDirectionFunc a_GetLayoutDirection, wxNavigationEnabledWindowExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxNavigationEnabledWindowExtGetMaxClientSizeFunc a_GetMaxClientSize, wxNavigationEnabledWindowExtGetMaxSizeFunc a_GetMaxSize, wxNavigationEnabledWindowExtGetMinClientSizeFunc a_GetMinClientSize, wxNavigationEnabledWindowExtGetMinSizeFunc a_GetMinSize, wxNavigationEnabledWindowExtGetNameFunc a_GetName, wxNavigationEnabledWindowExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxNavigationEnabledWindowExtGetScrollPos__intFunc a_GetScrollPos__int, wxNavigationEnabledWindowExtGetScrollRange__intFunc a_GetScrollRange__int, wxNavigationEnabledWindowExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxNavigationEnabledWindowExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxNavigationEnabledWindowExtGetThemeEnabledFunc a_GetThemeEnabled, wxNavigationEnabledWindowExtGetTransparentFunc a_GetTransparent, wxNavigationEnabledWindowExtGetValidatorFunc a_GetValidator, wxNavigationEnabledWindowExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxNavigationEnabledWindowExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxNavigationEnabledWindowExtHasCaptureFunc a_HasCapture, wxNavigationEnabledWindowExtHasFocusFunc a_HasFocus, wxNavigationEnabledWindowExtHasMultiplePagesFunc a_HasMultiplePages, wxNavigationEnabledWindowExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxNavigationEnabledWindowExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxNavigationEnabledWindowExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxNavigationEnabledWindowExtInheritAttributesFunc a_InheritAttributes, wxNavigationEnabledWindowExtInitDialogFunc a_InitDialog, wxNavigationEnabledWindowExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxNavigationEnabledWindowExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxNavigationEnabledWindowExtIsRetainedFunc a_IsRetained, wxNavigationEnabledWindowExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxNavigationEnabledWindowExtIsShownFunc a_IsShown, wxNavigationEnabledWindowExtIsShownOnScreenFunc a_IsShownOnScreen, wxNavigationEnabledWindowExtIsThisEnabledFunc a_IsThisEnabled, wxNavigationEnabledWindowExtIsTopLevelFunc a_IsTopLevel, wxNavigationEnabledWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxNavigationEnabledWindowExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxNavigationEnabledWindowExtLayoutFunc a_Layout, wxNavigationEnabledWindowExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxNavigationEnabledWindowExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxNavigationEnabledWindowExtLowerFunc a_Lower, wxNavigationEnabledWindowExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxNavigationEnabledWindowExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxNavigationEnabledWindowExtOnInternalIdleFunc a_OnInternalIdle, wxNavigationEnabledWindowExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxNavigationEnabledWindowExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxNavigationEnabledWindowExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxNavigationEnabledWindowExtRaiseFunc a_Raise, wxNavigationEnabledWindowExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxNavigationEnabledWindowExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxNavigationEnabledWindowExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxNavigationEnabledWindowExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxNavigationEnabledWindowExtScrollLines__intFunc a_ScrollLines__int, wxNavigationEnabledWindowExtScrollPages__intFunc a_ScrollPages__int, wxNavigationEnabledWindowExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxNavigationEnabledWindowExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxNavigationEnabledWindowExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxNavigationEnabledWindowExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxNavigationEnabledWindowExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxNavigationEnabledWindowExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxNavigationEnabledWindowExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxNavigationEnabledWindowExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxNavigationEnabledWindowExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxNavigationEnabledWindowExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxNavigationEnabledWindowExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxNavigationEnabledWindowExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxNavigationEnabledWindowExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxNavigationEnabledWindowExtSetFocusFunc a_SetFocus, wxNavigationEnabledWindowExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxNavigationEnabledWindowExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxNavigationEnabledWindowExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxNavigationEnabledWindowExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxNavigationEnabledWindowExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxNavigationEnabledWindowExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxNavigationEnabledWindowExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxNavigationEnabledWindowExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxNavigationEnabledWindowExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxNavigationEnabledWindowExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxNavigationEnabledWindowExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxNavigationEnabledWindowExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxNavigationEnabledWindowExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxNavigationEnabledWindowExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxNavigationEnabledWindowExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxNavigationEnabledWindowExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxNavigationEnabledWindowExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxNavigationEnabledWindowExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxNavigationEnabledWindowExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxNavigationEnabledWindowExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxNavigationEnabledWindowExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxNavigationEnabledWindowExtShouldInheritColoursFunc a_ShouldInheritColours, wxNavigationEnabledWindowExtShow__boolFunc a_Show__bool, wxNavigationEnabledWindowExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxNavigationEnabledWindowExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxNavigationEnabledWindowExtTransferDataToWindowFunc a_TransferDataToWindow, wxNavigationEnabledWindowExtTriggerScrollEvent__wxEventTypeFunc a_TriggerScrollEvent__wxEventType, wxNavigationEnabledWindowExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxNavigationEnabledWindowExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxNavigationEnabledWindowExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxNavigationEnabledWindowExtUpdateFunc a_Update, wxNavigationEnabledWindowExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxNavigationEnabledWindowExtValidateFunc a_Validate, wxNavigationEnabledWindowExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxNavigationEnabledWindowExtWXGetTextEntryFunc a_WXGetTextEntry, wxNavigationEnabledWindowExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxNavigationEnabledWindowExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxNavigationEnabledWindowExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxNavigationEnabledWindowExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxNavigationEnabledWindowExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxNavigationEnabledWindowExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxNavigationEnabledWindowExtWarpPointer__intintFunc a_WarpPointer__intint, wxNavigationEnabledWindowExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxNavigationEnabledWindow() {
    m_wxNavigationEnabledWindowExtAcceptsFocus = a_AcceptsFocus;
    m_wxNavigationEnabledWindowExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxNavigationEnabledWindowExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxNavigationEnabledWindowExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxNavigationEnabledWindowExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxNavigationEnabledWindowExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxNavigationEnabledWindowExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxNavigationEnabledWindowExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxNavigationEnabledWindowExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxNavigationEnabledWindowExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxNavigationEnabledWindowExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxNavigationEnabledWindowExtCanBeFocused = a_CanBeFocused;
    m_wxNavigationEnabledWindowExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxNavigationEnabledWindowExtCanScroll__int = a_CanScroll__int;
    m_wxNavigationEnabledWindowExtCanSetTransparent = a_CanSetTransparent;
    m_wxNavigationEnabledWindowExtClearBackground = a_ClearBackground;
    m_wxNavigationEnabledWindowExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxNavigationEnabledWindowExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxNavigationEnabledWindowExtCreateRefData = a_CreateRefData;
    m_wxNavigationEnabledWindowExtDestroy = a_Destroy;
    m_wxNavigationEnabledWindowExtDissociateHandle = a_DissociateHandle;
    m_wxNavigationEnabledWindowExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxNavigationEnabledWindowExtDoCentre__int = a_DoCentre__int;
    m_wxNavigationEnabledWindowExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxNavigationEnabledWindowExtDoEnable__bool = a_DoEnable__bool;
    m_wxNavigationEnabledWindowExtDoFreeze = a_DoFreeze;
    m_wxNavigationEnabledWindowExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxNavigationEnabledWindowExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxNavigationEnabledWindowExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxNavigationEnabledWindowExtDoGetBestSize = a_DoGetBestSize;
    m_wxNavigationEnabledWindowExtDoGetClientData = a_DoGetClientData;
    m_wxNavigationEnabledWindowExtDoGetClientObject = a_DoGetClientObject;
    m_wxNavigationEnabledWindowExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxNavigationEnabledWindowExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxNavigationEnabledWindowExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxNavigationEnabledWindowExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxNavigationEnabledWindowExtDoGetSizeFromClientSize__wxSizeCR = a_DoGetSizeFromClientSize__wxSizeCR;
    m_wxNavigationEnabledWindowExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxNavigationEnabledWindowExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxNavigationEnabledWindowExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxNavigationEnabledWindowExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxNavigationEnabledWindowExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxNavigationEnabledWindowExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxNavigationEnabledWindowExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxNavigationEnabledWindowExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxNavigationEnabledWindowExtDoPhase__int = a_DoPhase__int;
    m_wxNavigationEnabledWindowExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxNavigationEnabledWindowExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxNavigationEnabledWindowExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxNavigationEnabledWindowExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxNavigationEnabledWindowExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxNavigationEnabledWindowExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxNavigationEnabledWindowExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxNavigationEnabledWindowExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxNavigationEnabledWindowExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxNavigationEnabledWindowExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxNavigationEnabledWindowExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxNavigationEnabledWindowExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxNavigationEnabledWindowExtDoThaw = a_DoThaw;
    m_wxNavigationEnabledWindowExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxNavigationEnabledWindowExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxNavigationEnabledWindowExtEnable__bool = a_Enable__bool;
    m_wxNavigationEnabledWindowExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxNavigationEnabledWindowExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxNavigationEnabledWindowExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxNavigationEnabledWindowExtFit = a_Fit;
    m_wxNavigationEnabledWindowExtFitInside = a_FitInside;
    m_wxNavigationEnabledWindowExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxNavigationEnabledWindowExtGetCharHeight = a_GetCharHeight;
    m_wxNavigationEnabledWindowExtGetCharWidth = a_GetCharWidth;
    m_wxNavigationEnabledWindowExtGetClassInfo = a_GetClassInfo;
    m_wxNavigationEnabledWindowExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxNavigationEnabledWindowExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
    m_wxNavigationEnabledWindowExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxNavigationEnabledWindowExtGetDPI = a_GetDPI;
    m_wxNavigationEnabledWindowExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxNavigationEnabledWindowExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxNavigationEnabledWindowExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxNavigationEnabledWindowExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxNavigationEnabledWindowExtGetDropTarget = a_GetDropTarget;
    m_wxNavigationEnabledWindowExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxNavigationEnabledWindowExtGetEventHashTable = a_GetEventHashTable;
    m_wxNavigationEnabledWindowExtGetEventTable = a_GetEventTable;
    m_wxNavigationEnabledWindowExtGetHandle = a_GetHandle;
    m_wxNavigationEnabledWindowExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxNavigationEnabledWindowExtGetLabel = a_GetLabel;
    m_wxNavigationEnabledWindowExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxNavigationEnabledWindowExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxNavigationEnabledWindowExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxNavigationEnabledWindowExtGetMaxSize = a_GetMaxSize;
    m_wxNavigationEnabledWindowExtGetMinClientSize = a_GetMinClientSize;
    m_wxNavigationEnabledWindowExtGetMinSize = a_GetMinSize;
    m_wxNavigationEnabledWindowExtGetName = a_GetName;
    m_wxNavigationEnabledWindowExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxNavigationEnabledWindowExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxNavigationEnabledWindowExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxNavigationEnabledWindowExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxNavigationEnabledWindowExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxNavigationEnabledWindowExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxNavigationEnabledWindowExtGetTransparent = a_GetTransparent;
    m_wxNavigationEnabledWindowExtGetValidator = a_GetValidator;
    m_wxNavigationEnabledWindowExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxNavigationEnabledWindowExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxNavigationEnabledWindowExtHasCapture = a_HasCapture;
    m_wxNavigationEnabledWindowExtHasFocus = a_HasFocus;
    m_wxNavigationEnabledWindowExtHasMultiplePages = a_HasMultiplePages;
    m_wxNavigationEnabledWindowExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxNavigationEnabledWindowExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxNavigationEnabledWindowExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxNavigationEnabledWindowExtInheritAttributes = a_InheritAttributes;
    m_wxNavigationEnabledWindowExtInitDialog = a_InitDialog;
    m_wxNavigationEnabledWindowExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxNavigationEnabledWindowExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxNavigationEnabledWindowExtIsRetained = a_IsRetained;
    m_wxNavigationEnabledWindowExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxNavigationEnabledWindowExtIsShown = a_IsShown;
    m_wxNavigationEnabledWindowExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxNavigationEnabledWindowExtIsThisEnabled = a_IsThisEnabled;
    m_wxNavigationEnabledWindowExtIsTopLevel = a_IsTopLevel;
    m_wxNavigationEnabledWindowExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxNavigationEnabledWindowExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxNavigationEnabledWindowExtLayout = a_Layout;
    m_wxNavigationEnabledWindowExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxNavigationEnabledWindowExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxNavigationEnabledWindowExtLower = a_Lower;
    m_wxNavigationEnabledWindowExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxNavigationEnabledWindowExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxNavigationEnabledWindowExtOnInternalIdle = a_OnInternalIdle;
    m_wxNavigationEnabledWindowExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxNavigationEnabledWindowExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxNavigationEnabledWindowExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxNavigationEnabledWindowExtRaise = a_Raise;
    m_wxNavigationEnabledWindowExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxNavigationEnabledWindowExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxNavigationEnabledWindowExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxNavigationEnabledWindowExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxNavigationEnabledWindowExtScrollLines__int = a_ScrollLines__int;
    m_wxNavigationEnabledWindowExtScrollPages__int = a_ScrollPages__int;
    m_wxNavigationEnabledWindowExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxNavigationEnabledWindowExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxNavigationEnabledWindowExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxNavigationEnabledWindowExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxNavigationEnabledWindowExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxNavigationEnabledWindowExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxNavigationEnabledWindowExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxNavigationEnabledWindowExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxNavigationEnabledWindowExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxNavigationEnabledWindowExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxNavigationEnabledWindowExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxNavigationEnabledWindowExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxNavigationEnabledWindowExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxNavigationEnabledWindowExtSetFocus = a_SetFocus;
    m_wxNavigationEnabledWindowExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxNavigationEnabledWindowExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxNavigationEnabledWindowExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxNavigationEnabledWindowExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxNavigationEnabledWindowExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxNavigationEnabledWindowExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxNavigationEnabledWindowExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxNavigationEnabledWindowExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxNavigationEnabledWindowExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxNavigationEnabledWindowExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxNavigationEnabledWindowExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxNavigationEnabledWindowExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxNavigationEnabledWindowExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxNavigationEnabledWindowExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxNavigationEnabledWindowExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxNavigationEnabledWindowExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxNavigationEnabledWindowExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxNavigationEnabledWindowExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxNavigationEnabledWindowExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxNavigationEnabledWindowExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxNavigationEnabledWindowExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxNavigationEnabledWindowExtShouldInheritColours = a_ShouldInheritColours;
    m_wxNavigationEnabledWindowExtShow__bool = a_Show__bool;
    m_wxNavigationEnabledWindowExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxNavigationEnabledWindowExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxNavigationEnabledWindowExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxNavigationEnabledWindowExtTriggerScrollEvent__wxEventType = a_TriggerScrollEvent__wxEventType;
    m_wxNavigationEnabledWindowExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxNavigationEnabledWindowExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxNavigationEnabledWindowExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxNavigationEnabledWindowExtUpdate = a_Update;
    m_wxNavigationEnabledWindowExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxNavigationEnabledWindowExtValidate = a_Validate;
    m_wxNavigationEnabledWindowExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxNavigationEnabledWindowExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxNavigationEnabledWindowExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxNavigationEnabledWindowExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxNavigationEnabledWindowExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxNavigationEnabledWindowExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxNavigationEnabledWindowExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxNavigationEnabledWindowExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxNavigationEnabledWindowExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxNavigationEnabledWindowExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
  }
};

class wxPanelBaseExt: public wxPanelBase
{
public:
  wxPanelBaseExt(): wxPanelBase()  {  }
  wxPanelBaseExtAcceptsFocusFunc m_wxPanelBaseExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxPanelBase::AcceptsFocus();
    if (*m_wxPanelBaseExtAcceptsFocus != NULL){
      return m_wxPanelBaseExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtAcceptsFocusFromKeyboardFunc m_wxPanelBaseExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxPanelBase::AcceptsFocusFromKeyboard();
    if (*m_wxPanelBaseExtAcceptsFocusFromKeyboard != NULL){
      return m_wxPanelBaseExtAcceptsFocusFromKeyboard(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtAcceptsFocusRecursivelyFunc m_wxPanelBaseExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxPanelBase::AcceptsFocusRecursively();
    if (*m_wxPanelBaseExtAcceptsFocusRecursively != NULL){
      return m_wxPanelBaseExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtAddChild__wxWindowBasePFunc m_wxPanelBaseExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxPanelBase::AddChild(child);
    if (*m_wxPanelBaseExtAddChild__wxWindowBaseP != NULL){
      return m_wxPanelBaseExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxPanelBaseExtAddPendingEvent__wxEventCRFunc m_wxPanelBaseExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxPanelBase::AddPendingEvent(event);
    if (*m_wxPanelBaseExtAddPendingEvent__wxEventCR != NULL){
      return m_wxPanelBaseExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxPanelBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxPanelBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxPanelBase::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxPanelBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxPanelBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtAdjustForParentClientOrigin__intRintRintFunc m_wxPanelBaseExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxPanelBase::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxPanelBaseExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxPanelBaseExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxPanelBaseExtAlwaysShowScrollbars__boolboolFunc m_wxPanelBaseExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxPanelBase::AlwaysShowScrollbars(horz, vert);
    if (*m_wxPanelBaseExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxPanelBaseExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxPanelBaseExtAssociateHandle__WXWidgetFunc m_wxPanelBaseExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxPanelBase::AssociateHandle(handle);
    if (*m_wxPanelBaseExtAssociateHandle__WXWidget != NULL){
      return m_wxPanelBaseExtAssociateHandle__WXWidget(this, handle);
    }
  }
  wxPanelBaseExtBeginRepositioningChildrenFunc m_wxPanelBaseExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxPanelBase::BeginRepositioningChildren();
    if (*m_wxPanelBaseExtBeginRepositioningChildren != NULL){
      return m_wxPanelBaseExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtCanApplyThemeBorderFunc m_wxPanelBaseExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxPanelBase::CanApplyThemeBorder();
    if (*m_wxPanelBaseExtCanApplyThemeBorder != NULL){
      return m_wxPanelBaseExtCanApplyThemeBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtCanBeFocusedFunc m_wxPanelBaseExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxPanelBase::CanBeFocused();
    if (*m_wxPanelBaseExtCanBeFocused != NULL){
      return m_wxPanelBaseExtCanBeFocused(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtCanBeOutsideClientAreaFunc m_wxPanelBaseExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxPanelBase::CanBeOutsideClientArea();
    if (*m_wxPanelBaseExtCanBeOutsideClientArea != NULL){
      return m_wxPanelBaseExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtCanScroll__intFunc m_wxPanelBaseExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxPanelBase::CanScroll(orient);
    if (*m_wxPanelBaseExtCanScroll__int != NULL){
      return m_wxPanelBaseExtCanScroll__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtCanSetTransparentFunc m_wxPanelBaseExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxPanelBase::CanSetTransparent();
    if (*m_wxPanelBaseExtCanSetTransparent != NULL){
      return m_wxPanelBaseExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtClearBackgroundFunc m_wxPanelBaseExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxPanelBase::ClearBackground();
    if (*m_wxPanelBaseExtClearBackground != NULL){
      return m_wxPanelBaseExtClearBackground(this);
    }
  }
  wxPanelBaseExtClientToWindowSize__wxSizeCRFunc m_wxPanelBaseExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxPanelBase::ClientToWindowSize(size);
    if (*m_wxPanelBaseExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxPanelBaseExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtCloneRefData__wxObjectRefDataCPFunc m_wxPanelBaseExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxPanelBase::CloneRefData(data);
    if (*m_wxPanelBaseExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxPanelBaseExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtCreateRefDataFunc m_wxPanelBaseExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxPanelBase::CreateRefData();
    if (*m_wxPanelBaseExtCreateRefData != NULL){
      return m_wxPanelBaseExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDestroyFunc m_wxPanelBaseExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxPanelBase::Destroy();
    if (*m_wxPanelBaseExtDestroy != NULL){
      return m_wxPanelBaseExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDissociateHandleFunc m_wxPanelBaseExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxPanelBase::DissociateHandle();
    if (*m_wxPanelBaseExtDissociateHandle != NULL){
      return m_wxPanelBaseExtDissociateHandle(this);
    }
  }
  wxPanelBaseExtDoCaptureMouseFunc m_wxPanelBaseExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxPanelBase::DoCaptureMouse();
    if (*m_wxPanelBaseExtDoCaptureMouse != NULL){
      return m_wxPanelBaseExtDoCaptureMouse(this);
    }
  }
  wxPanelBaseExtDoCentre__intFunc m_wxPanelBaseExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxPanelBase::DoCentre(dir);
    if (*m_wxPanelBaseExtDoCentre__int != NULL){
      return m_wxPanelBaseExtDoCentre__int(this, dir);
    }
  }
  wxPanelBaseExtDoClientToScreen__intPintPFunc m_wxPanelBaseExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxPanelBase::DoClientToScreen(x, y);
    if (*m_wxPanelBaseExtDoClientToScreen__intPintP != NULL){
      return m_wxPanelBaseExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxPanelBaseExtDoEnable__boolFunc m_wxPanelBaseExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxPanelBase::DoEnable(enable);
    if (*m_wxPanelBaseExtDoEnable__bool != NULL){
      return m_wxPanelBaseExtDoEnable__bool(this, enable);
    }
  }
  wxPanelBaseExtDoFreezeFunc m_wxPanelBaseExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxPanelBase::DoFreeze();
    if (*m_wxPanelBaseExtDoFreeze != NULL){
      return m_wxPanelBaseExtDoFreeze(this);
    }
  }
  wxPanelBaseExtDoGetBestClientHeight__intFunc m_wxPanelBaseExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxPanelBase::DoGetBestClientHeight(width);
    if (*m_wxPanelBaseExtDoGetBestClientHeight__int != NULL){
      return m_wxPanelBaseExtDoGetBestClientHeight__int(this, width, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoGetBestClientSizeFunc m_wxPanelBaseExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxPanelBase::DoGetBestClientSize();
    if (*m_wxPanelBaseExtDoGetBestClientSize != NULL){
      return m_wxPanelBaseExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoGetBestClientWidth__intFunc m_wxPanelBaseExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxPanelBase::DoGetBestClientWidth(height);
    if (*m_wxPanelBaseExtDoGetBestClientWidth__int != NULL){
      return m_wxPanelBaseExtDoGetBestClientWidth__int(this, height, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoGetBestSizeFunc m_wxPanelBaseExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxPanelBase::DoGetBestSize();
    if (*m_wxPanelBaseExtDoGetBestSize != NULL){
      return m_wxPanelBaseExtDoGetBestSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoGetClientDataFunc m_wxPanelBaseExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxPanelBase::DoGetClientData();
    if (*m_wxPanelBaseExtDoGetClientData != NULL){
      return m_wxPanelBaseExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoGetClientObjectFunc m_wxPanelBaseExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxPanelBase::DoGetClientObject();
    if (*m_wxPanelBaseExtDoGetClientObject != NULL){
      return m_wxPanelBaseExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoGetClientSize__intPintPFunc m_wxPanelBaseExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxPanelBase::DoGetClientSize(width, height);
    if (*m_wxPanelBaseExtDoGetClientSize__intPintP != NULL){
      return m_wxPanelBaseExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxPanelBaseExtDoGetPosition__intPintPFunc m_wxPanelBaseExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxPanelBase::DoGetPosition(x, y);
    if (*m_wxPanelBaseExtDoGetPosition__intPintP != NULL){
      return m_wxPanelBaseExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxPanelBaseExtDoGetScreenPosition__intPintPFunc m_wxPanelBaseExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxPanelBase::DoGetScreenPosition(x, y);
    if (*m_wxPanelBaseExtDoGetScreenPosition__intPintP != NULL){
      return m_wxPanelBaseExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxPanelBaseExtDoGetSize__intPintPFunc m_wxPanelBaseExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxPanelBase::DoGetSize(width, height);
    if (*m_wxPanelBaseExtDoGetSize__intPintP != NULL){
      return m_wxPanelBaseExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxPanelBaseExtDoGetSizeFromClientSize__wxSizeCRFunc m_wxPanelBaseExtDoGetSizeFromClientSize__wxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxPanelBase::DoGetSizeFromClientSize(size);
    if (*m_wxPanelBaseExtDoGetSizeFromClientSize__wxSizeCR != NULL){
      return m_wxPanelBaseExtDoGetSizeFromClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxPanelBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxPanelBase::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxPanelBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxPanelBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxPanelBaseExtDoGetVirtualSizeFunc m_wxPanelBaseExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxPanelBase::DoGetVirtualSize();
    if (*m_wxPanelBaseExtDoGetVirtualSize != NULL){
      return m_wxPanelBaseExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoHitTest__wxCoordwxCoordFunc m_wxPanelBaseExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxPanelBase::DoHitTest(x, y);
    if (*m_wxPanelBaseExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxPanelBaseExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoIsExposed__intintintintFunc m_wxPanelBaseExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxPanelBase::DoIsExposed(x, y, w, h);
    if (*m_wxPanelBaseExtDoIsExposed__intintintint != NULL){
      return m_wxPanelBaseExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoIsExposed__intintFunc m_wxPanelBaseExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxPanelBase::DoIsExposed(x, y);
    if (*m_wxPanelBaseExtDoIsExposed__intint != NULL){
      return m_wxPanelBaseExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxPanelBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxPanelBase::DoMoveInTabOrder(win, move);
    if (*m_wxPanelBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxPanelBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxPanelBaseExtDoMoveWindow__intintintintFunc m_wxPanelBaseExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxPanelBase::DoMoveWindow(x, y, width, height);
    if (*m_wxPanelBaseExtDoMoveWindow__intintintint != NULL){
      return m_wxPanelBaseExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxPanelBaseExtDoNavigateIn__intFunc m_wxPanelBaseExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxPanelBase::DoNavigateIn(flags);
    if (*m_wxPanelBaseExtDoNavigateIn__int != NULL){
      return m_wxPanelBaseExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoPhase__intFunc m_wxPanelBaseExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxPanelBase::DoPhase(phase);
    if (*m_wxPanelBaseExtDoPhase__int != NULL){
      return m_wxPanelBaseExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoPopupMenu__wxMenuPintintFunc m_wxPanelBaseExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxPanelBase::DoPopupMenu(menu, x, y);
    if (*m_wxPanelBaseExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxPanelBaseExtDoPopupMenu__wxMenuPintint(this, menu, x, y, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoReleaseMouseFunc m_wxPanelBaseExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxPanelBase::DoReleaseMouse();
    if (*m_wxPanelBaseExtDoReleaseMouse != NULL){
      return m_wxPanelBaseExtDoReleaseMouse(this);
    }
  }
  wxPanelBaseExtDoScreenToClient__intPintPFunc m_wxPanelBaseExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxPanelBase::DoScreenToClient(x, y);
    if (*m_wxPanelBaseExtDoScreenToClient__intPintP != NULL){
      return m_wxPanelBaseExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxPanelBaseExtDoSetClientData__voidPFunc m_wxPanelBaseExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxPanelBase::DoSetClientData(data);
    if (*m_wxPanelBaseExtDoSetClientData__voidP != NULL){
      return m_wxPanelBaseExtDoSetClientData__voidP(this, data);
    }
  }
  wxPanelBaseExtDoSetClientObject__wxClientDataPFunc m_wxPanelBaseExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxPanelBase::DoSetClientObject(data);
    if (*m_wxPanelBaseExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxPanelBaseExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxPanelBaseExtDoSetClientSize__intintFunc m_wxPanelBaseExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxPanelBase::DoSetClientSize(width, height);
    if (*m_wxPanelBaseExtDoSetClientSize__intint != NULL){
      return m_wxPanelBaseExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxPanelBaseExtDoSetSize__intintintintintFunc m_wxPanelBaseExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxPanelBase::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxPanelBaseExtDoSetSize__intintintintint != NULL){
      return m_wxPanelBaseExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxPanelBaseExtDoSetSizeHints__intintintintintintFunc m_wxPanelBaseExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxPanelBase::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxPanelBaseExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxPanelBaseExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxPanelBaseExtDoSetToolTip__wxToolTipPFunc m_wxPanelBaseExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxPanelBase::DoSetToolTip(tip);
    if (*m_wxPanelBaseExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxPanelBaseExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxPanelBaseExtDoSetToolTipText__wxStringCRFunc m_wxPanelBaseExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxPanelBase::DoSetToolTipText(tip);
    if (*m_wxPanelBaseExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxPanelBaseExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxPanelBaseExtDoSetVirtualSize__intintFunc m_wxPanelBaseExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxPanelBase::DoSetVirtualSize(x, y);
    if (*m_wxPanelBaseExtDoSetVirtualSize__intint != NULL){
      return m_wxPanelBaseExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxPanelBaseExtDoSetWindowVariant__wxWindowVariantFunc m_wxPanelBaseExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxPanelBase::DoSetWindowVariant(variant);
    if (*m_wxPanelBaseExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxPanelBaseExtDoSetWindowVariant__wxWindowVariant(this, variant);
    }
  }
  wxPanelBaseExtDoThawFunc m_wxPanelBaseExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxPanelBase::DoThaw();
    if (*m_wxPanelBaseExtDoThaw != NULL){
      return m_wxPanelBaseExtDoThaw(this);
    }
  }
  wxPanelBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxPanelBaseExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxPanelBase::DoUpdateWindowUI(event);
    if (*m_wxPanelBaseExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxPanelBaseExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxPanelBaseExtDragAcceptFiles__boolFunc m_wxPanelBaseExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxPanelBase::DragAcceptFiles(accept);
    if (*m_wxPanelBaseExtDragAcceptFiles__bool != NULL){
      return m_wxPanelBaseExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxPanelBaseExtEnable__boolFunc m_wxPanelBaseExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxPanelBase::Enable(enable);
    if (*m_wxPanelBaseExtEnable__bool != NULL){
      return m_wxPanelBaseExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtEnableTouchEvents__intFunc m_wxPanelBaseExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxPanelBase::EnableTouchEvents(eventsMask);
    if (*m_wxPanelBaseExtEnableTouchEvents__int != NULL){
      return m_wxPanelBaseExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtEnableVisibleFocus__boolFunc m_wxPanelBaseExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxPanelBase::EnableVisibleFocus(enabled);
    if (*m_wxPanelBaseExtEnableVisibleFocus__bool != NULL){
      return m_wxPanelBaseExtEnableVisibleFocus__bool(this, enabled);
    }
  }
  wxPanelBaseExtEndRepositioningChildrenFunc m_wxPanelBaseExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxPanelBase::EndRepositioningChildren();
    if (*m_wxPanelBaseExtEndRepositioningChildren != NULL){
      return m_wxPanelBaseExtEndRepositioningChildren(this);
    }
  }
  wxPanelBaseExtFitFunc m_wxPanelBaseExtFit = NULL;
  virtual void Fit() override
  {
    wxPanelBase::Fit();
    if (*m_wxPanelBaseExtFit != NULL){
      return m_wxPanelBaseExtFit(this);
    }
  }
  wxPanelBaseExtFitInsideFunc m_wxPanelBaseExtFitInside = NULL;
  virtual void FitInside() override
  {
    wxPanelBase::FitInside();
    if (*m_wxPanelBaseExtFitInside != NULL){
      return m_wxPanelBaseExtFitInside(this);
    }
  }
  wxPanelBaseExtGetBestVirtualSizeFunc m_wxPanelBaseExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxPanelBase::GetBestVirtualSize();
    if (*m_wxPanelBaseExtGetBestVirtualSize != NULL){
      return m_wxPanelBaseExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetCharHeightFunc m_wxPanelBaseExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxPanelBase::GetCharHeight();
    if (*m_wxPanelBaseExtGetCharHeight != NULL){
      return m_wxPanelBaseExtGetCharHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetCharWidthFunc m_wxPanelBaseExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxPanelBase::GetCharWidth();
    if (*m_wxPanelBaseExtGetCharWidth != NULL){
      return m_wxPanelBaseExtGetCharWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetClassInfoFunc m_wxPanelBaseExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxPanelBase::GetClassInfo();
    if (*m_wxPanelBaseExtGetClassInfo != NULL){
      return m_wxPanelBaseExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetClientAreaOriginFunc m_wxPanelBaseExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxPanelBase::GetClientAreaOrigin();
    if (*m_wxPanelBaseExtGetClientAreaOrigin != NULL){
      return m_wxPanelBaseExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetClientSizeConstraint__intPintPFunc m_wxPanelBaseExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxPanelBase::GetClientSizeConstraint(w, h);
    if (*m_wxPanelBaseExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxPanelBaseExtGetClientSizeConstraint__intPintP(this, w, h);
    }
  }
  wxPanelBaseExtGetContentScaleFactorFunc m_wxPanelBaseExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxPanelBase::GetContentScaleFactor();
    if (*m_wxPanelBaseExtGetContentScaleFactor != NULL){
      return m_wxPanelBaseExtGetContentScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetDPIFunc m_wxPanelBaseExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxPanelBase::GetDPI();
    if (*m_wxPanelBaseExtGetDPI != NULL){
      return m_wxPanelBaseExtGetDPI(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetDPIScaleFactorFunc m_wxPanelBaseExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxPanelBase::GetDPIScaleFactor();
    if (*m_wxPanelBaseExtGetDPIScaleFactor != NULL){
      return m_wxPanelBaseExtGetDPIScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetDefaultAttributesFunc m_wxPanelBaseExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxPanelBase::GetDefaultAttributes();
    if (*m_wxPanelBaseExtGetDefaultAttributes != NULL){
      return m_wxPanelBaseExtGetDefaultAttributes(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetDefaultBorderFunc m_wxPanelBaseExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxPanelBase::GetDefaultBorder();
    if (*m_wxPanelBaseExtGetDefaultBorder != NULL){
      return m_wxPanelBaseExtGetDefaultBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetDefaultBorderForControlFunc m_wxPanelBaseExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxPanelBase::GetDefaultBorderForControl();
    if (*m_wxPanelBaseExtGetDefaultBorderForControl != NULL){
      return m_wxPanelBaseExtGetDefaultBorderForControl(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetDropTargetFunc m_wxPanelBaseExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxPanelBase::GetDropTarget();
    if (*m_wxPanelBaseExtGetDropTarget != NULL){
      return m_wxPanelBaseExtGetDropTarget(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetEffectiveMinSizeFunc m_wxPanelBaseExtGetEffectiveMinSize = NULL;
  virtual wxSize GetEffectiveMinSize() const override
  {
    wxSize res = wxPanelBase::GetEffectiveMinSize();
    if (*m_wxPanelBaseExtGetEffectiveMinSize != NULL){
      return m_wxPanelBaseExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetEventHashTableFunc m_wxPanelBaseExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxPanelBase::GetEventHashTable();
    if (*m_wxPanelBaseExtGetEventHashTable != NULL){
      return m_wxPanelBaseExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetEventTableFunc m_wxPanelBaseExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxPanelBase::GetEventTable();
    if (*m_wxPanelBaseExtGetEventTable != NULL){
      return m_wxPanelBaseExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetHandleFunc m_wxPanelBaseExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxPanelBase::GetHandle();
    if (*m_wxPanelBaseExtGetHandle != NULL){
      return m_wxPanelBaseExtGetHandle(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxPanelBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxPanelBase::GetHelpTextAtPoint(pt, origin);
    if (*m_wxPanelBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxPanelBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetLabelFunc m_wxPanelBaseExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxPanelBase::GetLabel();
    if (*m_wxPanelBaseExtGetLabel != NULL){
      return m_wxPanelBaseExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetLayoutDirectionFunc m_wxPanelBaseExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxPanelBase::GetLayoutDirection();
    if (*m_wxPanelBaseExtGetLayoutDirection != NULL){
      return m_wxPanelBaseExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetMainWindowOfCompositeControlFunc m_wxPanelBaseExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxPanelBase::GetMainWindowOfCompositeControl();
    if (*m_wxPanelBaseExtGetMainWindowOfCompositeControl != NULL){
      return m_wxPanelBaseExtGetMainWindowOfCompositeControl(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetMaxClientSizeFunc m_wxPanelBaseExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxPanelBase::GetMaxClientSize();
    if (*m_wxPanelBaseExtGetMaxClientSize != NULL){
      return m_wxPanelBaseExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetMaxSizeFunc m_wxPanelBaseExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxPanelBase::GetMaxSize();
    if (*m_wxPanelBaseExtGetMaxSize != NULL){
      return m_wxPanelBaseExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetMinClientSizeFunc m_wxPanelBaseExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxPanelBase::GetMinClientSize();
    if (*m_wxPanelBaseExtGetMinClientSize != NULL){
      return m_wxPanelBaseExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetMinSizeFunc m_wxPanelBaseExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxPanelBase::GetMinSize();
    if (*m_wxPanelBaseExtGetMinSize != NULL){
      return m_wxPanelBaseExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetNameFunc m_wxPanelBaseExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxPanelBase::GetName();
    if (*m_wxPanelBaseExtGetName != NULL){
      return m_wxPanelBaseExtGetName(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetPositionConstraint__intPintPFunc m_wxPanelBaseExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxPanelBase::GetPositionConstraint(x, y);
    if (*m_wxPanelBaseExtGetPositionConstraint__intPintP != NULL){
      return m_wxPanelBaseExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxPanelBaseExtGetScrollPos__intFunc m_wxPanelBaseExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxPanelBase::GetScrollPos(orient);
    if (*m_wxPanelBaseExtGetScrollPos__int != NULL){
      return m_wxPanelBaseExtGetScrollPos__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetScrollRange__intFunc m_wxPanelBaseExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxPanelBase::GetScrollRange(orient);
    if (*m_wxPanelBaseExtGetScrollRange__int != NULL){
      return m_wxPanelBaseExtGetScrollRange__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetScrollThumb__intFunc m_wxPanelBaseExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxPanelBase::GetScrollThumb(orient);
    if (*m_wxPanelBaseExtGetScrollThumb__int != NULL){
      return m_wxPanelBaseExtGetScrollThumb__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetSizeConstraint__intPintPFunc m_wxPanelBaseExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxPanelBase::GetSizeConstraint(w, h);
    if (*m_wxPanelBaseExtGetSizeConstraint__intPintP != NULL){
      return m_wxPanelBaseExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxPanelBaseExtGetThemeEnabledFunc m_wxPanelBaseExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxPanelBase::GetThemeEnabled();
    if (*m_wxPanelBaseExtGetThemeEnabled != NULL){
      return m_wxPanelBaseExtGetThemeEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetTransparentFunc m_wxPanelBaseExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxPanelBase::GetTransparent();
    if (*m_wxPanelBaseExtGetTransparent != NULL){
      return m_wxPanelBaseExtGetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetValidatorFunc m_wxPanelBaseExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxPanelBase::GetValidator();
    if (*m_wxPanelBaseExtGetValidator != NULL){
      return m_wxPanelBaseExtGetValidator(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetWindowBorderSizeFunc m_wxPanelBaseExtGetWindowBorderSize = NULL;
  virtual wxSize GetWindowBorderSize() const override
  {
    wxSize res = wxPanelBase::GetWindowBorderSize();
    if (*m_wxPanelBaseExtGetWindowBorderSize != NULL){
      return m_wxPanelBaseExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetWindowStyleFlagFunc m_wxPanelBaseExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxPanelBase::GetWindowStyleFlag();
    if (*m_wxPanelBaseExtGetWindowStyleFlag != NULL){
      return m_wxPanelBaseExtGetWindowStyleFlag(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtHasCaptureFunc m_wxPanelBaseExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxPanelBase::HasCapture();
    if (*m_wxPanelBaseExtHasCapture != NULL){
      return m_wxPanelBaseExtHasCapture(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtHasFocusFunc m_wxPanelBaseExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxPanelBase::HasFocus();
    if (*m_wxPanelBaseExtHasFocus != NULL){
      return m_wxPanelBaseExtHasFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtHasMultiplePagesFunc m_wxPanelBaseExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxPanelBase::HasMultiplePages();
    if (*m_wxPanelBaseExtHasMultiplePages != NULL){
      return m_wxPanelBaseExtHasMultiplePages(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtHasTransparentBackgroundFunc m_wxPanelBaseExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxPanelBase::HasTransparentBackground();
    if (*m_wxPanelBaseExtHasTransparentBackground != NULL){
      return m_wxPanelBaseExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtHideWithEffect__wxShowEffectunsignedintFunc m_wxPanelBaseExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxPanelBase::HideWithEffect(effect, timeout);
    if (*m_wxPanelBaseExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxPanelBaseExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtInformFirstDirection__intintintFunc m_wxPanelBaseExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxPanelBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxPanelBaseExtInformFirstDirection__intintint != NULL){
      return m_wxPanelBaseExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtInheritAttributesFunc m_wxPanelBaseExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxPanelBase::InheritAttributes();
    if (*m_wxPanelBaseExtInheritAttributes != NULL){
      return m_wxPanelBaseExtInheritAttributes(this);
    }
  }
  wxPanelBaseExtInitDialogFunc m_wxPanelBaseExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxPanelBase::InitDialog();
    if (*m_wxPanelBaseExtInitDialog != NULL){
      return m_wxPanelBaseExtInitDialog(this);
    }
  }
  wxPanelBaseExtIsClientAreaChild__wxWindowCPFunc m_wxPanelBaseExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxPanelBase::IsClientAreaChild(child);
    if (*m_wxPanelBaseExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxPanelBaseExtIsClientAreaChild__wxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsDoubleBufferedFunc m_wxPanelBaseExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxPanelBase::IsDoubleBuffered();
    if (*m_wxPanelBaseExtIsDoubleBuffered != NULL){
      return m_wxPanelBaseExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsRetainedFunc m_wxPanelBaseExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxPanelBase::IsRetained();
    if (*m_wxPanelBaseExtIsRetained != NULL){
      return m_wxPanelBaseExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsScrollbarAlwaysShown__intFunc m_wxPanelBaseExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxPanelBase::IsScrollbarAlwaysShown(orient);
    if (*m_wxPanelBaseExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxPanelBaseExtIsScrollbarAlwaysShown__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsShownFunc m_wxPanelBaseExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxPanelBase::IsShown();
    if (*m_wxPanelBaseExtIsShown != NULL){
      return m_wxPanelBaseExtIsShown(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsShownOnScreenFunc m_wxPanelBaseExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxPanelBase::IsShownOnScreen();
    if (*m_wxPanelBaseExtIsShownOnScreen != NULL){
      return m_wxPanelBaseExtIsShownOnScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsThisEnabledFunc m_wxPanelBaseExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxPanelBase::IsThisEnabled();
    if (*m_wxPanelBaseExtIsThisEnabled != NULL){
      return m_wxPanelBaseExtIsThisEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsTopLevelFunc m_wxPanelBaseExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxPanelBase::IsTopLevel();
    if (*m_wxPanelBaseExtIsTopLevel != NULL){
      return m_wxPanelBaseExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxPanelBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxPanelBase::IsTopNavigationDomain(kind);
    if (*m_wxPanelBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxPanelBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsTransparentBackgroundSupported__wxStringPFunc m_wxPanelBaseExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxPanelBase::IsTransparentBackgroundSupported(reason);
    if (*m_wxPanelBaseExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxPanelBaseExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtLayoutFunc m_wxPanelBaseExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxPanelBase::Layout();
    if (*m_wxPanelBaseExtLayout != NULL){
      return m_wxPanelBaseExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtLayoutPhase1__intPFunc m_wxPanelBaseExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxPanelBase::LayoutPhase1(noChanges);
    if (*m_wxPanelBaseExtLayoutPhase1__intP != NULL){
      return m_wxPanelBaseExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtLayoutPhase2__intPFunc m_wxPanelBaseExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxPanelBase::LayoutPhase2(noChanges);
    if (*m_wxPanelBaseExtLayoutPhase2__intP != NULL){
      return m_wxPanelBaseExtLayoutPhase2__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtLowerFunc m_wxPanelBaseExtLower = NULL;
  virtual void Lower() override
  {
    wxPanelBase::Lower();
    if (*m_wxPanelBaseExtLower != NULL){
      return m_wxPanelBaseExtLower(this);
    }
  }
  wxPanelBaseExtMoveConstraint__intintFunc m_wxPanelBaseExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxPanelBase::MoveConstraint(x, y);
    if (*m_wxPanelBaseExtMoveConstraint__intint != NULL){
      return m_wxPanelBaseExtMoveConstraint__intint(this, x, y);
    }
  }
  wxPanelBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxPanelBaseExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxPanelBase::OnDynamicBind(entry);
    if (*m_wxPanelBaseExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxPanelBaseExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtOnInternalIdleFunc m_wxPanelBaseExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxPanelBase::OnInternalIdle();
    if (*m_wxPanelBaseExtOnInternalIdle != NULL){
      return m_wxPanelBaseExtOnInternalIdle(this);
    }
  }
  wxPanelBaseExtPrepareDC__wxDCRFunc m_wxPanelBaseExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxPanelBase::PrepareDC(dc);
    if (*m_wxPanelBaseExtPrepareDC__wxDCR != NULL){
      return m_wxPanelBaseExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxPanelBaseExtProcessEvent__wxEventRFunc m_wxPanelBaseExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxPanelBase::ProcessEvent(event);
    if (*m_wxPanelBaseExtProcessEvent__wxEventR != NULL){
      return m_wxPanelBaseExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtQueueEvent__wxEventPFunc m_wxPanelBaseExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxPanelBase::QueueEvent(event);
    if (*m_wxPanelBaseExtQueueEvent__wxEventP != NULL){
      return m_wxPanelBaseExtQueueEvent__wxEventP(this, event);
    }
  }
  wxPanelBaseExtRaiseFunc m_wxPanelBaseExtRaise = NULL;
  virtual void Raise() override
  {
    wxPanelBase::Raise();
    if (*m_wxPanelBaseExtRaise != NULL){
      return m_wxPanelBaseExtRaise(this);
    }
  }
  wxPanelBaseExtRefresh__boolwxRectCPFunc m_wxPanelBaseExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxPanelBase::Refresh(eraseBackground, rect);
    if (*m_wxPanelBaseExtRefresh__boolwxRectCP != NULL){
      return m_wxPanelBaseExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxPanelBaseExtRegisterHotKey__intintintFunc m_wxPanelBaseExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxPanelBase::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxPanelBaseExtRegisterHotKey__intintint != NULL){
      return m_wxPanelBaseExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtRemoveChild__wxWindowBasePFunc m_wxPanelBaseExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxPanelBase::RemoveChild(child);
    if (*m_wxPanelBaseExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxPanelBaseExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxPanelBaseExtReparent__wxWindowBasePFunc m_wxPanelBaseExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxPanelBase::Reparent(newParent);
    if (*m_wxPanelBaseExtReparent__wxWindowBaseP != NULL){
      return m_wxPanelBaseExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtScrollLines__intFunc m_wxPanelBaseExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxPanelBase::ScrollLines(lines);
    if (*m_wxPanelBaseExtScrollLines__int != NULL){
      return m_wxPanelBaseExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtScrollPages__intFunc m_wxPanelBaseExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxPanelBase::ScrollPages(pages);
    if (*m_wxPanelBaseExtScrollPages__int != NULL){
      return m_wxPanelBaseExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtScrollWindow__intintwxRectCPFunc m_wxPanelBaseExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxPanelBase::ScrollWindow(dx, dy, rect);
    if (*m_wxPanelBaseExtScrollWindow__intintwxRectCP != NULL){
      return m_wxPanelBaseExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxPanelBaseExtSearchEventTable__wxEventTableRwxEventRFunc m_wxPanelBaseExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxPanelBase::SearchEventTable(table, event);
    if (*m_wxPanelBaseExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxPanelBaseExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSendIdleEvents__wxIdleEventRFunc m_wxPanelBaseExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxPanelBase::SendIdleEvents(event);
    if (*m_wxPanelBaseExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxPanelBaseExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSendSizeEvent__intFunc m_wxPanelBaseExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxPanelBase::SendSizeEvent(flags);
    if (*m_wxPanelBaseExtSendSizeEvent__int != NULL){
      return m_wxPanelBaseExtSendSizeEvent__int(this, flags);
    }
  }
  wxPanelBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxPanelBaseExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxPanelBase::SetAcceleratorTable(accel);
    if (*m_wxPanelBaseExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxPanelBaseExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxPanelBaseExtSetBackgroundColour__wxColourCRFunc m_wxPanelBaseExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxPanelBase::SetBackgroundColour(colour);
    if (*m_wxPanelBaseExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxPanelBaseExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxPanelBaseExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxPanelBase::SetBackgroundStyle(style);
    if (*m_wxPanelBaseExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxPanelBaseExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetCanFocus__boolFunc m_wxPanelBaseExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxPanelBase::SetCanFocus(canFocus);
    if (*m_wxPanelBaseExtSetCanFocus__bool != NULL){
      return m_wxPanelBaseExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxPanelBaseExtSetConstraintSizes__boolFunc m_wxPanelBaseExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxPanelBase::SetConstraintSizes(recurse);
    if (*m_wxPanelBaseExtSetConstraintSizes__bool != NULL){
      return m_wxPanelBaseExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxPanelBaseExtSetCursor__wxCursorCRFunc m_wxPanelBaseExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxPanelBase::SetCursor(cursor);
    if (*m_wxPanelBaseExtSetCursor__wxCursorCR != NULL){
      return m_wxPanelBaseExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetDoubleBuffered__boolFunc m_wxPanelBaseExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxPanelBase::SetDoubleBuffered(on);
    if (*m_wxPanelBaseExtSetDoubleBuffered__bool != NULL){
      return m_wxPanelBaseExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxPanelBaseExtSetDropTarget__wxDropTargetPFunc m_wxPanelBaseExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxPanelBase::SetDropTarget(dropTarget);
    if (*m_wxPanelBaseExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxPanelBaseExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxPanelBaseExtSetExtraStyle__longFunc m_wxPanelBaseExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxPanelBase::SetExtraStyle(exStyle);
    if (*m_wxPanelBaseExtSetExtraStyle__long != NULL){
      return m_wxPanelBaseExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxPanelBaseExtSetFocusFunc m_wxPanelBaseExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxPanelBase::SetFocus();
    if (*m_wxPanelBaseExtSetFocus != NULL){
      return m_wxPanelBaseExtSetFocus(this);
    }
  }
  wxPanelBaseExtSetFocusFromKbdFunc m_wxPanelBaseExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxPanelBase::SetFocusFromKbd();
    if (*m_wxPanelBaseExtSetFocusFromKbd != NULL){
      return m_wxPanelBaseExtSetFocusFromKbd(this);
    }
  }
  wxPanelBaseExtSetFont__wxFontCRFunc m_wxPanelBaseExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxPanelBase::SetFont(font);
    if (*m_wxPanelBaseExtSetFont__wxFontCR != NULL){
      return m_wxPanelBaseExtSetFont__wxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetForegroundColour__wxColourCRFunc m_wxPanelBaseExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxPanelBase::SetForegroundColour(colour);
    if (*m_wxPanelBaseExtSetForegroundColour__wxColourCR != NULL){
      return m_wxPanelBaseExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetId__wxWindowIDFunc m_wxPanelBaseExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxPanelBase::SetId(winid);
    if (*m_wxPanelBaseExtSetId__wxWindowID != NULL){
      return m_wxPanelBaseExtSetId__wxWindowID(this, winid);
    }
  }
  wxPanelBaseExtSetLabel__wxStringCRFunc m_wxPanelBaseExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxPanelBase::SetLabel(label);
    if (*m_wxPanelBaseExtSetLabel__wxStringCR != NULL){
      return m_wxPanelBaseExtSetLabel__wxStringCR(this, label);
    }
  }
  wxPanelBaseExtSetLayoutDirection__wxLayoutDirectionFunc m_wxPanelBaseExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxPanelBase::SetLayoutDirection(dir);
    if (*m_wxPanelBaseExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxPanelBaseExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxPanelBaseExtSetMaxClientSize__wxSizeCRFunc m_wxPanelBaseExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxPanelBase::SetMaxClientSize(size);
    if (*m_wxPanelBaseExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxPanelBaseExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxPanelBaseExtSetMaxSize__wxSizeCRFunc m_wxPanelBaseExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxPanelBase::SetMaxSize(maxSize);
    if (*m_wxPanelBaseExtSetMaxSize__wxSizeCR != NULL){
      return m_wxPanelBaseExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxPanelBaseExtSetMinClientSize__wxSizeCRFunc m_wxPanelBaseExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxPanelBase::SetMinClientSize(size);
    if (*m_wxPanelBaseExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxPanelBaseExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxPanelBaseExtSetMinSize__wxSizeCRFunc m_wxPanelBaseExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxPanelBase::SetMinSize(minSize);
    if (*m_wxPanelBaseExtSetMinSize__wxSizeCR != NULL){
      return m_wxPanelBaseExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxPanelBaseExtSetName__wxStringCRFunc m_wxPanelBaseExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxPanelBase::SetName(name);
    if (*m_wxPanelBaseExtSetName__wxStringCR != NULL){
      return m_wxPanelBaseExtSetName__wxStringCR(this, name);
    }
  }
  wxPanelBaseExtSetNextHandler__wxEvtHandlerPFunc m_wxPanelBaseExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxPanelBase::SetNextHandler(handler);
    if (*m_wxPanelBaseExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxPanelBaseExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxPanelBaseExtSetPreviousHandler__wxEvtHandlerPFunc m_wxPanelBaseExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxPanelBase::SetPreviousHandler(handler);
    if (*m_wxPanelBaseExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxPanelBaseExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxPanelBaseExtSetScrollPos__intintboolFunc m_wxPanelBaseExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxPanelBase::SetScrollPos(orient, pos, refresh);
    if (*m_wxPanelBaseExtSetScrollPos__intintbool != NULL){
      return m_wxPanelBaseExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxPanelBaseExtSetScrollbar__intintintintboolFunc m_wxPanelBaseExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxPanelBase::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxPanelBaseExtSetScrollbar__intintintintbool != NULL){
      return m_wxPanelBaseExtSetScrollbar__intintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxPanelBaseExtSetSizeConstraint__intintintintFunc m_wxPanelBaseExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxPanelBase::SetSizeConstraint(x, y, w, h);
    if (*m_wxPanelBaseExtSetSizeConstraint__intintintint != NULL){
      return m_wxPanelBaseExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxPanelBaseExtSetSizeHints__intintintintintintFunc m_wxPanelBaseExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxPanelBase::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxPanelBaseExtSetSizeHints__intintintintintint != NULL){
      return m_wxPanelBaseExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxPanelBaseExtSetThemeEnabled__boolFunc m_wxPanelBaseExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxPanelBase::SetThemeEnabled(enableTheme);
    if (*m_wxPanelBaseExtSetThemeEnabled__bool != NULL){
      return m_wxPanelBaseExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxPanelBaseExtSetTransparent__wxByteFunc m_wxPanelBaseExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxPanelBase::SetTransparent(alpha);
    if (*m_wxPanelBaseExtSetTransparent__wxByte != NULL){
      return m_wxPanelBaseExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetValidator__wxValidatorCRFunc m_wxPanelBaseExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxPanelBase::SetValidator(validator);
    if (*m_wxPanelBaseExtSetValidator__wxValidatorCR != NULL){
      return m_wxPanelBaseExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxPanelBaseExtSetWindowStyleFlag__longFunc m_wxPanelBaseExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxPanelBase::SetWindowStyleFlag(style);
    if (*m_wxPanelBaseExtSetWindowStyleFlag__long != NULL){
      return m_wxPanelBaseExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxPanelBaseExtShouldInheritColoursFunc m_wxPanelBaseExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxPanelBase::ShouldInheritColours();
    if (*m_wxPanelBaseExtShouldInheritColours != NULL){
      return m_wxPanelBaseExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtShow__boolFunc m_wxPanelBaseExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxPanelBase::Show(show);
    if (*m_wxPanelBaseExtShow__bool != NULL){
      return m_wxPanelBaseExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtShowWithEffect__wxShowEffectunsignedintFunc m_wxPanelBaseExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxPanelBase::ShowWithEffect(effect, timeout);
    if (*m_wxPanelBaseExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxPanelBaseExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtTransferDataFromWindowFunc m_wxPanelBaseExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxPanelBase::TransferDataFromWindow();
    if (*m_wxPanelBaseExtTransferDataFromWindow != NULL){
      return m_wxPanelBaseExtTransferDataFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtTransferDataToWindowFunc m_wxPanelBaseExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxPanelBase::TransferDataToWindow();
    if (*m_wxPanelBaseExtTransferDataToWindow != NULL){
      return m_wxPanelBaseExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtTriggerScrollEvent__wxEventTypeFunc m_wxPanelBaseExtTriggerScrollEvent__wxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxPanelBase::TriggerScrollEvent(scrollEvent);
    if (*m_wxPanelBaseExtTriggerScrollEvent__wxEventType != NULL){
      return m_wxPanelBaseExtTriggerScrollEvent__wxEventType(this, scrollEvent);
    }
  }
  wxPanelBaseExtTryAfter__wxEventRFunc m_wxPanelBaseExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxPanelBase::TryAfter(event);
    if (*m_wxPanelBaseExtTryAfter__wxEventR != NULL){
      return m_wxPanelBaseExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtTryBefore__wxEventRFunc m_wxPanelBaseExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxPanelBase::TryBefore(event);
    if (*m_wxPanelBaseExtTryBefore__wxEventR != NULL){
      return m_wxPanelBaseExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtUnregisterHotKey__intFunc m_wxPanelBaseExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxPanelBase::UnregisterHotKey(hotkeyId);
    if (*m_wxPanelBaseExtUnregisterHotKey__int != NULL){
      return m_wxPanelBaseExtUnregisterHotKey__int(this, hotkeyId, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtUpdateFunc m_wxPanelBaseExtUpdate = NULL;
  virtual void Update() override
  {
    wxPanelBase::Update();
    if (*m_wxPanelBaseExtUpdate != NULL){
      return m_wxPanelBaseExtUpdate(this);
    }
  }
  wxPanelBaseExtUpdateWindowUI__longFunc m_wxPanelBaseExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxPanelBase::UpdateWindowUI(flags);
    if (*m_wxPanelBaseExtUpdateWindowUI__long != NULL){
      return m_wxPanelBaseExtUpdateWindowUI__long(this, flags);
    }
  }
  wxPanelBaseExtValidateFunc m_wxPanelBaseExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxPanelBase::Validate();
    if (*m_wxPanelBaseExtValidate != NULL){
      return m_wxPanelBaseExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxPanelBaseExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxPanelBase::WXAdjustFontToOwnPPI(font);
    if (*m_wxPanelBaseExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxPanelBaseExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxPanelBaseExtWXGetTextEntryFunc m_wxPanelBaseExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxPanelBase::WXGetTextEntry();
    if (*m_wxPanelBaseExtWXGetTextEntry != NULL){
      return m_wxPanelBaseExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXReservedEvtHandler1__voidPFunc m_wxPanelBaseExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxPanelBase::WXReservedEvtHandler1(param0);
    if (*m_wxPanelBaseExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxPanelBaseExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXReservedEvtHandler2__voidPFunc m_wxPanelBaseExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxPanelBase::WXReservedEvtHandler2(param0);
    if (*m_wxPanelBaseExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxPanelBaseExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXReservedWindow1__voidPFunc m_wxPanelBaseExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxPanelBase::WXReservedWindow1(param0);
    if (*m_wxPanelBaseExtWXReservedWindow1__voidP != NULL){
      return m_wxPanelBaseExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXReservedWindow2__voidPFunc m_wxPanelBaseExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxPanelBase::WXReservedWindow2(param0);
    if (*m_wxPanelBaseExtWXReservedWindow2__voidP != NULL){
      return m_wxPanelBaseExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXReservedWindow3__voidPFunc m_wxPanelBaseExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxPanelBase::WXReservedWindow3(param0);
    if (*m_wxPanelBaseExtWXReservedWindow3__voidP != NULL){
      return m_wxPanelBaseExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxPanelBaseExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxPanelBase::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxPanelBaseExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxPanelBaseExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxPanelBaseExtWarpPointer__intintFunc m_wxPanelBaseExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxPanelBase::WarpPointer(x, y);
    if (*m_wxPanelBaseExtWarpPointer__intint != NULL){
      return m_wxPanelBaseExtWarpPointer__intint(this, x, y);
    }
  }
  wxPanelBaseExtWindowToClientSize__wxSizeCRFunc m_wxPanelBaseExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxPanelBase::WindowToClientSize(size);
    if (*m_wxPanelBaseExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxPanelBaseExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExt(wxPanelBaseExtAcceptsFocusFunc a_AcceptsFocus, wxPanelBaseExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxPanelBaseExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxPanelBaseExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxPanelBaseExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxPanelBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxPanelBaseExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxPanelBaseExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxPanelBaseExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxPanelBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxPanelBaseExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxPanelBaseExtCanBeFocusedFunc a_CanBeFocused, wxPanelBaseExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxPanelBaseExtCanScroll__intFunc a_CanScroll__int, wxPanelBaseExtCanSetTransparentFunc a_CanSetTransparent, wxPanelBaseExtClearBackgroundFunc a_ClearBackground, wxPanelBaseExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxPanelBaseExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxPanelBaseExtCreateRefDataFunc a_CreateRefData, wxPanelBaseExtDestroyFunc a_Destroy, wxPanelBaseExtDissociateHandleFunc a_DissociateHandle, wxPanelBaseExtDoCaptureMouseFunc a_DoCaptureMouse, wxPanelBaseExtDoCentre__intFunc a_DoCentre__int, wxPanelBaseExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxPanelBaseExtDoEnable__boolFunc a_DoEnable__bool, wxPanelBaseExtDoFreezeFunc a_DoFreeze, wxPanelBaseExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxPanelBaseExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxPanelBaseExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxPanelBaseExtDoGetBestSizeFunc a_DoGetBestSize, wxPanelBaseExtDoGetClientDataFunc a_DoGetClientData, wxPanelBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxPanelBaseExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxPanelBaseExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxPanelBaseExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxPanelBaseExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxPanelBaseExtDoGetSizeFromClientSize__wxSizeCRFunc a_DoGetSizeFromClientSize__wxSizeCR, wxPanelBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxPanelBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxPanelBaseExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxPanelBaseExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxPanelBaseExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxPanelBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxPanelBaseExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxPanelBaseExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxPanelBaseExtDoPhase__intFunc a_DoPhase__int, wxPanelBaseExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxPanelBaseExtDoReleaseMouseFunc a_DoReleaseMouse, wxPanelBaseExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxPanelBaseExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxPanelBaseExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxPanelBaseExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxPanelBaseExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxPanelBaseExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxPanelBaseExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxPanelBaseExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxPanelBaseExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxPanelBaseExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxPanelBaseExtDoThawFunc a_DoThaw, wxPanelBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxPanelBaseExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxPanelBaseExtEnable__boolFunc a_Enable__bool, wxPanelBaseExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxPanelBaseExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxPanelBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxPanelBaseExtFitFunc a_Fit, wxPanelBaseExtFitInsideFunc a_FitInside, wxPanelBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxPanelBaseExtGetCharHeightFunc a_GetCharHeight, wxPanelBaseExtGetCharWidthFunc a_GetCharWidth, wxPanelBaseExtGetClassInfoFunc a_GetClassInfo, wxPanelBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxPanelBaseExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxPanelBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxPanelBaseExtGetDPIFunc a_GetDPI, wxPanelBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxPanelBaseExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxPanelBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxPanelBaseExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxPanelBaseExtGetDropTargetFunc a_GetDropTarget, wxPanelBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxPanelBaseExtGetEventHashTableFunc a_GetEventHashTable, wxPanelBaseExtGetEventTableFunc a_GetEventTable, wxPanelBaseExtGetHandleFunc a_GetHandle, wxPanelBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxPanelBaseExtGetLabelFunc a_GetLabel, wxPanelBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxPanelBaseExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxPanelBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxPanelBaseExtGetMaxSizeFunc a_GetMaxSize, wxPanelBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxPanelBaseExtGetMinSizeFunc a_GetMinSize, wxPanelBaseExtGetNameFunc a_GetName, wxPanelBaseExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxPanelBaseExtGetScrollPos__intFunc a_GetScrollPos__int, wxPanelBaseExtGetScrollRange__intFunc a_GetScrollRange__int, wxPanelBaseExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxPanelBaseExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxPanelBaseExtGetThemeEnabledFunc a_GetThemeEnabled, wxPanelBaseExtGetTransparentFunc a_GetTransparent, wxPanelBaseExtGetValidatorFunc a_GetValidator, wxPanelBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxPanelBaseExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxPanelBaseExtHasCaptureFunc a_HasCapture, wxPanelBaseExtHasFocusFunc a_HasFocus, wxPanelBaseExtHasMultiplePagesFunc a_HasMultiplePages, wxPanelBaseExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxPanelBaseExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxPanelBaseExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxPanelBaseExtInheritAttributesFunc a_InheritAttributes, wxPanelBaseExtInitDialogFunc a_InitDialog, wxPanelBaseExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxPanelBaseExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxPanelBaseExtIsRetainedFunc a_IsRetained, wxPanelBaseExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxPanelBaseExtIsShownFunc a_IsShown, wxPanelBaseExtIsShownOnScreenFunc a_IsShownOnScreen, wxPanelBaseExtIsThisEnabledFunc a_IsThisEnabled, wxPanelBaseExtIsTopLevelFunc a_IsTopLevel, wxPanelBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxPanelBaseExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxPanelBaseExtLayoutFunc a_Layout, wxPanelBaseExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxPanelBaseExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxPanelBaseExtLowerFunc a_Lower, wxPanelBaseExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxPanelBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxPanelBaseExtOnInternalIdleFunc a_OnInternalIdle, wxPanelBaseExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxPanelBaseExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxPanelBaseExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxPanelBaseExtRaiseFunc a_Raise, wxPanelBaseExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxPanelBaseExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxPanelBaseExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxPanelBaseExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxPanelBaseExtScrollLines__intFunc a_ScrollLines__int, wxPanelBaseExtScrollPages__intFunc a_ScrollPages__int, wxPanelBaseExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxPanelBaseExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxPanelBaseExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxPanelBaseExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxPanelBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxPanelBaseExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxPanelBaseExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxPanelBaseExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxPanelBaseExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxPanelBaseExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxPanelBaseExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxPanelBaseExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxPanelBaseExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxPanelBaseExtSetFocusFunc a_SetFocus, wxPanelBaseExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxPanelBaseExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxPanelBaseExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxPanelBaseExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxPanelBaseExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxPanelBaseExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxPanelBaseExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxPanelBaseExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxPanelBaseExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxPanelBaseExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxPanelBaseExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxPanelBaseExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxPanelBaseExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxPanelBaseExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxPanelBaseExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxPanelBaseExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxPanelBaseExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxPanelBaseExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxPanelBaseExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxPanelBaseExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxPanelBaseExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxPanelBaseExtShouldInheritColoursFunc a_ShouldInheritColours, wxPanelBaseExtShow__boolFunc a_Show__bool, wxPanelBaseExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxPanelBaseExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxPanelBaseExtTransferDataToWindowFunc a_TransferDataToWindow, wxPanelBaseExtTriggerScrollEvent__wxEventTypeFunc a_TriggerScrollEvent__wxEventType, wxPanelBaseExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxPanelBaseExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxPanelBaseExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxPanelBaseExtUpdateFunc a_Update, wxPanelBaseExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxPanelBaseExtValidateFunc a_Validate, wxPanelBaseExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxPanelBaseExtWXGetTextEntryFunc a_WXGetTextEntry, wxPanelBaseExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxPanelBaseExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxPanelBaseExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxPanelBaseExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxPanelBaseExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxPanelBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxPanelBaseExtWarpPointer__intintFunc a_WarpPointer__intint, wxPanelBaseExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxPanelBase() {
    m_wxPanelBaseExtAcceptsFocus = a_AcceptsFocus;
    m_wxPanelBaseExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxPanelBaseExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxPanelBaseExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxPanelBaseExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxPanelBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxPanelBaseExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxPanelBaseExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxPanelBaseExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxPanelBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxPanelBaseExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxPanelBaseExtCanBeFocused = a_CanBeFocused;
    m_wxPanelBaseExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxPanelBaseExtCanScroll__int = a_CanScroll__int;
    m_wxPanelBaseExtCanSetTransparent = a_CanSetTransparent;
    m_wxPanelBaseExtClearBackground = a_ClearBackground;
    m_wxPanelBaseExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxPanelBaseExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxPanelBaseExtCreateRefData = a_CreateRefData;
    m_wxPanelBaseExtDestroy = a_Destroy;
    m_wxPanelBaseExtDissociateHandle = a_DissociateHandle;
    m_wxPanelBaseExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxPanelBaseExtDoCentre__int = a_DoCentre__int;
    m_wxPanelBaseExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxPanelBaseExtDoEnable__bool = a_DoEnable__bool;
    m_wxPanelBaseExtDoFreeze = a_DoFreeze;
    m_wxPanelBaseExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxPanelBaseExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxPanelBaseExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxPanelBaseExtDoGetBestSize = a_DoGetBestSize;
    m_wxPanelBaseExtDoGetClientData = a_DoGetClientData;
    m_wxPanelBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxPanelBaseExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxPanelBaseExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxPanelBaseExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxPanelBaseExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxPanelBaseExtDoGetSizeFromClientSize__wxSizeCR = a_DoGetSizeFromClientSize__wxSizeCR;
    m_wxPanelBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxPanelBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxPanelBaseExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxPanelBaseExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxPanelBaseExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxPanelBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxPanelBaseExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxPanelBaseExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxPanelBaseExtDoPhase__int = a_DoPhase__int;
    m_wxPanelBaseExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxPanelBaseExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxPanelBaseExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxPanelBaseExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxPanelBaseExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxPanelBaseExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxPanelBaseExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxPanelBaseExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxPanelBaseExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxPanelBaseExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxPanelBaseExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxPanelBaseExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxPanelBaseExtDoThaw = a_DoThaw;
    m_wxPanelBaseExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxPanelBaseExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxPanelBaseExtEnable__bool = a_Enable__bool;
    m_wxPanelBaseExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxPanelBaseExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxPanelBaseExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxPanelBaseExtFit = a_Fit;
    m_wxPanelBaseExtFitInside = a_FitInside;
    m_wxPanelBaseExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxPanelBaseExtGetCharHeight = a_GetCharHeight;
    m_wxPanelBaseExtGetCharWidth = a_GetCharWidth;
    m_wxPanelBaseExtGetClassInfo = a_GetClassInfo;
    m_wxPanelBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxPanelBaseExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
    m_wxPanelBaseExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxPanelBaseExtGetDPI = a_GetDPI;
    m_wxPanelBaseExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxPanelBaseExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxPanelBaseExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxPanelBaseExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxPanelBaseExtGetDropTarget = a_GetDropTarget;
    m_wxPanelBaseExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxPanelBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxPanelBaseExtGetEventTable = a_GetEventTable;
    m_wxPanelBaseExtGetHandle = a_GetHandle;
    m_wxPanelBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxPanelBaseExtGetLabel = a_GetLabel;
    m_wxPanelBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxPanelBaseExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxPanelBaseExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxPanelBaseExtGetMaxSize = a_GetMaxSize;
    m_wxPanelBaseExtGetMinClientSize = a_GetMinClientSize;
    m_wxPanelBaseExtGetMinSize = a_GetMinSize;
    m_wxPanelBaseExtGetName = a_GetName;
    m_wxPanelBaseExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxPanelBaseExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxPanelBaseExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxPanelBaseExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxPanelBaseExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxPanelBaseExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxPanelBaseExtGetTransparent = a_GetTransparent;
    m_wxPanelBaseExtGetValidator = a_GetValidator;
    m_wxPanelBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxPanelBaseExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxPanelBaseExtHasCapture = a_HasCapture;
    m_wxPanelBaseExtHasFocus = a_HasFocus;
    m_wxPanelBaseExtHasMultiplePages = a_HasMultiplePages;
    m_wxPanelBaseExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxPanelBaseExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxPanelBaseExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxPanelBaseExtInheritAttributes = a_InheritAttributes;
    m_wxPanelBaseExtInitDialog = a_InitDialog;
    m_wxPanelBaseExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxPanelBaseExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxPanelBaseExtIsRetained = a_IsRetained;
    m_wxPanelBaseExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxPanelBaseExtIsShown = a_IsShown;
    m_wxPanelBaseExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxPanelBaseExtIsThisEnabled = a_IsThisEnabled;
    m_wxPanelBaseExtIsTopLevel = a_IsTopLevel;
    m_wxPanelBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxPanelBaseExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxPanelBaseExtLayout = a_Layout;
    m_wxPanelBaseExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxPanelBaseExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxPanelBaseExtLower = a_Lower;
    m_wxPanelBaseExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxPanelBaseExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxPanelBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxPanelBaseExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxPanelBaseExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxPanelBaseExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxPanelBaseExtRaise = a_Raise;
    m_wxPanelBaseExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxPanelBaseExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxPanelBaseExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxPanelBaseExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxPanelBaseExtScrollLines__int = a_ScrollLines__int;
    m_wxPanelBaseExtScrollPages__int = a_ScrollPages__int;
    m_wxPanelBaseExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxPanelBaseExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxPanelBaseExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxPanelBaseExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxPanelBaseExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxPanelBaseExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxPanelBaseExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxPanelBaseExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxPanelBaseExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxPanelBaseExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxPanelBaseExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxPanelBaseExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxPanelBaseExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxPanelBaseExtSetFocus = a_SetFocus;
    m_wxPanelBaseExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxPanelBaseExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxPanelBaseExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxPanelBaseExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxPanelBaseExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxPanelBaseExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxPanelBaseExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxPanelBaseExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxPanelBaseExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxPanelBaseExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxPanelBaseExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxPanelBaseExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxPanelBaseExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxPanelBaseExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxPanelBaseExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxPanelBaseExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxPanelBaseExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxPanelBaseExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxPanelBaseExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxPanelBaseExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxPanelBaseExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxPanelBaseExtShouldInheritColours = a_ShouldInheritColours;
    m_wxPanelBaseExtShow__bool = a_Show__bool;
    m_wxPanelBaseExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxPanelBaseExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxPanelBaseExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxPanelBaseExtTriggerScrollEvent__wxEventType = a_TriggerScrollEvent__wxEventType;
    m_wxPanelBaseExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxPanelBaseExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxPanelBaseExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxPanelBaseExtUpdate = a_Update;
    m_wxPanelBaseExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxPanelBaseExtValidate = a_Validate;
    m_wxPanelBaseExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxPanelBaseExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxPanelBaseExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxPanelBaseExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxPanelBaseExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxPanelBaseExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxPanelBaseExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxPanelBaseExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxPanelBaseExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxPanelBaseExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
  }
};

class wxPanelExt: public wxPanel
{
public:
  wxPanelExt(): wxPanel()  {  }
  wxPanelExt(wxWindow* parent, wxWindowID winid = wxID_ANY, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = 0x00080000 | wxBORDER_NONE, wxString const& name = wxString::FromAscii(wxPanelNameStr)): wxPanel(parent, winid, pos, size, style, name)  {  }
  wxPanelExtAcceptsFocusFunc m_wxPanelExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxPanel::AcceptsFocus();
    if (*m_wxPanelExtAcceptsFocus != NULL){
      return m_wxPanelExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtAcceptsFocusFromKeyboardFunc m_wxPanelExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxPanel::AcceptsFocusFromKeyboard();
    if (*m_wxPanelExtAcceptsFocusFromKeyboard != NULL){
      return m_wxPanelExtAcceptsFocusFromKeyboard(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtAcceptsFocusRecursivelyFunc m_wxPanelExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxPanel::AcceptsFocusRecursively();
    if (*m_wxPanelExtAcceptsFocusRecursively != NULL){
      return m_wxPanelExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtAddChild__wxWindowBasePFunc m_wxPanelExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxPanel::AddChild(child);
    if (*m_wxPanelExtAddChild__wxWindowBaseP != NULL){
      return m_wxPanelExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxPanelExtAddPendingEvent__wxEventCRFunc m_wxPanelExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxPanel::AddPendingEvent(event);
    if (*m_wxPanelExtAddPendingEvent__wxEventCR != NULL){
      return m_wxPanelExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxPanelExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxPanelExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxPanel::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxPanelExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxPanelExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtAdjustForParentClientOrigin__intRintRintFunc m_wxPanelExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxPanel::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxPanelExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxPanelExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxPanelExtAlwaysShowScrollbars__boolboolFunc m_wxPanelExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxPanel::AlwaysShowScrollbars(horz, vert);
    if (*m_wxPanelExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxPanelExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxPanelExtAssociateHandle__WXWidgetFunc m_wxPanelExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxPanel::AssociateHandle(handle);
    if (*m_wxPanelExtAssociateHandle__WXWidget != NULL){
      return m_wxPanelExtAssociateHandle__WXWidget(this, handle);
    }
  }
  wxPanelExtBeginRepositioningChildrenFunc m_wxPanelExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxPanel::BeginRepositioningChildren();
    if (*m_wxPanelExtBeginRepositioningChildren != NULL){
      return m_wxPanelExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtCanApplyThemeBorderFunc m_wxPanelExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxPanel::CanApplyThemeBorder();
    if (*m_wxPanelExtCanApplyThemeBorder != NULL){
      return m_wxPanelExtCanApplyThemeBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtCanBeFocusedFunc m_wxPanelExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxPanel::CanBeFocused();
    if (*m_wxPanelExtCanBeFocused != NULL){
      return m_wxPanelExtCanBeFocused(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtCanBeOutsideClientAreaFunc m_wxPanelExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxPanel::CanBeOutsideClientArea();
    if (*m_wxPanelExtCanBeOutsideClientArea != NULL){
      return m_wxPanelExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtCanScroll__intFunc m_wxPanelExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxPanel::CanScroll(orient);
    if (*m_wxPanelExtCanScroll__int != NULL){
      return m_wxPanelExtCanScroll__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtCanSetTransparentFunc m_wxPanelExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxPanel::CanSetTransparent();
    if (*m_wxPanelExtCanSetTransparent != NULL){
      return m_wxPanelExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtClearBackgroundFunc m_wxPanelExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxPanel::ClearBackground();
    if (*m_wxPanelExtClearBackground != NULL){
      return m_wxPanelExtClearBackground(this);
    }
  }
  wxPanelExtClientToWindowSize__wxSizeCRFunc m_wxPanelExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxPanel::ClientToWindowSize(size);
    if (*m_wxPanelExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxPanelExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtCloneRefData__wxObjectRefDataCPFunc m_wxPanelExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxPanel::CloneRefData(data);
    if (*m_wxPanelExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxPanelExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtCreateRefDataFunc m_wxPanelExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxPanel::CreateRefData();
    if (*m_wxPanelExtCreateRefData != NULL){
      return m_wxPanelExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDestroyFunc m_wxPanelExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxPanel::Destroy();
    if (*m_wxPanelExtDestroy != NULL){
      return m_wxPanelExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDissociateHandleFunc m_wxPanelExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxPanel::DissociateHandle();
    if (*m_wxPanelExtDissociateHandle != NULL){
      return m_wxPanelExtDissociateHandle(this);
    }
  }
  wxPanelExtDoCaptureMouseFunc m_wxPanelExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxPanel::DoCaptureMouse();
    if (*m_wxPanelExtDoCaptureMouse != NULL){
      return m_wxPanelExtDoCaptureMouse(this);
    }
  }
  wxPanelExtDoCentre__intFunc m_wxPanelExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxPanel::DoCentre(dir);
    if (*m_wxPanelExtDoCentre__int != NULL){
      return m_wxPanelExtDoCentre__int(this, dir);
    }
  }
  wxPanelExtDoClientToScreen__intPintPFunc m_wxPanelExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxPanel::DoClientToScreen(x, y);
    if (*m_wxPanelExtDoClientToScreen__intPintP != NULL){
      return m_wxPanelExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxPanelExtDoEnable__boolFunc m_wxPanelExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxPanel::DoEnable(enable);
    if (*m_wxPanelExtDoEnable__bool != NULL){
      return m_wxPanelExtDoEnable__bool(this, enable);
    }
  }
  wxPanelExtDoFreezeFunc m_wxPanelExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxPanel::DoFreeze();
    if (*m_wxPanelExtDoFreeze != NULL){
      return m_wxPanelExtDoFreeze(this);
    }
  }
  wxPanelExtDoGetBestClientHeight__intFunc m_wxPanelExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxPanel::DoGetBestClientHeight(width);
    if (*m_wxPanelExtDoGetBestClientHeight__int != NULL){
      return m_wxPanelExtDoGetBestClientHeight__int(this, width, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoGetBestClientSizeFunc m_wxPanelExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxPanel::DoGetBestClientSize();
    if (*m_wxPanelExtDoGetBestClientSize != NULL){
      return m_wxPanelExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoGetBestClientWidth__intFunc m_wxPanelExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxPanel::DoGetBestClientWidth(height);
    if (*m_wxPanelExtDoGetBestClientWidth__int != NULL){
      return m_wxPanelExtDoGetBestClientWidth__int(this, height, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoGetBestSizeFunc m_wxPanelExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxPanel::DoGetBestSize();
    if (*m_wxPanelExtDoGetBestSize != NULL){
      return m_wxPanelExtDoGetBestSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoGetClientDataFunc m_wxPanelExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxPanel::DoGetClientData();
    if (*m_wxPanelExtDoGetClientData != NULL){
      return m_wxPanelExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoGetClientObjectFunc m_wxPanelExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxPanel::DoGetClientObject();
    if (*m_wxPanelExtDoGetClientObject != NULL){
      return m_wxPanelExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoGetClientSize__intPintPFunc m_wxPanelExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxPanel::DoGetClientSize(width, height);
    if (*m_wxPanelExtDoGetClientSize__intPintP != NULL){
      return m_wxPanelExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxPanelExtDoGetPosition__intPintPFunc m_wxPanelExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxPanel::DoGetPosition(x, y);
    if (*m_wxPanelExtDoGetPosition__intPintP != NULL){
      return m_wxPanelExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxPanelExtDoGetScreenPosition__intPintPFunc m_wxPanelExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxPanel::DoGetScreenPosition(x, y);
    if (*m_wxPanelExtDoGetScreenPosition__intPintP != NULL){
      return m_wxPanelExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxPanelExtDoGetSize__intPintPFunc m_wxPanelExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxPanel::DoGetSize(width, height);
    if (*m_wxPanelExtDoGetSize__intPintP != NULL){
      return m_wxPanelExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxPanelExtDoGetSizeFromClientSize__wxSizeCRFunc m_wxPanelExtDoGetSizeFromClientSize__wxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxPanel::DoGetSizeFromClientSize(size);
    if (*m_wxPanelExtDoGetSizeFromClientSize__wxSizeCR != NULL){
      return m_wxPanelExtDoGetSizeFromClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxPanelExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxPanel::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxPanelExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxPanelExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxPanelExtDoGetVirtualSizeFunc m_wxPanelExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxPanel::DoGetVirtualSize();
    if (*m_wxPanelExtDoGetVirtualSize != NULL){
      return m_wxPanelExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoHitTest__wxCoordwxCoordFunc m_wxPanelExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxPanel::DoHitTest(x, y);
    if (*m_wxPanelExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxPanelExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoIsExposed__intintintintFunc m_wxPanelExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxPanel::DoIsExposed(x, y, w, h);
    if (*m_wxPanelExtDoIsExposed__intintintint != NULL){
      return m_wxPanelExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoIsExposed__intintFunc m_wxPanelExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxPanel::DoIsExposed(x, y);
    if (*m_wxPanelExtDoIsExposed__intint != NULL){
      return m_wxPanelExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxPanelExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxPanel::DoMoveInTabOrder(win, move);
    if (*m_wxPanelExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxPanelExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxPanelExtDoMoveWindow__intintintintFunc m_wxPanelExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxPanel::DoMoveWindow(x, y, width, height);
    if (*m_wxPanelExtDoMoveWindow__intintintint != NULL){
      return m_wxPanelExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxPanelExtDoNavigateIn__intFunc m_wxPanelExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxPanel::DoNavigateIn(flags);
    if (*m_wxPanelExtDoNavigateIn__int != NULL){
      return m_wxPanelExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoPhase__intFunc m_wxPanelExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxPanel::DoPhase(phase);
    if (*m_wxPanelExtDoPhase__int != NULL){
      return m_wxPanelExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoPopupMenu__wxMenuPintintFunc m_wxPanelExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxPanel::DoPopupMenu(menu, x, y);
    if (*m_wxPanelExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxPanelExtDoPopupMenu__wxMenuPintint(this, menu, x, y, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoReleaseMouseFunc m_wxPanelExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxPanel::DoReleaseMouse();
    if (*m_wxPanelExtDoReleaseMouse != NULL){
      return m_wxPanelExtDoReleaseMouse(this);
    }
  }
  wxPanelExtDoScreenToClient__intPintPFunc m_wxPanelExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxPanel::DoScreenToClient(x, y);
    if (*m_wxPanelExtDoScreenToClient__intPintP != NULL){
      return m_wxPanelExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxPanelExtDoSetClientData__voidPFunc m_wxPanelExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxPanel::DoSetClientData(data);
    if (*m_wxPanelExtDoSetClientData__voidP != NULL){
      return m_wxPanelExtDoSetClientData__voidP(this, data);
    }
  }
  wxPanelExtDoSetClientObject__wxClientDataPFunc m_wxPanelExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxPanel::DoSetClientObject(data);
    if (*m_wxPanelExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxPanelExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxPanelExtDoSetClientSize__intintFunc m_wxPanelExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxPanel::DoSetClientSize(width, height);
    if (*m_wxPanelExtDoSetClientSize__intint != NULL){
      return m_wxPanelExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxPanelExtDoSetSize__intintintintintFunc m_wxPanelExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxPanel::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxPanelExtDoSetSize__intintintintint != NULL){
      return m_wxPanelExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxPanelExtDoSetSizeHints__intintintintintintFunc m_wxPanelExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxPanel::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxPanelExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxPanelExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxPanelExtDoSetToolTip__wxToolTipPFunc m_wxPanelExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxPanel::DoSetToolTip(tip);
    if (*m_wxPanelExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxPanelExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxPanelExtDoSetToolTipText__wxStringCRFunc m_wxPanelExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxPanel::DoSetToolTipText(tip);
    if (*m_wxPanelExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxPanelExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxPanelExtDoSetVirtualSize__intintFunc m_wxPanelExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxPanel::DoSetVirtualSize(x, y);
    if (*m_wxPanelExtDoSetVirtualSize__intint != NULL){
      return m_wxPanelExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxPanelExtDoSetWindowVariant__wxWindowVariantFunc m_wxPanelExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxPanel::DoSetWindowVariant(variant);
    if (*m_wxPanelExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxPanelExtDoSetWindowVariant__wxWindowVariant(this, variant);
    }
  }
  wxPanelExtDoThawFunc m_wxPanelExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxPanel::DoThaw();
    if (*m_wxPanelExtDoThaw != NULL){
      return m_wxPanelExtDoThaw(this);
    }
  }
  wxPanelExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxPanelExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxPanel::DoUpdateWindowUI(event);
    if (*m_wxPanelExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxPanelExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxPanelExtDragAcceptFiles__boolFunc m_wxPanelExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxPanel::DragAcceptFiles(accept);
    if (*m_wxPanelExtDragAcceptFiles__bool != NULL){
      return m_wxPanelExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxPanelExtEnable__boolFunc m_wxPanelExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxPanel::Enable(enable);
    if (*m_wxPanelExtEnable__bool != NULL){
      return m_wxPanelExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtEnableTouchEvents__intFunc m_wxPanelExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxPanel::EnableTouchEvents(eventsMask);
    if (*m_wxPanelExtEnableTouchEvents__int != NULL){
      return m_wxPanelExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtEnableVisibleFocus__boolFunc m_wxPanelExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxPanel::EnableVisibleFocus(enabled);
    if (*m_wxPanelExtEnableVisibleFocus__bool != NULL){
      return m_wxPanelExtEnableVisibleFocus__bool(this, enabled);
    }
  }
  wxPanelExtEndRepositioningChildrenFunc m_wxPanelExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxPanel::EndRepositioningChildren();
    if (*m_wxPanelExtEndRepositioningChildren != NULL){
      return m_wxPanelExtEndRepositioningChildren(this);
    }
  }
  wxPanelExtFitFunc m_wxPanelExtFit = NULL;
  virtual void Fit() override
  {
    wxPanel::Fit();
    if (*m_wxPanelExtFit != NULL){
      return m_wxPanelExtFit(this);
    }
  }
  wxPanelExtFitInsideFunc m_wxPanelExtFitInside = NULL;
  virtual void FitInside() override
  {
    wxPanel::FitInside();
    if (*m_wxPanelExtFitInside != NULL){
      return m_wxPanelExtFitInside(this);
    }
  }
  wxPanelExtGetBestVirtualSizeFunc m_wxPanelExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxPanel::GetBestVirtualSize();
    if (*m_wxPanelExtGetBestVirtualSize != NULL){
      return m_wxPanelExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetCharHeightFunc m_wxPanelExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxPanel::GetCharHeight();
    if (*m_wxPanelExtGetCharHeight != NULL){
      return m_wxPanelExtGetCharHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetCharWidthFunc m_wxPanelExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxPanel::GetCharWidth();
    if (*m_wxPanelExtGetCharWidth != NULL){
      return m_wxPanelExtGetCharWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetClassInfoFunc m_wxPanelExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxPanel::GetClassInfo();
    if (*m_wxPanelExtGetClassInfo != NULL){
      return m_wxPanelExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetClientAreaOriginFunc m_wxPanelExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxPanel::GetClientAreaOrigin();
    if (*m_wxPanelExtGetClientAreaOrigin != NULL){
      return m_wxPanelExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetClientSizeConstraint__intPintPFunc m_wxPanelExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxPanel::GetClientSizeConstraint(w, h);
    if (*m_wxPanelExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxPanelExtGetClientSizeConstraint__intPintP(this, w, h);
    }
  }
  wxPanelExtGetContentScaleFactorFunc m_wxPanelExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxPanel::GetContentScaleFactor();
    if (*m_wxPanelExtGetContentScaleFactor != NULL){
      return m_wxPanelExtGetContentScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetDPIFunc m_wxPanelExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxPanel::GetDPI();
    if (*m_wxPanelExtGetDPI != NULL){
      return m_wxPanelExtGetDPI(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetDPIScaleFactorFunc m_wxPanelExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxPanel::GetDPIScaleFactor();
    if (*m_wxPanelExtGetDPIScaleFactor != NULL){
      return m_wxPanelExtGetDPIScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetDefaultAttributesFunc m_wxPanelExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxPanel::GetDefaultAttributes();
    if (*m_wxPanelExtGetDefaultAttributes != NULL){
      return m_wxPanelExtGetDefaultAttributes(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetDefaultBorderFunc m_wxPanelExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxPanel::GetDefaultBorder();
    if (*m_wxPanelExtGetDefaultBorder != NULL){
      return m_wxPanelExtGetDefaultBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetDefaultBorderForControlFunc m_wxPanelExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxPanel::GetDefaultBorderForControl();
    if (*m_wxPanelExtGetDefaultBorderForControl != NULL){
      return m_wxPanelExtGetDefaultBorderForControl(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetDropTargetFunc m_wxPanelExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxPanel::GetDropTarget();
    if (*m_wxPanelExtGetDropTarget != NULL){
      return m_wxPanelExtGetDropTarget(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetEffectiveMinSizeFunc m_wxPanelExtGetEffectiveMinSize = NULL;
  virtual wxSize GetEffectiveMinSize() const override
  {
    wxSize res = wxPanel::GetEffectiveMinSize();
    if (*m_wxPanelExtGetEffectiveMinSize != NULL){
      return m_wxPanelExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetEventHashTableFunc m_wxPanelExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxPanel::GetEventHashTable();
    if (*m_wxPanelExtGetEventHashTable != NULL){
      return m_wxPanelExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetEventTableFunc m_wxPanelExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxPanel::GetEventTable();
    if (*m_wxPanelExtGetEventTable != NULL){
      return m_wxPanelExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetHandleFunc m_wxPanelExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxPanel::GetHandle();
    if (*m_wxPanelExtGetHandle != NULL){
      return m_wxPanelExtGetHandle(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxPanelExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxPanel::GetHelpTextAtPoint(pt, origin);
    if (*m_wxPanelExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxPanelExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetLabelFunc m_wxPanelExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxPanel::GetLabel();
    if (*m_wxPanelExtGetLabel != NULL){
      return m_wxPanelExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetLayoutDirectionFunc m_wxPanelExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxPanel::GetLayoutDirection();
    if (*m_wxPanelExtGetLayoutDirection != NULL){
      return m_wxPanelExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetMainWindowOfCompositeControlFunc m_wxPanelExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxPanel::GetMainWindowOfCompositeControl();
    if (*m_wxPanelExtGetMainWindowOfCompositeControl != NULL){
      return m_wxPanelExtGetMainWindowOfCompositeControl(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetMaxClientSizeFunc m_wxPanelExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxPanel::GetMaxClientSize();
    if (*m_wxPanelExtGetMaxClientSize != NULL){
      return m_wxPanelExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetMaxSizeFunc m_wxPanelExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxPanel::GetMaxSize();
    if (*m_wxPanelExtGetMaxSize != NULL){
      return m_wxPanelExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetMinClientSizeFunc m_wxPanelExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxPanel::GetMinClientSize();
    if (*m_wxPanelExtGetMinClientSize != NULL){
      return m_wxPanelExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetMinSizeFunc m_wxPanelExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxPanel::GetMinSize();
    if (*m_wxPanelExtGetMinSize != NULL){
      return m_wxPanelExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetNameFunc m_wxPanelExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxPanel::GetName();
    if (*m_wxPanelExtGetName != NULL){
      return m_wxPanelExtGetName(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetPositionConstraint__intPintPFunc m_wxPanelExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxPanel::GetPositionConstraint(x, y);
    if (*m_wxPanelExtGetPositionConstraint__intPintP != NULL){
      return m_wxPanelExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxPanelExtGetScrollPos__intFunc m_wxPanelExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxPanel::GetScrollPos(orient);
    if (*m_wxPanelExtGetScrollPos__int != NULL){
      return m_wxPanelExtGetScrollPos__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetScrollRange__intFunc m_wxPanelExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxPanel::GetScrollRange(orient);
    if (*m_wxPanelExtGetScrollRange__int != NULL){
      return m_wxPanelExtGetScrollRange__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetScrollThumb__intFunc m_wxPanelExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxPanel::GetScrollThumb(orient);
    if (*m_wxPanelExtGetScrollThumb__int != NULL){
      return m_wxPanelExtGetScrollThumb__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetSizeConstraint__intPintPFunc m_wxPanelExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxPanel::GetSizeConstraint(w, h);
    if (*m_wxPanelExtGetSizeConstraint__intPintP != NULL){
      return m_wxPanelExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxPanelExtGetThemeEnabledFunc m_wxPanelExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxPanel::GetThemeEnabled();
    if (*m_wxPanelExtGetThemeEnabled != NULL){
      return m_wxPanelExtGetThemeEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetTransparentFunc m_wxPanelExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxPanel::GetTransparent();
    if (*m_wxPanelExtGetTransparent != NULL){
      return m_wxPanelExtGetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetValidatorFunc m_wxPanelExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxPanel::GetValidator();
    if (*m_wxPanelExtGetValidator != NULL){
      return m_wxPanelExtGetValidator(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetWindowBorderSizeFunc m_wxPanelExtGetWindowBorderSize = NULL;
  virtual wxSize GetWindowBorderSize() const override
  {
    wxSize res = wxPanel::GetWindowBorderSize();
    if (*m_wxPanelExtGetWindowBorderSize != NULL){
      return m_wxPanelExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetWindowStyleFlagFunc m_wxPanelExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxPanel::GetWindowStyleFlag();
    if (*m_wxPanelExtGetWindowStyleFlag != NULL){
      return m_wxPanelExtGetWindowStyleFlag(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtHasCaptureFunc m_wxPanelExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxPanel::HasCapture();
    if (*m_wxPanelExtHasCapture != NULL){
      return m_wxPanelExtHasCapture(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtHasFocusFunc m_wxPanelExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxPanel::HasFocus();
    if (*m_wxPanelExtHasFocus != NULL){
      return m_wxPanelExtHasFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtHasMultiplePagesFunc m_wxPanelExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxPanel::HasMultiplePages();
    if (*m_wxPanelExtHasMultiplePages != NULL){
      return m_wxPanelExtHasMultiplePages(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtHasTransparentBackgroundFunc m_wxPanelExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxPanel::HasTransparentBackground();
    if (*m_wxPanelExtHasTransparentBackground != NULL){
      return m_wxPanelExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtHideWithEffect__wxShowEffectunsignedintFunc m_wxPanelExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxPanel::HideWithEffect(effect, timeout);
    if (*m_wxPanelExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxPanelExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtInformFirstDirection__intintintFunc m_wxPanelExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxPanel::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxPanelExtInformFirstDirection__intintint != NULL){
      return m_wxPanelExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtInheritAttributesFunc m_wxPanelExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxPanel::InheritAttributes();
    if (*m_wxPanelExtInheritAttributes != NULL){
      return m_wxPanelExtInheritAttributes(this);
    }
  }
  wxPanelExtInitDialogFunc m_wxPanelExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxPanel::InitDialog();
    if (*m_wxPanelExtInitDialog != NULL){
      return m_wxPanelExtInitDialog(this);
    }
  }
  wxPanelExtIsClientAreaChild__wxWindowCPFunc m_wxPanelExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxPanel::IsClientAreaChild(child);
    if (*m_wxPanelExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxPanelExtIsClientAreaChild__wxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsDoubleBufferedFunc m_wxPanelExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxPanel::IsDoubleBuffered();
    if (*m_wxPanelExtIsDoubleBuffered != NULL){
      return m_wxPanelExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsRetainedFunc m_wxPanelExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxPanel::IsRetained();
    if (*m_wxPanelExtIsRetained != NULL){
      return m_wxPanelExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsScrollbarAlwaysShown__intFunc m_wxPanelExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxPanel::IsScrollbarAlwaysShown(orient);
    if (*m_wxPanelExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxPanelExtIsScrollbarAlwaysShown__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsShownFunc m_wxPanelExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxPanel::IsShown();
    if (*m_wxPanelExtIsShown != NULL){
      return m_wxPanelExtIsShown(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsShownOnScreenFunc m_wxPanelExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxPanel::IsShownOnScreen();
    if (*m_wxPanelExtIsShownOnScreen != NULL){
      return m_wxPanelExtIsShownOnScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsThisEnabledFunc m_wxPanelExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxPanel::IsThisEnabled();
    if (*m_wxPanelExtIsThisEnabled != NULL){
      return m_wxPanelExtIsThisEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsTopLevelFunc m_wxPanelExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxPanel::IsTopLevel();
    if (*m_wxPanelExtIsTopLevel != NULL){
      return m_wxPanelExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxPanelExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxPanel::IsTopNavigationDomain(kind);
    if (*m_wxPanelExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxPanelExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsTransparentBackgroundSupported__wxStringPFunc m_wxPanelExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxPanel::IsTransparentBackgroundSupported(reason);
    if (*m_wxPanelExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxPanelExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtLayoutFunc m_wxPanelExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxPanel::Layout();
    if (*m_wxPanelExtLayout != NULL){
      return m_wxPanelExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtLayoutPhase1__intPFunc m_wxPanelExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxPanel::LayoutPhase1(noChanges);
    if (*m_wxPanelExtLayoutPhase1__intP != NULL){
      return m_wxPanelExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtLayoutPhase2__intPFunc m_wxPanelExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxPanel::LayoutPhase2(noChanges);
    if (*m_wxPanelExtLayoutPhase2__intP != NULL){
      return m_wxPanelExtLayoutPhase2__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtLowerFunc m_wxPanelExtLower = NULL;
  virtual void Lower() override
  {
    wxPanel::Lower();
    if (*m_wxPanelExtLower != NULL){
      return m_wxPanelExtLower(this);
    }
  }
  wxPanelExtMoveConstraint__intintFunc m_wxPanelExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxPanel::MoveConstraint(x, y);
    if (*m_wxPanelExtMoveConstraint__intint != NULL){
      return m_wxPanelExtMoveConstraint__intint(this, x, y);
    }
  }
  wxPanelExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxPanelExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxPanel::OnDynamicBind(entry);
    if (*m_wxPanelExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxPanelExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtOnInternalIdleFunc m_wxPanelExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxPanel::OnInternalIdle();
    if (*m_wxPanelExtOnInternalIdle != NULL){
      return m_wxPanelExtOnInternalIdle(this);
    }
  }
  wxPanelExtPrepareDC__wxDCRFunc m_wxPanelExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxPanel::PrepareDC(dc);
    if (*m_wxPanelExtPrepareDC__wxDCR != NULL){
      return m_wxPanelExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxPanelExtProcessEvent__wxEventRFunc m_wxPanelExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxPanel::ProcessEvent(event);
    if (*m_wxPanelExtProcessEvent__wxEventR != NULL){
      return m_wxPanelExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtQueueEvent__wxEventPFunc m_wxPanelExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxPanel::QueueEvent(event);
    if (*m_wxPanelExtQueueEvent__wxEventP != NULL){
      return m_wxPanelExtQueueEvent__wxEventP(this, event);
    }
  }
  wxPanelExtRaiseFunc m_wxPanelExtRaise = NULL;
  virtual void Raise() override
  {
    wxPanel::Raise();
    if (*m_wxPanelExtRaise != NULL){
      return m_wxPanelExtRaise(this);
    }
  }
  wxPanelExtRefresh__boolwxRectCPFunc m_wxPanelExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxPanel::Refresh(eraseBackground, rect);
    if (*m_wxPanelExtRefresh__boolwxRectCP != NULL){
      return m_wxPanelExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxPanelExtRegisterHotKey__intintintFunc m_wxPanelExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxPanel::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxPanelExtRegisterHotKey__intintint != NULL){
      return m_wxPanelExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtRemoveChild__wxWindowBasePFunc m_wxPanelExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxPanel::RemoveChild(child);
    if (*m_wxPanelExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxPanelExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxPanelExtReparent__wxWindowBasePFunc m_wxPanelExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxPanel::Reparent(newParent);
    if (*m_wxPanelExtReparent__wxWindowBaseP != NULL){
      return m_wxPanelExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtScrollLines__intFunc m_wxPanelExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxPanel::ScrollLines(lines);
    if (*m_wxPanelExtScrollLines__int != NULL){
      return m_wxPanelExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtScrollPages__intFunc m_wxPanelExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxPanel::ScrollPages(pages);
    if (*m_wxPanelExtScrollPages__int != NULL){
      return m_wxPanelExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtScrollWindow__intintwxRectCPFunc m_wxPanelExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxPanel::ScrollWindow(dx, dy, rect);
    if (*m_wxPanelExtScrollWindow__intintwxRectCP != NULL){
      return m_wxPanelExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxPanelExtSearchEventTable__wxEventTableRwxEventRFunc m_wxPanelExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxPanel::SearchEventTable(table, event);
    if (*m_wxPanelExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxPanelExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtSendIdleEvents__wxIdleEventRFunc m_wxPanelExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxPanel::SendIdleEvents(event);
    if (*m_wxPanelExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxPanelExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtSendSizeEvent__intFunc m_wxPanelExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxPanel::SendSizeEvent(flags);
    if (*m_wxPanelExtSendSizeEvent__int != NULL){
      return m_wxPanelExtSendSizeEvent__int(this, flags);
    }
  }
  wxPanelExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxPanelExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxPanel::SetAcceleratorTable(accel);
    if (*m_wxPanelExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxPanelExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxPanelExtSetBackgroundColour__wxColourCRFunc m_wxPanelExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxPanel::SetBackgroundColour(colour);
    if (*m_wxPanelExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxPanelExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxPanelExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxPanel::SetBackgroundStyle(style);
    if (*m_wxPanelExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxPanelExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetCanFocus__boolFunc m_wxPanelExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxPanel::SetCanFocus(canFocus);
    if (*m_wxPanelExtSetCanFocus__bool != NULL){
      return m_wxPanelExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxPanelExtSetConstraintSizes__boolFunc m_wxPanelExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxPanel::SetConstraintSizes(recurse);
    if (*m_wxPanelExtSetConstraintSizes__bool != NULL){
      return m_wxPanelExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxPanelExtSetCursor__wxCursorCRFunc m_wxPanelExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxPanel::SetCursor(cursor);
    if (*m_wxPanelExtSetCursor__wxCursorCR != NULL){
      return m_wxPanelExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetDoubleBuffered__boolFunc m_wxPanelExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxPanel::SetDoubleBuffered(on);
    if (*m_wxPanelExtSetDoubleBuffered__bool != NULL){
      return m_wxPanelExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxPanelExtSetDropTarget__wxDropTargetPFunc m_wxPanelExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxPanel::SetDropTarget(dropTarget);
    if (*m_wxPanelExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxPanelExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxPanelExtSetExtraStyle__longFunc m_wxPanelExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxPanel::SetExtraStyle(exStyle);
    if (*m_wxPanelExtSetExtraStyle__long != NULL){
      return m_wxPanelExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxPanelExtSetFocusFunc m_wxPanelExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxPanel::SetFocus();
    if (*m_wxPanelExtSetFocus != NULL){
      return m_wxPanelExtSetFocus(this);
    }
  }
  wxPanelExtSetFocusFromKbdFunc m_wxPanelExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxPanel::SetFocusFromKbd();
    if (*m_wxPanelExtSetFocusFromKbd != NULL){
      return m_wxPanelExtSetFocusFromKbd(this);
    }
  }
  wxPanelExtSetFont__wxFontCRFunc m_wxPanelExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxPanel::SetFont(font);
    if (*m_wxPanelExtSetFont__wxFontCR != NULL){
      return m_wxPanelExtSetFont__wxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetForegroundColour__wxColourCRFunc m_wxPanelExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxPanel::SetForegroundColour(colour);
    if (*m_wxPanelExtSetForegroundColour__wxColourCR != NULL){
      return m_wxPanelExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetId__wxWindowIDFunc m_wxPanelExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxPanel::SetId(winid);
    if (*m_wxPanelExtSetId__wxWindowID != NULL){
      return m_wxPanelExtSetId__wxWindowID(this, winid);
    }
  }
  wxPanelExtSetLabel__wxStringCRFunc m_wxPanelExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxPanel::SetLabel(label);
    if (*m_wxPanelExtSetLabel__wxStringCR != NULL){
      return m_wxPanelExtSetLabel__wxStringCR(this, label);
    }
  }
  wxPanelExtSetLayoutDirection__wxLayoutDirectionFunc m_wxPanelExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxPanel::SetLayoutDirection(dir);
    if (*m_wxPanelExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxPanelExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxPanelExtSetMaxClientSize__wxSizeCRFunc m_wxPanelExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxPanel::SetMaxClientSize(size);
    if (*m_wxPanelExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxPanelExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxPanelExtSetMaxSize__wxSizeCRFunc m_wxPanelExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxPanel::SetMaxSize(maxSize);
    if (*m_wxPanelExtSetMaxSize__wxSizeCR != NULL){
      return m_wxPanelExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxPanelExtSetMinClientSize__wxSizeCRFunc m_wxPanelExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxPanel::SetMinClientSize(size);
    if (*m_wxPanelExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxPanelExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxPanelExtSetMinSize__wxSizeCRFunc m_wxPanelExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxPanel::SetMinSize(minSize);
    if (*m_wxPanelExtSetMinSize__wxSizeCR != NULL){
      return m_wxPanelExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxPanelExtSetName__wxStringCRFunc m_wxPanelExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxPanel::SetName(name);
    if (*m_wxPanelExtSetName__wxStringCR != NULL){
      return m_wxPanelExtSetName__wxStringCR(this, name);
    }
  }
  wxPanelExtSetNextHandler__wxEvtHandlerPFunc m_wxPanelExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxPanel::SetNextHandler(handler);
    if (*m_wxPanelExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxPanelExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxPanelExtSetPreviousHandler__wxEvtHandlerPFunc m_wxPanelExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxPanel::SetPreviousHandler(handler);
    if (*m_wxPanelExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxPanelExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxPanelExtSetScrollPos__intintboolFunc m_wxPanelExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxPanel::SetScrollPos(orient, pos, refresh);
    if (*m_wxPanelExtSetScrollPos__intintbool != NULL){
      return m_wxPanelExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxPanelExtSetScrollbar__intintintintboolFunc m_wxPanelExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxPanel::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxPanelExtSetScrollbar__intintintintbool != NULL){
      return m_wxPanelExtSetScrollbar__intintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxPanelExtSetSizeConstraint__intintintintFunc m_wxPanelExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxPanel::SetSizeConstraint(x, y, w, h);
    if (*m_wxPanelExtSetSizeConstraint__intintintint != NULL){
      return m_wxPanelExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxPanelExtSetSizeHints__intintintintintintFunc m_wxPanelExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxPanel::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxPanelExtSetSizeHints__intintintintintint != NULL){
      return m_wxPanelExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxPanelExtSetThemeEnabled__boolFunc m_wxPanelExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxPanel::SetThemeEnabled(enableTheme);
    if (*m_wxPanelExtSetThemeEnabled__bool != NULL){
      return m_wxPanelExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxPanelExtSetTransparent__wxByteFunc m_wxPanelExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxPanel::SetTransparent(alpha);
    if (*m_wxPanelExtSetTransparent__wxByte != NULL){
      return m_wxPanelExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetValidator__wxValidatorCRFunc m_wxPanelExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxPanel::SetValidator(validator);
    if (*m_wxPanelExtSetValidator__wxValidatorCR != NULL){
      return m_wxPanelExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxPanelExtSetWindowStyleFlag__longFunc m_wxPanelExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxPanel::SetWindowStyleFlag(style);
    if (*m_wxPanelExtSetWindowStyleFlag__long != NULL){
      return m_wxPanelExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxPanelExtShouldInheritColoursFunc m_wxPanelExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxPanel::ShouldInheritColours();
    if (*m_wxPanelExtShouldInheritColours != NULL){
      return m_wxPanelExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtShow__boolFunc m_wxPanelExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxPanel::Show(show);
    if (*m_wxPanelExtShow__bool != NULL){
      return m_wxPanelExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtShowWithEffect__wxShowEffectunsignedintFunc m_wxPanelExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxPanel::ShowWithEffect(effect, timeout);
    if (*m_wxPanelExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxPanelExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtTransferDataFromWindowFunc m_wxPanelExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxPanel::TransferDataFromWindow();
    if (*m_wxPanelExtTransferDataFromWindow != NULL){
      return m_wxPanelExtTransferDataFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtTransferDataToWindowFunc m_wxPanelExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxPanel::TransferDataToWindow();
    if (*m_wxPanelExtTransferDataToWindow != NULL){
      return m_wxPanelExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtTriggerScrollEvent__wxEventTypeFunc m_wxPanelExtTriggerScrollEvent__wxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxPanel::TriggerScrollEvent(scrollEvent);
    if (*m_wxPanelExtTriggerScrollEvent__wxEventType != NULL){
      return m_wxPanelExtTriggerScrollEvent__wxEventType(this, scrollEvent);
    }
  }
  wxPanelExtTryAfter__wxEventRFunc m_wxPanelExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxPanel::TryAfter(event);
    if (*m_wxPanelExtTryAfter__wxEventR != NULL){
      return m_wxPanelExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtTryBefore__wxEventRFunc m_wxPanelExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxPanel::TryBefore(event);
    if (*m_wxPanelExtTryBefore__wxEventR != NULL){
      return m_wxPanelExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtUnregisterHotKey__intFunc m_wxPanelExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxPanel::UnregisterHotKey(hotkeyId);
    if (*m_wxPanelExtUnregisterHotKey__int != NULL){
      return m_wxPanelExtUnregisterHotKey__int(this, hotkeyId, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtUpdateFunc m_wxPanelExtUpdate = NULL;
  virtual void Update() override
  {
    wxPanel::Update();
    if (*m_wxPanelExtUpdate != NULL){
      return m_wxPanelExtUpdate(this);
    }
  }
  wxPanelExtUpdateWindowUI__longFunc m_wxPanelExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxPanel::UpdateWindowUI(flags);
    if (*m_wxPanelExtUpdateWindowUI__long != NULL){
      return m_wxPanelExtUpdateWindowUI__long(this, flags);
    }
  }
  wxPanelExtValidateFunc m_wxPanelExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxPanel::Validate();
    if (*m_wxPanelExtValidate != NULL){
      return m_wxPanelExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxPanelExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxPanel::WXAdjustFontToOwnPPI(font);
    if (*m_wxPanelExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxPanelExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxPanelExtWXGetTextEntryFunc m_wxPanelExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxPanel::WXGetTextEntry();
    if (*m_wxPanelExtWXGetTextEntry != NULL){
      return m_wxPanelExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXReservedEvtHandler1__voidPFunc m_wxPanelExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxPanel::WXReservedEvtHandler1(param0);
    if (*m_wxPanelExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxPanelExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXReservedEvtHandler2__voidPFunc m_wxPanelExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxPanel::WXReservedEvtHandler2(param0);
    if (*m_wxPanelExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxPanelExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXReservedWindow1__voidPFunc m_wxPanelExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxPanel::WXReservedWindow1(param0);
    if (*m_wxPanelExtWXReservedWindow1__voidP != NULL){
      return m_wxPanelExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXReservedWindow2__voidPFunc m_wxPanelExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxPanel::WXReservedWindow2(param0);
    if (*m_wxPanelExtWXReservedWindow2__voidP != NULL){
      return m_wxPanelExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXReservedWindow3__voidPFunc m_wxPanelExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxPanel::WXReservedWindow3(param0);
    if (*m_wxPanelExtWXReservedWindow3__voidP != NULL){
      return m_wxPanelExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxPanelExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxPanel::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxPanelExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxPanelExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxPanelExtWarpPointer__intintFunc m_wxPanelExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxPanel::WarpPointer(x, y);
    if (*m_wxPanelExtWarpPointer__intint != NULL){
      return m_wxPanelExtWarpPointer__intint(this, x, y);
    }
  }
  wxPanelExtWindowToClientSize__wxSizeCRFunc m_wxPanelExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxPanel::WindowToClientSize(size);
    if (*m_wxPanelExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxPanelExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxPanelExt(wxPanelExtAcceptsFocusFunc a_AcceptsFocus, wxPanelExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxPanelExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxPanelExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxPanelExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxPanelExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxPanelExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxPanelExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxPanelExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxPanelExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxPanelExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxPanelExtCanBeFocusedFunc a_CanBeFocused, wxPanelExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxPanelExtCanScroll__intFunc a_CanScroll__int, wxPanelExtCanSetTransparentFunc a_CanSetTransparent, wxPanelExtClearBackgroundFunc a_ClearBackground, wxPanelExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxPanelExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxPanelExtCreateRefDataFunc a_CreateRefData, wxPanelExtDestroyFunc a_Destroy, wxPanelExtDissociateHandleFunc a_DissociateHandle, wxPanelExtDoCaptureMouseFunc a_DoCaptureMouse, wxPanelExtDoCentre__intFunc a_DoCentre__int, wxPanelExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxPanelExtDoEnable__boolFunc a_DoEnable__bool, wxPanelExtDoFreezeFunc a_DoFreeze, wxPanelExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxPanelExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxPanelExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxPanelExtDoGetBestSizeFunc a_DoGetBestSize, wxPanelExtDoGetClientDataFunc a_DoGetClientData, wxPanelExtDoGetClientObjectFunc a_DoGetClientObject, wxPanelExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxPanelExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxPanelExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxPanelExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxPanelExtDoGetSizeFromClientSize__wxSizeCRFunc a_DoGetSizeFromClientSize__wxSizeCR, wxPanelExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxPanelExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxPanelExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxPanelExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxPanelExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxPanelExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxPanelExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxPanelExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxPanelExtDoPhase__intFunc a_DoPhase__int, wxPanelExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxPanelExtDoReleaseMouseFunc a_DoReleaseMouse, wxPanelExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxPanelExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxPanelExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxPanelExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxPanelExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxPanelExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxPanelExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxPanelExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxPanelExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxPanelExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxPanelExtDoThawFunc a_DoThaw, wxPanelExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxPanelExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxPanelExtEnable__boolFunc a_Enable__bool, wxPanelExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxPanelExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxPanelExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxPanelExtFitFunc a_Fit, wxPanelExtFitInsideFunc a_FitInside, wxPanelExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxPanelExtGetCharHeightFunc a_GetCharHeight, wxPanelExtGetCharWidthFunc a_GetCharWidth, wxPanelExtGetClassInfoFunc a_GetClassInfo, wxPanelExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxPanelExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxPanelExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxPanelExtGetDPIFunc a_GetDPI, wxPanelExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxPanelExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxPanelExtGetDefaultBorderFunc a_GetDefaultBorder, wxPanelExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxPanelExtGetDropTargetFunc a_GetDropTarget, wxPanelExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxPanelExtGetEventHashTableFunc a_GetEventHashTable, wxPanelExtGetEventTableFunc a_GetEventTable, wxPanelExtGetHandleFunc a_GetHandle, wxPanelExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxPanelExtGetLabelFunc a_GetLabel, wxPanelExtGetLayoutDirectionFunc a_GetLayoutDirection, wxPanelExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxPanelExtGetMaxClientSizeFunc a_GetMaxClientSize, wxPanelExtGetMaxSizeFunc a_GetMaxSize, wxPanelExtGetMinClientSizeFunc a_GetMinClientSize, wxPanelExtGetMinSizeFunc a_GetMinSize, wxPanelExtGetNameFunc a_GetName, wxPanelExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxPanelExtGetScrollPos__intFunc a_GetScrollPos__int, wxPanelExtGetScrollRange__intFunc a_GetScrollRange__int, wxPanelExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxPanelExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxPanelExtGetThemeEnabledFunc a_GetThemeEnabled, wxPanelExtGetTransparentFunc a_GetTransparent, wxPanelExtGetValidatorFunc a_GetValidator, wxPanelExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxPanelExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxPanelExtHasCaptureFunc a_HasCapture, wxPanelExtHasFocusFunc a_HasFocus, wxPanelExtHasMultiplePagesFunc a_HasMultiplePages, wxPanelExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxPanelExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxPanelExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxPanelExtInheritAttributesFunc a_InheritAttributes, wxPanelExtInitDialogFunc a_InitDialog, wxPanelExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxPanelExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxPanelExtIsRetainedFunc a_IsRetained, wxPanelExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxPanelExtIsShownFunc a_IsShown, wxPanelExtIsShownOnScreenFunc a_IsShownOnScreen, wxPanelExtIsThisEnabledFunc a_IsThisEnabled, wxPanelExtIsTopLevelFunc a_IsTopLevel, wxPanelExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxPanelExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxPanelExtLayoutFunc a_Layout, wxPanelExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxPanelExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxPanelExtLowerFunc a_Lower, wxPanelExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxPanelExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxPanelExtOnInternalIdleFunc a_OnInternalIdle, wxPanelExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxPanelExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxPanelExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxPanelExtRaiseFunc a_Raise, wxPanelExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxPanelExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxPanelExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxPanelExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxPanelExtScrollLines__intFunc a_ScrollLines__int, wxPanelExtScrollPages__intFunc a_ScrollPages__int, wxPanelExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxPanelExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxPanelExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxPanelExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxPanelExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxPanelExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxPanelExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxPanelExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxPanelExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxPanelExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxPanelExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxPanelExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxPanelExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxPanelExtSetFocusFunc a_SetFocus, wxPanelExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxPanelExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxPanelExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxPanelExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxPanelExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxPanelExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxPanelExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxPanelExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxPanelExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxPanelExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxPanelExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxPanelExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxPanelExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxPanelExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxPanelExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxPanelExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxPanelExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxPanelExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxPanelExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxPanelExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxPanelExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxPanelExtShouldInheritColoursFunc a_ShouldInheritColours, wxPanelExtShow__boolFunc a_Show__bool, wxPanelExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxPanelExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxPanelExtTransferDataToWindowFunc a_TransferDataToWindow, wxPanelExtTriggerScrollEvent__wxEventTypeFunc a_TriggerScrollEvent__wxEventType, wxPanelExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxPanelExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxPanelExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxPanelExtUpdateFunc a_Update, wxPanelExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxPanelExtValidateFunc a_Validate, wxPanelExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxPanelExtWXGetTextEntryFunc a_WXGetTextEntry, wxPanelExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxPanelExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxPanelExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxPanelExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxPanelExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxPanelExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxPanelExtWarpPointer__intintFunc a_WarpPointer__intint, wxPanelExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxPanel() {
    m_wxPanelExtAcceptsFocus = a_AcceptsFocus;
    m_wxPanelExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxPanelExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxPanelExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxPanelExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxPanelExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxPanelExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxPanelExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxPanelExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxPanelExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxPanelExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxPanelExtCanBeFocused = a_CanBeFocused;
    m_wxPanelExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxPanelExtCanScroll__int = a_CanScroll__int;
    m_wxPanelExtCanSetTransparent = a_CanSetTransparent;
    m_wxPanelExtClearBackground = a_ClearBackground;
    m_wxPanelExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxPanelExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxPanelExtCreateRefData = a_CreateRefData;
    m_wxPanelExtDestroy = a_Destroy;
    m_wxPanelExtDissociateHandle = a_DissociateHandle;
    m_wxPanelExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxPanelExtDoCentre__int = a_DoCentre__int;
    m_wxPanelExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxPanelExtDoEnable__bool = a_DoEnable__bool;
    m_wxPanelExtDoFreeze = a_DoFreeze;
    m_wxPanelExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxPanelExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxPanelExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxPanelExtDoGetBestSize = a_DoGetBestSize;
    m_wxPanelExtDoGetClientData = a_DoGetClientData;
    m_wxPanelExtDoGetClientObject = a_DoGetClientObject;
    m_wxPanelExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxPanelExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxPanelExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxPanelExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxPanelExtDoGetSizeFromClientSize__wxSizeCR = a_DoGetSizeFromClientSize__wxSizeCR;
    m_wxPanelExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxPanelExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxPanelExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxPanelExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxPanelExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxPanelExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxPanelExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxPanelExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxPanelExtDoPhase__int = a_DoPhase__int;
    m_wxPanelExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxPanelExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxPanelExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxPanelExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxPanelExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxPanelExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxPanelExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxPanelExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxPanelExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxPanelExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxPanelExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxPanelExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxPanelExtDoThaw = a_DoThaw;
    m_wxPanelExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxPanelExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxPanelExtEnable__bool = a_Enable__bool;
    m_wxPanelExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxPanelExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxPanelExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxPanelExtFit = a_Fit;
    m_wxPanelExtFitInside = a_FitInside;
    m_wxPanelExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxPanelExtGetCharHeight = a_GetCharHeight;
    m_wxPanelExtGetCharWidth = a_GetCharWidth;
    m_wxPanelExtGetClassInfo = a_GetClassInfo;
    m_wxPanelExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxPanelExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
    m_wxPanelExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxPanelExtGetDPI = a_GetDPI;
    m_wxPanelExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxPanelExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxPanelExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxPanelExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxPanelExtGetDropTarget = a_GetDropTarget;
    m_wxPanelExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxPanelExtGetEventHashTable = a_GetEventHashTable;
    m_wxPanelExtGetEventTable = a_GetEventTable;
    m_wxPanelExtGetHandle = a_GetHandle;
    m_wxPanelExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxPanelExtGetLabel = a_GetLabel;
    m_wxPanelExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxPanelExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxPanelExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxPanelExtGetMaxSize = a_GetMaxSize;
    m_wxPanelExtGetMinClientSize = a_GetMinClientSize;
    m_wxPanelExtGetMinSize = a_GetMinSize;
    m_wxPanelExtGetName = a_GetName;
    m_wxPanelExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxPanelExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxPanelExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxPanelExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxPanelExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxPanelExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxPanelExtGetTransparent = a_GetTransparent;
    m_wxPanelExtGetValidator = a_GetValidator;
    m_wxPanelExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxPanelExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxPanelExtHasCapture = a_HasCapture;
    m_wxPanelExtHasFocus = a_HasFocus;
    m_wxPanelExtHasMultiplePages = a_HasMultiplePages;
    m_wxPanelExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxPanelExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxPanelExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxPanelExtInheritAttributes = a_InheritAttributes;
    m_wxPanelExtInitDialog = a_InitDialog;
    m_wxPanelExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxPanelExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxPanelExtIsRetained = a_IsRetained;
    m_wxPanelExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxPanelExtIsShown = a_IsShown;
    m_wxPanelExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxPanelExtIsThisEnabled = a_IsThisEnabled;
    m_wxPanelExtIsTopLevel = a_IsTopLevel;
    m_wxPanelExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxPanelExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxPanelExtLayout = a_Layout;
    m_wxPanelExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxPanelExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxPanelExtLower = a_Lower;
    m_wxPanelExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxPanelExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxPanelExtOnInternalIdle = a_OnInternalIdle;
    m_wxPanelExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxPanelExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxPanelExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxPanelExtRaise = a_Raise;
    m_wxPanelExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxPanelExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxPanelExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxPanelExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxPanelExtScrollLines__int = a_ScrollLines__int;
    m_wxPanelExtScrollPages__int = a_ScrollPages__int;
    m_wxPanelExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxPanelExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxPanelExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxPanelExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxPanelExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxPanelExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxPanelExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxPanelExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxPanelExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxPanelExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxPanelExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxPanelExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxPanelExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxPanelExtSetFocus = a_SetFocus;
    m_wxPanelExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxPanelExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxPanelExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxPanelExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxPanelExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxPanelExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxPanelExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxPanelExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxPanelExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxPanelExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxPanelExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxPanelExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxPanelExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxPanelExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxPanelExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxPanelExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxPanelExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxPanelExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxPanelExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxPanelExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxPanelExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxPanelExtShouldInheritColours = a_ShouldInheritColours;
    m_wxPanelExtShow__bool = a_Show__bool;
    m_wxPanelExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxPanelExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxPanelExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxPanelExtTriggerScrollEvent__wxEventType = a_TriggerScrollEvent__wxEventType;
    m_wxPanelExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxPanelExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxPanelExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxPanelExtUpdate = a_Update;
    m_wxPanelExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxPanelExtValidate = a_Validate;
    m_wxPanelExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxPanelExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxPanelExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxPanelExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxPanelExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxPanelExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxPanelExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxPanelExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxPanelExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxPanelExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
  }
};



#endif
