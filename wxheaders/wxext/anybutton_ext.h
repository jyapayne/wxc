#ifndef _WX_ANYBUTTON_H_EXT_
#define _WX_ANYBUTTON_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxAnyButtonBaseExt;
typedef bool (*wxAnyButtonBaseExtAcceptsFocusFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtAcceptsFocusFromKeyboardFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtAcceptsFocusRecursivelyFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef void (*wxAnyButtonBaseExtAddChild__wxWindowBasePFunc)(const wxAnyButtonBaseExt* self, wxWindowBase* child);
typedef void (*wxAnyButtonBaseExtAddPendingEvent__wxEventCRFunc)(const wxAnyButtonBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxAnyButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxAnyButtonBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxAnyButtonBaseExtAdjustForParentClientOrigin__intRintRintFunc)(const wxAnyButtonBaseExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxAnyButtonBaseExtAlwaysShowScrollbars__boolboolFunc)(const wxAnyButtonBaseExt* self, bool horz, bool vert);
typedef void (*wxAnyButtonBaseExtAssociateHandle__WXWidgetFunc)(const wxAnyButtonBaseExt* self, WXWidget handle);
typedef bool (*wxAnyButtonBaseExtBeginRepositioningChildrenFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtCanApplyThemeBorderFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtCanBeFocusedFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtCanBeOutsideClientAreaFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtCanScroll__intFunc)(const wxAnyButtonBaseExt* self, int orient, bool res);
typedef bool (*wxAnyButtonBaseExtCanSetTransparentFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef void (*wxAnyButtonBaseExtClearBackgroundFunc)(const wxAnyButtonBaseExt* self);
typedef wxSize (*wxAnyButtonBaseExtClientToWindowSize__wxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxAnyButtonBaseExtCloneRefData__wxObjectRefDataCPFunc)(const wxAnyButtonBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef void (*wxAnyButtonBaseExtCommand__wxCommandEventRFunc)(const wxAnyButtonBaseExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxAnyButtonBaseExtCreateRefDataFunc)(const wxAnyButtonBaseExt* self, wxObjectRefData* res);
typedef bool (*wxAnyButtonBaseExtDestroyFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef void (*wxAnyButtonBaseExtDissociateHandleFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtDoCaptureMouseFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtDoCentre__intFunc)(const wxAnyButtonBaseExt* self, int dir);
typedef void (*wxAnyButtonBaseExtDoClientToScreen__intPintPFunc)(const wxAnyButtonBaseExt* self, int* x, int* y);
typedef void (*wxAnyButtonBaseExtDoEnable__boolFunc)(const wxAnyButtonBaseExt* self, bool enable);
typedef void (*wxAnyButtonBaseExtDoFreezeFunc)(const wxAnyButtonBaseExt* self);
typedef bool (*wxAnyButtonBaseExtDoGetAuthNeededFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef int (*wxAnyButtonBaseExtDoGetBestClientHeight__intFunc)(const wxAnyButtonBaseExt* self, int width, int res);
typedef wxSize (*wxAnyButtonBaseExtDoGetBestClientSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef int (*wxAnyButtonBaseExtDoGetBestClientWidth__intFunc)(const wxAnyButtonBaseExt* self, int height, int res);
typedef wxSize (*wxAnyButtonBaseExtDoGetBestSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef wxBitmap (*wxAnyButtonBaseExtDoGetBitmap__wxAnyButtonBaseNStateFunc)(const wxAnyButtonBaseExt* self, wxAnyButtonBase::State which, wxBitmap res);
typedef wxSize (*wxAnyButtonBaseExtDoGetBitmapMarginsFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef void* (*wxAnyButtonBaseExtDoGetClientDataFunc)(const wxAnyButtonBaseExt* self, void* res);
typedef wxClientData* (*wxAnyButtonBaseExtDoGetClientObjectFunc)(const wxAnyButtonBaseExt* self, wxClientData* res);
typedef void (*wxAnyButtonBaseExtDoGetClientSize__intPintPFunc)(const wxAnyButtonBaseExt* self, int* width, int* height);
typedef void (*wxAnyButtonBaseExtDoGetPosition__intPintPFunc)(const wxAnyButtonBaseExt* self, int* x, int* y);
typedef void (*wxAnyButtonBaseExtDoGetScreenPosition__intPintPFunc)(const wxAnyButtonBaseExt* self, int* x, int* y);
typedef void (*wxAnyButtonBaseExtDoGetSize__intPintPFunc)(const wxAnyButtonBaseExt* self, int* width, int* height);
typedef wxSize (*wxAnyButtonBaseExtDoGetSizeFromClientSize__wxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& size, wxSize res);
typedef wxSize (*wxAnyButtonBaseExtDoGetSizeFromTextSize__intintFunc)(const wxAnyButtonBaseExt* self, int xlen, int ylen, wxSize res);
typedef void (*wxAnyButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxAnyButtonBaseExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxAnyButtonBaseExtDoGetVirtualSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef wxHitTest (*wxAnyButtonBaseExtDoHitTest__wxCoordwxCoordFunc)(const wxAnyButtonBaseExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxAnyButtonBaseExtDoIsExposed__intintintintFunc)(const wxAnyButtonBaseExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxAnyButtonBaseExtDoIsExposed__intintFunc)(const wxAnyButtonBaseExt* self, int x, int y, bool res);
typedef void (*wxAnyButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxAnyButtonBaseExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxAnyButtonBaseExtDoMoveWindow__intintintintFunc)(const wxAnyButtonBaseExt* self, int x, int y, int width, int height);
typedef bool (*wxAnyButtonBaseExtDoNavigateIn__intFunc)(const wxAnyButtonBaseExt* self, int flags, bool res);
typedef bool (*wxAnyButtonBaseExtDoPhase__intFunc)(const wxAnyButtonBaseExt* self, int phase, bool res);
typedef bool (*wxAnyButtonBaseExtDoPopupMenu__wxMenuPintintFunc)(const wxAnyButtonBaseExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxAnyButtonBaseExtDoReleaseMouseFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtDoScreenToClient__intPintPFunc)(const wxAnyButtonBaseExt* self, int* x, int* y);
typedef void (*wxAnyButtonBaseExtDoSetAuthNeeded__boolFunc)(const wxAnyButtonBaseExt* self, bool show);
typedef void (*wxAnyButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc)(const wxAnyButtonBaseExt* self, wxBitmapBundle const& bitmap, wxAnyButtonBase::State which);
typedef void (*wxAnyButtonBaseExtDoSetBitmapMargins__wxCoordwxCoordFunc)(const wxAnyButtonBaseExt* self, wxCoord x, wxCoord y);
typedef void (*wxAnyButtonBaseExtDoSetBitmapPosition__wxDirectionFunc)(const wxAnyButtonBaseExt* self, wxDirection dir);
typedef void (*wxAnyButtonBaseExtDoSetClientData__voidPFunc)(const wxAnyButtonBaseExt* self, void* data);
typedef void (*wxAnyButtonBaseExtDoSetClientObject__wxClientDataPFunc)(const wxAnyButtonBaseExt* self, wxClientData* data);
typedef void (*wxAnyButtonBaseExtDoSetClientSize__intintFunc)(const wxAnyButtonBaseExt* self, int width, int height);
typedef bool (*wxAnyButtonBaseExtDoSetLabelMarkup__wxStringCRFunc)(const wxAnyButtonBaseExt* self, wxString const& markup, bool res);
typedef void (*wxAnyButtonBaseExtDoSetSize__intintintintintFunc)(const wxAnyButtonBaseExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxAnyButtonBaseExtDoSetSizeHints__intintintintintintFunc)(const wxAnyButtonBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxAnyButtonBaseExtDoSetToolTip__wxToolTipPFunc)(const wxAnyButtonBaseExt* self, wxToolTip* tip);
typedef void (*wxAnyButtonBaseExtDoSetToolTipText__wxStringCRFunc)(const wxAnyButtonBaseExt* self, wxString const& tip);
typedef void (*wxAnyButtonBaseExtDoSetVirtualSize__intintFunc)(const wxAnyButtonBaseExt* self, int x, int y);
typedef void (*wxAnyButtonBaseExtDoSetWindowVariant__wxWindowVariantFunc)(const wxAnyButtonBaseExt* self, wxWindowVariant variant);
typedef void (*wxAnyButtonBaseExtDoThawFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxAnyButtonBaseExt* self, wxUpdateUIEvent& event);
typedef void (*wxAnyButtonBaseExtDragAcceptFiles__boolFunc)(const wxAnyButtonBaseExt* self, bool accept);
typedef bool (*wxAnyButtonBaseExtEnable__boolFunc)(const wxAnyButtonBaseExt* self, bool enable, bool res);
typedef bool (*wxAnyButtonBaseExtEnableTouchEvents__intFunc)(const wxAnyButtonBaseExt* self, int eventsMask, bool res);
typedef void (*wxAnyButtonBaseExtEnableVisibleFocus__boolFunc)(const wxAnyButtonBaseExt* self, bool enabled);
typedef void (*wxAnyButtonBaseExtEndRepositioningChildrenFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtFitFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtFitInsideFunc)(const wxAnyButtonBaseExt* self);
typedef wxSize (*wxAnyButtonBaseExtGetBestVirtualSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef int (*wxAnyButtonBaseExtGetCharHeightFunc)(const wxAnyButtonBaseExt* self, int res);
typedef int (*wxAnyButtonBaseExtGetCharWidthFunc)(const wxAnyButtonBaseExt* self, int res);
typedef wxClassInfo* (*wxAnyButtonBaseExtGetClassInfoFunc)(const wxAnyButtonBaseExt* self, wxClassInfo* res);
typedef wxPoint (*wxAnyButtonBaseExtGetClientAreaOriginFunc)(const wxAnyButtonBaseExt* self, wxPoint res);
typedef void (*wxAnyButtonBaseExtGetClientSizeConstraint__intPintPFunc)(const wxAnyButtonBaseExt* self, int* w, int* h);
typedef double (*wxAnyButtonBaseExtGetContentScaleFactorFunc)(const wxAnyButtonBaseExt* self, double res);
typedef wxSize (*wxAnyButtonBaseExtGetDPIFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef double (*wxAnyButtonBaseExtGetDPIScaleFactorFunc)(const wxAnyButtonBaseExt* self, double res);
typedef wxVisualAttributes (*wxAnyButtonBaseExtGetDefaultAttributesFunc)(const wxAnyButtonBaseExt* self, wxVisualAttributes res);
typedef wxBorder (*wxAnyButtonBaseExtGetDefaultBorderFunc)(const wxAnyButtonBaseExt* self, wxBorder res);
typedef wxBorder (*wxAnyButtonBaseExtGetDefaultBorderForControlFunc)(const wxAnyButtonBaseExt* self, wxBorder res);
typedef wxDropTarget* (*wxAnyButtonBaseExtGetDropTargetFunc)(const wxAnyButtonBaseExt* self, wxDropTarget* res);
typedef wxSize (*wxAnyButtonBaseExtGetEffectiveMinSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef wxEventHashTable& (*wxAnyButtonBaseExtGetEventHashTableFunc)(const wxAnyButtonBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxAnyButtonBaseExtGetEventTableFunc)(const wxAnyButtonBaseExt* self, wxEventTable const* res);
typedef WXWidget (*wxAnyButtonBaseExtGetHandleFunc)(const wxAnyButtonBaseExt* self, WXWidget res);
typedef wxString (*wxAnyButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxAnyButtonBaseExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxAnyButtonBaseExtGetLabelFunc)(const wxAnyButtonBaseExt* self, wxString res);
typedef wxString (*wxAnyButtonBaseExtGetLabelTextFunc)(const wxAnyButtonBaseExt* self, wxString res);
typedef wxLayoutDirection (*wxAnyButtonBaseExtGetLayoutDirectionFunc)(const wxAnyButtonBaseExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxAnyButtonBaseExtGetMainWindowOfCompositeControlFunc)(const wxAnyButtonBaseExt* self, wxWindow* res);
typedef wxSize (*wxAnyButtonBaseExtGetMaxClientSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef wxSize (*wxAnyButtonBaseExtGetMaxSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef wxSize (*wxAnyButtonBaseExtGetMinClientSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef wxSize (*wxAnyButtonBaseExtGetMinSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef wxString (*wxAnyButtonBaseExtGetNameFunc)(const wxAnyButtonBaseExt* self, wxString res);
typedef wxAnyButtonBase::wxAnyButtonBase::State (*wxAnyButtonBaseExtGetNormalStateFunc)(const wxAnyButtonBaseExt* self, wxAnyButtonBase::wxAnyButtonBase::State res);
typedef void (*wxAnyButtonBaseExtGetPositionConstraint__intPintPFunc)(const wxAnyButtonBaseExt* self, int* x, int* y);
typedef int (*wxAnyButtonBaseExtGetScrollPos__intFunc)(const wxAnyButtonBaseExt* self, int orient, int res);
typedef int (*wxAnyButtonBaseExtGetScrollRange__intFunc)(const wxAnyButtonBaseExt* self, int orient, int res);
typedef int (*wxAnyButtonBaseExtGetScrollThumb__intFunc)(const wxAnyButtonBaseExt* self, int orient, int res);
typedef void (*wxAnyButtonBaseExtGetSizeConstraint__intPintPFunc)(const wxAnyButtonBaseExt* self, int* w, int* h);
typedef bool (*wxAnyButtonBaseExtGetThemeEnabledFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef wxByte (*wxAnyButtonBaseExtGetTransparentFunc)(const wxAnyButtonBaseExt* self, wxByte res);
typedef wxValidator* (*wxAnyButtonBaseExtGetValidatorFunc)(const wxAnyButtonBaseExt* self, wxValidator* res);
typedef wxSize (*wxAnyButtonBaseExtGetWindowBorderSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef long (*wxAnyButtonBaseExtGetWindowStyleFlagFunc)(const wxAnyButtonBaseExt* self, long res);
typedef bool (*wxAnyButtonBaseExtHasCaptureFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtHasFocusFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtHasMultiplePagesFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtHasTransparentBackgroundFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxAnyButtonBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxAnyButtonBaseExtInformFirstDirection__intintintFunc)(const wxAnyButtonBaseExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxAnyButtonBaseExtInheritAttributesFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtInitDialogFunc)(const wxAnyButtonBaseExt* self);
typedef bool (*wxAnyButtonBaseExtIsClientAreaChild__wxWindowCPFunc)(const wxAnyButtonBaseExt* self, wxWindow const* child, bool res);
typedef bool (*wxAnyButtonBaseExtIsDoubleBufferedFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsRetainedFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsScrollbarAlwaysShown__intFunc)(const wxAnyButtonBaseExt* self, int orient, bool res);
typedef bool (*wxAnyButtonBaseExtIsShownFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsShownOnScreenFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsThisEnabledFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsTopLevelFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxAnyButtonBaseExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxAnyButtonBaseExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxAnyButtonBaseExt* self, wxString* reason, bool res);
typedef bool (*wxAnyButtonBaseExtLayoutFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtLayoutPhase1__intPFunc)(const wxAnyButtonBaseExt* self, int* noChanges, bool res);
typedef bool (*wxAnyButtonBaseExtLayoutPhase2__intPFunc)(const wxAnyButtonBaseExt* self, int* noChanges, bool res);
typedef void (*wxAnyButtonBaseExtLowerFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtMoveConstraint__intintFunc)(const wxAnyButtonBaseExt* self, int x, int y);
typedef bool (*wxAnyButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxAnyButtonBaseExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxAnyButtonBaseExtOnInternalIdleFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtPrepareDC__wxDCRFunc)(const wxAnyButtonBaseExt* self, wxDC& dc);
typedef bool (*wxAnyButtonBaseExtProcessEvent__wxEventRFunc)(const wxAnyButtonBaseExt* self, wxEvent& event, bool res);
typedef void (*wxAnyButtonBaseExtQueueEvent__wxEventPFunc)(const wxAnyButtonBaseExt* self, wxEvent* event);
typedef void (*wxAnyButtonBaseExtRaiseFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtRefresh__boolwxRectCPFunc)(const wxAnyButtonBaseExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxAnyButtonBaseExtRegisterHotKey__intintintFunc)(const wxAnyButtonBaseExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxAnyButtonBaseExtRemoveChild__wxWindowBasePFunc)(const wxAnyButtonBaseExt* self, wxWindowBase* child);
typedef bool (*wxAnyButtonBaseExtReparent__wxWindowBasePFunc)(const wxAnyButtonBaseExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxAnyButtonBaseExtScrollLines__intFunc)(const wxAnyButtonBaseExt* self, int lines, bool res);
typedef bool (*wxAnyButtonBaseExtScrollPages__intFunc)(const wxAnyButtonBaseExt* self, int pages, bool res);
typedef void (*wxAnyButtonBaseExtScrollWindow__intintwxRectCPFunc)(const wxAnyButtonBaseExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxAnyButtonBaseExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxAnyButtonBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxAnyButtonBaseExtSendIdleEvents__wxIdleEventRFunc)(const wxAnyButtonBaseExt* self, wxIdleEvent& event, bool res);
typedef void (*wxAnyButtonBaseExtSendSizeEvent__intFunc)(const wxAnyButtonBaseExt* self, int flags);
typedef void (*wxAnyButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxAnyButtonBaseExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxAnyButtonBaseExtSetBackgroundColour__wxColourCRFunc)(const wxAnyButtonBaseExt* self, wxColour const& colour, bool res);
typedef bool (*wxAnyButtonBaseExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxAnyButtonBaseExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxAnyButtonBaseExtSetCanFocus__boolFunc)(const wxAnyButtonBaseExt* self, bool canFocus);
typedef void (*wxAnyButtonBaseExtSetConstraintSizes__boolFunc)(const wxAnyButtonBaseExt* self, bool recurse);
typedef bool (*wxAnyButtonBaseExtSetCursor__wxCursorCRFunc)(const wxAnyButtonBaseExt* self, wxCursor const& cursor, bool res);
typedef void (*wxAnyButtonBaseExtSetDoubleBuffered__boolFunc)(const wxAnyButtonBaseExt* self, bool on);
typedef void (*wxAnyButtonBaseExtSetDropTarget__wxDropTargetPFunc)(const wxAnyButtonBaseExt* self, wxDropTarget* dropTarget);
typedef void (*wxAnyButtonBaseExtSetExtraStyle__longFunc)(const wxAnyButtonBaseExt* self, long exStyle);
typedef void (*wxAnyButtonBaseExtSetFocusFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtSetFocusFromKbdFunc)(const wxAnyButtonBaseExt* self);
typedef bool (*wxAnyButtonBaseExtSetFont__wxFontCRFunc)(const wxAnyButtonBaseExt* self, wxFont const& font, bool res);
typedef bool (*wxAnyButtonBaseExtSetForegroundColour__wxColourCRFunc)(const wxAnyButtonBaseExt* self, wxColour const& colour, bool res);
typedef void (*wxAnyButtonBaseExtSetId__wxWindowIDFunc)(const wxAnyButtonBaseExt* self, wxWindowID winid);
typedef void (*wxAnyButtonBaseExtSetLabel__wxStringCRFunc)(const wxAnyButtonBaseExt* self, wxString const& label);
typedef void (*wxAnyButtonBaseExtSetLabelText__wxStringCRFunc)(const wxAnyButtonBaseExt* self, wxString const& text);
typedef void (*wxAnyButtonBaseExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxAnyButtonBaseExt* self, wxLayoutDirection dir);
typedef void (*wxAnyButtonBaseExtSetMaxClientSize__wxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& size);
typedef void (*wxAnyButtonBaseExtSetMaxSize__wxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& maxSize);
typedef void (*wxAnyButtonBaseExtSetMinClientSize__wxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& size);
typedef void (*wxAnyButtonBaseExtSetMinSize__wxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& minSize);
typedef void (*wxAnyButtonBaseExtSetName__wxStringCRFunc)(const wxAnyButtonBaseExt* self, wxString const& name);
typedef void (*wxAnyButtonBaseExtSetNextHandler__wxEvtHandlerPFunc)(const wxAnyButtonBaseExt* self, wxEvtHandler* handler);
typedef void (*wxAnyButtonBaseExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxAnyButtonBaseExt* self, wxEvtHandler* handler);
typedef void (*wxAnyButtonBaseExtSetScrollPos__intintboolFunc)(const wxAnyButtonBaseExt* self, int orient, int pos, bool refresh);
typedef void (*wxAnyButtonBaseExtSetScrollbar__intintintintboolFunc)(const wxAnyButtonBaseExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxAnyButtonBaseExtSetSizeConstraint__intintintintFunc)(const wxAnyButtonBaseExt* self, int x, int y, int w, int h);
typedef void (*wxAnyButtonBaseExtSetSizeHints__intintintintintintFunc)(const wxAnyButtonBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxAnyButtonBaseExtSetThemeEnabled__boolFunc)(const wxAnyButtonBaseExt* self, bool enableTheme);
typedef bool (*wxAnyButtonBaseExtSetTransparent__wxByteFunc)(const wxAnyButtonBaseExt* self, wxByte alpha, bool res);
typedef void (*wxAnyButtonBaseExtSetValidator__wxValidatorCRFunc)(const wxAnyButtonBaseExt* self, wxValidator const& validator);
typedef void (*wxAnyButtonBaseExtSetWindowStyleFlag__longFunc)(const wxAnyButtonBaseExt* self, long style);
typedef bool (*wxAnyButtonBaseExtShouldInheritColoursFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtShow__boolFunc)(const wxAnyButtonBaseExt* self, bool show, bool res);
typedef bool (*wxAnyButtonBaseExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxAnyButtonBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxAnyButtonBaseExtTransferDataFromWindowFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtTransferDataToWindowFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef void (*wxAnyButtonBaseExtTriggerScrollEvent__wxEventTypeFunc)(const wxAnyButtonBaseExt* self, wxEventType scrollEvent);
typedef bool (*wxAnyButtonBaseExtTryAfter__wxEventRFunc)(const wxAnyButtonBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAnyButtonBaseExtTryBefore__wxEventRFunc)(const wxAnyButtonBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAnyButtonBaseExtUnregisterHotKey__intFunc)(const wxAnyButtonBaseExt* self, int hotkeyId, bool res);
typedef void (*wxAnyButtonBaseExtUpdateFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtUpdateWindowUI__longFunc)(const wxAnyButtonBaseExt* self, long flags);
typedef bool (*wxAnyButtonBaseExtValidateFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef void (*wxAnyButtonBaseExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxAnyButtonBaseExt* self, wxFont& font);
typedef wxTextEntry const* (*wxAnyButtonBaseExtWXGetTextEntryFunc)(const wxAnyButtonBaseExt* self, wxTextEntry const* res);
typedef void* (*wxAnyButtonBaseExtWXReservedEvtHandler1__voidPFunc)(const wxAnyButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonBaseExtWXReservedEvtHandler2__voidPFunc)(const wxAnyButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonBaseExtWXReservedWindow1__voidPFunc)(const wxAnyButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonBaseExtWXReservedWindow2__voidPFunc)(const wxAnyButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonBaseExtWXReservedWindow3__voidPFunc)(const wxAnyButtonBaseExt* self, void* param0, void* res);
typedef void (*wxAnyButtonBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxAnyButtonBaseExt* self, int flags, wxSizer* sizer);
typedef void (*wxAnyButtonBaseExtWarpPointer__intintFunc)(const wxAnyButtonBaseExt* self, int x, int y);
typedef wxSize (*wxAnyButtonBaseExtWindowToClientSize__wxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& size, wxSize res);
class wxAnyButtonExt;
typedef bool (*wxAnyButtonExtAcceptsFocusFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtAcceptsFocusFromKeyboardFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtAcceptsFocusRecursivelyFunc)(const wxAnyButtonExt* self, bool res);
typedef void (*wxAnyButtonExtAddChild__wxWindowBasePFunc)(const wxAnyButtonExt* self, wxWindowBase* child);
typedef void (*wxAnyButtonExtAddPendingEvent__wxEventCRFunc)(const wxAnyButtonExt* self, wxEvent const& event);
typedef wxCoord (*wxAnyButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxAnyButtonExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxAnyButtonExtAdjustForParentClientOrigin__intRintRintFunc)(const wxAnyButtonExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxAnyButtonExtAlwaysShowScrollbars__boolboolFunc)(const wxAnyButtonExt* self, bool horz, bool vert);
typedef void (*wxAnyButtonExtAssociateHandle__WXWidgetFunc)(const wxAnyButtonExt* self, WXWidget handle);
typedef bool (*wxAnyButtonExtBeginRepositioningChildrenFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtCanApplyThemeBorderFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtCanBeFocusedFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtCanBeOutsideClientAreaFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtCanScroll__intFunc)(const wxAnyButtonExt* self, int orient, bool res);
typedef bool (*wxAnyButtonExtCanSetTransparentFunc)(const wxAnyButtonExt* self, bool res);
typedef void (*wxAnyButtonExtClearBackgroundFunc)(const wxAnyButtonExt* self);
typedef wxSize (*wxAnyButtonExtClientToWindowSize__wxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxAnyButtonExtCloneRefData__wxObjectRefDataCPFunc)(const wxAnyButtonExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef void (*wxAnyButtonExtCommand__wxCommandEventRFunc)(const wxAnyButtonExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxAnyButtonExtCreateRefDataFunc)(const wxAnyButtonExt* self, wxObjectRefData* res);
typedef bool (*wxAnyButtonExtDestroyFunc)(const wxAnyButtonExt* self, bool res);
typedef void (*wxAnyButtonExtDissociateHandleFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtDoCaptureMouseFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtDoCentre__intFunc)(const wxAnyButtonExt* self, int dir);
typedef void (*wxAnyButtonExtDoClientToScreen__intPintPFunc)(const wxAnyButtonExt* self, int* x, int* y);
typedef void (*wxAnyButtonExtDoEnable__boolFunc)(const wxAnyButtonExt* self, bool enable);
typedef void (*wxAnyButtonExtDoFreezeFunc)(const wxAnyButtonExt* self);
typedef bool (*wxAnyButtonExtDoGetAuthNeededFunc)(const wxAnyButtonExt* self, bool res);
typedef int (*wxAnyButtonExtDoGetBestClientHeight__intFunc)(const wxAnyButtonExt* self, int width, int res);
typedef wxSize (*wxAnyButtonExtDoGetBestClientSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef int (*wxAnyButtonExtDoGetBestClientWidth__intFunc)(const wxAnyButtonExt* self, int height, int res);
typedef wxSize (*wxAnyButtonExtDoGetBestSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef wxBitmap (*wxAnyButtonExtDoGetBitmap__wxAnyButtonBaseNStateFunc)(const wxAnyButtonExt* self, wxAnyButtonBase::State which, wxBitmap res);
typedef wxSize (*wxAnyButtonExtDoGetBitmapMarginsFunc)(const wxAnyButtonExt* self, wxSize res);
typedef void* (*wxAnyButtonExtDoGetClientDataFunc)(const wxAnyButtonExt* self, void* res);
typedef wxClientData* (*wxAnyButtonExtDoGetClientObjectFunc)(const wxAnyButtonExt* self, wxClientData* res);
typedef void (*wxAnyButtonExtDoGetClientSize__intPintPFunc)(const wxAnyButtonExt* self, int* width, int* height);
typedef void (*wxAnyButtonExtDoGetPosition__intPintPFunc)(const wxAnyButtonExt* self, int* x, int* y);
typedef void (*wxAnyButtonExtDoGetScreenPosition__intPintPFunc)(const wxAnyButtonExt* self, int* x, int* y);
typedef void (*wxAnyButtonExtDoGetSize__intPintPFunc)(const wxAnyButtonExt* self, int* width, int* height);
typedef wxSize (*wxAnyButtonExtDoGetSizeFromClientSize__wxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& size, wxSize res);
typedef wxSize (*wxAnyButtonExtDoGetSizeFromTextSize__intintFunc)(const wxAnyButtonExt* self, int xlen, int ylen, wxSize res);
typedef void (*wxAnyButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxAnyButtonExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxAnyButtonExtDoGetVirtualSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef wxHitTest (*wxAnyButtonExtDoHitTest__wxCoordwxCoordFunc)(const wxAnyButtonExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxAnyButtonExtDoIsExposed__intintintintFunc)(const wxAnyButtonExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxAnyButtonExtDoIsExposed__intintFunc)(const wxAnyButtonExt* self, int x, int y, bool res);
typedef void (*wxAnyButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxAnyButtonExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxAnyButtonExtDoMoveWindow__intintintintFunc)(const wxAnyButtonExt* self, int x, int y, int width, int height);
typedef bool (*wxAnyButtonExtDoNavigateIn__intFunc)(const wxAnyButtonExt* self, int flags, bool res);
typedef bool (*wxAnyButtonExtDoPhase__intFunc)(const wxAnyButtonExt* self, int phase, bool res);
typedef bool (*wxAnyButtonExtDoPopupMenu__wxMenuPintintFunc)(const wxAnyButtonExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxAnyButtonExtDoReleaseMouseFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtDoScreenToClient__intPintPFunc)(const wxAnyButtonExt* self, int* x, int* y);
typedef void (*wxAnyButtonExtDoSetAuthNeeded__boolFunc)(const wxAnyButtonExt* self, bool show);
typedef void (*wxAnyButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc)(const wxAnyButtonExt* self, wxBitmapBundle const& bitmap, wxAnyButtonBase::State which);
typedef void (*wxAnyButtonExtDoSetBitmapMargins__wxCoordwxCoordFunc)(const wxAnyButtonExt* self, wxCoord x, wxCoord y);
typedef void (*wxAnyButtonExtDoSetBitmapPosition__wxDirectionFunc)(const wxAnyButtonExt* self, wxDirection dir);
typedef void (*wxAnyButtonExtDoSetClientData__voidPFunc)(const wxAnyButtonExt* self, void* data);
typedef void (*wxAnyButtonExtDoSetClientObject__wxClientDataPFunc)(const wxAnyButtonExt* self, wxClientData* data);
typedef void (*wxAnyButtonExtDoSetClientSize__intintFunc)(const wxAnyButtonExt* self, int width, int height);
typedef bool (*wxAnyButtonExtDoSetLabelMarkup__wxStringCRFunc)(const wxAnyButtonExt* self, wxString const& markup, bool res);
typedef void (*wxAnyButtonExtDoSetSize__intintintintintFunc)(const wxAnyButtonExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxAnyButtonExtDoSetSizeHints__intintintintintintFunc)(const wxAnyButtonExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxAnyButtonExtDoSetToolTip__wxToolTipPFunc)(const wxAnyButtonExt* self, wxToolTip* tip);
typedef void (*wxAnyButtonExtDoSetToolTipText__wxStringCRFunc)(const wxAnyButtonExt* self, wxString const& tip);
typedef void (*wxAnyButtonExtDoSetVirtualSize__intintFunc)(const wxAnyButtonExt* self, int x, int y);
typedef void (*wxAnyButtonExtDoSetWindowVariant__wxWindowVariantFunc)(const wxAnyButtonExt* self, wxWindowVariant variant);
typedef void (*wxAnyButtonExtDoThawFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxAnyButtonExt* self, wxUpdateUIEvent& event);
typedef void (*wxAnyButtonExtDragAcceptFiles__boolFunc)(const wxAnyButtonExt* self, bool accept);
typedef bool (*wxAnyButtonExtEnable__boolFunc)(const wxAnyButtonExt* self, bool enable, bool res);
typedef bool (*wxAnyButtonExtEnableTouchEvents__intFunc)(const wxAnyButtonExt* self, int eventsMask, bool res);
typedef void (*wxAnyButtonExtEnableVisibleFocus__boolFunc)(const wxAnyButtonExt* self, bool enabled);
typedef void (*wxAnyButtonExtEndRepositioningChildrenFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtFitFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtFitInsideFunc)(const wxAnyButtonExt* self);
typedef wxSize (*wxAnyButtonExtGetBestVirtualSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef int (*wxAnyButtonExtGetCharHeightFunc)(const wxAnyButtonExt* self, int res);
typedef int (*wxAnyButtonExtGetCharWidthFunc)(const wxAnyButtonExt* self, int res);
typedef wxClassInfo* (*wxAnyButtonExtGetClassInfoFunc)(const wxAnyButtonExt* self, wxClassInfo* res);
typedef wxPoint (*wxAnyButtonExtGetClientAreaOriginFunc)(const wxAnyButtonExt* self, wxPoint res);
typedef void (*wxAnyButtonExtGetClientSizeConstraint__intPintPFunc)(const wxAnyButtonExt* self, int* w, int* h);
typedef double (*wxAnyButtonExtGetContentScaleFactorFunc)(const wxAnyButtonExt* self, double res);
typedef wxSize (*wxAnyButtonExtGetDPIFunc)(const wxAnyButtonExt* self, wxSize res);
typedef double (*wxAnyButtonExtGetDPIScaleFactorFunc)(const wxAnyButtonExt* self, double res);
typedef wxVisualAttributes (*wxAnyButtonExtGetDefaultAttributesFunc)(const wxAnyButtonExt* self, wxVisualAttributes res);
typedef wxBorder (*wxAnyButtonExtGetDefaultBorderFunc)(const wxAnyButtonExt* self, wxBorder res);
typedef wxBorder (*wxAnyButtonExtGetDefaultBorderForControlFunc)(const wxAnyButtonExt* self, wxBorder res);
typedef wxDropTarget* (*wxAnyButtonExtGetDropTargetFunc)(const wxAnyButtonExt* self, wxDropTarget* res);
typedef wxSize (*wxAnyButtonExtGetEffectiveMinSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef wxEventHashTable& (*wxAnyButtonExtGetEventHashTableFunc)(const wxAnyButtonExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxAnyButtonExtGetEventTableFunc)(const wxAnyButtonExt* self, wxEventTable const* res);
typedef WXWidget (*wxAnyButtonExtGetHandleFunc)(const wxAnyButtonExt* self, WXWidget res);
typedef wxString (*wxAnyButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxAnyButtonExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxAnyButtonExtGetLabelFunc)(const wxAnyButtonExt* self, wxString res);
typedef wxString (*wxAnyButtonExtGetLabelTextFunc)(const wxAnyButtonExt* self, wxString res);
typedef wxLayoutDirection (*wxAnyButtonExtGetLayoutDirectionFunc)(const wxAnyButtonExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxAnyButtonExtGetMainWindowOfCompositeControlFunc)(const wxAnyButtonExt* self, wxWindow* res);
typedef wxSize (*wxAnyButtonExtGetMaxClientSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef wxSize (*wxAnyButtonExtGetMaxSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef wxSize (*wxAnyButtonExtGetMinClientSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef wxSize (*wxAnyButtonExtGetMinSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef wxString (*wxAnyButtonExtGetNameFunc)(const wxAnyButtonExt* self, wxString res);
typedef wxAnyButtonBase::wxAnyButtonBase::State (*wxAnyButtonExtGetNormalStateFunc)(const wxAnyButtonExt* self, wxAnyButtonBase::wxAnyButtonBase::State res);
typedef void (*wxAnyButtonExtGetPositionConstraint__intPintPFunc)(const wxAnyButtonExt* self, int* x, int* y);
typedef int (*wxAnyButtonExtGetScrollPos__intFunc)(const wxAnyButtonExt* self, int orient, int res);
typedef int (*wxAnyButtonExtGetScrollRange__intFunc)(const wxAnyButtonExt* self, int orient, int res);
typedef int (*wxAnyButtonExtGetScrollThumb__intFunc)(const wxAnyButtonExt* self, int orient, int res);
typedef void (*wxAnyButtonExtGetSizeConstraint__intPintPFunc)(const wxAnyButtonExt* self, int* w, int* h);
typedef bool (*wxAnyButtonExtGetThemeEnabledFunc)(const wxAnyButtonExt* self, bool res);
typedef wxByte (*wxAnyButtonExtGetTransparentFunc)(const wxAnyButtonExt* self, wxByte res);
typedef wxValidator* (*wxAnyButtonExtGetValidatorFunc)(const wxAnyButtonExt* self, wxValidator* res);
typedef wxSize (*wxAnyButtonExtGetWindowBorderSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef long (*wxAnyButtonExtGetWindowStyleFlagFunc)(const wxAnyButtonExt* self, long res);
typedef bool (*wxAnyButtonExtHasCaptureFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtHasFocusFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtHasMultiplePagesFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtHasTransparentBackgroundFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxAnyButtonExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxAnyButtonExtInformFirstDirection__intintintFunc)(const wxAnyButtonExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxAnyButtonExtInheritAttributesFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtInitDialogFunc)(const wxAnyButtonExt* self);
typedef bool (*wxAnyButtonExtIsClientAreaChild__wxWindowCPFunc)(const wxAnyButtonExt* self, wxWindow const* child, bool res);
typedef bool (*wxAnyButtonExtIsDoubleBufferedFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsRetainedFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsScrollbarAlwaysShown__intFunc)(const wxAnyButtonExt* self, int orient, bool res);
typedef bool (*wxAnyButtonExtIsShownFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsShownOnScreenFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsThisEnabledFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsTopLevelFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxAnyButtonExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxAnyButtonExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxAnyButtonExt* self, wxString* reason, bool res);
typedef bool (*wxAnyButtonExtLayoutFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtLayoutPhase1__intPFunc)(const wxAnyButtonExt* self, int* noChanges, bool res);
typedef bool (*wxAnyButtonExtLayoutPhase2__intPFunc)(const wxAnyButtonExt* self, int* noChanges, bool res);
typedef void (*wxAnyButtonExtLowerFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtMoveConstraint__intintFunc)(const wxAnyButtonExt* self, int x, int y);
typedef bool (*wxAnyButtonExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxAnyButtonExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxAnyButtonExtOnInternalIdleFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtPrepareDC__wxDCRFunc)(const wxAnyButtonExt* self, wxDC& dc);
typedef bool (*wxAnyButtonExtProcessEvent__wxEventRFunc)(const wxAnyButtonExt* self, wxEvent& event, bool res);
typedef void (*wxAnyButtonExtQueueEvent__wxEventPFunc)(const wxAnyButtonExt* self, wxEvent* event);
typedef void (*wxAnyButtonExtRaiseFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtRefresh__boolwxRectCPFunc)(const wxAnyButtonExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxAnyButtonExtRegisterHotKey__intintintFunc)(const wxAnyButtonExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxAnyButtonExtRemoveChild__wxWindowBasePFunc)(const wxAnyButtonExt* self, wxWindowBase* child);
typedef bool (*wxAnyButtonExtReparent__wxWindowBasePFunc)(const wxAnyButtonExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxAnyButtonExtScrollLines__intFunc)(const wxAnyButtonExt* self, int lines, bool res);
typedef bool (*wxAnyButtonExtScrollPages__intFunc)(const wxAnyButtonExt* self, int pages, bool res);
typedef void (*wxAnyButtonExtScrollWindow__intintwxRectCPFunc)(const wxAnyButtonExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxAnyButtonExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxAnyButtonExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxAnyButtonExtSendIdleEvents__wxIdleEventRFunc)(const wxAnyButtonExt* self, wxIdleEvent& event, bool res);
typedef void (*wxAnyButtonExtSendSizeEvent__intFunc)(const wxAnyButtonExt* self, int flags);
typedef void (*wxAnyButtonExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxAnyButtonExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxAnyButtonExtSetBackgroundColour__wxColourCRFunc)(const wxAnyButtonExt* self, wxColour const& colour, bool res);
typedef bool (*wxAnyButtonExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxAnyButtonExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxAnyButtonExtSetCanFocus__boolFunc)(const wxAnyButtonExt* self, bool canFocus);
typedef void (*wxAnyButtonExtSetConstraintSizes__boolFunc)(const wxAnyButtonExt* self, bool recurse);
typedef bool (*wxAnyButtonExtSetCursor__wxCursorCRFunc)(const wxAnyButtonExt* self, wxCursor const& cursor, bool res);
typedef void (*wxAnyButtonExtSetDoubleBuffered__boolFunc)(const wxAnyButtonExt* self, bool on);
typedef void (*wxAnyButtonExtSetDropTarget__wxDropTargetPFunc)(const wxAnyButtonExt* self, wxDropTarget* dropTarget);
typedef void (*wxAnyButtonExtSetExtraStyle__longFunc)(const wxAnyButtonExt* self, long exStyle);
typedef void (*wxAnyButtonExtSetFocusFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtSetFocusFromKbdFunc)(const wxAnyButtonExt* self);
typedef bool (*wxAnyButtonExtSetFont__wxFontCRFunc)(const wxAnyButtonExt* self, wxFont const& font, bool res);
typedef bool (*wxAnyButtonExtSetForegroundColour__wxColourCRFunc)(const wxAnyButtonExt* self, wxColour const& colour, bool res);
typedef void (*wxAnyButtonExtSetId__wxWindowIDFunc)(const wxAnyButtonExt* self, wxWindowID winid);
typedef void (*wxAnyButtonExtSetLabel__wxStringCRFunc)(const wxAnyButtonExt* self, wxString const& label);
typedef void (*wxAnyButtonExtSetLabelText__wxStringCRFunc)(const wxAnyButtonExt* self, wxString const& text);
typedef void (*wxAnyButtonExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxAnyButtonExt* self, wxLayoutDirection dir);
typedef void (*wxAnyButtonExtSetMaxClientSize__wxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& size);
typedef void (*wxAnyButtonExtSetMaxSize__wxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& maxSize);
typedef void (*wxAnyButtonExtSetMinClientSize__wxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& size);
typedef void (*wxAnyButtonExtSetMinSize__wxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& minSize);
typedef void (*wxAnyButtonExtSetName__wxStringCRFunc)(const wxAnyButtonExt* self, wxString const& name);
typedef void (*wxAnyButtonExtSetNextHandler__wxEvtHandlerPFunc)(const wxAnyButtonExt* self, wxEvtHandler* handler);
typedef void (*wxAnyButtonExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxAnyButtonExt* self, wxEvtHandler* handler);
typedef void (*wxAnyButtonExtSetScrollPos__intintboolFunc)(const wxAnyButtonExt* self, int orient, int pos, bool refresh);
typedef void (*wxAnyButtonExtSetScrollbar__intintintintboolFunc)(const wxAnyButtonExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxAnyButtonExtSetSizeConstraint__intintintintFunc)(const wxAnyButtonExt* self, int x, int y, int w, int h);
typedef void (*wxAnyButtonExtSetSizeHints__intintintintintintFunc)(const wxAnyButtonExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxAnyButtonExtSetThemeEnabled__boolFunc)(const wxAnyButtonExt* self, bool enableTheme);
typedef bool (*wxAnyButtonExtSetTransparent__wxByteFunc)(const wxAnyButtonExt* self, wxByte alpha, bool res);
typedef void (*wxAnyButtonExtSetValidator__wxValidatorCRFunc)(const wxAnyButtonExt* self, wxValidator const& validator);
typedef void (*wxAnyButtonExtSetWindowStyleFlag__longFunc)(const wxAnyButtonExt* self, long style);
typedef bool (*wxAnyButtonExtShouldInheritColoursFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtShow__boolFunc)(const wxAnyButtonExt* self, bool show, bool res);
typedef bool (*wxAnyButtonExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxAnyButtonExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxAnyButtonExtTransferDataFromWindowFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtTransferDataToWindowFunc)(const wxAnyButtonExt* self, bool res);
typedef void (*wxAnyButtonExtTriggerScrollEvent__wxEventTypeFunc)(const wxAnyButtonExt* self, wxEventType scrollEvent);
typedef bool (*wxAnyButtonExtTryAfter__wxEventRFunc)(const wxAnyButtonExt* self, wxEvent& event, bool res);
typedef bool (*wxAnyButtonExtTryBefore__wxEventRFunc)(const wxAnyButtonExt* self, wxEvent& event, bool res);
typedef bool (*wxAnyButtonExtUnregisterHotKey__intFunc)(const wxAnyButtonExt* self, int hotkeyId, bool res);
typedef void (*wxAnyButtonExtUpdateFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtUpdateWindowUI__longFunc)(const wxAnyButtonExt* self, long flags);
typedef bool (*wxAnyButtonExtValidateFunc)(const wxAnyButtonExt* self, bool res);
typedef void (*wxAnyButtonExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxAnyButtonExt* self, wxFont& font);
typedef wxTextEntry const* (*wxAnyButtonExtWXGetTextEntryFunc)(const wxAnyButtonExt* self, wxTextEntry const* res);
typedef void* (*wxAnyButtonExtWXReservedEvtHandler1__voidPFunc)(const wxAnyButtonExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonExtWXReservedEvtHandler2__voidPFunc)(const wxAnyButtonExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonExtWXReservedWindow1__voidPFunc)(const wxAnyButtonExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonExtWXReservedWindow2__voidPFunc)(const wxAnyButtonExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonExtWXReservedWindow3__voidPFunc)(const wxAnyButtonExt* self, void* param0, void* res);
typedef void (*wxAnyButtonExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxAnyButtonExt* self, int flags, wxSizer* sizer);
typedef void (*wxAnyButtonExtWarpPointer__intintFunc)(const wxAnyButtonExt* self, int x, int y);
typedef wxSize (*wxAnyButtonExtWindowToClientSize__wxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& size, wxSize res);

class wxAnyButtonBaseExt: public wxAnyButtonBase
{
public:
  wxAnyButtonBaseExt(): wxAnyButtonBase()  {  }
  wxAnyButtonBaseExtAcceptsFocusFunc m_wxAnyButtonBaseExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxAnyButtonBase::AcceptsFocus();
    if (*m_wxAnyButtonBaseExtAcceptsFocus != NULL){
      return m_wxAnyButtonBaseExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtAcceptsFocusFromKeyboardFunc m_wxAnyButtonBaseExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxAnyButtonBase::AcceptsFocusFromKeyboard();
    if (*m_wxAnyButtonBaseExtAcceptsFocusFromKeyboard != NULL){
      return m_wxAnyButtonBaseExtAcceptsFocusFromKeyboard(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtAcceptsFocusRecursivelyFunc m_wxAnyButtonBaseExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxAnyButtonBase::AcceptsFocusRecursively();
    if (*m_wxAnyButtonBaseExtAcceptsFocusRecursively != NULL){
      return m_wxAnyButtonBaseExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtAddChild__wxWindowBasePFunc m_wxAnyButtonBaseExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxAnyButtonBase::AddChild(child);
    if (*m_wxAnyButtonBaseExtAddChild__wxWindowBaseP != NULL){
      return m_wxAnyButtonBaseExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxAnyButtonBaseExtAddPendingEvent__wxEventCRFunc m_wxAnyButtonBaseExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxAnyButtonBase::AddPendingEvent(event);
    if (*m_wxAnyButtonBaseExtAddPendingEvent__wxEventCR != NULL){
      return m_wxAnyButtonBaseExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxAnyButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxAnyButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxAnyButtonBase::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxAnyButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxAnyButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtAdjustForParentClientOrigin__intRintRintFunc m_wxAnyButtonBaseExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxAnyButtonBase::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxAnyButtonBaseExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxAnyButtonBaseExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxAnyButtonBaseExtAlwaysShowScrollbars__boolboolFunc m_wxAnyButtonBaseExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxAnyButtonBase::AlwaysShowScrollbars(horz, vert);
    if (*m_wxAnyButtonBaseExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxAnyButtonBaseExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxAnyButtonBaseExtAssociateHandle__WXWidgetFunc m_wxAnyButtonBaseExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxAnyButtonBase::AssociateHandle(handle);
    if (*m_wxAnyButtonBaseExtAssociateHandle__WXWidget != NULL){
      return m_wxAnyButtonBaseExtAssociateHandle__WXWidget(this, handle);
    }
  }
  wxAnyButtonBaseExtBeginRepositioningChildrenFunc m_wxAnyButtonBaseExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxAnyButtonBase::BeginRepositioningChildren();
    if (*m_wxAnyButtonBaseExtBeginRepositioningChildren != NULL){
      return m_wxAnyButtonBaseExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtCanApplyThemeBorderFunc m_wxAnyButtonBaseExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxAnyButtonBase::CanApplyThemeBorder();
    if (*m_wxAnyButtonBaseExtCanApplyThemeBorder != NULL){
      return m_wxAnyButtonBaseExtCanApplyThemeBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtCanBeFocusedFunc m_wxAnyButtonBaseExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxAnyButtonBase::CanBeFocused();
    if (*m_wxAnyButtonBaseExtCanBeFocused != NULL){
      return m_wxAnyButtonBaseExtCanBeFocused(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtCanBeOutsideClientAreaFunc m_wxAnyButtonBaseExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxAnyButtonBase::CanBeOutsideClientArea();
    if (*m_wxAnyButtonBaseExtCanBeOutsideClientArea != NULL){
      return m_wxAnyButtonBaseExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtCanScroll__intFunc m_wxAnyButtonBaseExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxAnyButtonBase::CanScroll(orient);
    if (*m_wxAnyButtonBaseExtCanScroll__int != NULL){
      return m_wxAnyButtonBaseExtCanScroll__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtCanSetTransparentFunc m_wxAnyButtonBaseExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxAnyButtonBase::CanSetTransparent();
    if (*m_wxAnyButtonBaseExtCanSetTransparent != NULL){
      return m_wxAnyButtonBaseExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtClearBackgroundFunc m_wxAnyButtonBaseExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxAnyButtonBase::ClearBackground();
    if (*m_wxAnyButtonBaseExtClearBackground != NULL){
      return m_wxAnyButtonBaseExtClearBackground(this);
    }
  }
  wxAnyButtonBaseExtClientToWindowSize__wxSizeCRFunc m_wxAnyButtonBaseExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButtonBase::ClientToWindowSize(size);
    if (*m_wxAnyButtonBaseExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxAnyButtonBaseExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtCloneRefData__wxObjectRefDataCPFunc m_wxAnyButtonBaseExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAnyButtonBase::CloneRefData(data);
    if (*m_wxAnyButtonBaseExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxAnyButtonBaseExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtCommand__wxCommandEventRFunc m_wxAnyButtonBaseExtCommand__wxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxAnyButtonBase::Command(event);
    if (*m_wxAnyButtonBaseExtCommand__wxCommandEventR != NULL){
      return m_wxAnyButtonBaseExtCommand__wxCommandEventR(this, event);
    }
  }
  wxAnyButtonBaseExtCreateRefDataFunc m_wxAnyButtonBaseExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxAnyButtonBase::CreateRefData();
    if (*m_wxAnyButtonBaseExtCreateRefData != NULL){
      return m_wxAnyButtonBaseExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDestroyFunc m_wxAnyButtonBaseExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxAnyButtonBase::Destroy();
    if (*m_wxAnyButtonBaseExtDestroy != NULL){
      return m_wxAnyButtonBaseExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDissociateHandleFunc m_wxAnyButtonBaseExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxAnyButtonBase::DissociateHandle();
    if (*m_wxAnyButtonBaseExtDissociateHandle != NULL){
      return m_wxAnyButtonBaseExtDissociateHandle(this);
    }
  }
  wxAnyButtonBaseExtDoCaptureMouseFunc m_wxAnyButtonBaseExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxAnyButtonBase::DoCaptureMouse();
    if (*m_wxAnyButtonBaseExtDoCaptureMouse != NULL){
      return m_wxAnyButtonBaseExtDoCaptureMouse(this);
    }
  }
  wxAnyButtonBaseExtDoCentre__intFunc m_wxAnyButtonBaseExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxAnyButtonBase::DoCentre(dir);
    if (*m_wxAnyButtonBaseExtDoCentre__int != NULL){
      return m_wxAnyButtonBaseExtDoCentre__int(this, dir);
    }
  }
  wxAnyButtonBaseExtDoClientToScreen__intPintPFunc m_wxAnyButtonBaseExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxAnyButtonBase::DoClientToScreen(x, y);
    if (*m_wxAnyButtonBaseExtDoClientToScreen__intPintP != NULL){
      return m_wxAnyButtonBaseExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoEnable__boolFunc m_wxAnyButtonBaseExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxAnyButtonBase::DoEnable(enable);
    if (*m_wxAnyButtonBaseExtDoEnable__bool != NULL){
      return m_wxAnyButtonBaseExtDoEnable__bool(this, enable);
    }
  }
  wxAnyButtonBaseExtDoFreezeFunc m_wxAnyButtonBaseExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxAnyButtonBase::DoFreeze();
    if (*m_wxAnyButtonBaseExtDoFreeze != NULL){
      return m_wxAnyButtonBaseExtDoFreeze(this);
    }
  }
  wxAnyButtonBaseExtDoGetAuthNeededFunc m_wxAnyButtonBaseExtDoGetAuthNeeded = NULL;
  virtual bool DoGetAuthNeeded() const override
  {
    bool res = wxAnyButtonBase::DoGetAuthNeeded();
    if (*m_wxAnyButtonBaseExtDoGetAuthNeeded != NULL){
      return m_wxAnyButtonBaseExtDoGetAuthNeeded(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetBestClientHeight__intFunc m_wxAnyButtonBaseExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxAnyButtonBase::DoGetBestClientHeight(width);
    if (*m_wxAnyButtonBaseExtDoGetBestClientHeight__int != NULL){
      return m_wxAnyButtonBaseExtDoGetBestClientHeight__int(this, width, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetBestClientSizeFunc m_wxAnyButtonBaseExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxAnyButtonBase::DoGetBestClientSize();
    if (*m_wxAnyButtonBaseExtDoGetBestClientSize != NULL){
      return m_wxAnyButtonBaseExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetBestClientWidth__intFunc m_wxAnyButtonBaseExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxAnyButtonBase::DoGetBestClientWidth(height);
    if (*m_wxAnyButtonBaseExtDoGetBestClientWidth__int != NULL){
      return m_wxAnyButtonBaseExtDoGetBestClientWidth__int(this, height, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetBestSizeFunc m_wxAnyButtonBaseExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxAnyButtonBase::DoGetBestSize();
    if (*m_wxAnyButtonBaseExtDoGetBestSize != NULL){
      return m_wxAnyButtonBaseExtDoGetBestSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetBitmap__wxAnyButtonBaseNStateFunc m_wxAnyButtonBaseExtDoGetBitmap__wxAnyButtonBaseNState = NULL;
  virtual wxBitmap DoGetBitmap(wxAnyButtonBase::State which) const override
  {
    wxBitmap res = wxAnyButtonBase::DoGetBitmap(which);
    if (*m_wxAnyButtonBaseExtDoGetBitmap__wxAnyButtonBaseNState != NULL){
      return m_wxAnyButtonBaseExtDoGetBitmap__wxAnyButtonBaseNState(this, which, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetBitmapMarginsFunc m_wxAnyButtonBaseExtDoGetBitmapMargins = NULL;
  virtual wxSize DoGetBitmapMargins() const override
  {
    wxSize res = wxAnyButtonBase::DoGetBitmapMargins();
    if (*m_wxAnyButtonBaseExtDoGetBitmapMargins != NULL){
      return m_wxAnyButtonBaseExtDoGetBitmapMargins(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetClientDataFunc m_wxAnyButtonBaseExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxAnyButtonBase::DoGetClientData();
    if (*m_wxAnyButtonBaseExtDoGetClientData != NULL){
      return m_wxAnyButtonBaseExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetClientObjectFunc m_wxAnyButtonBaseExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxAnyButtonBase::DoGetClientObject();
    if (*m_wxAnyButtonBaseExtDoGetClientObject != NULL){
      return m_wxAnyButtonBaseExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetClientSize__intPintPFunc m_wxAnyButtonBaseExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxAnyButtonBase::DoGetClientSize(width, height);
    if (*m_wxAnyButtonBaseExtDoGetClientSize__intPintP != NULL){
      return m_wxAnyButtonBaseExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxAnyButtonBaseExtDoGetPosition__intPintPFunc m_wxAnyButtonBaseExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxAnyButtonBase::DoGetPosition(x, y);
    if (*m_wxAnyButtonBaseExtDoGetPosition__intPintP != NULL){
      return m_wxAnyButtonBaseExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoGetScreenPosition__intPintPFunc m_wxAnyButtonBaseExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxAnyButtonBase::DoGetScreenPosition(x, y);
    if (*m_wxAnyButtonBaseExtDoGetScreenPosition__intPintP != NULL){
      return m_wxAnyButtonBaseExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoGetSize__intPintPFunc m_wxAnyButtonBaseExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxAnyButtonBase::DoGetSize(width, height);
    if (*m_wxAnyButtonBaseExtDoGetSize__intPintP != NULL){
      return m_wxAnyButtonBaseExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxAnyButtonBaseExtDoGetSizeFromClientSize__wxSizeCRFunc m_wxAnyButtonBaseExtDoGetSizeFromClientSize__wxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButtonBase::DoGetSizeFromClientSize(size);
    if (*m_wxAnyButtonBaseExtDoGetSizeFromClientSize__wxSizeCR != NULL){
      return m_wxAnyButtonBaseExtDoGetSizeFromClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetSizeFromTextSize__intintFunc m_wxAnyButtonBaseExtDoGetSizeFromTextSize__intint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxAnyButtonBase::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxAnyButtonBaseExtDoGetSizeFromTextSize__intint != NULL){
      return m_wxAnyButtonBaseExtDoGetSizeFromTextSize__intint(this, xlen, ylen, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxAnyButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxAnyButtonBase::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxAnyButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxAnyButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxAnyButtonBaseExtDoGetVirtualSizeFunc m_wxAnyButtonBaseExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxAnyButtonBase::DoGetVirtualSize();
    if (*m_wxAnyButtonBaseExtDoGetVirtualSize != NULL){
      return m_wxAnyButtonBaseExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoHitTest__wxCoordwxCoordFunc m_wxAnyButtonBaseExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxAnyButtonBase::DoHitTest(x, y);
    if (*m_wxAnyButtonBaseExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxAnyButtonBaseExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoIsExposed__intintintintFunc m_wxAnyButtonBaseExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxAnyButtonBase::DoIsExposed(x, y, w, h);
    if (*m_wxAnyButtonBaseExtDoIsExposed__intintintint != NULL){
      return m_wxAnyButtonBaseExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoIsExposed__intintFunc m_wxAnyButtonBaseExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxAnyButtonBase::DoIsExposed(x, y);
    if (*m_wxAnyButtonBaseExtDoIsExposed__intint != NULL){
      return m_wxAnyButtonBaseExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxAnyButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxAnyButtonBase::DoMoveInTabOrder(win, move);
    if (*m_wxAnyButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxAnyButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxAnyButtonBaseExtDoMoveWindow__intintintintFunc m_wxAnyButtonBaseExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxAnyButtonBase::DoMoveWindow(x, y, width, height);
    if (*m_wxAnyButtonBaseExtDoMoveWindow__intintintint != NULL){
      return m_wxAnyButtonBaseExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxAnyButtonBaseExtDoNavigateIn__intFunc m_wxAnyButtonBaseExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxAnyButtonBase::DoNavigateIn(flags);
    if (*m_wxAnyButtonBaseExtDoNavigateIn__int != NULL){
      return m_wxAnyButtonBaseExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoPhase__intFunc m_wxAnyButtonBaseExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxAnyButtonBase::DoPhase(phase);
    if (*m_wxAnyButtonBaseExtDoPhase__int != NULL){
      return m_wxAnyButtonBaseExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoPopupMenu__wxMenuPintintFunc m_wxAnyButtonBaseExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxAnyButtonBase::DoPopupMenu(menu, x, y);
    if (*m_wxAnyButtonBaseExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxAnyButtonBaseExtDoPopupMenu__wxMenuPintint(this, menu, x, y, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoReleaseMouseFunc m_wxAnyButtonBaseExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxAnyButtonBase::DoReleaseMouse();
    if (*m_wxAnyButtonBaseExtDoReleaseMouse != NULL){
      return m_wxAnyButtonBaseExtDoReleaseMouse(this);
    }
  }
  wxAnyButtonBaseExtDoScreenToClient__intPintPFunc m_wxAnyButtonBaseExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxAnyButtonBase::DoScreenToClient(x, y);
    if (*m_wxAnyButtonBaseExtDoScreenToClient__intPintP != NULL){
      return m_wxAnyButtonBaseExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoSetAuthNeeded__boolFunc m_wxAnyButtonBaseExtDoSetAuthNeeded__bool = NULL;
  virtual void DoSetAuthNeeded(bool show) override
  {
    wxAnyButtonBase::DoSetAuthNeeded(show);
    if (*m_wxAnyButtonBaseExtDoSetAuthNeeded__bool != NULL){
      return m_wxAnyButtonBaseExtDoSetAuthNeeded__bool(this, show);
    }
  }
  wxAnyButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc m_wxAnyButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState = NULL;
  virtual void DoSetBitmap(wxBitmapBundle const& bitmap, wxAnyButtonBase::State which) override
  {
    wxAnyButtonBase::DoSetBitmap(bitmap, which);
    if (*m_wxAnyButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState != NULL){
      return m_wxAnyButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState(this, bitmap, which);
    }
  }
  wxAnyButtonBaseExtDoSetBitmapMargins__wxCoordwxCoordFunc m_wxAnyButtonBaseExtDoSetBitmapMargins__wxCoordwxCoord = NULL;
  virtual void DoSetBitmapMargins(wxCoord x, wxCoord y) override
  {
    wxAnyButtonBase::DoSetBitmapMargins(x, y);
    if (*m_wxAnyButtonBaseExtDoSetBitmapMargins__wxCoordwxCoord != NULL){
      return m_wxAnyButtonBaseExtDoSetBitmapMargins__wxCoordwxCoord(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoSetBitmapPosition__wxDirectionFunc m_wxAnyButtonBaseExtDoSetBitmapPosition__wxDirection = NULL;
  virtual void DoSetBitmapPosition(wxDirection dir) override
  {
    wxAnyButtonBase::DoSetBitmapPosition(dir);
    if (*m_wxAnyButtonBaseExtDoSetBitmapPosition__wxDirection != NULL){
      return m_wxAnyButtonBaseExtDoSetBitmapPosition__wxDirection(this, dir);
    }
  }
  wxAnyButtonBaseExtDoSetClientData__voidPFunc m_wxAnyButtonBaseExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxAnyButtonBase::DoSetClientData(data);
    if (*m_wxAnyButtonBaseExtDoSetClientData__voidP != NULL){
      return m_wxAnyButtonBaseExtDoSetClientData__voidP(this, data);
    }
  }
  wxAnyButtonBaseExtDoSetClientObject__wxClientDataPFunc m_wxAnyButtonBaseExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxAnyButtonBase::DoSetClientObject(data);
    if (*m_wxAnyButtonBaseExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxAnyButtonBaseExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxAnyButtonBaseExtDoSetClientSize__intintFunc m_wxAnyButtonBaseExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxAnyButtonBase::DoSetClientSize(width, height);
    if (*m_wxAnyButtonBaseExtDoSetClientSize__intint != NULL){
      return m_wxAnyButtonBaseExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxAnyButtonBaseExtDoSetLabelMarkup__wxStringCRFunc m_wxAnyButtonBaseExtDoSetLabelMarkup__wxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxAnyButtonBase::DoSetLabelMarkup(markup);
    if (*m_wxAnyButtonBaseExtDoSetLabelMarkup__wxStringCR != NULL){
      return m_wxAnyButtonBaseExtDoSetLabelMarkup__wxStringCR(this, markup, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoSetSize__intintintintintFunc m_wxAnyButtonBaseExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxAnyButtonBase::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxAnyButtonBaseExtDoSetSize__intintintintint != NULL){
      return m_wxAnyButtonBaseExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxAnyButtonBaseExtDoSetSizeHints__intintintintintintFunc m_wxAnyButtonBaseExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxAnyButtonBase::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxAnyButtonBaseExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxAnyButtonBaseExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxAnyButtonBaseExtDoSetToolTip__wxToolTipPFunc m_wxAnyButtonBaseExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxAnyButtonBase::DoSetToolTip(tip);
    if (*m_wxAnyButtonBaseExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxAnyButtonBaseExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxAnyButtonBaseExtDoSetToolTipText__wxStringCRFunc m_wxAnyButtonBaseExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxAnyButtonBase::DoSetToolTipText(tip);
    if (*m_wxAnyButtonBaseExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxAnyButtonBaseExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxAnyButtonBaseExtDoSetVirtualSize__intintFunc m_wxAnyButtonBaseExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxAnyButtonBase::DoSetVirtualSize(x, y);
    if (*m_wxAnyButtonBaseExtDoSetVirtualSize__intint != NULL){
      return m_wxAnyButtonBaseExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoSetWindowVariant__wxWindowVariantFunc m_wxAnyButtonBaseExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxAnyButtonBase::DoSetWindowVariant(variant);
    if (*m_wxAnyButtonBaseExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxAnyButtonBaseExtDoSetWindowVariant__wxWindowVariant(this, variant);
    }
  }
  wxAnyButtonBaseExtDoThawFunc m_wxAnyButtonBaseExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxAnyButtonBase::DoThaw();
    if (*m_wxAnyButtonBaseExtDoThaw != NULL){
      return m_wxAnyButtonBaseExtDoThaw(this);
    }
  }
  wxAnyButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxAnyButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxAnyButtonBase::DoUpdateWindowUI(event);
    if (*m_wxAnyButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxAnyButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxAnyButtonBaseExtDragAcceptFiles__boolFunc m_wxAnyButtonBaseExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxAnyButtonBase::DragAcceptFiles(accept);
    if (*m_wxAnyButtonBaseExtDragAcceptFiles__bool != NULL){
      return m_wxAnyButtonBaseExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxAnyButtonBaseExtEnable__boolFunc m_wxAnyButtonBaseExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxAnyButtonBase::Enable(enable);
    if (*m_wxAnyButtonBaseExtEnable__bool != NULL){
      return m_wxAnyButtonBaseExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtEnableTouchEvents__intFunc m_wxAnyButtonBaseExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxAnyButtonBase::EnableTouchEvents(eventsMask);
    if (*m_wxAnyButtonBaseExtEnableTouchEvents__int != NULL){
      return m_wxAnyButtonBaseExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtEnableVisibleFocus__boolFunc m_wxAnyButtonBaseExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxAnyButtonBase::EnableVisibleFocus(enabled);
    if (*m_wxAnyButtonBaseExtEnableVisibleFocus__bool != NULL){
      return m_wxAnyButtonBaseExtEnableVisibleFocus__bool(this, enabled);
    }
  }
  wxAnyButtonBaseExtEndRepositioningChildrenFunc m_wxAnyButtonBaseExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxAnyButtonBase::EndRepositioningChildren();
    if (*m_wxAnyButtonBaseExtEndRepositioningChildren != NULL){
      return m_wxAnyButtonBaseExtEndRepositioningChildren(this);
    }
  }
  wxAnyButtonBaseExtFitFunc m_wxAnyButtonBaseExtFit = NULL;
  virtual void Fit() override
  {
    wxAnyButtonBase::Fit();
    if (*m_wxAnyButtonBaseExtFit != NULL){
      return m_wxAnyButtonBaseExtFit(this);
    }
  }
  wxAnyButtonBaseExtFitInsideFunc m_wxAnyButtonBaseExtFitInside = NULL;
  virtual void FitInside() override
  {
    wxAnyButtonBase::FitInside();
    if (*m_wxAnyButtonBaseExtFitInside != NULL){
      return m_wxAnyButtonBaseExtFitInside(this);
    }
  }
  wxAnyButtonBaseExtGetBestVirtualSizeFunc m_wxAnyButtonBaseExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxAnyButtonBase::GetBestVirtualSize();
    if (*m_wxAnyButtonBaseExtGetBestVirtualSize != NULL){
      return m_wxAnyButtonBaseExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetCharHeightFunc m_wxAnyButtonBaseExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxAnyButtonBase::GetCharHeight();
    if (*m_wxAnyButtonBaseExtGetCharHeight != NULL){
      return m_wxAnyButtonBaseExtGetCharHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetCharWidthFunc m_wxAnyButtonBaseExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxAnyButtonBase::GetCharWidth();
    if (*m_wxAnyButtonBaseExtGetCharWidth != NULL){
      return m_wxAnyButtonBaseExtGetCharWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetClassInfoFunc m_wxAnyButtonBaseExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxAnyButtonBase::GetClassInfo();
    if (*m_wxAnyButtonBaseExtGetClassInfo != NULL){
      return m_wxAnyButtonBaseExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetClientAreaOriginFunc m_wxAnyButtonBaseExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxAnyButtonBase::GetClientAreaOrigin();
    if (*m_wxAnyButtonBaseExtGetClientAreaOrigin != NULL){
      return m_wxAnyButtonBaseExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetClientSizeConstraint__intPintPFunc m_wxAnyButtonBaseExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxAnyButtonBase::GetClientSizeConstraint(w, h);
    if (*m_wxAnyButtonBaseExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxAnyButtonBaseExtGetClientSizeConstraint__intPintP(this, w, h);
    }
  }
  wxAnyButtonBaseExtGetContentScaleFactorFunc m_wxAnyButtonBaseExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxAnyButtonBase::GetContentScaleFactor();
    if (*m_wxAnyButtonBaseExtGetContentScaleFactor != NULL){
      return m_wxAnyButtonBaseExtGetContentScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetDPIFunc m_wxAnyButtonBaseExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxAnyButtonBase::GetDPI();
    if (*m_wxAnyButtonBaseExtGetDPI != NULL){
      return m_wxAnyButtonBaseExtGetDPI(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetDPIScaleFactorFunc m_wxAnyButtonBaseExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxAnyButtonBase::GetDPIScaleFactor();
    if (*m_wxAnyButtonBaseExtGetDPIScaleFactor != NULL){
      return m_wxAnyButtonBaseExtGetDPIScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetDefaultAttributesFunc m_wxAnyButtonBaseExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxAnyButtonBase::GetDefaultAttributes();
    if (*m_wxAnyButtonBaseExtGetDefaultAttributes != NULL){
      return m_wxAnyButtonBaseExtGetDefaultAttributes(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetDefaultBorderFunc m_wxAnyButtonBaseExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxAnyButtonBase::GetDefaultBorder();
    if (*m_wxAnyButtonBaseExtGetDefaultBorder != NULL){
      return m_wxAnyButtonBaseExtGetDefaultBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetDefaultBorderForControlFunc m_wxAnyButtonBaseExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxAnyButtonBase::GetDefaultBorderForControl();
    if (*m_wxAnyButtonBaseExtGetDefaultBorderForControl != NULL){
      return m_wxAnyButtonBaseExtGetDefaultBorderForControl(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetDropTargetFunc m_wxAnyButtonBaseExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxAnyButtonBase::GetDropTarget();
    if (*m_wxAnyButtonBaseExtGetDropTarget != NULL){
      return m_wxAnyButtonBaseExtGetDropTarget(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetEffectiveMinSizeFunc m_wxAnyButtonBaseExtGetEffectiveMinSize = NULL;
  virtual wxSize GetEffectiveMinSize() const override
  {
    wxSize res = wxAnyButtonBase::GetEffectiveMinSize();
    if (*m_wxAnyButtonBaseExtGetEffectiveMinSize != NULL){
      return m_wxAnyButtonBaseExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetEventHashTableFunc m_wxAnyButtonBaseExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxAnyButtonBase::GetEventHashTable();
    if (*m_wxAnyButtonBaseExtGetEventHashTable != NULL){
      return m_wxAnyButtonBaseExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetEventTableFunc m_wxAnyButtonBaseExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxAnyButtonBase::GetEventTable();
    if (*m_wxAnyButtonBaseExtGetEventTable != NULL){
      return m_wxAnyButtonBaseExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetHandleFunc m_wxAnyButtonBaseExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxAnyButtonBase::GetHandle();
    if (*m_wxAnyButtonBaseExtGetHandle != NULL){
      return m_wxAnyButtonBaseExtGetHandle(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxAnyButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxAnyButtonBase::GetHelpTextAtPoint(pt, origin);
    if (*m_wxAnyButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxAnyButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetLabelFunc m_wxAnyButtonBaseExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxAnyButtonBase::GetLabel();
    if (*m_wxAnyButtonBaseExtGetLabel != NULL){
      return m_wxAnyButtonBaseExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetLabelTextFunc m_wxAnyButtonBaseExtGetLabelText = NULL;
  virtual wxString GetLabelText() const override
  {
    wxString res = wxAnyButtonBase::GetLabelText();
    if (*m_wxAnyButtonBaseExtGetLabelText != NULL){
      return m_wxAnyButtonBaseExtGetLabelText(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetLayoutDirectionFunc m_wxAnyButtonBaseExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxAnyButtonBase::GetLayoutDirection();
    if (*m_wxAnyButtonBaseExtGetLayoutDirection != NULL){
      return m_wxAnyButtonBaseExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetMainWindowOfCompositeControlFunc m_wxAnyButtonBaseExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxAnyButtonBase::GetMainWindowOfCompositeControl();
    if (*m_wxAnyButtonBaseExtGetMainWindowOfCompositeControl != NULL){
      return m_wxAnyButtonBaseExtGetMainWindowOfCompositeControl(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetMaxClientSizeFunc m_wxAnyButtonBaseExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxAnyButtonBase::GetMaxClientSize();
    if (*m_wxAnyButtonBaseExtGetMaxClientSize != NULL){
      return m_wxAnyButtonBaseExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetMaxSizeFunc m_wxAnyButtonBaseExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxAnyButtonBase::GetMaxSize();
    if (*m_wxAnyButtonBaseExtGetMaxSize != NULL){
      return m_wxAnyButtonBaseExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetMinClientSizeFunc m_wxAnyButtonBaseExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxAnyButtonBase::GetMinClientSize();
    if (*m_wxAnyButtonBaseExtGetMinClientSize != NULL){
      return m_wxAnyButtonBaseExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetMinSizeFunc m_wxAnyButtonBaseExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxAnyButtonBase::GetMinSize();
    if (*m_wxAnyButtonBaseExtGetMinSize != NULL){
      return m_wxAnyButtonBaseExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetNameFunc m_wxAnyButtonBaseExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxAnyButtonBase::GetName();
    if (*m_wxAnyButtonBaseExtGetName != NULL){
      return m_wxAnyButtonBaseExtGetName(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetNormalStateFunc m_wxAnyButtonBaseExtGetNormalState = NULL;
  virtual wxAnyButtonBase::State GetNormalState() const override
  {
    wxAnyButtonBase::wxAnyButtonBase::State res = wxAnyButtonBase::GetNormalState();
    if (*m_wxAnyButtonBaseExtGetNormalState != NULL){
      return m_wxAnyButtonBaseExtGetNormalState(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetPositionConstraint__intPintPFunc m_wxAnyButtonBaseExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxAnyButtonBase::GetPositionConstraint(x, y);
    if (*m_wxAnyButtonBaseExtGetPositionConstraint__intPintP != NULL){
      return m_wxAnyButtonBaseExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxAnyButtonBaseExtGetScrollPos__intFunc m_wxAnyButtonBaseExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxAnyButtonBase::GetScrollPos(orient);
    if (*m_wxAnyButtonBaseExtGetScrollPos__int != NULL){
      return m_wxAnyButtonBaseExtGetScrollPos__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetScrollRange__intFunc m_wxAnyButtonBaseExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxAnyButtonBase::GetScrollRange(orient);
    if (*m_wxAnyButtonBaseExtGetScrollRange__int != NULL){
      return m_wxAnyButtonBaseExtGetScrollRange__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetScrollThumb__intFunc m_wxAnyButtonBaseExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxAnyButtonBase::GetScrollThumb(orient);
    if (*m_wxAnyButtonBaseExtGetScrollThumb__int != NULL){
      return m_wxAnyButtonBaseExtGetScrollThumb__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetSizeConstraint__intPintPFunc m_wxAnyButtonBaseExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxAnyButtonBase::GetSizeConstraint(w, h);
    if (*m_wxAnyButtonBaseExtGetSizeConstraint__intPintP != NULL){
      return m_wxAnyButtonBaseExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxAnyButtonBaseExtGetThemeEnabledFunc m_wxAnyButtonBaseExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxAnyButtonBase::GetThemeEnabled();
    if (*m_wxAnyButtonBaseExtGetThemeEnabled != NULL){
      return m_wxAnyButtonBaseExtGetThemeEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetTransparentFunc m_wxAnyButtonBaseExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxAnyButtonBase::GetTransparent();
    if (*m_wxAnyButtonBaseExtGetTransparent != NULL){
      return m_wxAnyButtonBaseExtGetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetValidatorFunc m_wxAnyButtonBaseExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxAnyButtonBase::GetValidator();
    if (*m_wxAnyButtonBaseExtGetValidator != NULL){
      return m_wxAnyButtonBaseExtGetValidator(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetWindowBorderSizeFunc m_wxAnyButtonBaseExtGetWindowBorderSize = NULL;
  virtual wxSize GetWindowBorderSize() const override
  {
    wxSize res = wxAnyButtonBase::GetWindowBorderSize();
    if (*m_wxAnyButtonBaseExtGetWindowBorderSize != NULL){
      return m_wxAnyButtonBaseExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetWindowStyleFlagFunc m_wxAnyButtonBaseExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxAnyButtonBase::GetWindowStyleFlag();
    if (*m_wxAnyButtonBaseExtGetWindowStyleFlag != NULL){
      return m_wxAnyButtonBaseExtGetWindowStyleFlag(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtHasCaptureFunc m_wxAnyButtonBaseExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxAnyButtonBase::HasCapture();
    if (*m_wxAnyButtonBaseExtHasCapture != NULL){
      return m_wxAnyButtonBaseExtHasCapture(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtHasFocusFunc m_wxAnyButtonBaseExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxAnyButtonBase::HasFocus();
    if (*m_wxAnyButtonBaseExtHasFocus != NULL){
      return m_wxAnyButtonBaseExtHasFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtHasMultiplePagesFunc m_wxAnyButtonBaseExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxAnyButtonBase::HasMultiplePages();
    if (*m_wxAnyButtonBaseExtHasMultiplePages != NULL){
      return m_wxAnyButtonBaseExtHasMultiplePages(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtHasTransparentBackgroundFunc m_wxAnyButtonBaseExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxAnyButtonBase::HasTransparentBackground();
    if (*m_wxAnyButtonBaseExtHasTransparentBackground != NULL){
      return m_wxAnyButtonBaseExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtHideWithEffect__wxShowEffectunsignedintFunc m_wxAnyButtonBaseExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxAnyButtonBase::HideWithEffect(effect, timeout);
    if (*m_wxAnyButtonBaseExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxAnyButtonBaseExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtInformFirstDirection__intintintFunc m_wxAnyButtonBaseExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxAnyButtonBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxAnyButtonBaseExtInformFirstDirection__intintint != NULL){
      return m_wxAnyButtonBaseExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtInheritAttributesFunc m_wxAnyButtonBaseExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxAnyButtonBase::InheritAttributes();
    if (*m_wxAnyButtonBaseExtInheritAttributes != NULL){
      return m_wxAnyButtonBaseExtInheritAttributes(this);
    }
  }
  wxAnyButtonBaseExtInitDialogFunc m_wxAnyButtonBaseExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxAnyButtonBase::InitDialog();
    if (*m_wxAnyButtonBaseExtInitDialog != NULL){
      return m_wxAnyButtonBaseExtInitDialog(this);
    }
  }
  wxAnyButtonBaseExtIsClientAreaChild__wxWindowCPFunc m_wxAnyButtonBaseExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxAnyButtonBase::IsClientAreaChild(child);
    if (*m_wxAnyButtonBaseExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxAnyButtonBaseExtIsClientAreaChild__wxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtIsDoubleBufferedFunc m_wxAnyButtonBaseExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxAnyButtonBase::IsDoubleBuffered();
    if (*m_wxAnyButtonBaseExtIsDoubleBuffered != NULL){
      return m_wxAnyButtonBaseExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtIsRetainedFunc m_wxAnyButtonBaseExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxAnyButtonBase::IsRetained();
    if (*m_wxAnyButtonBaseExtIsRetained != NULL){
      return m_wxAnyButtonBaseExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtIsScrollbarAlwaysShown__intFunc m_wxAnyButtonBaseExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxAnyButtonBase::IsScrollbarAlwaysShown(orient);
    if (*m_wxAnyButtonBaseExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxAnyButtonBaseExtIsScrollbarAlwaysShown__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtIsShownFunc m_wxAnyButtonBaseExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxAnyButtonBase::IsShown();
    if (*m_wxAnyButtonBaseExtIsShown != NULL){
      return m_wxAnyButtonBaseExtIsShown(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtIsShownOnScreenFunc m_wxAnyButtonBaseExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxAnyButtonBase::IsShownOnScreen();
    if (*m_wxAnyButtonBaseExtIsShownOnScreen != NULL){
      return m_wxAnyButtonBaseExtIsShownOnScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtIsThisEnabledFunc m_wxAnyButtonBaseExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxAnyButtonBase::IsThisEnabled();
    if (*m_wxAnyButtonBaseExtIsThisEnabled != NULL){
      return m_wxAnyButtonBaseExtIsThisEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtIsTopLevelFunc m_wxAnyButtonBaseExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxAnyButtonBase::IsTopLevel();
    if (*m_wxAnyButtonBaseExtIsTopLevel != NULL){
      return m_wxAnyButtonBaseExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxAnyButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxAnyButtonBase::IsTopNavigationDomain(kind);
    if (*m_wxAnyButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxAnyButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtIsTransparentBackgroundSupported__wxStringPFunc m_wxAnyButtonBaseExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxAnyButtonBase::IsTransparentBackgroundSupported(reason);
    if (*m_wxAnyButtonBaseExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxAnyButtonBaseExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtLayoutFunc m_wxAnyButtonBaseExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxAnyButtonBase::Layout();
    if (*m_wxAnyButtonBaseExtLayout != NULL){
      return m_wxAnyButtonBaseExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtLayoutPhase1__intPFunc m_wxAnyButtonBaseExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxAnyButtonBase::LayoutPhase1(noChanges);
    if (*m_wxAnyButtonBaseExtLayoutPhase1__intP != NULL){
      return m_wxAnyButtonBaseExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtLayoutPhase2__intPFunc m_wxAnyButtonBaseExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxAnyButtonBase::LayoutPhase2(noChanges);
    if (*m_wxAnyButtonBaseExtLayoutPhase2__intP != NULL){
      return m_wxAnyButtonBaseExtLayoutPhase2__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtLowerFunc m_wxAnyButtonBaseExtLower = NULL;
  virtual void Lower() override
  {
    wxAnyButtonBase::Lower();
    if (*m_wxAnyButtonBaseExtLower != NULL){
      return m_wxAnyButtonBaseExtLower(this);
    }
  }
  wxAnyButtonBaseExtMoveConstraint__intintFunc m_wxAnyButtonBaseExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxAnyButtonBase::MoveConstraint(x, y);
    if (*m_wxAnyButtonBaseExtMoveConstraint__intint != NULL){
      return m_wxAnyButtonBaseExtMoveConstraint__intint(this, x, y);
    }
  }
  wxAnyButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxAnyButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxAnyButtonBase::OnDynamicBind(entry);
    if (*m_wxAnyButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxAnyButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtOnInternalIdleFunc m_wxAnyButtonBaseExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxAnyButtonBase::OnInternalIdle();
    if (*m_wxAnyButtonBaseExtOnInternalIdle != NULL){
      return m_wxAnyButtonBaseExtOnInternalIdle(this);
    }
  }
  wxAnyButtonBaseExtPrepareDC__wxDCRFunc m_wxAnyButtonBaseExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxAnyButtonBase::PrepareDC(dc);
    if (*m_wxAnyButtonBaseExtPrepareDC__wxDCR != NULL){
      return m_wxAnyButtonBaseExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxAnyButtonBaseExtProcessEvent__wxEventRFunc m_wxAnyButtonBaseExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxAnyButtonBase::ProcessEvent(event);
    if (*m_wxAnyButtonBaseExtProcessEvent__wxEventR != NULL){
      return m_wxAnyButtonBaseExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtQueueEvent__wxEventPFunc m_wxAnyButtonBaseExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxAnyButtonBase::QueueEvent(event);
    if (*m_wxAnyButtonBaseExtQueueEvent__wxEventP != NULL){
      return m_wxAnyButtonBaseExtQueueEvent__wxEventP(this, event);
    }
  }
  wxAnyButtonBaseExtRaiseFunc m_wxAnyButtonBaseExtRaise = NULL;
  virtual void Raise() override
  {
    wxAnyButtonBase::Raise();
    if (*m_wxAnyButtonBaseExtRaise != NULL){
      return m_wxAnyButtonBaseExtRaise(this);
    }
  }
  wxAnyButtonBaseExtRefresh__boolwxRectCPFunc m_wxAnyButtonBaseExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxAnyButtonBase::Refresh(eraseBackground, rect);
    if (*m_wxAnyButtonBaseExtRefresh__boolwxRectCP != NULL){
      return m_wxAnyButtonBaseExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxAnyButtonBaseExtRegisterHotKey__intintintFunc m_wxAnyButtonBaseExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxAnyButtonBase::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxAnyButtonBaseExtRegisterHotKey__intintint != NULL){
      return m_wxAnyButtonBaseExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtRemoveChild__wxWindowBasePFunc m_wxAnyButtonBaseExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxAnyButtonBase::RemoveChild(child);
    if (*m_wxAnyButtonBaseExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxAnyButtonBaseExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxAnyButtonBaseExtReparent__wxWindowBasePFunc m_wxAnyButtonBaseExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxAnyButtonBase::Reparent(newParent);
    if (*m_wxAnyButtonBaseExtReparent__wxWindowBaseP != NULL){
      return m_wxAnyButtonBaseExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtScrollLines__intFunc m_wxAnyButtonBaseExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxAnyButtonBase::ScrollLines(lines);
    if (*m_wxAnyButtonBaseExtScrollLines__int != NULL){
      return m_wxAnyButtonBaseExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtScrollPages__intFunc m_wxAnyButtonBaseExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxAnyButtonBase::ScrollPages(pages);
    if (*m_wxAnyButtonBaseExtScrollPages__int != NULL){
      return m_wxAnyButtonBaseExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtScrollWindow__intintwxRectCPFunc m_wxAnyButtonBaseExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxAnyButtonBase::ScrollWindow(dx, dy, rect);
    if (*m_wxAnyButtonBaseExtScrollWindow__intintwxRectCP != NULL){
      return m_wxAnyButtonBaseExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxAnyButtonBaseExtSearchEventTable__wxEventTableRwxEventRFunc m_wxAnyButtonBaseExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxAnyButtonBase::SearchEventTable(table, event);
    if (*m_wxAnyButtonBaseExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxAnyButtonBaseExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSendIdleEvents__wxIdleEventRFunc m_wxAnyButtonBaseExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxAnyButtonBase::SendIdleEvents(event);
    if (*m_wxAnyButtonBaseExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxAnyButtonBaseExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSendSizeEvent__intFunc m_wxAnyButtonBaseExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxAnyButtonBase::SendSizeEvent(flags);
    if (*m_wxAnyButtonBaseExtSendSizeEvent__int != NULL){
      return m_wxAnyButtonBaseExtSendSizeEvent__int(this, flags);
    }
  }
  wxAnyButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxAnyButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxAnyButtonBase::SetAcceleratorTable(accel);
    if (*m_wxAnyButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxAnyButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxAnyButtonBaseExtSetBackgroundColour__wxColourCRFunc m_wxAnyButtonBaseExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxAnyButtonBase::SetBackgroundColour(colour);
    if (*m_wxAnyButtonBaseExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxAnyButtonBaseExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxAnyButtonBaseExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxAnyButtonBase::SetBackgroundStyle(style);
    if (*m_wxAnyButtonBaseExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxAnyButtonBaseExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetCanFocus__boolFunc m_wxAnyButtonBaseExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxAnyButtonBase::SetCanFocus(canFocus);
    if (*m_wxAnyButtonBaseExtSetCanFocus__bool != NULL){
      return m_wxAnyButtonBaseExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxAnyButtonBaseExtSetConstraintSizes__boolFunc m_wxAnyButtonBaseExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxAnyButtonBase::SetConstraintSizes(recurse);
    if (*m_wxAnyButtonBaseExtSetConstraintSizes__bool != NULL){
      return m_wxAnyButtonBaseExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxAnyButtonBaseExtSetCursor__wxCursorCRFunc m_wxAnyButtonBaseExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxAnyButtonBase::SetCursor(cursor);
    if (*m_wxAnyButtonBaseExtSetCursor__wxCursorCR != NULL){
      return m_wxAnyButtonBaseExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetDoubleBuffered__boolFunc m_wxAnyButtonBaseExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxAnyButtonBase::SetDoubleBuffered(on);
    if (*m_wxAnyButtonBaseExtSetDoubleBuffered__bool != NULL){
      return m_wxAnyButtonBaseExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxAnyButtonBaseExtSetDropTarget__wxDropTargetPFunc m_wxAnyButtonBaseExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxAnyButtonBase::SetDropTarget(dropTarget);
    if (*m_wxAnyButtonBaseExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxAnyButtonBaseExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxAnyButtonBaseExtSetExtraStyle__longFunc m_wxAnyButtonBaseExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxAnyButtonBase::SetExtraStyle(exStyle);
    if (*m_wxAnyButtonBaseExtSetExtraStyle__long != NULL){
      return m_wxAnyButtonBaseExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxAnyButtonBaseExtSetFocusFunc m_wxAnyButtonBaseExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxAnyButtonBase::SetFocus();
    if (*m_wxAnyButtonBaseExtSetFocus != NULL){
      return m_wxAnyButtonBaseExtSetFocus(this);
    }
  }
  wxAnyButtonBaseExtSetFocusFromKbdFunc m_wxAnyButtonBaseExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxAnyButtonBase::SetFocusFromKbd();
    if (*m_wxAnyButtonBaseExtSetFocusFromKbd != NULL){
      return m_wxAnyButtonBaseExtSetFocusFromKbd(this);
    }
  }
  wxAnyButtonBaseExtSetFont__wxFontCRFunc m_wxAnyButtonBaseExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxAnyButtonBase::SetFont(font);
    if (*m_wxAnyButtonBaseExtSetFont__wxFontCR != NULL){
      return m_wxAnyButtonBaseExtSetFont__wxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetForegroundColour__wxColourCRFunc m_wxAnyButtonBaseExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxAnyButtonBase::SetForegroundColour(colour);
    if (*m_wxAnyButtonBaseExtSetForegroundColour__wxColourCR != NULL){
      return m_wxAnyButtonBaseExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetId__wxWindowIDFunc m_wxAnyButtonBaseExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxAnyButtonBase::SetId(winid);
    if (*m_wxAnyButtonBaseExtSetId__wxWindowID != NULL){
      return m_wxAnyButtonBaseExtSetId__wxWindowID(this, winid);
    }
  }
  wxAnyButtonBaseExtSetLabel__wxStringCRFunc m_wxAnyButtonBaseExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxAnyButtonBase::SetLabel(label);
    if (*m_wxAnyButtonBaseExtSetLabel__wxStringCR != NULL){
      return m_wxAnyButtonBaseExtSetLabel__wxStringCR(this, label);
    }
  }
  wxAnyButtonBaseExtSetLabelText__wxStringCRFunc m_wxAnyButtonBaseExtSetLabelText__wxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxAnyButtonBase::SetLabelText(text);
    if (*m_wxAnyButtonBaseExtSetLabelText__wxStringCR != NULL){
      return m_wxAnyButtonBaseExtSetLabelText__wxStringCR(this, text);
    }
  }
  wxAnyButtonBaseExtSetLayoutDirection__wxLayoutDirectionFunc m_wxAnyButtonBaseExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxAnyButtonBase::SetLayoutDirection(dir);
    if (*m_wxAnyButtonBaseExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxAnyButtonBaseExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxAnyButtonBaseExtSetMaxClientSize__wxSizeCRFunc m_wxAnyButtonBaseExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxAnyButtonBase::SetMaxClientSize(size);
    if (*m_wxAnyButtonBaseExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxAnyButtonBaseExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxAnyButtonBaseExtSetMaxSize__wxSizeCRFunc m_wxAnyButtonBaseExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxAnyButtonBase::SetMaxSize(maxSize);
    if (*m_wxAnyButtonBaseExtSetMaxSize__wxSizeCR != NULL){
      return m_wxAnyButtonBaseExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxAnyButtonBaseExtSetMinClientSize__wxSizeCRFunc m_wxAnyButtonBaseExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxAnyButtonBase::SetMinClientSize(size);
    if (*m_wxAnyButtonBaseExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxAnyButtonBaseExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxAnyButtonBaseExtSetMinSize__wxSizeCRFunc m_wxAnyButtonBaseExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxAnyButtonBase::SetMinSize(minSize);
    if (*m_wxAnyButtonBaseExtSetMinSize__wxSizeCR != NULL){
      return m_wxAnyButtonBaseExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxAnyButtonBaseExtSetName__wxStringCRFunc m_wxAnyButtonBaseExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxAnyButtonBase::SetName(name);
    if (*m_wxAnyButtonBaseExtSetName__wxStringCR != NULL){
      return m_wxAnyButtonBaseExtSetName__wxStringCR(this, name);
    }
  }
  wxAnyButtonBaseExtSetNextHandler__wxEvtHandlerPFunc m_wxAnyButtonBaseExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxAnyButtonBase::SetNextHandler(handler);
    if (*m_wxAnyButtonBaseExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxAnyButtonBaseExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAnyButtonBaseExtSetPreviousHandler__wxEvtHandlerPFunc m_wxAnyButtonBaseExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxAnyButtonBase::SetPreviousHandler(handler);
    if (*m_wxAnyButtonBaseExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxAnyButtonBaseExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAnyButtonBaseExtSetScrollPos__intintboolFunc m_wxAnyButtonBaseExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxAnyButtonBase::SetScrollPos(orient, pos, refresh);
    if (*m_wxAnyButtonBaseExtSetScrollPos__intintbool != NULL){
      return m_wxAnyButtonBaseExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxAnyButtonBaseExtSetScrollbar__intintintintboolFunc m_wxAnyButtonBaseExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxAnyButtonBase::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxAnyButtonBaseExtSetScrollbar__intintintintbool != NULL){
      return m_wxAnyButtonBaseExtSetScrollbar__intintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxAnyButtonBaseExtSetSizeConstraint__intintintintFunc m_wxAnyButtonBaseExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxAnyButtonBase::SetSizeConstraint(x, y, w, h);
    if (*m_wxAnyButtonBaseExtSetSizeConstraint__intintintint != NULL){
      return m_wxAnyButtonBaseExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxAnyButtonBaseExtSetSizeHints__intintintintintintFunc m_wxAnyButtonBaseExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxAnyButtonBase::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxAnyButtonBaseExtSetSizeHints__intintintintintint != NULL){
      return m_wxAnyButtonBaseExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxAnyButtonBaseExtSetThemeEnabled__boolFunc m_wxAnyButtonBaseExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxAnyButtonBase::SetThemeEnabled(enableTheme);
    if (*m_wxAnyButtonBaseExtSetThemeEnabled__bool != NULL){
      return m_wxAnyButtonBaseExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxAnyButtonBaseExtSetTransparent__wxByteFunc m_wxAnyButtonBaseExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxAnyButtonBase::SetTransparent(alpha);
    if (*m_wxAnyButtonBaseExtSetTransparent__wxByte != NULL){
      return m_wxAnyButtonBaseExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetValidator__wxValidatorCRFunc m_wxAnyButtonBaseExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxAnyButtonBase::SetValidator(validator);
    if (*m_wxAnyButtonBaseExtSetValidator__wxValidatorCR != NULL){
      return m_wxAnyButtonBaseExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxAnyButtonBaseExtSetWindowStyleFlag__longFunc m_wxAnyButtonBaseExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxAnyButtonBase::SetWindowStyleFlag(style);
    if (*m_wxAnyButtonBaseExtSetWindowStyleFlag__long != NULL){
      return m_wxAnyButtonBaseExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxAnyButtonBaseExtShouldInheritColoursFunc m_wxAnyButtonBaseExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxAnyButtonBase::ShouldInheritColours();
    if (*m_wxAnyButtonBaseExtShouldInheritColours != NULL){
      return m_wxAnyButtonBaseExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtShow__boolFunc m_wxAnyButtonBaseExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxAnyButtonBase::Show(show);
    if (*m_wxAnyButtonBaseExtShow__bool != NULL){
      return m_wxAnyButtonBaseExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtShowWithEffect__wxShowEffectunsignedintFunc m_wxAnyButtonBaseExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxAnyButtonBase::ShowWithEffect(effect, timeout);
    if (*m_wxAnyButtonBaseExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxAnyButtonBaseExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtTransferDataFromWindowFunc m_wxAnyButtonBaseExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxAnyButtonBase::TransferDataFromWindow();
    if (*m_wxAnyButtonBaseExtTransferDataFromWindow != NULL){
      return m_wxAnyButtonBaseExtTransferDataFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtTransferDataToWindowFunc m_wxAnyButtonBaseExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxAnyButtonBase::TransferDataToWindow();
    if (*m_wxAnyButtonBaseExtTransferDataToWindow != NULL){
      return m_wxAnyButtonBaseExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtTriggerScrollEvent__wxEventTypeFunc m_wxAnyButtonBaseExtTriggerScrollEvent__wxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxAnyButtonBase::TriggerScrollEvent(scrollEvent);
    if (*m_wxAnyButtonBaseExtTriggerScrollEvent__wxEventType != NULL){
      return m_wxAnyButtonBaseExtTriggerScrollEvent__wxEventType(this, scrollEvent);
    }
  }
  wxAnyButtonBaseExtTryAfter__wxEventRFunc m_wxAnyButtonBaseExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxAnyButtonBase::TryAfter(event);
    if (*m_wxAnyButtonBaseExtTryAfter__wxEventR != NULL){
      return m_wxAnyButtonBaseExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtTryBefore__wxEventRFunc m_wxAnyButtonBaseExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxAnyButtonBase::TryBefore(event);
    if (*m_wxAnyButtonBaseExtTryBefore__wxEventR != NULL){
      return m_wxAnyButtonBaseExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtUnregisterHotKey__intFunc m_wxAnyButtonBaseExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxAnyButtonBase::UnregisterHotKey(hotkeyId);
    if (*m_wxAnyButtonBaseExtUnregisterHotKey__int != NULL){
      return m_wxAnyButtonBaseExtUnregisterHotKey__int(this, hotkeyId, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtUpdateFunc m_wxAnyButtonBaseExtUpdate = NULL;
  virtual void Update() override
  {
    wxAnyButtonBase::Update();
    if (*m_wxAnyButtonBaseExtUpdate != NULL){
      return m_wxAnyButtonBaseExtUpdate(this);
    }
  }
  wxAnyButtonBaseExtUpdateWindowUI__longFunc m_wxAnyButtonBaseExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxAnyButtonBase::UpdateWindowUI(flags);
    if (*m_wxAnyButtonBaseExtUpdateWindowUI__long != NULL){
      return m_wxAnyButtonBaseExtUpdateWindowUI__long(this, flags);
    }
  }
  wxAnyButtonBaseExtValidateFunc m_wxAnyButtonBaseExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxAnyButtonBase::Validate();
    if (*m_wxAnyButtonBaseExtValidate != NULL){
      return m_wxAnyButtonBaseExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxAnyButtonBaseExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxAnyButtonBase::WXAdjustFontToOwnPPI(font);
    if (*m_wxAnyButtonBaseExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxAnyButtonBaseExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxAnyButtonBaseExtWXGetTextEntryFunc m_wxAnyButtonBaseExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxAnyButtonBase::WXGetTextEntry();
    if (*m_wxAnyButtonBaseExtWXGetTextEntry != NULL){
      return m_wxAnyButtonBaseExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXReservedEvtHandler1__voidPFunc m_wxAnyButtonBaseExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxAnyButtonBase::WXReservedEvtHandler1(param0);
    if (*m_wxAnyButtonBaseExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxAnyButtonBaseExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXReservedEvtHandler2__voidPFunc m_wxAnyButtonBaseExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxAnyButtonBase::WXReservedEvtHandler2(param0);
    if (*m_wxAnyButtonBaseExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxAnyButtonBaseExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXReservedWindow1__voidPFunc m_wxAnyButtonBaseExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxAnyButtonBase::WXReservedWindow1(param0);
    if (*m_wxAnyButtonBaseExtWXReservedWindow1__voidP != NULL){
      return m_wxAnyButtonBaseExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXReservedWindow2__voidPFunc m_wxAnyButtonBaseExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxAnyButtonBase::WXReservedWindow2(param0);
    if (*m_wxAnyButtonBaseExtWXReservedWindow2__voidP != NULL){
      return m_wxAnyButtonBaseExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXReservedWindow3__voidPFunc m_wxAnyButtonBaseExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxAnyButtonBase::WXReservedWindow3(param0);
    if (*m_wxAnyButtonBaseExtWXReservedWindow3__voidP != NULL){
      return m_wxAnyButtonBaseExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxAnyButtonBaseExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxAnyButtonBase::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxAnyButtonBaseExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxAnyButtonBaseExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxAnyButtonBaseExtWarpPointer__intintFunc m_wxAnyButtonBaseExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxAnyButtonBase::WarpPointer(x, y);
    if (*m_wxAnyButtonBaseExtWarpPointer__intint != NULL){
      return m_wxAnyButtonBaseExtWarpPointer__intint(this, x, y);
    }
  }
  wxAnyButtonBaseExtWindowToClientSize__wxSizeCRFunc m_wxAnyButtonBaseExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButtonBase::WindowToClientSize(size);
    if (*m_wxAnyButtonBaseExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxAnyButtonBaseExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExt(wxAnyButtonBaseExtAcceptsFocusFunc a_AcceptsFocus, wxAnyButtonBaseExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxAnyButtonBaseExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxAnyButtonBaseExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxAnyButtonBaseExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxAnyButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxAnyButtonBaseExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxAnyButtonBaseExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxAnyButtonBaseExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxAnyButtonBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxAnyButtonBaseExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxAnyButtonBaseExtCanBeFocusedFunc a_CanBeFocused, wxAnyButtonBaseExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxAnyButtonBaseExtCanScroll__intFunc a_CanScroll__int, wxAnyButtonBaseExtCanSetTransparentFunc a_CanSetTransparent, wxAnyButtonBaseExtClearBackgroundFunc a_ClearBackground, wxAnyButtonBaseExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxAnyButtonBaseExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxAnyButtonBaseExtCommand__wxCommandEventRFunc a_Command__wxCommandEventR, wxAnyButtonBaseExtCreateRefDataFunc a_CreateRefData, wxAnyButtonBaseExtDestroyFunc a_Destroy, wxAnyButtonBaseExtDissociateHandleFunc a_DissociateHandle, wxAnyButtonBaseExtDoCaptureMouseFunc a_DoCaptureMouse, wxAnyButtonBaseExtDoCentre__intFunc a_DoCentre__int, wxAnyButtonBaseExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxAnyButtonBaseExtDoEnable__boolFunc a_DoEnable__bool, wxAnyButtonBaseExtDoFreezeFunc a_DoFreeze, wxAnyButtonBaseExtDoGetAuthNeededFunc a_DoGetAuthNeeded, wxAnyButtonBaseExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxAnyButtonBaseExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxAnyButtonBaseExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxAnyButtonBaseExtDoGetBestSizeFunc a_DoGetBestSize, wxAnyButtonBaseExtDoGetBitmap__wxAnyButtonBaseNStateFunc a_DoGetBitmap__wxAnyButtonBaseNState, wxAnyButtonBaseExtDoGetBitmapMarginsFunc a_DoGetBitmapMargins, wxAnyButtonBaseExtDoGetClientDataFunc a_DoGetClientData, wxAnyButtonBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxAnyButtonBaseExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxAnyButtonBaseExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxAnyButtonBaseExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxAnyButtonBaseExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxAnyButtonBaseExtDoGetSizeFromClientSize__wxSizeCRFunc a_DoGetSizeFromClientSize__wxSizeCR, wxAnyButtonBaseExtDoGetSizeFromTextSize__intintFunc a_DoGetSizeFromTextSize__intint, wxAnyButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxAnyButtonBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxAnyButtonBaseExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxAnyButtonBaseExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxAnyButtonBaseExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxAnyButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxAnyButtonBaseExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxAnyButtonBaseExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxAnyButtonBaseExtDoPhase__intFunc a_DoPhase__int, wxAnyButtonBaseExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxAnyButtonBaseExtDoReleaseMouseFunc a_DoReleaseMouse, wxAnyButtonBaseExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxAnyButtonBaseExtDoSetAuthNeeded__boolFunc a_DoSetAuthNeeded__bool, wxAnyButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc a_DoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState, wxAnyButtonBaseExtDoSetBitmapMargins__wxCoordwxCoordFunc a_DoSetBitmapMargins__wxCoordwxCoord, wxAnyButtonBaseExtDoSetBitmapPosition__wxDirectionFunc a_DoSetBitmapPosition__wxDirection, wxAnyButtonBaseExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxAnyButtonBaseExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxAnyButtonBaseExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxAnyButtonBaseExtDoSetLabelMarkup__wxStringCRFunc a_DoSetLabelMarkup__wxStringCR, wxAnyButtonBaseExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxAnyButtonBaseExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxAnyButtonBaseExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxAnyButtonBaseExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxAnyButtonBaseExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxAnyButtonBaseExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxAnyButtonBaseExtDoThawFunc a_DoThaw, wxAnyButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxAnyButtonBaseExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxAnyButtonBaseExtEnable__boolFunc a_Enable__bool, wxAnyButtonBaseExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxAnyButtonBaseExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxAnyButtonBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxAnyButtonBaseExtFitFunc a_Fit, wxAnyButtonBaseExtFitInsideFunc a_FitInside, wxAnyButtonBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxAnyButtonBaseExtGetCharHeightFunc a_GetCharHeight, wxAnyButtonBaseExtGetCharWidthFunc a_GetCharWidth, wxAnyButtonBaseExtGetClassInfoFunc a_GetClassInfo, wxAnyButtonBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxAnyButtonBaseExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxAnyButtonBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxAnyButtonBaseExtGetDPIFunc a_GetDPI, wxAnyButtonBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxAnyButtonBaseExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxAnyButtonBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxAnyButtonBaseExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxAnyButtonBaseExtGetDropTargetFunc a_GetDropTarget, wxAnyButtonBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxAnyButtonBaseExtGetEventHashTableFunc a_GetEventHashTable, wxAnyButtonBaseExtGetEventTableFunc a_GetEventTable, wxAnyButtonBaseExtGetHandleFunc a_GetHandle, wxAnyButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxAnyButtonBaseExtGetLabelFunc a_GetLabel, wxAnyButtonBaseExtGetLabelTextFunc a_GetLabelText, wxAnyButtonBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxAnyButtonBaseExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxAnyButtonBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxAnyButtonBaseExtGetMaxSizeFunc a_GetMaxSize, wxAnyButtonBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxAnyButtonBaseExtGetMinSizeFunc a_GetMinSize, wxAnyButtonBaseExtGetNameFunc a_GetName, wxAnyButtonBaseExtGetNormalStateFunc a_GetNormalState, wxAnyButtonBaseExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxAnyButtonBaseExtGetScrollPos__intFunc a_GetScrollPos__int, wxAnyButtonBaseExtGetScrollRange__intFunc a_GetScrollRange__int, wxAnyButtonBaseExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxAnyButtonBaseExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxAnyButtonBaseExtGetThemeEnabledFunc a_GetThemeEnabled, wxAnyButtonBaseExtGetTransparentFunc a_GetTransparent, wxAnyButtonBaseExtGetValidatorFunc a_GetValidator, wxAnyButtonBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxAnyButtonBaseExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxAnyButtonBaseExtHasCaptureFunc a_HasCapture, wxAnyButtonBaseExtHasFocusFunc a_HasFocus, wxAnyButtonBaseExtHasMultiplePagesFunc a_HasMultiplePages, wxAnyButtonBaseExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxAnyButtonBaseExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxAnyButtonBaseExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxAnyButtonBaseExtInheritAttributesFunc a_InheritAttributes, wxAnyButtonBaseExtInitDialogFunc a_InitDialog, wxAnyButtonBaseExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxAnyButtonBaseExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxAnyButtonBaseExtIsRetainedFunc a_IsRetained, wxAnyButtonBaseExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxAnyButtonBaseExtIsShownFunc a_IsShown, wxAnyButtonBaseExtIsShownOnScreenFunc a_IsShownOnScreen, wxAnyButtonBaseExtIsThisEnabledFunc a_IsThisEnabled, wxAnyButtonBaseExtIsTopLevelFunc a_IsTopLevel, wxAnyButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxAnyButtonBaseExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxAnyButtonBaseExtLayoutFunc a_Layout, wxAnyButtonBaseExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxAnyButtonBaseExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxAnyButtonBaseExtLowerFunc a_Lower, wxAnyButtonBaseExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxAnyButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxAnyButtonBaseExtOnInternalIdleFunc a_OnInternalIdle, wxAnyButtonBaseExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxAnyButtonBaseExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxAnyButtonBaseExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxAnyButtonBaseExtRaiseFunc a_Raise, wxAnyButtonBaseExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxAnyButtonBaseExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxAnyButtonBaseExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxAnyButtonBaseExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxAnyButtonBaseExtScrollLines__intFunc a_ScrollLines__int, wxAnyButtonBaseExtScrollPages__intFunc a_ScrollPages__int, wxAnyButtonBaseExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxAnyButtonBaseExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxAnyButtonBaseExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxAnyButtonBaseExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxAnyButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxAnyButtonBaseExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxAnyButtonBaseExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxAnyButtonBaseExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxAnyButtonBaseExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxAnyButtonBaseExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxAnyButtonBaseExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxAnyButtonBaseExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxAnyButtonBaseExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxAnyButtonBaseExtSetFocusFunc a_SetFocus, wxAnyButtonBaseExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxAnyButtonBaseExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxAnyButtonBaseExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxAnyButtonBaseExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxAnyButtonBaseExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxAnyButtonBaseExtSetLabelText__wxStringCRFunc a_SetLabelText__wxStringCR, wxAnyButtonBaseExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxAnyButtonBaseExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxAnyButtonBaseExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxAnyButtonBaseExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxAnyButtonBaseExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxAnyButtonBaseExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxAnyButtonBaseExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxAnyButtonBaseExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxAnyButtonBaseExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxAnyButtonBaseExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxAnyButtonBaseExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxAnyButtonBaseExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxAnyButtonBaseExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxAnyButtonBaseExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxAnyButtonBaseExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxAnyButtonBaseExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxAnyButtonBaseExtShouldInheritColoursFunc a_ShouldInheritColours, wxAnyButtonBaseExtShow__boolFunc a_Show__bool, wxAnyButtonBaseExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxAnyButtonBaseExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxAnyButtonBaseExtTransferDataToWindowFunc a_TransferDataToWindow, wxAnyButtonBaseExtTriggerScrollEvent__wxEventTypeFunc a_TriggerScrollEvent__wxEventType, wxAnyButtonBaseExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxAnyButtonBaseExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxAnyButtonBaseExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxAnyButtonBaseExtUpdateFunc a_Update, wxAnyButtonBaseExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxAnyButtonBaseExtValidateFunc a_Validate, wxAnyButtonBaseExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxAnyButtonBaseExtWXGetTextEntryFunc a_WXGetTextEntry, wxAnyButtonBaseExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxAnyButtonBaseExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxAnyButtonBaseExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxAnyButtonBaseExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxAnyButtonBaseExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxAnyButtonBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxAnyButtonBaseExtWarpPointer__intintFunc a_WarpPointer__intint, wxAnyButtonBaseExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxAnyButtonBase() {
    m_wxAnyButtonBaseExtAcceptsFocus = a_AcceptsFocus;
    m_wxAnyButtonBaseExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxAnyButtonBaseExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxAnyButtonBaseExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxAnyButtonBaseExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxAnyButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxAnyButtonBaseExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxAnyButtonBaseExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxAnyButtonBaseExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxAnyButtonBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxAnyButtonBaseExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxAnyButtonBaseExtCanBeFocused = a_CanBeFocused;
    m_wxAnyButtonBaseExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxAnyButtonBaseExtCanScroll__int = a_CanScroll__int;
    m_wxAnyButtonBaseExtCanSetTransparent = a_CanSetTransparent;
    m_wxAnyButtonBaseExtClearBackground = a_ClearBackground;
    m_wxAnyButtonBaseExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxAnyButtonBaseExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxAnyButtonBaseExtCommand__wxCommandEventR = a_Command__wxCommandEventR;
    m_wxAnyButtonBaseExtCreateRefData = a_CreateRefData;
    m_wxAnyButtonBaseExtDestroy = a_Destroy;
    m_wxAnyButtonBaseExtDissociateHandle = a_DissociateHandle;
    m_wxAnyButtonBaseExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxAnyButtonBaseExtDoCentre__int = a_DoCentre__int;
    m_wxAnyButtonBaseExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxAnyButtonBaseExtDoEnable__bool = a_DoEnable__bool;
    m_wxAnyButtonBaseExtDoFreeze = a_DoFreeze;
    m_wxAnyButtonBaseExtDoGetAuthNeeded = a_DoGetAuthNeeded;
    m_wxAnyButtonBaseExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxAnyButtonBaseExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxAnyButtonBaseExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxAnyButtonBaseExtDoGetBestSize = a_DoGetBestSize;
    m_wxAnyButtonBaseExtDoGetBitmap__wxAnyButtonBaseNState = a_DoGetBitmap__wxAnyButtonBaseNState;
    m_wxAnyButtonBaseExtDoGetBitmapMargins = a_DoGetBitmapMargins;
    m_wxAnyButtonBaseExtDoGetClientData = a_DoGetClientData;
    m_wxAnyButtonBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxAnyButtonBaseExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxAnyButtonBaseExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxAnyButtonBaseExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxAnyButtonBaseExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxAnyButtonBaseExtDoGetSizeFromClientSize__wxSizeCR = a_DoGetSizeFromClientSize__wxSizeCR;
    m_wxAnyButtonBaseExtDoGetSizeFromTextSize__intint = a_DoGetSizeFromTextSize__intint;
    m_wxAnyButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxAnyButtonBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxAnyButtonBaseExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxAnyButtonBaseExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxAnyButtonBaseExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxAnyButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxAnyButtonBaseExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxAnyButtonBaseExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxAnyButtonBaseExtDoPhase__int = a_DoPhase__int;
    m_wxAnyButtonBaseExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxAnyButtonBaseExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxAnyButtonBaseExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxAnyButtonBaseExtDoSetAuthNeeded__bool = a_DoSetAuthNeeded__bool;
    m_wxAnyButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState = a_DoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState;
    m_wxAnyButtonBaseExtDoSetBitmapMargins__wxCoordwxCoord = a_DoSetBitmapMargins__wxCoordwxCoord;
    m_wxAnyButtonBaseExtDoSetBitmapPosition__wxDirection = a_DoSetBitmapPosition__wxDirection;
    m_wxAnyButtonBaseExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxAnyButtonBaseExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxAnyButtonBaseExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxAnyButtonBaseExtDoSetLabelMarkup__wxStringCR = a_DoSetLabelMarkup__wxStringCR;
    m_wxAnyButtonBaseExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxAnyButtonBaseExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxAnyButtonBaseExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxAnyButtonBaseExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxAnyButtonBaseExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxAnyButtonBaseExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxAnyButtonBaseExtDoThaw = a_DoThaw;
    m_wxAnyButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxAnyButtonBaseExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxAnyButtonBaseExtEnable__bool = a_Enable__bool;
    m_wxAnyButtonBaseExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxAnyButtonBaseExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxAnyButtonBaseExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxAnyButtonBaseExtFit = a_Fit;
    m_wxAnyButtonBaseExtFitInside = a_FitInside;
    m_wxAnyButtonBaseExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxAnyButtonBaseExtGetCharHeight = a_GetCharHeight;
    m_wxAnyButtonBaseExtGetCharWidth = a_GetCharWidth;
    m_wxAnyButtonBaseExtGetClassInfo = a_GetClassInfo;
    m_wxAnyButtonBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxAnyButtonBaseExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
    m_wxAnyButtonBaseExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxAnyButtonBaseExtGetDPI = a_GetDPI;
    m_wxAnyButtonBaseExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxAnyButtonBaseExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxAnyButtonBaseExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxAnyButtonBaseExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxAnyButtonBaseExtGetDropTarget = a_GetDropTarget;
    m_wxAnyButtonBaseExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxAnyButtonBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxAnyButtonBaseExtGetEventTable = a_GetEventTable;
    m_wxAnyButtonBaseExtGetHandle = a_GetHandle;
    m_wxAnyButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxAnyButtonBaseExtGetLabel = a_GetLabel;
    m_wxAnyButtonBaseExtGetLabelText = a_GetLabelText;
    m_wxAnyButtonBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxAnyButtonBaseExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxAnyButtonBaseExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxAnyButtonBaseExtGetMaxSize = a_GetMaxSize;
    m_wxAnyButtonBaseExtGetMinClientSize = a_GetMinClientSize;
    m_wxAnyButtonBaseExtGetMinSize = a_GetMinSize;
    m_wxAnyButtonBaseExtGetName = a_GetName;
    m_wxAnyButtonBaseExtGetNormalState = a_GetNormalState;
    m_wxAnyButtonBaseExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxAnyButtonBaseExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxAnyButtonBaseExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxAnyButtonBaseExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxAnyButtonBaseExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxAnyButtonBaseExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxAnyButtonBaseExtGetTransparent = a_GetTransparent;
    m_wxAnyButtonBaseExtGetValidator = a_GetValidator;
    m_wxAnyButtonBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxAnyButtonBaseExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxAnyButtonBaseExtHasCapture = a_HasCapture;
    m_wxAnyButtonBaseExtHasFocus = a_HasFocus;
    m_wxAnyButtonBaseExtHasMultiplePages = a_HasMultiplePages;
    m_wxAnyButtonBaseExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxAnyButtonBaseExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxAnyButtonBaseExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxAnyButtonBaseExtInheritAttributes = a_InheritAttributes;
    m_wxAnyButtonBaseExtInitDialog = a_InitDialog;
    m_wxAnyButtonBaseExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxAnyButtonBaseExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxAnyButtonBaseExtIsRetained = a_IsRetained;
    m_wxAnyButtonBaseExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxAnyButtonBaseExtIsShown = a_IsShown;
    m_wxAnyButtonBaseExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxAnyButtonBaseExtIsThisEnabled = a_IsThisEnabled;
    m_wxAnyButtonBaseExtIsTopLevel = a_IsTopLevel;
    m_wxAnyButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxAnyButtonBaseExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxAnyButtonBaseExtLayout = a_Layout;
    m_wxAnyButtonBaseExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxAnyButtonBaseExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxAnyButtonBaseExtLower = a_Lower;
    m_wxAnyButtonBaseExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxAnyButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxAnyButtonBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxAnyButtonBaseExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxAnyButtonBaseExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxAnyButtonBaseExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxAnyButtonBaseExtRaise = a_Raise;
    m_wxAnyButtonBaseExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxAnyButtonBaseExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxAnyButtonBaseExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxAnyButtonBaseExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxAnyButtonBaseExtScrollLines__int = a_ScrollLines__int;
    m_wxAnyButtonBaseExtScrollPages__int = a_ScrollPages__int;
    m_wxAnyButtonBaseExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxAnyButtonBaseExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxAnyButtonBaseExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxAnyButtonBaseExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxAnyButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxAnyButtonBaseExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxAnyButtonBaseExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxAnyButtonBaseExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxAnyButtonBaseExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxAnyButtonBaseExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxAnyButtonBaseExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxAnyButtonBaseExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxAnyButtonBaseExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxAnyButtonBaseExtSetFocus = a_SetFocus;
    m_wxAnyButtonBaseExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxAnyButtonBaseExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxAnyButtonBaseExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxAnyButtonBaseExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxAnyButtonBaseExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxAnyButtonBaseExtSetLabelText__wxStringCR = a_SetLabelText__wxStringCR;
    m_wxAnyButtonBaseExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxAnyButtonBaseExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxAnyButtonBaseExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxAnyButtonBaseExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxAnyButtonBaseExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxAnyButtonBaseExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxAnyButtonBaseExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxAnyButtonBaseExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxAnyButtonBaseExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxAnyButtonBaseExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxAnyButtonBaseExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxAnyButtonBaseExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxAnyButtonBaseExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxAnyButtonBaseExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxAnyButtonBaseExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxAnyButtonBaseExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxAnyButtonBaseExtShouldInheritColours = a_ShouldInheritColours;
    m_wxAnyButtonBaseExtShow__bool = a_Show__bool;
    m_wxAnyButtonBaseExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxAnyButtonBaseExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxAnyButtonBaseExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxAnyButtonBaseExtTriggerScrollEvent__wxEventType = a_TriggerScrollEvent__wxEventType;
    m_wxAnyButtonBaseExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxAnyButtonBaseExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxAnyButtonBaseExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxAnyButtonBaseExtUpdate = a_Update;
    m_wxAnyButtonBaseExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxAnyButtonBaseExtValidate = a_Validate;
    m_wxAnyButtonBaseExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxAnyButtonBaseExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxAnyButtonBaseExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxAnyButtonBaseExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxAnyButtonBaseExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxAnyButtonBaseExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxAnyButtonBaseExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxAnyButtonBaseExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxAnyButtonBaseExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxAnyButtonBaseExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
  }
};

class wxAnyButtonExt: public wxAnyButton
{
public:
  wxAnyButtonExt(): wxAnyButton()  {  }
  wxAnyButtonExtAcceptsFocusFunc m_wxAnyButtonExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxAnyButton::AcceptsFocus();
    if (*m_wxAnyButtonExtAcceptsFocus != NULL){
      return m_wxAnyButtonExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtAcceptsFocusFromKeyboardFunc m_wxAnyButtonExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxAnyButton::AcceptsFocusFromKeyboard();
    if (*m_wxAnyButtonExtAcceptsFocusFromKeyboard != NULL){
      return m_wxAnyButtonExtAcceptsFocusFromKeyboard(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtAcceptsFocusRecursivelyFunc m_wxAnyButtonExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxAnyButton::AcceptsFocusRecursively();
    if (*m_wxAnyButtonExtAcceptsFocusRecursively != NULL){
      return m_wxAnyButtonExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtAddChild__wxWindowBasePFunc m_wxAnyButtonExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxAnyButton::AddChild(child);
    if (*m_wxAnyButtonExtAddChild__wxWindowBaseP != NULL){
      return m_wxAnyButtonExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxAnyButtonExtAddPendingEvent__wxEventCRFunc m_wxAnyButtonExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxAnyButton::AddPendingEvent(event);
    if (*m_wxAnyButtonExtAddPendingEvent__wxEventCR != NULL){
      return m_wxAnyButtonExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxAnyButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxAnyButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxAnyButton::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxAnyButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxAnyButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtAdjustForParentClientOrigin__intRintRintFunc m_wxAnyButtonExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxAnyButton::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxAnyButtonExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxAnyButtonExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxAnyButtonExtAlwaysShowScrollbars__boolboolFunc m_wxAnyButtonExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxAnyButton::AlwaysShowScrollbars(horz, vert);
    if (*m_wxAnyButtonExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxAnyButtonExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxAnyButtonExtAssociateHandle__WXWidgetFunc m_wxAnyButtonExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxAnyButton::AssociateHandle(handle);
    if (*m_wxAnyButtonExtAssociateHandle__WXWidget != NULL){
      return m_wxAnyButtonExtAssociateHandle__WXWidget(this, handle);
    }
  }
  wxAnyButtonExtBeginRepositioningChildrenFunc m_wxAnyButtonExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxAnyButton::BeginRepositioningChildren();
    if (*m_wxAnyButtonExtBeginRepositioningChildren != NULL){
      return m_wxAnyButtonExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtCanApplyThemeBorderFunc m_wxAnyButtonExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxAnyButton::CanApplyThemeBorder();
    if (*m_wxAnyButtonExtCanApplyThemeBorder != NULL){
      return m_wxAnyButtonExtCanApplyThemeBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtCanBeFocusedFunc m_wxAnyButtonExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxAnyButton::CanBeFocused();
    if (*m_wxAnyButtonExtCanBeFocused != NULL){
      return m_wxAnyButtonExtCanBeFocused(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtCanBeOutsideClientAreaFunc m_wxAnyButtonExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxAnyButton::CanBeOutsideClientArea();
    if (*m_wxAnyButtonExtCanBeOutsideClientArea != NULL){
      return m_wxAnyButtonExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtCanScroll__intFunc m_wxAnyButtonExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxAnyButton::CanScroll(orient);
    if (*m_wxAnyButtonExtCanScroll__int != NULL){
      return m_wxAnyButtonExtCanScroll__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtCanSetTransparentFunc m_wxAnyButtonExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxAnyButton::CanSetTransparent();
    if (*m_wxAnyButtonExtCanSetTransparent != NULL){
      return m_wxAnyButtonExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtClearBackgroundFunc m_wxAnyButtonExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxAnyButton::ClearBackground();
    if (*m_wxAnyButtonExtClearBackground != NULL){
      return m_wxAnyButtonExtClearBackground(this);
    }
  }
  wxAnyButtonExtClientToWindowSize__wxSizeCRFunc m_wxAnyButtonExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButton::ClientToWindowSize(size);
    if (*m_wxAnyButtonExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxAnyButtonExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtCloneRefData__wxObjectRefDataCPFunc m_wxAnyButtonExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAnyButton::CloneRefData(data);
    if (*m_wxAnyButtonExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxAnyButtonExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtCommand__wxCommandEventRFunc m_wxAnyButtonExtCommand__wxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxAnyButton::Command(event);
    if (*m_wxAnyButtonExtCommand__wxCommandEventR != NULL){
      return m_wxAnyButtonExtCommand__wxCommandEventR(this, event);
    }
  }
  wxAnyButtonExtCreateRefDataFunc m_wxAnyButtonExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxAnyButton::CreateRefData();
    if (*m_wxAnyButtonExtCreateRefData != NULL){
      return m_wxAnyButtonExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDestroyFunc m_wxAnyButtonExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxAnyButton::Destroy();
    if (*m_wxAnyButtonExtDestroy != NULL){
      return m_wxAnyButtonExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDissociateHandleFunc m_wxAnyButtonExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxAnyButton::DissociateHandle();
    if (*m_wxAnyButtonExtDissociateHandle != NULL){
      return m_wxAnyButtonExtDissociateHandle(this);
    }
  }
  wxAnyButtonExtDoCaptureMouseFunc m_wxAnyButtonExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxAnyButton::DoCaptureMouse();
    if (*m_wxAnyButtonExtDoCaptureMouse != NULL){
      return m_wxAnyButtonExtDoCaptureMouse(this);
    }
  }
  wxAnyButtonExtDoCentre__intFunc m_wxAnyButtonExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxAnyButton::DoCentre(dir);
    if (*m_wxAnyButtonExtDoCentre__int != NULL){
      return m_wxAnyButtonExtDoCentre__int(this, dir);
    }
  }
  wxAnyButtonExtDoClientToScreen__intPintPFunc m_wxAnyButtonExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxAnyButton::DoClientToScreen(x, y);
    if (*m_wxAnyButtonExtDoClientToScreen__intPintP != NULL){
      return m_wxAnyButtonExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxAnyButtonExtDoEnable__boolFunc m_wxAnyButtonExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxAnyButton::DoEnable(enable);
    if (*m_wxAnyButtonExtDoEnable__bool != NULL){
      return m_wxAnyButtonExtDoEnable__bool(this, enable);
    }
  }
  wxAnyButtonExtDoFreezeFunc m_wxAnyButtonExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxAnyButton::DoFreeze();
    if (*m_wxAnyButtonExtDoFreeze != NULL){
      return m_wxAnyButtonExtDoFreeze(this);
    }
  }
  wxAnyButtonExtDoGetAuthNeededFunc m_wxAnyButtonExtDoGetAuthNeeded = NULL;
  virtual bool DoGetAuthNeeded() const override
  {
    bool res = wxAnyButton::DoGetAuthNeeded();
    if (*m_wxAnyButtonExtDoGetAuthNeeded != NULL){
      return m_wxAnyButtonExtDoGetAuthNeeded(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetBestClientHeight__intFunc m_wxAnyButtonExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxAnyButton::DoGetBestClientHeight(width);
    if (*m_wxAnyButtonExtDoGetBestClientHeight__int != NULL){
      return m_wxAnyButtonExtDoGetBestClientHeight__int(this, width, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetBestClientSizeFunc m_wxAnyButtonExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxAnyButton::DoGetBestClientSize();
    if (*m_wxAnyButtonExtDoGetBestClientSize != NULL){
      return m_wxAnyButtonExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetBestClientWidth__intFunc m_wxAnyButtonExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxAnyButton::DoGetBestClientWidth(height);
    if (*m_wxAnyButtonExtDoGetBestClientWidth__int != NULL){
      return m_wxAnyButtonExtDoGetBestClientWidth__int(this, height, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetBestSizeFunc m_wxAnyButtonExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxAnyButton::DoGetBestSize();
    if (*m_wxAnyButtonExtDoGetBestSize != NULL){
      return m_wxAnyButtonExtDoGetBestSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetBitmap__wxAnyButtonBaseNStateFunc m_wxAnyButtonExtDoGetBitmap__wxAnyButtonBaseNState = NULL;
  virtual wxBitmap DoGetBitmap(wxAnyButtonBase::State which) const override
  {
    wxBitmap res = wxAnyButton::DoGetBitmap(which);
    if (*m_wxAnyButtonExtDoGetBitmap__wxAnyButtonBaseNState != NULL){
      return m_wxAnyButtonExtDoGetBitmap__wxAnyButtonBaseNState(this, which, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetBitmapMarginsFunc m_wxAnyButtonExtDoGetBitmapMargins = NULL;
  virtual wxSize DoGetBitmapMargins() const override
  {
    wxSize res = wxAnyButton::DoGetBitmapMargins();
    if (*m_wxAnyButtonExtDoGetBitmapMargins != NULL){
      return m_wxAnyButtonExtDoGetBitmapMargins(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetClientDataFunc m_wxAnyButtonExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxAnyButton::DoGetClientData();
    if (*m_wxAnyButtonExtDoGetClientData != NULL){
      return m_wxAnyButtonExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetClientObjectFunc m_wxAnyButtonExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxAnyButton::DoGetClientObject();
    if (*m_wxAnyButtonExtDoGetClientObject != NULL){
      return m_wxAnyButtonExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetClientSize__intPintPFunc m_wxAnyButtonExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxAnyButton::DoGetClientSize(width, height);
    if (*m_wxAnyButtonExtDoGetClientSize__intPintP != NULL){
      return m_wxAnyButtonExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxAnyButtonExtDoGetPosition__intPintPFunc m_wxAnyButtonExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxAnyButton::DoGetPosition(x, y);
    if (*m_wxAnyButtonExtDoGetPosition__intPintP != NULL){
      return m_wxAnyButtonExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxAnyButtonExtDoGetScreenPosition__intPintPFunc m_wxAnyButtonExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxAnyButton::DoGetScreenPosition(x, y);
    if (*m_wxAnyButtonExtDoGetScreenPosition__intPintP != NULL){
      return m_wxAnyButtonExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxAnyButtonExtDoGetSize__intPintPFunc m_wxAnyButtonExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxAnyButton::DoGetSize(width, height);
    if (*m_wxAnyButtonExtDoGetSize__intPintP != NULL){
      return m_wxAnyButtonExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxAnyButtonExtDoGetSizeFromClientSize__wxSizeCRFunc m_wxAnyButtonExtDoGetSizeFromClientSize__wxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButton::DoGetSizeFromClientSize(size);
    if (*m_wxAnyButtonExtDoGetSizeFromClientSize__wxSizeCR != NULL){
      return m_wxAnyButtonExtDoGetSizeFromClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetSizeFromTextSize__intintFunc m_wxAnyButtonExtDoGetSizeFromTextSize__intint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxAnyButton::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxAnyButtonExtDoGetSizeFromTextSize__intint != NULL){
      return m_wxAnyButtonExtDoGetSizeFromTextSize__intint(this, xlen, ylen, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxAnyButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxAnyButton::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxAnyButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxAnyButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxAnyButtonExtDoGetVirtualSizeFunc m_wxAnyButtonExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxAnyButton::DoGetVirtualSize();
    if (*m_wxAnyButtonExtDoGetVirtualSize != NULL){
      return m_wxAnyButtonExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoHitTest__wxCoordwxCoordFunc m_wxAnyButtonExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxAnyButton::DoHitTest(x, y);
    if (*m_wxAnyButtonExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxAnyButtonExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoIsExposed__intintintintFunc m_wxAnyButtonExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxAnyButton::DoIsExposed(x, y, w, h);
    if (*m_wxAnyButtonExtDoIsExposed__intintintint != NULL){
      return m_wxAnyButtonExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoIsExposed__intintFunc m_wxAnyButtonExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxAnyButton::DoIsExposed(x, y);
    if (*m_wxAnyButtonExtDoIsExposed__intint != NULL){
      return m_wxAnyButtonExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxAnyButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxAnyButton::DoMoveInTabOrder(win, move);
    if (*m_wxAnyButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxAnyButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxAnyButtonExtDoMoveWindow__intintintintFunc m_wxAnyButtonExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxAnyButton::DoMoveWindow(x, y, width, height);
    if (*m_wxAnyButtonExtDoMoveWindow__intintintint != NULL){
      return m_wxAnyButtonExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxAnyButtonExtDoNavigateIn__intFunc m_wxAnyButtonExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxAnyButton::DoNavigateIn(flags);
    if (*m_wxAnyButtonExtDoNavigateIn__int != NULL){
      return m_wxAnyButtonExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoPhase__intFunc m_wxAnyButtonExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxAnyButton::DoPhase(phase);
    if (*m_wxAnyButtonExtDoPhase__int != NULL){
      return m_wxAnyButtonExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoPopupMenu__wxMenuPintintFunc m_wxAnyButtonExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxAnyButton::DoPopupMenu(menu, x, y);
    if (*m_wxAnyButtonExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxAnyButtonExtDoPopupMenu__wxMenuPintint(this, menu, x, y, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoReleaseMouseFunc m_wxAnyButtonExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxAnyButton::DoReleaseMouse();
    if (*m_wxAnyButtonExtDoReleaseMouse != NULL){
      return m_wxAnyButtonExtDoReleaseMouse(this);
    }
  }
  wxAnyButtonExtDoScreenToClient__intPintPFunc m_wxAnyButtonExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxAnyButton::DoScreenToClient(x, y);
    if (*m_wxAnyButtonExtDoScreenToClient__intPintP != NULL){
      return m_wxAnyButtonExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxAnyButtonExtDoSetAuthNeeded__boolFunc m_wxAnyButtonExtDoSetAuthNeeded__bool = NULL;
  virtual void DoSetAuthNeeded(bool show) override
  {
    wxAnyButton::DoSetAuthNeeded(show);
    if (*m_wxAnyButtonExtDoSetAuthNeeded__bool != NULL){
      return m_wxAnyButtonExtDoSetAuthNeeded__bool(this, show);
    }
  }
  wxAnyButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc m_wxAnyButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState = NULL;
  virtual void DoSetBitmap(wxBitmapBundle const& bitmap, wxAnyButtonBase::State which) override
  {
    wxAnyButton::DoSetBitmap(bitmap, which);
    if (*m_wxAnyButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState != NULL){
      return m_wxAnyButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState(this, bitmap, which);
    }
  }
  wxAnyButtonExtDoSetBitmapMargins__wxCoordwxCoordFunc m_wxAnyButtonExtDoSetBitmapMargins__wxCoordwxCoord = NULL;
  virtual void DoSetBitmapMargins(wxCoord x, wxCoord y) override
  {
    wxAnyButton::DoSetBitmapMargins(x, y);
    if (*m_wxAnyButtonExtDoSetBitmapMargins__wxCoordwxCoord != NULL){
      return m_wxAnyButtonExtDoSetBitmapMargins__wxCoordwxCoord(this, x, y);
    }
  }
  wxAnyButtonExtDoSetBitmapPosition__wxDirectionFunc m_wxAnyButtonExtDoSetBitmapPosition__wxDirection = NULL;
  virtual void DoSetBitmapPosition(wxDirection dir) override
  {
    wxAnyButton::DoSetBitmapPosition(dir);
    if (*m_wxAnyButtonExtDoSetBitmapPosition__wxDirection != NULL){
      return m_wxAnyButtonExtDoSetBitmapPosition__wxDirection(this, dir);
    }
  }
  wxAnyButtonExtDoSetClientData__voidPFunc m_wxAnyButtonExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxAnyButton::DoSetClientData(data);
    if (*m_wxAnyButtonExtDoSetClientData__voidP != NULL){
      return m_wxAnyButtonExtDoSetClientData__voidP(this, data);
    }
  }
  wxAnyButtonExtDoSetClientObject__wxClientDataPFunc m_wxAnyButtonExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxAnyButton::DoSetClientObject(data);
    if (*m_wxAnyButtonExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxAnyButtonExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxAnyButtonExtDoSetClientSize__intintFunc m_wxAnyButtonExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxAnyButton::DoSetClientSize(width, height);
    if (*m_wxAnyButtonExtDoSetClientSize__intint != NULL){
      return m_wxAnyButtonExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxAnyButtonExtDoSetLabelMarkup__wxStringCRFunc m_wxAnyButtonExtDoSetLabelMarkup__wxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxAnyButton::DoSetLabelMarkup(markup);
    if (*m_wxAnyButtonExtDoSetLabelMarkup__wxStringCR != NULL){
      return m_wxAnyButtonExtDoSetLabelMarkup__wxStringCR(this, markup, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoSetSize__intintintintintFunc m_wxAnyButtonExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxAnyButton::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxAnyButtonExtDoSetSize__intintintintint != NULL){
      return m_wxAnyButtonExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxAnyButtonExtDoSetSizeHints__intintintintintintFunc m_wxAnyButtonExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxAnyButton::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxAnyButtonExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxAnyButtonExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxAnyButtonExtDoSetToolTip__wxToolTipPFunc m_wxAnyButtonExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxAnyButton::DoSetToolTip(tip);
    if (*m_wxAnyButtonExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxAnyButtonExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxAnyButtonExtDoSetToolTipText__wxStringCRFunc m_wxAnyButtonExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxAnyButton::DoSetToolTipText(tip);
    if (*m_wxAnyButtonExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxAnyButtonExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxAnyButtonExtDoSetVirtualSize__intintFunc m_wxAnyButtonExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxAnyButton::DoSetVirtualSize(x, y);
    if (*m_wxAnyButtonExtDoSetVirtualSize__intint != NULL){
      return m_wxAnyButtonExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxAnyButtonExtDoSetWindowVariant__wxWindowVariantFunc m_wxAnyButtonExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxAnyButton::DoSetWindowVariant(variant);
    if (*m_wxAnyButtonExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxAnyButtonExtDoSetWindowVariant__wxWindowVariant(this, variant);
    }
  }
  wxAnyButtonExtDoThawFunc m_wxAnyButtonExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxAnyButton::DoThaw();
    if (*m_wxAnyButtonExtDoThaw != NULL){
      return m_wxAnyButtonExtDoThaw(this);
    }
  }
  wxAnyButtonExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxAnyButtonExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxAnyButton::DoUpdateWindowUI(event);
    if (*m_wxAnyButtonExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxAnyButtonExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxAnyButtonExtDragAcceptFiles__boolFunc m_wxAnyButtonExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxAnyButton::DragAcceptFiles(accept);
    if (*m_wxAnyButtonExtDragAcceptFiles__bool != NULL){
      return m_wxAnyButtonExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxAnyButtonExtEnable__boolFunc m_wxAnyButtonExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxAnyButton::Enable(enable);
    if (*m_wxAnyButtonExtEnable__bool != NULL){
      return m_wxAnyButtonExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtEnableTouchEvents__intFunc m_wxAnyButtonExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxAnyButton::EnableTouchEvents(eventsMask);
    if (*m_wxAnyButtonExtEnableTouchEvents__int != NULL){
      return m_wxAnyButtonExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtEnableVisibleFocus__boolFunc m_wxAnyButtonExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxAnyButton::EnableVisibleFocus(enabled);
    if (*m_wxAnyButtonExtEnableVisibleFocus__bool != NULL){
      return m_wxAnyButtonExtEnableVisibleFocus__bool(this, enabled);
    }
  }
  wxAnyButtonExtEndRepositioningChildrenFunc m_wxAnyButtonExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxAnyButton::EndRepositioningChildren();
    if (*m_wxAnyButtonExtEndRepositioningChildren != NULL){
      return m_wxAnyButtonExtEndRepositioningChildren(this);
    }
  }
  wxAnyButtonExtFitFunc m_wxAnyButtonExtFit = NULL;
  virtual void Fit() override
  {
    wxAnyButton::Fit();
    if (*m_wxAnyButtonExtFit != NULL){
      return m_wxAnyButtonExtFit(this);
    }
  }
  wxAnyButtonExtFitInsideFunc m_wxAnyButtonExtFitInside = NULL;
  virtual void FitInside() override
  {
    wxAnyButton::FitInside();
    if (*m_wxAnyButtonExtFitInside != NULL){
      return m_wxAnyButtonExtFitInside(this);
    }
  }
  wxAnyButtonExtGetBestVirtualSizeFunc m_wxAnyButtonExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxAnyButton::GetBestVirtualSize();
    if (*m_wxAnyButtonExtGetBestVirtualSize != NULL){
      return m_wxAnyButtonExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetCharHeightFunc m_wxAnyButtonExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxAnyButton::GetCharHeight();
    if (*m_wxAnyButtonExtGetCharHeight != NULL){
      return m_wxAnyButtonExtGetCharHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetCharWidthFunc m_wxAnyButtonExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxAnyButton::GetCharWidth();
    if (*m_wxAnyButtonExtGetCharWidth != NULL){
      return m_wxAnyButtonExtGetCharWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetClassInfoFunc m_wxAnyButtonExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxAnyButton::GetClassInfo();
    if (*m_wxAnyButtonExtGetClassInfo != NULL){
      return m_wxAnyButtonExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetClientAreaOriginFunc m_wxAnyButtonExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxAnyButton::GetClientAreaOrigin();
    if (*m_wxAnyButtonExtGetClientAreaOrigin != NULL){
      return m_wxAnyButtonExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetClientSizeConstraint__intPintPFunc m_wxAnyButtonExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxAnyButton::GetClientSizeConstraint(w, h);
    if (*m_wxAnyButtonExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxAnyButtonExtGetClientSizeConstraint__intPintP(this, w, h);
    }
  }
  wxAnyButtonExtGetContentScaleFactorFunc m_wxAnyButtonExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxAnyButton::GetContentScaleFactor();
    if (*m_wxAnyButtonExtGetContentScaleFactor != NULL){
      return m_wxAnyButtonExtGetContentScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetDPIFunc m_wxAnyButtonExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxAnyButton::GetDPI();
    if (*m_wxAnyButtonExtGetDPI != NULL){
      return m_wxAnyButtonExtGetDPI(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetDPIScaleFactorFunc m_wxAnyButtonExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxAnyButton::GetDPIScaleFactor();
    if (*m_wxAnyButtonExtGetDPIScaleFactor != NULL){
      return m_wxAnyButtonExtGetDPIScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetDefaultAttributesFunc m_wxAnyButtonExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxAnyButton::GetDefaultAttributes();
    if (*m_wxAnyButtonExtGetDefaultAttributes != NULL){
      return m_wxAnyButtonExtGetDefaultAttributes(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetDefaultBorderFunc m_wxAnyButtonExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxAnyButton::GetDefaultBorder();
    if (*m_wxAnyButtonExtGetDefaultBorder != NULL){
      return m_wxAnyButtonExtGetDefaultBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetDefaultBorderForControlFunc m_wxAnyButtonExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxAnyButton::GetDefaultBorderForControl();
    if (*m_wxAnyButtonExtGetDefaultBorderForControl != NULL){
      return m_wxAnyButtonExtGetDefaultBorderForControl(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetDropTargetFunc m_wxAnyButtonExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxAnyButton::GetDropTarget();
    if (*m_wxAnyButtonExtGetDropTarget != NULL){
      return m_wxAnyButtonExtGetDropTarget(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetEffectiveMinSizeFunc m_wxAnyButtonExtGetEffectiveMinSize = NULL;
  virtual wxSize GetEffectiveMinSize() const override
  {
    wxSize res = wxAnyButton::GetEffectiveMinSize();
    if (*m_wxAnyButtonExtGetEffectiveMinSize != NULL){
      return m_wxAnyButtonExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetEventHashTableFunc m_wxAnyButtonExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxAnyButton::GetEventHashTable();
    if (*m_wxAnyButtonExtGetEventHashTable != NULL){
      return m_wxAnyButtonExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetEventTableFunc m_wxAnyButtonExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxAnyButton::GetEventTable();
    if (*m_wxAnyButtonExtGetEventTable != NULL){
      return m_wxAnyButtonExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetHandleFunc m_wxAnyButtonExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxAnyButton::GetHandle();
    if (*m_wxAnyButtonExtGetHandle != NULL){
      return m_wxAnyButtonExtGetHandle(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxAnyButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxAnyButton::GetHelpTextAtPoint(pt, origin);
    if (*m_wxAnyButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxAnyButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetLabelFunc m_wxAnyButtonExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxAnyButton::GetLabel();
    if (*m_wxAnyButtonExtGetLabel != NULL){
      return m_wxAnyButtonExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetLabelTextFunc m_wxAnyButtonExtGetLabelText = NULL;
  virtual wxString GetLabelText() const override
  {
    wxString res = wxAnyButton::GetLabelText();
    if (*m_wxAnyButtonExtGetLabelText != NULL){
      return m_wxAnyButtonExtGetLabelText(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetLayoutDirectionFunc m_wxAnyButtonExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxAnyButton::GetLayoutDirection();
    if (*m_wxAnyButtonExtGetLayoutDirection != NULL){
      return m_wxAnyButtonExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetMainWindowOfCompositeControlFunc m_wxAnyButtonExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxAnyButton::GetMainWindowOfCompositeControl();
    if (*m_wxAnyButtonExtGetMainWindowOfCompositeControl != NULL){
      return m_wxAnyButtonExtGetMainWindowOfCompositeControl(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetMaxClientSizeFunc m_wxAnyButtonExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxAnyButton::GetMaxClientSize();
    if (*m_wxAnyButtonExtGetMaxClientSize != NULL){
      return m_wxAnyButtonExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetMaxSizeFunc m_wxAnyButtonExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxAnyButton::GetMaxSize();
    if (*m_wxAnyButtonExtGetMaxSize != NULL){
      return m_wxAnyButtonExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetMinClientSizeFunc m_wxAnyButtonExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxAnyButton::GetMinClientSize();
    if (*m_wxAnyButtonExtGetMinClientSize != NULL){
      return m_wxAnyButtonExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetMinSizeFunc m_wxAnyButtonExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxAnyButton::GetMinSize();
    if (*m_wxAnyButtonExtGetMinSize != NULL){
      return m_wxAnyButtonExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetNameFunc m_wxAnyButtonExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxAnyButton::GetName();
    if (*m_wxAnyButtonExtGetName != NULL){
      return m_wxAnyButtonExtGetName(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetNormalStateFunc m_wxAnyButtonExtGetNormalState = NULL;
  virtual wxAnyButtonBase::State GetNormalState() const override
  {
    wxAnyButtonBase::wxAnyButtonBase::State res = wxAnyButton::GetNormalState();
    if (*m_wxAnyButtonExtGetNormalState != NULL){
      return m_wxAnyButtonExtGetNormalState(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetPositionConstraint__intPintPFunc m_wxAnyButtonExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxAnyButton::GetPositionConstraint(x, y);
    if (*m_wxAnyButtonExtGetPositionConstraint__intPintP != NULL){
      return m_wxAnyButtonExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxAnyButtonExtGetScrollPos__intFunc m_wxAnyButtonExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxAnyButton::GetScrollPos(orient);
    if (*m_wxAnyButtonExtGetScrollPos__int != NULL){
      return m_wxAnyButtonExtGetScrollPos__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetScrollRange__intFunc m_wxAnyButtonExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxAnyButton::GetScrollRange(orient);
    if (*m_wxAnyButtonExtGetScrollRange__int != NULL){
      return m_wxAnyButtonExtGetScrollRange__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetScrollThumb__intFunc m_wxAnyButtonExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxAnyButton::GetScrollThumb(orient);
    if (*m_wxAnyButtonExtGetScrollThumb__int != NULL){
      return m_wxAnyButtonExtGetScrollThumb__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetSizeConstraint__intPintPFunc m_wxAnyButtonExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxAnyButton::GetSizeConstraint(w, h);
    if (*m_wxAnyButtonExtGetSizeConstraint__intPintP != NULL){
      return m_wxAnyButtonExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxAnyButtonExtGetThemeEnabledFunc m_wxAnyButtonExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxAnyButton::GetThemeEnabled();
    if (*m_wxAnyButtonExtGetThemeEnabled != NULL){
      return m_wxAnyButtonExtGetThemeEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetTransparentFunc m_wxAnyButtonExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxAnyButton::GetTransparent();
    if (*m_wxAnyButtonExtGetTransparent != NULL){
      return m_wxAnyButtonExtGetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetValidatorFunc m_wxAnyButtonExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxAnyButton::GetValidator();
    if (*m_wxAnyButtonExtGetValidator != NULL){
      return m_wxAnyButtonExtGetValidator(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetWindowBorderSizeFunc m_wxAnyButtonExtGetWindowBorderSize = NULL;
  virtual wxSize GetWindowBorderSize() const override
  {
    wxSize res = wxAnyButton::GetWindowBorderSize();
    if (*m_wxAnyButtonExtGetWindowBorderSize != NULL){
      return m_wxAnyButtonExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetWindowStyleFlagFunc m_wxAnyButtonExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxAnyButton::GetWindowStyleFlag();
    if (*m_wxAnyButtonExtGetWindowStyleFlag != NULL){
      return m_wxAnyButtonExtGetWindowStyleFlag(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtHasCaptureFunc m_wxAnyButtonExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxAnyButton::HasCapture();
    if (*m_wxAnyButtonExtHasCapture != NULL){
      return m_wxAnyButtonExtHasCapture(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtHasFocusFunc m_wxAnyButtonExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxAnyButton::HasFocus();
    if (*m_wxAnyButtonExtHasFocus != NULL){
      return m_wxAnyButtonExtHasFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtHasMultiplePagesFunc m_wxAnyButtonExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxAnyButton::HasMultiplePages();
    if (*m_wxAnyButtonExtHasMultiplePages != NULL){
      return m_wxAnyButtonExtHasMultiplePages(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtHasTransparentBackgroundFunc m_wxAnyButtonExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxAnyButton::HasTransparentBackground();
    if (*m_wxAnyButtonExtHasTransparentBackground != NULL){
      return m_wxAnyButtonExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtHideWithEffect__wxShowEffectunsignedintFunc m_wxAnyButtonExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxAnyButton::HideWithEffect(effect, timeout);
    if (*m_wxAnyButtonExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxAnyButtonExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtInformFirstDirection__intintintFunc m_wxAnyButtonExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxAnyButton::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxAnyButtonExtInformFirstDirection__intintint != NULL){
      return m_wxAnyButtonExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtInheritAttributesFunc m_wxAnyButtonExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxAnyButton::InheritAttributes();
    if (*m_wxAnyButtonExtInheritAttributes != NULL){
      return m_wxAnyButtonExtInheritAttributes(this);
    }
  }
  wxAnyButtonExtInitDialogFunc m_wxAnyButtonExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxAnyButton::InitDialog();
    if (*m_wxAnyButtonExtInitDialog != NULL){
      return m_wxAnyButtonExtInitDialog(this);
    }
  }
  wxAnyButtonExtIsClientAreaChild__wxWindowCPFunc m_wxAnyButtonExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxAnyButton::IsClientAreaChild(child);
    if (*m_wxAnyButtonExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxAnyButtonExtIsClientAreaChild__wxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtIsDoubleBufferedFunc m_wxAnyButtonExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxAnyButton::IsDoubleBuffered();
    if (*m_wxAnyButtonExtIsDoubleBuffered != NULL){
      return m_wxAnyButtonExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtIsRetainedFunc m_wxAnyButtonExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxAnyButton::IsRetained();
    if (*m_wxAnyButtonExtIsRetained != NULL){
      return m_wxAnyButtonExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtIsScrollbarAlwaysShown__intFunc m_wxAnyButtonExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxAnyButton::IsScrollbarAlwaysShown(orient);
    if (*m_wxAnyButtonExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxAnyButtonExtIsScrollbarAlwaysShown__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtIsShownFunc m_wxAnyButtonExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxAnyButton::IsShown();
    if (*m_wxAnyButtonExtIsShown != NULL){
      return m_wxAnyButtonExtIsShown(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtIsShownOnScreenFunc m_wxAnyButtonExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxAnyButton::IsShownOnScreen();
    if (*m_wxAnyButtonExtIsShownOnScreen != NULL){
      return m_wxAnyButtonExtIsShownOnScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtIsThisEnabledFunc m_wxAnyButtonExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxAnyButton::IsThisEnabled();
    if (*m_wxAnyButtonExtIsThisEnabled != NULL){
      return m_wxAnyButtonExtIsThisEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtIsTopLevelFunc m_wxAnyButtonExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxAnyButton::IsTopLevel();
    if (*m_wxAnyButtonExtIsTopLevel != NULL){
      return m_wxAnyButtonExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxAnyButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxAnyButton::IsTopNavigationDomain(kind);
    if (*m_wxAnyButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxAnyButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtIsTransparentBackgroundSupported__wxStringPFunc m_wxAnyButtonExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxAnyButton::IsTransparentBackgroundSupported(reason);
    if (*m_wxAnyButtonExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxAnyButtonExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtLayoutFunc m_wxAnyButtonExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxAnyButton::Layout();
    if (*m_wxAnyButtonExtLayout != NULL){
      return m_wxAnyButtonExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtLayoutPhase1__intPFunc m_wxAnyButtonExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxAnyButton::LayoutPhase1(noChanges);
    if (*m_wxAnyButtonExtLayoutPhase1__intP != NULL){
      return m_wxAnyButtonExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtLayoutPhase2__intPFunc m_wxAnyButtonExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxAnyButton::LayoutPhase2(noChanges);
    if (*m_wxAnyButtonExtLayoutPhase2__intP != NULL){
      return m_wxAnyButtonExtLayoutPhase2__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtLowerFunc m_wxAnyButtonExtLower = NULL;
  virtual void Lower() override
  {
    wxAnyButton::Lower();
    if (*m_wxAnyButtonExtLower != NULL){
      return m_wxAnyButtonExtLower(this);
    }
  }
  wxAnyButtonExtMoveConstraint__intintFunc m_wxAnyButtonExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxAnyButton::MoveConstraint(x, y);
    if (*m_wxAnyButtonExtMoveConstraint__intint != NULL){
      return m_wxAnyButtonExtMoveConstraint__intint(this, x, y);
    }
  }
  wxAnyButtonExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxAnyButtonExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxAnyButton::OnDynamicBind(entry);
    if (*m_wxAnyButtonExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxAnyButtonExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtOnInternalIdleFunc m_wxAnyButtonExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxAnyButton::OnInternalIdle();
    if (*m_wxAnyButtonExtOnInternalIdle != NULL){
      return m_wxAnyButtonExtOnInternalIdle(this);
    }
  }
  wxAnyButtonExtPrepareDC__wxDCRFunc m_wxAnyButtonExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxAnyButton::PrepareDC(dc);
    if (*m_wxAnyButtonExtPrepareDC__wxDCR != NULL){
      return m_wxAnyButtonExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxAnyButtonExtProcessEvent__wxEventRFunc m_wxAnyButtonExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxAnyButton::ProcessEvent(event);
    if (*m_wxAnyButtonExtProcessEvent__wxEventR != NULL){
      return m_wxAnyButtonExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtQueueEvent__wxEventPFunc m_wxAnyButtonExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxAnyButton::QueueEvent(event);
    if (*m_wxAnyButtonExtQueueEvent__wxEventP != NULL){
      return m_wxAnyButtonExtQueueEvent__wxEventP(this, event);
    }
  }
  wxAnyButtonExtRaiseFunc m_wxAnyButtonExtRaise = NULL;
  virtual void Raise() override
  {
    wxAnyButton::Raise();
    if (*m_wxAnyButtonExtRaise != NULL){
      return m_wxAnyButtonExtRaise(this);
    }
  }
  wxAnyButtonExtRefresh__boolwxRectCPFunc m_wxAnyButtonExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxAnyButton::Refresh(eraseBackground, rect);
    if (*m_wxAnyButtonExtRefresh__boolwxRectCP != NULL){
      return m_wxAnyButtonExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxAnyButtonExtRegisterHotKey__intintintFunc m_wxAnyButtonExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxAnyButton::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxAnyButtonExtRegisterHotKey__intintint != NULL){
      return m_wxAnyButtonExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtRemoveChild__wxWindowBasePFunc m_wxAnyButtonExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxAnyButton::RemoveChild(child);
    if (*m_wxAnyButtonExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxAnyButtonExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxAnyButtonExtReparent__wxWindowBasePFunc m_wxAnyButtonExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxAnyButton::Reparent(newParent);
    if (*m_wxAnyButtonExtReparent__wxWindowBaseP != NULL){
      return m_wxAnyButtonExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtScrollLines__intFunc m_wxAnyButtonExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxAnyButton::ScrollLines(lines);
    if (*m_wxAnyButtonExtScrollLines__int != NULL){
      return m_wxAnyButtonExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtScrollPages__intFunc m_wxAnyButtonExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxAnyButton::ScrollPages(pages);
    if (*m_wxAnyButtonExtScrollPages__int != NULL){
      return m_wxAnyButtonExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtScrollWindow__intintwxRectCPFunc m_wxAnyButtonExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxAnyButton::ScrollWindow(dx, dy, rect);
    if (*m_wxAnyButtonExtScrollWindow__intintwxRectCP != NULL){
      return m_wxAnyButtonExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxAnyButtonExtSearchEventTable__wxEventTableRwxEventRFunc m_wxAnyButtonExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxAnyButton::SearchEventTable(table, event);
    if (*m_wxAnyButtonExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxAnyButtonExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSendIdleEvents__wxIdleEventRFunc m_wxAnyButtonExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxAnyButton::SendIdleEvents(event);
    if (*m_wxAnyButtonExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxAnyButtonExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSendSizeEvent__intFunc m_wxAnyButtonExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxAnyButton::SendSizeEvent(flags);
    if (*m_wxAnyButtonExtSendSizeEvent__int != NULL){
      return m_wxAnyButtonExtSendSizeEvent__int(this, flags);
    }
  }
  wxAnyButtonExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxAnyButtonExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxAnyButton::SetAcceleratorTable(accel);
    if (*m_wxAnyButtonExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxAnyButtonExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxAnyButtonExtSetBackgroundColour__wxColourCRFunc m_wxAnyButtonExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxAnyButton::SetBackgroundColour(colour);
    if (*m_wxAnyButtonExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxAnyButtonExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxAnyButtonExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxAnyButton::SetBackgroundStyle(style);
    if (*m_wxAnyButtonExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxAnyButtonExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetCanFocus__boolFunc m_wxAnyButtonExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxAnyButton::SetCanFocus(canFocus);
    if (*m_wxAnyButtonExtSetCanFocus__bool != NULL){
      return m_wxAnyButtonExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxAnyButtonExtSetConstraintSizes__boolFunc m_wxAnyButtonExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxAnyButton::SetConstraintSizes(recurse);
    if (*m_wxAnyButtonExtSetConstraintSizes__bool != NULL){
      return m_wxAnyButtonExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxAnyButtonExtSetCursor__wxCursorCRFunc m_wxAnyButtonExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxAnyButton::SetCursor(cursor);
    if (*m_wxAnyButtonExtSetCursor__wxCursorCR != NULL){
      return m_wxAnyButtonExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetDoubleBuffered__boolFunc m_wxAnyButtonExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxAnyButton::SetDoubleBuffered(on);
    if (*m_wxAnyButtonExtSetDoubleBuffered__bool != NULL){
      return m_wxAnyButtonExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxAnyButtonExtSetDropTarget__wxDropTargetPFunc m_wxAnyButtonExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxAnyButton::SetDropTarget(dropTarget);
    if (*m_wxAnyButtonExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxAnyButtonExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxAnyButtonExtSetExtraStyle__longFunc m_wxAnyButtonExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxAnyButton::SetExtraStyle(exStyle);
    if (*m_wxAnyButtonExtSetExtraStyle__long != NULL){
      return m_wxAnyButtonExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxAnyButtonExtSetFocusFunc m_wxAnyButtonExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxAnyButton::SetFocus();
    if (*m_wxAnyButtonExtSetFocus != NULL){
      return m_wxAnyButtonExtSetFocus(this);
    }
  }
  wxAnyButtonExtSetFocusFromKbdFunc m_wxAnyButtonExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxAnyButton::SetFocusFromKbd();
    if (*m_wxAnyButtonExtSetFocusFromKbd != NULL){
      return m_wxAnyButtonExtSetFocusFromKbd(this);
    }
  }
  wxAnyButtonExtSetFont__wxFontCRFunc m_wxAnyButtonExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxAnyButton::SetFont(font);
    if (*m_wxAnyButtonExtSetFont__wxFontCR != NULL){
      return m_wxAnyButtonExtSetFont__wxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetForegroundColour__wxColourCRFunc m_wxAnyButtonExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxAnyButton::SetForegroundColour(colour);
    if (*m_wxAnyButtonExtSetForegroundColour__wxColourCR != NULL){
      return m_wxAnyButtonExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetId__wxWindowIDFunc m_wxAnyButtonExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxAnyButton::SetId(winid);
    if (*m_wxAnyButtonExtSetId__wxWindowID != NULL){
      return m_wxAnyButtonExtSetId__wxWindowID(this, winid);
    }
  }
  wxAnyButtonExtSetLabel__wxStringCRFunc m_wxAnyButtonExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxAnyButton::SetLabel(label);
    if (*m_wxAnyButtonExtSetLabel__wxStringCR != NULL){
      return m_wxAnyButtonExtSetLabel__wxStringCR(this, label);
    }
  }
  wxAnyButtonExtSetLabelText__wxStringCRFunc m_wxAnyButtonExtSetLabelText__wxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxAnyButton::SetLabelText(text);
    if (*m_wxAnyButtonExtSetLabelText__wxStringCR != NULL){
      return m_wxAnyButtonExtSetLabelText__wxStringCR(this, text);
    }
  }
  wxAnyButtonExtSetLayoutDirection__wxLayoutDirectionFunc m_wxAnyButtonExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxAnyButton::SetLayoutDirection(dir);
    if (*m_wxAnyButtonExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxAnyButtonExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxAnyButtonExtSetMaxClientSize__wxSizeCRFunc m_wxAnyButtonExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxAnyButton::SetMaxClientSize(size);
    if (*m_wxAnyButtonExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxAnyButtonExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxAnyButtonExtSetMaxSize__wxSizeCRFunc m_wxAnyButtonExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxAnyButton::SetMaxSize(maxSize);
    if (*m_wxAnyButtonExtSetMaxSize__wxSizeCR != NULL){
      return m_wxAnyButtonExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxAnyButtonExtSetMinClientSize__wxSizeCRFunc m_wxAnyButtonExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxAnyButton::SetMinClientSize(size);
    if (*m_wxAnyButtonExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxAnyButtonExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxAnyButtonExtSetMinSize__wxSizeCRFunc m_wxAnyButtonExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxAnyButton::SetMinSize(minSize);
    if (*m_wxAnyButtonExtSetMinSize__wxSizeCR != NULL){
      return m_wxAnyButtonExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxAnyButtonExtSetName__wxStringCRFunc m_wxAnyButtonExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxAnyButton::SetName(name);
    if (*m_wxAnyButtonExtSetName__wxStringCR != NULL){
      return m_wxAnyButtonExtSetName__wxStringCR(this, name);
    }
  }
  wxAnyButtonExtSetNextHandler__wxEvtHandlerPFunc m_wxAnyButtonExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxAnyButton::SetNextHandler(handler);
    if (*m_wxAnyButtonExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxAnyButtonExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAnyButtonExtSetPreviousHandler__wxEvtHandlerPFunc m_wxAnyButtonExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxAnyButton::SetPreviousHandler(handler);
    if (*m_wxAnyButtonExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxAnyButtonExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAnyButtonExtSetScrollPos__intintboolFunc m_wxAnyButtonExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxAnyButton::SetScrollPos(orient, pos, refresh);
    if (*m_wxAnyButtonExtSetScrollPos__intintbool != NULL){
      return m_wxAnyButtonExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxAnyButtonExtSetScrollbar__intintintintboolFunc m_wxAnyButtonExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxAnyButton::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxAnyButtonExtSetScrollbar__intintintintbool != NULL){
      return m_wxAnyButtonExtSetScrollbar__intintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxAnyButtonExtSetSizeConstraint__intintintintFunc m_wxAnyButtonExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxAnyButton::SetSizeConstraint(x, y, w, h);
    if (*m_wxAnyButtonExtSetSizeConstraint__intintintint != NULL){
      return m_wxAnyButtonExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxAnyButtonExtSetSizeHints__intintintintintintFunc m_wxAnyButtonExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxAnyButton::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxAnyButtonExtSetSizeHints__intintintintintint != NULL){
      return m_wxAnyButtonExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxAnyButtonExtSetThemeEnabled__boolFunc m_wxAnyButtonExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxAnyButton::SetThemeEnabled(enableTheme);
    if (*m_wxAnyButtonExtSetThemeEnabled__bool != NULL){
      return m_wxAnyButtonExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxAnyButtonExtSetTransparent__wxByteFunc m_wxAnyButtonExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxAnyButton::SetTransparent(alpha);
    if (*m_wxAnyButtonExtSetTransparent__wxByte != NULL){
      return m_wxAnyButtonExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetValidator__wxValidatorCRFunc m_wxAnyButtonExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxAnyButton::SetValidator(validator);
    if (*m_wxAnyButtonExtSetValidator__wxValidatorCR != NULL){
      return m_wxAnyButtonExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxAnyButtonExtSetWindowStyleFlag__longFunc m_wxAnyButtonExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxAnyButton::SetWindowStyleFlag(style);
    if (*m_wxAnyButtonExtSetWindowStyleFlag__long != NULL){
      return m_wxAnyButtonExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxAnyButtonExtShouldInheritColoursFunc m_wxAnyButtonExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxAnyButton::ShouldInheritColours();
    if (*m_wxAnyButtonExtShouldInheritColours != NULL){
      return m_wxAnyButtonExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtShow__boolFunc m_wxAnyButtonExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxAnyButton::Show(show);
    if (*m_wxAnyButtonExtShow__bool != NULL){
      return m_wxAnyButtonExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtShowWithEffect__wxShowEffectunsignedintFunc m_wxAnyButtonExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxAnyButton::ShowWithEffect(effect, timeout);
    if (*m_wxAnyButtonExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxAnyButtonExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtTransferDataFromWindowFunc m_wxAnyButtonExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxAnyButton::TransferDataFromWindow();
    if (*m_wxAnyButtonExtTransferDataFromWindow != NULL){
      return m_wxAnyButtonExtTransferDataFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtTransferDataToWindowFunc m_wxAnyButtonExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxAnyButton::TransferDataToWindow();
    if (*m_wxAnyButtonExtTransferDataToWindow != NULL){
      return m_wxAnyButtonExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtTriggerScrollEvent__wxEventTypeFunc m_wxAnyButtonExtTriggerScrollEvent__wxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxAnyButton::TriggerScrollEvent(scrollEvent);
    if (*m_wxAnyButtonExtTriggerScrollEvent__wxEventType != NULL){
      return m_wxAnyButtonExtTriggerScrollEvent__wxEventType(this, scrollEvent);
    }
  }
  wxAnyButtonExtTryAfter__wxEventRFunc m_wxAnyButtonExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxAnyButton::TryAfter(event);
    if (*m_wxAnyButtonExtTryAfter__wxEventR != NULL){
      return m_wxAnyButtonExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtTryBefore__wxEventRFunc m_wxAnyButtonExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxAnyButton::TryBefore(event);
    if (*m_wxAnyButtonExtTryBefore__wxEventR != NULL){
      return m_wxAnyButtonExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtUnregisterHotKey__intFunc m_wxAnyButtonExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxAnyButton::UnregisterHotKey(hotkeyId);
    if (*m_wxAnyButtonExtUnregisterHotKey__int != NULL){
      return m_wxAnyButtonExtUnregisterHotKey__int(this, hotkeyId, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtUpdateFunc m_wxAnyButtonExtUpdate = NULL;
  virtual void Update() override
  {
    wxAnyButton::Update();
    if (*m_wxAnyButtonExtUpdate != NULL){
      return m_wxAnyButtonExtUpdate(this);
    }
  }
  wxAnyButtonExtUpdateWindowUI__longFunc m_wxAnyButtonExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxAnyButton::UpdateWindowUI(flags);
    if (*m_wxAnyButtonExtUpdateWindowUI__long != NULL){
      return m_wxAnyButtonExtUpdateWindowUI__long(this, flags);
    }
  }
  wxAnyButtonExtValidateFunc m_wxAnyButtonExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxAnyButton::Validate();
    if (*m_wxAnyButtonExtValidate != NULL){
      return m_wxAnyButtonExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxAnyButtonExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxAnyButton::WXAdjustFontToOwnPPI(font);
    if (*m_wxAnyButtonExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxAnyButtonExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxAnyButtonExtWXGetTextEntryFunc m_wxAnyButtonExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxAnyButton::WXGetTextEntry();
    if (*m_wxAnyButtonExtWXGetTextEntry != NULL){
      return m_wxAnyButtonExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXReservedEvtHandler1__voidPFunc m_wxAnyButtonExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxAnyButton::WXReservedEvtHandler1(param0);
    if (*m_wxAnyButtonExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxAnyButtonExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXReservedEvtHandler2__voidPFunc m_wxAnyButtonExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxAnyButton::WXReservedEvtHandler2(param0);
    if (*m_wxAnyButtonExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxAnyButtonExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXReservedWindow1__voidPFunc m_wxAnyButtonExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxAnyButton::WXReservedWindow1(param0);
    if (*m_wxAnyButtonExtWXReservedWindow1__voidP != NULL){
      return m_wxAnyButtonExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXReservedWindow2__voidPFunc m_wxAnyButtonExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxAnyButton::WXReservedWindow2(param0);
    if (*m_wxAnyButtonExtWXReservedWindow2__voidP != NULL){
      return m_wxAnyButtonExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXReservedWindow3__voidPFunc m_wxAnyButtonExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxAnyButton::WXReservedWindow3(param0);
    if (*m_wxAnyButtonExtWXReservedWindow3__voidP != NULL){
      return m_wxAnyButtonExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxAnyButtonExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxAnyButton::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxAnyButtonExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxAnyButtonExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxAnyButtonExtWarpPointer__intintFunc m_wxAnyButtonExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxAnyButton::WarpPointer(x, y);
    if (*m_wxAnyButtonExtWarpPointer__intint != NULL){
      return m_wxAnyButtonExtWarpPointer__intint(this, x, y);
    }
  }
  wxAnyButtonExtWindowToClientSize__wxSizeCRFunc m_wxAnyButtonExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButton::WindowToClientSize(size);
    if (*m_wxAnyButtonExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxAnyButtonExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExt(wxAnyButtonExtAcceptsFocusFunc a_AcceptsFocus, wxAnyButtonExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxAnyButtonExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxAnyButtonExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxAnyButtonExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxAnyButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxAnyButtonExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxAnyButtonExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxAnyButtonExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxAnyButtonExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxAnyButtonExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxAnyButtonExtCanBeFocusedFunc a_CanBeFocused, wxAnyButtonExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxAnyButtonExtCanScroll__intFunc a_CanScroll__int, wxAnyButtonExtCanSetTransparentFunc a_CanSetTransparent, wxAnyButtonExtClearBackgroundFunc a_ClearBackground, wxAnyButtonExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxAnyButtonExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxAnyButtonExtCommand__wxCommandEventRFunc a_Command__wxCommandEventR, wxAnyButtonExtCreateRefDataFunc a_CreateRefData, wxAnyButtonExtDestroyFunc a_Destroy, wxAnyButtonExtDissociateHandleFunc a_DissociateHandle, wxAnyButtonExtDoCaptureMouseFunc a_DoCaptureMouse, wxAnyButtonExtDoCentre__intFunc a_DoCentre__int, wxAnyButtonExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxAnyButtonExtDoEnable__boolFunc a_DoEnable__bool, wxAnyButtonExtDoFreezeFunc a_DoFreeze, wxAnyButtonExtDoGetAuthNeededFunc a_DoGetAuthNeeded, wxAnyButtonExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxAnyButtonExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxAnyButtonExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxAnyButtonExtDoGetBestSizeFunc a_DoGetBestSize, wxAnyButtonExtDoGetBitmap__wxAnyButtonBaseNStateFunc a_DoGetBitmap__wxAnyButtonBaseNState, wxAnyButtonExtDoGetBitmapMarginsFunc a_DoGetBitmapMargins, wxAnyButtonExtDoGetClientDataFunc a_DoGetClientData, wxAnyButtonExtDoGetClientObjectFunc a_DoGetClientObject, wxAnyButtonExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxAnyButtonExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxAnyButtonExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxAnyButtonExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxAnyButtonExtDoGetSizeFromClientSize__wxSizeCRFunc a_DoGetSizeFromClientSize__wxSizeCR, wxAnyButtonExtDoGetSizeFromTextSize__intintFunc a_DoGetSizeFromTextSize__intint, wxAnyButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxAnyButtonExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxAnyButtonExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxAnyButtonExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxAnyButtonExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxAnyButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxAnyButtonExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxAnyButtonExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxAnyButtonExtDoPhase__intFunc a_DoPhase__int, wxAnyButtonExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxAnyButtonExtDoReleaseMouseFunc a_DoReleaseMouse, wxAnyButtonExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxAnyButtonExtDoSetAuthNeeded__boolFunc a_DoSetAuthNeeded__bool, wxAnyButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc a_DoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState, wxAnyButtonExtDoSetBitmapMargins__wxCoordwxCoordFunc a_DoSetBitmapMargins__wxCoordwxCoord, wxAnyButtonExtDoSetBitmapPosition__wxDirectionFunc a_DoSetBitmapPosition__wxDirection, wxAnyButtonExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxAnyButtonExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxAnyButtonExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxAnyButtonExtDoSetLabelMarkup__wxStringCRFunc a_DoSetLabelMarkup__wxStringCR, wxAnyButtonExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxAnyButtonExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxAnyButtonExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxAnyButtonExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxAnyButtonExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxAnyButtonExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxAnyButtonExtDoThawFunc a_DoThaw, wxAnyButtonExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxAnyButtonExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxAnyButtonExtEnable__boolFunc a_Enable__bool, wxAnyButtonExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxAnyButtonExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxAnyButtonExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxAnyButtonExtFitFunc a_Fit, wxAnyButtonExtFitInsideFunc a_FitInside, wxAnyButtonExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxAnyButtonExtGetCharHeightFunc a_GetCharHeight, wxAnyButtonExtGetCharWidthFunc a_GetCharWidth, wxAnyButtonExtGetClassInfoFunc a_GetClassInfo, wxAnyButtonExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxAnyButtonExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxAnyButtonExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxAnyButtonExtGetDPIFunc a_GetDPI, wxAnyButtonExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxAnyButtonExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxAnyButtonExtGetDefaultBorderFunc a_GetDefaultBorder, wxAnyButtonExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxAnyButtonExtGetDropTargetFunc a_GetDropTarget, wxAnyButtonExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxAnyButtonExtGetEventHashTableFunc a_GetEventHashTable, wxAnyButtonExtGetEventTableFunc a_GetEventTable, wxAnyButtonExtGetHandleFunc a_GetHandle, wxAnyButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxAnyButtonExtGetLabelFunc a_GetLabel, wxAnyButtonExtGetLabelTextFunc a_GetLabelText, wxAnyButtonExtGetLayoutDirectionFunc a_GetLayoutDirection, wxAnyButtonExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxAnyButtonExtGetMaxClientSizeFunc a_GetMaxClientSize, wxAnyButtonExtGetMaxSizeFunc a_GetMaxSize, wxAnyButtonExtGetMinClientSizeFunc a_GetMinClientSize, wxAnyButtonExtGetMinSizeFunc a_GetMinSize, wxAnyButtonExtGetNameFunc a_GetName, wxAnyButtonExtGetNormalStateFunc a_GetNormalState, wxAnyButtonExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxAnyButtonExtGetScrollPos__intFunc a_GetScrollPos__int, wxAnyButtonExtGetScrollRange__intFunc a_GetScrollRange__int, wxAnyButtonExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxAnyButtonExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxAnyButtonExtGetThemeEnabledFunc a_GetThemeEnabled, wxAnyButtonExtGetTransparentFunc a_GetTransparent, wxAnyButtonExtGetValidatorFunc a_GetValidator, wxAnyButtonExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxAnyButtonExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxAnyButtonExtHasCaptureFunc a_HasCapture, wxAnyButtonExtHasFocusFunc a_HasFocus, wxAnyButtonExtHasMultiplePagesFunc a_HasMultiplePages, wxAnyButtonExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxAnyButtonExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxAnyButtonExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxAnyButtonExtInheritAttributesFunc a_InheritAttributes, wxAnyButtonExtInitDialogFunc a_InitDialog, wxAnyButtonExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxAnyButtonExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxAnyButtonExtIsRetainedFunc a_IsRetained, wxAnyButtonExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxAnyButtonExtIsShownFunc a_IsShown, wxAnyButtonExtIsShownOnScreenFunc a_IsShownOnScreen, wxAnyButtonExtIsThisEnabledFunc a_IsThisEnabled, wxAnyButtonExtIsTopLevelFunc a_IsTopLevel, wxAnyButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxAnyButtonExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxAnyButtonExtLayoutFunc a_Layout, wxAnyButtonExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxAnyButtonExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxAnyButtonExtLowerFunc a_Lower, wxAnyButtonExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxAnyButtonExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxAnyButtonExtOnInternalIdleFunc a_OnInternalIdle, wxAnyButtonExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxAnyButtonExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxAnyButtonExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxAnyButtonExtRaiseFunc a_Raise, wxAnyButtonExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxAnyButtonExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxAnyButtonExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxAnyButtonExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxAnyButtonExtScrollLines__intFunc a_ScrollLines__int, wxAnyButtonExtScrollPages__intFunc a_ScrollPages__int, wxAnyButtonExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxAnyButtonExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxAnyButtonExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxAnyButtonExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxAnyButtonExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxAnyButtonExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxAnyButtonExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxAnyButtonExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxAnyButtonExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxAnyButtonExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxAnyButtonExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxAnyButtonExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxAnyButtonExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxAnyButtonExtSetFocusFunc a_SetFocus, wxAnyButtonExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxAnyButtonExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxAnyButtonExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxAnyButtonExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxAnyButtonExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxAnyButtonExtSetLabelText__wxStringCRFunc a_SetLabelText__wxStringCR, wxAnyButtonExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxAnyButtonExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxAnyButtonExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxAnyButtonExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxAnyButtonExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxAnyButtonExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxAnyButtonExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxAnyButtonExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxAnyButtonExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxAnyButtonExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxAnyButtonExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxAnyButtonExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxAnyButtonExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxAnyButtonExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxAnyButtonExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxAnyButtonExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxAnyButtonExtShouldInheritColoursFunc a_ShouldInheritColours, wxAnyButtonExtShow__boolFunc a_Show__bool, wxAnyButtonExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxAnyButtonExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxAnyButtonExtTransferDataToWindowFunc a_TransferDataToWindow, wxAnyButtonExtTriggerScrollEvent__wxEventTypeFunc a_TriggerScrollEvent__wxEventType, wxAnyButtonExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxAnyButtonExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxAnyButtonExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxAnyButtonExtUpdateFunc a_Update, wxAnyButtonExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxAnyButtonExtValidateFunc a_Validate, wxAnyButtonExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxAnyButtonExtWXGetTextEntryFunc a_WXGetTextEntry, wxAnyButtonExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxAnyButtonExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxAnyButtonExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxAnyButtonExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxAnyButtonExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxAnyButtonExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxAnyButtonExtWarpPointer__intintFunc a_WarpPointer__intint, wxAnyButtonExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxAnyButton() {
    m_wxAnyButtonExtAcceptsFocus = a_AcceptsFocus;
    m_wxAnyButtonExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxAnyButtonExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxAnyButtonExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxAnyButtonExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxAnyButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxAnyButtonExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxAnyButtonExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxAnyButtonExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxAnyButtonExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxAnyButtonExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxAnyButtonExtCanBeFocused = a_CanBeFocused;
    m_wxAnyButtonExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxAnyButtonExtCanScroll__int = a_CanScroll__int;
    m_wxAnyButtonExtCanSetTransparent = a_CanSetTransparent;
    m_wxAnyButtonExtClearBackground = a_ClearBackground;
    m_wxAnyButtonExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxAnyButtonExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxAnyButtonExtCommand__wxCommandEventR = a_Command__wxCommandEventR;
    m_wxAnyButtonExtCreateRefData = a_CreateRefData;
    m_wxAnyButtonExtDestroy = a_Destroy;
    m_wxAnyButtonExtDissociateHandle = a_DissociateHandle;
    m_wxAnyButtonExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxAnyButtonExtDoCentre__int = a_DoCentre__int;
    m_wxAnyButtonExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxAnyButtonExtDoEnable__bool = a_DoEnable__bool;
    m_wxAnyButtonExtDoFreeze = a_DoFreeze;
    m_wxAnyButtonExtDoGetAuthNeeded = a_DoGetAuthNeeded;
    m_wxAnyButtonExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxAnyButtonExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxAnyButtonExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxAnyButtonExtDoGetBestSize = a_DoGetBestSize;
    m_wxAnyButtonExtDoGetBitmap__wxAnyButtonBaseNState = a_DoGetBitmap__wxAnyButtonBaseNState;
    m_wxAnyButtonExtDoGetBitmapMargins = a_DoGetBitmapMargins;
    m_wxAnyButtonExtDoGetClientData = a_DoGetClientData;
    m_wxAnyButtonExtDoGetClientObject = a_DoGetClientObject;
    m_wxAnyButtonExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxAnyButtonExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxAnyButtonExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxAnyButtonExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxAnyButtonExtDoGetSizeFromClientSize__wxSizeCR = a_DoGetSizeFromClientSize__wxSizeCR;
    m_wxAnyButtonExtDoGetSizeFromTextSize__intint = a_DoGetSizeFromTextSize__intint;
    m_wxAnyButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxAnyButtonExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxAnyButtonExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxAnyButtonExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxAnyButtonExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxAnyButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxAnyButtonExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxAnyButtonExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxAnyButtonExtDoPhase__int = a_DoPhase__int;
    m_wxAnyButtonExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxAnyButtonExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxAnyButtonExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxAnyButtonExtDoSetAuthNeeded__bool = a_DoSetAuthNeeded__bool;
    m_wxAnyButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState = a_DoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState;
    m_wxAnyButtonExtDoSetBitmapMargins__wxCoordwxCoord = a_DoSetBitmapMargins__wxCoordwxCoord;
    m_wxAnyButtonExtDoSetBitmapPosition__wxDirection = a_DoSetBitmapPosition__wxDirection;
    m_wxAnyButtonExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxAnyButtonExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxAnyButtonExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxAnyButtonExtDoSetLabelMarkup__wxStringCR = a_DoSetLabelMarkup__wxStringCR;
    m_wxAnyButtonExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxAnyButtonExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxAnyButtonExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxAnyButtonExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxAnyButtonExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxAnyButtonExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxAnyButtonExtDoThaw = a_DoThaw;
    m_wxAnyButtonExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxAnyButtonExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxAnyButtonExtEnable__bool = a_Enable__bool;
    m_wxAnyButtonExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxAnyButtonExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxAnyButtonExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxAnyButtonExtFit = a_Fit;
    m_wxAnyButtonExtFitInside = a_FitInside;
    m_wxAnyButtonExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxAnyButtonExtGetCharHeight = a_GetCharHeight;
    m_wxAnyButtonExtGetCharWidth = a_GetCharWidth;
    m_wxAnyButtonExtGetClassInfo = a_GetClassInfo;
    m_wxAnyButtonExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxAnyButtonExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
    m_wxAnyButtonExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxAnyButtonExtGetDPI = a_GetDPI;
    m_wxAnyButtonExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxAnyButtonExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxAnyButtonExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxAnyButtonExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxAnyButtonExtGetDropTarget = a_GetDropTarget;
    m_wxAnyButtonExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxAnyButtonExtGetEventHashTable = a_GetEventHashTable;
    m_wxAnyButtonExtGetEventTable = a_GetEventTable;
    m_wxAnyButtonExtGetHandle = a_GetHandle;
    m_wxAnyButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxAnyButtonExtGetLabel = a_GetLabel;
    m_wxAnyButtonExtGetLabelText = a_GetLabelText;
    m_wxAnyButtonExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxAnyButtonExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxAnyButtonExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxAnyButtonExtGetMaxSize = a_GetMaxSize;
    m_wxAnyButtonExtGetMinClientSize = a_GetMinClientSize;
    m_wxAnyButtonExtGetMinSize = a_GetMinSize;
    m_wxAnyButtonExtGetName = a_GetName;
    m_wxAnyButtonExtGetNormalState = a_GetNormalState;
    m_wxAnyButtonExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxAnyButtonExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxAnyButtonExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxAnyButtonExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxAnyButtonExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxAnyButtonExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxAnyButtonExtGetTransparent = a_GetTransparent;
    m_wxAnyButtonExtGetValidator = a_GetValidator;
    m_wxAnyButtonExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxAnyButtonExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxAnyButtonExtHasCapture = a_HasCapture;
    m_wxAnyButtonExtHasFocus = a_HasFocus;
    m_wxAnyButtonExtHasMultiplePages = a_HasMultiplePages;
    m_wxAnyButtonExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxAnyButtonExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxAnyButtonExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxAnyButtonExtInheritAttributes = a_InheritAttributes;
    m_wxAnyButtonExtInitDialog = a_InitDialog;
    m_wxAnyButtonExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxAnyButtonExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxAnyButtonExtIsRetained = a_IsRetained;
    m_wxAnyButtonExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxAnyButtonExtIsShown = a_IsShown;
    m_wxAnyButtonExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxAnyButtonExtIsThisEnabled = a_IsThisEnabled;
    m_wxAnyButtonExtIsTopLevel = a_IsTopLevel;
    m_wxAnyButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxAnyButtonExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxAnyButtonExtLayout = a_Layout;
    m_wxAnyButtonExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxAnyButtonExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxAnyButtonExtLower = a_Lower;
    m_wxAnyButtonExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxAnyButtonExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxAnyButtonExtOnInternalIdle = a_OnInternalIdle;
    m_wxAnyButtonExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxAnyButtonExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxAnyButtonExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxAnyButtonExtRaise = a_Raise;
    m_wxAnyButtonExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxAnyButtonExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxAnyButtonExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxAnyButtonExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxAnyButtonExtScrollLines__int = a_ScrollLines__int;
    m_wxAnyButtonExtScrollPages__int = a_ScrollPages__int;
    m_wxAnyButtonExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxAnyButtonExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxAnyButtonExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxAnyButtonExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxAnyButtonExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxAnyButtonExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxAnyButtonExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxAnyButtonExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxAnyButtonExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxAnyButtonExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxAnyButtonExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxAnyButtonExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxAnyButtonExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxAnyButtonExtSetFocus = a_SetFocus;
    m_wxAnyButtonExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxAnyButtonExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxAnyButtonExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxAnyButtonExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxAnyButtonExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxAnyButtonExtSetLabelText__wxStringCR = a_SetLabelText__wxStringCR;
    m_wxAnyButtonExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxAnyButtonExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxAnyButtonExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxAnyButtonExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxAnyButtonExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxAnyButtonExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxAnyButtonExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxAnyButtonExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxAnyButtonExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxAnyButtonExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxAnyButtonExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxAnyButtonExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxAnyButtonExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxAnyButtonExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxAnyButtonExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxAnyButtonExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxAnyButtonExtShouldInheritColours = a_ShouldInheritColours;
    m_wxAnyButtonExtShow__bool = a_Show__bool;
    m_wxAnyButtonExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxAnyButtonExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxAnyButtonExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxAnyButtonExtTriggerScrollEvent__wxEventType = a_TriggerScrollEvent__wxEventType;
    m_wxAnyButtonExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxAnyButtonExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxAnyButtonExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxAnyButtonExtUpdate = a_Update;
    m_wxAnyButtonExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxAnyButtonExtValidate = a_Validate;
    m_wxAnyButtonExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxAnyButtonExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxAnyButtonExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxAnyButtonExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxAnyButtonExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxAnyButtonExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxAnyButtonExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxAnyButtonExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxAnyButtonExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxAnyButtonExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
  }
};



#endif
