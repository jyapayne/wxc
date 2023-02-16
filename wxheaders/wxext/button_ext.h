#ifndef _WX_BUTTON_H_EXT_
#define _WX_BUTTON_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxButtonBaseExt;
typedef bool (*wxButtonBaseExtAcceptsFocusFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtAcceptsFocusFromKeyboardFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtAcceptsFocusRecursivelyFunc)(const wxButtonBaseExt* self, bool res);
typedef void (*wxButtonBaseExtAddChild__wxWindowBasePFunc)(const wxButtonBaseExt* self, wxWindowBase* child);
typedef void (*wxButtonBaseExtAddPendingEvent__wxEventCRFunc)(const wxButtonBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxButtonBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxButtonBaseExtAdjustForParentClientOrigin__intRintRintFunc)(const wxButtonBaseExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxButtonBaseExtAlwaysShowScrollbars__boolboolFunc)(const wxButtonBaseExt* self, bool horz, bool vert);
typedef void (*wxButtonBaseExtAssociateHandle__WXWidgetFunc)(const wxButtonBaseExt* self, WXWidget handle);
typedef bool (*wxButtonBaseExtBeginRepositioningChildrenFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtCanApplyThemeBorderFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtCanBeFocusedFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtCanBeOutsideClientAreaFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtCanScroll__intFunc)(const wxButtonBaseExt* self, int orient, bool res);
typedef bool (*wxButtonBaseExtCanSetTransparentFunc)(const wxButtonBaseExt* self, bool res);
typedef void (*wxButtonBaseExtClearBackgroundFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtClientToWindowSize__wxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxButtonBaseExtCloneRefData__wxObjectRefDataCPFunc)(const wxButtonBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef void (*wxButtonBaseExtCommand__wxCommandEventRFunc)(const wxButtonBaseExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxButtonBaseExtCreateRefDataFunc)(const wxButtonBaseExt* self, wxObjectRefData* res);
typedef bool (*wxButtonBaseExtDestroyFunc)(const wxButtonBaseExt* self, bool res);
typedef void (*wxButtonBaseExtDissociateHandleFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtDoCaptureMouseFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtDoCentre__intFunc)(const wxButtonBaseExt* self, int dir);
typedef void (*wxButtonBaseExtDoClientToScreen__intPintPFunc)(const wxButtonBaseExt* self, int* x, int* y);
typedef void (*wxButtonBaseExtDoEnable__boolFunc)(const wxButtonBaseExt* self, bool enable);
typedef void (*wxButtonBaseExtDoFreezeFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtDoGetAuthNeededFunc)(const wxButtonBaseExt* self, bool res);
typedef int (*wxButtonBaseExtDoGetBestClientHeight__intFunc)(const wxButtonBaseExt* self, int width, int res);
typedef wxSize (*wxButtonBaseExtDoGetBestClientSizeFunc)(const wxButtonBaseExt* self, wxSize res);
typedef int (*wxButtonBaseExtDoGetBestClientWidth__intFunc)(const wxButtonBaseExt* self, int height, int res);
typedef wxSize (*wxButtonBaseExtDoGetBestSizeFunc)(const wxButtonBaseExt* self, wxSize res);
typedef wxBitmap (*wxButtonBaseExtDoGetBitmap__wxAnyButtonBaseNStateFunc)(const wxButtonBaseExt* self, wxAnyButtonBase::State which, wxBitmap res);
typedef wxSize (*wxButtonBaseExtDoGetBitmapMarginsFunc)(const wxButtonBaseExt* self, wxSize res);
typedef void* (*wxButtonBaseExtDoGetClientDataFunc)(const wxButtonBaseExt* self, void* res);
typedef wxClientData* (*wxButtonBaseExtDoGetClientObjectFunc)(const wxButtonBaseExt* self, wxClientData* res);
typedef void (*wxButtonBaseExtDoGetClientSize__intPintPFunc)(const wxButtonBaseExt* self, int* width, int* height);
typedef void (*wxButtonBaseExtDoGetPosition__intPintPFunc)(const wxButtonBaseExt* self, int* x, int* y);
typedef void (*wxButtonBaseExtDoGetScreenPosition__intPintPFunc)(const wxButtonBaseExt* self, int* x, int* y);
typedef void (*wxButtonBaseExtDoGetSize__intPintPFunc)(const wxButtonBaseExt* self, int* width, int* height);
typedef wxSize (*wxButtonBaseExtDoGetSizeFromClientSize__wxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& size, wxSize res);
typedef wxSize (*wxButtonBaseExtDoGetSizeFromTextSize__intintFunc)(const wxButtonBaseExt* self, int xlen, int ylen, wxSize res);
typedef void (*wxButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxButtonBaseExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxButtonBaseExtDoGetVirtualSizeFunc)(const wxButtonBaseExt* self, wxSize res);
typedef wxHitTest (*wxButtonBaseExtDoHitTest__wxCoordwxCoordFunc)(const wxButtonBaseExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxButtonBaseExtDoIsExposed__intintintintFunc)(const wxButtonBaseExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxButtonBaseExtDoIsExposed__intintFunc)(const wxButtonBaseExt* self, int x, int y, bool res);
typedef void (*wxButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxButtonBaseExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxButtonBaseExtDoMoveWindow__intintintintFunc)(const wxButtonBaseExt* self, int x, int y, int width, int height);
typedef bool (*wxButtonBaseExtDoNavigateIn__intFunc)(const wxButtonBaseExt* self, int flags, bool res);
typedef bool (*wxButtonBaseExtDoPhase__intFunc)(const wxButtonBaseExt* self, int phase, bool res);
typedef bool (*wxButtonBaseExtDoPopupMenu__wxMenuPintintFunc)(const wxButtonBaseExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxButtonBaseExtDoReleaseMouseFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtDoScreenToClient__intPintPFunc)(const wxButtonBaseExt* self, int* x, int* y);
typedef void (*wxButtonBaseExtDoSetAuthNeeded__boolFunc)(const wxButtonBaseExt* self, bool show);
typedef void (*wxButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc)(const wxButtonBaseExt* self, wxBitmapBundle const& bitmapBundle, wxAnyButtonBase::State which);
typedef void (*wxButtonBaseExtDoSetBitmapMargins__intintFunc)(const wxButtonBaseExt* self, int x, int y);
typedef void (*wxButtonBaseExtDoSetBitmapPosition__wxDirectionFunc)(const wxButtonBaseExt* self, wxDirection dir);
typedef void (*wxButtonBaseExtDoSetClientData__voidPFunc)(const wxButtonBaseExt* self, void* data);
typedef void (*wxButtonBaseExtDoSetClientObject__wxClientDataPFunc)(const wxButtonBaseExt* self, wxClientData* data);
typedef void (*wxButtonBaseExtDoSetClientSize__intintFunc)(const wxButtonBaseExt* self, int width, int height);
typedef bool (*wxButtonBaseExtDoSetLabelMarkup__wxStringCRFunc)(const wxButtonBaseExt* self, wxString const& markup, bool res);
typedef void (*wxButtonBaseExtDoSetSize__intintintintintFunc)(const wxButtonBaseExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxButtonBaseExtDoSetSizeHints__intintintintintintFunc)(const wxButtonBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxButtonBaseExtDoSetToolTip__wxToolTipPFunc)(const wxButtonBaseExt* self, wxToolTip* tip);
typedef void (*wxButtonBaseExtDoSetToolTipText__wxStringCRFunc)(const wxButtonBaseExt* self, wxString const& tip);
typedef void (*wxButtonBaseExtDoSetVirtualSize__intintFunc)(const wxButtonBaseExt* self, int x, int y);
typedef void (*wxButtonBaseExtDoSetWindowVariant__wxWindowVariantFunc)(const wxButtonBaseExt* self, wxWindowVariant variant);
typedef void (*wxButtonBaseExtDoThawFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxButtonBaseExt* self, wxUpdateUIEvent& event);
typedef void (*wxButtonBaseExtDragAcceptFiles__boolFunc)(const wxButtonBaseExt* self, bool accept);
typedef bool (*wxButtonBaseExtEnable__boolFunc)(const wxButtonBaseExt* self, bool enable, bool res);
typedef bool (*wxButtonBaseExtEnableTouchEvents__intFunc)(const wxButtonBaseExt* self, int eventsMask, bool res);
typedef void (*wxButtonBaseExtEnableVisibleFocus__boolFunc)(const wxButtonBaseExt* self, bool enabled);
typedef void (*wxButtonBaseExtEndRepositioningChildrenFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtFitFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtFitInsideFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtGetBestVirtualSizeFunc)(const wxButtonBaseExt* self, wxSize res);
typedef int (*wxButtonBaseExtGetCharHeightFunc)(const wxButtonBaseExt* self, int res);
typedef int (*wxButtonBaseExtGetCharWidthFunc)(const wxButtonBaseExt* self, int res);
typedef wxClassInfo* (*wxButtonBaseExtGetClassInfoFunc)(const wxButtonBaseExt* self, wxClassInfo* res);
typedef wxPoint (*wxButtonBaseExtGetClientAreaOriginFunc)(const wxButtonBaseExt* self, wxPoint res);
typedef void (*wxButtonBaseExtGetClientSizeConstraint__intPintPFunc)(const wxButtonBaseExt* self, int* w, int* h);
typedef double (*wxButtonBaseExtGetContentScaleFactorFunc)(const wxButtonBaseExt* self, double res);
typedef wxSize (*wxButtonBaseExtGetDPIFunc)(const wxButtonBaseExt* self, wxSize res);
typedef double (*wxButtonBaseExtGetDPIScaleFactorFunc)(const wxButtonBaseExt* self, double res);
typedef wxVisualAttributes (*wxButtonBaseExtGetDefaultAttributesFunc)(const wxButtonBaseExt* self, wxVisualAttributes res);
typedef wxBorder (*wxButtonBaseExtGetDefaultBorderFunc)(const wxButtonBaseExt* self, wxBorder res);
typedef wxBorder (*wxButtonBaseExtGetDefaultBorderForControlFunc)(const wxButtonBaseExt* self, wxBorder res);
typedef wxDropTarget* (*wxButtonBaseExtGetDropTargetFunc)(const wxButtonBaseExt* self, wxDropTarget* res);
typedef wxSize (*wxButtonBaseExtGetEffectiveMinSizeFunc)(const wxButtonBaseExt* self, wxSize res);
typedef wxEventHashTable& (*wxButtonBaseExtGetEventHashTableFunc)(const wxButtonBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxButtonBaseExtGetEventTableFunc)(const wxButtonBaseExt* self, wxEventTable const* res);
typedef WXWidget (*wxButtonBaseExtGetHandleFunc)(const wxButtonBaseExt* self, WXWidget res);
typedef wxString (*wxButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxButtonBaseExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxButtonBaseExtGetLabelFunc)(const wxButtonBaseExt* self, wxString res);
typedef wxString (*wxButtonBaseExtGetLabelTextFunc)(const wxButtonBaseExt* self, wxString res);
typedef wxLayoutDirection (*wxButtonBaseExtGetLayoutDirectionFunc)(const wxButtonBaseExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxButtonBaseExtGetMainWindowOfCompositeControlFunc)(const wxButtonBaseExt* self, wxWindow* res);
typedef wxSize (*wxButtonBaseExtGetMaxClientSizeFunc)(const wxButtonBaseExt* self, wxSize res);
typedef wxSize (*wxButtonBaseExtGetMaxSizeFunc)(const wxButtonBaseExt* self, wxSize res);
typedef wxSize (*wxButtonBaseExtGetMinClientSizeFunc)(const wxButtonBaseExt* self, wxSize res);
typedef wxSize (*wxButtonBaseExtGetMinSizeFunc)(const wxButtonBaseExt* self, wxSize res);
typedef wxString (*wxButtonBaseExtGetNameFunc)(const wxButtonBaseExt* self, wxString res);
typedef wxAnyButtonBase::wxAnyButtonBase::State (*wxButtonBaseExtGetNormalStateFunc)(const wxButtonBaseExt* self, wxAnyButtonBase::wxAnyButtonBase::State res);
typedef void (*wxButtonBaseExtGetPositionConstraint__intPintPFunc)(const wxButtonBaseExt* self, int* x, int* y);
typedef int (*wxButtonBaseExtGetScrollPos__intFunc)(const wxButtonBaseExt* self, int orient, int res);
typedef int (*wxButtonBaseExtGetScrollRange__intFunc)(const wxButtonBaseExt* self, int orient, int res);
typedef int (*wxButtonBaseExtGetScrollThumb__intFunc)(const wxButtonBaseExt* self, int orient, int res);
typedef void (*wxButtonBaseExtGetSizeConstraint__intPintPFunc)(const wxButtonBaseExt* self, int* w, int* h);
typedef bool (*wxButtonBaseExtGetThemeEnabledFunc)(const wxButtonBaseExt* self, bool res);
typedef wxByte (*wxButtonBaseExtGetTransparentFunc)(const wxButtonBaseExt* self, wxByte res);
typedef wxValidator* (*wxButtonBaseExtGetValidatorFunc)(const wxButtonBaseExt* self, wxValidator* res);
typedef wxSize (*wxButtonBaseExtGetWindowBorderSizeFunc)(const wxButtonBaseExt* self, wxSize res);
typedef long (*wxButtonBaseExtGetWindowStyleFlagFunc)(const wxButtonBaseExt* self, long res);
typedef bool (*wxButtonBaseExtHasCaptureFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtHasFocusFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtHasMultiplePagesFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtHasTransparentBackgroundFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxButtonBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxButtonBaseExtInformFirstDirection__intintintFunc)(const wxButtonBaseExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxButtonBaseExtInheritAttributesFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtInitDialogFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtIsClientAreaChild__wxWindowCPFunc)(const wxButtonBaseExt* self, wxWindow const* child, bool res);
typedef bool (*wxButtonBaseExtIsDoubleBufferedFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtIsRetainedFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtIsScrollbarAlwaysShown__intFunc)(const wxButtonBaseExt* self, int orient, bool res);
typedef bool (*wxButtonBaseExtIsShownFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtIsShownOnScreenFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtIsThisEnabledFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtIsTopLevelFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxButtonBaseExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxButtonBaseExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxButtonBaseExt* self, wxString* reason, bool res);
typedef bool (*wxButtonBaseExtLayoutFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtLayoutPhase1__intPFunc)(const wxButtonBaseExt* self, int* noChanges, bool res);
typedef bool (*wxButtonBaseExtLayoutPhase2__intPFunc)(const wxButtonBaseExt* self, int* noChanges, bool res);
typedef void (*wxButtonBaseExtLowerFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtMoveConstraint__intintFunc)(const wxButtonBaseExt* self, int x, int y);
typedef bool (*wxButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxButtonBaseExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxButtonBaseExtOnInternalIdleFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtPrepareDC__wxDCRFunc)(const wxButtonBaseExt* self, wxDC& dc);
typedef bool (*wxButtonBaseExtProcessEvent__wxEventRFunc)(const wxButtonBaseExt* self, wxEvent& event, bool res);
typedef void (*wxButtonBaseExtQueueEvent__wxEventPFunc)(const wxButtonBaseExt* self, wxEvent* event);
typedef void (*wxButtonBaseExtRaiseFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtRefresh__boolwxRectCPFunc)(const wxButtonBaseExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxButtonBaseExtRegisterHotKey__intintintFunc)(const wxButtonBaseExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxButtonBaseExtRemoveChild__wxWindowBasePFunc)(const wxButtonBaseExt* self, wxWindowBase* child);
typedef bool (*wxButtonBaseExtReparent__wxWindowBasePFunc)(const wxButtonBaseExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxButtonBaseExtScrollLines__intFunc)(const wxButtonBaseExt* self, int lines, bool res);
typedef bool (*wxButtonBaseExtScrollPages__intFunc)(const wxButtonBaseExt* self, int pages, bool res);
typedef void (*wxButtonBaseExtScrollWindow__intintwxRectCPFunc)(const wxButtonBaseExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxButtonBaseExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxButtonBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxButtonBaseExtSendIdleEvents__wxIdleEventRFunc)(const wxButtonBaseExt* self, wxIdleEvent& event, bool res);
typedef void (*wxButtonBaseExtSendSizeEvent__intFunc)(const wxButtonBaseExt* self, int flags);
typedef void (*wxButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxButtonBaseExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxButtonBaseExtSetBackgroundColour__wxColourCRFunc)(const wxButtonBaseExt* self, wxColour const& colour, bool res);
typedef bool (*wxButtonBaseExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxButtonBaseExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxButtonBaseExtSetCanFocus__boolFunc)(const wxButtonBaseExt* self, bool canFocus);
typedef void (*wxButtonBaseExtSetConstraintSizes__boolFunc)(const wxButtonBaseExt* self, bool recurse);
typedef bool (*wxButtonBaseExtSetCursor__wxCursorCRFunc)(const wxButtonBaseExt* self, wxCursor const& cursor, bool res);
typedef wxWindow* (*wxButtonBaseExtSetDefaultFunc)(const wxButtonBaseExt* self, wxWindow* res);
typedef void (*wxButtonBaseExtSetDoubleBuffered__boolFunc)(const wxButtonBaseExt* self, bool on);
typedef void (*wxButtonBaseExtSetDropTarget__wxDropTargetPFunc)(const wxButtonBaseExt* self, wxDropTarget* dropTarget);
typedef void (*wxButtonBaseExtSetExtraStyle__longFunc)(const wxButtonBaseExt* self, long exStyle);
typedef void (*wxButtonBaseExtSetFocusFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtSetFocusFromKbdFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtSetFont__wxFontCRFunc)(const wxButtonBaseExt* self, wxFont const& font, bool res);
typedef bool (*wxButtonBaseExtSetForegroundColour__wxColourCRFunc)(const wxButtonBaseExt* self, wxColour const& colour, bool res);
typedef void (*wxButtonBaseExtSetId__wxWindowIDFunc)(const wxButtonBaseExt* self, wxWindowID winid);
typedef void (*wxButtonBaseExtSetLabel__wxStringCRFunc)(const wxButtonBaseExt* self, wxString const& label);
typedef void (*wxButtonBaseExtSetLabelText__wxStringCRFunc)(const wxButtonBaseExt* self, wxString const& text);
typedef void (*wxButtonBaseExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxButtonBaseExt* self, wxLayoutDirection dir);
typedef void (*wxButtonBaseExtSetMaxClientSize__wxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& size);
typedef void (*wxButtonBaseExtSetMaxSize__wxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& maxSize);
typedef void (*wxButtonBaseExtSetMinClientSize__wxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& size);
typedef void (*wxButtonBaseExtSetMinSize__wxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& minSize);
typedef void (*wxButtonBaseExtSetName__wxStringCRFunc)(const wxButtonBaseExt* self, wxString const& name);
typedef void (*wxButtonBaseExtSetNextHandler__wxEvtHandlerPFunc)(const wxButtonBaseExt* self, wxEvtHandler* handler);
typedef void (*wxButtonBaseExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxButtonBaseExt* self, wxEvtHandler* handler);
typedef void (*wxButtonBaseExtSetScrollPos__intintboolFunc)(const wxButtonBaseExt* self, int orient, int pos, bool refresh);
typedef void (*wxButtonBaseExtSetScrollbar__intintintintboolFunc)(const wxButtonBaseExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxButtonBaseExtSetSizeConstraint__intintintintFunc)(const wxButtonBaseExt* self, int x, int y, int w, int h);
typedef void (*wxButtonBaseExtSetSizeHints__intintintintintintFunc)(const wxButtonBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxButtonBaseExtSetThemeEnabled__boolFunc)(const wxButtonBaseExt* self, bool enableTheme);
typedef bool (*wxButtonBaseExtSetTransparent__wxByteFunc)(const wxButtonBaseExt* self, wxByte alpha, bool res);
typedef void (*wxButtonBaseExtSetValidator__wxValidatorCRFunc)(const wxButtonBaseExt* self, wxValidator const& validator);
typedef void (*wxButtonBaseExtSetWindowStyleFlag__longFunc)(const wxButtonBaseExt* self, long style);
typedef bool (*wxButtonBaseExtShouldInheritColoursFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtShow__boolFunc)(const wxButtonBaseExt* self, bool show, bool res);
typedef bool (*wxButtonBaseExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxButtonBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxButtonBaseExtTransferDataFromWindowFunc)(const wxButtonBaseExt* self, bool res);
typedef bool (*wxButtonBaseExtTransferDataToWindowFunc)(const wxButtonBaseExt* self, bool res);
typedef void (*wxButtonBaseExtTriggerScrollEvent__wxEventTypeFunc)(const wxButtonBaseExt* self, wxEventType scrollEvent);
typedef bool (*wxButtonBaseExtTryAfter__wxEventRFunc)(const wxButtonBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxButtonBaseExtTryBefore__wxEventRFunc)(const wxButtonBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxButtonBaseExtUnregisterHotKey__intFunc)(const wxButtonBaseExt* self, int hotkeyId, bool res);
typedef void (*wxButtonBaseExtUpdateFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtUpdateWindowUI__longFunc)(const wxButtonBaseExt* self, long flags);
typedef bool (*wxButtonBaseExtValidateFunc)(const wxButtonBaseExt* self, bool res);
typedef void (*wxButtonBaseExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxButtonBaseExt* self, wxFont& font);
typedef wxTextEntry const* (*wxButtonBaseExtWXGetTextEntryFunc)(const wxButtonBaseExt* self, wxTextEntry const* res);
typedef void* (*wxButtonBaseExtWXReservedEvtHandler1__voidPFunc)(const wxButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxButtonBaseExtWXReservedEvtHandler2__voidPFunc)(const wxButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxButtonBaseExtWXReservedWindow1__voidPFunc)(const wxButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxButtonBaseExtWXReservedWindow2__voidPFunc)(const wxButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxButtonBaseExtWXReservedWindow3__voidPFunc)(const wxButtonBaseExt* self, void* param0, void* res);
typedef void (*wxButtonBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxButtonBaseExt* self, int flags, wxSizer* sizer);
typedef void (*wxButtonBaseExtWarpPointer__intintFunc)(const wxButtonBaseExt* self, int x, int y);
typedef wxSize (*wxButtonBaseExtWindowToClientSize__wxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& size, wxSize res);
class wxButtonExt;
typedef bool (*wxButtonExtAcceptsFocusFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtAcceptsFocusFromKeyboardFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtAcceptsFocusRecursivelyFunc)(const wxButtonExt* self, bool res);
typedef void (*wxButtonExtAddChild__wxWindowBasePFunc)(const wxButtonExt* self, wxWindowBase* child);
typedef void (*wxButtonExtAddPendingEvent__wxEventCRFunc)(const wxButtonExt* self, wxEvent const& event);
typedef wxCoord (*wxButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc)(const wxButtonExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxButtonExtAdjustForParentClientOrigin__intRintRintFunc)(const wxButtonExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxButtonExtAlwaysShowScrollbars__boolboolFunc)(const wxButtonExt* self, bool horz, bool vert);
typedef void (*wxButtonExtAssociateHandle__WXWidgetFunc)(const wxButtonExt* self, WXWidget handle);
typedef bool (*wxButtonExtBeginRepositioningChildrenFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtCanApplyThemeBorderFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtCanBeFocusedFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtCanBeOutsideClientAreaFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtCanScroll__intFunc)(const wxButtonExt* self, int orient, bool res);
typedef bool (*wxButtonExtCanSetTransparentFunc)(const wxButtonExt* self, bool res);
typedef void (*wxButtonExtClearBackgroundFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtClientToWindowSize__wxSizeCRFunc)(const wxButtonExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxButtonExtCloneRefData__wxObjectRefDataCPFunc)(const wxButtonExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef void (*wxButtonExtCommand__wxCommandEventRFunc)(const wxButtonExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxButtonExtCreateRefDataFunc)(const wxButtonExt* self, wxObjectRefData* res);
typedef bool (*wxButtonExtDestroyFunc)(const wxButtonExt* self, bool res);
typedef void (*wxButtonExtDissociateHandleFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtDoCaptureMouseFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtDoCentre__intFunc)(const wxButtonExt* self, int dir);
typedef void (*wxButtonExtDoClientToScreen__intPintPFunc)(const wxButtonExt* self, int* x, int* y);
typedef void (*wxButtonExtDoEnable__boolFunc)(const wxButtonExt* self, bool enable);
typedef void (*wxButtonExtDoFreezeFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtDoGetAuthNeededFunc)(const wxButtonExt* self, bool res);
typedef int (*wxButtonExtDoGetBestClientHeight__intFunc)(const wxButtonExt* self, int width, int res);
typedef wxSize (*wxButtonExtDoGetBestClientSizeFunc)(const wxButtonExt* self, wxSize res);
typedef int (*wxButtonExtDoGetBestClientWidth__intFunc)(const wxButtonExt* self, int height, int res);
typedef wxSize (*wxButtonExtDoGetBestSizeFunc)(const wxButtonExt* self, wxSize res);
typedef wxBitmap (*wxButtonExtDoGetBitmap__wxAnyButtonBaseNStateFunc)(const wxButtonExt* self, wxAnyButtonBase::State which, wxBitmap res);
typedef wxSize (*wxButtonExtDoGetBitmapMarginsFunc)(const wxButtonExt* self, wxSize res);
typedef void* (*wxButtonExtDoGetClientDataFunc)(const wxButtonExt* self, void* res);
typedef wxClientData* (*wxButtonExtDoGetClientObjectFunc)(const wxButtonExt* self, wxClientData* res);
typedef void (*wxButtonExtDoGetClientSize__intPintPFunc)(const wxButtonExt* self, int* width, int* height);
typedef void (*wxButtonExtDoGetPosition__intPintPFunc)(const wxButtonExt* self, int* x, int* y);
typedef void (*wxButtonExtDoGetScreenPosition__intPintPFunc)(const wxButtonExt* self, int* x, int* y);
typedef void (*wxButtonExtDoGetSize__intPintPFunc)(const wxButtonExt* self, int* width, int* height);
typedef wxSize (*wxButtonExtDoGetSizeFromClientSize__wxSizeCRFunc)(const wxButtonExt* self, wxSize const& size, wxSize res);
typedef wxSize (*wxButtonExtDoGetSizeFromTextSize__intintFunc)(const wxButtonExt* self, int xlen, int ylen, wxSize res);
typedef void (*wxButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc)(const wxButtonExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxButtonExtDoGetVirtualSizeFunc)(const wxButtonExt* self, wxSize res);
typedef wxHitTest (*wxButtonExtDoHitTest__wxCoordwxCoordFunc)(const wxButtonExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxButtonExtDoIsExposed__intintintintFunc)(const wxButtonExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxButtonExtDoIsExposed__intintFunc)(const wxButtonExt* self, int x, int y, bool res);
typedef void (*wxButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc)(const wxButtonExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxButtonExtDoMoveWindow__intintintintFunc)(const wxButtonExt* self, int x, int y, int width, int height);
typedef bool (*wxButtonExtDoNavigateIn__intFunc)(const wxButtonExt* self, int flags, bool res);
typedef bool (*wxButtonExtDoPhase__intFunc)(const wxButtonExt* self, int phase, bool res);
typedef bool (*wxButtonExtDoPopupMenu__wxMenuPintintFunc)(const wxButtonExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxButtonExtDoReleaseMouseFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtDoScreenToClient__intPintPFunc)(const wxButtonExt* self, int* x, int* y);
typedef void (*wxButtonExtDoSetAuthNeeded__boolFunc)(const wxButtonExt* self, bool show);
typedef void (*wxButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc)(const wxButtonExt* self, wxBitmapBundle const& bitmapBundle, wxAnyButtonBase::State which);
typedef void (*wxButtonExtDoSetBitmapMargins__intintFunc)(const wxButtonExt* self, int x, int y);
typedef void (*wxButtonExtDoSetBitmapPosition__wxDirectionFunc)(const wxButtonExt* self, wxDirection dir);
typedef void (*wxButtonExtDoSetClientData__voidPFunc)(const wxButtonExt* self, void* data);
typedef void (*wxButtonExtDoSetClientObject__wxClientDataPFunc)(const wxButtonExt* self, wxClientData* data);
typedef void (*wxButtonExtDoSetClientSize__intintFunc)(const wxButtonExt* self, int width, int height);
typedef bool (*wxButtonExtDoSetLabelMarkup__wxStringCRFunc)(const wxButtonExt* self, wxString const& markup, bool res);
typedef void (*wxButtonExtDoSetSize__intintintintintFunc)(const wxButtonExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxButtonExtDoSetSizeHints__intintintintintintFunc)(const wxButtonExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxButtonExtDoSetToolTip__wxToolTipPFunc)(const wxButtonExt* self, wxToolTip* tip);
typedef void (*wxButtonExtDoSetToolTipText__wxStringCRFunc)(const wxButtonExt* self, wxString const& tip);
typedef void (*wxButtonExtDoSetVirtualSize__intintFunc)(const wxButtonExt* self, int x, int y);
typedef void (*wxButtonExtDoSetWindowVariant__wxWindowVariantFunc)(const wxButtonExt* self, wxWindowVariant variant);
typedef void (*wxButtonExtDoThawFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtDoUpdateWindowUI__wxUpdateUIEventRFunc)(const wxButtonExt* self, wxUpdateUIEvent& event);
typedef void (*wxButtonExtDragAcceptFiles__boolFunc)(const wxButtonExt* self, bool accept);
typedef bool (*wxButtonExtEnable__boolFunc)(const wxButtonExt* self, bool enable, bool res);
typedef bool (*wxButtonExtEnableTouchEvents__intFunc)(const wxButtonExt* self, int eventsMask, bool res);
typedef void (*wxButtonExtEnableVisibleFocus__boolFunc)(const wxButtonExt* self, bool enabled);
typedef void (*wxButtonExtEndRepositioningChildrenFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtFitFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtFitInsideFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtGetBestVirtualSizeFunc)(const wxButtonExt* self, wxSize res);
typedef int (*wxButtonExtGetCharHeightFunc)(const wxButtonExt* self, int res);
typedef int (*wxButtonExtGetCharWidthFunc)(const wxButtonExt* self, int res);
typedef wxClassInfo* (*wxButtonExtGetClassInfoFunc)(const wxButtonExt* self, wxClassInfo* res);
typedef wxPoint (*wxButtonExtGetClientAreaOriginFunc)(const wxButtonExt* self, wxPoint res);
typedef void (*wxButtonExtGetClientSizeConstraint__intPintPFunc)(const wxButtonExt* self, int* w, int* h);
typedef double (*wxButtonExtGetContentScaleFactorFunc)(const wxButtonExt* self, double res);
typedef wxSize (*wxButtonExtGetDPIFunc)(const wxButtonExt* self, wxSize res);
typedef double (*wxButtonExtGetDPIScaleFactorFunc)(const wxButtonExt* self, double res);
typedef wxVisualAttributes (*wxButtonExtGetDefaultAttributesFunc)(const wxButtonExt* self, wxVisualAttributes res);
typedef wxBorder (*wxButtonExtGetDefaultBorderFunc)(const wxButtonExt* self, wxBorder res);
typedef wxBorder (*wxButtonExtGetDefaultBorderForControlFunc)(const wxButtonExt* self, wxBorder res);
typedef wxDropTarget* (*wxButtonExtGetDropTargetFunc)(const wxButtonExt* self, wxDropTarget* res);
typedef wxSize (*wxButtonExtGetEffectiveMinSizeFunc)(const wxButtonExt* self, wxSize res);
typedef wxEventHashTable& (*wxButtonExtGetEventHashTableFunc)(const wxButtonExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxButtonExtGetEventTableFunc)(const wxButtonExt* self, wxEventTable const* res);
typedef WXWidget (*wxButtonExtGetHandleFunc)(const wxButtonExt* self, WXWidget res);
typedef wxString (*wxButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc)(const wxButtonExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
typedef wxString (*wxButtonExtGetLabelFunc)(const wxButtonExt* self, wxString res);
typedef wxString (*wxButtonExtGetLabelTextFunc)(const wxButtonExt* self, wxString res);
typedef wxLayoutDirection (*wxButtonExtGetLayoutDirectionFunc)(const wxButtonExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxButtonExtGetMainWindowOfCompositeControlFunc)(const wxButtonExt* self, wxWindow* res);
typedef wxSize (*wxButtonExtGetMaxClientSizeFunc)(const wxButtonExt* self, wxSize res);
typedef wxSize (*wxButtonExtGetMaxSizeFunc)(const wxButtonExt* self, wxSize res);
typedef wxSize (*wxButtonExtGetMinClientSizeFunc)(const wxButtonExt* self, wxSize res);
typedef wxSize (*wxButtonExtGetMinSizeFunc)(const wxButtonExt* self, wxSize res);
typedef wxString (*wxButtonExtGetNameFunc)(const wxButtonExt* self, wxString res);
typedef wxAnyButtonBase::wxAnyButtonBase::State (*wxButtonExtGetNormalStateFunc)(const wxButtonExt* self, wxAnyButtonBase::wxAnyButtonBase::State res);
typedef void (*wxButtonExtGetPositionConstraint__intPintPFunc)(const wxButtonExt* self, int* x, int* y);
typedef int (*wxButtonExtGetScrollPos__intFunc)(const wxButtonExt* self, int orient, int res);
typedef int (*wxButtonExtGetScrollRange__intFunc)(const wxButtonExt* self, int orient, int res);
typedef int (*wxButtonExtGetScrollThumb__intFunc)(const wxButtonExt* self, int orient, int res);
typedef void (*wxButtonExtGetSizeConstraint__intPintPFunc)(const wxButtonExt* self, int* w, int* h);
typedef bool (*wxButtonExtGetThemeEnabledFunc)(const wxButtonExt* self, bool res);
typedef wxByte (*wxButtonExtGetTransparentFunc)(const wxButtonExt* self, wxByte res);
typedef wxValidator* (*wxButtonExtGetValidatorFunc)(const wxButtonExt* self, wxValidator* res);
typedef wxSize (*wxButtonExtGetWindowBorderSizeFunc)(const wxButtonExt* self, wxSize res);
typedef long (*wxButtonExtGetWindowStyleFlagFunc)(const wxButtonExt* self, long res);
typedef bool (*wxButtonExtHasCaptureFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtHasFocusFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtHasMultiplePagesFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtHasTransparentBackgroundFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtHideWithEffect__wxShowEffectunsignedintFunc)(const wxButtonExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxButtonExtInformFirstDirection__intintintFunc)(const wxButtonExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxButtonExtInheritAttributesFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtInitDialogFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtIsClientAreaChild__wxWindowCPFunc)(const wxButtonExt* self, wxWindow const* child, bool res);
typedef bool (*wxButtonExtIsDoubleBufferedFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtIsRetainedFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtIsScrollbarAlwaysShown__intFunc)(const wxButtonExt* self, int orient, bool res);
typedef bool (*wxButtonExtIsShownFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtIsShownOnScreenFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtIsThisEnabledFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtIsTopLevelFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc)(const wxButtonExt* self, wxWindowBase::NavigationKind kind, bool res);
typedef bool (*wxButtonExtIsTransparentBackgroundSupported__wxStringPFunc)(const wxButtonExt* self, wxString* reason, bool res);
typedef bool (*wxButtonExtLayoutFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtLayoutPhase1__intPFunc)(const wxButtonExt* self, int* noChanges, bool res);
typedef bool (*wxButtonExtLayoutPhase2__intPFunc)(const wxButtonExt* self, int* noChanges, bool res);
typedef void (*wxButtonExtLowerFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtMoveConstraint__intintFunc)(const wxButtonExt* self, int x, int y);
typedef bool (*wxButtonExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxButtonExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxButtonExtOnInternalIdleFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtPrepareDC__wxDCRFunc)(const wxButtonExt* self, wxDC& dc);
typedef bool (*wxButtonExtProcessEvent__wxEventRFunc)(const wxButtonExt* self, wxEvent& event, bool res);
typedef void (*wxButtonExtQueueEvent__wxEventPFunc)(const wxButtonExt* self, wxEvent* event);
typedef void (*wxButtonExtRaiseFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtRefresh__boolwxRectCPFunc)(const wxButtonExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxButtonExtRegisterHotKey__intintintFunc)(const wxButtonExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxButtonExtRemoveChild__wxWindowBasePFunc)(const wxButtonExt* self, wxWindowBase* child);
typedef bool (*wxButtonExtReparent__wxWindowBasePFunc)(const wxButtonExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxButtonExtScrollLines__intFunc)(const wxButtonExt* self, int lines, bool res);
typedef bool (*wxButtonExtScrollPages__intFunc)(const wxButtonExt* self, int pages, bool res);
typedef void (*wxButtonExtScrollWindow__intintwxRectCPFunc)(const wxButtonExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxButtonExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxButtonExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxButtonExtSendIdleEvents__wxIdleEventRFunc)(const wxButtonExt* self, wxIdleEvent& event, bool res);
typedef void (*wxButtonExtSendSizeEvent__intFunc)(const wxButtonExt* self, int flags);
typedef void (*wxButtonExtSetAcceleratorTable__wxAcceleratorTableCRFunc)(const wxButtonExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxButtonExtSetBackgroundColour__wxColourCRFunc)(const wxButtonExt* self, wxColour const& colour, bool res);
typedef bool (*wxButtonExtSetBackgroundStyle__wxBackgroundStyleFunc)(const wxButtonExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxButtonExtSetCanFocus__boolFunc)(const wxButtonExt* self, bool canFocus);
typedef void (*wxButtonExtSetConstraintSizes__boolFunc)(const wxButtonExt* self, bool recurse);
typedef bool (*wxButtonExtSetCursor__wxCursorCRFunc)(const wxButtonExt* self, wxCursor const& cursor, bool res);
typedef wxWindow* (*wxButtonExtSetDefaultFunc)(const wxButtonExt* self, wxWindow* res);
typedef void (*wxButtonExtSetDoubleBuffered__boolFunc)(const wxButtonExt* self, bool on);
typedef void (*wxButtonExtSetDropTarget__wxDropTargetPFunc)(const wxButtonExt* self, wxDropTarget* dropTarget);
typedef void (*wxButtonExtSetExtraStyle__longFunc)(const wxButtonExt* self, long exStyle);
typedef void (*wxButtonExtSetFocusFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtSetFocusFromKbdFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtSetFont__wxFontCRFunc)(const wxButtonExt* self, wxFont const& font, bool res);
typedef bool (*wxButtonExtSetForegroundColour__wxColourCRFunc)(const wxButtonExt* self, wxColour const& colour, bool res);
typedef void (*wxButtonExtSetId__wxWindowIDFunc)(const wxButtonExt* self, wxWindowID winid);
typedef void (*wxButtonExtSetLabel__wxStringCRFunc)(const wxButtonExt* self, wxString const& label);
typedef void (*wxButtonExtSetLabelText__wxStringCRFunc)(const wxButtonExt* self, wxString const& text);
typedef void (*wxButtonExtSetLayoutDirection__wxLayoutDirectionFunc)(const wxButtonExt* self, wxLayoutDirection dir);
typedef void (*wxButtonExtSetMaxClientSize__wxSizeCRFunc)(const wxButtonExt* self, wxSize const& size);
typedef void (*wxButtonExtSetMaxSize__wxSizeCRFunc)(const wxButtonExt* self, wxSize const& maxSize);
typedef void (*wxButtonExtSetMinClientSize__wxSizeCRFunc)(const wxButtonExt* self, wxSize const& size);
typedef void (*wxButtonExtSetMinSize__wxSizeCRFunc)(const wxButtonExt* self, wxSize const& minSize);
typedef void (*wxButtonExtSetName__wxStringCRFunc)(const wxButtonExt* self, wxString const& name);
typedef void (*wxButtonExtSetNextHandler__wxEvtHandlerPFunc)(const wxButtonExt* self, wxEvtHandler* handler);
typedef void (*wxButtonExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxButtonExt* self, wxEvtHandler* handler);
typedef void (*wxButtonExtSetScrollPos__intintboolFunc)(const wxButtonExt* self, int orient, int pos, bool refresh);
typedef void (*wxButtonExtSetScrollbar__intintintintboolFunc)(const wxButtonExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxButtonExtSetSizeConstraint__intintintintFunc)(const wxButtonExt* self, int x, int y, int w, int h);
typedef void (*wxButtonExtSetSizeHints__intintintintintintFunc)(const wxButtonExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxButtonExtSetThemeEnabled__boolFunc)(const wxButtonExt* self, bool enableTheme);
typedef bool (*wxButtonExtSetTransparent__wxByteFunc)(const wxButtonExt* self, wxByte alpha, bool res);
typedef void (*wxButtonExtSetValidator__wxValidatorCRFunc)(const wxButtonExt* self, wxValidator const& validator);
typedef void (*wxButtonExtSetWindowStyleFlag__longFunc)(const wxButtonExt* self, long style);
typedef bool (*wxButtonExtShouldInheritColoursFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtShow__boolFunc)(const wxButtonExt* self, bool show, bool res);
typedef bool (*wxButtonExtShowWithEffect__wxShowEffectunsignedintFunc)(const wxButtonExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxButtonExtTransferDataFromWindowFunc)(const wxButtonExt* self, bool res);
typedef bool (*wxButtonExtTransferDataToWindowFunc)(const wxButtonExt* self, bool res);
typedef void (*wxButtonExtTriggerScrollEvent__wxEventTypeFunc)(const wxButtonExt* self, wxEventType scrollEvent);
typedef bool (*wxButtonExtTryAfter__wxEventRFunc)(const wxButtonExt* self, wxEvent& event, bool res);
typedef bool (*wxButtonExtTryBefore__wxEventRFunc)(const wxButtonExt* self, wxEvent& event, bool res);
typedef bool (*wxButtonExtUnregisterHotKey__intFunc)(const wxButtonExt* self, int hotkeyId, bool res);
typedef void (*wxButtonExtUpdateFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtUpdateWindowUI__longFunc)(const wxButtonExt* self, long flags);
typedef bool (*wxButtonExtValidateFunc)(const wxButtonExt* self, bool res);
typedef void (*wxButtonExtWXAdjustFontToOwnPPI__wxFontRFunc)(const wxButtonExt* self, wxFont& font);
typedef wxTextEntry const* (*wxButtonExtWXGetTextEntryFunc)(const wxButtonExt* self, wxTextEntry const* res);
typedef void* (*wxButtonExtWXReservedEvtHandler1__voidPFunc)(const wxButtonExt* self, void* param0, void* res);
typedef void* (*wxButtonExtWXReservedEvtHandler2__voidPFunc)(const wxButtonExt* self, void* param0, void* res);
typedef void* (*wxButtonExtWXReservedWindow1__voidPFunc)(const wxButtonExt* self, void* param0, void* res);
typedef void* (*wxButtonExtWXReservedWindow2__voidPFunc)(const wxButtonExt* self, void* param0, void* res);
typedef void* (*wxButtonExtWXReservedWindow3__voidPFunc)(const wxButtonExt* self, void* param0, void* res);
typedef void (*wxButtonExtWXSetInitialFittingClientSize__intwxSizerPFunc)(const wxButtonExt* self, int flags, wxSizer* sizer);
typedef void (*wxButtonExtWarpPointer__intintFunc)(const wxButtonExt* self, int x, int y);
typedef wxSize (*wxButtonExtWindowToClientSize__wxSizeCRFunc)(const wxButtonExt* self, wxSize const& size, wxSize res);

class wxButtonBaseExt: public wxButtonBase
{
public:
  wxButtonBaseExt(): wxButtonBase()  {  }
  wxButtonBaseExtAcceptsFocusFunc m_wxButtonBaseExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxButtonBase::AcceptsFocus();
    if (*m_wxButtonBaseExtAcceptsFocus != NULL){
      return m_wxButtonBaseExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtAcceptsFocusFromKeyboardFunc m_wxButtonBaseExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxButtonBase::AcceptsFocusFromKeyboard();
    if (*m_wxButtonBaseExtAcceptsFocusFromKeyboard != NULL){
      return m_wxButtonBaseExtAcceptsFocusFromKeyboard(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtAcceptsFocusRecursivelyFunc m_wxButtonBaseExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxButtonBase::AcceptsFocusRecursively();
    if (*m_wxButtonBaseExtAcceptsFocusRecursively != NULL){
      return m_wxButtonBaseExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtAddChild__wxWindowBasePFunc m_wxButtonBaseExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxButtonBase::AddChild(child);
    if (*m_wxButtonBaseExtAddChild__wxWindowBaseP != NULL){
      return m_wxButtonBaseExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxButtonBaseExtAddPendingEvent__wxEventCRFunc m_wxButtonBaseExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxButtonBase::AddPendingEvent(event);
    if (*m_wxButtonBaseExtAddPendingEvent__wxEventCR != NULL){
      return m_wxButtonBaseExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxButtonBase::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtAdjustForParentClientOrigin__intRintRintFunc m_wxButtonBaseExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxButtonBase::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxButtonBaseExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxButtonBaseExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxButtonBaseExtAlwaysShowScrollbars__boolboolFunc m_wxButtonBaseExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxButtonBase::AlwaysShowScrollbars(horz, vert);
    if (*m_wxButtonBaseExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxButtonBaseExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxButtonBaseExtAssociateHandle__WXWidgetFunc m_wxButtonBaseExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxButtonBase::AssociateHandle(handle);
    if (*m_wxButtonBaseExtAssociateHandle__WXWidget != NULL){
      return m_wxButtonBaseExtAssociateHandle__WXWidget(this, handle);
    }
  }
  wxButtonBaseExtBeginRepositioningChildrenFunc m_wxButtonBaseExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxButtonBase::BeginRepositioningChildren();
    if (*m_wxButtonBaseExtBeginRepositioningChildren != NULL){
      return m_wxButtonBaseExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtCanApplyThemeBorderFunc m_wxButtonBaseExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxButtonBase::CanApplyThemeBorder();
    if (*m_wxButtonBaseExtCanApplyThemeBorder != NULL){
      return m_wxButtonBaseExtCanApplyThemeBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtCanBeFocusedFunc m_wxButtonBaseExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxButtonBase::CanBeFocused();
    if (*m_wxButtonBaseExtCanBeFocused != NULL){
      return m_wxButtonBaseExtCanBeFocused(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtCanBeOutsideClientAreaFunc m_wxButtonBaseExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxButtonBase::CanBeOutsideClientArea();
    if (*m_wxButtonBaseExtCanBeOutsideClientArea != NULL){
      return m_wxButtonBaseExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtCanScroll__intFunc m_wxButtonBaseExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxButtonBase::CanScroll(orient);
    if (*m_wxButtonBaseExtCanScroll__int != NULL){
      return m_wxButtonBaseExtCanScroll__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtCanSetTransparentFunc m_wxButtonBaseExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxButtonBase::CanSetTransparent();
    if (*m_wxButtonBaseExtCanSetTransparent != NULL){
      return m_wxButtonBaseExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtClearBackgroundFunc m_wxButtonBaseExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxButtonBase::ClearBackground();
    if (*m_wxButtonBaseExtClearBackground != NULL){
      return m_wxButtonBaseExtClearBackground(this);
    }
  }
  wxButtonBaseExtClientToWindowSize__wxSizeCRFunc m_wxButtonBaseExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxButtonBase::ClientToWindowSize(size);
    if (*m_wxButtonBaseExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxButtonBaseExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtCloneRefData__wxObjectRefDataCPFunc m_wxButtonBaseExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxButtonBase::CloneRefData(data);
    if (*m_wxButtonBaseExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxButtonBaseExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtCommand__wxCommandEventRFunc m_wxButtonBaseExtCommand__wxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxButtonBase::Command(event);
    if (*m_wxButtonBaseExtCommand__wxCommandEventR != NULL){
      return m_wxButtonBaseExtCommand__wxCommandEventR(this, event);
    }
  }
  wxButtonBaseExtCreateRefDataFunc m_wxButtonBaseExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxButtonBase::CreateRefData();
    if (*m_wxButtonBaseExtCreateRefData != NULL){
      return m_wxButtonBaseExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDestroyFunc m_wxButtonBaseExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxButtonBase::Destroy();
    if (*m_wxButtonBaseExtDestroy != NULL){
      return m_wxButtonBaseExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDissociateHandleFunc m_wxButtonBaseExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxButtonBase::DissociateHandle();
    if (*m_wxButtonBaseExtDissociateHandle != NULL){
      return m_wxButtonBaseExtDissociateHandle(this);
    }
  }
  wxButtonBaseExtDoCaptureMouseFunc m_wxButtonBaseExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxButtonBase::DoCaptureMouse();
    if (*m_wxButtonBaseExtDoCaptureMouse != NULL){
      return m_wxButtonBaseExtDoCaptureMouse(this);
    }
  }
  wxButtonBaseExtDoCentre__intFunc m_wxButtonBaseExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxButtonBase::DoCentre(dir);
    if (*m_wxButtonBaseExtDoCentre__int != NULL){
      return m_wxButtonBaseExtDoCentre__int(this, dir);
    }
  }
  wxButtonBaseExtDoClientToScreen__intPintPFunc m_wxButtonBaseExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxButtonBase::DoClientToScreen(x, y);
    if (*m_wxButtonBaseExtDoClientToScreen__intPintP != NULL){
      return m_wxButtonBaseExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxButtonBaseExtDoEnable__boolFunc m_wxButtonBaseExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxButtonBase::DoEnable(enable);
    if (*m_wxButtonBaseExtDoEnable__bool != NULL){
      return m_wxButtonBaseExtDoEnable__bool(this, enable);
    }
  }
  wxButtonBaseExtDoFreezeFunc m_wxButtonBaseExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxButtonBase::DoFreeze();
    if (*m_wxButtonBaseExtDoFreeze != NULL){
      return m_wxButtonBaseExtDoFreeze(this);
    }
  }
  wxButtonBaseExtDoGetAuthNeededFunc m_wxButtonBaseExtDoGetAuthNeeded = NULL;
  virtual bool DoGetAuthNeeded() const override
  {
    bool res = wxButtonBase::DoGetAuthNeeded();
    if (*m_wxButtonBaseExtDoGetAuthNeeded != NULL){
      return m_wxButtonBaseExtDoGetAuthNeeded(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetBestClientHeight__intFunc m_wxButtonBaseExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxButtonBase::DoGetBestClientHeight(width);
    if (*m_wxButtonBaseExtDoGetBestClientHeight__int != NULL){
      return m_wxButtonBaseExtDoGetBestClientHeight__int(this, width, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetBestClientSizeFunc m_wxButtonBaseExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxButtonBase::DoGetBestClientSize();
    if (*m_wxButtonBaseExtDoGetBestClientSize != NULL){
      return m_wxButtonBaseExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetBestClientWidth__intFunc m_wxButtonBaseExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxButtonBase::DoGetBestClientWidth(height);
    if (*m_wxButtonBaseExtDoGetBestClientWidth__int != NULL){
      return m_wxButtonBaseExtDoGetBestClientWidth__int(this, height, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetBestSizeFunc m_wxButtonBaseExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxButtonBase::DoGetBestSize();
    if (*m_wxButtonBaseExtDoGetBestSize != NULL){
      return m_wxButtonBaseExtDoGetBestSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetBitmap__wxAnyButtonBaseNStateFunc m_wxButtonBaseExtDoGetBitmap__wxAnyButtonBaseNState = NULL;
  virtual wxBitmap DoGetBitmap(wxAnyButtonBase::State which) const override
  {
    wxBitmap res = wxButtonBase::DoGetBitmap(which);
    if (*m_wxButtonBaseExtDoGetBitmap__wxAnyButtonBaseNState != NULL){
      return m_wxButtonBaseExtDoGetBitmap__wxAnyButtonBaseNState(this, which, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetBitmapMarginsFunc m_wxButtonBaseExtDoGetBitmapMargins = NULL;
  virtual wxSize DoGetBitmapMargins() const override
  {
    wxSize res = wxButtonBase::DoGetBitmapMargins();
    if (*m_wxButtonBaseExtDoGetBitmapMargins != NULL){
      return m_wxButtonBaseExtDoGetBitmapMargins(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetClientDataFunc m_wxButtonBaseExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxButtonBase::DoGetClientData();
    if (*m_wxButtonBaseExtDoGetClientData != NULL){
      return m_wxButtonBaseExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetClientObjectFunc m_wxButtonBaseExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxButtonBase::DoGetClientObject();
    if (*m_wxButtonBaseExtDoGetClientObject != NULL){
      return m_wxButtonBaseExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetClientSize__intPintPFunc m_wxButtonBaseExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxButtonBase::DoGetClientSize(width, height);
    if (*m_wxButtonBaseExtDoGetClientSize__intPintP != NULL){
      return m_wxButtonBaseExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxButtonBaseExtDoGetPosition__intPintPFunc m_wxButtonBaseExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxButtonBase::DoGetPosition(x, y);
    if (*m_wxButtonBaseExtDoGetPosition__intPintP != NULL){
      return m_wxButtonBaseExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxButtonBaseExtDoGetScreenPosition__intPintPFunc m_wxButtonBaseExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxButtonBase::DoGetScreenPosition(x, y);
    if (*m_wxButtonBaseExtDoGetScreenPosition__intPintP != NULL){
      return m_wxButtonBaseExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxButtonBaseExtDoGetSize__intPintPFunc m_wxButtonBaseExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxButtonBase::DoGetSize(width, height);
    if (*m_wxButtonBaseExtDoGetSize__intPintP != NULL){
      return m_wxButtonBaseExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxButtonBaseExtDoGetSizeFromClientSize__wxSizeCRFunc m_wxButtonBaseExtDoGetSizeFromClientSize__wxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxButtonBase::DoGetSizeFromClientSize(size);
    if (*m_wxButtonBaseExtDoGetSizeFromClientSize__wxSizeCR != NULL){
      return m_wxButtonBaseExtDoGetSizeFromClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetSizeFromTextSize__intintFunc m_wxButtonBaseExtDoGetSizeFromTextSize__intint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxButtonBase::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxButtonBaseExtDoGetSizeFromTextSize__intint != NULL){
      return m_wxButtonBaseExtDoGetSizeFromTextSize__intint(this, xlen, ylen, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxButtonBase::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxButtonBaseExtDoGetVirtualSizeFunc m_wxButtonBaseExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxButtonBase::DoGetVirtualSize();
    if (*m_wxButtonBaseExtDoGetVirtualSize != NULL){
      return m_wxButtonBaseExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoHitTest__wxCoordwxCoordFunc m_wxButtonBaseExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxButtonBase::DoHitTest(x, y);
    if (*m_wxButtonBaseExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxButtonBaseExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoIsExposed__intintintintFunc m_wxButtonBaseExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxButtonBase::DoIsExposed(x, y, w, h);
    if (*m_wxButtonBaseExtDoIsExposed__intintintint != NULL){
      return m_wxButtonBaseExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoIsExposed__intintFunc m_wxButtonBaseExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxButtonBase::DoIsExposed(x, y);
    if (*m_wxButtonBaseExtDoIsExposed__intint != NULL){
      return m_wxButtonBaseExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxButtonBase::DoMoveInTabOrder(win, move);
    if (*m_wxButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxButtonBaseExtDoMoveWindow__intintintintFunc m_wxButtonBaseExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxButtonBase::DoMoveWindow(x, y, width, height);
    if (*m_wxButtonBaseExtDoMoveWindow__intintintint != NULL){
      return m_wxButtonBaseExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxButtonBaseExtDoNavigateIn__intFunc m_wxButtonBaseExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxButtonBase::DoNavigateIn(flags);
    if (*m_wxButtonBaseExtDoNavigateIn__int != NULL){
      return m_wxButtonBaseExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoPhase__intFunc m_wxButtonBaseExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxButtonBase::DoPhase(phase);
    if (*m_wxButtonBaseExtDoPhase__int != NULL){
      return m_wxButtonBaseExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoPopupMenu__wxMenuPintintFunc m_wxButtonBaseExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxButtonBase::DoPopupMenu(menu, x, y);
    if (*m_wxButtonBaseExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxButtonBaseExtDoPopupMenu__wxMenuPintint(this, menu, x, y, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoReleaseMouseFunc m_wxButtonBaseExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxButtonBase::DoReleaseMouse();
    if (*m_wxButtonBaseExtDoReleaseMouse != NULL){
      return m_wxButtonBaseExtDoReleaseMouse(this);
    }
  }
  wxButtonBaseExtDoScreenToClient__intPintPFunc m_wxButtonBaseExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxButtonBase::DoScreenToClient(x, y);
    if (*m_wxButtonBaseExtDoScreenToClient__intPintP != NULL){
      return m_wxButtonBaseExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxButtonBaseExtDoSetAuthNeeded__boolFunc m_wxButtonBaseExtDoSetAuthNeeded__bool = NULL;
  virtual void DoSetAuthNeeded(bool show) override
  {
    wxButtonBase::DoSetAuthNeeded(show);
    if (*m_wxButtonBaseExtDoSetAuthNeeded__bool != NULL){
      return m_wxButtonBaseExtDoSetAuthNeeded__bool(this, show);
    }
  }
  wxButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc m_wxButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState = NULL;
  virtual void DoSetBitmap(wxBitmapBundle const& bitmapBundle, wxAnyButtonBase::State which) override
  {
    wxButtonBase::DoSetBitmap(bitmapBundle, which);
    if (*m_wxButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState != NULL){
      return m_wxButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState(this, bitmapBundle, which);
    }
  }
  wxButtonBaseExtDoSetBitmapMargins__intintFunc m_wxButtonBaseExtDoSetBitmapMargins__intint = NULL;
  virtual void DoSetBitmapMargins(int x, int y) override
  {
    wxButtonBase::DoSetBitmapMargins(x, y);
    if (*m_wxButtonBaseExtDoSetBitmapMargins__intint != NULL){
      return m_wxButtonBaseExtDoSetBitmapMargins__intint(this, x, y);
    }
  }
  wxButtonBaseExtDoSetBitmapPosition__wxDirectionFunc m_wxButtonBaseExtDoSetBitmapPosition__wxDirection = NULL;
  virtual void DoSetBitmapPosition(wxDirection dir) override
  {
    wxButtonBase::DoSetBitmapPosition(dir);
    if (*m_wxButtonBaseExtDoSetBitmapPosition__wxDirection != NULL){
      return m_wxButtonBaseExtDoSetBitmapPosition__wxDirection(this, dir);
    }
  }
  wxButtonBaseExtDoSetClientData__voidPFunc m_wxButtonBaseExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxButtonBase::DoSetClientData(data);
    if (*m_wxButtonBaseExtDoSetClientData__voidP != NULL){
      return m_wxButtonBaseExtDoSetClientData__voidP(this, data);
    }
  }
  wxButtonBaseExtDoSetClientObject__wxClientDataPFunc m_wxButtonBaseExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxButtonBase::DoSetClientObject(data);
    if (*m_wxButtonBaseExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxButtonBaseExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxButtonBaseExtDoSetClientSize__intintFunc m_wxButtonBaseExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxButtonBase::DoSetClientSize(width, height);
    if (*m_wxButtonBaseExtDoSetClientSize__intint != NULL){
      return m_wxButtonBaseExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxButtonBaseExtDoSetLabelMarkup__wxStringCRFunc m_wxButtonBaseExtDoSetLabelMarkup__wxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxButtonBase::DoSetLabelMarkup(markup);
    if (*m_wxButtonBaseExtDoSetLabelMarkup__wxStringCR != NULL){
      return m_wxButtonBaseExtDoSetLabelMarkup__wxStringCR(this, markup, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoSetSize__intintintintintFunc m_wxButtonBaseExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxButtonBase::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxButtonBaseExtDoSetSize__intintintintint != NULL){
      return m_wxButtonBaseExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxButtonBaseExtDoSetSizeHints__intintintintintintFunc m_wxButtonBaseExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxButtonBase::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxButtonBaseExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxButtonBaseExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxButtonBaseExtDoSetToolTip__wxToolTipPFunc m_wxButtonBaseExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxButtonBase::DoSetToolTip(tip);
    if (*m_wxButtonBaseExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxButtonBaseExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxButtonBaseExtDoSetToolTipText__wxStringCRFunc m_wxButtonBaseExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxButtonBase::DoSetToolTipText(tip);
    if (*m_wxButtonBaseExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxButtonBaseExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxButtonBaseExtDoSetVirtualSize__intintFunc m_wxButtonBaseExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxButtonBase::DoSetVirtualSize(x, y);
    if (*m_wxButtonBaseExtDoSetVirtualSize__intint != NULL){
      return m_wxButtonBaseExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxButtonBaseExtDoSetWindowVariant__wxWindowVariantFunc m_wxButtonBaseExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxButtonBase::DoSetWindowVariant(variant);
    if (*m_wxButtonBaseExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxButtonBaseExtDoSetWindowVariant__wxWindowVariant(this, variant);
    }
  }
  wxButtonBaseExtDoThawFunc m_wxButtonBaseExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxButtonBase::DoThaw();
    if (*m_wxButtonBaseExtDoThaw != NULL){
      return m_wxButtonBaseExtDoThaw(this);
    }
  }
  wxButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxButtonBase::DoUpdateWindowUI(event);
    if (*m_wxButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxButtonBaseExtDragAcceptFiles__boolFunc m_wxButtonBaseExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxButtonBase::DragAcceptFiles(accept);
    if (*m_wxButtonBaseExtDragAcceptFiles__bool != NULL){
      return m_wxButtonBaseExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxButtonBaseExtEnable__boolFunc m_wxButtonBaseExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxButtonBase::Enable(enable);
    if (*m_wxButtonBaseExtEnable__bool != NULL){
      return m_wxButtonBaseExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtEnableTouchEvents__intFunc m_wxButtonBaseExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxButtonBase::EnableTouchEvents(eventsMask);
    if (*m_wxButtonBaseExtEnableTouchEvents__int != NULL){
      return m_wxButtonBaseExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtEnableVisibleFocus__boolFunc m_wxButtonBaseExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxButtonBase::EnableVisibleFocus(enabled);
    if (*m_wxButtonBaseExtEnableVisibleFocus__bool != NULL){
      return m_wxButtonBaseExtEnableVisibleFocus__bool(this, enabled);
    }
  }
  wxButtonBaseExtEndRepositioningChildrenFunc m_wxButtonBaseExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxButtonBase::EndRepositioningChildren();
    if (*m_wxButtonBaseExtEndRepositioningChildren != NULL){
      return m_wxButtonBaseExtEndRepositioningChildren(this);
    }
  }
  wxButtonBaseExtFitFunc m_wxButtonBaseExtFit = NULL;
  virtual void Fit() override
  {
    wxButtonBase::Fit();
    if (*m_wxButtonBaseExtFit != NULL){
      return m_wxButtonBaseExtFit(this);
    }
  }
  wxButtonBaseExtFitInsideFunc m_wxButtonBaseExtFitInside = NULL;
  virtual void FitInside() override
  {
    wxButtonBase::FitInside();
    if (*m_wxButtonBaseExtFitInside != NULL){
      return m_wxButtonBaseExtFitInside(this);
    }
  }
  wxButtonBaseExtGetBestVirtualSizeFunc m_wxButtonBaseExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxButtonBase::GetBestVirtualSize();
    if (*m_wxButtonBaseExtGetBestVirtualSize != NULL){
      return m_wxButtonBaseExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetCharHeightFunc m_wxButtonBaseExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxButtonBase::GetCharHeight();
    if (*m_wxButtonBaseExtGetCharHeight != NULL){
      return m_wxButtonBaseExtGetCharHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetCharWidthFunc m_wxButtonBaseExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxButtonBase::GetCharWidth();
    if (*m_wxButtonBaseExtGetCharWidth != NULL){
      return m_wxButtonBaseExtGetCharWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetClassInfoFunc m_wxButtonBaseExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxButtonBase::GetClassInfo();
    if (*m_wxButtonBaseExtGetClassInfo != NULL){
      return m_wxButtonBaseExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetClientAreaOriginFunc m_wxButtonBaseExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxButtonBase::GetClientAreaOrigin();
    if (*m_wxButtonBaseExtGetClientAreaOrigin != NULL){
      return m_wxButtonBaseExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetClientSizeConstraint__intPintPFunc m_wxButtonBaseExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxButtonBase::GetClientSizeConstraint(w, h);
    if (*m_wxButtonBaseExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxButtonBaseExtGetClientSizeConstraint__intPintP(this, w, h);
    }
  }
  wxButtonBaseExtGetContentScaleFactorFunc m_wxButtonBaseExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxButtonBase::GetContentScaleFactor();
    if (*m_wxButtonBaseExtGetContentScaleFactor != NULL){
      return m_wxButtonBaseExtGetContentScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetDPIFunc m_wxButtonBaseExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxButtonBase::GetDPI();
    if (*m_wxButtonBaseExtGetDPI != NULL){
      return m_wxButtonBaseExtGetDPI(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetDPIScaleFactorFunc m_wxButtonBaseExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxButtonBase::GetDPIScaleFactor();
    if (*m_wxButtonBaseExtGetDPIScaleFactor != NULL){
      return m_wxButtonBaseExtGetDPIScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetDefaultAttributesFunc m_wxButtonBaseExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxButtonBase::GetDefaultAttributes();
    if (*m_wxButtonBaseExtGetDefaultAttributes != NULL){
      return m_wxButtonBaseExtGetDefaultAttributes(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetDefaultBorderFunc m_wxButtonBaseExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxButtonBase::GetDefaultBorder();
    if (*m_wxButtonBaseExtGetDefaultBorder != NULL){
      return m_wxButtonBaseExtGetDefaultBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetDefaultBorderForControlFunc m_wxButtonBaseExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxButtonBase::GetDefaultBorderForControl();
    if (*m_wxButtonBaseExtGetDefaultBorderForControl != NULL){
      return m_wxButtonBaseExtGetDefaultBorderForControl(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetDropTargetFunc m_wxButtonBaseExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxButtonBase::GetDropTarget();
    if (*m_wxButtonBaseExtGetDropTarget != NULL){
      return m_wxButtonBaseExtGetDropTarget(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetEffectiveMinSizeFunc m_wxButtonBaseExtGetEffectiveMinSize = NULL;
  virtual wxSize GetEffectiveMinSize() const override
  {
    wxSize res = wxButtonBase::GetEffectiveMinSize();
    if (*m_wxButtonBaseExtGetEffectiveMinSize != NULL){
      return m_wxButtonBaseExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetEventHashTableFunc m_wxButtonBaseExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxButtonBase::GetEventHashTable();
    if (*m_wxButtonBaseExtGetEventHashTable != NULL){
      return m_wxButtonBaseExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetEventTableFunc m_wxButtonBaseExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxButtonBase::GetEventTable();
    if (*m_wxButtonBaseExtGetEventTable != NULL){
      return m_wxButtonBaseExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetHandleFunc m_wxButtonBaseExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxButtonBase::GetHandle();
    if (*m_wxButtonBaseExtGetHandle != NULL){
      return m_wxButtonBaseExtGetHandle(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxButtonBase::GetHelpTextAtPoint(pt, origin);
    if (*m_wxButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetLabelFunc m_wxButtonBaseExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxButtonBase::GetLabel();
    if (*m_wxButtonBaseExtGetLabel != NULL){
      return m_wxButtonBaseExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetLabelTextFunc m_wxButtonBaseExtGetLabelText = NULL;
  virtual wxString GetLabelText() const override
  {
    wxString res = wxButtonBase::GetLabelText();
    if (*m_wxButtonBaseExtGetLabelText != NULL){
      return m_wxButtonBaseExtGetLabelText(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetLayoutDirectionFunc m_wxButtonBaseExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxButtonBase::GetLayoutDirection();
    if (*m_wxButtonBaseExtGetLayoutDirection != NULL){
      return m_wxButtonBaseExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetMainWindowOfCompositeControlFunc m_wxButtonBaseExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxButtonBase::GetMainWindowOfCompositeControl();
    if (*m_wxButtonBaseExtGetMainWindowOfCompositeControl != NULL){
      return m_wxButtonBaseExtGetMainWindowOfCompositeControl(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetMaxClientSizeFunc m_wxButtonBaseExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxButtonBase::GetMaxClientSize();
    if (*m_wxButtonBaseExtGetMaxClientSize != NULL){
      return m_wxButtonBaseExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetMaxSizeFunc m_wxButtonBaseExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxButtonBase::GetMaxSize();
    if (*m_wxButtonBaseExtGetMaxSize != NULL){
      return m_wxButtonBaseExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetMinClientSizeFunc m_wxButtonBaseExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxButtonBase::GetMinClientSize();
    if (*m_wxButtonBaseExtGetMinClientSize != NULL){
      return m_wxButtonBaseExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetMinSizeFunc m_wxButtonBaseExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxButtonBase::GetMinSize();
    if (*m_wxButtonBaseExtGetMinSize != NULL){
      return m_wxButtonBaseExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetNameFunc m_wxButtonBaseExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxButtonBase::GetName();
    if (*m_wxButtonBaseExtGetName != NULL){
      return m_wxButtonBaseExtGetName(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetNormalStateFunc m_wxButtonBaseExtGetNormalState = NULL;
  virtual wxAnyButtonBase::State GetNormalState() const override
  {
    wxAnyButtonBase::wxAnyButtonBase::State res = wxButtonBase::GetNormalState();
    if (*m_wxButtonBaseExtGetNormalState != NULL){
      return m_wxButtonBaseExtGetNormalState(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetPositionConstraint__intPintPFunc m_wxButtonBaseExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxButtonBase::GetPositionConstraint(x, y);
    if (*m_wxButtonBaseExtGetPositionConstraint__intPintP != NULL){
      return m_wxButtonBaseExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxButtonBaseExtGetScrollPos__intFunc m_wxButtonBaseExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxButtonBase::GetScrollPos(orient);
    if (*m_wxButtonBaseExtGetScrollPos__int != NULL){
      return m_wxButtonBaseExtGetScrollPos__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetScrollRange__intFunc m_wxButtonBaseExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxButtonBase::GetScrollRange(orient);
    if (*m_wxButtonBaseExtGetScrollRange__int != NULL){
      return m_wxButtonBaseExtGetScrollRange__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetScrollThumb__intFunc m_wxButtonBaseExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxButtonBase::GetScrollThumb(orient);
    if (*m_wxButtonBaseExtGetScrollThumb__int != NULL){
      return m_wxButtonBaseExtGetScrollThumb__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetSizeConstraint__intPintPFunc m_wxButtonBaseExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxButtonBase::GetSizeConstraint(w, h);
    if (*m_wxButtonBaseExtGetSizeConstraint__intPintP != NULL){
      return m_wxButtonBaseExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxButtonBaseExtGetThemeEnabledFunc m_wxButtonBaseExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxButtonBase::GetThemeEnabled();
    if (*m_wxButtonBaseExtGetThemeEnabled != NULL){
      return m_wxButtonBaseExtGetThemeEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetTransparentFunc m_wxButtonBaseExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxButtonBase::GetTransparent();
    if (*m_wxButtonBaseExtGetTransparent != NULL){
      return m_wxButtonBaseExtGetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetValidatorFunc m_wxButtonBaseExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxButtonBase::GetValidator();
    if (*m_wxButtonBaseExtGetValidator != NULL){
      return m_wxButtonBaseExtGetValidator(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetWindowBorderSizeFunc m_wxButtonBaseExtGetWindowBorderSize = NULL;
  virtual wxSize GetWindowBorderSize() const override
  {
    wxSize res = wxButtonBase::GetWindowBorderSize();
    if (*m_wxButtonBaseExtGetWindowBorderSize != NULL){
      return m_wxButtonBaseExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetWindowStyleFlagFunc m_wxButtonBaseExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxButtonBase::GetWindowStyleFlag();
    if (*m_wxButtonBaseExtGetWindowStyleFlag != NULL){
      return m_wxButtonBaseExtGetWindowStyleFlag(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtHasCaptureFunc m_wxButtonBaseExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxButtonBase::HasCapture();
    if (*m_wxButtonBaseExtHasCapture != NULL){
      return m_wxButtonBaseExtHasCapture(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtHasFocusFunc m_wxButtonBaseExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxButtonBase::HasFocus();
    if (*m_wxButtonBaseExtHasFocus != NULL){
      return m_wxButtonBaseExtHasFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtHasMultiplePagesFunc m_wxButtonBaseExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxButtonBase::HasMultiplePages();
    if (*m_wxButtonBaseExtHasMultiplePages != NULL){
      return m_wxButtonBaseExtHasMultiplePages(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtHasTransparentBackgroundFunc m_wxButtonBaseExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxButtonBase::HasTransparentBackground();
    if (*m_wxButtonBaseExtHasTransparentBackground != NULL){
      return m_wxButtonBaseExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtHideWithEffect__wxShowEffectunsignedintFunc m_wxButtonBaseExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxButtonBase::HideWithEffect(effect, timeout);
    if (*m_wxButtonBaseExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxButtonBaseExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtInformFirstDirection__intintintFunc m_wxButtonBaseExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxButtonBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxButtonBaseExtInformFirstDirection__intintint != NULL){
      return m_wxButtonBaseExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtInheritAttributesFunc m_wxButtonBaseExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxButtonBase::InheritAttributes();
    if (*m_wxButtonBaseExtInheritAttributes != NULL){
      return m_wxButtonBaseExtInheritAttributes(this);
    }
  }
  wxButtonBaseExtInitDialogFunc m_wxButtonBaseExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxButtonBase::InitDialog();
    if (*m_wxButtonBaseExtInitDialog != NULL){
      return m_wxButtonBaseExtInitDialog(this);
    }
  }
  wxButtonBaseExtIsClientAreaChild__wxWindowCPFunc m_wxButtonBaseExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxButtonBase::IsClientAreaChild(child);
    if (*m_wxButtonBaseExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxButtonBaseExtIsClientAreaChild__wxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsDoubleBufferedFunc m_wxButtonBaseExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxButtonBase::IsDoubleBuffered();
    if (*m_wxButtonBaseExtIsDoubleBuffered != NULL){
      return m_wxButtonBaseExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsRetainedFunc m_wxButtonBaseExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxButtonBase::IsRetained();
    if (*m_wxButtonBaseExtIsRetained != NULL){
      return m_wxButtonBaseExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsScrollbarAlwaysShown__intFunc m_wxButtonBaseExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxButtonBase::IsScrollbarAlwaysShown(orient);
    if (*m_wxButtonBaseExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxButtonBaseExtIsScrollbarAlwaysShown__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsShownFunc m_wxButtonBaseExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxButtonBase::IsShown();
    if (*m_wxButtonBaseExtIsShown != NULL){
      return m_wxButtonBaseExtIsShown(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsShownOnScreenFunc m_wxButtonBaseExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxButtonBase::IsShownOnScreen();
    if (*m_wxButtonBaseExtIsShownOnScreen != NULL){
      return m_wxButtonBaseExtIsShownOnScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsThisEnabledFunc m_wxButtonBaseExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxButtonBase::IsThisEnabled();
    if (*m_wxButtonBaseExtIsThisEnabled != NULL){
      return m_wxButtonBaseExtIsThisEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsTopLevelFunc m_wxButtonBaseExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxButtonBase::IsTopLevel();
    if (*m_wxButtonBaseExtIsTopLevel != NULL){
      return m_wxButtonBaseExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxButtonBase::IsTopNavigationDomain(kind);
    if (*m_wxButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsTransparentBackgroundSupported__wxStringPFunc m_wxButtonBaseExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxButtonBase::IsTransparentBackgroundSupported(reason);
    if (*m_wxButtonBaseExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxButtonBaseExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtLayoutFunc m_wxButtonBaseExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxButtonBase::Layout();
    if (*m_wxButtonBaseExtLayout != NULL){
      return m_wxButtonBaseExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtLayoutPhase1__intPFunc m_wxButtonBaseExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxButtonBase::LayoutPhase1(noChanges);
    if (*m_wxButtonBaseExtLayoutPhase1__intP != NULL){
      return m_wxButtonBaseExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtLayoutPhase2__intPFunc m_wxButtonBaseExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxButtonBase::LayoutPhase2(noChanges);
    if (*m_wxButtonBaseExtLayoutPhase2__intP != NULL){
      return m_wxButtonBaseExtLayoutPhase2__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtLowerFunc m_wxButtonBaseExtLower = NULL;
  virtual void Lower() override
  {
    wxButtonBase::Lower();
    if (*m_wxButtonBaseExtLower != NULL){
      return m_wxButtonBaseExtLower(this);
    }
  }
  wxButtonBaseExtMoveConstraint__intintFunc m_wxButtonBaseExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxButtonBase::MoveConstraint(x, y);
    if (*m_wxButtonBaseExtMoveConstraint__intint != NULL){
      return m_wxButtonBaseExtMoveConstraint__intint(this, x, y);
    }
  }
  wxButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxButtonBase::OnDynamicBind(entry);
    if (*m_wxButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtOnInternalIdleFunc m_wxButtonBaseExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxButtonBase::OnInternalIdle();
    if (*m_wxButtonBaseExtOnInternalIdle != NULL){
      return m_wxButtonBaseExtOnInternalIdle(this);
    }
  }
  wxButtonBaseExtPrepareDC__wxDCRFunc m_wxButtonBaseExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxButtonBase::PrepareDC(dc);
    if (*m_wxButtonBaseExtPrepareDC__wxDCR != NULL){
      return m_wxButtonBaseExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxButtonBaseExtProcessEvent__wxEventRFunc m_wxButtonBaseExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxButtonBase::ProcessEvent(event);
    if (*m_wxButtonBaseExtProcessEvent__wxEventR != NULL){
      return m_wxButtonBaseExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtQueueEvent__wxEventPFunc m_wxButtonBaseExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxButtonBase::QueueEvent(event);
    if (*m_wxButtonBaseExtQueueEvent__wxEventP != NULL){
      return m_wxButtonBaseExtQueueEvent__wxEventP(this, event);
    }
  }
  wxButtonBaseExtRaiseFunc m_wxButtonBaseExtRaise = NULL;
  virtual void Raise() override
  {
    wxButtonBase::Raise();
    if (*m_wxButtonBaseExtRaise != NULL){
      return m_wxButtonBaseExtRaise(this);
    }
  }
  wxButtonBaseExtRefresh__boolwxRectCPFunc m_wxButtonBaseExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxButtonBase::Refresh(eraseBackground, rect);
    if (*m_wxButtonBaseExtRefresh__boolwxRectCP != NULL){
      return m_wxButtonBaseExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxButtonBaseExtRegisterHotKey__intintintFunc m_wxButtonBaseExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxButtonBase::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxButtonBaseExtRegisterHotKey__intintint != NULL){
      return m_wxButtonBaseExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtRemoveChild__wxWindowBasePFunc m_wxButtonBaseExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxButtonBase::RemoveChild(child);
    if (*m_wxButtonBaseExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxButtonBaseExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxButtonBaseExtReparent__wxWindowBasePFunc m_wxButtonBaseExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxButtonBase::Reparent(newParent);
    if (*m_wxButtonBaseExtReparent__wxWindowBaseP != NULL){
      return m_wxButtonBaseExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtScrollLines__intFunc m_wxButtonBaseExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxButtonBase::ScrollLines(lines);
    if (*m_wxButtonBaseExtScrollLines__int != NULL){
      return m_wxButtonBaseExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtScrollPages__intFunc m_wxButtonBaseExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxButtonBase::ScrollPages(pages);
    if (*m_wxButtonBaseExtScrollPages__int != NULL){
      return m_wxButtonBaseExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtScrollWindow__intintwxRectCPFunc m_wxButtonBaseExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxButtonBase::ScrollWindow(dx, dy, rect);
    if (*m_wxButtonBaseExtScrollWindow__intintwxRectCP != NULL){
      return m_wxButtonBaseExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxButtonBaseExtSearchEventTable__wxEventTableRwxEventRFunc m_wxButtonBaseExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxButtonBase::SearchEventTable(table, event);
    if (*m_wxButtonBaseExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxButtonBaseExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSendIdleEvents__wxIdleEventRFunc m_wxButtonBaseExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxButtonBase::SendIdleEvents(event);
    if (*m_wxButtonBaseExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxButtonBaseExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSendSizeEvent__intFunc m_wxButtonBaseExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxButtonBase::SendSizeEvent(flags);
    if (*m_wxButtonBaseExtSendSizeEvent__int != NULL){
      return m_wxButtonBaseExtSendSizeEvent__int(this, flags);
    }
  }
  wxButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxButtonBase::SetAcceleratorTable(accel);
    if (*m_wxButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxButtonBaseExtSetBackgroundColour__wxColourCRFunc m_wxButtonBaseExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxButtonBase::SetBackgroundColour(colour);
    if (*m_wxButtonBaseExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxButtonBaseExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxButtonBaseExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxButtonBase::SetBackgroundStyle(style);
    if (*m_wxButtonBaseExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxButtonBaseExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetCanFocus__boolFunc m_wxButtonBaseExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxButtonBase::SetCanFocus(canFocus);
    if (*m_wxButtonBaseExtSetCanFocus__bool != NULL){
      return m_wxButtonBaseExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxButtonBaseExtSetConstraintSizes__boolFunc m_wxButtonBaseExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxButtonBase::SetConstraintSizes(recurse);
    if (*m_wxButtonBaseExtSetConstraintSizes__bool != NULL){
      return m_wxButtonBaseExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxButtonBaseExtSetCursor__wxCursorCRFunc m_wxButtonBaseExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxButtonBase::SetCursor(cursor);
    if (*m_wxButtonBaseExtSetCursor__wxCursorCR != NULL){
      return m_wxButtonBaseExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetDefaultFunc m_wxButtonBaseExtSetDefault = NULL;
  virtual wxWindow* SetDefault() override
  {
    wxWindow* res = wxButtonBase::SetDefault();
    if (*m_wxButtonBaseExtSetDefault != NULL){
      return m_wxButtonBaseExtSetDefault(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetDoubleBuffered__boolFunc m_wxButtonBaseExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxButtonBase::SetDoubleBuffered(on);
    if (*m_wxButtonBaseExtSetDoubleBuffered__bool != NULL){
      return m_wxButtonBaseExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxButtonBaseExtSetDropTarget__wxDropTargetPFunc m_wxButtonBaseExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxButtonBase::SetDropTarget(dropTarget);
    if (*m_wxButtonBaseExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxButtonBaseExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxButtonBaseExtSetExtraStyle__longFunc m_wxButtonBaseExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxButtonBase::SetExtraStyle(exStyle);
    if (*m_wxButtonBaseExtSetExtraStyle__long != NULL){
      return m_wxButtonBaseExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxButtonBaseExtSetFocusFunc m_wxButtonBaseExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxButtonBase::SetFocus();
    if (*m_wxButtonBaseExtSetFocus != NULL){
      return m_wxButtonBaseExtSetFocus(this);
    }
  }
  wxButtonBaseExtSetFocusFromKbdFunc m_wxButtonBaseExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxButtonBase::SetFocusFromKbd();
    if (*m_wxButtonBaseExtSetFocusFromKbd != NULL){
      return m_wxButtonBaseExtSetFocusFromKbd(this);
    }
  }
  wxButtonBaseExtSetFont__wxFontCRFunc m_wxButtonBaseExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxButtonBase::SetFont(font);
    if (*m_wxButtonBaseExtSetFont__wxFontCR != NULL){
      return m_wxButtonBaseExtSetFont__wxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetForegroundColour__wxColourCRFunc m_wxButtonBaseExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxButtonBase::SetForegroundColour(colour);
    if (*m_wxButtonBaseExtSetForegroundColour__wxColourCR != NULL){
      return m_wxButtonBaseExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetId__wxWindowIDFunc m_wxButtonBaseExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxButtonBase::SetId(winid);
    if (*m_wxButtonBaseExtSetId__wxWindowID != NULL){
      return m_wxButtonBaseExtSetId__wxWindowID(this, winid);
    }
  }
  wxButtonBaseExtSetLabel__wxStringCRFunc m_wxButtonBaseExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxButtonBase::SetLabel(label);
    if (*m_wxButtonBaseExtSetLabel__wxStringCR != NULL){
      return m_wxButtonBaseExtSetLabel__wxStringCR(this, label);
    }
  }
  wxButtonBaseExtSetLabelText__wxStringCRFunc m_wxButtonBaseExtSetLabelText__wxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxButtonBase::SetLabelText(text);
    if (*m_wxButtonBaseExtSetLabelText__wxStringCR != NULL){
      return m_wxButtonBaseExtSetLabelText__wxStringCR(this, text);
    }
  }
  wxButtonBaseExtSetLayoutDirection__wxLayoutDirectionFunc m_wxButtonBaseExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxButtonBase::SetLayoutDirection(dir);
    if (*m_wxButtonBaseExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxButtonBaseExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxButtonBaseExtSetMaxClientSize__wxSizeCRFunc m_wxButtonBaseExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxButtonBase::SetMaxClientSize(size);
    if (*m_wxButtonBaseExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxButtonBaseExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxButtonBaseExtSetMaxSize__wxSizeCRFunc m_wxButtonBaseExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxButtonBase::SetMaxSize(maxSize);
    if (*m_wxButtonBaseExtSetMaxSize__wxSizeCR != NULL){
      return m_wxButtonBaseExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxButtonBaseExtSetMinClientSize__wxSizeCRFunc m_wxButtonBaseExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxButtonBase::SetMinClientSize(size);
    if (*m_wxButtonBaseExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxButtonBaseExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxButtonBaseExtSetMinSize__wxSizeCRFunc m_wxButtonBaseExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxButtonBase::SetMinSize(minSize);
    if (*m_wxButtonBaseExtSetMinSize__wxSizeCR != NULL){
      return m_wxButtonBaseExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxButtonBaseExtSetName__wxStringCRFunc m_wxButtonBaseExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxButtonBase::SetName(name);
    if (*m_wxButtonBaseExtSetName__wxStringCR != NULL){
      return m_wxButtonBaseExtSetName__wxStringCR(this, name);
    }
  }
  wxButtonBaseExtSetNextHandler__wxEvtHandlerPFunc m_wxButtonBaseExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxButtonBase::SetNextHandler(handler);
    if (*m_wxButtonBaseExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxButtonBaseExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxButtonBaseExtSetPreviousHandler__wxEvtHandlerPFunc m_wxButtonBaseExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxButtonBase::SetPreviousHandler(handler);
    if (*m_wxButtonBaseExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxButtonBaseExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxButtonBaseExtSetScrollPos__intintboolFunc m_wxButtonBaseExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxButtonBase::SetScrollPos(orient, pos, refresh);
    if (*m_wxButtonBaseExtSetScrollPos__intintbool != NULL){
      return m_wxButtonBaseExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxButtonBaseExtSetScrollbar__intintintintboolFunc m_wxButtonBaseExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxButtonBase::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxButtonBaseExtSetScrollbar__intintintintbool != NULL){
      return m_wxButtonBaseExtSetScrollbar__intintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxButtonBaseExtSetSizeConstraint__intintintintFunc m_wxButtonBaseExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxButtonBase::SetSizeConstraint(x, y, w, h);
    if (*m_wxButtonBaseExtSetSizeConstraint__intintintint != NULL){
      return m_wxButtonBaseExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxButtonBaseExtSetSizeHints__intintintintintintFunc m_wxButtonBaseExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxButtonBase::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxButtonBaseExtSetSizeHints__intintintintintint != NULL){
      return m_wxButtonBaseExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxButtonBaseExtSetThemeEnabled__boolFunc m_wxButtonBaseExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxButtonBase::SetThemeEnabled(enableTheme);
    if (*m_wxButtonBaseExtSetThemeEnabled__bool != NULL){
      return m_wxButtonBaseExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxButtonBaseExtSetTransparent__wxByteFunc m_wxButtonBaseExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxButtonBase::SetTransparent(alpha);
    if (*m_wxButtonBaseExtSetTransparent__wxByte != NULL){
      return m_wxButtonBaseExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetValidator__wxValidatorCRFunc m_wxButtonBaseExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxButtonBase::SetValidator(validator);
    if (*m_wxButtonBaseExtSetValidator__wxValidatorCR != NULL){
      return m_wxButtonBaseExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxButtonBaseExtSetWindowStyleFlag__longFunc m_wxButtonBaseExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxButtonBase::SetWindowStyleFlag(style);
    if (*m_wxButtonBaseExtSetWindowStyleFlag__long != NULL){
      return m_wxButtonBaseExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxButtonBaseExtShouldInheritColoursFunc m_wxButtonBaseExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxButtonBase::ShouldInheritColours();
    if (*m_wxButtonBaseExtShouldInheritColours != NULL){
      return m_wxButtonBaseExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtShow__boolFunc m_wxButtonBaseExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxButtonBase::Show(show);
    if (*m_wxButtonBaseExtShow__bool != NULL){
      return m_wxButtonBaseExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtShowWithEffect__wxShowEffectunsignedintFunc m_wxButtonBaseExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxButtonBase::ShowWithEffect(effect, timeout);
    if (*m_wxButtonBaseExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxButtonBaseExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtTransferDataFromWindowFunc m_wxButtonBaseExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxButtonBase::TransferDataFromWindow();
    if (*m_wxButtonBaseExtTransferDataFromWindow != NULL){
      return m_wxButtonBaseExtTransferDataFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtTransferDataToWindowFunc m_wxButtonBaseExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxButtonBase::TransferDataToWindow();
    if (*m_wxButtonBaseExtTransferDataToWindow != NULL){
      return m_wxButtonBaseExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtTriggerScrollEvent__wxEventTypeFunc m_wxButtonBaseExtTriggerScrollEvent__wxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxButtonBase::TriggerScrollEvent(scrollEvent);
    if (*m_wxButtonBaseExtTriggerScrollEvent__wxEventType != NULL){
      return m_wxButtonBaseExtTriggerScrollEvent__wxEventType(this, scrollEvent);
    }
  }
  wxButtonBaseExtTryAfter__wxEventRFunc m_wxButtonBaseExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxButtonBase::TryAfter(event);
    if (*m_wxButtonBaseExtTryAfter__wxEventR != NULL){
      return m_wxButtonBaseExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtTryBefore__wxEventRFunc m_wxButtonBaseExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxButtonBase::TryBefore(event);
    if (*m_wxButtonBaseExtTryBefore__wxEventR != NULL){
      return m_wxButtonBaseExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtUnregisterHotKey__intFunc m_wxButtonBaseExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxButtonBase::UnregisterHotKey(hotkeyId);
    if (*m_wxButtonBaseExtUnregisterHotKey__int != NULL){
      return m_wxButtonBaseExtUnregisterHotKey__int(this, hotkeyId, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtUpdateFunc m_wxButtonBaseExtUpdate = NULL;
  virtual void Update() override
  {
    wxButtonBase::Update();
    if (*m_wxButtonBaseExtUpdate != NULL){
      return m_wxButtonBaseExtUpdate(this);
    }
  }
  wxButtonBaseExtUpdateWindowUI__longFunc m_wxButtonBaseExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxButtonBase::UpdateWindowUI(flags);
    if (*m_wxButtonBaseExtUpdateWindowUI__long != NULL){
      return m_wxButtonBaseExtUpdateWindowUI__long(this, flags);
    }
  }
  wxButtonBaseExtValidateFunc m_wxButtonBaseExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxButtonBase::Validate();
    if (*m_wxButtonBaseExtValidate != NULL){
      return m_wxButtonBaseExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxButtonBaseExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxButtonBase::WXAdjustFontToOwnPPI(font);
    if (*m_wxButtonBaseExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxButtonBaseExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxButtonBaseExtWXGetTextEntryFunc m_wxButtonBaseExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxButtonBase::WXGetTextEntry();
    if (*m_wxButtonBaseExtWXGetTextEntry != NULL){
      return m_wxButtonBaseExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXReservedEvtHandler1__voidPFunc m_wxButtonBaseExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxButtonBase::WXReservedEvtHandler1(param0);
    if (*m_wxButtonBaseExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxButtonBaseExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXReservedEvtHandler2__voidPFunc m_wxButtonBaseExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxButtonBase::WXReservedEvtHandler2(param0);
    if (*m_wxButtonBaseExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxButtonBaseExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXReservedWindow1__voidPFunc m_wxButtonBaseExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxButtonBase::WXReservedWindow1(param0);
    if (*m_wxButtonBaseExtWXReservedWindow1__voidP != NULL){
      return m_wxButtonBaseExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXReservedWindow2__voidPFunc m_wxButtonBaseExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxButtonBase::WXReservedWindow2(param0);
    if (*m_wxButtonBaseExtWXReservedWindow2__voidP != NULL){
      return m_wxButtonBaseExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXReservedWindow3__voidPFunc m_wxButtonBaseExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxButtonBase::WXReservedWindow3(param0);
    if (*m_wxButtonBaseExtWXReservedWindow3__voidP != NULL){
      return m_wxButtonBaseExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxButtonBaseExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxButtonBase::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxButtonBaseExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxButtonBaseExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxButtonBaseExtWarpPointer__intintFunc m_wxButtonBaseExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxButtonBase::WarpPointer(x, y);
    if (*m_wxButtonBaseExtWarpPointer__intint != NULL){
      return m_wxButtonBaseExtWarpPointer__intint(this, x, y);
    }
  }
  wxButtonBaseExtWindowToClientSize__wxSizeCRFunc m_wxButtonBaseExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxButtonBase::WindowToClientSize(size);
    if (*m_wxButtonBaseExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxButtonBaseExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExt(wxButtonBaseExtAcceptsFocusFunc a_AcceptsFocus, wxButtonBaseExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxButtonBaseExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxButtonBaseExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxButtonBaseExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxButtonBaseExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxButtonBaseExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxButtonBaseExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxButtonBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxButtonBaseExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxButtonBaseExtCanBeFocusedFunc a_CanBeFocused, wxButtonBaseExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxButtonBaseExtCanScroll__intFunc a_CanScroll__int, wxButtonBaseExtCanSetTransparentFunc a_CanSetTransparent, wxButtonBaseExtClearBackgroundFunc a_ClearBackground, wxButtonBaseExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxButtonBaseExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxButtonBaseExtCommand__wxCommandEventRFunc a_Command__wxCommandEventR, wxButtonBaseExtCreateRefDataFunc a_CreateRefData, wxButtonBaseExtDestroyFunc a_Destroy, wxButtonBaseExtDissociateHandleFunc a_DissociateHandle, wxButtonBaseExtDoCaptureMouseFunc a_DoCaptureMouse, wxButtonBaseExtDoCentre__intFunc a_DoCentre__int, wxButtonBaseExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxButtonBaseExtDoEnable__boolFunc a_DoEnable__bool, wxButtonBaseExtDoFreezeFunc a_DoFreeze, wxButtonBaseExtDoGetAuthNeededFunc a_DoGetAuthNeeded, wxButtonBaseExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxButtonBaseExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxButtonBaseExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxButtonBaseExtDoGetBestSizeFunc a_DoGetBestSize, wxButtonBaseExtDoGetBitmap__wxAnyButtonBaseNStateFunc a_DoGetBitmap__wxAnyButtonBaseNState, wxButtonBaseExtDoGetBitmapMarginsFunc a_DoGetBitmapMargins, wxButtonBaseExtDoGetClientDataFunc a_DoGetClientData, wxButtonBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxButtonBaseExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxButtonBaseExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxButtonBaseExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxButtonBaseExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxButtonBaseExtDoGetSizeFromClientSize__wxSizeCRFunc a_DoGetSizeFromClientSize__wxSizeCR, wxButtonBaseExtDoGetSizeFromTextSize__intintFunc a_DoGetSizeFromTextSize__intint, wxButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxButtonBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxButtonBaseExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxButtonBaseExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxButtonBaseExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxButtonBaseExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxButtonBaseExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxButtonBaseExtDoPhase__intFunc a_DoPhase__int, wxButtonBaseExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxButtonBaseExtDoReleaseMouseFunc a_DoReleaseMouse, wxButtonBaseExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxButtonBaseExtDoSetAuthNeeded__boolFunc a_DoSetAuthNeeded__bool, wxButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc a_DoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState, wxButtonBaseExtDoSetBitmapMargins__intintFunc a_DoSetBitmapMargins__intint, wxButtonBaseExtDoSetBitmapPosition__wxDirectionFunc a_DoSetBitmapPosition__wxDirection, wxButtonBaseExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxButtonBaseExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxButtonBaseExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxButtonBaseExtDoSetLabelMarkup__wxStringCRFunc a_DoSetLabelMarkup__wxStringCR, wxButtonBaseExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxButtonBaseExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxButtonBaseExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxButtonBaseExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxButtonBaseExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxButtonBaseExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxButtonBaseExtDoThawFunc a_DoThaw, wxButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxButtonBaseExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxButtonBaseExtEnable__boolFunc a_Enable__bool, wxButtonBaseExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxButtonBaseExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxButtonBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxButtonBaseExtFitFunc a_Fit, wxButtonBaseExtFitInsideFunc a_FitInside, wxButtonBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxButtonBaseExtGetCharHeightFunc a_GetCharHeight, wxButtonBaseExtGetCharWidthFunc a_GetCharWidth, wxButtonBaseExtGetClassInfoFunc a_GetClassInfo, wxButtonBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxButtonBaseExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxButtonBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxButtonBaseExtGetDPIFunc a_GetDPI, wxButtonBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxButtonBaseExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxButtonBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxButtonBaseExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxButtonBaseExtGetDropTargetFunc a_GetDropTarget, wxButtonBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxButtonBaseExtGetEventHashTableFunc a_GetEventHashTable, wxButtonBaseExtGetEventTableFunc a_GetEventTable, wxButtonBaseExtGetHandleFunc a_GetHandle, wxButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxButtonBaseExtGetLabelFunc a_GetLabel, wxButtonBaseExtGetLabelTextFunc a_GetLabelText, wxButtonBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxButtonBaseExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxButtonBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxButtonBaseExtGetMaxSizeFunc a_GetMaxSize, wxButtonBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxButtonBaseExtGetMinSizeFunc a_GetMinSize, wxButtonBaseExtGetNameFunc a_GetName, wxButtonBaseExtGetNormalStateFunc a_GetNormalState, wxButtonBaseExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxButtonBaseExtGetScrollPos__intFunc a_GetScrollPos__int, wxButtonBaseExtGetScrollRange__intFunc a_GetScrollRange__int, wxButtonBaseExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxButtonBaseExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxButtonBaseExtGetThemeEnabledFunc a_GetThemeEnabled, wxButtonBaseExtGetTransparentFunc a_GetTransparent, wxButtonBaseExtGetValidatorFunc a_GetValidator, wxButtonBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxButtonBaseExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxButtonBaseExtHasCaptureFunc a_HasCapture, wxButtonBaseExtHasFocusFunc a_HasFocus, wxButtonBaseExtHasMultiplePagesFunc a_HasMultiplePages, wxButtonBaseExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxButtonBaseExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxButtonBaseExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxButtonBaseExtInheritAttributesFunc a_InheritAttributes, wxButtonBaseExtInitDialogFunc a_InitDialog, wxButtonBaseExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxButtonBaseExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxButtonBaseExtIsRetainedFunc a_IsRetained, wxButtonBaseExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxButtonBaseExtIsShownFunc a_IsShown, wxButtonBaseExtIsShownOnScreenFunc a_IsShownOnScreen, wxButtonBaseExtIsThisEnabledFunc a_IsThisEnabled, wxButtonBaseExtIsTopLevelFunc a_IsTopLevel, wxButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxButtonBaseExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxButtonBaseExtLayoutFunc a_Layout, wxButtonBaseExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxButtonBaseExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxButtonBaseExtLowerFunc a_Lower, wxButtonBaseExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxButtonBaseExtOnInternalIdleFunc a_OnInternalIdle, wxButtonBaseExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxButtonBaseExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxButtonBaseExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxButtonBaseExtRaiseFunc a_Raise, wxButtonBaseExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxButtonBaseExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxButtonBaseExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxButtonBaseExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxButtonBaseExtScrollLines__intFunc a_ScrollLines__int, wxButtonBaseExtScrollPages__intFunc a_ScrollPages__int, wxButtonBaseExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxButtonBaseExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxButtonBaseExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxButtonBaseExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxButtonBaseExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxButtonBaseExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxButtonBaseExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxButtonBaseExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxButtonBaseExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxButtonBaseExtSetDefaultFunc a_SetDefault, wxButtonBaseExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxButtonBaseExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxButtonBaseExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxButtonBaseExtSetFocusFunc a_SetFocus, wxButtonBaseExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxButtonBaseExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxButtonBaseExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxButtonBaseExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxButtonBaseExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxButtonBaseExtSetLabelText__wxStringCRFunc a_SetLabelText__wxStringCR, wxButtonBaseExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxButtonBaseExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxButtonBaseExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxButtonBaseExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxButtonBaseExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxButtonBaseExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxButtonBaseExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxButtonBaseExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxButtonBaseExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxButtonBaseExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxButtonBaseExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxButtonBaseExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxButtonBaseExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxButtonBaseExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxButtonBaseExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxButtonBaseExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxButtonBaseExtShouldInheritColoursFunc a_ShouldInheritColours, wxButtonBaseExtShow__boolFunc a_Show__bool, wxButtonBaseExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxButtonBaseExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxButtonBaseExtTransferDataToWindowFunc a_TransferDataToWindow, wxButtonBaseExtTriggerScrollEvent__wxEventTypeFunc a_TriggerScrollEvent__wxEventType, wxButtonBaseExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxButtonBaseExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxButtonBaseExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxButtonBaseExtUpdateFunc a_Update, wxButtonBaseExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxButtonBaseExtValidateFunc a_Validate, wxButtonBaseExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxButtonBaseExtWXGetTextEntryFunc a_WXGetTextEntry, wxButtonBaseExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxButtonBaseExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxButtonBaseExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxButtonBaseExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxButtonBaseExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxButtonBaseExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxButtonBaseExtWarpPointer__intintFunc a_WarpPointer__intint, wxButtonBaseExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxButtonBase() {
    m_wxButtonBaseExtAcceptsFocus = a_AcceptsFocus;
    m_wxButtonBaseExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxButtonBaseExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxButtonBaseExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxButtonBaseExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxButtonBaseExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxButtonBaseExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxButtonBaseExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxButtonBaseExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxButtonBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxButtonBaseExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxButtonBaseExtCanBeFocused = a_CanBeFocused;
    m_wxButtonBaseExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxButtonBaseExtCanScroll__int = a_CanScroll__int;
    m_wxButtonBaseExtCanSetTransparent = a_CanSetTransparent;
    m_wxButtonBaseExtClearBackground = a_ClearBackground;
    m_wxButtonBaseExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxButtonBaseExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxButtonBaseExtCommand__wxCommandEventR = a_Command__wxCommandEventR;
    m_wxButtonBaseExtCreateRefData = a_CreateRefData;
    m_wxButtonBaseExtDestroy = a_Destroy;
    m_wxButtonBaseExtDissociateHandle = a_DissociateHandle;
    m_wxButtonBaseExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxButtonBaseExtDoCentre__int = a_DoCentre__int;
    m_wxButtonBaseExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxButtonBaseExtDoEnable__bool = a_DoEnable__bool;
    m_wxButtonBaseExtDoFreeze = a_DoFreeze;
    m_wxButtonBaseExtDoGetAuthNeeded = a_DoGetAuthNeeded;
    m_wxButtonBaseExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxButtonBaseExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxButtonBaseExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxButtonBaseExtDoGetBestSize = a_DoGetBestSize;
    m_wxButtonBaseExtDoGetBitmap__wxAnyButtonBaseNState = a_DoGetBitmap__wxAnyButtonBaseNState;
    m_wxButtonBaseExtDoGetBitmapMargins = a_DoGetBitmapMargins;
    m_wxButtonBaseExtDoGetClientData = a_DoGetClientData;
    m_wxButtonBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxButtonBaseExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxButtonBaseExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxButtonBaseExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxButtonBaseExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxButtonBaseExtDoGetSizeFromClientSize__wxSizeCR = a_DoGetSizeFromClientSize__wxSizeCR;
    m_wxButtonBaseExtDoGetSizeFromTextSize__intint = a_DoGetSizeFromTextSize__intint;
    m_wxButtonBaseExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxButtonBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxButtonBaseExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxButtonBaseExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxButtonBaseExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxButtonBaseExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxButtonBaseExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxButtonBaseExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxButtonBaseExtDoPhase__int = a_DoPhase__int;
    m_wxButtonBaseExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxButtonBaseExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxButtonBaseExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxButtonBaseExtDoSetAuthNeeded__bool = a_DoSetAuthNeeded__bool;
    m_wxButtonBaseExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState = a_DoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState;
    m_wxButtonBaseExtDoSetBitmapMargins__intint = a_DoSetBitmapMargins__intint;
    m_wxButtonBaseExtDoSetBitmapPosition__wxDirection = a_DoSetBitmapPosition__wxDirection;
    m_wxButtonBaseExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxButtonBaseExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxButtonBaseExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxButtonBaseExtDoSetLabelMarkup__wxStringCR = a_DoSetLabelMarkup__wxStringCR;
    m_wxButtonBaseExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxButtonBaseExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxButtonBaseExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxButtonBaseExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxButtonBaseExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxButtonBaseExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxButtonBaseExtDoThaw = a_DoThaw;
    m_wxButtonBaseExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxButtonBaseExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxButtonBaseExtEnable__bool = a_Enable__bool;
    m_wxButtonBaseExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxButtonBaseExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxButtonBaseExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxButtonBaseExtFit = a_Fit;
    m_wxButtonBaseExtFitInside = a_FitInside;
    m_wxButtonBaseExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxButtonBaseExtGetCharHeight = a_GetCharHeight;
    m_wxButtonBaseExtGetCharWidth = a_GetCharWidth;
    m_wxButtonBaseExtGetClassInfo = a_GetClassInfo;
    m_wxButtonBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxButtonBaseExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
    m_wxButtonBaseExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxButtonBaseExtGetDPI = a_GetDPI;
    m_wxButtonBaseExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxButtonBaseExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxButtonBaseExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxButtonBaseExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxButtonBaseExtGetDropTarget = a_GetDropTarget;
    m_wxButtonBaseExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxButtonBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxButtonBaseExtGetEventTable = a_GetEventTable;
    m_wxButtonBaseExtGetHandle = a_GetHandle;
    m_wxButtonBaseExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxButtonBaseExtGetLabel = a_GetLabel;
    m_wxButtonBaseExtGetLabelText = a_GetLabelText;
    m_wxButtonBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxButtonBaseExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxButtonBaseExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxButtonBaseExtGetMaxSize = a_GetMaxSize;
    m_wxButtonBaseExtGetMinClientSize = a_GetMinClientSize;
    m_wxButtonBaseExtGetMinSize = a_GetMinSize;
    m_wxButtonBaseExtGetName = a_GetName;
    m_wxButtonBaseExtGetNormalState = a_GetNormalState;
    m_wxButtonBaseExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxButtonBaseExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxButtonBaseExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxButtonBaseExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxButtonBaseExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxButtonBaseExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxButtonBaseExtGetTransparent = a_GetTransparent;
    m_wxButtonBaseExtGetValidator = a_GetValidator;
    m_wxButtonBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxButtonBaseExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxButtonBaseExtHasCapture = a_HasCapture;
    m_wxButtonBaseExtHasFocus = a_HasFocus;
    m_wxButtonBaseExtHasMultiplePages = a_HasMultiplePages;
    m_wxButtonBaseExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxButtonBaseExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxButtonBaseExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxButtonBaseExtInheritAttributes = a_InheritAttributes;
    m_wxButtonBaseExtInitDialog = a_InitDialog;
    m_wxButtonBaseExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxButtonBaseExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxButtonBaseExtIsRetained = a_IsRetained;
    m_wxButtonBaseExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxButtonBaseExtIsShown = a_IsShown;
    m_wxButtonBaseExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxButtonBaseExtIsThisEnabled = a_IsThisEnabled;
    m_wxButtonBaseExtIsTopLevel = a_IsTopLevel;
    m_wxButtonBaseExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxButtonBaseExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxButtonBaseExtLayout = a_Layout;
    m_wxButtonBaseExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxButtonBaseExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxButtonBaseExtLower = a_Lower;
    m_wxButtonBaseExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxButtonBaseExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxButtonBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxButtonBaseExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxButtonBaseExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxButtonBaseExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxButtonBaseExtRaise = a_Raise;
    m_wxButtonBaseExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxButtonBaseExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxButtonBaseExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxButtonBaseExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxButtonBaseExtScrollLines__int = a_ScrollLines__int;
    m_wxButtonBaseExtScrollPages__int = a_ScrollPages__int;
    m_wxButtonBaseExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxButtonBaseExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxButtonBaseExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxButtonBaseExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxButtonBaseExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxButtonBaseExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxButtonBaseExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxButtonBaseExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxButtonBaseExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxButtonBaseExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxButtonBaseExtSetDefault = a_SetDefault;
    m_wxButtonBaseExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxButtonBaseExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxButtonBaseExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxButtonBaseExtSetFocus = a_SetFocus;
    m_wxButtonBaseExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxButtonBaseExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxButtonBaseExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxButtonBaseExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxButtonBaseExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxButtonBaseExtSetLabelText__wxStringCR = a_SetLabelText__wxStringCR;
    m_wxButtonBaseExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxButtonBaseExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxButtonBaseExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxButtonBaseExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxButtonBaseExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxButtonBaseExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxButtonBaseExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxButtonBaseExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxButtonBaseExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxButtonBaseExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxButtonBaseExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxButtonBaseExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxButtonBaseExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxButtonBaseExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxButtonBaseExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxButtonBaseExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxButtonBaseExtShouldInheritColours = a_ShouldInheritColours;
    m_wxButtonBaseExtShow__bool = a_Show__bool;
    m_wxButtonBaseExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxButtonBaseExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxButtonBaseExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxButtonBaseExtTriggerScrollEvent__wxEventType = a_TriggerScrollEvent__wxEventType;
    m_wxButtonBaseExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxButtonBaseExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxButtonBaseExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxButtonBaseExtUpdate = a_Update;
    m_wxButtonBaseExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxButtonBaseExtValidate = a_Validate;
    m_wxButtonBaseExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxButtonBaseExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxButtonBaseExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxButtonBaseExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxButtonBaseExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxButtonBaseExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxButtonBaseExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxButtonBaseExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxButtonBaseExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxButtonBaseExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
  }
};

class wxButtonExt: public wxButton
{
public:
  wxButtonExt(): wxButton()  {  }
  wxButtonExt(wxWindow* parent, wxWindowID id, wxString const& label = wxEmptyString, wxPoint const& pos = wxDefaultPosition, wxSize const& size = wxDefaultSize, long style = 0, wxValidator const& validator = wxDefaultValidator, wxString const& name = wxString::FromAscii(wxButtonNameStr)): wxButton(parent, id, label, pos, size, style, validator, name)  {  }
  wxButtonExtAcceptsFocusFunc m_wxButtonExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxButton::AcceptsFocus();
    if (*m_wxButtonExtAcceptsFocus != NULL){
      return m_wxButtonExtAcceptsFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtAcceptsFocusFromKeyboardFunc m_wxButtonExtAcceptsFocusFromKeyboard = NULL;
  virtual bool AcceptsFocusFromKeyboard() const override
  {
    bool res = wxButton::AcceptsFocusFromKeyboard();
    if (*m_wxButtonExtAcceptsFocusFromKeyboard != NULL){
      return m_wxButtonExtAcceptsFocusFromKeyboard(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtAcceptsFocusRecursivelyFunc m_wxButtonExtAcceptsFocusRecursively = NULL;
  virtual bool AcceptsFocusRecursively() const override
  {
    bool res = wxButton::AcceptsFocusRecursively();
    if (*m_wxButtonExtAcceptsFocusRecursively != NULL){
      return m_wxButtonExtAcceptsFocusRecursively(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtAddChild__wxWindowBasePFunc m_wxButtonExtAddChild__wxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxButton::AddChild(child);
    if (*m_wxButtonExtAddChild__wxWindowBaseP != NULL){
      return m_wxButtonExtAddChild__wxWindowBaseP(this, child);
    }
  }
  wxButtonExtAddPendingEvent__wxEventCRFunc m_wxButtonExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxButton::AddPendingEvent(event);
    if (*m_wxButtonExtAddPendingEvent__wxEventCR != NULL){
      return m_wxButtonExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc m_wxButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxButton::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord != NULL){
      return m_wxButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtAdjustForParentClientOrigin__intRintRintFunc m_wxButtonExtAdjustForParentClientOrigin__intRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxButton::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxButtonExtAdjustForParentClientOrigin__intRintRint != NULL){
      return m_wxButtonExtAdjustForParentClientOrigin__intRintRint(this, x, y, sizeFlags);
    }
  }
  wxButtonExtAlwaysShowScrollbars__boolboolFunc m_wxButtonExtAlwaysShowScrollbars__boolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxButton::AlwaysShowScrollbars(horz, vert);
    if (*m_wxButtonExtAlwaysShowScrollbars__boolbool != NULL){
      return m_wxButtonExtAlwaysShowScrollbars__boolbool(this, horz, vert);
    }
  }
  wxButtonExtAssociateHandle__WXWidgetFunc m_wxButtonExtAssociateHandle__WXWidget = NULL;
  virtual void AssociateHandle(WXWidget handle) override
  {
    wxButton::AssociateHandle(handle);
    if (*m_wxButtonExtAssociateHandle__WXWidget != NULL){
      return m_wxButtonExtAssociateHandle__WXWidget(this, handle);
    }
  }
  wxButtonExtBeginRepositioningChildrenFunc m_wxButtonExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxButton::BeginRepositioningChildren();
    if (*m_wxButtonExtBeginRepositioningChildren != NULL){
      return m_wxButtonExtBeginRepositioningChildren(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtCanApplyThemeBorderFunc m_wxButtonExtCanApplyThemeBorder = NULL;
  virtual bool CanApplyThemeBorder() const override
  {
    bool res = wxButton::CanApplyThemeBorder();
    if (*m_wxButtonExtCanApplyThemeBorder != NULL){
      return m_wxButtonExtCanApplyThemeBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtCanBeFocusedFunc m_wxButtonExtCanBeFocused = NULL;
  virtual bool CanBeFocused() const override
  {
    bool res = wxButton::CanBeFocused();
    if (*m_wxButtonExtCanBeFocused != NULL){
      return m_wxButtonExtCanBeFocused(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtCanBeOutsideClientAreaFunc m_wxButtonExtCanBeOutsideClientArea = NULL;
  virtual bool CanBeOutsideClientArea() const override
  {
    bool res = wxButton::CanBeOutsideClientArea();
    if (*m_wxButtonExtCanBeOutsideClientArea != NULL){
      return m_wxButtonExtCanBeOutsideClientArea(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtCanScroll__intFunc m_wxButtonExtCanScroll__int = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxButton::CanScroll(orient);
    if (*m_wxButtonExtCanScroll__int != NULL){
      return m_wxButtonExtCanScroll__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtCanSetTransparentFunc m_wxButtonExtCanSetTransparent = NULL;
  virtual bool CanSetTransparent() override
  {
    bool res = wxButton::CanSetTransparent();
    if (*m_wxButtonExtCanSetTransparent != NULL){
      return m_wxButtonExtCanSetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtClearBackgroundFunc m_wxButtonExtClearBackground = NULL;
  virtual void ClearBackground() override
  {
    wxButton::ClearBackground();
    if (*m_wxButtonExtClearBackground != NULL){
      return m_wxButtonExtClearBackground(this);
    }
  }
  wxButtonExtClientToWindowSize__wxSizeCRFunc m_wxButtonExtClientToWindowSize__wxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxButton::ClientToWindowSize(size);
    if (*m_wxButtonExtClientToWindowSize__wxSizeCR != NULL){
      return m_wxButtonExtClientToWindowSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtCloneRefData__wxObjectRefDataCPFunc m_wxButtonExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxButton::CloneRefData(data);
    if (*m_wxButtonExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxButtonExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtCommand__wxCommandEventRFunc m_wxButtonExtCommand__wxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxButton::Command(event);
    if (*m_wxButtonExtCommand__wxCommandEventR != NULL){
      return m_wxButtonExtCommand__wxCommandEventR(this, event);
    }
  }
  wxButtonExtCreateRefDataFunc m_wxButtonExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxButton::CreateRefData();
    if (*m_wxButtonExtCreateRefData != NULL){
      return m_wxButtonExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDestroyFunc m_wxButtonExtDestroy = NULL;
  virtual bool Destroy() override
  {
    bool res = wxButton::Destroy();
    if (*m_wxButtonExtDestroy != NULL){
      return m_wxButtonExtDestroy(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDissociateHandleFunc m_wxButtonExtDissociateHandle = NULL;
  virtual void DissociateHandle() override
  {
    wxButton::DissociateHandle();
    if (*m_wxButtonExtDissociateHandle != NULL){
      return m_wxButtonExtDissociateHandle(this);
    }
  }
  wxButtonExtDoCaptureMouseFunc m_wxButtonExtDoCaptureMouse = NULL;
  virtual void DoCaptureMouse() override
  {
    wxButton::DoCaptureMouse();
    if (*m_wxButtonExtDoCaptureMouse != NULL){
      return m_wxButtonExtDoCaptureMouse(this);
    }
  }
  wxButtonExtDoCentre__intFunc m_wxButtonExtDoCentre__int = NULL;
  virtual void DoCentre(int dir) override
  {
    wxButton::DoCentre(dir);
    if (*m_wxButtonExtDoCentre__int != NULL){
      return m_wxButtonExtDoCentre__int(this, dir);
    }
  }
  wxButtonExtDoClientToScreen__intPintPFunc m_wxButtonExtDoClientToScreen__intPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxButton::DoClientToScreen(x, y);
    if (*m_wxButtonExtDoClientToScreen__intPintP != NULL){
      return m_wxButtonExtDoClientToScreen__intPintP(this, x, y);
    }
  }
  wxButtonExtDoEnable__boolFunc m_wxButtonExtDoEnable__bool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxButton::DoEnable(enable);
    if (*m_wxButtonExtDoEnable__bool != NULL){
      return m_wxButtonExtDoEnable__bool(this, enable);
    }
  }
  wxButtonExtDoFreezeFunc m_wxButtonExtDoFreeze = NULL;
  virtual void DoFreeze() override
  {
    wxButton::DoFreeze();
    if (*m_wxButtonExtDoFreeze != NULL){
      return m_wxButtonExtDoFreeze(this);
    }
  }
  wxButtonExtDoGetAuthNeededFunc m_wxButtonExtDoGetAuthNeeded = NULL;
  virtual bool DoGetAuthNeeded() const override
  {
    bool res = wxButton::DoGetAuthNeeded();
    if (*m_wxButtonExtDoGetAuthNeeded != NULL){
      return m_wxButtonExtDoGetAuthNeeded(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetBestClientHeight__intFunc m_wxButtonExtDoGetBestClientHeight__int = NULL;
  virtual int DoGetBestClientHeight(int width) const override
  {
    int res = wxButton::DoGetBestClientHeight(width);
    if (*m_wxButtonExtDoGetBestClientHeight__int != NULL){
      return m_wxButtonExtDoGetBestClientHeight__int(this, width, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetBestClientSizeFunc m_wxButtonExtDoGetBestClientSize = NULL;
  virtual wxSize DoGetBestClientSize() const override
  {
    wxSize res = wxButton::DoGetBestClientSize();
    if (*m_wxButtonExtDoGetBestClientSize != NULL){
      return m_wxButtonExtDoGetBestClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetBestClientWidth__intFunc m_wxButtonExtDoGetBestClientWidth__int = NULL;
  virtual int DoGetBestClientWidth(int height) const override
  {
    int res = wxButton::DoGetBestClientWidth(height);
    if (*m_wxButtonExtDoGetBestClientWidth__int != NULL){
      return m_wxButtonExtDoGetBestClientWidth__int(this, height, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetBestSizeFunc m_wxButtonExtDoGetBestSize = NULL;
  virtual wxSize DoGetBestSize() const override
  {
    wxSize res = wxButton::DoGetBestSize();
    if (*m_wxButtonExtDoGetBestSize != NULL){
      return m_wxButtonExtDoGetBestSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetBitmap__wxAnyButtonBaseNStateFunc m_wxButtonExtDoGetBitmap__wxAnyButtonBaseNState = NULL;
  virtual wxBitmap DoGetBitmap(wxAnyButtonBase::State which) const override
  {
    wxBitmap res = wxButton::DoGetBitmap(which);
    if (*m_wxButtonExtDoGetBitmap__wxAnyButtonBaseNState != NULL){
      return m_wxButtonExtDoGetBitmap__wxAnyButtonBaseNState(this, which, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetBitmapMarginsFunc m_wxButtonExtDoGetBitmapMargins = NULL;
  virtual wxSize DoGetBitmapMargins() const override
  {
    wxSize res = wxButton::DoGetBitmapMargins();
    if (*m_wxButtonExtDoGetBitmapMargins != NULL){
      return m_wxButtonExtDoGetBitmapMargins(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetClientDataFunc m_wxButtonExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxButton::DoGetClientData();
    if (*m_wxButtonExtDoGetClientData != NULL){
      return m_wxButtonExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetClientObjectFunc m_wxButtonExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxButton::DoGetClientObject();
    if (*m_wxButtonExtDoGetClientObject != NULL){
      return m_wxButtonExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetClientSize__intPintPFunc m_wxButtonExtDoGetClientSize__intPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxButton::DoGetClientSize(width, height);
    if (*m_wxButtonExtDoGetClientSize__intPintP != NULL){
      return m_wxButtonExtDoGetClientSize__intPintP(this, width, height);
    }
  }
  wxButtonExtDoGetPosition__intPintPFunc m_wxButtonExtDoGetPosition__intPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxButton::DoGetPosition(x, y);
    if (*m_wxButtonExtDoGetPosition__intPintP != NULL){
      return m_wxButtonExtDoGetPosition__intPintP(this, x, y);
    }
  }
  wxButtonExtDoGetScreenPosition__intPintPFunc m_wxButtonExtDoGetScreenPosition__intPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxButton::DoGetScreenPosition(x, y);
    if (*m_wxButtonExtDoGetScreenPosition__intPintP != NULL){
      return m_wxButtonExtDoGetScreenPosition__intPintP(this, x, y);
    }
  }
  wxButtonExtDoGetSize__intPintPFunc m_wxButtonExtDoGetSize__intPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxButton::DoGetSize(width, height);
    if (*m_wxButtonExtDoGetSize__intPintP != NULL){
      return m_wxButtonExtDoGetSize__intPintP(this, width, height);
    }
  }
  wxButtonExtDoGetSizeFromClientSize__wxSizeCRFunc m_wxButtonExtDoGetSizeFromClientSize__wxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxButton::DoGetSizeFromClientSize(size);
    if (*m_wxButtonExtDoGetSizeFromClientSize__wxSizeCR != NULL){
      return m_wxButtonExtDoGetSizeFromClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetSizeFromTextSize__intintFunc m_wxButtonExtDoGetSizeFromTextSize__intint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxButton::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxButtonExtDoGetSizeFromTextSize__intint != NULL){
      return m_wxButtonExtDoGetSizeFromTextSize__intint(this, xlen, ylen, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc m_wxButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxButton::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
    }
  }
  wxButtonExtDoGetVirtualSizeFunc m_wxButtonExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxButton::DoGetVirtualSize();
    if (*m_wxButtonExtDoGetVirtualSize != NULL){
      return m_wxButtonExtDoGetVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoHitTest__wxCoordwxCoordFunc m_wxButtonExtDoHitTest__wxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxButton::DoHitTest(x, y);
    if (*m_wxButtonExtDoHitTest__wxCoordwxCoord != NULL){
      return m_wxButtonExtDoHitTest__wxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoIsExposed__intintintintFunc m_wxButtonExtDoIsExposed__intintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxButton::DoIsExposed(x, y, w, h);
    if (*m_wxButtonExtDoIsExposed__intintintint != NULL){
      return m_wxButtonExtDoIsExposed__intintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoIsExposed__intintFunc m_wxButtonExtDoIsExposed__intint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxButton::DoIsExposed(x, y);
    if (*m_wxButtonExtDoIsExposed__intint != NULL){
      return m_wxButtonExtDoIsExposed__intint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc m_wxButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxButton::DoMoveInTabOrder(win, move);
    if (*m_wxButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxButtonExtDoMoveWindow__intintintintFunc m_wxButtonExtDoMoveWindow__intintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxButton::DoMoveWindow(x, y, width, height);
    if (*m_wxButtonExtDoMoveWindow__intintintint != NULL){
      return m_wxButtonExtDoMoveWindow__intintintint(this, x, y, width, height);
    }
  }
  wxButtonExtDoNavigateIn__intFunc m_wxButtonExtDoNavigateIn__int = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxButton::DoNavigateIn(flags);
    if (*m_wxButtonExtDoNavigateIn__int != NULL){
      return m_wxButtonExtDoNavigateIn__int(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoPhase__intFunc m_wxButtonExtDoPhase__int = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxButton::DoPhase(phase);
    if (*m_wxButtonExtDoPhase__int != NULL){
      return m_wxButtonExtDoPhase__int(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoPopupMenu__wxMenuPintintFunc m_wxButtonExtDoPopupMenu__wxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxButton::DoPopupMenu(menu, x, y);
    if (*m_wxButtonExtDoPopupMenu__wxMenuPintint != NULL){
      return m_wxButtonExtDoPopupMenu__wxMenuPintint(this, menu, x, y, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoReleaseMouseFunc m_wxButtonExtDoReleaseMouse = NULL;
  virtual void DoReleaseMouse() override
  {
    wxButton::DoReleaseMouse();
    if (*m_wxButtonExtDoReleaseMouse != NULL){
      return m_wxButtonExtDoReleaseMouse(this);
    }
  }
  wxButtonExtDoScreenToClient__intPintPFunc m_wxButtonExtDoScreenToClient__intPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxButton::DoScreenToClient(x, y);
    if (*m_wxButtonExtDoScreenToClient__intPintP != NULL){
      return m_wxButtonExtDoScreenToClient__intPintP(this, x, y);
    }
  }
  wxButtonExtDoSetAuthNeeded__boolFunc m_wxButtonExtDoSetAuthNeeded__bool = NULL;
  virtual void DoSetAuthNeeded(bool show) override
  {
    wxButton::DoSetAuthNeeded(show);
    if (*m_wxButtonExtDoSetAuthNeeded__bool != NULL){
      return m_wxButtonExtDoSetAuthNeeded__bool(this, show);
    }
  }
  wxButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc m_wxButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState = NULL;
  virtual void DoSetBitmap(wxBitmapBundle const& bitmapBundle, wxAnyButtonBase::State which) override
  {
    wxButton::DoSetBitmap(bitmapBundle, which);
    if (*m_wxButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState != NULL){
      return m_wxButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState(this, bitmapBundle, which);
    }
  }
  wxButtonExtDoSetBitmapMargins__intintFunc m_wxButtonExtDoSetBitmapMargins__intint = NULL;
  virtual void DoSetBitmapMargins(int x, int y) override
  {
    wxButton::DoSetBitmapMargins(x, y);
    if (*m_wxButtonExtDoSetBitmapMargins__intint != NULL){
      return m_wxButtonExtDoSetBitmapMargins__intint(this, x, y);
    }
  }
  wxButtonExtDoSetBitmapPosition__wxDirectionFunc m_wxButtonExtDoSetBitmapPosition__wxDirection = NULL;
  virtual void DoSetBitmapPosition(wxDirection dir) override
  {
    wxButton::DoSetBitmapPosition(dir);
    if (*m_wxButtonExtDoSetBitmapPosition__wxDirection != NULL){
      return m_wxButtonExtDoSetBitmapPosition__wxDirection(this, dir);
    }
  }
  wxButtonExtDoSetClientData__voidPFunc m_wxButtonExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxButton::DoSetClientData(data);
    if (*m_wxButtonExtDoSetClientData__voidP != NULL){
      return m_wxButtonExtDoSetClientData__voidP(this, data);
    }
  }
  wxButtonExtDoSetClientObject__wxClientDataPFunc m_wxButtonExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxButton::DoSetClientObject(data);
    if (*m_wxButtonExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxButtonExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxButtonExtDoSetClientSize__intintFunc m_wxButtonExtDoSetClientSize__intint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxButton::DoSetClientSize(width, height);
    if (*m_wxButtonExtDoSetClientSize__intint != NULL){
      return m_wxButtonExtDoSetClientSize__intint(this, width, height);
    }
  }
  wxButtonExtDoSetLabelMarkup__wxStringCRFunc m_wxButtonExtDoSetLabelMarkup__wxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxButton::DoSetLabelMarkup(markup);
    if (*m_wxButtonExtDoSetLabelMarkup__wxStringCR != NULL){
      return m_wxButtonExtDoSetLabelMarkup__wxStringCR(this, markup, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoSetSize__intintintintintFunc m_wxButtonExtDoSetSize__intintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxButton::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxButtonExtDoSetSize__intintintintint != NULL){
      return m_wxButtonExtDoSetSize__intintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxButtonExtDoSetSizeHints__intintintintintintFunc m_wxButtonExtDoSetSizeHints__intintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxButton::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxButtonExtDoSetSizeHints__intintintintintint != NULL){
      return m_wxButtonExtDoSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxButtonExtDoSetToolTip__wxToolTipPFunc m_wxButtonExtDoSetToolTip__wxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxButton::DoSetToolTip(tip);
    if (*m_wxButtonExtDoSetToolTip__wxToolTipP != NULL){
      return m_wxButtonExtDoSetToolTip__wxToolTipP(this, tip);
    }
  }
  wxButtonExtDoSetToolTipText__wxStringCRFunc m_wxButtonExtDoSetToolTipText__wxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxButton::DoSetToolTipText(tip);
    if (*m_wxButtonExtDoSetToolTipText__wxStringCR != NULL){
      return m_wxButtonExtDoSetToolTipText__wxStringCR(this, tip);
    }
  }
  wxButtonExtDoSetVirtualSize__intintFunc m_wxButtonExtDoSetVirtualSize__intint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxButton::DoSetVirtualSize(x, y);
    if (*m_wxButtonExtDoSetVirtualSize__intint != NULL){
      return m_wxButtonExtDoSetVirtualSize__intint(this, x, y);
    }
  }
  wxButtonExtDoSetWindowVariant__wxWindowVariantFunc m_wxButtonExtDoSetWindowVariant__wxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxButton::DoSetWindowVariant(variant);
    if (*m_wxButtonExtDoSetWindowVariant__wxWindowVariant != NULL){
      return m_wxButtonExtDoSetWindowVariant__wxWindowVariant(this, variant);
    }
  }
  wxButtonExtDoThawFunc m_wxButtonExtDoThaw = NULL;
  virtual void DoThaw() override
  {
    wxButton::DoThaw();
    if (*m_wxButtonExtDoThaw != NULL){
      return m_wxButtonExtDoThaw(this);
    }
  }
  wxButtonExtDoUpdateWindowUI__wxUpdateUIEventRFunc m_wxButtonExtDoUpdateWindowUI__wxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxButton::DoUpdateWindowUI(event);
    if (*m_wxButtonExtDoUpdateWindowUI__wxUpdateUIEventR != NULL){
      return m_wxButtonExtDoUpdateWindowUI__wxUpdateUIEventR(this, event);
    }
  }
  wxButtonExtDragAcceptFiles__boolFunc m_wxButtonExtDragAcceptFiles__bool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxButton::DragAcceptFiles(accept);
    if (*m_wxButtonExtDragAcceptFiles__bool != NULL){
      return m_wxButtonExtDragAcceptFiles__bool(this, accept);
    }
  }
  wxButtonExtEnable__boolFunc m_wxButtonExtEnable__bool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxButton::Enable(enable);
    if (*m_wxButtonExtEnable__bool != NULL){
      return m_wxButtonExtEnable__bool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtEnableTouchEvents__intFunc m_wxButtonExtEnableTouchEvents__int = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxButton::EnableTouchEvents(eventsMask);
    if (*m_wxButtonExtEnableTouchEvents__int != NULL){
      return m_wxButtonExtEnableTouchEvents__int(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtEnableVisibleFocus__boolFunc m_wxButtonExtEnableVisibleFocus__bool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxButton::EnableVisibleFocus(enabled);
    if (*m_wxButtonExtEnableVisibleFocus__bool != NULL){
      return m_wxButtonExtEnableVisibleFocus__bool(this, enabled);
    }
  }
  wxButtonExtEndRepositioningChildrenFunc m_wxButtonExtEndRepositioningChildren = NULL;
  virtual void EndRepositioningChildren() override
  {
    wxButton::EndRepositioningChildren();
    if (*m_wxButtonExtEndRepositioningChildren != NULL){
      return m_wxButtonExtEndRepositioningChildren(this);
    }
  }
  wxButtonExtFitFunc m_wxButtonExtFit = NULL;
  virtual void Fit() override
  {
    wxButton::Fit();
    if (*m_wxButtonExtFit != NULL){
      return m_wxButtonExtFit(this);
    }
  }
  wxButtonExtFitInsideFunc m_wxButtonExtFitInside = NULL;
  virtual void FitInside() override
  {
    wxButton::FitInside();
    if (*m_wxButtonExtFitInside != NULL){
      return m_wxButtonExtFitInside(this);
    }
  }
  wxButtonExtGetBestVirtualSizeFunc m_wxButtonExtGetBestVirtualSize = NULL;
  virtual wxSize GetBestVirtualSize() const override
  {
    wxSize res = wxButton::GetBestVirtualSize();
    if (*m_wxButtonExtGetBestVirtualSize != NULL){
      return m_wxButtonExtGetBestVirtualSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetCharHeightFunc m_wxButtonExtGetCharHeight = NULL;
  virtual int GetCharHeight() const override
  {
    int res = wxButton::GetCharHeight();
    if (*m_wxButtonExtGetCharHeight != NULL){
      return m_wxButtonExtGetCharHeight(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetCharWidthFunc m_wxButtonExtGetCharWidth = NULL;
  virtual int GetCharWidth() const override
  {
    int res = wxButton::GetCharWidth();
    if (*m_wxButtonExtGetCharWidth != NULL){
      return m_wxButtonExtGetCharWidth(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetClassInfoFunc m_wxButtonExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxButton::GetClassInfo();
    if (*m_wxButtonExtGetClassInfo != NULL){
      return m_wxButtonExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetClientAreaOriginFunc m_wxButtonExtGetClientAreaOrigin = NULL;
  virtual wxPoint GetClientAreaOrigin() const override
  {
    wxPoint res = wxButton::GetClientAreaOrigin();
    if (*m_wxButtonExtGetClientAreaOrigin != NULL){
      return m_wxButtonExtGetClientAreaOrigin(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetClientSizeConstraint__intPintPFunc m_wxButtonExtGetClientSizeConstraint__intPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxButton::GetClientSizeConstraint(w, h);
    if (*m_wxButtonExtGetClientSizeConstraint__intPintP != NULL){
      return m_wxButtonExtGetClientSizeConstraint__intPintP(this, w, h);
    }
  }
  wxButtonExtGetContentScaleFactorFunc m_wxButtonExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxButton::GetContentScaleFactor();
    if (*m_wxButtonExtGetContentScaleFactor != NULL){
      return m_wxButtonExtGetContentScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetDPIFunc m_wxButtonExtGetDPI = NULL;
  virtual wxSize GetDPI() const override
  {
    wxSize res = wxButton::GetDPI();
    if (*m_wxButtonExtGetDPI != NULL){
      return m_wxButtonExtGetDPI(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetDPIScaleFactorFunc m_wxButtonExtGetDPIScaleFactor = NULL;
  virtual double GetDPIScaleFactor() const override
  {
    double res = wxButton::GetDPIScaleFactor();
    if (*m_wxButtonExtGetDPIScaleFactor != NULL){
      return m_wxButtonExtGetDPIScaleFactor(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetDefaultAttributesFunc m_wxButtonExtGetDefaultAttributes = NULL;
  virtual wxVisualAttributes GetDefaultAttributes() const override
  {
    wxVisualAttributes res = wxButton::GetDefaultAttributes();
    if (*m_wxButtonExtGetDefaultAttributes != NULL){
      return m_wxButtonExtGetDefaultAttributes(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetDefaultBorderFunc m_wxButtonExtGetDefaultBorder = NULL;
  virtual wxBorder GetDefaultBorder() const override
  {
    wxBorder res = wxButton::GetDefaultBorder();
    if (*m_wxButtonExtGetDefaultBorder != NULL){
      return m_wxButtonExtGetDefaultBorder(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetDefaultBorderForControlFunc m_wxButtonExtGetDefaultBorderForControl = NULL;
  virtual wxBorder GetDefaultBorderForControl() const override
  {
    wxBorder res = wxButton::GetDefaultBorderForControl();
    if (*m_wxButtonExtGetDefaultBorderForControl != NULL){
      return m_wxButtonExtGetDefaultBorderForControl(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetDropTargetFunc m_wxButtonExtGetDropTarget = NULL;
  virtual wxDropTarget* GetDropTarget() const override
  {
    wxDropTarget* res = wxButton::GetDropTarget();
    if (*m_wxButtonExtGetDropTarget != NULL){
      return m_wxButtonExtGetDropTarget(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetEffectiveMinSizeFunc m_wxButtonExtGetEffectiveMinSize = NULL;
  virtual wxSize GetEffectiveMinSize() const override
  {
    wxSize res = wxButton::GetEffectiveMinSize();
    if (*m_wxButtonExtGetEffectiveMinSize != NULL){
      return m_wxButtonExtGetEffectiveMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetEventHashTableFunc m_wxButtonExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxButton::GetEventHashTable();
    if (*m_wxButtonExtGetEventHashTable != NULL){
      return m_wxButtonExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetEventTableFunc m_wxButtonExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxButton::GetEventTable();
    if (*m_wxButtonExtGetEventTable != NULL){
      return m_wxButtonExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetHandleFunc m_wxButtonExtGetHandle = NULL;
  virtual WXWidget GetHandle() const override
  {
    WXWidget res = wxButton::GetHandle();
    if (*m_wxButtonExtGetHandle != NULL){
      return m_wxButtonExtGetHandle(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc m_wxButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxButton::GetHelpTextAtPoint(pt, origin);
    if (*m_wxButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin != NULL){
      return m_wxButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin(this, pt, origin, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetLabelFunc m_wxButtonExtGetLabel = NULL;
  virtual wxString GetLabel() const override
  {
    wxString res = wxButton::GetLabel();
    if (*m_wxButtonExtGetLabel != NULL){
      return m_wxButtonExtGetLabel(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetLabelTextFunc m_wxButtonExtGetLabelText = NULL;
  virtual wxString GetLabelText() const override
  {
    wxString res = wxButton::GetLabelText();
    if (*m_wxButtonExtGetLabelText != NULL){
      return m_wxButtonExtGetLabelText(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetLayoutDirectionFunc m_wxButtonExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxButton::GetLayoutDirection();
    if (*m_wxButtonExtGetLayoutDirection != NULL){
      return m_wxButtonExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetMainWindowOfCompositeControlFunc m_wxButtonExtGetMainWindowOfCompositeControl = NULL;
  virtual wxWindow* GetMainWindowOfCompositeControl() override
  {
    wxWindow* res = wxButton::GetMainWindowOfCompositeControl();
    if (*m_wxButtonExtGetMainWindowOfCompositeControl != NULL){
      return m_wxButtonExtGetMainWindowOfCompositeControl(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetMaxClientSizeFunc m_wxButtonExtGetMaxClientSize = NULL;
  virtual wxSize GetMaxClientSize() const override
  {
    wxSize res = wxButton::GetMaxClientSize();
    if (*m_wxButtonExtGetMaxClientSize != NULL){
      return m_wxButtonExtGetMaxClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetMaxSizeFunc m_wxButtonExtGetMaxSize = NULL;
  virtual wxSize GetMaxSize() const override
  {
    wxSize res = wxButton::GetMaxSize();
    if (*m_wxButtonExtGetMaxSize != NULL){
      return m_wxButtonExtGetMaxSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetMinClientSizeFunc m_wxButtonExtGetMinClientSize = NULL;
  virtual wxSize GetMinClientSize() const override
  {
    wxSize res = wxButton::GetMinClientSize();
    if (*m_wxButtonExtGetMinClientSize != NULL){
      return m_wxButtonExtGetMinClientSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetMinSizeFunc m_wxButtonExtGetMinSize = NULL;
  virtual wxSize GetMinSize() const override
  {
    wxSize res = wxButton::GetMinSize();
    if (*m_wxButtonExtGetMinSize != NULL){
      return m_wxButtonExtGetMinSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetNameFunc m_wxButtonExtGetName = NULL;
  virtual wxString GetName() const override
  {
    wxString res = wxButton::GetName();
    if (*m_wxButtonExtGetName != NULL){
      return m_wxButtonExtGetName(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetNormalStateFunc m_wxButtonExtGetNormalState = NULL;
  virtual wxAnyButtonBase::State GetNormalState() const override
  {
    wxAnyButtonBase::wxAnyButtonBase::State res = wxButton::GetNormalState();
    if (*m_wxButtonExtGetNormalState != NULL){
      return m_wxButtonExtGetNormalState(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetPositionConstraint__intPintPFunc m_wxButtonExtGetPositionConstraint__intPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxButton::GetPositionConstraint(x, y);
    if (*m_wxButtonExtGetPositionConstraint__intPintP != NULL){
      return m_wxButtonExtGetPositionConstraint__intPintP(this, x, y);
    }
  }
  wxButtonExtGetScrollPos__intFunc m_wxButtonExtGetScrollPos__int = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxButton::GetScrollPos(orient);
    if (*m_wxButtonExtGetScrollPos__int != NULL){
      return m_wxButtonExtGetScrollPos__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetScrollRange__intFunc m_wxButtonExtGetScrollRange__int = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxButton::GetScrollRange(orient);
    if (*m_wxButtonExtGetScrollRange__int != NULL){
      return m_wxButtonExtGetScrollRange__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetScrollThumb__intFunc m_wxButtonExtGetScrollThumb__int = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxButton::GetScrollThumb(orient);
    if (*m_wxButtonExtGetScrollThumb__int != NULL){
      return m_wxButtonExtGetScrollThumb__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetSizeConstraint__intPintPFunc m_wxButtonExtGetSizeConstraint__intPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxButton::GetSizeConstraint(w, h);
    if (*m_wxButtonExtGetSizeConstraint__intPintP != NULL){
      return m_wxButtonExtGetSizeConstraint__intPintP(this, w, h);
    }
  }
  wxButtonExtGetThemeEnabledFunc m_wxButtonExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxButton::GetThemeEnabled();
    if (*m_wxButtonExtGetThemeEnabled != NULL){
      return m_wxButtonExtGetThemeEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetTransparentFunc m_wxButtonExtGetTransparent = NULL;
  virtual wxByte GetTransparent() const override
  {
    wxByte res = wxButton::GetTransparent();
    if (*m_wxButtonExtGetTransparent != NULL){
      return m_wxButtonExtGetTransparent(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetValidatorFunc m_wxButtonExtGetValidator = NULL;
  virtual wxValidator* GetValidator() override
  {
    wxValidator* res = wxButton::GetValidator();
    if (*m_wxButtonExtGetValidator != NULL){
      return m_wxButtonExtGetValidator(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetWindowBorderSizeFunc m_wxButtonExtGetWindowBorderSize = NULL;
  virtual wxSize GetWindowBorderSize() const override
  {
    wxSize res = wxButton::GetWindowBorderSize();
    if (*m_wxButtonExtGetWindowBorderSize != NULL){
      return m_wxButtonExtGetWindowBorderSize(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetWindowStyleFlagFunc m_wxButtonExtGetWindowStyleFlag = NULL;
  virtual long GetWindowStyleFlag() const override
  {
    long res = wxButton::GetWindowStyleFlag();
    if (*m_wxButtonExtGetWindowStyleFlag != NULL){
      return m_wxButtonExtGetWindowStyleFlag(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtHasCaptureFunc m_wxButtonExtHasCapture = NULL;
  virtual bool HasCapture() const override
  {
    bool res = wxButton::HasCapture();
    if (*m_wxButtonExtHasCapture != NULL){
      return m_wxButtonExtHasCapture(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtHasFocusFunc m_wxButtonExtHasFocus = NULL;
  virtual bool HasFocus() const override
  {
    bool res = wxButton::HasFocus();
    if (*m_wxButtonExtHasFocus != NULL){
      return m_wxButtonExtHasFocus(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtHasMultiplePagesFunc m_wxButtonExtHasMultiplePages = NULL;
  virtual bool HasMultiplePages() const override
  {
    bool res = wxButton::HasMultiplePages();
    if (*m_wxButtonExtHasMultiplePages != NULL){
      return m_wxButtonExtHasMultiplePages(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtHasTransparentBackgroundFunc m_wxButtonExtHasTransparentBackground = NULL;
  virtual bool HasTransparentBackground() override
  {
    bool res = wxButton::HasTransparentBackground();
    if (*m_wxButtonExtHasTransparentBackground != NULL){
      return m_wxButtonExtHasTransparentBackground(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtHideWithEffect__wxShowEffectunsignedintFunc m_wxButtonExtHideWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxButton::HideWithEffect(effect, timeout);
    if (*m_wxButtonExtHideWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxButtonExtHideWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtInformFirstDirection__intintintFunc m_wxButtonExtInformFirstDirection__intintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxButton::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxButtonExtInformFirstDirection__intintint != NULL){
      return m_wxButtonExtInformFirstDirection__intintint(this, direction, size, availableOtherDir, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtInheritAttributesFunc m_wxButtonExtInheritAttributes = NULL;
  virtual void InheritAttributes() override
  {
    wxButton::InheritAttributes();
    if (*m_wxButtonExtInheritAttributes != NULL){
      return m_wxButtonExtInheritAttributes(this);
    }
  }
  wxButtonExtInitDialogFunc m_wxButtonExtInitDialog = NULL;
  virtual void InitDialog() override
  {
    wxButton::InitDialog();
    if (*m_wxButtonExtInitDialog != NULL){
      return m_wxButtonExtInitDialog(this);
    }
  }
  wxButtonExtIsClientAreaChild__wxWindowCPFunc m_wxButtonExtIsClientAreaChild__wxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* child) const override
  {
    bool res = wxButton::IsClientAreaChild(child);
    if (*m_wxButtonExtIsClientAreaChild__wxWindowCP != NULL){
      return m_wxButtonExtIsClientAreaChild__wxWindowCP(this, child, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsDoubleBufferedFunc m_wxButtonExtIsDoubleBuffered = NULL;
  virtual bool IsDoubleBuffered() const override
  {
    bool res = wxButton::IsDoubleBuffered();
    if (*m_wxButtonExtIsDoubleBuffered != NULL){
      return m_wxButtonExtIsDoubleBuffered(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsRetainedFunc m_wxButtonExtIsRetained = NULL;
  virtual bool IsRetained() const override
  {
    bool res = wxButton::IsRetained();
    if (*m_wxButtonExtIsRetained != NULL){
      return m_wxButtonExtIsRetained(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsScrollbarAlwaysShown__intFunc m_wxButtonExtIsScrollbarAlwaysShown__int = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxButton::IsScrollbarAlwaysShown(orient);
    if (*m_wxButtonExtIsScrollbarAlwaysShown__int != NULL){
      return m_wxButtonExtIsScrollbarAlwaysShown__int(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsShownFunc m_wxButtonExtIsShown = NULL;
  virtual bool IsShown() const override
  {
    bool res = wxButton::IsShown();
    if (*m_wxButtonExtIsShown != NULL){
      return m_wxButtonExtIsShown(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsShownOnScreenFunc m_wxButtonExtIsShownOnScreen = NULL;
  virtual bool IsShownOnScreen() const override
  {
    bool res = wxButton::IsShownOnScreen();
    if (*m_wxButtonExtIsShownOnScreen != NULL){
      return m_wxButtonExtIsShownOnScreen(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsThisEnabledFunc m_wxButtonExtIsThisEnabled = NULL;
  virtual bool IsThisEnabled() const override
  {
    bool res = wxButton::IsThisEnabled();
    if (*m_wxButtonExtIsThisEnabled != NULL){
      return m_wxButtonExtIsThisEnabled(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsTopLevelFunc m_wxButtonExtIsTopLevel = NULL;
  virtual bool IsTopLevel() const override
  {
    bool res = wxButton::IsTopLevel();
    if (*m_wxButtonExtIsTopLevel != NULL){
      return m_wxButtonExtIsTopLevel(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc m_wxButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind kind) const override
  {
    bool res = wxButton::IsTopNavigationDomain(kind);
    if (*m_wxButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKind != NULL){
      return m_wxButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKind(this, kind, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsTransparentBackgroundSupported__wxStringPFunc m_wxButtonExtIsTransparentBackgroundSupported__wxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxButton::IsTransparentBackgroundSupported(reason);
    if (*m_wxButtonExtIsTransparentBackgroundSupported__wxStringP != NULL){
      return m_wxButtonExtIsTransparentBackgroundSupported__wxStringP(this, reason, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtLayoutFunc m_wxButtonExtLayout = NULL;
  virtual bool Layout() override
  {
    bool res = wxButton::Layout();
    if (*m_wxButtonExtLayout != NULL){
      return m_wxButtonExtLayout(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtLayoutPhase1__intPFunc m_wxButtonExtLayoutPhase1__intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxButton::LayoutPhase1(noChanges);
    if (*m_wxButtonExtLayoutPhase1__intP != NULL){
      return m_wxButtonExtLayoutPhase1__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtLayoutPhase2__intPFunc m_wxButtonExtLayoutPhase2__intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxButton::LayoutPhase2(noChanges);
    if (*m_wxButtonExtLayoutPhase2__intP != NULL){
      return m_wxButtonExtLayoutPhase2__intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtLowerFunc m_wxButtonExtLower = NULL;
  virtual void Lower() override
  {
    wxButton::Lower();
    if (*m_wxButtonExtLower != NULL){
      return m_wxButtonExtLower(this);
    }
  }
  wxButtonExtMoveConstraint__intintFunc m_wxButtonExtMoveConstraint__intint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxButton::MoveConstraint(x, y);
    if (*m_wxButtonExtMoveConstraint__intint != NULL){
      return m_wxButtonExtMoveConstraint__intint(this, x, y);
    }
  }
  wxButtonExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxButtonExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxButton::OnDynamicBind(entry);
    if (*m_wxButtonExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxButtonExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtOnInternalIdleFunc m_wxButtonExtOnInternalIdle = NULL;
  virtual void OnInternalIdle() override
  {
    wxButton::OnInternalIdle();
    if (*m_wxButtonExtOnInternalIdle != NULL){
      return m_wxButtonExtOnInternalIdle(this);
    }
  }
  wxButtonExtPrepareDC__wxDCRFunc m_wxButtonExtPrepareDC__wxDCR = NULL;
  virtual void PrepareDC(wxDC& dc) override
  {
    wxButton::PrepareDC(dc);
    if (*m_wxButtonExtPrepareDC__wxDCR != NULL){
      return m_wxButtonExtPrepareDC__wxDCR(this, dc);
    }
  }
  wxButtonExtProcessEvent__wxEventRFunc m_wxButtonExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxButton::ProcessEvent(event);
    if (*m_wxButtonExtProcessEvent__wxEventR != NULL){
      return m_wxButtonExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtQueueEvent__wxEventPFunc m_wxButtonExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxButton::QueueEvent(event);
    if (*m_wxButtonExtQueueEvent__wxEventP != NULL){
      return m_wxButtonExtQueueEvent__wxEventP(this, event);
    }
  }
  wxButtonExtRaiseFunc m_wxButtonExtRaise = NULL;
  virtual void Raise() override
  {
    wxButton::Raise();
    if (*m_wxButtonExtRaise != NULL){
      return m_wxButtonExtRaise(this);
    }
  }
  wxButtonExtRefresh__boolwxRectCPFunc m_wxButtonExtRefresh__boolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxButton::Refresh(eraseBackground, rect);
    if (*m_wxButtonExtRefresh__boolwxRectCP != NULL){
      return m_wxButtonExtRefresh__boolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxButtonExtRegisterHotKey__intintintFunc m_wxButtonExtRegisterHotKey__intintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxButton::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxButtonExtRegisterHotKey__intintint != NULL){
      return m_wxButtonExtRegisterHotKey__intintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtRemoveChild__wxWindowBasePFunc m_wxButtonExtRemoveChild__wxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxButton::RemoveChild(child);
    if (*m_wxButtonExtRemoveChild__wxWindowBaseP != NULL){
      return m_wxButtonExtRemoveChild__wxWindowBaseP(this, child);
    }
  }
  wxButtonExtReparent__wxWindowBasePFunc m_wxButtonExtReparent__wxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxButton::Reparent(newParent);
    if (*m_wxButtonExtReparent__wxWindowBaseP != NULL){
      return m_wxButtonExtReparent__wxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtScrollLines__intFunc m_wxButtonExtScrollLines__int = NULL;
  virtual bool ScrollLines(int lines) override
  {
    bool res = wxButton::ScrollLines(lines);
    if (*m_wxButtonExtScrollLines__int != NULL){
      return m_wxButtonExtScrollLines__int(this, lines, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtScrollPages__intFunc m_wxButtonExtScrollPages__int = NULL;
  virtual bool ScrollPages(int pages) override
  {
    bool res = wxButton::ScrollPages(pages);
    if (*m_wxButtonExtScrollPages__int != NULL){
      return m_wxButtonExtScrollPages__int(this, pages, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtScrollWindow__intintwxRectCPFunc m_wxButtonExtScrollWindow__intintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxButton::ScrollWindow(dx, dy, rect);
    if (*m_wxButtonExtScrollWindow__intintwxRectCP != NULL){
      return m_wxButtonExtScrollWindow__intintwxRectCP(this, dx, dy, rect);
    }
  }
  wxButtonExtSearchEventTable__wxEventTableRwxEventRFunc m_wxButtonExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxButton::SearchEventTable(table, event);
    if (*m_wxButtonExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxButtonExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtSendIdleEvents__wxIdleEventRFunc m_wxButtonExtSendIdleEvents__wxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxButton::SendIdleEvents(event);
    if (*m_wxButtonExtSendIdleEvents__wxIdleEventR != NULL){
      return m_wxButtonExtSendIdleEvents__wxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtSendSizeEvent__intFunc m_wxButtonExtSendSizeEvent__int = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxButton::SendSizeEvent(flags);
    if (*m_wxButtonExtSendSizeEvent__int != NULL){
      return m_wxButtonExtSendSizeEvent__int(this, flags);
    }
  }
  wxButtonExtSetAcceleratorTable__wxAcceleratorTableCRFunc m_wxButtonExtSetAcceleratorTable__wxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxButton::SetAcceleratorTable(accel);
    if (*m_wxButtonExtSetAcceleratorTable__wxAcceleratorTableCR != NULL){
      return m_wxButtonExtSetAcceleratorTable__wxAcceleratorTableCR(this, accel);
    }
  }
  wxButtonExtSetBackgroundColour__wxColourCRFunc m_wxButtonExtSetBackgroundColour__wxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxButton::SetBackgroundColour(colour);
    if (*m_wxButtonExtSetBackgroundColour__wxColourCR != NULL){
      return m_wxButtonExtSetBackgroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetBackgroundStyle__wxBackgroundStyleFunc m_wxButtonExtSetBackgroundStyle__wxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxButton::SetBackgroundStyle(style);
    if (*m_wxButtonExtSetBackgroundStyle__wxBackgroundStyle != NULL){
      return m_wxButtonExtSetBackgroundStyle__wxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetCanFocus__boolFunc m_wxButtonExtSetCanFocus__bool = NULL;
  virtual void SetCanFocus(bool canFocus) override
  {
    wxButton::SetCanFocus(canFocus);
    if (*m_wxButtonExtSetCanFocus__bool != NULL){
      return m_wxButtonExtSetCanFocus__bool(this, canFocus);
    }
  }
  wxButtonExtSetConstraintSizes__boolFunc m_wxButtonExtSetConstraintSizes__bool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxButton::SetConstraintSizes(recurse);
    if (*m_wxButtonExtSetConstraintSizes__bool != NULL){
      return m_wxButtonExtSetConstraintSizes__bool(this, recurse);
    }
  }
  wxButtonExtSetCursor__wxCursorCRFunc m_wxButtonExtSetCursor__wxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxButton::SetCursor(cursor);
    if (*m_wxButtonExtSetCursor__wxCursorCR != NULL){
      return m_wxButtonExtSetCursor__wxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetDefaultFunc m_wxButtonExtSetDefault = NULL;
  virtual wxWindow* SetDefault() override
  {
    wxWindow* res = wxButton::SetDefault();
    if (*m_wxButtonExtSetDefault != NULL){
      return m_wxButtonExtSetDefault(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetDoubleBuffered__boolFunc m_wxButtonExtSetDoubleBuffered__bool = NULL;
  virtual void SetDoubleBuffered(bool on) override
  {
    wxButton::SetDoubleBuffered(on);
    if (*m_wxButtonExtSetDoubleBuffered__bool != NULL){
      return m_wxButtonExtSetDoubleBuffered__bool(this, on);
    }
  }
  wxButtonExtSetDropTarget__wxDropTargetPFunc m_wxButtonExtSetDropTarget__wxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxButton::SetDropTarget(dropTarget);
    if (*m_wxButtonExtSetDropTarget__wxDropTargetP != NULL){
      return m_wxButtonExtSetDropTarget__wxDropTargetP(this, dropTarget);
    }
  }
  wxButtonExtSetExtraStyle__longFunc m_wxButtonExtSetExtraStyle__long = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxButton::SetExtraStyle(exStyle);
    if (*m_wxButtonExtSetExtraStyle__long != NULL){
      return m_wxButtonExtSetExtraStyle__long(this, exStyle);
    }
  }
  wxButtonExtSetFocusFunc m_wxButtonExtSetFocus = NULL;
  virtual void SetFocus() override
  {
    wxButton::SetFocus();
    if (*m_wxButtonExtSetFocus != NULL){
      return m_wxButtonExtSetFocus(this);
    }
  }
  wxButtonExtSetFocusFromKbdFunc m_wxButtonExtSetFocusFromKbd = NULL;
  virtual void SetFocusFromKbd() override
  {
    wxButton::SetFocusFromKbd();
    if (*m_wxButtonExtSetFocusFromKbd != NULL){
      return m_wxButtonExtSetFocusFromKbd(this);
    }
  }
  wxButtonExtSetFont__wxFontCRFunc m_wxButtonExtSetFont__wxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxButton::SetFont(font);
    if (*m_wxButtonExtSetFont__wxFontCR != NULL){
      return m_wxButtonExtSetFont__wxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetForegroundColour__wxColourCRFunc m_wxButtonExtSetForegroundColour__wxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxButton::SetForegroundColour(colour);
    if (*m_wxButtonExtSetForegroundColour__wxColourCR != NULL){
      return m_wxButtonExtSetForegroundColour__wxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetId__wxWindowIDFunc m_wxButtonExtSetId__wxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxButton::SetId(winid);
    if (*m_wxButtonExtSetId__wxWindowID != NULL){
      return m_wxButtonExtSetId__wxWindowID(this, winid);
    }
  }
  wxButtonExtSetLabel__wxStringCRFunc m_wxButtonExtSetLabel__wxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxButton::SetLabel(label);
    if (*m_wxButtonExtSetLabel__wxStringCR != NULL){
      return m_wxButtonExtSetLabel__wxStringCR(this, label);
    }
  }
  wxButtonExtSetLabelText__wxStringCRFunc m_wxButtonExtSetLabelText__wxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxButton::SetLabelText(text);
    if (*m_wxButtonExtSetLabelText__wxStringCR != NULL){
      return m_wxButtonExtSetLabelText__wxStringCR(this, text);
    }
  }
  wxButtonExtSetLayoutDirection__wxLayoutDirectionFunc m_wxButtonExtSetLayoutDirection__wxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection dir) override
  {
    wxButton::SetLayoutDirection(dir);
    if (*m_wxButtonExtSetLayoutDirection__wxLayoutDirection != NULL){
      return m_wxButtonExtSetLayoutDirection__wxLayoutDirection(this, dir);
    }
  }
  wxButtonExtSetMaxClientSize__wxSizeCRFunc m_wxButtonExtSetMaxClientSize__wxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxButton::SetMaxClientSize(size);
    if (*m_wxButtonExtSetMaxClientSize__wxSizeCR != NULL){
      return m_wxButtonExtSetMaxClientSize__wxSizeCR(this, size);
    }
  }
  wxButtonExtSetMaxSize__wxSizeCRFunc m_wxButtonExtSetMaxSize__wxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxButton::SetMaxSize(maxSize);
    if (*m_wxButtonExtSetMaxSize__wxSizeCR != NULL){
      return m_wxButtonExtSetMaxSize__wxSizeCR(this, maxSize);
    }
  }
  wxButtonExtSetMinClientSize__wxSizeCRFunc m_wxButtonExtSetMinClientSize__wxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxButton::SetMinClientSize(size);
    if (*m_wxButtonExtSetMinClientSize__wxSizeCR != NULL){
      return m_wxButtonExtSetMinClientSize__wxSizeCR(this, size);
    }
  }
  wxButtonExtSetMinSize__wxSizeCRFunc m_wxButtonExtSetMinSize__wxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxButton::SetMinSize(minSize);
    if (*m_wxButtonExtSetMinSize__wxSizeCR != NULL){
      return m_wxButtonExtSetMinSize__wxSizeCR(this, minSize);
    }
  }
  wxButtonExtSetName__wxStringCRFunc m_wxButtonExtSetName__wxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxButton::SetName(name);
    if (*m_wxButtonExtSetName__wxStringCR != NULL){
      return m_wxButtonExtSetName__wxStringCR(this, name);
    }
  }
  wxButtonExtSetNextHandler__wxEvtHandlerPFunc m_wxButtonExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxButton::SetNextHandler(handler);
    if (*m_wxButtonExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxButtonExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxButtonExtSetPreviousHandler__wxEvtHandlerPFunc m_wxButtonExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxButton::SetPreviousHandler(handler);
    if (*m_wxButtonExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxButtonExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxButtonExtSetScrollPos__intintboolFunc m_wxButtonExtSetScrollPos__intintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxButton::SetScrollPos(orient, pos, refresh);
    if (*m_wxButtonExtSetScrollPos__intintbool != NULL){
      return m_wxButtonExtSetScrollPos__intintbool(this, orient, pos, refresh);
    }
  }
  wxButtonExtSetScrollbar__intintintintboolFunc m_wxButtonExtSetScrollbar__intintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxButton::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxButtonExtSetScrollbar__intintintintbool != NULL){
      return m_wxButtonExtSetScrollbar__intintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxButtonExtSetSizeConstraint__intintintintFunc m_wxButtonExtSetSizeConstraint__intintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxButton::SetSizeConstraint(x, y, w, h);
    if (*m_wxButtonExtSetSizeConstraint__intintintint != NULL){
      return m_wxButtonExtSetSizeConstraint__intintintint(this, x, y, w, h);
    }
  }
  wxButtonExtSetSizeHints__intintintintintintFunc m_wxButtonExtSetSizeHints__intintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxButton::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxButtonExtSetSizeHints__intintintintintint != NULL){
      return m_wxButtonExtSetSizeHints__intintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxButtonExtSetThemeEnabled__boolFunc m_wxButtonExtSetThemeEnabled__bool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxButton::SetThemeEnabled(enableTheme);
    if (*m_wxButtonExtSetThemeEnabled__bool != NULL){
      return m_wxButtonExtSetThemeEnabled__bool(this, enableTheme);
    }
  }
  wxButtonExtSetTransparent__wxByteFunc m_wxButtonExtSetTransparent__wxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxButton::SetTransparent(alpha);
    if (*m_wxButtonExtSetTransparent__wxByte != NULL){
      return m_wxButtonExtSetTransparent__wxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetValidator__wxValidatorCRFunc m_wxButtonExtSetValidator__wxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxButton::SetValidator(validator);
    if (*m_wxButtonExtSetValidator__wxValidatorCR != NULL){
      return m_wxButtonExtSetValidator__wxValidatorCR(this, validator);
    }
  }
  wxButtonExtSetWindowStyleFlag__longFunc m_wxButtonExtSetWindowStyleFlag__long = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxButton::SetWindowStyleFlag(style);
    if (*m_wxButtonExtSetWindowStyleFlag__long != NULL){
      return m_wxButtonExtSetWindowStyleFlag__long(this, style);
    }
  }
  wxButtonExtShouldInheritColoursFunc m_wxButtonExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxButton::ShouldInheritColours();
    if (*m_wxButtonExtShouldInheritColours != NULL){
      return m_wxButtonExtShouldInheritColours(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtShow__boolFunc m_wxButtonExtShow__bool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxButton::Show(show);
    if (*m_wxButtonExtShow__bool != NULL){
      return m_wxButtonExtShow__bool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtShowWithEffect__wxShowEffectunsignedintFunc m_wxButtonExtShowWithEffect__wxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxButton::ShowWithEffect(effect, timeout);
    if (*m_wxButtonExtShowWithEffect__wxShowEffectunsignedint != NULL){
      return m_wxButtonExtShowWithEffect__wxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtTransferDataFromWindowFunc m_wxButtonExtTransferDataFromWindow = NULL;
  virtual bool TransferDataFromWindow() override
  {
    bool res = wxButton::TransferDataFromWindow();
    if (*m_wxButtonExtTransferDataFromWindow != NULL){
      return m_wxButtonExtTransferDataFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtTransferDataToWindowFunc m_wxButtonExtTransferDataToWindow = NULL;
  virtual bool TransferDataToWindow() override
  {
    bool res = wxButton::TransferDataToWindow();
    if (*m_wxButtonExtTransferDataToWindow != NULL){
      return m_wxButtonExtTransferDataToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtTriggerScrollEvent__wxEventTypeFunc m_wxButtonExtTriggerScrollEvent__wxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxButton::TriggerScrollEvent(scrollEvent);
    if (*m_wxButtonExtTriggerScrollEvent__wxEventType != NULL){
      return m_wxButtonExtTriggerScrollEvent__wxEventType(this, scrollEvent);
    }
  }
  wxButtonExtTryAfter__wxEventRFunc m_wxButtonExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxButton::TryAfter(event);
    if (*m_wxButtonExtTryAfter__wxEventR != NULL){
      return m_wxButtonExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtTryBefore__wxEventRFunc m_wxButtonExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxButton::TryBefore(event);
    if (*m_wxButtonExtTryBefore__wxEventR != NULL){
      return m_wxButtonExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtUnregisterHotKey__intFunc m_wxButtonExtUnregisterHotKey__int = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxButton::UnregisterHotKey(hotkeyId);
    if (*m_wxButtonExtUnregisterHotKey__int != NULL){
      return m_wxButtonExtUnregisterHotKey__int(this, hotkeyId, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtUpdateFunc m_wxButtonExtUpdate = NULL;
  virtual void Update() override
  {
    wxButton::Update();
    if (*m_wxButtonExtUpdate != NULL){
      return m_wxButtonExtUpdate(this);
    }
  }
  wxButtonExtUpdateWindowUI__longFunc m_wxButtonExtUpdateWindowUI__long = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxButton::UpdateWindowUI(flags);
    if (*m_wxButtonExtUpdateWindowUI__long != NULL){
      return m_wxButtonExtUpdateWindowUI__long(this, flags);
    }
  }
  wxButtonExtValidateFunc m_wxButtonExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxButton::Validate();
    if (*m_wxButtonExtValidate != NULL){
      return m_wxButtonExtValidate(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXAdjustFontToOwnPPI__wxFontRFunc m_wxButtonExtWXAdjustFontToOwnPPI__wxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& font) const override
  {
    wxButton::WXAdjustFontToOwnPPI(font);
    if (*m_wxButtonExtWXAdjustFontToOwnPPI__wxFontR != NULL){
      return m_wxButtonExtWXAdjustFontToOwnPPI__wxFontR(this, font);
    }
  }
  wxButtonExtWXGetTextEntryFunc m_wxButtonExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxButton::WXGetTextEntry();
    if (*m_wxButtonExtWXGetTextEntry != NULL){
      return m_wxButtonExtWXGetTextEntry(this, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXReservedEvtHandler1__voidPFunc m_wxButtonExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxButton::WXReservedEvtHandler1(param0);
    if (*m_wxButtonExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxButtonExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXReservedEvtHandler2__voidPFunc m_wxButtonExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxButton::WXReservedEvtHandler2(param0);
    if (*m_wxButtonExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxButtonExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXReservedWindow1__voidPFunc m_wxButtonExtWXReservedWindow1__voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxButton::WXReservedWindow1(param0);
    if (*m_wxButtonExtWXReservedWindow1__voidP != NULL){
      return m_wxButtonExtWXReservedWindow1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXReservedWindow2__voidPFunc m_wxButtonExtWXReservedWindow2__voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxButton::WXReservedWindow2(param0);
    if (*m_wxButtonExtWXReservedWindow2__voidP != NULL){
      return m_wxButtonExtWXReservedWindow2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXReservedWindow3__voidPFunc m_wxButtonExtWXReservedWindow3__voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxButton::WXReservedWindow3(param0);
    if (*m_wxButtonExtWXReservedWindow3__voidP != NULL){
      return m_wxButtonExtWXReservedWindow3__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXSetInitialFittingClientSize__intwxSizerPFunc m_wxButtonExtWXSetInitialFittingClientSize__intwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxButton::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxButtonExtWXSetInitialFittingClientSize__intwxSizerP != NULL){
      return m_wxButtonExtWXSetInitialFittingClientSize__intwxSizerP(this, flags, sizer);
    }
  }
  wxButtonExtWarpPointer__intintFunc m_wxButtonExtWarpPointer__intint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxButton::WarpPointer(x, y);
    if (*m_wxButtonExtWarpPointer__intint != NULL){
      return m_wxButtonExtWarpPointer__intint(this, x, y);
    }
  }
  wxButtonExtWindowToClientSize__wxSizeCRFunc m_wxButtonExtWindowToClientSize__wxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxButton::WindowToClientSize(size);
    if (*m_wxButtonExtWindowToClientSize__wxSizeCR != NULL){
      return m_wxButtonExtWindowToClientSize__wxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxButtonExt(wxButtonExtAcceptsFocusFunc a_AcceptsFocus, wxButtonExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxButtonExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxButtonExtAddChild__wxWindowBasePFunc a_AddChild__wxWindowBaseP, wxButtonExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord, wxButtonExtAdjustForParentClientOrigin__intRintRintFunc a_AdjustForParentClientOrigin__intRintRint, wxButtonExtAlwaysShowScrollbars__boolboolFunc a_AlwaysShowScrollbars__boolbool, wxButtonExtAssociateHandle__WXWidgetFunc a_AssociateHandle__WXWidget, wxButtonExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxButtonExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxButtonExtCanBeFocusedFunc a_CanBeFocused, wxButtonExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxButtonExtCanScroll__intFunc a_CanScroll__int, wxButtonExtCanSetTransparentFunc a_CanSetTransparent, wxButtonExtClearBackgroundFunc a_ClearBackground, wxButtonExtClientToWindowSize__wxSizeCRFunc a_ClientToWindowSize__wxSizeCR, wxButtonExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxButtonExtCommand__wxCommandEventRFunc a_Command__wxCommandEventR, wxButtonExtCreateRefDataFunc a_CreateRefData, wxButtonExtDestroyFunc a_Destroy, wxButtonExtDissociateHandleFunc a_DissociateHandle, wxButtonExtDoCaptureMouseFunc a_DoCaptureMouse, wxButtonExtDoCentre__intFunc a_DoCentre__int, wxButtonExtDoClientToScreen__intPintPFunc a_DoClientToScreen__intPintP, wxButtonExtDoEnable__boolFunc a_DoEnable__bool, wxButtonExtDoFreezeFunc a_DoFreeze, wxButtonExtDoGetAuthNeededFunc a_DoGetAuthNeeded, wxButtonExtDoGetBestClientHeight__intFunc a_DoGetBestClientHeight__int, wxButtonExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxButtonExtDoGetBestClientWidth__intFunc a_DoGetBestClientWidth__int, wxButtonExtDoGetBestSizeFunc a_DoGetBestSize, wxButtonExtDoGetBitmap__wxAnyButtonBaseNStateFunc a_DoGetBitmap__wxAnyButtonBaseNState, wxButtonExtDoGetBitmapMarginsFunc a_DoGetBitmapMargins, wxButtonExtDoGetClientDataFunc a_DoGetClientData, wxButtonExtDoGetClientObjectFunc a_DoGetClientObject, wxButtonExtDoGetClientSize__intPintPFunc a_DoGetClientSize__intPintP, wxButtonExtDoGetPosition__intPintPFunc a_DoGetPosition__intPintP, wxButtonExtDoGetScreenPosition__intPintPFunc a_DoGetScreenPosition__intPintP, wxButtonExtDoGetSize__intPintPFunc a_DoGetSize__intPintP, wxButtonExtDoGetSizeFromClientSize__wxSizeCRFunc a_DoGetSizeFromClientSize__wxSizeCR, wxButtonExtDoGetSizeFromTextSize__intintFunc a_DoGetSizeFromTextSize__intint, wxButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP, wxButtonExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxButtonExtDoHitTest__wxCoordwxCoordFunc a_DoHitTest__wxCoordwxCoord, wxButtonExtDoIsExposed__intintintintFunc a_DoIsExposed__intintintint, wxButtonExtDoIsExposed__intintFunc a_DoIsExposed__intint, wxButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder, wxButtonExtDoMoveWindow__intintintintFunc a_DoMoveWindow__intintintint, wxButtonExtDoNavigateIn__intFunc a_DoNavigateIn__int, wxButtonExtDoPhase__intFunc a_DoPhase__int, wxButtonExtDoPopupMenu__wxMenuPintintFunc a_DoPopupMenu__wxMenuPintint, wxButtonExtDoReleaseMouseFunc a_DoReleaseMouse, wxButtonExtDoScreenToClient__intPintPFunc a_DoScreenToClient__intPintP, wxButtonExtDoSetAuthNeeded__boolFunc a_DoSetAuthNeeded__bool, wxButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNStateFunc a_DoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState, wxButtonExtDoSetBitmapMargins__intintFunc a_DoSetBitmapMargins__intint, wxButtonExtDoSetBitmapPosition__wxDirectionFunc a_DoSetBitmapPosition__wxDirection, wxButtonExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxButtonExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxButtonExtDoSetClientSize__intintFunc a_DoSetClientSize__intint, wxButtonExtDoSetLabelMarkup__wxStringCRFunc a_DoSetLabelMarkup__wxStringCR, wxButtonExtDoSetSize__intintintintintFunc a_DoSetSize__intintintintint, wxButtonExtDoSetSizeHints__intintintintintintFunc a_DoSetSizeHints__intintintintintint, wxButtonExtDoSetToolTip__wxToolTipPFunc a_DoSetToolTip__wxToolTipP, wxButtonExtDoSetToolTipText__wxStringCRFunc a_DoSetToolTipText__wxStringCR, wxButtonExtDoSetVirtualSize__intintFunc a_DoSetVirtualSize__intint, wxButtonExtDoSetWindowVariant__wxWindowVariantFunc a_DoSetWindowVariant__wxWindowVariant, wxButtonExtDoThawFunc a_DoThaw, wxButtonExtDoUpdateWindowUI__wxUpdateUIEventRFunc a_DoUpdateWindowUI__wxUpdateUIEventR, wxButtonExtDragAcceptFiles__boolFunc a_DragAcceptFiles__bool, wxButtonExtEnable__boolFunc a_Enable__bool, wxButtonExtEnableTouchEvents__intFunc a_EnableTouchEvents__int, wxButtonExtEnableVisibleFocus__boolFunc a_EnableVisibleFocus__bool, wxButtonExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxButtonExtFitFunc a_Fit, wxButtonExtFitInsideFunc a_FitInside, wxButtonExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxButtonExtGetCharHeightFunc a_GetCharHeight, wxButtonExtGetCharWidthFunc a_GetCharWidth, wxButtonExtGetClassInfoFunc a_GetClassInfo, wxButtonExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxButtonExtGetClientSizeConstraint__intPintPFunc a_GetClientSizeConstraint__intPintP, wxButtonExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxButtonExtGetDPIFunc a_GetDPI, wxButtonExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxButtonExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxButtonExtGetDefaultBorderFunc a_GetDefaultBorder, wxButtonExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxButtonExtGetDropTargetFunc a_GetDropTarget, wxButtonExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxButtonExtGetEventHashTableFunc a_GetEventHashTable, wxButtonExtGetEventTableFunc a_GetEventTable, wxButtonExtGetHandleFunc a_GetHandle, wxButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin, wxButtonExtGetLabelFunc a_GetLabel, wxButtonExtGetLabelTextFunc a_GetLabelText, wxButtonExtGetLayoutDirectionFunc a_GetLayoutDirection, wxButtonExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxButtonExtGetMaxClientSizeFunc a_GetMaxClientSize, wxButtonExtGetMaxSizeFunc a_GetMaxSize, wxButtonExtGetMinClientSizeFunc a_GetMinClientSize, wxButtonExtGetMinSizeFunc a_GetMinSize, wxButtonExtGetNameFunc a_GetName, wxButtonExtGetNormalStateFunc a_GetNormalState, wxButtonExtGetPositionConstraint__intPintPFunc a_GetPositionConstraint__intPintP, wxButtonExtGetScrollPos__intFunc a_GetScrollPos__int, wxButtonExtGetScrollRange__intFunc a_GetScrollRange__int, wxButtonExtGetScrollThumb__intFunc a_GetScrollThumb__int, wxButtonExtGetSizeConstraint__intPintPFunc a_GetSizeConstraint__intPintP, wxButtonExtGetThemeEnabledFunc a_GetThemeEnabled, wxButtonExtGetTransparentFunc a_GetTransparent, wxButtonExtGetValidatorFunc a_GetValidator, wxButtonExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxButtonExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxButtonExtHasCaptureFunc a_HasCapture, wxButtonExtHasFocusFunc a_HasFocus, wxButtonExtHasMultiplePagesFunc a_HasMultiplePages, wxButtonExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxButtonExtHideWithEffect__wxShowEffectunsignedintFunc a_HideWithEffect__wxShowEffectunsignedint, wxButtonExtInformFirstDirection__intintintFunc a_InformFirstDirection__intintint, wxButtonExtInheritAttributesFunc a_InheritAttributes, wxButtonExtInitDialogFunc a_InitDialog, wxButtonExtIsClientAreaChild__wxWindowCPFunc a_IsClientAreaChild__wxWindowCP, wxButtonExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxButtonExtIsRetainedFunc a_IsRetained, wxButtonExtIsScrollbarAlwaysShown__intFunc a_IsScrollbarAlwaysShown__int, wxButtonExtIsShownFunc a_IsShown, wxButtonExtIsShownOnScreenFunc a_IsShownOnScreen, wxButtonExtIsThisEnabledFunc a_IsThisEnabled, wxButtonExtIsTopLevelFunc a_IsTopLevel, wxButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKindFunc a_IsTopNavigationDomain__wxWindowBaseNNavigationKind, wxButtonExtIsTransparentBackgroundSupported__wxStringPFunc a_IsTransparentBackgroundSupported__wxStringP, wxButtonExtLayoutFunc a_Layout, wxButtonExtLayoutPhase1__intPFunc a_LayoutPhase1__intP, wxButtonExtLayoutPhase2__intPFunc a_LayoutPhase2__intP, wxButtonExtLowerFunc a_Lower, wxButtonExtMoveConstraint__intintFunc a_MoveConstraint__intint, wxButtonExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxButtonExtOnInternalIdleFunc a_OnInternalIdle, wxButtonExtPrepareDC__wxDCRFunc a_PrepareDC__wxDCR, wxButtonExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxButtonExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxButtonExtRaiseFunc a_Raise, wxButtonExtRefresh__boolwxRectCPFunc a_Refresh__boolwxRectCP, wxButtonExtRegisterHotKey__intintintFunc a_RegisterHotKey__intintint, wxButtonExtRemoveChild__wxWindowBasePFunc a_RemoveChild__wxWindowBaseP, wxButtonExtReparent__wxWindowBasePFunc a_Reparent__wxWindowBaseP, wxButtonExtScrollLines__intFunc a_ScrollLines__int, wxButtonExtScrollPages__intFunc a_ScrollPages__int, wxButtonExtScrollWindow__intintwxRectCPFunc a_ScrollWindow__intintwxRectCP, wxButtonExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxButtonExtSendIdleEvents__wxIdleEventRFunc a_SendIdleEvents__wxIdleEventR, wxButtonExtSendSizeEvent__intFunc a_SendSizeEvent__int, wxButtonExtSetAcceleratorTable__wxAcceleratorTableCRFunc a_SetAcceleratorTable__wxAcceleratorTableCR, wxButtonExtSetBackgroundColour__wxColourCRFunc a_SetBackgroundColour__wxColourCR, wxButtonExtSetBackgroundStyle__wxBackgroundStyleFunc a_SetBackgroundStyle__wxBackgroundStyle, wxButtonExtSetCanFocus__boolFunc a_SetCanFocus__bool, wxButtonExtSetConstraintSizes__boolFunc a_SetConstraintSizes__bool, wxButtonExtSetCursor__wxCursorCRFunc a_SetCursor__wxCursorCR, wxButtonExtSetDefaultFunc a_SetDefault, wxButtonExtSetDoubleBuffered__boolFunc a_SetDoubleBuffered__bool, wxButtonExtSetDropTarget__wxDropTargetPFunc a_SetDropTarget__wxDropTargetP, wxButtonExtSetExtraStyle__longFunc a_SetExtraStyle__long, wxButtonExtSetFocusFunc a_SetFocus, wxButtonExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxButtonExtSetFont__wxFontCRFunc a_SetFont__wxFontCR, wxButtonExtSetForegroundColour__wxColourCRFunc a_SetForegroundColour__wxColourCR, wxButtonExtSetId__wxWindowIDFunc a_SetId__wxWindowID, wxButtonExtSetLabel__wxStringCRFunc a_SetLabel__wxStringCR, wxButtonExtSetLabelText__wxStringCRFunc a_SetLabelText__wxStringCR, wxButtonExtSetLayoutDirection__wxLayoutDirectionFunc a_SetLayoutDirection__wxLayoutDirection, wxButtonExtSetMaxClientSize__wxSizeCRFunc a_SetMaxClientSize__wxSizeCR, wxButtonExtSetMaxSize__wxSizeCRFunc a_SetMaxSize__wxSizeCR, wxButtonExtSetMinClientSize__wxSizeCRFunc a_SetMinClientSize__wxSizeCR, wxButtonExtSetMinSize__wxSizeCRFunc a_SetMinSize__wxSizeCR, wxButtonExtSetName__wxStringCRFunc a_SetName__wxStringCR, wxButtonExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxButtonExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxButtonExtSetScrollPos__intintboolFunc a_SetScrollPos__intintbool, wxButtonExtSetScrollbar__intintintintboolFunc a_SetScrollbar__intintintintbool, wxButtonExtSetSizeConstraint__intintintintFunc a_SetSizeConstraint__intintintint, wxButtonExtSetSizeHints__intintintintintintFunc a_SetSizeHints__intintintintintint, wxButtonExtSetThemeEnabled__boolFunc a_SetThemeEnabled__bool, wxButtonExtSetTransparent__wxByteFunc a_SetTransparent__wxByte, wxButtonExtSetValidator__wxValidatorCRFunc a_SetValidator__wxValidatorCR, wxButtonExtSetWindowStyleFlag__longFunc a_SetWindowStyleFlag__long, wxButtonExtShouldInheritColoursFunc a_ShouldInheritColours, wxButtonExtShow__boolFunc a_Show__bool, wxButtonExtShowWithEffect__wxShowEffectunsignedintFunc a_ShowWithEffect__wxShowEffectunsignedint, wxButtonExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxButtonExtTransferDataToWindowFunc a_TransferDataToWindow, wxButtonExtTriggerScrollEvent__wxEventTypeFunc a_TriggerScrollEvent__wxEventType, wxButtonExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxButtonExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxButtonExtUnregisterHotKey__intFunc a_UnregisterHotKey__int, wxButtonExtUpdateFunc a_Update, wxButtonExtUpdateWindowUI__longFunc a_UpdateWindowUI__long, wxButtonExtValidateFunc a_Validate, wxButtonExtWXAdjustFontToOwnPPI__wxFontRFunc a_WXAdjustFontToOwnPPI__wxFontR, wxButtonExtWXGetTextEntryFunc a_WXGetTextEntry, wxButtonExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxButtonExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxButtonExtWXReservedWindow1__voidPFunc a_WXReservedWindow1__voidP, wxButtonExtWXReservedWindow2__voidPFunc a_WXReservedWindow2__voidP, wxButtonExtWXReservedWindow3__voidPFunc a_WXReservedWindow3__voidP, wxButtonExtWXSetInitialFittingClientSize__intwxSizerPFunc a_WXSetInitialFittingClientSize__intwxSizerP, wxButtonExtWarpPointer__intintFunc a_WarpPointer__intint, wxButtonExtWindowToClientSize__wxSizeCRFunc a_WindowToClientSize__wxSizeCR): wxButton() {
    m_wxButtonExtAcceptsFocus = a_AcceptsFocus;
    m_wxButtonExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxButtonExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxButtonExtAddChild__wxWindowBaseP = a_AddChild__wxWindowBaseP;
    m_wxButtonExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxButtonExtAdjustForLayoutDirection__wxCoordwxCoordwxCoord = a_AdjustForLayoutDirection__wxCoordwxCoordwxCoord;
    m_wxButtonExtAdjustForParentClientOrigin__intRintRint = a_AdjustForParentClientOrigin__intRintRint;
    m_wxButtonExtAlwaysShowScrollbars__boolbool = a_AlwaysShowScrollbars__boolbool;
    m_wxButtonExtAssociateHandle__WXWidget = a_AssociateHandle__WXWidget;
    m_wxButtonExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxButtonExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxButtonExtCanBeFocused = a_CanBeFocused;
    m_wxButtonExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxButtonExtCanScroll__int = a_CanScroll__int;
    m_wxButtonExtCanSetTransparent = a_CanSetTransparent;
    m_wxButtonExtClearBackground = a_ClearBackground;
    m_wxButtonExtClientToWindowSize__wxSizeCR = a_ClientToWindowSize__wxSizeCR;
    m_wxButtonExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxButtonExtCommand__wxCommandEventR = a_Command__wxCommandEventR;
    m_wxButtonExtCreateRefData = a_CreateRefData;
    m_wxButtonExtDestroy = a_Destroy;
    m_wxButtonExtDissociateHandle = a_DissociateHandle;
    m_wxButtonExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxButtonExtDoCentre__int = a_DoCentre__int;
    m_wxButtonExtDoClientToScreen__intPintP = a_DoClientToScreen__intPintP;
    m_wxButtonExtDoEnable__bool = a_DoEnable__bool;
    m_wxButtonExtDoFreeze = a_DoFreeze;
    m_wxButtonExtDoGetAuthNeeded = a_DoGetAuthNeeded;
    m_wxButtonExtDoGetBestClientHeight__int = a_DoGetBestClientHeight__int;
    m_wxButtonExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxButtonExtDoGetBestClientWidth__int = a_DoGetBestClientWidth__int;
    m_wxButtonExtDoGetBestSize = a_DoGetBestSize;
    m_wxButtonExtDoGetBitmap__wxAnyButtonBaseNState = a_DoGetBitmap__wxAnyButtonBaseNState;
    m_wxButtonExtDoGetBitmapMargins = a_DoGetBitmapMargins;
    m_wxButtonExtDoGetClientData = a_DoGetClientData;
    m_wxButtonExtDoGetClientObject = a_DoGetClientObject;
    m_wxButtonExtDoGetClientSize__intPintP = a_DoGetClientSize__intPintP;
    m_wxButtonExtDoGetPosition__intPintP = a_DoGetPosition__intPintP;
    m_wxButtonExtDoGetScreenPosition__intPintP = a_DoGetScreenPosition__intPintP;
    m_wxButtonExtDoGetSize__intPintP = a_DoGetSize__intPintP;
    m_wxButtonExtDoGetSizeFromClientSize__wxSizeCR = a_DoGetSizeFromClientSize__wxSizeCR;
    m_wxButtonExtDoGetSizeFromTextSize__intint = a_DoGetSizeFromTextSize__intint;
    m_wxButtonExtDoGetTextExtent__wxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtent__wxStringCRintPintPintPintPwxFontCP;
    m_wxButtonExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxButtonExtDoHitTest__wxCoordwxCoord = a_DoHitTest__wxCoordwxCoord;
    m_wxButtonExtDoIsExposed__intintintint = a_DoIsExposed__intintintint;
    m_wxButtonExtDoIsExposed__intint = a_DoIsExposed__intint;
    m_wxButtonExtDoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrder__wxWindowPwxWindowBaseNWindowOrder;
    m_wxButtonExtDoMoveWindow__intintintint = a_DoMoveWindow__intintintint;
    m_wxButtonExtDoNavigateIn__int = a_DoNavigateIn__int;
    m_wxButtonExtDoPhase__int = a_DoPhase__int;
    m_wxButtonExtDoPopupMenu__wxMenuPintint = a_DoPopupMenu__wxMenuPintint;
    m_wxButtonExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxButtonExtDoScreenToClient__intPintP = a_DoScreenToClient__intPintP;
    m_wxButtonExtDoSetAuthNeeded__bool = a_DoSetAuthNeeded__bool;
    m_wxButtonExtDoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState = a_DoSetBitmap__wxBitmapBundleCRwxAnyButtonBaseNState;
    m_wxButtonExtDoSetBitmapMargins__intint = a_DoSetBitmapMargins__intint;
    m_wxButtonExtDoSetBitmapPosition__wxDirection = a_DoSetBitmapPosition__wxDirection;
    m_wxButtonExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxButtonExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxButtonExtDoSetClientSize__intint = a_DoSetClientSize__intint;
    m_wxButtonExtDoSetLabelMarkup__wxStringCR = a_DoSetLabelMarkup__wxStringCR;
    m_wxButtonExtDoSetSize__intintintintint = a_DoSetSize__intintintintint;
    m_wxButtonExtDoSetSizeHints__intintintintintint = a_DoSetSizeHints__intintintintintint;
    m_wxButtonExtDoSetToolTip__wxToolTipP = a_DoSetToolTip__wxToolTipP;
    m_wxButtonExtDoSetToolTipText__wxStringCR = a_DoSetToolTipText__wxStringCR;
    m_wxButtonExtDoSetVirtualSize__intint = a_DoSetVirtualSize__intint;
    m_wxButtonExtDoSetWindowVariant__wxWindowVariant = a_DoSetWindowVariant__wxWindowVariant;
    m_wxButtonExtDoThaw = a_DoThaw;
    m_wxButtonExtDoUpdateWindowUI__wxUpdateUIEventR = a_DoUpdateWindowUI__wxUpdateUIEventR;
    m_wxButtonExtDragAcceptFiles__bool = a_DragAcceptFiles__bool;
    m_wxButtonExtEnable__bool = a_Enable__bool;
    m_wxButtonExtEnableTouchEvents__int = a_EnableTouchEvents__int;
    m_wxButtonExtEnableVisibleFocus__bool = a_EnableVisibleFocus__bool;
    m_wxButtonExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxButtonExtFit = a_Fit;
    m_wxButtonExtFitInside = a_FitInside;
    m_wxButtonExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxButtonExtGetCharHeight = a_GetCharHeight;
    m_wxButtonExtGetCharWidth = a_GetCharWidth;
    m_wxButtonExtGetClassInfo = a_GetClassInfo;
    m_wxButtonExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxButtonExtGetClientSizeConstraint__intPintP = a_GetClientSizeConstraint__intPintP;
    m_wxButtonExtGetContentScaleFactor = a_GetContentScaleFactor;
    m_wxButtonExtGetDPI = a_GetDPI;
    m_wxButtonExtGetDPIScaleFactor = a_GetDPIScaleFactor;
    m_wxButtonExtGetDefaultAttributes = a_GetDefaultAttributes;
    m_wxButtonExtGetDefaultBorder = a_GetDefaultBorder;
    m_wxButtonExtGetDefaultBorderForControl = a_GetDefaultBorderForControl;
    m_wxButtonExtGetDropTarget = a_GetDropTarget;
    m_wxButtonExtGetEffectiveMinSize = a_GetEffectiveMinSize;
    m_wxButtonExtGetEventHashTable = a_GetEventHashTable;
    m_wxButtonExtGetEventTable = a_GetEventTable;
    m_wxButtonExtGetHandle = a_GetHandle;
    m_wxButtonExtGetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPoint__wxPointCRwxHelpEventNOrigin;
    m_wxButtonExtGetLabel = a_GetLabel;
    m_wxButtonExtGetLabelText = a_GetLabelText;
    m_wxButtonExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxButtonExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxButtonExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxButtonExtGetMaxSize = a_GetMaxSize;
    m_wxButtonExtGetMinClientSize = a_GetMinClientSize;
    m_wxButtonExtGetMinSize = a_GetMinSize;
    m_wxButtonExtGetName = a_GetName;
    m_wxButtonExtGetNormalState = a_GetNormalState;
    m_wxButtonExtGetPositionConstraint__intPintP = a_GetPositionConstraint__intPintP;
    m_wxButtonExtGetScrollPos__int = a_GetScrollPos__int;
    m_wxButtonExtGetScrollRange__int = a_GetScrollRange__int;
    m_wxButtonExtGetScrollThumb__int = a_GetScrollThumb__int;
    m_wxButtonExtGetSizeConstraint__intPintP = a_GetSizeConstraint__intPintP;
    m_wxButtonExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxButtonExtGetTransparent = a_GetTransparent;
    m_wxButtonExtGetValidator = a_GetValidator;
    m_wxButtonExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxButtonExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxButtonExtHasCapture = a_HasCapture;
    m_wxButtonExtHasFocus = a_HasFocus;
    m_wxButtonExtHasMultiplePages = a_HasMultiplePages;
    m_wxButtonExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxButtonExtHideWithEffect__wxShowEffectunsignedint = a_HideWithEffect__wxShowEffectunsignedint;
    m_wxButtonExtInformFirstDirection__intintint = a_InformFirstDirection__intintint;
    m_wxButtonExtInheritAttributes = a_InheritAttributes;
    m_wxButtonExtInitDialog = a_InitDialog;
    m_wxButtonExtIsClientAreaChild__wxWindowCP = a_IsClientAreaChild__wxWindowCP;
    m_wxButtonExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxButtonExtIsRetained = a_IsRetained;
    m_wxButtonExtIsScrollbarAlwaysShown__int = a_IsScrollbarAlwaysShown__int;
    m_wxButtonExtIsShown = a_IsShown;
    m_wxButtonExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxButtonExtIsThisEnabled = a_IsThisEnabled;
    m_wxButtonExtIsTopLevel = a_IsTopLevel;
    m_wxButtonExtIsTopNavigationDomain__wxWindowBaseNNavigationKind = a_IsTopNavigationDomain__wxWindowBaseNNavigationKind;
    m_wxButtonExtIsTransparentBackgroundSupported__wxStringP = a_IsTransparentBackgroundSupported__wxStringP;
    m_wxButtonExtLayout = a_Layout;
    m_wxButtonExtLayoutPhase1__intP = a_LayoutPhase1__intP;
    m_wxButtonExtLayoutPhase2__intP = a_LayoutPhase2__intP;
    m_wxButtonExtLower = a_Lower;
    m_wxButtonExtMoveConstraint__intint = a_MoveConstraint__intint;
    m_wxButtonExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxButtonExtOnInternalIdle = a_OnInternalIdle;
    m_wxButtonExtPrepareDC__wxDCR = a_PrepareDC__wxDCR;
    m_wxButtonExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxButtonExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxButtonExtRaise = a_Raise;
    m_wxButtonExtRefresh__boolwxRectCP = a_Refresh__boolwxRectCP;
    m_wxButtonExtRegisterHotKey__intintint = a_RegisterHotKey__intintint;
    m_wxButtonExtRemoveChild__wxWindowBaseP = a_RemoveChild__wxWindowBaseP;
    m_wxButtonExtReparent__wxWindowBaseP = a_Reparent__wxWindowBaseP;
    m_wxButtonExtScrollLines__int = a_ScrollLines__int;
    m_wxButtonExtScrollPages__int = a_ScrollPages__int;
    m_wxButtonExtScrollWindow__intintwxRectCP = a_ScrollWindow__intintwxRectCP;
    m_wxButtonExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxButtonExtSendIdleEvents__wxIdleEventR = a_SendIdleEvents__wxIdleEventR;
    m_wxButtonExtSendSizeEvent__int = a_SendSizeEvent__int;
    m_wxButtonExtSetAcceleratorTable__wxAcceleratorTableCR = a_SetAcceleratorTable__wxAcceleratorTableCR;
    m_wxButtonExtSetBackgroundColour__wxColourCR = a_SetBackgroundColour__wxColourCR;
    m_wxButtonExtSetBackgroundStyle__wxBackgroundStyle = a_SetBackgroundStyle__wxBackgroundStyle;
    m_wxButtonExtSetCanFocus__bool = a_SetCanFocus__bool;
    m_wxButtonExtSetConstraintSizes__bool = a_SetConstraintSizes__bool;
    m_wxButtonExtSetCursor__wxCursorCR = a_SetCursor__wxCursorCR;
    m_wxButtonExtSetDefault = a_SetDefault;
    m_wxButtonExtSetDoubleBuffered__bool = a_SetDoubleBuffered__bool;
    m_wxButtonExtSetDropTarget__wxDropTargetP = a_SetDropTarget__wxDropTargetP;
    m_wxButtonExtSetExtraStyle__long = a_SetExtraStyle__long;
    m_wxButtonExtSetFocus = a_SetFocus;
    m_wxButtonExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxButtonExtSetFont__wxFontCR = a_SetFont__wxFontCR;
    m_wxButtonExtSetForegroundColour__wxColourCR = a_SetForegroundColour__wxColourCR;
    m_wxButtonExtSetId__wxWindowID = a_SetId__wxWindowID;
    m_wxButtonExtSetLabel__wxStringCR = a_SetLabel__wxStringCR;
    m_wxButtonExtSetLabelText__wxStringCR = a_SetLabelText__wxStringCR;
    m_wxButtonExtSetLayoutDirection__wxLayoutDirection = a_SetLayoutDirection__wxLayoutDirection;
    m_wxButtonExtSetMaxClientSize__wxSizeCR = a_SetMaxClientSize__wxSizeCR;
    m_wxButtonExtSetMaxSize__wxSizeCR = a_SetMaxSize__wxSizeCR;
    m_wxButtonExtSetMinClientSize__wxSizeCR = a_SetMinClientSize__wxSizeCR;
    m_wxButtonExtSetMinSize__wxSizeCR = a_SetMinSize__wxSizeCR;
    m_wxButtonExtSetName__wxStringCR = a_SetName__wxStringCR;
    m_wxButtonExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxButtonExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxButtonExtSetScrollPos__intintbool = a_SetScrollPos__intintbool;
    m_wxButtonExtSetScrollbar__intintintintbool = a_SetScrollbar__intintintintbool;
    m_wxButtonExtSetSizeConstraint__intintintint = a_SetSizeConstraint__intintintint;
    m_wxButtonExtSetSizeHints__intintintintintint = a_SetSizeHints__intintintintintint;
    m_wxButtonExtSetThemeEnabled__bool = a_SetThemeEnabled__bool;
    m_wxButtonExtSetTransparent__wxByte = a_SetTransparent__wxByte;
    m_wxButtonExtSetValidator__wxValidatorCR = a_SetValidator__wxValidatorCR;
    m_wxButtonExtSetWindowStyleFlag__long = a_SetWindowStyleFlag__long;
    m_wxButtonExtShouldInheritColours = a_ShouldInheritColours;
    m_wxButtonExtShow__bool = a_Show__bool;
    m_wxButtonExtShowWithEffect__wxShowEffectunsignedint = a_ShowWithEffect__wxShowEffectunsignedint;
    m_wxButtonExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxButtonExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxButtonExtTriggerScrollEvent__wxEventType = a_TriggerScrollEvent__wxEventType;
    m_wxButtonExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxButtonExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxButtonExtUnregisterHotKey__int = a_UnregisterHotKey__int;
    m_wxButtonExtUpdate = a_Update;
    m_wxButtonExtUpdateWindowUI__long = a_UpdateWindowUI__long;
    m_wxButtonExtValidate = a_Validate;
    m_wxButtonExtWXAdjustFontToOwnPPI__wxFontR = a_WXAdjustFontToOwnPPI__wxFontR;
    m_wxButtonExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxButtonExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxButtonExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxButtonExtWXReservedWindow1__voidP = a_WXReservedWindow1__voidP;
    m_wxButtonExtWXReservedWindow2__voidP = a_WXReservedWindow2__voidP;
    m_wxButtonExtWXReservedWindow3__voidP = a_WXReservedWindow3__voidP;
    m_wxButtonExtWXSetInitialFittingClientSize__intwxSizerP = a_WXSetInitialFittingClientSize__intwxSizerP;
    m_wxButtonExtWarpPointer__intint = a_WarpPointer__intint;
    m_wxButtonExtWindowToClientSize__wxSizeCR = a_WindowToClientSize__wxSizeCR;
  }
};



#endif
