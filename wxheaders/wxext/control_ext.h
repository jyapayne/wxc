#ifndef _WX_CONTROL_H_EXT_
#define _WX_CONTROL_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxControlBaseExt;
typedef bool (*wxControlBaseExtAcceptsFocusFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtAcceptsFocusFromKeyboardFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtAcceptsFocusRecursivelyFunc)(const wxControlBaseExt* self, bool res);
typedef void (*wxControlBaseExtAddChild__wxWindowBasePFunc)(const wxControlBaseExt* self, wxWindowBase* child);
typedef void (*wxControlBaseExtAddPendingEvent__wxEventCRFunc)(const wxControlBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxControlBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxControlBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxControlBaseExtAdjustForParentClientOrigin__intRintRintFunc)(const wxControlBaseExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxControlBaseExtAlwaysShowScrollbars__boolboolFunc)(const wxControlBaseExt* self, bool horz, bool vert);
typedef void (*wxControlBaseExtAssociateHandle__WXWidgetFunc)(const wxControlBaseExt* self, WXWidget handle);
typedef bool (*wxControlBaseExtBeginRepositioningChildrenFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtCanApplyThemeBorderFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtCanBeFocusedFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtCanBeOutsideClientAreaFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtCanScroll__intFunc)(const wxControlBaseExt* self, int orient, bool res);
typedef bool (*wxControlBaseExtCanSetTransparentFunc)(const wxControlBaseExt* self, bool res);
typedef void (*wxControlBaseExtClearBackgroundFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtClientToWindowSize__wxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxControlBaseExtCloneRefData__wxObjectRefDataCPFunc)(const wxControlBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef void (*wxControlBaseExtCommand__wxCommandEventRFunc)(const wxControlBaseExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxControlBaseExtCreateRefDataFunc)(const wxControlBaseExt* self, wxObjectRefData* res);
typedef bool (*wxControlBaseExtDestroyFunc)(const wxControlBaseExt* self, bool res);
typedef void (*wxControlBaseExtDissociateHandleFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtDoCaptureMouseFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtDoCentre__intFunc)(const wxControlBaseExt* self, int dir);
typedef void (*wxControlBaseExtDoClientToScreen__intPintPFunc)(const wxControlBaseExt* self, int* x, int* y);
typedef void (*wxControlBaseExtDoEnable__boolFunc)(const wxControlBaseExt* self, bool enable);
typedef void (*wxControlBaseExtDoFreezeFunc)(const wxControlBaseExt* self);
typedef int (*wxControlBaseExtDoGetBestClientHeight__intFunc)(const wxControlBaseExt* self, int width, int res);
typedef wxSize (*wxControlBaseExtDoGetBestClientSizeFunc)(const wxControlBaseExt* self, wxSize res);
typedef int (*wxControlBaseExtDoGetBestClientWidth__intFunc)(const wxControlBaseExt* self, int height, int res);
typedef wxSize (*wxControlBaseExtDoGetBestSizeFunc)(const wxControlBaseExt* self, wxSize res);
typedef void* (*wxControlBaseExtDoGetClientDataFunc)(const wxControlBaseExt* self, void* res);
typedef wxClientData* (*wxControlBaseExtDoGetClientObjectFunc)(const wxControlBaseExt* self, wxClientData* res);
typedef void (*wxControlBaseExtDoGetClientSize__intPintPFunc)(const wxControlBaseExt* self, int* width, int* height);
typedef void (*wxControlBaseExtDoGetPosition__intPintPFunc)(const wxControlBaseExt* self, int* x, int* y);
typedef void (*wxControlBaseExtDoGetScreenPosition__intPintPFunc)(const wxControlBaseExt* self, int* x, int* y);
typedef void (*wxControlBaseExtDoGetSize__intPintPFunc)(const wxControlBaseExt* self, int* width, int* height);
typedef wxSize (*wxControlBaseExtDoGetSizeFromClientSize__wxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& size, wxSize res);
typedef wxSize (*wxControlBaseExtDoGetSizeFromTextSize__intintFunc)(const wxControlBaseExt* self, int xlen, int ylen, wxSize res);
typedef void (*wxControlBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxControlBaseExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxControlBaseExtDoGetVirtualSizeFunc)(const wxControlBaseExt* self, wxSize res);
typedef wxHitTest (*wxControlBaseExtDoHitTest__wxCoordwxCoordFunc)(const wxControlBaseExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxControlBaseExtDoIsExposed__intintintintFunc)(const wxControlBaseExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxControlBaseExtDoIsExposed__intintFunc)(const wxControlBaseExt* self, int x, int y, bool res);
typedef void (*wxControlBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxControlBaseExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxControlBaseExtDoMoveWindow__intintintintFunc)(const wxControlBaseExt* self, int x, int y, int width, int height);
typedef bool (*wxControlBaseExtDoNavigateIn__intFunc)(const wxControlBaseExt* self, int flags, bool res);
typedef bool (*wxControlBaseExtDoPhase__intFunc)(const wxControlBaseExt* self, int phase, bool res);
typedef bool (*wxControlBaseExtDoPopupMenu__wxMenuPintintFunc)(const wxControlBaseExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxControlBaseExtDoReleaseMouseFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtDoScreenToClient__intPintPFunc)(const wxControlBaseExt* self, int* x, int* y);
typedef void (*wxControlBaseExtDoSetClientData__voidPFunc)(const wxControlBaseExt* self, void* data);
typedef void (*wxControlBaseExtDoSetClientObject__wxClientDataPFunc)(const wxControlBaseExt* self, wxClientData* data);
typedef void (*wxControlBaseExtDoSetClientSize__intintFunc)(const wxControlBaseExt* self, int width, int height);
typedef bool (*wxControlBaseExtDoSetLabelMarkup__wxStringCRFunc)(const wxControlBaseExt* self, wxString const& markup, bool res);
typedef void (*wxControlBaseExtDoSetSize__intintintintintFunc)(const wxControlBaseExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxControlBaseExtDoSetSizeHints__intintintintintintFunc)(const wxControlBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxControlBaseExtDoSetToolTip__wxToolTipPFunc)(const wxControlBaseExt* self, wxToolTip* tip);
typedef void (*wxControlBaseExtDoSetToolTipText__wxStringCRFunc)(const wxControlBaseExt* self, wxString const& tip);
typedef void (*wxControlBaseExtDoSetVirtualSize__intintFunc)(const wxControlBaseExt* self, int x, int y);
typedef void (*wxControlBaseExtDoSetWindowVariant__wxWindowVariantFunc)(const wxControlBaseExt* self, wxWindowVariant variant);
typedef void (*wxControlBaseExtDoThawFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxControlBaseExt* self, wxUpdateUIEvent& event);
typedef void (*wxControlBaseExtDragAcceptFiles__boolFunc)(const wxControlBaseExt* self, bool accept);
typedef bool (*wxControlBaseExtEnable__boolFunc)(const wxControlBaseExt* self, bool enable, bool res);
typedef bool (*wxControlBaseExtEnableTouchEvents__intFunc)(const wxControlBaseExt* self, int eventsMask, bool res);
typedef void (*wxControlBaseExtEnableVisibleFocus__boolFunc)(const wxControlBaseExt* self, bool enabled);
typedef void (*wxControlBaseExtEndRepositioningChildrenFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtFitFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtFitInsideFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtGetBestVirtualSizeFunc)(const wxControlBaseExt* self, wxSize res);
typedef int (*wxControlBaseExtGetCharHeightFunc)(const wxControlBaseExt* self, int res);
typedef int (*wxControlBaseExtGetCharWidthFunc)(const wxControlBaseExt* self, int res);
typedef wxClassInfo* (*wxControlBaseExtGetClassInfoFunc)(const wxControlBaseExt* self, wxClassInfo* res);
typedef wxPoint (*wxControlBaseExtGetClientAreaOriginFunc)(const wxControlBaseExt* self, wxPoint res);
typedef void (*wxControlBaseExtGetClientSizeConstraint__intPintPFunc)(const wxControlBaseExt* self, int* w, int* h);
typedef double (*wxControlBaseExtGetContentScaleFactorFunc)(const wxControlBaseExt* self, double res);
typedef wxSize (*wxControlBaseExtGetDPIFunc)(const wxControlBaseExt* self, wxSize res);
typedef double (*wxControlBaseExtGetDPIScaleFactorFunc)(const wxControlBaseExt* self, double res);
typedef wxVisualAttributes (*wxControlBaseExtGetDefaultAttributesFunc)(const wxControlBaseExt* self, wxVisualAttributes res);
typedef wxBorder (*wxControlBaseExtGetDefaultBorderFunc)(const wxControlBaseExt* self, wxBorder res);
typedef wxBorder (*wxControlBaseExtGetDefaultBorderForControlFunc)(const wxControlBaseExt* self, wxBorder res);
typedef wxDropTarget* (*wxControlBaseExtGetDropTargetFunc)(const wxControlBaseExt* self, wxDropTarget* res);
typedef wxSize (*wxControlBaseExtGetEffectiveMinSizeFunc)(const wxControlBaseExt* self, wxSize res);
typedef wxEventHashTable& (*wxControlBaseExtGetEventHashTableFunc)(const wxControlBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxControlBaseExtGetEventTableFunc)(const wxControlBaseExt* self, wxEventTable const* res);
typedef WXWidget (*wxControlBaseExtGetHandleFunc)(const wxControlBaseExt* self, WXWidget res);
typedef wxString (*wxControlBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxControlBaseExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxControlBaseExtGetLabelFunc)(const wxControlBaseExt* self, wxString res);
typedef wxString (*wxControlBaseExtGetLabelTextFunc)(const wxControlBaseExt* self, wxString res);
typedef wxLayoutDirection (*wxControlBaseExtGetLayoutDirectionFunc)(const wxControlBaseExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxControlBaseExtGetMainWindowOfCompositeControlFunc)(const wxControlBaseExt* self, wxWindow* res);
typedef wxSize (*wxControlBaseExtGetMaxClientSizeFunc)(const wxControlBaseExt* self, wxSize res);
typedef wxSize (*wxControlBaseExtGetMaxSizeFunc)(const wxControlBaseExt* self, wxSize res);
typedef wxSize (*wxControlBaseExtGetMinClientSizeFunc)(const wxControlBaseExt* self, wxSize res);
typedef wxSize (*wxControlBaseExtGetMinSizeFunc)(const wxControlBaseExt* self, wxSize res);
typedef wxString (*wxControlBaseExtGetNameFunc)(const wxControlBaseExt* self, wxString res);
typedef void (*wxControlBaseExtGetPositionConstraint__intPintPFunc)(const wxControlBaseExt* self, int* x, int* y);
typedef int (*wxControlBaseExtGetScrollPos__intFunc)(const wxControlBaseExt* self, int orient, int res);
typedef int (*wxControlBaseExtGetScrollRange__intFunc)(const wxControlBaseExt* self, int orient, int res);
typedef int (*wxControlBaseExtGetScrollThumb__intFunc)(const wxControlBaseExt* self, int orient, int res);
typedef void (*wxControlBaseExtGetSizeConstraint__intPintPFunc)(const wxControlBaseExt* self, int* w, int* h);
typedef bool (*wxControlBaseExtGetThemeEnabledFunc)(const wxControlBaseExt* self, bool res);
typedef wxByte (*wxControlBaseExtGetTransparentFunc)(const wxControlBaseExt* self, wxByte res);
typedef wxValidator* (*wxControlBaseExtGetValidatorFunc)(const wxControlBaseExt* self, wxValidator* res);
typedef wxSize (*wxControlBaseExtGetWindowBorderSizeFunc)(const wxControlBaseExt* self, wxSize res);
typedef long (*wxControlBaseExtGetWindowStyleFlagFunc)(const wxControlBaseExt* self, long res);
typedef bool (*wxControlBaseExtHasCaptureFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtHasFocusFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtHasMultiplePagesFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtHasTransparentBackgroundFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxControlBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxControlBaseExtInformFirstDirection__intintintFunc)(const wxControlBaseExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxControlBaseExtInheritAttributesFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtInitDialogFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtIsClientAreaChild__wxWindowCPFunc)(const wxControlBaseExt* self, wxWindow const* child, bool res);
typedef bool (*wxControlBaseExtIsDoubleBufferedFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtIsRetainedFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtIsScrollbarAlwaysShown__intFunc)(const wxControlBaseExt* self, int orient, bool res);
typedef bool (*wxControlBaseExtIsShownFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtIsShownOnScreenFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtIsThisEnabledFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtIsTopLevelFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxControlBaseExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxControlBaseExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxControlBaseExt* self, wxString* reason, bool res);
typedef bool (*wxControlBaseExtLayoutFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtLayoutPhase1__intPFunc)(const wxControlBaseExt* self, int* noChanges, bool res);
typedef bool (*wxControlBaseExtLayoutPhase2__intPFunc)(const wxControlBaseExt* self, int* noChanges, bool res);
typedef void (*wxControlBaseExtLowerFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtMoveConstraint__intintFunc)(const wxControlBaseExt* self, int x, int y);
typedef bool (*wxControlBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxControlBaseExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxControlBaseExtOnInternalIdleFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtPrepareDC__wxDCRFunc)(const wxControlBaseExt* self, wxDC& dc);
typedef bool (*wxControlBaseExtProcessEvent__wxEventRFunc)(const wxControlBaseExt* self, wxEvent& event, bool res);
typedef void (*wxControlBaseExtQueueEvent__wxEventPFunc)(const wxControlBaseExt* self, wxEvent* event);
typedef void (*wxControlBaseExtRaiseFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtRefresh__boolwxRectCPFunc)(const wxControlBaseExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxControlBaseExtRegisterHotKey__intintintFunc)(const wxControlBaseExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxControlBaseExtRemoveChild__wxWindowBasePFunc)(const wxControlBaseExt* self, wxWindowBase* child);
typedef bool (*wxControlBaseExtReparent__wxWindowBasePFunc)(const wxControlBaseExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxControlBaseExtScrollLines__intFunc)(const wxControlBaseExt* self, int lines, bool res);
typedef bool (*wxControlBaseExtScrollPages__intFunc)(const wxControlBaseExt* self, int pages, bool res);
typedef void (*wxControlBaseExtScrollWindow__intintwxRectCPFunc)(const wxControlBaseExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxControlBaseExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxControlBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxControlBaseExtSendIdleEvents__wxIdleEventRFunc)(const wxControlBaseExt* self, wxIdleEvent& event, bool res);
typedef void (*wxControlBaseExtSendSizeEvent__intFunc)(const wxControlBaseExt* self, int flags);
typedef void (*wxControlBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxControlBaseExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxControlBaseExtSetBackgroundColour__wxColourCRFunc)(const wxControlBaseExt* self, wxColour const& colour, bool res);
typedef bool (*wxControlBaseExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxControlBaseExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxControlBaseExtSetCanFocus__boolFunc)(const wxControlBaseExt* self, bool canFocus);
typedef void (*wxControlBaseExtSetConstraintSizes__boolFunc)(const wxControlBaseExt* self, bool recurse);
typedef bool (*wxControlBaseExtSetCursor__wxCursorCRFunc)(const wxControlBaseExt* self, wxCursor const& cursor, bool res);
typedef void (*wxControlBaseExtSetDoubleBuffered__boolFunc)(const wxControlBaseExt* self, bool on);
typedef void (*wxControlBaseExtSetDropTarget__wxDropTargetPFunc)(const wxControlBaseExt* self, wxDropTarget* dropTarget);
typedef void (*wxControlBaseExtSetExtraStyle__longFunc)(const wxControlBaseExt* self, long exStyle);
typedef void (*wxControlBaseExtSetFocusFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtSetFocusFromKbdFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtSetFont__wxFontCRFunc)(const wxControlBaseExt* self, wxFont const& font, bool res);
typedef bool (*wxControlBaseExtSetForegroundColour__wxColourCRFunc)(const wxControlBaseExt* self, wxColour const& colour, bool res);
typedef void (*wxControlBaseExtSetId__wxWindowIDFunc)(const wxControlBaseExt* self, wxWindowID winid);
typedef void (*wxControlBaseExtSetLabel__wxStringCRFunc)(const wxControlBaseExt* self, wxString const& label);
typedef void (*wxControlBaseExtSetLabelText__wxStringCRFunc)(const wxControlBaseExt* self, wxString const& text);
typedef void (*wxControlBaseExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxControlBaseExt* self, wxLayoutDirection dir);
typedef void (*wxControlBaseExtSetMaxClientSize__wxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& size);
typedef void (*wxControlBaseExtSetMaxSize__wxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& maxSize);
typedef void (*wxControlBaseExtSetMinClientSize__wxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& size);
typedef void (*wxControlBaseExtSetMinSize__wxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& minSize);
typedef void (*wxControlBaseExtSetName__wxStringCRFunc)(const wxControlBaseExt* self, wxString const& name);
typedef void (*wxControlBaseExtSetNextHandler__wxEvtHandlerPFunc)(const wxControlBaseExt* self, wxEvtHandler* handler);
typedef void (*wxControlBaseExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxControlBaseExt* self, wxEvtHandler* handler);
typedef void (*wxControlBaseExtSetScrollPos__intintboolFunc)(const wxControlBaseExt* self, int orient, int pos, bool refresh);
typedef void (*wxControlBaseExtSetScrollbar__intintintintboolFunc)(const wxControlBaseExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxControlBaseExtSetSizeConstraint__intintintintFunc)(const wxControlBaseExt* self, int x, int y, int w, int h);
typedef void (*wxControlBaseExtSetSizeHints__intintintintintintFunc)(const wxControlBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxControlBaseExtSetThemeEnabled__boolFunc)(const wxControlBaseExt* self, bool enableTheme);
typedef bool (*wxControlBaseExtSetTransparent__wxByteFunc)(const wxControlBaseExt* self, wxByte alpha, bool res);
typedef void (*wxControlBaseExtSetValidator__wxValidatorCRFunc)(const wxControlBaseExt* self, wxValidator const& validator);
typedef void (*wxControlBaseExtSetWindowStyleFlag__longFunc)(const wxControlBaseExt* self, long style);
typedef bool (*wxControlBaseExtShouldInheritColoursFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtShow__boolFunc)(const wxControlBaseExt* self, bool show, bool res);
typedef bool (*wxControlBaseExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxControlBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxControlBaseExtTransferDataFromWindowFunc)(const wxControlBaseExt* self, bool res);
typedef bool (*wxControlBaseExtTransferDataToWindowFunc)(const wxControlBaseExt* self, bool res);
typedef void (*wxControlBaseExtTriggerScrollEvent__wxEventTypeFunc)(const wxControlBaseExt* self, wxEventType scrollEvent);
typedef bool (*wxControlBaseExtTryAfter__wxEventRFunc)(const wxControlBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxControlBaseExtTryBefore__wxEventRFunc)(const wxControlBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxControlBaseExtUnregisterHotKey__intFunc)(const wxControlBaseExt* self, int hotkeyId, bool res);
typedef void (*wxControlBaseExtUpdateFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtUpdateWindowUI__longFunc)(const wxControlBaseExt* self, long flags);
typedef bool (*wxControlBaseExtValidateFunc)(const wxControlBaseExt* self, bool res);
typedef void (*wxControlBaseExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxControlBaseExt* self, wxFont& font);
typedef wxTextEntry const* (*wxControlBaseExtWXGetTextEntryFunc)(const wxControlBaseExt* self, wxTextEntry const* res);
typedef void* (*wxControlBaseExtWXReservedEvtHandler1__voidPFunc)(const wxControlBaseExt* self, void* param0, void* res);
typedef void* (*wxControlBaseExtWXReservedEvtHandler2__voidPFunc)(const wxControlBaseExt* self, void* param0, void* res);
typedef void* (*wxControlBaseExtWXReservedWindow1__voidPFunc)(const wxControlBaseExt* self, void* param0, void* res);
typedef void* (*wxControlBaseExtWXReservedWindow2__voidPFunc)(const wxControlBaseExt* self, void* param0, void* res);
typedef void* (*wxControlBaseExtWXReservedWindow3__voidPFunc)(const wxControlBaseExt* self, void* param0, void* res);
typedef void (*wxControlBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxControlBaseExt* self, int flags, wxSizer* sizer);
typedef void (*wxControlBaseExtWarpPointer__intintFunc)(const wxControlBaseExt* self, int x, int y);
typedef wxSize (*wxControlBaseExtWindowToClientSize__wxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& size, wxSize res);
class wxControlExt;
typedef bool (*wxControlExtAcceptsFocusFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtAcceptsFocusFromKeyboardFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtAcceptsFocusRecursivelyFunc)(const wxControlExt* self, bool res);
typedef void (*wxControlExtAddChild__wxWindowBasePFunc)(const wxControlExt* self, wxWindowBase* child);
typedef void (*wxControlExtAddPendingEvent__wxEventCRFunc)(const wxControlExt* self, wxEvent const& event);
typedef wxCoord (*wxControlExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxControlExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxControlExtAdjustForParentClientOrigin__intRintRintFunc)(const wxControlExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxControlExtAlwaysShowScrollbars__boolboolFunc)(const wxControlExt* self, bool horz, bool vert);
typedef void (*wxControlExtAssociateHandle__WXWidgetFunc)(const wxControlExt* self, WXWidget handle);
typedef bool (*wxControlExtBeginRepositioningChildrenFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtCanApplyThemeBorderFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtCanBeFocusedFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtCanBeOutsideClientAreaFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtCanScroll__intFunc)(const wxControlExt* self, int orient, bool res);
typedef bool (*wxControlExtCanSetTransparentFunc)(const wxControlExt* self, bool res);
typedef void (*wxControlExtClearBackgroundFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtClientToWindowSize__wxSizeCRFunc)(const wxControlExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxControlExtCloneRefData__wxObjectRefDataCPFunc)(const wxControlExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef void (*wxControlExtCommand__wxCommandEventRFunc)(const wxControlExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxControlExtCreateRefDataFunc)(const wxControlExt* self, wxObjectRefData* res);
typedef bool (*wxControlExtDestroyFunc)(const wxControlExt* self, bool res);
typedef void (*wxControlExtDissociateHandleFunc)(const wxControlExt* self);
typedef void (*wxControlExtDoCaptureMouseFunc)(const wxControlExt* self);
typedef void (*wxControlExtDoCentre__intFunc)(const wxControlExt* self, int dir);
typedef void (*wxControlExtDoClientToScreen__intPintPFunc)(const wxControlExt* self, int* x, int* y);
typedef void (*wxControlExtDoEnable__boolFunc)(const wxControlExt* self, bool enable);
typedef void (*wxControlExtDoFreezeFunc)(const wxControlExt* self);
typedef int (*wxControlExtDoGetBestClientHeight__intFunc)(const wxControlExt* self, int width, int res);
typedef wxSize (*wxControlExtDoGetBestClientSizeFunc)(const wxControlExt* self, wxSize res);
typedef int (*wxControlExtDoGetBestClientWidth__intFunc)(const wxControlExt* self, int height, int res);
typedef wxSize (*wxControlExtDoGetBestSizeFunc)(const wxControlExt* self, wxSize res);
typedef void* (*wxControlExtDoGetClientDataFunc)(const wxControlExt* self, void* res);
typedef wxClientData* (*wxControlExtDoGetClientObjectFunc)(const wxControlExt* self, wxClientData* res);
typedef void (*wxControlExtDoGetClientSize__intPintPFunc)(const wxControlExt* self, int* width, int* height);
typedef void (*wxControlExtDoGetPosition__intPintPFunc)(const wxControlExt* self, int* x, int* y);
typedef void (*wxControlExtDoGetScreenPosition__intPintPFunc)(const wxControlExt* self, int* x, int* y);
typedef void (*wxControlExtDoGetSize__intPintPFunc)(const wxControlExt* self, int* width, int* height);
typedef wxSize (*wxControlExtDoGetSizeFromClientSize__wxSizeCRFunc)(const wxControlExt* self, wxSize const& size, wxSize res);
typedef wxSize (*wxControlExtDoGetSizeFromTextSize__intintFunc)(const wxControlExt* self, int xlen, int ylen, wxSize res);
typedef void (*wxControlExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxControlExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxControlExtDoGetVirtualSizeFunc)(const wxControlExt* self, wxSize res);
typedef wxHitTest (*wxControlExtDoHitTest__wxCoordwxCoordFunc)(const wxControlExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxControlExtDoIsExposed__intintintintFunc)(const wxControlExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxControlExtDoIsExposed__intintFunc)(const wxControlExt* self, int x, int y, bool res);
typedef void (*wxControlExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxControlExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxControlExtDoMoveWindow__intintintintFunc)(const wxControlExt* self, int x, int y, int width, int height);
typedef bool (*wxControlExtDoNavigateIn__intFunc)(const wxControlExt* self, int flags, bool res);
typedef bool (*wxControlExtDoPhase__intFunc)(const wxControlExt* self, int phase, bool res);
typedef bool (*wxControlExtDoPopupMenu__wxMenuPintintFunc)(const wxControlExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxControlExtDoReleaseMouseFunc)(const wxControlExt* self);
typedef void (*wxControlExtDoScreenToClient__intPintPFunc)(const wxControlExt* self, int* x, int* y);
typedef void (*wxControlExtDoSetClientData__voidPFunc)(const wxControlExt* self, void* data);
typedef void (*wxControlExtDoSetClientObject__wxClientDataPFunc)(const wxControlExt* self, wxClientData* data);
typedef void (*wxControlExtDoSetClientSize__intintFunc)(const wxControlExt* self, int width, int height);
typedef bool (*wxControlExtDoSetLabelMarkup__wxStringCRFunc)(const wxControlExt* self, wxString const& markup, bool res);
typedef void (*wxControlExtDoSetSize__intintintintintFunc)(const wxControlExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxControlExtDoSetSizeHints__intintintintintintFunc)(const wxControlExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxControlExtDoSetToolTip__wxToolTipPFunc)(const wxControlExt* self, wxToolTip* tip);
typedef void (*wxControlExtDoSetToolTipText__wxStringCRFunc)(const wxControlExt* self, wxString const& tip);
typedef void (*wxControlExtDoSetVirtualSize__intintFunc)(const wxControlExt* self, int x, int y);
typedef void (*wxControlExtDoSetWindowVariant__wxWindowVariantFunc)(const wxControlExt* self, wxWindowVariant variant);
typedef void (*wxControlExtDoThawFunc)(const wxControlExt* self);
typedef void (*wxControlExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxControlExt* self, wxUpdateUIEvent& event);
typedef void (*wxControlExtDragAcceptFiles__boolFunc)(const wxControlExt* self, bool accept);
typedef bool (*wxControlExtEnable__boolFunc)(const wxControlExt* self, bool enable, bool res);
typedef bool (*wxControlExtEnableTouchEvents__intFunc)(const wxControlExt* self, int eventsMask, bool res);
typedef void (*wxControlExtEnableVisibleFocus__boolFunc)(const wxControlExt* self, bool enabled);
typedef void (*wxControlExtEndRepositioningChildrenFunc)(const wxControlExt* self);
typedef void (*wxControlExtFitFunc)(const wxControlExt* self);
typedef void (*wxControlExtFitInsideFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtGetBestVirtualSizeFunc)(const wxControlExt* self, wxSize res);
typedef int (*wxControlExtGetCharHeightFunc)(const wxControlExt* self, int res);
typedef int (*wxControlExtGetCharWidthFunc)(const wxControlExt* self, int res);
typedef wxClassInfo* (*wxControlExtGetClassInfoFunc)(const wxControlExt* self, wxClassInfo* res);
typedef wxPoint (*wxControlExtGetClientAreaOriginFunc)(const wxControlExt* self, wxPoint res);
typedef void (*wxControlExtGetClientSizeConstraint__intPintPFunc)(const wxControlExt* self, int* w, int* h);
typedef double (*wxControlExtGetContentScaleFactorFunc)(const wxControlExt* self, double res);
typedef wxSize (*wxControlExtGetDPIFunc)(const wxControlExt* self, wxSize res);
typedef double (*wxControlExtGetDPIScaleFactorFunc)(const wxControlExt* self, double res);
typedef wxVisualAttributes (*wxControlExtGetDefaultAttributesFunc)(const wxControlExt* self, wxVisualAttributes res);
typedef wxBorder (*wxControlExtGetDefaultBorderFunc)(const wxControlExt* self, wxBorder res);
typedef wxBorder (*wxControlExtGetDefaultBorderForControlFunc)(const wxControlExt* self, wxBorder res);
typedef wxDropTarget* (*wxControlExtGetDropTargetFunc)(const wxControlExt* self, wxDropTarget* res);
typedef wxSize (*wxControlExtGetEffectiveMinSizeFunc)(const wxControlExt* self, wxSize res);
typedef wxEventHashTable& (*wxControlExtGetEventHashTableFunc)(const wxControlExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxControlExtGetEventTableFunc)(const wxControlExt* self, wxEventTable const* res);
typedef WXWidget (*wxControlExtGetHandleFunc)(const wxControlExt* self, WXWidget res);
typedef wxString (*wxControlExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxControlExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxControlExtGetLabelFunc)(const wxControlExt* self, wxString res);
typedef wxString (*wxControlExtGetLabelTextFunc)(const wxControlExt* self, wxString res);
typedef wxLayoutDirection (*wxControlExtGetLayoutDirectionFunc)(const wxControlExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxControlExtGetMainWindowOfCompositeControlFunc)(const wxControlExt* self, wxWindow* res);
typedef wxSize (*wxControlExtGetMaxClientSizeFunc)(const wxControlExt* self, wxSize res);
typedef wxSize (*wxControlExtGetMaxSizeFunc)(const wxControlExt* self, wxSize res);
typedef wxSize (*wxControlExtGetMinClientSizeFunc)(const wxControlExt* self, wxSize res);
typedef wxSize (*wxControlExtGetMinSizeFunc)(const wxControlExt* self, wxSize res);
typedef wxString (*wxControlExtGetNameFunc)(const wxControlExt* self, wxString res);
typedef void (*wxControlExtGetPositionConstraint__intPintPFunc)(const wxControlExt* self, int* x, int* y);
typedef int (*wxControlExtGetScrollPos__intFunc)(const wxControlExt* self, int orient, int res);
typedef int (*wxControlExtGetScrollRange__intFunc)(const wxControlExt* self, int orient, int res);
typedef int (*wxControlExtGetScrollThumb__intFunc)(const wxControlExt* self, int orient, int res);
typedef void (*wxControlExtGetSizeConstraint__intPintPFunc)(const wxControlExt* self, int* w, int* h);
typedef bool (*wxControlExtGetThemeEnabledFunc)(const wxControlExt* self, bool res);
typedef wxByte (*wxControlExtGetTransparentFunc)(const wxControlExt* self, wxByte res);
typedef wxValidator* (*wxControlExtGetValidatorFunc)(const wxControlExt* self, wxValidator* res);
typedef wxSize (*wxControlExtGetWindowBorderSizeFunc)(const wxControlExt* self, wxSize res);
typedef long (*wxControlExtGetWindowStyleFlagFunc)(const wxControlExt* self, long res);
typedef bool (*wxControlExtHasCaptureFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtHasFocusFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtHasMultiplePagesFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtHasTransparentBackgroundFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxControlExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxControlExtInformFirstDirection__intintintFunc)(const wxControlExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxControlExtInheritAttributesFunc)(const wxControlExt* self);
typedef void (*wxControlExtInitDialogFunc)(const wxControlExt* self);
typedef bool (*wxControlExtIsClientAreaChild__wxWindowCPFunc)(const wxControlExt* self, wxWindow const* child, bool res);
typedef bool (*wxControlExtIsDoubleBufferedFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtIsRetainedFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtIsScrollbarAlwaysShown__intFunc)(const wxControlExt* self, int orient, bool res);
typedef bool (*wxControlExtIsShownFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtIsShownOnScreenFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtIsThisEnabledFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtIsTopLevelFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxControlExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxControlExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxControlExt* self, wxString* reason, bool res);
typedef bool (*wxControlExtLayoutFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtLayoutPhase1__intPFunc)(const wxControlExt* self, int* noChanges, bool res);
typedef bool (*wxControlExtLayoutPhase2__intPFunc)(const wxControlExt* self, int* noChanges, bool res);
typedef void (*wxControlExtLowerFunc)(const wxControlExt* self);
typedef void (*wxControlExtMoveConstraint__intintFunc)(const wxControlExt* self, int x, int y);
typedef bool (*wxControlExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxControlExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxControlExtOnInternalIdleFunc)(const wxControlExt* self);
typedef void (*wxControlExtPrepareDC__wxDCRFunc)(const wxControlExt* self, wxDC& dc);
typedef bool (*wxControlExtProcessEvent__wxEventRFunc)(const wxControlExt* self, wxEvent& event, bool res);
typedef void (*wxControlExtQueueEvent__wxEventPFunc)(const wxControlExt* self, wxEvent* event);
typedef void (*wxControlExtRaiseFunc)(const wxControlExt* self);
typedef void (*wxControlExtRefresh__boolwxRectCPFunc)(const wxControlExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxControlExtRegisterHotKey__intintintFunc)(const wxControlExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxControlExtRemoveChild__wxWindowBasePFunc)(const wxControlExt* self, wxWindowBase* child);
typedef bool (*wxControlExtReparent__wxWindowBasePFunc)(const wxControlExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxControlExtScrollLines__intFunc)(const wxControlExt* self, int lines, bool res);
typedef bool (*wxControlExtScrollPages__intFunc)(const wxControlExt* self, int pages, bool res);
typedef void (*wxControlExtScrollWindow__intintwxRectCPFunc)(const wxControlExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxControlExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxControlExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxControlExtSendIdleEvents__wxIdleEventRFunc)(const wxControlExt* self, wxIdleEvent& event, bool res);
typedef void (*wxControlExtSendSizeEvent__intFunc)(const wxControlExt* self, int flags);
typedef void (*wxControlExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxControlExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxControlExtSetBackgroundColour__wxColourCRFunc)(const wxControlExt* self, wxColour const& colour, bool res);
typedef bool (*wxControlExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxControlExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxControlExtSetCanFocus__boolFunc)(const wxControlExt* self, bool canFocus);
typedef void (*wxControlExtSetConstraintSizes__boolFunc)(const wxControlExt* self, bool recurse);
typedef bool (*wxControlExtSetCursor__wxCursorCRFunc)(const wxControlExt* self, wxCursor const& cursor, bool res);
typedef void (*wxControlExtSetDoubleBuffered__boolFunc)(const wxControlExt* self, bool on);
typedef void (*wxControlExtSetDropTarget__wxDropTargetPFunc)(const wxControlExt* self, wxDropTarget* dropTarget);
typedef void (*wxControlExtSetExtraStyle__longFunc)(const wxControlExt* self, long exStyle);
typedef void (*wxControlExtSetFocusFunc)(const wxControlExt* self);
typedef void (*wxControlExtSetFocusFromKbdFunc)(const wxControlExt* self);
typedef bool (*wxControlExtSetFont__wxFontCRFunc)(const wxControlExt* self, wxFont const& font, bool res);
typedef bool (*wxControlExtSetForegroundColour__wxColourCRFunc)(const wxControlExt* self, wxColour const& colour, bool res);
typedef void (*wxControlExtSetId__wxWindowIDFunc)(const wxControlExt* self, wxWindowID winid);
typedef void (*wxControlExtSetLabel__wxStringCRFunc)(const wxControlExt* self, wxString const& label);
typedef void (*wxControlExtSetLabelText__wxStringCRFunc)(const wxControlExt* self, wxString const& text);
typedef void (*wxControlExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxControlExt* self, wxLayoutDirection dir);
typedef void (*wxControlExtSetMaxClientSize__wxSizeCRFunc)(const wxControlExt* self, wxSize const& size);
typedef void (*wxControlExtSetMaxSize__wxSizeCRFunc)(const wxControlExt* self, wxSize const& maxSize);
typedef void (*wxControlExtSetMinClientSize__wxSizeCRFunc)(const wxControlExt* self, wxSize const& size);
typedef void (*wxControlExtSetMinSize__wxSizeCRFunc)(const wxControlExt* self, wxSize const& minSize);
typedef void (*wxControlExtSetName__wxStringCRFunc)(const wxControlExt* self, wxString const& name);
typedef void (*wxControlExtSetNextHandler__wxEvtHandlerPFunc)(const wxControlExt* self, wxEvtHandler* handler);
typedef void (*wxControlExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxControlExt* self, wxEvtHandler* handler);
typedef void (*wxControlExtSetScrollPos__intintboolFunc)(const wxControlExt* self, int orient, int pos, bool refresh);
typedef void (*wxControlExtSetScrollbar__intintintintboolFunc)(const wxControlExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxControlExtSetSizeConstraint__intintintintFunc)(const wxControlExt* self, int x, int y, int w, int h);
typedef void (*wxControlExtSetSizeHints__intintintintintintFunc)(const wxControlExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxControlExtSetThemeEnabled__boolFunc)(const wxControlExt* self, bool enableTheme);
typedef bool (*wxControlExtSetTransparent__wxByteFunc)(const wxControlExt* self, wxByte alpha, bool res);
typedef void (*wxControlExtSetValidator__wxValidatorCRFunc)(const wxControlExt* self, wxValidator const& validator);
typedef void (*wxControlExtSetWindowStyleFlag__longFunc)(const wxControlExt* self, long style);
typedef bool (*wxControlExtShouldInheritColoursFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtShow__boolFunc)(const wxControlExt* self, bool show, bool res);
typedef bool (*wxControlExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxControlExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxControlExtTransferDataFromWindowFunc)(const wxControlExt* self, bool res);
typedef bool (*wxControlExtTransferDataToWindowFunc)(const wxControlExt* self, bool res);
typedef void (*wxControlExtTriggerScrollEvent__wxEventTypeFunc)(const wxControlExt* self, wxEventType scrollEvent);
typedef bool (*wxControlExtTryAfter__wxEventRFunc)(const wxControlExt* self, wxEvent& event, bool res);
typedef bool (*wxControlExtTryBefore__wxEventRFunc)(const wxControlExt* self, wxEvent& event, bool res);
typedef bool (*wxControlExtUnregisterHotKey__intFunc)(const wxControlExt* self, int hotkeyId, bool res);
typedef void (*wxControlExtUpdateFunc)(const wxControlExt* self);
typedef void (*wxControlExtUpdateWindowUI__longFunc)(const wxControlExt* self, long flags);
typedef bool (*wxControlExtValidateFunc)(const wxControlExt* self, bool res);
typedef void (*wxControlExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxControlExt* self, wxFont& font);
typedef wxTextEntry const* (*wxControlExtWXGetTextEntryFunc)(const wxControlExt* self, wxTextEntry const* res);
typedef void* (*wxControlExtWXReservedEvtHandler1__voidPFunc)(const wxControlExt* self, void* param0, void* res);
typedef void* (*wxControlExtWXReservedEvtHandler2__voidPFunc)(const wxControlExt* self, void* param0, void* res);
typedef void* (*wxControlExtWXReservedWindow1__voidPFunc)(const wxControlExt* self, void* param0, void* res);
typedef void* (*wxControlExtWXReservedWindow2__voidPFunc)(const wxControlExt* self, void* param0, void* res);
typedef void* (*wxControlExtWXReservedWindow3__voidPFunc)(const wxControlExt* self, void* param0, void* res);
typedef void (*wxControlExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxControlExt* self, int flags, wxSizer* sizer);
typedef void (*wxControlExtWarpPointer__intintFunc)(const wxControlExt* self, int x, int y);
typedef wxSize (*wxControlExtWindowToClientSize__wxSizeCRFunc)(const wxControlExt* self, wxSize const& size, wxSize res);

class wxControlBaseExt: public wxControlBase
{
public:
  wxControlBaseExt(): wxControlBase()  {  }
  virtual ~wxControlBaseExt() override  {  }
  wxControlBaseExtAcceptsFocusFunc m_wxControlBaseExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxControlBase::AcceptsFocus();
    if (*m_wxControlBaseExtAcceptsFocus != NULL){
      return m_wxControlBaseExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtAcceptsFocusFromKeyboardFunc m_wxControlBaseExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxControlBase::AcceptsFocusFromKeyboard();
    if (*m_wxControlBaseExtAcceptsFocusFromKeyboard != NULL){
      return m_wxControlBaseExtAcceptsFocusFromKeyboard(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtAcceptsFocusRecursivelyFunc m_wxControlBaseExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxControlBase::AcceptsFocusRecursively();
    if (*m_wxControlBaseExtAcceptsFocusRecursively != NULL){
      return m_wxControlBaseExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtAddChild__wxWindowBasePFunc m_wxControlBaseExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxControlBase::AddChild(child);
    if (*m_wxControlBaseExtAddChild__wxWindowBaseP != NULL){
      return m_wxControlBaseExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxControlBaseExtAddPendingEvent__wxEventCRFunc m_wxControlBaseExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxControlBase::AddPendingEvent(event);
    if (*m_wxControlBaseExtAddPendingEvent__wxEventCR != NULL){
      return m_wxControlBaseExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxControlBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxControlBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxControlBase::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxControlBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxControlBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtAdjustForParentClientOrigin__intRintRintFunc m_wxControlBaseExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxControlBase::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxControlBaseExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxControlBaseExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxControlBaseExtAlwaysShowScrollbars__boolboolFunc m_wxControlBaseExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxControlBase::AlwaysShowScrollbars(horz, vert);
    if (*m_wxControlBaseExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxControlBaseExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxControlBaseExtAssociateHandle__WXWidgetFunc m_wxControlBaseExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxControlBase::AssociateHandle(handle);
    if (*m_wxControlBaseExtAssociateHandle__WXWidget != NULL){
      return m_wxControlBaseExtAssociateHandle__WXWidget(this, handle);
    }
  }
  wxControlBaseExtBeginRepositioningChildrenFunc m_wxControlBaseExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxControlBase::BeginRepositioningChildren();
    if (*m_wxControlBaseExtBeginRepositioningChildren != NULL){
      return m_wxControlBaseExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtCanApplyThemeBorderFunc m_wxControlBaseExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxControlBase::CanApplyThemeBorder();
    if (*m_wxControlBaseExtCanApplyThemeBorder != NULL){
      return m_wxControlBaseExtCanApplyThemeBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtCanBeFocusedFunc m_wxControlBaseExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxControlBase::CanBeFocused();
    if (*m_wxControlBaseExtCanBeFocused != NULL){
      return m_wxControlBaseExtCanBeFocused(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtCanBeOutsideClientAreaFunc m_wxControlBaseExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxControlBase::CanBeOutsideClientArea();
    if (*m_wxControlBaseExtCanBeOutsideClientArea != NULL){
      return m_wxControlBaseExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtCanScroll__intFunc m_wxControlBaseExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxControlBase::CanScroll(orient);
    if (*m_wxControlBaseExtCanScroll__int != NULL){
      return m_wxControlBaseExtCanScroll__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtCanSetTransparentFunc m_wxControlBaseExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxControlBase::CanSetTransparent();
    if (*m_wxControlBaseExtCanSetTransparent != NULL){
      return m_wxControlBaseExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtClearBackgroundFunc m_wxControlBaseExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxControlBase::ClearBackground();
    if (*m_wxControlBaseExtClearBackground != NULL){
      return m_wxControlBaseExtClearBackground(this);
    }
  }
  wxControlBaseExtClientToWindowSize__wxSizeCRFunc m_wxControlBaseExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxControlBase::ClientToWindowSize(size);
    if (*m_wxControlBaseExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxControlBaseExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtCloneRefData__wxObjectRefDataCPFunc m_wxControlBaseExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxControlBase::CloneRefData(data);
    if (*m_wxControlBaseExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxControlBaseExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtCommand__wxCommandEventRFunc m_wxControlBaseExtCommand__wxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxControlBase::Command(event);
    if (*m_wxControlBaseExtCommand__wxCommandEventR != NULL){
      return m_wxControlBaseExtCommand__wxCommandEventR(this, event);
    }
  }
  wxControlBaseExtCreateRefDataFunc m_wxControlBaseExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxControlBase::CreateRefData();
    if (*m_wxControlBaseExtCreateRefData != NULL){
      return m_wxControlBaseExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDestroyFunc m_wxControlBaseExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxControlBase::Destroy();
    if (*m_wxControlBaseExtDestroy != NULL){
      return m_wxControlBaseExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDissociateHandleFunc m_wxControlBaseExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxControlBase::DissociateHandle();
    if (*m_wxControlBaseExtDissociateHandle != NULL){
      return m_wxControlBaseExtDissociateHandle(this);
    }
  }
  wxControlBaseExtDoCaptureMouseFunc m_wxControlBaseExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxControlBase::DoCaptureMouse();
    if (*m_wxControlBaseExtDoCaptureMouse != NULL){
      return m_wxControlBaseExtDoCaptureMouse(this);
    }
  }
  wxControlBaseExtDoCentre__intFunc m_wxControlBaseExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxControlBase::DoCentre(dir);
    if (*m_wxControlBaseExtDoCentre__int != NULL){
      return m_wxControlBaseExtDoCentre__int(this, dir);
    }
  }
  wxControlBaseExtDoClientToScreen__intPintPFunc m_wxControlBaseExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxControlBase::DoClientToScreen(x, y);
    if (*m_wxControlBaseExtDoClientToScreen__intPintP != NULL){
      return m_wxControlBaseExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxControlBaseExtDoEnable__boolFunc m_wxControlBaseExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxControlBase::DoEnable(enable);
    if (*m_wxControlBaseExtDoEnable__bool != NULL){
      return m_wxControlBaseExtDoEnable__bool(this, enable);
    }
  }
  wxControlBaseExtDoFreezeFunc m_wxControlBaseExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxControlBase::DoFreeze();
    if (*m_wxControlBaseExtDoFreeze != NULL){
      return m_wxControlBaseExtDoFreeze(this);
    }
  }
  wxControlBaseExtDoGetBestClientHeight__intFunc m_wxControlBaseExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxControlBase::DoGetBestClientHeight(width);
    if (*m_wxControlBaseExtDoGetBestClientHeight__int != NULL){
      return m_wxControlBaseExtDoGetBestClientHeight__int(this, width, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetBestClientSizeFunc m_wxControlBaseExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxControlBase::DoGetBestClientSize();
    if (*m_wxControlBaseExtDoGetBestClientSize != NULL){
      return m_wxControlBaseExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetBestClientWidth__intFunc m_wxControlBaseExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxControlBase::DoGetBestClientWidth(height);
    if (*m_wxControlBaseExtDoGetBestClientWidth__int != NULL){
      return m_wxControlBaseExtDoGetBestClientWidth__int(this, height, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetBestSizeFunc m_wxControlBaseExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxControlBase::DoGetBestSize();
    if (*m_wxControlBaseExtDoGetBestSize != NULL){
      return m_wxControlBaseExtDoGetBestSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetClientDataFunc m_wxControlBaseExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxControlBase::DoGetClientData();
    if (*m_wxControlBaseExtDoGetClientData != NULL){
      return m_wxControlBaseExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetClientObjectFunc m_wxControlBaseExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxControlBase::DoGetClientObject();
    if (*m_wxControlBaseExtDoGetClientObject != NULL){
      return m_wxControlBaseExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetClientSize__intPintPFunc m_wxControlBaseExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxControlBase::DoGetClientSize(width, height);
    if (*m_wxControlBaseExtDoGetClientSize__intPintP != NULL){
      return m_wxControlBaseExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxControlBaseExtDoGetPosition__intPintPFunc m_wxControlBaseExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxControlBase::DoGetPosition(x, y);
    if (*m_wxControlBaseExtDoGetPosition__intPintP != NULL){
      return m_wxControlBaseExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxControlBaseExtDoGetScreenPosition__intPintPFunc m_wxControlBaseExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxControlBase::DoGetScreenPosition(x, y);
    if (*m_wxControlBaseExtDoGetScreenPosition__intPintP != NULL){
      return m_wxControlBaseExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxControlBaseExtDoGetSize__intPintPFunc m_wxControlBaseExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxControlBase::DoGetSize(width, height);
    if (*m_wxControlBaseExtDoGetSize__intPintP != NULL){
      return m_wxControlBaseExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxControlBaseExtDoGetSizeFromClientSize__wxSizeCRFunc m_wxControlBaseExtDoGetSizeFromClientSize__wxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxControlBase::DoGetSizeFromClientSize(size);
    if (*m_wxControlBaseExtDoGetSizeFromClientSize__wxSizeCR != NULL){
      return m_wxControlBaseExtDoGetSizeFromClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetSizeFromTextSize__intintFunc m_wxControlBaseExtDoGetSizeFromTextSize__intint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxControlBase::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxControlBaseExtDoGetSizeFromTextSize__intint != NULL){
      return m_wxControlBaseExtDoGetSizeFromTextSize__intint(this, xlen, ylen, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxControlBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxControlBase::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxControlBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxControlBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxControlBaseExtDoGetVirtualSizeFunc m_wxControlBaseExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxControlBase::DoGetVirtualSize();
    if (*m_wxControlBaseExtDoGetVirtualSize != NULL){
      return m_wxControlBaseExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoHitTest__wxCoordwxCoordFunc m_wxControlBaseExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxControlBase::DoHitTest(x, y);
    if (*m_wxControlBaseExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxControlBaseExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoIsExposed__intintintintFunc m_wxControlBaseExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxControlBase::DoIsExposed(x, y, w, h);
    if (*m_wxControlBaseExtDoIsExposed__intintintint != NULL){
      return m_wxControlBaseExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoIsExposed__intintFunc m_wxControlBaseExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxControlBase::DoIsExposed(x, y);
    if (*m_wxControlBaseExtDoIsExposed__intint != NULL){
      return m_wxControlBaseExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxControlBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxControlBase::DoMoveInTabOrder(win, move);
    if (*m_wxControlBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxControlBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxControlBaseExtDoMoveWindow__intintintintFunc m_wxControlBaseExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxControlBase::DoMoveWindow(x, y, width, height);
    if (*m_wxControlBaseExtDoMoveWindow__intintintint != NULL){
      return m_wxControlBaseExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxControlBaseExtDoNavigateIn__intFunc m_wxControlBaseExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxControlBase::DoNavigateIn(flags);
    if (*m_wxControlBaseExtDoNavigateIn__int != NULL){
      return m_wxControlBaseExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoPhase__intFunc m_wxControlBaseExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxControlBase::DoPhase(phase);
    if (*m_wxControlBaseExtDoPhase__int != NULL){
      return m_wxControlBaseExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoPopupMenu__wxMenuPintintFunc m_wxControlBaseExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxControlBase::DoPopupMenu(menu, x, y);
    if (*m_wxControlBaseExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxControlBaseExtDoPopupMenu__wxMenuPintint(this, menu, x, y, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoReleaseMouseFunc m_wxControlBaseExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxControlBase::DoReleaseMouse();
    if (*m_wxControlBaseExtDoReleaseMouse != NULL){
      return m_wxControlBaseExtDoReleaseMouse(this);
    }
  }
  wxControlBaseExtDoScreenToClient__intPintPFunc m_wxControlBaseExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxControlBase::DoScreenToClient(x, y);
    if (*m_wxControlBaseExtDoScreenToClient__intPintP != NULL){
      return m_wxControlBaseExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxControlBaseExtDoSetClientData__voidPFunc m_wxControlBaseExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxControlBase::DoSetClientData(data);
    if (*m_wxControlBaseExtDoSetClientData__voidP != NULL){
      return m_wxControlBaseExtDoSetClientData__voidP(this, data);
    }
  }
  wxControlBaseExtDoSetClientObject__wxClientDataPFunc m_wxControlBaseExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxControlBase::DoSetClientObject(data);
    if (*m_wxControlBaseExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxControlBaseExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxControlBaseExtDoSetClientSize__intintFunc m_wxControlBaseExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxControlBase::DoSetClientSize(width, height);
    if (*m_wxControlBaseExtDoSetClientSize__intint != NULL){
      return m_wxControlBaseExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxControlBaseExtDoSetLabelMarkup__wxStringCRFunc m_wxControlBaseExtDoSetLabelMarkup__wxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxControlBase::DoSetLabelMarkup(markup);
    if (*m_wxControlBaseExtDoSetLabelMarkup__wxStringCR != NULL){
      return m_wxControlBaseExtDoSetLabelMarkup__wxStringCR(this, markup, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoSetSize__intintintintintFunc m_wxControlBaseExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxControlBase::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxControlBaseExtDoSetSize__intintintintint != NULL){
      return m_wxControlBaseExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxControlBaseExtDoSetSizeHints__intintintintintintFunc m_wxControlBaseExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxControlBase::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxControlBaseExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxControlBaseExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxControlBaseExtDoSetToolTip__wxToolTipPFunc m_wxControlBaseExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxControlBase::DoSetToolTip(tip);
    if (*m_wxControlBaseExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxControlBaseExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxControlBaseExtDoSetToolTipText__wxStringCRFunc m_wxControlBaseExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxControlBase::DoSetToolTipText(tip);
    if (*m_wxControlBaseExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxControlBaseExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxControlBaseExtDoSetVirtualSize__intintFunc m_wxControlBaseExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxControlBase::DoSetVirtualSize(x, y);
    if (*m_wxControlBaseExtDoSetVirtualSize__intint != NULL){
      return m_wxControlBaseExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxControlBaseExtDoSetWindowVariant__wxWindowVariantFunc m_wxControlBaseExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxControlBase::DoSetWindowVariant(variant);
    if (*m_wxControlBaseExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxControlBaseExtDoSetWindowVariant__wxWindowVariant(this, variant);
    }
  }
  wxControlBaseExtDoThawFunc m_wxControlBaseExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxControlBase::DoThaw();
    if (*m_wxControlBaseExtDoThaw != NULL){
      return m_wxControlBaseExtDoThaw(this);
    }
  }
  wxControlBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxControlBaseExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxControlBase::DoUpdateWindowUI(event);
    if (*m_wxControlBaseExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxControlBaseExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxControlBaseExtDragAcceptFiles__boolFunc m_wxControlBaseExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxControlBase::DragAcceptFiles(accept);
    if (*m_wxControlBaseExtDragAcceptFiles__bool != NULL){
      return m_wxControlBaseExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxControlBaseExtEnable__boolFunc m_wxControlBaseExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxControlBase::Enable(enable);
    if (*m_wxControlBaseExtEnable__bool != NULL){
      return m_wxControlBaseExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtEnableTouchEvents__intFunc m_wxControlBaseExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxControlBase::EnableTouchEvents(eventsMask);
    if (*m_wxControlBaseExtEnableTouchEvents__int != NULL){
      return m_wxControlBaseExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtEnableVisibleFocus__boolFunc m_wxControlBaseExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxControlBase::EnableVisibleFocus(enabled);
    if (*m_wxControlBaseExtEnableVisibleFocus__bool != NULL){
      return m_wxControlBaseExtEnableVisibleFocus__bool(this, enabled);
    }
  }
  wxControlBaseExtEndRepositioningChildrenFunc m_wxControlBaseExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxControlBase::EndRepositioningChildren();
    if (*m_wxControlBaseExtEndRepositioningChildren != NULL){
      return m_wxControlBaseExtEndRepositioningChildren(this);
    }
  }
  wxControlBaseExtFitFunc m_wxControlBaseExtFit = NULL;
  virtual void Fit() override
  {
    wxControlBase::Fit();
    if (*m_wxControlBaseExtFit != NULL){
      return m_wxControlBaseExtFit(this);
    }
  }
  wxControlBaseExtFitInsideFunc m_wxControlBaseExtFitInside = NULL;
  virtual void FitInside() override
  {
    wxControlBase::FitInside();
    if (*m_wxControlBaseExtFitInside != NULL){
      return m_wxControlBaseExtFitInside(this);
    }
  }
  wxControlBaseExtGetBestVirtualSizeFunc m_wxControlBaseExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxControlBase::GetBestVirtualSize();
    if (*m_wxControlBaseExtGetBestVirtualSize != NULL){
      return m_wxControlBaseExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetCharHeightFunc m_wxControlBaseExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxControlBase::GetCharHeight();
    if (*m_wxControlBaseExtGetCharHeight != NULL){
      return m_wxControlBaseExtGetCharHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetCharWidthFunc m_wxControlBaseExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxControlBase::GetCharWidth();
    if (*m_wxControlBaseExtGetCharWidth != NULL){
      return m_wxControlBaseExtGetCharWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetClassInfoFunc m_wxControlBaseExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxControlBase::GetClassInfo();
    if (*m_wxControlBaseExtGetClassInfo != NULL){
      return m_wxControlBaseExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetClientAreaOriginFunc m_wxControlBaseExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxControlBase::GetClientAreaOrigin();
    if (*m_wxControlBaseExtGetClientAreaOrigin != NULL){
      return m_wxControlBaseExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetClientSizeConstraint__intPintPFunc m_wxControlBaseExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxControlBase::GetClientSizeConstraint(w, h);
    if (*m_wxControlBaseExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxControlBaseExtGetClientSizeConstraint__intPintP(this, w, h);
    }
  }
  wxControlBaseExtGetContentScaleFactorFunc m_wxControlBaseExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxControlBase::GetContentScaleFactor();
    if (*m_wxControlBaseExtGetContentScaleFactor != NULL){
      return m_wxControlBaseExtGetContentScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetDPIFunc m_wxControlBaseExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxControlBase::GetDPI();
    if (*m_wxControlBaseExtGetDPI != NULL){
      return m_wxControlBaseExtGetDPI(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetDPIScaleFactorFunc m_wxControlBaseExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxControlBase::GetDPIScaleFactor();
    if (*m_wxControlBaseExtGetDPIScaleFactor != NULL){
      return m_wxControlBaseExtGetDPIScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetDefaultAttributesFunc m_wxControlBaseExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxControlBase::GetDefaultAttributes();
    if (*m_wxControlBaseExtGetDefaultAttributes != NULL){
      return m_wxControlBaseExtGetDefaultAttributes(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetDefaultBorderFunc m_wxControlBaseExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxControlBase::GetDefaultBorder();
    if (*m_wxControlBaseExtGetDefaultBorder != NULL){
      return m_wxControlBaseExtGetDefaultBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetDefaultBorderForControlFunc m_wxControlBaseExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxControlBase::GetDefaultBorderForControl();
    if (*m_wxControlBaseExtGetDefaultBorderForControl != NULL){
      return m_wxControlBaseExtGetDefaultBorderForControl(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetDropTargetFunc m_wxControlBaseExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxControlBase::GetDropTarget();
    if (*m_wxControlBaseExtGetDropTarget != NULL){
      return m_wxControlBaseExtGetDropTarget(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetEffectiveMinSizeFunc m_wxControlBaseExtGetEffectiveMinSize = NULL;
  virtual wxSize GetEffectiveMinSize() const override
  {
    wxSize res = wxControlBase::GetEffectiveMinSize();
    if (*m_wxControlBaseExtGetEffectiveMinSize != NULL){
      return m_wxControlBaseExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetEventHashTableFunc m_wxControlBaseExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxControlBase::GetEventHashTable();
    if (*m_wxControlBaseExtGetEventHashTable != NULL){
      return m_wxControlBaseExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetEventTableFunc m_wxControlBaseExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxControlBase::GetEventTable();
    if (*m_wxControlBaseExtGetEventTable != NULL){
      return m_wxControlBaseExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetHandleFunc m_wxControlBaseExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxControlBase::GetHandle();
    if (*m_wxControlBaseExtGetHandle != NULL){
      return m_wxControlBaseExtGetHandle(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxControlBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxControlBase::GetHelpTextAtPoint(pt, origin);
    if (*m_wxControlBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxControlBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetLabelFunc m_wxControlBaseExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxControlBase::GetLabel();
    if (*m_wxControlBaseExtGetLabel != NULL){
      return m_wxControlBaseExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetLabelTextFunc m_wxControlBaseExtGetLabelText = NULL;
  virtual wxString GetLabelText() const override
  {
    wxString res = wxControlBase::GetLabelText();
    if (*m_wxControlBaseExtGetLabelText != NULL){
      return m_wxControlBaseExtGetLabelText(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetLayoutDirectionFunc m_wxControlBaseExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxControlBase::GetLayoutDirection();
    if (*m_wxControlBaseExtGetLayoutDirection != NULL){
      return m_wxControlBaseExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetMainWindowOfCompositeControlFunc m_wxControlBaseExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxControlBase::GetMainWindowOfCompositeControl();
    if (*m_wxControlBaseExtGetMainWindowOfCompositeControl != NULL){
      return m_wxControlBaseExtGetMainWindowOfCompositeControl(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetMaxClientSizeFunc m_wxControlBaseExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxControlBase::GetMaxClientSize();
    if (*m_wxControlBaseExtGetMaxClientSize != NULL){
      return m_wxControlBaseExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetMaxSizeFunc m_wxControlBaseExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxControlBase::GetMaxSize();
    if (*m_wxControlBaseExtGetMaxSize != NULL){
      return m_wxControlBaseExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetMinClientSizeFunc m_wxControlBaseExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxControlBase::GetMinClientSize();
    if (*m_wxControlBaseExtGetMinClientSize != NULL){
      return m_wxControlBaseExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetMinSizeFunc m_wxControlBaseExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxControlBase::GetMinSize();
    if (*m_wxControlBaseExtGetMinSize != NULL){
      return m_wxControlBaseExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetNameFunc m_wxControlBaseExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxControlBase::GetName();
    if (*m_wxControlBaseExtGetName != NULL){
      return m_wxControlBaseExtGetName(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetPositionConstraint__intPintPFunc m_wxControlBaseExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxControlBase::GetPositionConstraint(x, y);
    if (*m_wxControlBaseExtGetPositionConstraint__intPintP != NULL){
      return m_wxControlBaseExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxControlBaseExtGetScrollPos__intFunc m_wxControlBaseExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxControlBase::GetScrollPos(orient);
    if (*m_wxControlBaseExtGetScrollPos__int != NULL){
      return m_wxControlBaseExtGetScrollPos__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetScrollRange__intFunc m_wxControlBaseExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxControlBase::GetScrollRange(orient);
    if (*m_wxControlBaseExtGetScrollRange__int != NULL){
      return m_wxControlBaseExtGetScrollRange__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetScrollThumb__intFunc m_wxControlBaseExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxControlBase::GetScrollThumb(orient);
    if (*m_wxControlBaseExtGetScrollThumb__int != NULL){
      return m_wxControlBaseExtGetScrollThumb__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetSizeConstraint__intPintPFunc m_wxControlBaseExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxControlBase::GetSizeConstraint(w, h);
    if (*m_wxControlBaseExtGetSizeConstraint__intPintP != NULL){
      return m_wxControlBaseExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxControlBaseExtGetThemeEnabledFunc m_wxControlBaseExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxControlBase::GetThemeEnabled();
    if (*m_wxControlBaseExtGetThemeEnabled != NULL){
      return m_wxControlBaseExtGetThemeEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetTransparentFunc m_wxControlBaseExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxControlBase::GetTransparent();
    if (*m_wxControlBaseExtGetTransparent != NULL){
      return m_wxControlBaseExtGetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetValidatorFunc m_wxControlBaseExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxControlBase::GetValidator();
    if (*m_wxControlBaseExtGetValidator != NULL){
      return m_wxControlBaseExtGetValidator(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetWindowBorderSizeFunc m_wxControlBaseExtGetWindowBorderSize = NULL;
  virtual wxSize GetWindowBorderSize() const override
  {
    wxSize res = wxControlBase::GetWindowBorderSize();
    if (*m_wxControlBaseExtGetWindowBorderSize != NULL){
      return m_wxControlBaseExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetWindowStyleFlagFunc m_wxControlBaseExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxControlBase::GetWindowStyleFlag();
    if (*m_wxControlBaseExtGetWindowStyleFlag != NULL){
      return m_wxControlBaseExtGetWindowStyleFlag(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtHasCaptureFunc m_wxControlBaseExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxControlBase::HasCapture();
    if (*m_wxControlBaseExtHasCapture != NULL){
      return m_wxControlBaseExtHasCapture(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtHasFocusFunc m_wxControlBaseExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxControlBase::HasFocus();
    if (*m_wxControlBaseExtHasFocus != NULL){
      return m_wxControlBaseExtHasFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtHasMultiplePagesFunc m_wxControlBaseExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxControlBase::HasMultiplePages();
    if (*m_wxControlBaseExtHasMultiplePages != NULL){
      return m_wxControlBaseExtHasMultiplePages(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtHasTransparentBackgroundFunc m_wxControlBaseExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxControlBase::HasTransparentBackground();
    if (*m_wxControlBaseExtHasTransparentBackground != NULL){
      return m_wxControlBaseExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtHideWithEffect__wxShowEffectunsignedintFunc m_wxControlBaseExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxControlBase::HideWithEffect(effect, timeout);
    if (*m_wxControlBaseExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxControlBaseExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtInformFirstDirection__intintintFunc m_wxControlBaseExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxControlBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxControlBaseExtInformFirstDirection__intintint != NULL){
      return m_wxControlBaseExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtInheritAttributesFunc m_wxControlBaseExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxControlBase::InheritAttributes();
    if (*m_wxControlBaseExtInheritAttributes != NULL){
      return m_wxControlBaseExtInheritAttributes(this);
    }
  }
  wxControlBaseExtInitDialogFunc m_wxControlBaseExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxControlBase::InitDialog();
    if (*m_wxControlBaseExtInitDialog != NULL){
      return m_wxControlBaseExtInitDialog(this);
    }
  }
  wxControlBaseExtIsClientAreaChild__wxWindowCPFunc m_wxControlBaseExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxControlBase::IsClientAreaChild(child);
    if (*m_wxControlBaseExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxControlBaseExtIsClientAreaChild__wxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsDoubleBufferedFunc m_wxControlBaseExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxControlBase::IsDoubleBuffered();
    if (*m_wxControlBaseExtIsDoubleBuffered != NULL){
      return m_wxControlBaseExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsRetainedFunc m_wxControlBaseExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxControlBase::IsRetained();
    if (*m_wxControlBaseExtIsRetained != NULL){
      return m_wxControlBaseExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsScrollbarAlwaysShown__intFunc m_wxControlBaseExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxControlBase::IsScrollbarAlwaysShown(orient);
    if (*m_wxControlBaseExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxControlBaseExtIsScrollbarAlwaysShown__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsShownFunc m_wxControlBaseExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxControlBase::IsShown();
    if (*m_wxControlBaseExtIsShown != NULL){
      return m_wxControlBaseExtIsShown(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsShownOnScreenFunc m_wxControlBaseExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxControlBase::IsShownOnScreen();
    if (*m_wxControlBaseExtIsShownOnScreen != NULL){
      return m_wxControlBaseExtIsShownOnScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsThisEnabledFunc m_wxControlBaseExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxControlBase::IsThisEnabled();
    if (*m_wxControlBaseExtIsThisEnabled != NULL){
      return m_wxControlBaseExtIsThisEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsTopLevelFunc m_wxControlBaseExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxControlBase::IsTopLevel();
    if (*m_wxControlBaseExtIsTopLevel != NULL){
      return m_wxControlBaseExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxControlBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxControlBase::IsTopNavigationDomain(kind);
    if (*m_wxControlBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxControlBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsTransparentBackgroundSupported__wxStringPFunc m_wxControlBaseExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxControlBase::IsTransparentBackgroundSupported(reason);
    if (*m_wxControlBaseExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxControlBaseExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtLayoutFunc m_wxControlBaseExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxControlBase::Layout();
    if (*m_wxControlBaseExtLayout != NULL){
      return m_wxControlBaseExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtLayoutPhase1__intPFunc m_wxControlBaseExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxControlBase::LayoutPhase1(noChanges);
    if (*m_wxControlBaseExtLayoutPhase1__intP != NULL){
      return m_wxControlBaseExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtLayoutPhase2__intPFunc m_wxControlBaseExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxControlBase::LayoutPhase2(noChanges);
    if (*m_wxControlBaseExtLayoutPhase2__intP != NULL){
      return m_wxControlBaseExtLayoutPhase2__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtLowerFunc m_wxControlBaseExtLower = NULL;
  virtual void Lower() override
  {
    wxControlBase::Lower();
    if (*m_wxControlBaseExtLower != NULL){
      return m_wxControlBaseExtLower(this);
    }
  }
  wxControlBaseExtMoveConstraint__intintFunc m_wxControlBaseExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxControlBase::MoveConstraint(x, y);
    if (*m_wxControlBaseExtMoveConstraint__intint != NULL){
      return m_wxControlBaseExtMoveConstraint__intint(this, x, y);
    }
  }
  wxControlBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxControlBaseExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxControlBase::OnDynamicBind(entry);
    if (*m_wxControlBaseExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxControlBaseExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtOnInternalIdleFunc m_wxControlBaseExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxControlBase::OnInternalIdle();
    if (*m_wxControlBaseExtOnInternalIdle != NULL){
      return m_wxControlBaseExtOnInternalIdle(this);
    }
  }
  wxControlBaseExtPrepareDC__wxDCRFunc m_wxControlBaseExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxControlBase::PrepareDC(dc);
    if (*m_wxControlBaseExtPrepareDC__wxDCR != NULL){
      return m_wxControlBaseExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxControlBaseExtProcessEvent__wxEventRFunc m_wxControlBaseExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxControlBase::ProcessEvent(event);
    if (*m_wxControlBaseExtProcessEvent__wxEventR != NULL){
      return m_wxControlBaseExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtQueueEvent__wxEventPFunc m_wxControlBaseExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxControlBase::QueueEvent(event);
    if (*m_wxControlBaseExtQueueEvent__wxEventP != NULL){
      return m_wxControlBaseExtQueueEvent__wxEventP(this, event);
    }
  }
  wxControlBaseExtRaiseFunc m_wxControlBaseExtRaise = NULL;
  virtual void Raise() override
  {
    wxControlBase::Raise();
    if (*m_wxControlBaseExtRaise != NULL){
      return m_wxControlBaseExtRaise(this);
    }
  }
  wxControlBaseExtRefresh__boolwxRectCPFunc m_wxControlBaseExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxControlBase::Refresh(eraseBackground, rect);
    if (*m_wxControlBaseExtRefresh__boolwxRectCP != NULL){
      return m_wxControlBaseExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxControlBaseExtRegisterHotKey__intintintFunc m_wxControlBaseExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxControlBase::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxControlBaseExtRegisterHotKey__intintint != NULL){
      return m_wxControlBaseExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtRemoveChild__wxWindowBasePFunc m_wxControlBaseExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxControlBase::RemoveChild(child);
    if (*m_wxControlBaseExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxControlBaseExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxControlBaseExtReparent__wxWindowBasePFunc m_wxControlBaseExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxControlBase::Reparent(newParent);
    if (*m_wxControlBaseExtReparent__wxWindowBaseP != NULL){
      return m_wxControlBaseExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtScrollLines__intFunc m_wxControlBaseExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxControlBase::ScrollLines(lines);
    if (*m_wxControlBaseExtScrollLines__int != NULL){
      return m_wxControlBaseExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtScrollPages__intFunc m_wxControlBaseExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxControlBase::ScrollPages(pages);
    if (*m_wxControlBaseExtScrollPages__int != NULL){
      return m_wxControlBaseExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtScrollWindow__intintwxRectCPFunc m_wxControlBaseExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxControlBase::ScrollWindow(dx, dy, rect);
    if (*m_wxControlBaseExtScrollWindow__intintwxRectCP != NULL){
      return m_wxControlBaseExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxControlBaseExtSearchEventTable__wxEventTableRwxEventRFunc m_wxControlBaseExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxControlBase::SearchEventTable(table, event);
    if (*m_wxControlBaseExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxControlBaseExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSendIdleEvents__wxIdleEventRFunc m_wxControlBaseExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxControlBase::SendIdleEvents(event);
    if (*m_wxControlBaseExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxControlBaseExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSendSizeEvent__intFunc m_wxControlBaseExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxControlBase::SendSizeEvent(flags);
    if (*m_wxControlBaseExtSendSizeEvent__int != NULL){
      return m_wxControlBaseExtSendSizeEvent__int(this, flags);
    }
  }
  wxControlBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxControlBaseExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxControlBase::SetAcceleratorTable(accel);
    if (*m_wxControlBaseExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxControlBaseExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxControlBaseExtSetBackgroundColour__wxColourCRFunc m_wxControlBaseExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxControlBase::SetBackgroundColour(colour);
    if (*m_wxControlBaseExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxControlBaseExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxControlBaseExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxControlBase::SetBackgroundStyle(style);
    if (*m_wxControlBaseExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxControlBaseExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetCanFocus__boolFunc m_wxControlBaseExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxControlBase::SetCanFocus(canFocus);
    if (*m_wxControlBaseExtSetCanFocus__bool != NULL){
      return m_wxControlBaseExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxControlBaseExtSetConstraintSizes__boolFunc m_wxControlBaseExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxControlBase::SetConstraintSizes(recurse);
    if (*m_wxControlBaseExtSetConstraintSizes__bool != NULL){
      return m_wxControlBaseExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxControlBaseExtSetCursor__wxCursorCRFunc m_wxControlBaseExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxControlBase::SetCursor(cursor);
    if (*m_wxControlBaseExtSetCursor__wxCursorCR != NULL){
      return m_wxControlBaseExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetDoubleBuffered__boolFunc m_wxControlBaseExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxControlBase::SetDoubleBuffered(on);
    if (*m_wxControlBaseExtSetDoubleBuffered__bool != NULL){
      return m_wxControlBaseExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxControlBaseExtSetDropTarget__wxDropTargetPFunc m_wxControlBaseExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxControlBase::SetDropTarget(dropTarget);
    if (*m_wxControlBaseExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxControlBaseExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxControlBaseExtSetExtraStyle__longFunc m_wxControlBaseExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxControlBase::SetExtraStyle(exStyle);
    if (*m_wxControlBaseExtSetExtraStyle__long != NULL){
      return m_wxControlBaseExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxControlBaseExtSetFocusFunc m_wxControlBaseExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxControlBase::SetFocus();
    if (*m_wxControlBaseExtSetFocus != NULL){
      return m_wxControlBaseExtSetFocus(this);
    }
  }
  wxControlBaseExtSetFocusFromKbdFunc m_wxControlBaseExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxControlBase::SetFocusFromKbd();
    if (*m_wxControlBaseExtSetFocusFromKbd != NULL){
      return m_wxControlBaseExtSetFocusFromKbd(this);
    }
  }
  wxControlBaseExtSetFont__wxFontCRFunc m_wxControlBaseExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxControlBase::SetFont(font);
    if (*m_wxControlBaseExtSetFont__wxFontCR != NULL){
      return m_wxControlBaseExtSetFont__wxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetForegroundColour__wxColourCRFunc m_wxControlBaseExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxControlBase::SetForegroundColour(colour);
    if (*m_wxControlBaseExtSetForegroundColour__wxColourCR != NULL){
      return m_wxControlBaseExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetId__wxWindowIDFunc m_wxControlBaseExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxControlBase::SetId(winid);
    if (*m_wxControlBaseExtSetId__wxWindowID != NULL){
      return m_wxControlBaseExtSetId__wxWindowID(this, winid);
    }
  }
  wxControlBaseExtSetLabel__wxStringCRFunc m_wxControlBaseExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxControlBase::SetLabel(label);
    if (*m_wxControlBaseExtSetLabel__wxStringCR != NULL){
      return m_wxControlBaseExtSetLabel__wxStringCR(this, label);
    }
  }
  wxControlBaseExtSetLabelText__wxStringCRFunc m_wxControlBaseExtSetLabelText__wxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxControlBase::SetLabelText(text);
    if (*m_wxControlBaseExtSetLabelText__wxStringCR != NULL){
      return m_wxControlBaseExtSetLabelText__wxStringCR(this, text);
    }
  }
  wxControlBaseExtSetLayoutDirection__wxLayoutDirectionFunc m_wxControlBaseExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxControlBase::SetLayoutDirection(dir);
    if (*m_wxControlBaseExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxControlBaseExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxControlBaseExtSetMaxClientSize__wxSizeCRFunc m_wxControlBaseExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxControlBase::SetMaxClientSize(size);
    if (*m_wxControlBaseExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxControlBaseExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxControlBaseExtSetMaxSize__wxSizeCRFunc m_wxControlBaseExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxControlBase::SetMaxSize(maxSize);
    if (*m_wxControlBaseExtSetMaxSize__wxSizeCR != NULL){
      return m_wxControlBaseExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxControlBaseExtSetMinClientSize__wxSizeCRFunc m_wxControlBaseExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxControlBase::SetMinClientSize(size);
    if (*m_wxControlBaseExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxControlBaseExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxControlBaseExtSetMinSize__wxSizeCRFunc m_wxControlBaseExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxControlBase::SetMinSize(minSize);
    if (*m_wxControlBaseExtSetMinSize__wxSizeCR != NULL){
      return m_wxControlBaseExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxControlBaseExtSetName__wxStringCRFunc m_wxControlBaseExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxControlBase::SetName(name);
    if (*m_wxControlBaseExtSetName__wxStringCR != NULL){
      return m_wxControlBaseExtSetName__wxStringCR(this, name);
    }
  }
  wxControlBaseExtSetNextHandler__wxEvtHandlerPFunc m_wxControlBaseExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxControlBase::SetNextHandler(handler);
    if (*m_wxControlBaseExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxControlBaseExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxControlBaseExtSetPreviousHandler__wxEvtHandlerPFunc m_wxControlBaseExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxControlBase::SetPreviousHandler(handler);
    if (*m_wxControlBaseExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxControlBaseExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxControlBaseExtSetScrollPos__intintboolFunc m_wxControlBaseExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxControlBase::SetScrollPos(orient, pos, refresh);
    if (*m_wxControlBaseExtSetScrollPos__intintbool != NULL){
      return m_wxControlBaseExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxControlBaseExtSetScrollbar__intintintintboolFunc m_wxControlBaseExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxControlBase::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxControlBaseExtSetScrollbar__intintintintbool != NULL){
      return m_wxControlBaseExtSetScrollbar__intintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxControlBaseExtSetSizeConstraint__intintintintFunc m_wxControlBaseExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxControlBase::SetSizeConstraint(x, y, w, h);
    if (*m_wxControlBaseExtSetSizeConstraint__intintintint != NULL){
      return m_wxControlBaseExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxControlBaseExtSetSizeHints__intintintintintintFunc m_wxControlBaseExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxControlBase::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxControlBaseExtSetSizeHints__intintintintintint != NULL){
      return m_wxControlBaseExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxControlBaseExtSetThemeEnabled__boolFunc m_wxControlBaseExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxControlBase::SetThemeEnabled(enableTheme);
    if (*m_wxControlBaseExtSetThemeEnabled__bool != NULL){
      return m_wxControlBaseExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxControlBaseExtSetTransparent__wxByteFunc m_wxControlBaseExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxControlBase::SetTransparent(alpha);
    if (*m_wxControlBaseExtSetTransparent__wxByte != NULL){
      return m_wxControlBaseExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetValidator__wxValidatorCRFunc m_wxControlBaseExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxControlBase::SetValidator(validator);
    if (*m_wxControlBaseExtSetValidator__wxValidatorCR != NULL){
      return m_wxControlBaseExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxControlBaseExtSetWindowStyleFlag__longFunc m_wxControlBaseExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxControlBase::SetWindowStyleFlag(style);
    if (*m_wxControlBaseExtSetWindowStyleFlag__long != NULL){
      return m_wxControlBaseExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxControlBaseExtShouldInheritColoursFunc m_wxControlBaseExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxControlBase::ShouldInheritColours();
    if (*m_wxControlBaseExtShouldInheritColours != NULL){
      return m_wxControlBaseExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtShow__boolFunc m_wxControlBaseExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxControlBase::Show(show);
    if (*m_wxControlBaseExtShow__bool != NULL){
      return m_wxControlBaseExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtShowWithEffect__wxShowEffectunsignedintFunc m_wxControlBaseExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxControlBase::ShowWithEffect(effect, timeout);
    if (*m_wxControlBaseExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxControlBaseExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtTransferDataFromWindowFunc m_wxControlBaseExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxControlBase::TransferDataFromWindow();
    if (*m_wxControlBaseExtTransferDataFromWindow != NULL){
      return m_wxControlBaseExtTransferDataFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtTransferDataToWindowFunc m_wxControlBaseExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxControlBase::TransferDataToWindow();
    if (*m_wxControlBaseExtTransferDataToWindow != NULL){
      return m_wxControlBaseExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtTriggerScrollEvent__wxEventTypeFunc m_wxControlBaseExtTriggerScrollEvent__wxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxControlBase::TriggerScrollEvent(scrollEvent);
    if (*m_wxControlBaseExtTriggerScrollEvent__wxEventType != NULL){
      return m_wxControlBaseExtTriggerScrollEvent__wxEventType(this, scrollEvent);
    }
  }
  wxControlBaseExtTryAfter__wxEventRFunc m_wxControlBaseExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxControlBase::TryAfter(event);
    if (*m_wxControlBaseExtTryAfter__wxEventR != NULL){
      return m_wxControlBaseExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtTryBefore__wxEventRFunc m_wxControlBaseExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxControlBase::TryBefore(event);
    if (*m_wxControlBaseExtTryBefore__wxEventR != NULL){
      return m_wxControlBaseExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtUnregisterHotKey__intFunc m_wxControlBaseExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxControlBase::UnregisterHotKey(hotkeyId);
    if (*m_wxControlBaseExtUnregisterHotKey__int != NULL){
      return m_wxControlBaseExtUnregisterHotKey__int(this, hotkeyId, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtUpdateFunc m_wxControlBaseExtUpdate = NULL;
  virtual void Update() override
  {
    wxControlBase::Update();
    if (*m_wxControlBaseExtUpdate != NULL){
      return m_wxControlBaseExtUpdate(this);
    }
  }
  wxControlBaseExtUpdateWindowUI__longFunc m_wxControlBaseExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxControlBase::UpdateWindowUI(flags);
    if (*m_wxControlBaseExtUpdateWindowUI__long != NULL){
      return m_wxControlBaseExtUpdateWindowUI__long(this, flags);
    }
  }
  wxControlBaseExtValidateFunc m_wxControlBaseExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxControlBase::Validate();
    if (*m_wxControlBaseExtValidate != NULL){
      return m_wxControlBaseExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxControlBaseExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxControlBase::WXAdjustFontToOwnPPI(font);
    if (*m_wxControlBaseExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxControlBaseExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxControlBaseExtWXGetTextEntryFunc m_wxControlBaseExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxControlBase::WXGetTextEntry();
    if (*m_wxControlBaseExtWXGetTextEntry != NULL){
      return m_wxControlBaseExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXReservedEvtHandler1__voidPFunc m_wxControlBaseExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxControlBase::WXReservedEvtHandler1(param0);
    if (*m_wxControlBaseExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxControlBaseExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXReservedEvtHandler2__voidPFunc m_wxControlBaseExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxControlBase::WXReservedEvtHandler2(param0);
    if (*m_wxControlBaseExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxControlBaseExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXReservedWindow1__voidPFunc m_wxControlBaseExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxControlBase::WXReservedWindow1(param0);
    if (*m_wxControlBaseExtWXReservedWindow1__voidP != NULL){
      return m_wxControlBaseExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXReservedWindow2__voidPFunc m_wxControlBaseExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxControlBase::WXReservedWindow2(param0);
    if (*m_wxControlBaseExtWXReservedWindow2__voidP != NULL){
      return m_wxControlBaseExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXReservedWindow3__voidPFunc m_wxControlBaseExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxControlBase::WXReservedWindow3(param0);
    if (*m_wxControlBaseExtWXReservedWindow3__voidP != NULL){
      return m_wxControlBaseExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxControlBaseExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxControlBase::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxControlBaseExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxControlBaseExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxControlBaseExtWarpPointer__intintFunc m_wxControlBaseExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxControlBase::WarpPointer(x, y);
    if (*m_wxControlBaseExtWarpPointer__intint != NULL){
      return m_wxControlBaseExtWarpPointer__intint(this, x, y);
    }
  }
  wxControlBaseExtWindowToClientSize__wxSizeCRFunc m_wxControlBaseExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxControlBase::WindowToClientSize(size);
    if (*m_wxControlBaseExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxControlBaseExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxControlBaseExt(wxControlBaseExtAcceptsFocusFunc a_AcceptsFocus, wxControlBaseExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxControlBaseExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxControlBaseExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxControlBaseExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxControlBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxControlBaseExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxControlBaseExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxControlBaseExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxControlBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxControlBaseExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxControlBaseExtCanBeFocusedFunc a_CanBeFocused, wxControlBaseExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxControlBaseExtCanScroll__intFunc a_CanScroll__int, wxControlBaseExtCanSetTransparentFunc a_CanSetTransparent, wxControlBaseExtClearBackgroundFunc a_ClearBackground, wxControlBaseExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxControlBaseExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxControlBaseExtCommand__wxCommandEventRFunc a_Command__wxCommandEventR, wxControlBaseExtCreateRefDataFunc a_CreateRefData, wxControlBaseExtDestroyFunc a_Destroy, wxControlBaseExtDissociateHandleFunc a_DissociateHandle, wxControlBaseExtDoCaptureMouseFunc a_DoCaptureMouse, wxControlBaseExtDoCentre__intFunc a_DoCentre__int, wxControlBaseExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxControlBaseExtDoEnable__boolFunc a_DoEnable__bool, wxControlBaseExtDoFreezeFunc a_DoFreeze, wxControlBaseExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxControlBaseExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxControlBaseExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxControlBaseExtDoGetBestSizeFunc a_DoGetBestSize, wxControlBaseExtDoGetClientDataFunc a_DoGetClientData, wxControlBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxControlBaseExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxControlBaseExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxControlBaseExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxControlBaseExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxControlBaseExtDoGetSizeFromClientSize__wxSizeCRFunc a_DoGetSizeFromClientSize__wxSizeCR, wxControlBaseExtDoGetSizeFromTextSize__intintFunc a_DoGetSizeFromTextSize__intint, wxControlBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxControlBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxControlBaseExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxControlBaseExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxControlBaseExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxControlBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxControlBaseExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxControlBaseExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxControlBaseExtDoPhase__intFunc a_DoPhase__int, wxControlBaseExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxControlBaseExtDoReleaseMouseFunc a_DoReleaseMouse, wxControlBaseExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxControlBaseExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxControlBaseExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxControlBaseExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxControlBaseExtDoSetLabelMarkup__wxStringCRFunc a_DoSetLabelMarkup__wxStringCR, wxControlBaseExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxControlBaseExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxControlBaseExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxControlBaseExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxControlBaseExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxControlBaseExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxControlBaseExtDoThawFunc a_DoThaw, wxControlBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxControlBaseExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxControlBaseExtEnable__boolFunc a_Enable__bool, wxControlBaseExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxControlBaseExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxControlBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxControlBaseExtFitFunc a_Fit, wxControlBaseExtFitInsideFunc a_FitInside, wxControlBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxControlBaseExtGetCharHeightFunc a_GetCharHeight, wxControlBaseExtGetCharWidthFunc a_GetCharWidth, wxControlBaseExtGetClassInfoFunc a_GetClassInfo, wxControlBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxControlBaseExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxControlBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxControlBaseExtGetDPIFunc a_GetDPI, wxControlBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxControlBaseExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxControlBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxControlBaseExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxControlBaseExtGetDropTargetFunc a_GetDropTarget, wxControlBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxControlBaseExtGetEventHashTableFunc a_GetEventHashTable, wxControlBaseExtGetEventTableFunc a_GetEventTable, wxControlBaseExtGetHandleFunc a_GetHandle, wxControlBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxControlBaseExtGetLabelFunc a_GetLabel, wxControlBaseExtGetLabelTextFunc a_GetLabelText, wxControlBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxControlBaseExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxControlBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxControlBaseExtGetMaxSizeFunc a_GetMaxSize, wxControlBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxControlBaseExtGetMinSizeFunc a_GetMinSize, wxControlBaseExtGetNameFunc a_GetName, wxControlBaseExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxControlBaseExtGetScrollPos__intFunc a_GetScrollPos__int, wxControlBaseExtGetScrollRange__intFunc a_GetScrollRange__int, wxControlBaseExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxControlBaseExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxControlBaseExtGetThemeEnabledFunc a_GetThemeEnabled, wxControlBaseExtGetTransparentFunc a_GetTransparent, wxControlBaseExtGetValidatorFunc a_GetValidator, wxControlBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxControlBaseExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxControlBaseExtHasCaptureFunc a_HasCapture, wxControlBaseExtHasFocusFunc a_HasFocus, wxControlBaseExtHasMultiplePagesFunc a_HasMultiplePages, wxControlBaseExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxControlBaseExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxControlBaseExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxControlBaseExtInheritAttributesFunc a_InheritAttributes, wxControlBaseExtInitDialogFunc a_InitDialog, wxControlBaseExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxControlBaseExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxControlBaseExtIsRetainedFunc a_IsRetained, wxControlBaseExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxControlBaseExtIsShownFunc a_IsShown, wxControlBaseExtIsShownOnScreenFunc a_IsShownOnScreen, wxControlBaseExtIsThisEnabledFunc a_IsThisEnabled, wxControlBaseExtIsTopLevelFunc a_IsTopLevel, wxControlBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxControlBaseExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxControlBaseExtLayoutFunc a_Layout, wxControlBaseExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxControlBaseExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxControlBaseExtLowerFunc a_Lower, wxControlBaseExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxControlBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxControlBaseExtOnInternalIdleFunc a_OnInternalIdle, wxControlBaseExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxControlBaseExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxControlBaseExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxControlBaseExtRaiseFunc a_Raise, wxControlBaseExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxControlBaseExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxControlBaseExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxControlBaseExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxControlBaseExtScrollLines__intFunc a_ScrollLines__int, wxControlBaseExtScrollPages__intFunc a_ScrollPages__int, wxControlBaseExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxControlBaseExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxControlBaseExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxControlBaseExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxControlBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxControlBaseExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxControlBaseExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxControlBaseExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxControlBaseExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxControlBaseExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxControlBaseExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxControlBaseExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxControlBaseExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxControlBaseExtSetFocusFunc a_SetFocus, wxControlBaseExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxControlBaseExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxControlBaseExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxControlBaseExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxControlBaseExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxControlBaseExtSetLabelText__wxStringCRFunc a_SetLabelText__wxStringCR, wxControlBaseExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxControlBaseExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxControlBaseExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxControlBaseExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxControlBaseExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxControlBaseExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxControlBaseExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxControlBaseExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxControlBaseExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxControlBaseExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxControlBaseExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxControlBaseExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxControlBaseExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxControlBaseExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxControlBaseExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxControlBaseExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxControlBaseExtShouldInheritColoursFunc a_ShouldInheritColours, wxControlBaseExtShow__boolFunc a_Show__bool, wxControlBaseExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxControlBaseExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxControlBaseExtTransferDataToWindowFunc a_TransferDataToWindow, wxControlBaseExtTriggerScrollEvent__wxEventTypeFunc a_TriggerScrollEvent__wxEventType, wxControlBaseExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxControlBaseExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxControlBaseExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxControlBaseExtUpdateFunc a_Update, wxControlBaseExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxControlBaseExtValidateFunc a_Validate, wxControlBaseExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxControlBaseExtWXGetTextEntryFunc a_WXGetTextEntry, wxControlBaseExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxControlBaseExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxControlBaseExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxControlBaseExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxControlBaseExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxControlBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxControlBaseExtWarpPointer__intintFunc a_WarpPointer__intint, wxControlBaseExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxControlBase() {
    m_wxControlBaseExtAcceptsFocus = a_AcceptsFocus;
    m_wxControlBaseExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxControlBaseExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxControlBaseExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxControlBaseExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxControlBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxControlBaseExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxControlBaseExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxControlBaseExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxControlBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxControlBaseExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxControlBaseExtCanBeFocused = a_CanBeFocused;
    m_wxControlBaseExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxControlBaseExtCanScroll__int = a_CanScroll__int;
    m_wxControlBaseExtCanSetTransparent = a_CanSetTransparent;
    m_wxControlBaseExtClearBackground = a_ClearBackground;
    m_wxControlBaseExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxControlBaseExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxControlBaseExtCommand__wxCommandEventR = a_Command__wxCommandEventR;
    m_wxControlBaseExtCreateRefData = a_CreateRefData;
    m_wxControlBaseExtDestroy = a_Destroy;
    m_wxControlBaseExtDissociateHandle = a_DissociateHandle;
    m_wxControlBaseExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxControlBaseExtDoCentre__int = a_DoCentre__int;
    m_wxControlBaseExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxControlBaseExtDoEnable__bool = a_DoEnable__bool;
    m_wxControlBaseExtDoFreeze = a_DoFreeze;
    m_wxControlBaseExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxControlBaseExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxControlBaseExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxControlBaseExtDoGetBestSize = a_DoGetBestSize;
    m_wxControlBaseExtDoGetClientData = a_DoGetClientData;
    m_wxControlBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxControlBaseExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxControlBaseExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxControlBaseExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxControlBaseExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxControlBaseExtDoGetSizeFromClientSize__wxSizeCR = a_DoGetSizeFromClientSize__wxSizeCR;
    m_wxControlBaseExtDoGetSizeFromTextSize__intint = a_DoGetSizeFromTextSize__intint;
    m_wxControlBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxControlBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxControlBaseExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxControlBaseExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxControlBaseExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxControlBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxControlBaseExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxControlBaseExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxControlBaseExtDoPhase__int = a_DoPhase__int;
    m_wxControlBaseExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxControlBaseExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxControlBaseExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxControlBaseExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxControlBaseExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxControlBaseExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxControlBaseExtDoSetLabelMarkup__wxStringCR = a_DoSetLabelMarkup__wxStringCR;
    m_wxControlBaseExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxControlBaseExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxControlBaseExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxControlBaseExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxControlBaseExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxControlBaseExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxControlBaseExtDoThaw = a_DoThaw;
    m_wxControlBaseExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxControlBaseExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxControlBaseExtEnable__bool = a_Enable__bool;
    m_wxControlBaseExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxControlBaseExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxControlBaseExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxControlBaseExtFit = a_Fit;
    m_wxControlBaseExtFitInside = a_FitInside;
    m_wxControlBaseExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxControlBaseExtGetCharHeight = a_GetCharHeight;
    m_wxControlBaseExtGetCharWidth = a_GetCharWidth;
    m_wxControlBaseExtGetClassInfo = a_GetClassInfo;
    m_wxControlBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxControlBaseExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
    m_wxControlBaseExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxControlBaseExtGetDPI = a_GetDPI;
    m_wxControlBaseExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxControlBaseExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxControlBaseExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxControlBaseExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxControlBaseExtGetDropTarget = a_GetDropTarget;
    m_wxControlBaseExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxControlBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxControlBaseExtGetEventTable = a_GetEventTable;
    m_wxControlBaseExtGetHandle = a_GetHandle;
    m_wxControlBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxControlBaseExtGetLabel = a_GetLabel;
    m_wxControlBaseExtGetLabelText = a_GetLabelText;
    m_wxControlBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxControlBaseExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxControlBaseExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxControlBaseExtGetMaxSize = a_GetMaxSize;
    m_wxControlBaseExtGetMinClientSize = a_GetMinClientSize;
    m_wxControlBaseExtGetMinSize = a_GetMinSize;
    m_wxControlBaseExtGetName = a_GetName;
    m_wxControlBaseExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxControlBaseExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxControlBaseExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxControlBaseExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxControlBaseExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxControlBaseExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxControlBaseExtGetTransparent = a_GetTransparent;
    m_wxControlBaseExtGetValidator = a_GetValidator;
    m_wxControlBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxControlBaseExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxControlBaseExtHasCapture = a_HasCapture;
    m_wxControlBaseExtHasFocus = a_HasFocus;
    m_wxControlBaseExtHasMultiplePages = a_HasMultiplePages;
    m_wxControlBaseExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxControlBaseExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxControlBaseExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxControlBaseExtInheritAttributes = a_InheritAttributes;
    m_wxControlBaseExtInitDialog = a_InitDialog;
    m_wxControlBaseExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxControlBaseExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxControlBaseExtIsRetained = a_IsRetained;
    m_wxControlBaseExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxControlBaseExtIsShown = a_IsShown;
    m_wxControlBaseExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxControlBaseExtIsThisEnabled = a_IsThisEnabled;
    m_wxControlBaseExtIsTopLevel = a_IsTopLevel;
    m_wxControlBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxControlBaseExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxControlBaseExtLayout = a_Layout;
    m_wxControlBaseExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxControlBaseExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxControlBaseExtLower = a_Lower;
    m_wxControlBaseExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxControlBaseExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxControlBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxControlBaseExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxControlBaseExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxControlBaseExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxControlBaseExtRaise = a_Raise;
    m_wxControlBaseExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxControlBaseExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxControlBaseExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxControlBaseExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxControlBaseExtScrollLines__int = a_ScrollLines__int;
    m_wxControlBaseExtScrollPages__int = a_ScrollPages__int;
    m_wxControlBaseExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxControlBaseExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxControlBaseExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxControlBaseExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxControlBaseExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxControlBaseExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxControlBaseExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxControlBaseExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxControlBaseExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxControlBaseExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxControlBaseExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxControlBaseExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxControlBaseExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxControlBaseExtSetFocus = a_SetFocus;
    m_wxControlBaseExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxControlBaseExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxControlBaseExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxControlBaseExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxControlBaseExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxControlBaseExtSetLabelText__wxStringCR = a_SetLabelText__wxStringCR;
    m_wxControlBaseExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxControlBaseExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxControlBaseExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxControlBaseExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxControlBaseExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxControlBaseExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxControlBaseExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxControlBaseExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxControlBaseExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxControlBaseExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxControlBaseExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxControlBaseExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxControlBaseExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxControlBaseExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxControlBaseExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxControlBaseExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxControlBaseExtShouldInheritColours = a_ShouldInheritColours;
    m_wxControlBaseExtShow__bool = a_Show__bool;
    m_wxControlBaseExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxControlBaseExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxControlBaseExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxControlBaseExtTriggerScrollEvent__wxEventType = a_TriggerScrollEvent__wxEventType;
    m_wxControlBaseExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxControlBaseExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxControlBaseExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxControlBaseExtUpdate = a_Update;
    m_wxControlBaseExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxControlBaseExtValidate = a_Validate;
    m_wxControlBaseExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxControlBaseExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxControlBaseExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxControlBaseExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxControlBaseExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxControlBaseExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxControlBaseExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxControlBaseExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxControlBaseExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxControlBaseExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
  }
};

class wxControlExt: public wxControl
{
public:
  wxControlExt(): wxControl()  {  }
  wxControlExt(wxWindow* parent, wxWindowID winid, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = 0, wxValidator const& validator = wxDefaultValidator, wxString const& name = wxString::FromAscii(wxControlNameStr)): wxControl(parent, winid, pos, size, style, validator, name)  {  }
  wxControlExtAcceptsFocusFunc m_wxControlExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxControl::AcceptsFocus();
    if (*m_wxControlExtAcceptsFocus != NULL){
      return m_wxControlExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtAcceptsFocusFromKeyboardFunc m_wxControlExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxControl::AcceptsFocusFromKeyboard();
    if (*m_wxControlExtAcceptsFocusFromKeyboard != NULL){
      return m_wxControlExtAcceptsFocusFromKeyboard(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtAcceptsFocusRecursivelyFunc m_wxControlExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxControl::AcceptsFocusRecursively();
    if (*m_wxControlExtAcceptsFocusRecursively != NULL){
      return m_wxControlExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtAddChild__wxWindowBasePFunc m_wxControlExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxControl::AddChild(child);
    if (*m_wxControlExtAddChild__wxWindowBaseP != NULL){
      return m_wxControlExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxControlExtAddPendingEvent__wxEventCRFunc m_wxControlExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxControl::AddPendingEvent(event);
    if (*m_wxControlExtAddPendingEvent__wxEventCR != NULL){
      return m_wxControlExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxControlExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxControlExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxControl::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxControlExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxControlExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxControlExtAdjustForParentClientOrigin__intRintRintFunc m_wxControlExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxControl::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxControlExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxControlExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxControlExtAlwaysShowScrollbars__boolboolFunc m_wxControlExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxControl::AlwaysShowScrollbars(horz, vert);
    if (*m_wxControlExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxControlExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxControlExtAssociateHandle__WXWidgetFunc m_wxControlExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxControl::AssociateHandle(handle);
    if (*m_wxControlExtAssociateHandle__WXWidget != NULL){
      return m_wxControlExtAssociateHandle__WXWidget(this, handle);
    }
  }
  wxControlExtBeginRepositioningChildrenFunc m_wxControlExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxControl::BeginRepositioningChildren();
    if (*m_wxControlExtBeginRepositioningChildren != NULL){
      return m_wxControlExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtCanApplyThemeBorderFunc m_wxControlExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxControl::CanApplyThemeBorder();
    if (*m_wxControlExtCanApplyThemeBorder != NULL){
      return m_wxControlExtCanApplyThemeBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtCanBeFocusedFunc m_wxControlExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxControl::CanBeFocused();
    if (*m_wxControlExtCanBeFocused != NULL){
      return m_wxControlExtCanBeFocused(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtCanBeOutsideClientAreaFunc m_wxControlExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxControl::CanBeOutsideClientArea();
    if (*m_wxControlExtCanBeOutsideClientArea != NULL){
      return m_wxControlExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtCanScroll__intFunc m_wxControlExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxControl::CanScroll(orient);
    if (*m_wxControlExtCanScroll__int != NULL){
      return m_wxControlExtCanScroll__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxControlExtCanSetTransparentFunc m_wxControlExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxControl::CanSetTransparent();
    if (*m_wxControlExtCanSetTransparent != NULL){
      return m_wxControlExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtClearBackgroundFunc m_wxControlExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxControl::ClearBackground();
    if (*m_wxControlExtClearBackground != NULL){
      return m_wxControlExtClearBackground(this);
    }
  }
  wxControlExtClientToWindowSize__wxSizeCRFunc m_wxControlExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxControl::ClientToWindowSize(size);
    if (*m_wxControlExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxControlExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxControlExtCloneRefData__wxObjectRefDataCPFunc m_wxControlExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxControl::CloneRefData(data);
    if (*m_wxControlExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxControlExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxControlExtCommand__wxCommandEventRFunc m_wxControlExtCommand__wxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxControl::Command(event);
    if (*m_wxControlExtCommand__wxCommandEventR != NULL){
      return m_wxControlExtCommand__wxCommandEventR(this, event);
    }
  }
  wxControlExtCreateRefDataFunc m_wxControlExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxControl::CreateRefData();
    if (*m_wxControlExtCreateRefData != NULL){
      return m_wxControlExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDestroyFunc m_wxControlExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxControl::Destroy();
    if (*m_wxControlExtDestroy != NULL){
      return m_wxControlExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDissociateHandleFunc m_wxControlExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxControl::DissociateHandle();
    if (*m_wxControlExtDissociateHandle != NULL){
      return m_wxControlExtDissociateHandle(this);
    }
  }
  wxControlExtDoCaptureMouseFunc m_wxControlExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxControl::DoCaptureMouse();
    if (*m_wxControlExtDoCaptureMouse != NULL){
      return m_wxControlExtDoCaptureMouse(this);
    }
  }
  wxControlExtDoCentre__intFunc m_wxControlExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxControl::DoCentre(dir);
    if (*m_wxControlExtDoCentre__int != NULL){
      return m_wxControlExtDoCentre__int(this, dir);
    }
  }
  wxControlExtDoClientToScreen__intPintPFunc m_wxControlExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxControl::DoClientToScreen(x, y);
    if (*m_wxControlExtDoClientToScreen__intPintP != NULL){
      return m_wxControlExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxControlExtDoEnable__boolFunc m_wxControlExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxControl::DoEnable(enable);
    if (*m_wxControlExtDoEnable__bool != NULL){
      return m_wxControlExtDoEnable__bool(this, enable);
    }
  }
  wxControlExtDoFreezeFunc m_wxControlExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxControl::DoFreeze();
    if (*m_wxControlExtDoFreeze != NULL){
      return m_wxControlExtDoFreeze(this);
    }
  }
  wxControlExtDoGetBestClientHeight__intFunc m_wxControlExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxControl::DoGetBestClientHeight(width);
    if (*m_wxControlExtDoGetBestClientHeight__int != NULL){
      return m_wxControlExtDoGetBestClientHeight__int(this, width, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetBestClientSizeFunc m_wxControlExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxControl::DoGetBestClientSize();
    if (*m_wxControlExtDoGetBestClientSize != NULL){
      return m_wxControlExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetBestClientWidth__intFunc m_wxControlExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxControl::DoGetBestClientWidth(height);
    if (*m_wxControlExtDoGetBestClientWidth__int != NULL){
      return m_wxControlExtDoGetBestClientWidth__int(this, height, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetBestSizeFunc m_wxControlExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxControl::DoGetBestSize();
    if (*m_wxControlExtDoGetBestSize != NULL){
      return m_wxControlExtDoGetBestSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetClientDataFunc m_wxControlExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxControl::DoGetClientData();
    if (*m_wxControlExtDoGetClientData != NULL){
      return m_wxControlExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetClientObjectFunc m_wxControlExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxControl::DoGetClientObject();
    if (*m_wxControlExtDoGetClientObject != NULL){
      return m_wxControlExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetClientSize__intPintPFunc m_wxControlExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxControl::DoGetClientSize(width, height);
    if (*m_wxControlExtDoGetClientSize__intPintP != NULL){
      return m_wxControlExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxControlExtDoGetPosition__intPintPFunc m_wxControlExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxControl::DoGetPosition(x, y);
    if (*m_wxControlExtDoGetPosition__intPintP != NULL){
      return m_wxControlExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxControlExtDoGetScreenPosition__intPintPFunc m_wxControlExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxControl::DoGetScreenPosition(x, y);
    if (*m_wxControlExtDoGetScreenPosition__intPintP != NULL){
      return m_wxControlExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxControlExtDoGetSize__intPintPFunc m_wxControlExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxControl::DoGetSize(width, height);
    if (*m_wxControlExtDoGetSize__intPintP != NULL){
      return m_wxControlExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxControlExtDoGetSizeFromClientSize__wxSizeCRFunc m_wxControlExtDoGetSizeFromClientSize__wxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxControl::DoGetSizeFromClientSize(size);
    if (*m_wxControlExtDoGetSizeFromClientSize__wxSizeCR != NULL){
      return m_wxControlExtDoGetSizeFromClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetSizeFromTextSize__intintFunc m_wxControlExtDoGetSizeFromTextSize__intint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxControl::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxControlExtDoGetSizeFromTextSize__intint != NULL){
      return m_wxControlExtDoGetSizeFromTextSize__intint(this, xlen, ylen, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxControlExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxControl::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxControlExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxControlExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxControlExtDoGetVirtualSizeFunc m_wxControlExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxControl::DoGetVirtualSize();
    if (*m_wxControlExtDoGetVirtualSize != NULL){
      return m_wxControlExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoHitTest__wxCoordwxCoordFunc m_wxControlExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxControl::DoHitTest(x, y);
    if (*m_wxControlExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxControlExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoIsExposed__intintintintFunc m_wxControlExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxControl::DoIsExposed(x, y, w, h);
    if (*m_wxControlExtDoIsExposed__intintintint != NULL){
      return m_wxControlExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoIsExposed__intintFunc m_wxControlExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxControl::DoIsExposed(x, y);
    if (*m_wxControlExtDoIsExposed__intint != NULL){
      return m_wxControlExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxControlExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxControl::DoMoveInTabOrder(win, move);
    if (*m_wxControlExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxControlExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxControlExtDoMoveWindow__intintintintFunc m_wxControlExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxControl::DoMoveWindow(x, y, width, height);
    if (*m_wxControlExtDoMoveWindow__intintintint != NULL){
      return m_wxControlExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxControlExtDoNavigateIn__intFunc m_wxControlExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxControl::DoNavigateIn(flags);
    if (*m_wxControlExtDoNavigateIn__int != NULL){
      return m_wxControlExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoPhase__intFunc m_wxControlExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxControl::DoPhase(phase);
    if (*m_wxControlExtDoPhase__int != NULL){
      return m_wxControlExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoPopupMenu__wxMenuPintintFunc m_wxControlExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxControl::DoPopupMenu(menu, x, y);
    if (*m_wxControlExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxControlExtDoPopupMenu__wxMenuPintint(this, menu, x, y, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoReleaseMouseFunc m_wxControlExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxControl::DoReleaseMouse();
    if (*m_wxControlExtDoReleaseMouse != NULL){
      return m_wxControlExtDoReleaseMouse(this);
    }
  }
  wxControlExtDoScreenToClient__intPintPFunc m_wxControlExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxControl::DoScreenToClient(x, y);
    if (*m_wxControlExtDoScreenToClient__intPintP != NULL){
      return m_wxControlExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxControlExtDoSetClientData__voidPFunc m_wxControlExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxControl::DoSetClientData(data);
    if (*m_wxControlExtDoSetClientData__voidP != NULL){
      return m_wxControlExtDoSetClientData__voidP(this, data);
    }
  }
  wxControlExtDoSetClientObject__wxClientDataPFunc m_wxControlExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxControl::DoSetClientObject(data);
    if (*m_wxControlExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxControlExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxControlExtDoSetClientSize__intintFunc m_wxControlExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxControl::DoSetClientSize(width, height);
    if (*m_wxControlExtDoSetClientSize__intint != NULL){
      return m_wxControlExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxControlExtDoSetLabelMarkup__wxStringCRFunc m_wxControlExtDoSetLabelMarkup__wxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxControl::DoSetLabelMarkup(markup);
    if (*m_wxControlExtDoSetLabelMarkup__wxStringCR != NULL){
      return m_wxControlExtDoSetLabelMarkup__wxStringCR(this, markup, res);
    }
    else {
      return res;
    }
  }
  wxControlExtDoSetSize__intintintintintFunc m_wxControlExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxControl::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxControlExtDoSetSize__intintintintint != NULL){
      return m_wxControlExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxControlExtDoSetSizeHints__intintintintintintFunc m_wxControlExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxControl::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxControlExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxControlExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxControlExtDoSetToolTip__wxToolTipPFunc m_wxControlExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxControl::DoSetToolTip(tip);
    if (*m_wxControlExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxControlExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxControlExtDoSetToolTipText__wxStringCRFunc m_wxControlExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxControl::DoSetToolTipText(tip);
    if (*m_wxControlExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxControlExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxControlExtDoSetVirtualSize__intintFunc m_wxControlExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxControl::DoSetVirtualSize(x, y);
    if (*m_wxControlExtDoSetVirtualSize__intint != NULL){
      return m_wxControlExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxControlExtDoSetWindowVariant__wxWindowVariantFunc m_wxControlExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxControl::DoSetWindowVariant(variant);
    if (*m_wxControlExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxControlExtDoSetWindowVariant__wxWindowVariant(this, variant);
    }
  }
  wxControlExtDoThawFunc m_wxControlExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxControl::DoThaw();
    if (*m_wxControlExtDoThaw != NULL){
      return m_wxControlExtDoThaw(this);
    }
  }
  wxControlExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxControlExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxControl::DoUpdateWindowUI(event);
    if (*m_wxControlExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxControlExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxControlExtDragAcceptFiles__boolFunc m_wxControlExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxControl::DragAcceptFiles(accept);
    if (*m_wxControlExtDragAcceptFiles__bool != NULL){
      return m_wxControlExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxControlExtEnable__boolFunc m_wxControlExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxControl::Enable(enable);
    if (*m_wxControlExtEnable__bool != NULL){
      return m_wxControlExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxControlExtEnableTouchEvents__intFunc m_wxControlExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxControl::EnableTouchEvents(eventsMask);
    if (*m_wxControlExtEnableTouchEvents__int != NULL){
      return m_wxControlExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxControlExtEnableVisibleFocus__boolFunc m_wxControlExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxControl::EnableVisibleFocus(enabled);
    if (*m_wxControlExtEnableVisibleFocus__bool != NULL){
      return m_wxControlExtEnableVisibleFocus__bool(this, enabled);
    }
  }
  wxControlExtEndRepositioningChildrenFunc m_wxControlExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxControl::EndRepositioningChildren();
    if (*m_wxControlExtEndRepositioningChildren != NULL){
      return m_wxControlExtEndRepositioningChildren(this);
    }
  }
  wxControlExtFitFunc m_wxControlExtFit = NULL;
  virtual void Fit() override
  {
    wxControl::Fit();
    if (*m_wxControlExtFit != NULL){
      return m_wxControlExtFit(this);
    }
  }
  wxControlExtFitInsideFunc m_wxControlExtFitInside = NULL;
  virtual void FitInside() override
  {
    wxControl::FitInside();
    if (*m_wxControlExtFitInside != NULL){
      return m_wxControlExtFitInside(this);
    }
  }
  wxControlExtGetBestVirtualSizeFunc m_wxControlExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxControl::GetBestVirtualSize();
    if (*m_wxControlExtGetBestVirtualSize != NULL){
      return m_wxControlExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetCharHeightFunc m_wxControlExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxControl::GetCharHeight();
    if (*m_wxControlExtGetCharHeight != NULL){
      return m_wxControlExtGetCharHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetCharWidthFunc m_wxControlExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxControl::GetCharWidth();
    if (*m_wxControlExtGetCharWidth != NULL){
      return m_wxControlExtGetCharWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetClassInfoFunc m_wxControlExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxControl::GetClassInfo();
    if (*m_wxControlExtGetClassInfo != NULL){
      return m_wxControlExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetClientAreaOriginFunc m_wxControlExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxControl::GetClientAreaOrigin();
    if (*m_wxControlExtGetClientAreaOrigin != NULL){
      return m_wxControlExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetClientSizeConstraint__intPintPFunc m_wxControlExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxControl::GetClientSizeConstraint(w, h);
    if (*m_wxControlExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxControlExtGetClientSizeConstraint__intPintP(this, w, h);
    }
  }
  wxControlExtGetContentScaleFactorFunc m_wxControlExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxControl::GetContentScaleFactor();
    if (*m_wxControlExtGetContentScaleFactor != NULL){
      return m_wxControlExtGetContentScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetDPIFunc m_wxControlExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxControl::GetDPI();
    if (*m_wxControlExtGetDPI != NULL){
      return m_wxControlExtGetDPI(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetDPIScaleFactorFunc m_wxControlExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxControl::GetDPIScaleFactor();
    if (*m_wxControlExtGetDPIScaleFactor != NULL){
      return m_wxControlExtGetDPIScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetDefaultAttributesFunc m_wxControlExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxControl::GetDefaultAttributes();
    if (*m_wxControlExtGetDefaultAttributes != NULL){
      return m_wxControlExtGetDefaultAttributes(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetDefaultBorderFunc m_wxControlExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxControl::GetDefaultBorder();
    if (*m_wxControlExtGetDefaultBorder != NULL){
      return m_wxControlExtGetDefaultBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetDefaultBorderForControlFunc m_wxControlExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxControl::GetDefaultBorderForControl();
    if (*m_wxControlExtGetDefaultBorderForControl != NULL){
      return m_wxControlExtGetDefaultBorderForControl(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetDropTargetFunc m_wxControlExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxControl::GetDropTarget();
    if (*m_wxControlExtGetDropTarget != NULL){
      return m_wxControlExtGetDropTarget(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetEffectiveMinSizeFunc m_wxControlExtGetEffectiveMinSize = NULL;
  virtual wxSize GetEffectiveMinSize() const override
  {
    wxSize res = wxControl::GetEffectiveMinSize();
    if (*m_wxControlExtGetEffectiveMinSize != NULL){
      return m_wxControlExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetEventHashTableFunc m_wxControlExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxControl::GetEventHashTable();
    if (*m_wxControlExtGetEventHashTable != NULL){
      return m_wxControlExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetEventTableFunc m_wxControlExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxControl::GetEventTable();
    if (*m_wxControlExtGetEventTable != NULL){
      return m_wxControlExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetHandleFunc m_wxControlExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxControl::GetHandle();
    if (*m_wxControlExtGetHandle != NULL){
      return m_wxControlExtGetHandle(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxControlExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxControl::GetHelpTextAtPoint(pt, origin);
    if (*m_wxControlExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxControlExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetLabelFunc m_wxControlExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxControl::GetLabel();
    if (*m_wxControlExtGetLabel != NULL){
      return m_wxControlExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetLabelTextFunc m_wxControlExtGetLabelText = NULL;
  virtual wxString GetLabelText() const override
  {
    wxString res = wxControl::GetLabelText();
    if (*m_wxControlExtGetLabelText != NULL){
      return m_wxControlExtGetLabelText(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetLayoutDirectionFunc m_wxControlExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxControl::GetLayoutDirection();
    if (*m_wxControlExtGetLayoutDirection != NULL){
      return m_wxControlExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetMainWindowOfCompositeControlFunc m_wxControlExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxControl::GetMainWindowOfCompositeControl();
    if (*m_wxControlExtGetMainWindowOfCompositeControl != NULL){
      return m_wxControlExtGetMainWindowOfCompositeControl(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetMaxClientSizeFunc m_wxControlExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxControl::GetMaxClientSize();
    if (*m_wxControlExtGetMaxClientSize != NULL){
      return m_wxControlExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetMaxSizeFunc m_wxControlExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxControl::GetMaxSize();
    if (*m_wxControlExtGetMaxSize != NULL){
      return m_wxControlExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetMinClientSizeFunc m_wxControlExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxControl::GetMinClientSize();
    if (*m_wxControlExtGetMinClientSize != NULL){
      return m_wxControlExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetMinSizeFunc m_wxControlExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxControl::GetMinSize();
    if (*m_wxControlExtGetMinSize != NULL){
      return m_wxControlExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetNameFunc m_wxControlExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxControl::GetName();
    if (*m_wxControlExtGetName != NULL){
      return m_wxControlExtGetName(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetPositionConstraint__intPintPFunc m_wxControlExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxControl::GetPositionConstraint(x, y);
    if (*m_wxControlExtGetPositionConstraint__intPintP != NULL){
      return m_wxControlExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxControlExtGetScrollPos__intFunc m_wxControlExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxControl::GetScrollPos(orient);
    if (*m_wxControlExtGetScrollPos__int != NULL){
      return m_wxControlExtGetScrollPos__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetScrollRange__intFunc m_wxControlExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxControl::GetScrollRange(orient);
    if (*m_wxControlExtGetScrollRange__int != NULL){
      return m_wxControlExtGetScrollRange__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetScrollThumb__intFunc m_wxControlExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxControl::GetScrollThumb(orient);
    if (*m_wxControlExtGetScrollThumb__int != NULL){
      return m_wxControlExtGetScrollThumb__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetSizeConstraint__intPintPFunc m_wxControlExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxControl::GetSizeConstraint(w, h);
    if (*m_wxControlExtGetSizeConstraint__intPintP != NULL){
      return m_wxControlExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxControlExtGetThemeEnabledFunc m_wxControlExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxControl::GetThemeEnabled();
    if (*m_wxControlExtGetThemeEnabled != NULL){
      return m_wxControlExtGetThemeEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetTransparentFunc m_wxControlExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxControl::GetTransparent();
    if (*m_wxControlExtGetTransparent != NULL){
      return m_wxControlExtGetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetValidatorFunc m_wxControlExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxControl::GetValidator();
    if (*m_wxControlExtGetValidator != NULL){
      return m_wxControlExtGetValidator(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetWindowBorderSizeFunc m_wxControlExtGetWindowBorderSize = NULL;
  virtual wxSize GetWindowBorderSize() const override
  {
    wxSize res = wxControl::GetWindowBorderSize();
    if (*m_wxControlExtGetWindowBorderSize != NULL){
      return m_wxControlExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtGetWindowStyleFlagFunc m_wxControlExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxControl::GetWindowStyleFlag();
    if (*m_wxControlExtGetWindowStyleFlag != NULL){
      return m_wxControlExtGetWindowStyleFlag(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtHasCaptureFunc m_wxControlExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxControl::HasCapture();
    if (*m_wxControlExtHasCapture != NULL){
      return m_wxControlExtHasCapture(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtHasFocusFunc m_wxControlExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxControl::HasFocus();
    if (*m_wxControlExtHasFocus != NULL){
      return m_wxControlExtHasFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtHasMultiplePagesFunc m_wxControlExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxControl::HasMultiplePages();
    if (*m_wxControlExtHasMultiplePages != NULL){
      return m_wxControlExtHasMultiplePages(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtHasTransparentBackgroundFunc m_wxControlExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxControl::HasTransparentBackground();
    if (*m_wxControlExtHasTransparentBackground != NULL){
      return m_wxControlExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtHideWithEffect__wxShowEffectunsignedintFunc m_wxControlExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxControl::HideWithEffect(effect, timeout);
    if (*m_wxControlExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxControlExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxControlExtInformFirstDirection__intintintFunc m_wxControlExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxControl::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxControlExtInformFirstDirection__intintint != NULL){
      return m_wxControlExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxControlExtInheritAttributesFunc m_wxControlExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxControl::InheritAttributes();
    if (*m_wxControlExtInheritAttributes != NULL){
      return m_wxControlExtInheritAttributes(this);
    }
  }
  wxControlExtInitDialogFunc m_wxControlExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxControl::InitDialog();
    if (*m_wxControlExtInitDialog != NULL){
      return m_wxControlExtInitDialog(this);
    }
  }
  wxControlExtIsClientAreaChild__wxWindowCPFunc m_wxControlExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxControl::IsClientAreaChild(child);
    if (*m_wxControlExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxControlExtIsClientAreaChild__wxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxControlExtIsDoubleBufferedFunc m_wxControlExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxControl::IsDoubleBuffered();
    if (*m_wxControlExtIsDoubleBuffered != NULL){
      return m_wxControlExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtIsRetainedFunc m_wxControlExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxControl::IsRetained();
    if (*m_wxControlExtIsRetained != NULL){
      return m_wxControlExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtIsScrollbarAlwaysShown__intFunc m_wxControlExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxControl::IsScrollbarAlwaysShown(orient);
    if (*m_wxControlExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxControlExtIsScrollbarAlwaysShown__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxControlExtIsShownFunc m_wxControlExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxControl::IsShown();
    if (*m_wxControlExtIsShown != NULL){
      return m_wxControlExtIsShown(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtIsShownOnScreenFunc m_wxControlExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxControl::IsShownOnScreen();
    if (*m_wxControlExtIsShownOnScreen != NULL){
      return m_wxControlExtIsShownOnScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtIsThisEnabledFunc m_wxControlExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxControl::IsThisEnabled();
    if (*m_wxControlExtIsThisEnabled != NULL){
      return m_wxControlExtIsThisEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtIsTopLevelFunc m_wxControlExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxControl::IsTopLevel();
    if (*m_wxControlExtIsTopLevel != NULL){
      return m_wxControlExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxControlExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxControl::IsTopNavigationDomain(kind);
    if (*m_wxControlExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxControlExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxControlExtIsTransparentBackgroundSupported__wxStringPFunc m_wxControlExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxControl::IsTransparentBackgroundSupported(reason);
    if (*m_wxControlExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxControlExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxControlExtLayoutFunc m_wxControlExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxControl::Layout();
    if (*m_wxControlExtLayout != NULL){
      return m_wxControlExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtLayoutPhase1__intPFunc m_wxControlExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxControl::LayoutPhase1(noChanges);
    if (*m_wxControlExtLayoutPhase1__intP != NULL){
      return m_wxControlExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxControlExtLayoutPhase2__intPFunc m_wxControlExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxControl::LayoutPhase2(noChanges);
    if (*m_wxControlExtLayoutPhase2__intP != NULL){
      return m_wxControlExtLayoutPhase2__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxControlExtLowerFunc m_wxControlExtLower = NULL;
  virtual void Lower() override
  {
    wxControl::Lower();
    if (*m_wxControlExtLower != NULL){
      return m_wxControlExtLower(this);
    }
  }
  wxControlExtMoveConstraint__intintFunc m_wxControlExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxControl::MoveConstraint(x, y);
    if (*m_wxControlExtMoveConstraint__intint != NULL){
      return m_wxControlExtMoveConstraint__intint(this, x, y);
    }
  }
  wxControlExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxControlExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxControl::OnDynamicBind(entry);
    if (*m_wxControlExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxControlExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxControlExtOnInternalIdleFunc m_wxControlExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxControl::OnInternalIdle();
    if (*m_wxControlExtOnInternalIdle != NULL){
      return m_wxControlExtOnInternalIdle(this);
    }
  }
  wxControlExtPrepareDC__wxDCRFunc m_wxControlExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxControl::PrepareDC(dc);
    if (*m_wxControlExtPrepareDC__wxDCR != NULL){
      return m_wxControlExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxControlExtProcessEvent__wxEventRFunc m_wxControlExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxControl::ProcessEvent(event);
    if (*m_wxControlExtProcessEvent__wxEventR != NULL){
      return m_wxControlExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxControlExtQueueEvent__wxEventPFunc m_wxControlExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxControl::QueueEvent(event);
    if (*m_wxControlExtQueueEvent__wxEventP != NULL){
      return m_wxControlExtQueueEvent__wxEventP(this, event);
    }
  }
  wxControlExtRaiseFunc m_wxControlExtRaise = NULL;
  virtual void Raise() override
  {
    wxControl::Raise();
    if (*m_wxControlExtRaise != NULL){
      return m_wxControlExtRaise(this);
    }
  }
  wxControlExtRefresh__boolwxRectCPFunc m_wxControlExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxControl::Refresh(eraseBackground, rect);
    if (*m_wxControlExtRefresh__boolwxRectCP != NULL){
      return m_wxControlExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxControlExtRegisterHotKey__intintintFunc m_wxControlExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxControl::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxControlExtRegisterHotKey__intintint != NULL){
      return m_wxControlExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxControlExtRemoveChild__wxWindowBasePFunc m_wxControlExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxControl::RemoveChild(child);
    if (*m_wxControlExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxControlExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxControlExtReparent__wxWindowBasePFunc m_wxControlExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxControl::Reparent(newParent);
    if (*m_wxControlExtReparent__wxWindowBaseP != NULL){
      return m_wxControlExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxControlExtScrollLines__intFunc m_wxControlExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxControl::ScrollLines(lines);
    if (*m_wxControlExtScrollLines__int != NULL){
      return m_wxControlExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxControlExtScrollPages__intFunc m_wxControlExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxControl::ScrollPages(pages);
    if (*m_wxControlExtScrollPages__int != NULL){
      return m_wxControlExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxControlExtScrollWindow__intintwxRectCPFunc m_wxControlExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxControl::ScrollWindow(dx, dy, rect);
    if (*m_wxControlExtScrollWindow__intintwxRectCP != NULL){
      return m_wxControlExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxControlExtSearchEventTable__wxEventTableRwxEventRFunc m_wxControlExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxControl::SearchEventTable(table, event);
    if (*m_wxControlExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxControlExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxControlExtSendIdleEvents__wxIdleEventRFunc m_wxControlExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxControl::SendIdleEvents(event);
    if (*m_wxControlExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxControlExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxControlExtSendSizeEvent__intFunc m_wxControlExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxControl::SendSizeEvent(flags);
    if (*m_wxControlExtSendSizeEvent__int != NULL){
      return m_wxControlExtSendSizeEvent__int(this, flags);
    }
  }
  wxControlExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxControlExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxControl::SetAcceleratorTable(accel);
    if (*m_wxControlExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxControlExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxControlExtSetBackgroundColour__wxColourCRFunc m_wxControlExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxControl::SetBackgroundColour(colour);
    if (*m_wxControlExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxControlExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxControlExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxControlExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxControl::SetBackgroundStyle(style);
    if (*m_wxControlExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxControlExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxControlExtSetCanFocus__boolFunc m_wxControlExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxControl::SetCanFocus(canFocus);
    if (*m_wxControlExtSetCanFocus__bool != NULL){
      return m_wxControlExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxControlExtSetConstraintSizes__boolFunc m_wxControlExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxControl::SetConstraintSizes(recurse);
    if (*m_wxControlExtSetConstraintSizes__bool != NULL){
      return m_wxControlExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxControlExtSetCursor__wxCursorCRFunc m_wxControlExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxControl::SetCursor(cursor);
    if (*m_wxControlExtSetCursor__wxCursorCR != NULL){
      return m_wxControlExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxControlExtSetDoubleBuffered__boolFunc m_wxControlExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxControl::SetDoubleBuffered(on);
    if (*m_wxControlExtSetDoubleBuffered__bool != NULL){
      return m_wxControlExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxControlExtSetDropTarget__wxDropTargetPFunc m_wxControlExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxControl::SetDropTarget(dropTarget);
    if (*m_wxControlExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxControlExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxControlExtSetExtraStyle__longFunc m_wxControlExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxControl::SetExtraStyle(exStyle);
    if (*m_wxControlExtSetExtraStyle__long != NULL){
      return m_wxControlExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxControlExtSetFocusFunc m_wxControlExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxControl::SetFocus();
    if (*m_wxControlExtSetFocus != NULL){
      return m_wxControlExtSetFocus(this);
    }
  }
  wxControlExtSetFocusFromKbdFunc m_wxControlExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxControl::SetFocusFromKbd();
    if (*m_wxControlExtSetFocusFromKbd != NULL){
      return m_wxControlExtSetFocusFromKbd(this);
    }
  }
  wxControlExtSetFont__wxFontCRFunc m_wxControlExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxControl::SetFont(font);
    if (*m_wxControlExtSetFont__wxFontCR != NULL){
      return m_wxControlExtSetFont__wxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxControlExtSetForegroundColour__wxColourCRFunc m_wxControlExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxControl::SetForegroundColour(colour);
    if (*m_wxControlExtSetForegroundColour__wxColourCR != NULL){
      return m_wxControlExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxControlExtSetId__wxWindowIDFunc m_wxControlExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxControl::SetId(winid);
    if (*m_wxControlExtSetId__wxWindowID != NULL){
      return m_wxControlExtSetId__wxWindowID(this, winid);
    }
  }
  wxControlExtSetLabel__wxStringCRFunc m_wxControlExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxControl::SetLabel(label);
    if (*m_wxControlExtSetLabel__wxStringCR != NULL){
      return m_wxControlExtSetLabel__wxStringCR(this, label);
    }
  }
  wxControlExtSetLabelText__wxStringCRFunc m_wxControlExtSetLabelText__wxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxControl::SetLabelText(text);
    if (*m_wxControlExtSetLabelText__wxStringCR != NULL){
      return m_wxControlExtSetLabelText__wxStringCR(this, text);
    }
  }
  wxControlExtSetLayoutDirection__wxLayoutDirectionFunc m_wxControlExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxControl::SetLayoutDirection(dir);
    if (*m_wxControlExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxControlExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxControlExtSetMaxClientSize__wxSizeCRFunc m_wxControlExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxControl::SetMaxClientSize(size);
    if (*m_wxControlExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxControlExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxControlExtSetMaxSize__wxSizeCRFunc m_wxControlExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxControl::SetMaxSize(maxSize);
    if (*m_wxControlExtSetMaxSize__wxSizeCR != NULL){
      return m_wxControlExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxControlExtSetMinClientSize__wxSizeCRFunc m_wxControlExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxControl::SetMinClientSize(size);
    if (*m_wxControlExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxControlExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxControlExtSetMinSize__wxSizeCRFunc m_wxControlExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxControl::SetMinSize(minSize);
    if (*m_wxControlExtSetMinSize__wxSizeCR != NULL){
      return m_wxControlExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxControlExtSetName__wxStringCRFunc m_wxControlExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxControl::SetName(name);
    if (*m_wxControlExtSetName__wxStringCR != NULL){
      return m_wxControlExtSetName__wxStringCR(this, name);
    }
  }
  wxControlExtSetNextHandler__wxEvtHandlerPFunc m_wxControlExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxControl::SetNextHandler(handler);
    if (*m_wxControlExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxControlExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxControlExtSetPreviousHandler__wxEvtHandlerPFunc m_wxControlExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxControl::SetPreviousHandler(handler);
    if (*m_wxControlExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxControlExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxControlExtSetScrollPos__intintboolFunc m_wxControlExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxControl::SetScrollPos(orient, pos, refresh);
    if (*m_wxControlExtSetScrollPos__intintbool != NULL){
      return m_wxControlExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxControlExtSetScrollbar__intintintintboolFunc m_wxControlExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxControl::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxControlExtSetScrollbar__intintintintbool != NULL){
      return m_wxControlExtSetScrollbar__intintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxControlExtSetSizeConstraint__intintintintFunc m_wxControlExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxControl::SetSizeConstraint(x, y, w, h);
    if (*m_wxControlExtSetSizeConstraint__intintintint != NULL){
      return m_wxControlExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxControlExtSetSizeHints__intintintintintintFunc m_wxControlExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxControl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxControlExtSetSizeHints__intintintintintint != NULL){
      return m_wxControlExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxControlExtSetThemeEnabled__boolFunc m_wxControlExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxControl::SetThemeEnabled(enableTheme);
    if (*m_wxControlExtSetThemeEnabled__bool != NULL){
      return m_wxControlExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxControlExtSetTransparent__wxByteFunc m_wxControlExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxControl::SetTransparent(alpha);
    if (*m_wxControlExtSetTransparent__wxByte != NULL){
      return m_wxControlExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxControlExtSetValidator__wxValidatorCRFunc m_wxControlExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxControl::SetValidator(validator);
    if (*m_wxControlExtSetValidator__wxValidatorCR != NULL){
      return m_wxControlExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxControlExtSetWindowStyleFlag__longFunc m_wxControlExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxControl::SetWindowStyleFlag(style);
    if (*m_wxControlExtSetWindowStyleFlag__long != NULL){
      return m_wxControlExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxControlExtShouldInheritColoursFunc m_wxControlExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxControl::ShouldInheritColours();
    if (*m_wxControlExtShouldInheritColours != NULL){
      return m_wxControlExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtShow__boolFunc m_wxControlExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxControl::Show(show);
    if (*m_wxControlExtShow__bool != NULL){
      return m_wxControlExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxControlExtShowWithEffect__wxShowEffectunsignedintFunc m_wxControlExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxControl::ShowWithEffect(effect, timeout);
    if (*m_wxControlExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxControlExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxControlExtTransferDataFromWindowFunc m_wxControlExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxControl::TransferDataFromWindow();
    if (*m_wxControlExtTransferDataFromWindow != NULL){
      return m_wxControlExtTransferDataFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtTransferDataToWindowFunc m_wxControlExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxControl::TransferDataToWindow();
    if (*m_wxControlExtTransferDataToWindow != NULL){
      return m_wxControlExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtTriggerScrollEvent__wxEventTypeFunc m_wxControlExtTriggerScrollEvent__wxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxControl::TriggerScrollEvent(scrollEvent);
    if (*m_wxControlExtTriggerScrollEvent__wxEventType != NULL){
      return m_wxControlExtTriggerScrollEvent__wxEventType(this, scrollEvent);
    }
  }
  wxControlExtTryAfter__wxEventRFunc m_wxControlExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxControl::TryAfter(event);
    if (*m_wxControlExtTryAfter__wxEventR != NULL){
      return m_wxControlExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxControlExtTryBefore__wxEventRFunc m_wxControlExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxControl::TryBefore(event);
    if (*m_wxControlExtTryBefore__wxEventR != NULL){
      return m_wxControlExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxControlExtUnregisterHotKey__intFunc m_wxControlExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxControl::UnregisterHotKey(hotkeyId);
    if (*m_wxControlExtUnregisterHotKey__int != NULL){
      return m_wxControlExtUnregisterHotKey__int(this, hotkeyId, res);
    }
    else {
      return res;
    }
  }
  wxControlExtUpdateFunc m_wxControlExtUpdate = NULL;
  virtual void Update() override
  {
    wxControl::Update();
    if (*m_wxControlExtUpdate != NULL){
      return m_wxControlExtUpdate(this);
    }
  }
  wxControlExtUpdateWindowUI__longFunc m_wxControlExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxControl::UpdateWindowUI(flags);
    if (*m_wxControlExtUpdateWindowUI__long != NULL){
      return m_wxControlExtUpdateWindowUI__long(this, flags);
    }
  }
  wxControlExtValidateFunc m_wxControlExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxControl::Validate();
    if (*m_wxControlExtValidate != NULL){
      return m_wxControlExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxControlExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxControl::WXAdjustFontToOwnPPI(font);
    if (*m_wxControlExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxControlExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxControlExtWXGetTextEntryFunc m_wxControlExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxControl::WXGetTextEntry();
    if (*m_wxControlExtWXGetTextEntry != NULL){
      return m_wxControlExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxControlExtWXReservedEvtHandler1__voidPFunc m_wxControlExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxControl::WXReservedEvtHandler1(param0);
    if (*m_wxControlExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxControlExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxControlExtWXReservedEvtHandler2__voidPFunc m_wxControlExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxControl::WXReservedEvtHandler2(param0);
    if (*m_wxControlExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxControlExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxControlExtWXReservedWindow1__voidPFunc m_wxControlExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxControl::WXReservedWindow1(param0);
    if (*m_wxControlExtWXReservedWindow1__voidP != NULL){
      return m_wxControlExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxControlExtWXReservedWindow2__voidPFunc m_wxControlExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxControl::WXReservedWindow2(param0);
    if (*m_wxControlExtWXReservedWindow2__voidP != NULL){
      return m_wxControlExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxControlExtWXReservedWindow3__voidPFunc m_wxControlExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxControl::WXReservedWindow3(param0);
    if (*m_wxControlExtWXReservedWindow3__voidP != NULL){
      return m_wxControlExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxControlExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxControlExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxControl::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxControlExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxControlExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxControlExtWarpPointer__intintFunc m_wxControlExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxControl::WarpPointer(x, y);
    if (*m_wxControlExtWarpPointer__intint != NULL){
      return m_wxControlExtWarpPointer__intint(this, x, y);
    }
  }
  wxControlExtWindowToClientSize__wxSizeCRFunc m_wxControlExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxControl::WindowToClientSize(size);
    if (*m_wxControlExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxControlExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxControlExt(wxControlExtAcceptsFocusFunc a_AcceptsFocus, wxControlExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxControlExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxControlExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxControlExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxControlExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxControlExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxControlExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxControlExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxControlExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxControlExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxControlExtCanBeFocusedFunc a_CanBeFocused, wxControlExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxControlExtCanScroll__intFunc a_CanScroll__int, wxControlExtCanSetTransparentFunc a_CanSetTransparent, wxControlExtClearBackgroundFunc a_ClearBackground, wxControlExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxControlExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxControlExtCommand__wxCommandEventRFunc a_Command__wxCommandEventR, wxControlExtCreateRefDataFunc a_CreateRefData, wxControlExtDestroyFunc a_Destroy, wxControlExtDissociateHandleFunc a_DissociateHandle, wxControlExtDoCaptureMouseFunc a_DoCaptureMouse, wxControlExtDoCentre__intFunc a_DoCentre__int, wxControlExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxControlExtDoEnable__boolFunc a_DoEnable__bool, wxControlExtDoFreezeFunc a_DoFreeze, wxControlExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxControlExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxControlExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxControlExtDoGetBestSizeFunc a_DoGetBestSize, wxControlExtDoGetClientDataFunc a_DoGetClientData, wxControlExtDoGetClientObjectFunc a_DoGetClientObject, wxControlExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxControlExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxControlExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxControlExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxControlExtDoGetSizeFromClientSize__wxSizeCRFunc a_DoGetSizeFromClientSize__wxSizeCR, wxControlExtDoGetSizeFromTextSize__intintFunc a_DoGetSizeFromTextSize__intint, wxControlExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxControlExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxControlExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxControlExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxControlExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxControlExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxControlExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxControlExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxControlExtDoPhase__intFunc a_DoPhase__int, wxControlExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxControlExtDoReleaseMouseFunc a_DoReleaseMouse, wxControlExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxControlExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxControlExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxControlExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxControlExtDoSetLabelMarkup__wxStringCRFunc a_DoSetLabelMarkup__wxStringCR, wxControlExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxControlExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxControlExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxControlExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxControlExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxControlExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxControlExtDoThawFunc a_DoThaw, wxControlExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxControlExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxControlExtEnable__boolFunc a_Enable__bool, wxControlExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxControlExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxControlExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxControlExtFitFunc a_Fit, wxControlExtFitInsideFunc a_FitInside, wxControlExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxControlExtGetCharHeightFunc a_GetCharHeight, wxControlExtGetCharWidthFunc a_GetCharWidth, wxControlExtGetClassInfoFunc a_GetClassInfo, wxControlExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxControlExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxControlExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxControlExtGetDPIFunc a_GetDPI, wxControlExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxControlExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxControlExtGetDefaultBorderFunc a_GetDefaultBorder, wxControlExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxControlExtGetDropTargetFunc a_GetDropTarget, wxControlExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxControlExtGetEventHashTableFunc a_GetEventHashTable, wxControlExtGetEventTableFunc a_GetEventTable, wxControlExtGetHandleFunc a_GetHandle, wxControlExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxControlExtGetLabelFunc a_GetLabel, wxControlExtGetLabelTextFunc a_GetLabelText, wxControlExtGetLayoutDirectionFunc a_GetLayoutDirection, wxControlExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxControlExtGetMaxClientSizeFunc a_GetMaxClientSize, wxControlExtGetMaxSizeFunc a_GetMaxSize, wxControlExtGetMinClientSizeFunc a_GetMinClientSize, wxControlExtGetMinSizeFunc a_GetMinSize, wxControlExtGetNameFunc a_GetName, wxControlExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxControlExtGetScrollPos__intFunc a_GetScrollPos__int, wxControlExtGetScrollRange__intFunc a_GetScrollRange__int, wxControlExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxControlExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxControlExtGetThemeEnabledFunc a_GetThemeEnabled, wxControlExtGetTransparentFunc a_GetTransparent, wxControlExtGetValidatorFunc a_GetValidator, wxControlExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxControlExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxControlExtHasCaptureFunc a_HasCapture, wxControlExtHasFocusFunc a_HasFocus, wxControlExtHasMultiplePagesFunc a_HasMultiplePages, wxControlExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxControlExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxControlExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxControlExtInheritAttributesFunc a_InheritAttributes, wxControlExtInitDialogFunc a_InitDialog, wxControlExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxControlExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxControlExtIsRetainedFunc a_IsRetained, wxControlExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxControlExtIsShownFunc a_IsShown, wxControlExtIsShownOnScreenFunc a_IsShownOnScreen, wxControlExtIsThisEnabledFunc a_IsThisEnabled, wxControlExtIsTopLevelFunc a_IsTopLevel, wxControlExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxControlExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxControlExtLayoutFunc a_Layout, wxControlExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxControlExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxControlExtLowerFunc a_Lower, wxControlExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxControlExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxControlExtOnInternalIdleFunc a_OnInternalIdle, wxControlExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxControlExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxControlExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxControlExtRaiseFunc a_Raise, wxControlExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxControlExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxControlExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxControlExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxControlExtScrollLines__intFunc a_ScrollLines__int, wxControlExtScrollPages__intFunc a_ScrollPages__int, wxControlExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxControlExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxControlExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxControlExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxControlExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxControlExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxControlExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxControlExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxControlExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxControlExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxControlExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxControlExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxControlExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxControlExtSetFocusFunc a_SetFocus, wxControlExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxControlExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxControlExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxControlExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxControlExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxControlExtSetLabelText__wxStringCRFunc a_SetLabelText__wxStringCR, wxControlExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxControlExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxControlExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxControlExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxControlExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxControlExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxControlExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxControlExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxControlExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxControlExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxControlExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxControlExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxControlExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxControlExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxControlExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxControlExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxControlExtShouldInheritColoursFunc a_ShouldInheritColours, wxControlExtShow__boolFunc a_Show__bool, wxControlExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxControlExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxControlExtTransferDataToWindowFunc a_TransferDataToWindow, wxControlExtTriggerScrollEvent__wxEventTypeFunc a_TriggerScrollEvent__wxEventType, wxControlExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxControlExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxControlExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxControlExtUpdateFunc a_Update, wxControlExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxControlExtValidateFunc a_Validate, wxControlExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxControlExtWXGetTextEntryFunc a_WXGetTextEntry, wxControlExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxControlExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxControlExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxControlExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxControlExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxControlExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxControlExtWarpPointer__intintFunc a_WarpPointer__intint, wxControlExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxControl() {
    m_wxControlExtAcceptsFocus = a_AcceptsFocus;
    m_wxControlExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxControlExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxControlExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxControlExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxControlExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxControlExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxControlExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxControlExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxControlExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxControlExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxControlExtCanBeFocused = a_CanBeFocused;
    m_wxControlExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxControlExtCanScroll__int = a_CanScroll__int;
    m_wxControlExtCanSetTransparent = a_CanSetTransparent;
    m_wxControlExtClearBackground = a_ClearBackground;
    m_wxControlExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxControlExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxControlExtCommand__wxCommandEventR = a_Command__wxCommandEventR;
    m_wxControlExtCreateRefData = a_CreateRefData;
    m_wxControlExtDestroy = a_Destroy;
    m_wxControlExtDissociateHandle = a_DissociateHandle;
    m_wxControlExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxControlExtDoCentre__int = a_DoCentre__int;
    m_wxControlExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxControlExtDoEnable__bool = a_DoEnable__bool;
    m_wxControlExtDoFreeze = a_DoFreeze;
    m_wxControlExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxControlExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxControlExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxControlExtDoGetBestSize = a_DoGetBestSize;
    m_wxControlExtDoGetClientData = a_DoGetClientData;
    m_wxControlExtDoGetClientObject = a_DoGetClientObject;
    m_wxControlExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxControlExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxControlExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxControlExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxControlExtDoGetSizeFromClientSize__wxSizeCR = a_DoGetSizeFromClientSize__wxSizeCR;
    m_wxControlExtDoGetSizeFromTextSize__intint = a_DoGetSizeFromTextSize__intint;
    m_wxControlExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxControlExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxControlExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxControlExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxControlExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxControlExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxControlExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxControlExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxControlExtDoPhase__int = a_DoPhase__int;
    m_wxControlExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxControlExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxControlExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxControlExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxControlExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxControlExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxControlExtDoSetLabelMarkup__wxStringCR = a_DoSetLabelMarkup__wxStringCR;
    m_wxControlExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxControlExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxControlExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxControlExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxControlExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxControlExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxControlExtDoThaw = a_DoThaw;
    m_wxControlExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxControlExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxControlExtEnable__bool = a_Enable__bool;
    m_wxControlExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxControlExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxControlExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxControlExtFit = a_Fit;
    m_wxControlExtFitInside = a_FitInside;
    m_wxControlExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxControlExtGetCharHeight = a_GetCharHeight;
    m_wxControlExtGetCharWidth = a_GetCharWidth;
    m_wxControlExtGetClassInfo = a_GetClassInfo;
    m_wxControlExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxControlExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
    m_wxControlExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxControlExtGetDPI = a_GetDPI;
    m_wxControlExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxControlExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxControlExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxControlExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxControlExtGetDropTarget = a_GetDropTarget;
    m_wxControlExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxControlExtGetEventHashTable = a_GetEventHashTable;
    m_wxControlExtGetEventTable = a_GetEventTable;
    m_wxControlExtGetHandle = a_GetHandle;
    m_wxControlExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxControlExtGetLabel = a_GetLabel;
    m_wxControlExtGetLabelText = a_GetLabelText;
    m_wxControlExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxControlExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxControlExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxControlExtGetMaxSize = a_GetMaxSize;
    m_wxControlExtGetMinClientSize = a_GetMinClientSize;
    m_wxControlExtGetMinSize = a_GetMinSize;
    m_wxControlExtGetName = a_GetName;
    m_wxControlExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxControlExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxControlExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxControlExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxControlExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxControlExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxControlExtGetTransparent = a_GetTransparent;
    m_wxControlExtGetValidator = a_GetValidator;
    m_wxControlExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxControlExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxControlExtHasCapture = a_HasCapture;
    m_wxControlExtHasFocus = a_HasFocus;
    m_wxControlExtHasMultiplePages = a_HasMultiplePages;
    m_wxControlExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxControlExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxControlExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxControlExtInheritAttributes = a_InheritAttributes;
    m_wxControlExtInitDialog = a_InitDialog;
    m_wxControlExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxControlExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxControlExtIsRetained = a_IsRetained;
    m_wxControlExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxControlExtIsShown = a_IsShown;
    m_wxControlExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxControlExtIsThisEnabled = a_IsThisEnabled;
    m_wxControlExtIsTopLevel = a_IsTopLevel;
    m_wxControlExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxControlExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxControlExtLayout = a_Layout;
    m_wxControlExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxControlExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxControlExtLower = a_Lower;
    m_wxControlExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxControlExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxControlExtOnInternalIdle = a_OnInternalIdle;
    m_wxControlExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxControlExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxControlExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxControlExtRaise = a_Raise;
    m_wxControlExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxControlExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxControlExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxControlExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxControlExtScrollLines__int = a_ScrollLines__int;
    m_wxControlExtScrollPages__int = a_ScrollPages__int;
    m_wxControlExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxControlExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxControlExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxControlExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxControlExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxControlExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxControlExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxControlExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxControlExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxControlExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxControlExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxControlExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxControlExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxControlExtSetFocus = a_SetFocus;
    m_wxControlExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxControlExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxControlExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxControlExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxControlExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxControlExtSetLabelText__wxStringCR = a_SetLabelText__wxStringCR;
    m_wxControlExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxControlExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxControlExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxControlExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxControlExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxControlExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxControlExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxControlExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxControlExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxControlExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxControlExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxControlExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxControlExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxControlExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxControlExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxControlExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxControlExtShouldInheritColours = a_ShouldInheritColours;
    m_wxControlExtShow__bool = a_Show__bool;
    m_wxControlExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxControlExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxControlExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxControlExtTriggerScrollEvent__wxEventType = a_TriggerScrollEvent__wxEventType;
    m_wxControlExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxControlExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxControlExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxControlExtUpdate = a_Update;
    m_wxControlExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxControlExtValidate = a_Validate;
    m_wxControlExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxControlExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxControlExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxControlExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxControlExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxControlExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxControlExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxControlExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxControlExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxControlExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
  }
};



#endif
