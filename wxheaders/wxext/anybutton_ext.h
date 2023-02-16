#ifndef _WX_ANYBUTTON_H_EXT_
#define _WX_ANYBUTTON_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxAnyButtonBaseExt;
typedef bool (*wxAnyButtonBaseExtAcceptsFocusFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtAcceptsFocusFromKeyboardFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtAcceptsFocusRecursivelyFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef void (*wxAnyButtonBaseExtAddChildwxWindowBasePFunc)(const wxAnyButtonBaseExt* self, wxWindowBase* child);
typedef void (*wxAnyButtonBaseExtAddPendingEventwxEventCRFunc)(const wxAnyButtonBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxAnyButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxAnyButtonBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxAnyButtonBaseExtAdjustForParentClientOriginintRintRintFunc)(const wxAnyButtonBaseExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxAnyButtonBaseExtAlwaysShowScrollbarsboolboolFunc)(const wxAnyButtonBaseExt* self, bool horz, bool vert);
typedef void (*wxAnyButtonBaseExtAssociateHandleWXWidgetFunc)(const wxAnyButtonBaseExt* self, WXWidget param0);
typedef bool (*wxAnyButtonBaseExtBeginRepositioningChildrenFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtCanApplyThemeBorderFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtCanBeFocusedFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtCanBeOutsideClientAreaFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtCanScrollintFunc)(const wxAnyButtonBaseExt* self, int orient, bool res);
typedef bool (*wxAnyButtonBaseExtCanSetTransparentFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef void (*wxAnyButtonBaseExtClearBackgroundFunc)(const wxAnyButtonBaseExt* self);
typedef wxSize (*wxAnyButtonBaseExtClientToWindowSizewxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxAnyButtonBaseExtCloneRefDatawxObjectRefDataCPFunc)(const wxAnyButtonBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef void (*wxAnyButtonBaseExtCommandwxCommandEventRFunc)(const wxAnyButtonBaseExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxAnyButtonBaseExtCreateRefDataFunc)(const wxAnyButtonBaseExt* self, wxObjectRefData* res);
typedef bool (*wxAnyButtonBaseExtDestroyFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef void (*wxAnyButtonBaseExtDissociateHandleFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtDoCaptureMouseFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtDoCentreintFunc)(const wxAnyButtonBaseExt* self, int dir);
typedef void (*wxAnyButtonBaseExtDoClientToScreenintPintPFunc)(const wxAnyButtonBaseExt* self, int* x, int* y);
typedef void (*wxAnyButtonBaseExtDoEnableboolFunc)(const wxAnyButtonBaseExt* self, bool enable);
typedef void (*wxAnyButtonBaseExtDoFreezeFunc)(const wxAnyButtonBaseExt* self);
typedef bool (*wxAnyButtonBaseExtDoGetAuthNeededFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef int (*wxAnyButtonBaseExtDoGetBestClientHeightintFunc)(const wxAnyButtonBaseExt* self, int param0, int res);
typedef wxSize (*wxAnyButtonBaseExtDoGetBestClientSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef int (*wxAnyButtonBaseExtDoGetBestClientWidthintFunc)(const wxAnyButtonBaseExt* self, int param0, int res);
typedef wxSize (*wxAnyButtonBaseExtDoGetBestSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef wxBitmap (*wxAnyButtonBaseExtDoGetBitmapwxAnyButtonBaseNStateFunc)(const wxAnyButtonBaseExt* self, wxAnyButtonBase::State param0, wxBitmap res);
typedef wxSize (*wxAnyButtonBaseExtDoGetBitmapMarginsFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef void* (*wxAnyButtonBaseExtDoGetClientDataFunc)(const wxAnyButtonBaseExt* self, void* res);
typedef wxClientData* (*wxAnyButtonBaseExtDoGetClientObjectFunc)(const wxAnyButtonBaseExt* self, wxClientData* res);
typedef void (*wxAnyButtonBaseExtDoGetClientSizeintPintPFunc)(const wxAnyButtonBaseExt* self, int* width, int* height);
typedef void (*wxAnyButtonBaseExtDoGetPositionintPintPFunc)(const wxAnyButtonBaseExt* self, int* x, int* y);
typedef void (*wxAnyButtonBaseExtDoGetScreenPositionintPintPFunc)(const wxAnyButtonBaseExt* self, int* x, int* y);
typedef void (*wxAnyButtonBaseExtDoGetSizeintPintPFunc)(const wxAnyButtonBaseExt* self, int* width, int* height);
typedef wxSize (*wxAnyButtonBaseExtDoGetSizeFromClientSizewxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& size, wxSize res);
typedef wxSize (*wxAnyButtonBaseExtDoGetSizeFromTextSizeintintFunc)(const wxAnyButtonBaseExt* self, int xlen, int ylen, wxSize res);
typedef void (*wxAnyButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxAnyButtonBaseExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxAnyButtonBaseExtDoGetVirtualSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef wxHitTest (*wxAnyButtonBaseExtDoHitTestwxCoordwxCoordFunc)(const wxAnyButtonBaseExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxAnyButtonBaseExtDoIsExposedintintintintFunc)(const wxAnyButtonBaseExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxAnyButtonBaseExtDoIsExposedintintFunc)(const wxAnyButtonBaseExt* self, int x, int y, bool res);
typedef void (*wxAnyButtonBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc)(const wxAnyButtonBaseExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxAnyButtonBaseExtDoMoveWindowintintintintFunc)(const wxAnyButtonBaseExt* self, int x, int y, int width, int height);
typedef bool (*wxAnyButtonBaseExtDoNavigateInintFunc)(const wxAnyButtonBaseExt* self, int flags, bool res);
typedef bool (*wxAnyButtonBaseExtDoPhaseintFunc)(const wxAnyButtonBaseExt* self, int phase, bool res);
typedef bool (*wxAnyButtonBaseExtDoPopupMenuwxMenuPintintFunc)(const wxAnyButtonBaseExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxAnyButtonBaseExtDoReleaseMouseFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtDoScreenToClientintPintPFunc)(const wxAnyButtonBaseExt* self, int* x, int* y);
typedef void (*wxAnyButtonBaseExtDoSetAuthNeededboolFunc)(const wxAnyButtonBaseExt* self, bool param0);
typedef void (*wxAnyButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc)(const wxAnyButtonBaseExt* self, wxBitmapBundle const& param0, wxAnyButtonBase::State param1);
typedef void (*wxAnyButtonBaseExtDoSetBitmapMarginswxCoordwxCoordFunc)(const wxAnyButtonBaseExt* self, wxCoord param0, wxCoord param1);
typedef void (*wxAnyButtonBaseExtDoSetBitmapPositionwxDirectionFunc)(const wxAnyButtonBaseExt* self, wxDirection param0);
typedef void (*wxAnyButtonBaseExtDoSetClientDatavoidPFunc)(const wxAnyButtonBaseExt* self, void* data);
typedef void (*wxAnyButtonBaseExtDoSetClientObjectwxClientDataPFunc)(const wxAnyButtonBaseExt* self, wxClientData* data);
typedef void (*wxAnyButtonBaseExtDoSetClientSizeintintFunc)(const wxAnyButtonBaseExt* self, int width, int height);
typedef bool (*wxAnyButtonBaseExtDoSetLabelMarkupwxStringCRFunc)(const wxAnyButtonBaseExt* self, wxString const& markup, bool res);
typedef void (*wxAnyButtonBaseExtDoSetSizeintintintintintFunc)(const wxAnyButtonBaseExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxAnyButtonBaseExtDoSetSizeHintsintintintintintintFunc)(const wxAnyButtonBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxAnyButtonBaseExtDoSetToolTipwxToolTipPFunc)(const wxAnyButtonBaseExt* self, wxToolTip* tip);
typedef void (*wxAnyButtonBaseExtDoSetToolTipTextwxStringCRFunc)(const wxAnyButtonBaseExt* self, wxString const& tip);
typedef void (*wxAnyButtonBaseExtDoSetVirtualSizeintintFunc)(const wxAnyButtonBaseExt* self, int x, int y);
typedef void (*wxAnyButtonBaseExtDoSetWindowVariantwxWindowVariantFunc)(const wxAnyButtonBaseExt* self, wxWindowVariant variant);
typedef void (*wxAnyButtonBaseExtDoThawFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxAnyButtonBaseExt* self, wxUpdateUIEvent& event);
typedef void (*wxAnyButtonBaseExtDragAcceptFilesboolFunc)(const wxAnyButtonBaseExt* self, bool accept);
typedef bool (*wxAnyButtonBaseExtEnableboolFunc)(const wxAnyButtonBaseExt* self, bool enable, bool res);
typedef bool (*wxAnyButtonBaseExtEnableTouchEventsintFunc)(const wxAnyButtonBaseExt* self, int eventsMask, bool res);
typedef void (*wxAnyButtonBaseExtEnableVisibleFocusboolFunc)(const wxAnyButtonBaseExt* self, bool enabled);
typedef void (*wxAnyButtonBaseExtEndRepositioningChildrenFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtFitFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtFitInsideFunc)(const wxAnyButtonBaseExt* self);
typedef wxSize (*wxAnyButtonBaseExtGetBestVirtualSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef int (*wxAnyButtonBaseExtGetCharHeightFunc)(const wxAnyButtonBaseExt* self, int res);
typedef int (*wxAnyButtonBaseExtGetCharWidthFunc)(const wxAnyButtonBaseExt* self, int res);
typedef wxClassInfo* (*wxAnyButtonBaseExtGetClassInfoFunc)(const wxAnyButtonBaseExt* self, wxClassInfo* res);
typedef wxPoint (*wxAnyButtonBaseExtGetClientAreaOriginFunc)(const wxAnyButtonBaseExt* self, wxPoint res);
typedef void (*wxAnyButtonBaseExtGetClientSizeConstraintintPintPFunc)(const wxAnyButtonBaseExt* self, int* w, int* h);
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
typedef wxString (*wxAnyButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc)(const wxAnyButtonBaseExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
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
typedef void (*wxAnyButtonBaseExtGetPositionConstraintintPintPFunc)(const wxAnyButtonBaseExt* self, int* x, int* y);
typedef int (*wxAnyButtonBaseExtGetScrollPosintFunc)(const wxAnyButtonBaseExt* self, int orient, int res);
typedef int (*wxAnyButtonBaseExtGetScrollRangeintFunc)(const wxAnyButtonBaseExt* self, int orient, int res);
typedef int (*wxAnyButtonBaseExtGetScrollThumbintFunc)(const wxAnyButtonBaseExt* self, int orient, int res);
typedef void (*wxAnyButtonBaseExtGetSizeConstraintintPintPFunc)(const wxAnyButtonBaseExt* self, int* w, int* h);
typedef bool (*wxAnyButtonBaseExtGetThemeEnabledFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef wxByte (*wxAnyButtonBaseExtGetTransparentFunc)(const wxAnyButtonBaseExt* self, wxByte res);
typedef wxValidator* (*wxAnyButtonBaseExtGetValidatorFunc)(const wxAnyButtonBaseExt* self, wxValidator* res);
typedef wxSize (*wxAnyButtonBaseExtGetWindowBorderSizeFunc)(const wxAnyButtonBaseExt* self, wxSize res);
typedef long (*wxAnyButtonBaseExtGetWindowStyleFlagFunc)(const wxAnyButtonBaseExt* self, long res);
typedef bool (*wxAnyButtonBaseExtHasCaptureFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtHasFocusFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtHasMultiplePagesFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtHasTransparentBackgroundFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtHideWithEffectwxShowEffectunsignedintFunc)(const wxAnyButtonBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxAnyButtonBaseExtInformFirstDirectionintintintFunc)(const wxAnyButtonBaseExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxAnyButtonBaseExtInheritAttributesFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtInitDialogFunc)(const wxAnyButtonBaseExt* self);
typedef bool (*wxAnyButtonBaseExtIsClientAreaChildwxWindowCPFunc)(const wxAnyButtonBaseExt* self, wxWindow const* param0, bool res);
typedef bool (*wxAnyButtonBaseExtIsDoubleBufferedFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsRetainedFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsScrollbarAlwaysShownintFunc)(const wxAnyButtonBaseExt* self, int orient, bool res);
typedef bool (*wxAnyButtonBaseExtIsShownFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsShownOnScreenFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsThisEnabledFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsTopLevelFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxAnyButtonBaseExt* self, wxWindowBase::NavigationKind param0, bool res);
typedef bool (*wxAnyButtonBaseExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxAnyButtonBaseExt* self, wxString* reason, bool res);
typedef bool (*wxAnyButtonBaseExtLayoutFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtLayoutPhase1intPFunc)(const wxAnyButtonBaseExt* self, int* noChanges, bool res);
typedef bool (*wxAnyButtonBaseExtLayoutPhase2intPFunc)(const wxAnyButtonBaseExt* self, int* noChanges, bool res);
typedef void (*wxAnyButtonBaseExtLowerFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtMoveConstraintintintFunc)(const wxAnyButtonBaseExt* self, int x, int y);
typedef bool (*wxAnyButtonBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxAnyButtonBaseExt* self, wxDynamicEventTableEntry& param0, bool res);
typedef void (*wxAnyButtonBaseExtOnInternalIdleFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtPrepareDCwxDCRFunc)(const wxAnyButtonBaseExt* self, wxDC& param0);
typedef bool (*wxAnyButtonBaseExtProcessEventwxEventRFunc)(const wxAnyButtonBaseExt* self, wxEvent& event, bool res);
typedef void (*wxAnyButtonBaseExtQueueEventwxEventPFunc)(const wxAnyButtonBaseExt* self, wxEvent* event);
typedef void (*wxAnyButtonBaseExtRaiseFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtRefreshboolwxRectCPFunc)(const wxAnyButtonBaseExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxAnyButtonBaseExtRegisterHotKeyintintintFunc)(const wxAnyButtonBaseExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxAnyButtonBaseExtRemoveChildwxWindowBasePFunc)(const wxAnyButtonBaseExt* self, wxWindowBase* child);
typedef bool (*wxAnyButtonBaseExtReparentwxWindowBasePFunc)(const wxAnyButtonBaseExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxAnyButtonBaseExtScrollLinesintFunc)(const wxAnyButtonBaseExt* self, int param0, bool res);
typedef bool (*wxAnyButtonBaseExtScrollPagesintFunc)(const wxAnyButtonBaseExt* self, int param0, bool res);
typedef void (*wxAnyButtonBaseExtScrollWindowintintwxRectCPFunc)(const wxAnyButtonBaseExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxAnyButtonBaseExtSearchEventTablewxEventTableRwxEventRFunc)(const wxAnyButtonBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxAnyButtonBaseExtSendIdleEventswxIdleEventRFunc)(const wxAnyButtonBaseExt* self, wxIdleEvent& event, bool res);
typedef void (*wxAnyButtonBaseExtSendSizeEventintFunc)(const wxAnyButtonBaseExt* self, int flags);
typedef void (*wxAnyButtonBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc)(const wxAnyButtonBaseExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxAnyButtonBaseExtSetBackgroundColourwxColourCRFunc)(const wxAnyButtonBaseExt* self, wxColour const& colour, bool res);
typedef bool (*wxAnyButtonBaseExtSetBackgroundStylewxBackgroundStyleFunc)(const wxAnyButtonBaseExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxAnyButtonBaseExtSetCanFocusboolFunc)(const wxAnyButtonBaseExt* self, bool param0);
typedef void (*wxAnyButtonBaseExtSetConstraintSizesboolFunc)(const wxAnyButtonBaseExt* self, bool recurse);
typedef bool (*wxAnyButtonBaseExtSetCursorwxCursorCRFunc)(const wxAnyButtonBaseExt* self, wxCursor const& cursor, bool res);
typedef void (*wxAnyButtonBaseExtSetDoubleBufferedboolFunc)(const wxAnyButtonBaseExt* self, bool param0);
typedef void (*wxAnyButtonBaseExtSetDropTargetwxDropTargetPFunc)(const wxAnyButtonBaseExt* self, wxDropTarget* dropTarget);
typedef void (*wxAnyButtonBaseExtSetExtraStylelongFunc)(const wxAnyButtonBaseExt* self, long exStyle);
typedef void (*wxAnyButtonBaseExtSetFocusFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtSetFocusFromKbdFunc)(const wxAnyButtonBaseExt* self);
typedef bool (*wxAnyButtonBaseExtSetFontwxFontCRFunc)(const wxAnyButtonBaseExt* self, wxFont const& font, bool res);
typedef bool (*wxAnyButtonBaseExtSetForegroundColourwxColourCRFunc)(const wxAnyButtonBaseExt* self, wxColour const& colour, bool res);
typedef void (*wxAnyButtonBaseExtSetIdwxWindowIDFunc)(const wxAnyButtonBaseExt* self, wxWindowID winid);
typedef void (*wxAnyButtonBaseExtSetLabelwxStringCRFunc)(const wxAnyButtonBaseExt* self, wxString const& label);
typedef void (*wxAnyButtonBaseExtSetLabelTextwxStringCRFunc)(const wxAnyButtonBaseExt* self, wxString const& text);
typedef void (*wxAnyButtonBaseExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxAnyButtonBaseExt* self, wxLayoutDirection param0);
typedef void (*wxAnyButtonBaseExtSetMaxClientSizewxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& size);
typedef void (*wxAnyButtonBaseExtSetMaxSizewxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& maxSize);
typedef void (*wxAnyButtonBaseExtSetMinClientSizewxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& size);
typedef void (*wxAnyButtonBaseExtSetMinSizewxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& minSize);
typedef void (*wxAnyButtonBaseExtSetNamewxStringCRFunc)(const wxAnyButtonBaseExt* self, wxString const& name);
typedef void (*wxAnyButtonBaseExtSetNextHandlerwxEvtHandlerPFunc)(const wxAnyButtonBaseExt* self, wxEvtHandler* handler);
typedef void (*wxAnyButtonBaseExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxAnyButtonBaseExt* self, wxEvtHandler* handler);
typedef void (*wxAnyButtonBaseExtSetScrollPosintintboolFunc)(const wxAnyButtonBaseExt* self, int orient, int pos, bool refresh);
typedef void (*wxAnyButtonBaseExtSetScrollbarintintintintboolFunc)(const wxAnyButtonBaseExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxAnyButtonBaseExtSetSizeConstraintintintintintFunc)(const wxAnyButtonBaseExt* self, int x, int y, int w, int h);
typedef void (*wxAnyButtonBaseExtSetSizeHintsintintintintintintFunc)(const wxAnyButtonBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxAnyButtonBaseExtSetThemeEnabledboolFunc)(const wxAnyButtonBaseExt* self, bool enableTheme);
typedef bool (*wxAnyButtonBaseExtSetTransparentwxByteFunc)(const wxAnyButtonBaseExt* self, wxByte alpha, bool res);
typedef void (*wxAnyButtonBaseExtSetValidatorwxValidatorCRFunc)(const wxAnyButtonBaseExt* self, wxValidator const& validator);
typedef void (*wxAnyButtonBaseExtSetWindowStyleFlaglongFunc)(const wxAnyButtonBaseExt* self, long style);
typedef bool (*wxAnyButtonBaseExtShouldInheritColoursFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtShowboolFunc)(const wxAnyButtonBaseExt* self, bool show, bool res);
typedef bool (*wxAnyButtonBaseExtShowWithEffectwxShowEffectunsignedintFunc)(const wxAnyButtonBaseExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxAnyButtonBaseExtTransferDataFromWindowFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef bool (*wxAnyButtonBaseExtTransferDataToWindowFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef void (*wxAnyButtonBaseExtTriggerScrollEventwxEventTypeFunc)(const wxAnyButtonBaseExt* self, wxEventType scrollEvent);
typedef bool (*wxAnyButtonBaseExtTryAfterwxEventRFunc)(const wxAnyButtonBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAnyButtonBaseExtTryBeforewxEventRFunc)(const wxAnyButtonBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAnyButtonBaseExtUnregisterHotKeyintFunc)(const wxAnyButtonBaseExt* self, int hotkeyId, bool res);
typedef void (*wxAnyButtonBaseExtUpdateFunc)(const wxAnyButtonBaseExt* self);
typedef void (*wxAnyButtonBaseExtUpdateWindowUIlongFunc)(const wxAnyButtonBaseExt* self, long flags);
typedef bool (*wxAnyButtonBaseExtValidateFunc)(const wxAnyButtonBaseExt* self, bool res);
typedef void (*wxAnyButtonBaseExtWXAdjustFontToOwnPPIwxFontRFunc)(const wxAnyButtonBaseExt* self, wxFont& param0);
typedef wxTextEntry const* (*wxAnyButtonBaseExtWXGetTextEntryFunc)(const wxAnyButtonBaseExt* self, wxTextEntry const* res);
typedef void* (*wxAnyButtonBaseExtWXReservedEvtHandler1voidPFunc)(const wxAnyButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonBaseExtWXReservedEvtHandler2voidPFunc)(const wxAnyButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonBaseExtWXReservedWindow1voidPFunc)(const wxAnyButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonBaseExtWXReservedWindow2voidPFunc)(const wxAnyButtonBaseExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonBaseExtWXReservedWindow3voidPFunc)(const wxAnyButtonBaseExt* self, void* param0, void* res);
typedef void (*wxAnyButtonBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc)(const wxAnyButtonBaseExt* self, int flags, wxSizer* sizer);
typedef void (*wxAnyButtonBaseExtWarpPointerintintFunc)(const wxAnyButtonBaseExt* self, int x, int y);
typedef wxSize (*wxAnyButtonBaseExtWindowToClientSizewxSizeCRFunc)(const wxAnyButtonBaseExt* self, wxSize const& size, wxSize res);
class wxAnyButtonExt;
typedef bool (*wxAnyButtonExtAcceptsFocusFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtAcceptsFocusFromKeyboardFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtAcceptsFocusRecursivelyFunc)(const wxAnyButtonExt* self, bool res);
typedef void (*wxAnyButtonExtAddChildwxWindowBasePFunc)(const wxAnyButtonExt* self, wxWindowBase* child);
typedef void (*wxAnyButtonExtAddPendingEventwxEventCRFunc)(const wxAnyButtonExt* self, wxEvent const& event);
typedef wxCoord (*wxAnyButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxAnyButtonExt* self, wxCoord x, wxCoord width, wxCoord widthTotal, wxCoord res);
typedef void (*wxAnyButtonExtAdjustForParentClientOriginintRintRintFunc)(const wxAnyButtonExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxAnyButtonExtAlwaysShowScrollbarsboolboolFunc)(const wxAnyButtonExt* self, bool horz, bool vert);
typedef void (*wxAnyButtonExtAssociateHandleWXWidgetFunc)(const wxAnyButtonExt* self, WXWidget param0);
typedef bool (*wxAnyButtonExtBeginRepositioningChildrenFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtCanApplyThemeBorderFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtCanBeFocusedFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtCanBeOutsideClientAreaFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtCanScrollintFunc)(const wxAnyButtonExt* self, int orient, bool res);
typedef bool (*wxAnyButtonExtCanSetTransparentFunc)(const wxAnyButtonExt* self, bool res);
typedef void (*wxAnyButtonExtClearBackgroundFunc)(const wxAnyButtonExt* self);
typedef wxSize (*wxAnyButtonExtClientToWindowSizewxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& size, wxSize res);
typedef wxObjectRefData* (*wxAnyButtonExtCloneRefDatawxObjectRefDataCPFunc)(const wxAnyButtonExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef void (*wxAnyButtonExtCommandwxCommandEventRFunc)(const wxAnyButtonExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxAnyButtonExtCreateRefDataFunc)(const wxAnyButtonExt* self, wxObjectRefData* res);
typedef bool (*wxAnyButtonExtDestroyFunc)(const wxAnyButtonExt* self, bool res);
typedef void (*wxAnyButtonExtDissociateHandleFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtDoCaptureMouseFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtDoCentreintFunc)(const wxAnyButtonExt* self, int dir);
typedef void (*wxAnyButtonExtDoClientToScreenintPintPFunc)(const wxAnyButtonExt* self, int* x, int* y);
typedef void (*wxAnyButtonExtDoEnableboolFunc)(const wxAnyButtonExt* self, bool enable);
typedef void (*wxAnyButtonExtDoFreezeFunc)(const wxAnyButtonExt* self);
typedef bool (*wxAnyButtonExtDoGetAuthNeededFunc)(const wxAnyButtonExt* self, bool res);
typedef int (*wxAnyButtonExtDoGetBestClientHeightintFunc)(const wxAnyButtonExt* self, int param0, int res);
typedef wxSize (*wxAnyButtonExtDoGetBestClientSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef int (*wxAnyButtonExtDoGetBestClientWidthintFunc)(const wxAnyButtonExt* self, int param0, int res);
typedef wxSize (*wxAnyButtonExtDoGetBestSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef wxBitmap (*wxAnyButtonExtDoGetBitmapwxAnyButtonBaseNStateFunc)(const wxAnyButtonExt* self, wxAnyButtonBase::State param0, wxBitmap res);
typedef wxSize (*wxAnyButtonExtDoGetBitmapMarginsFunc)(const wxAnyButtonExt* self, wxSize res);
typedef void* (*wxAnyButtonExtDoGetClientDataFunc)(const wxAnyButtonExt* self, void* res);
typedef wxClientData* (*wxAnyButtonExtDoGetClientObjectFunc)(const wxAnyButtonExt* self, wxClientData* res);
typedef void (*wxAnyButtonExtDoGetClientSizeintPintPFunc)(const wxAnyButtonExt* self, int* width, int* height);
typedef void (*wxAnyButtonExtDoGetPositionintPintPFunc)(const wxAnyButtonExt* self, int* x, int* y);
typedef void (*wxAnyButtonExtDoGetScreenPositionintPintPFunc)(const wxAnyButtonExt* self, int* x, int* y);
typedef void (*wxAnyButtonExtDoGetSizeintPintPFunc)(const wxAnyButtonExt* self, int* width, int* height);
typedef wxSize (*wxAnyButtonExtDoGetSizeFromClientSizewxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& size, wxSize res);
typedef wxSize (*wxAnyButtonExtDoGetSizeFromTextSizeintintFunc)(const wxAnyButtonExt* self, int xlen, int ylen, wxSize res);
typedef void (*wxAnyButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxAnyButtonExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* theFont);
typedef wxSize (*wxAnyButtonExtDoGetVirtualSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef wxHitTest (*wxAnyButtonExtDoHitTestwxCoordwxCoordFunc)(const wxAnyButtonExt* self, wxCoord x, wxCoord y, wxHitTest res);
typedef bool (*wxAnyButtonExtDoIsExposedintintintintFunc)(const wxAnyButtonExt* self, int x, int y, int w, int h, bool res);
typedef bool (*wxAnyButtonExtDoIsExposedintintFunc)(const wxAnyButtonExt* self, int x, int y, bool res);
typedef void (*wxAnyButtonExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc)(const wxAnyButtonExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxAnyButtonExtDoMoveWindowintintintintFunc)(const wxAnyButtonExt* self, int x, int y, int width, int height);
typedef bool (*wxAnyButtonExtDoNavigateInintFunc)(const wxAnyButtonExt* self, int flags, bool res);
typedef bool (*wxAnyButtonExtDoPhaseintFunc)(const wxAnyButtonExt* self, int phase, bool res);
typedef bool (*wxAnyButtonExtDoPopupMenuwxMenuPintintFunc)(const wxAnyButtonExt* self, wxMenu* menu, int x, int y, bool res);
typedef void (*wxAnyButtonExtDoReleaseMouseFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtDoScreenToClientintPintPFunc)(const wxAnyButtonExt* self, int* x, int* y);
typedef void (*wxAnyButtonExtDoSetAuthNeededboolFunc)(const wxAnyButtonExt* self, bool param0);
typedef void (*wxAnyButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc)(const wxAnyButtonExt* self, wxBitmapBundle const& param0, wxAnyButtonBase::State param1);
typedef void (*wxAnyButtonExtDoSetBitmapMarginswxCoordwxCoordFunc)(const wxAnyButtonExt* self, wxCoord param0, wxCoord param1);
typedef void (*wxAnyButtonExtDoSetBitmapPositionwxDirectionFunc)(const wxAnyButtonExt* self, wxDirection param0);
typedef void (*wxAnyButtonExtDoSetClientDatavoidPFunc)(const wxAnyButtonExt* self, void* data);
typedef void (*wxAnyButtonExtDoSetClientObjectwxClientDataPFunc)(const wxAnyButtonExt* self, wxClientData* data);
typedef void (*wxAnyButtonExtDoSetClientSizeintintFunc)(const wxAnyButtonExt* self, int width, int height);
typedef bool (*wxAnyButtonExtDoSetLabelMarkupwxStringCRFunc)(const wxAnyButtonExt* self, wxString const& markup, bool res);
typedef void (*wxAnyButtonExtDoSetSizeintintintintintFunc)(const wxAnyButtonExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxAnyButtonExtDoSetSizeHintsintintintintintintFunc)(const wxAnyButtonExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxAnyButtonExtDoSetToolTipwxToolTipPFunc)(const wxAnyButtonExt* self, wxToolTip* tip);
typedef void (*wxAnyButtonExtDoSetToolTipTextwxStringCRFunc)(const wxAnyButtonExt* self, wxString const& tip);
typedef void (*wxAnyButtonExtDoSetVirtualSizeintintFunc)(const wxAnyButtonExt* self, int x, int y);
typedef void (*wxAnyButtonExtDoSetWindowVariantwxWindowVariantFunc)(const wxAnyButtonExt* self, wxWindowVariant variant);
typedef void (*wxAnyButtonExtDoThawFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxAnyButtonExt* self, wxUpdateUIEvent& event);
typedef void (*wxAnyButtonExtDragAcceptFilesboolFunc)(const wxAnyButtonExt* self, bool accept);
typedef bool (*wxAnyButtonExtEnableboolFunc)(const wxAnyButtonExt* self, bool enable, bool res);
typedef bool (*wxAnyButtonExtEnableTouchEventsintFunc)(const wxAnyButtonExt* self, int eventsMask, bool res);
typedef void (*wxAnyButtonExtEnableVisibleFocusboolFunc)(const wxAnyButtonExt* self, bool enabled);
typedef void (*wxAnyButtonExtEndRepositioningChildrenFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtFitFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtFitInsideFunc)(const wxAnyButtonExt* self);
typedef wxSize (*wxAnyButtonExtGetBestVirtualSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef int (*wxAnyButtonExtGetCharHeightFunc)(const wxAnyButtonExt* self, int res);
typedef int (*wxAnyButtonExtGetCharWidthFunc)(const wxAnyButtonExt* self, int res);
typedef wxClassInfo* (*wxAnyButtonExtGetClassInfoFunc)(const wxAnyButtonExt* self, wxClassInfo* res);
typedef wxPoint (*wxAnyButtonExtGetClientAreaOriginFunc)(const wxAnyButtonExt* self, wxPoint res);
typedef void (*wxAnyButtonExtGetClientSizeConstraintintPintPFunc)(const wxAnyButtonExt* self, int* w, int* h);
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
typedef wxString (*wxAnyButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc)(const wxAnyButtonExt* self, wxPoint const& pt, wxHelpEvent::Origin origin, wxString res);
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
typedef void (*wxAnyButtonExtGetPositionConstraintintPintPFunc)(const wxAnyButtonExt* self, int* x, int* y);
typedef int (*wxAnyButtonExtGetScrollPosintFunc)(const wxAnyButtonExt* self, int orient, int res);
typedef int (*wxAnyButtonExtGetScrollRangeintFunc)(const wxAnyButtonExt* self, int orient, int res);
typedef int (*wxAnyButtonExtGetScrollThumbintFunc)(const wxAnyButtonExt* self, int orient, int res);
typedef void (*wxAnyButtonExtGetSizeConstraintintPintPFunc)(const wxAnyButtonExt* self, int* w, int* h);
typedef bool (*wxAnyButtonExtGetThemeEnabledFunc)(const wxAnyButtonExt* self, bool res);
typedef wxByte (*wxAnyButtonExtGetTransparentFunc)(const wxAnyButtonExt* self, wxByte res);
typedef wxValidator* (*wxAnyButtonExtGetValidatorFunc)(const wxAnyButtonExt* self, wxValidator* res);
typedef wxSize (*wxAnyButtonExtGetWindowBorderSizeFunc)(const wxAnyButtonExt* self, wxSize res);
typedef long (*wxAnyButtonExtGetWindowStyleFlagFunc)(const wxAnyButtonExt* self, long res);
typedef bool (*wxAnyButtonExtHasCaptureFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtHasFocusFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtHasMultiplePagesFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtHasTransparentBackgroundFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtHideWithEffectwxShowEffectunsignedintFunc)(const wxAnyButtonExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxAnyButtonExtInformFirstDirectionintintintFunc)(const wxAnyButtonExt* self, int direction, int size, int availableOtherDir, bool res);
typedef void (*wxAnyButtonExtInheritAttributesFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtInitDialogFunc)(const wxAnyButtonExt* self);
typedef bool (*wxAnyButtonExtIsClientAreaChildwxWindowCPFunc)(const wxAnyButtonExt* self, wxWindow const* param0, bool res);
typedef bool (*wxAnyButtonExtIsDoubleBufferedFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsRetainedFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsScrollbarAlwaysShownintFunc)(const wxAnyButtonExt* self, int orient, bool res);
typedef bool (*wxAnyButtonExtIsShownFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsShownOnScreenFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsThisEnabledFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsTopLevelFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxAnyButtonExt* self, wxWindowBase::NavigationKind param0, bool res);
typedef bool (*wxAnyButtonExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxAnyButtonExt* self, wxString* reason, bool res);
typedef bool (*wxAnyButtonExtLayoutFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtLayoutPhase1intPFunc)(const wxAnyButtonExt* self, int* noChanges, bool res);
typedef bool (*wxAnyButtonExtLayoutPhase2intPFunc)(const wxAnyButtonExt* self, int* noChanges, bool res);
typedef void (*wxAnyButtonExtLowerFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtMoveConstraintintintFunc)(const wxAnyButtonExt* self, int x, int y);
typedef bool (*wxAnyButtonExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxAnyButtonExt* self, wxDynamicEventTableEntry& param0, bool res);
typedef void (*wxAnyButtonExtOnInternalIdleFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtPrepareDCwxDCRFunc)(const wxAnyButtonExt* self, wxDC& param0);
typedef bool (*wxAnyButtonExtProcessEventwxEventRFunc)(const wxAnyButtonExt* self, wxEvent& event, bool res);
typedef void (*wxAnyButtonExtQueueEventwxEventPFunc)(const wxAnyButtonExt* self, wxEvent* event);
typedef void (*wxAnyButtonExtRaiseFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtRefreshboolwxRectCPFunc)(const wxAnyButtonExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxAnyButtonExtRegisterHotKeyintintintFunc)(const wxAnyButtonExt* self, int hotkeyId, int modifiers, int keycode, bool res);
typedef void (*wxAnyButtonExtRemoveChildwxWindowBasePFunc)(const wxAnyButtonExt* self, wxWindowBase* child);
typedef bool (*wxAnyButtonExtReparentwxWindowBasePFunc)(const wxAnyButtonExt* self, wxWindowBase* newParent, bool res);
typedef bool (*wxAnyButtonExtScrollLinesintFunc)(const wxAnyButtonExt* self, int param0, bool res);
typedef bool (*wxAnyButtonExtScrollPagesintFunc)(const wxAnyButtonExt* self, int param0, bool res);
typedef void (*wxAnyButtonExtScrollWindowintintwxRectCPFunc)(const wxAnyButtonExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxAnyButtonExtSearchEventTablewxEventTableRwxEventRFunc)(const wxAnyButtonExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef bool (*wxAnyButtonExtSendIdleEventswxIdleEventRFunc)(const wxAnyButtonExt* self, wxIdleEvent& event, bool res);
typedef void (*wxAnyButtonExtSendSizeEventintFunc)(const wxAnyButtonExt* self, int flags);
typedef void (*wxAnyButtonExtSetAcceleratorTablewxAcceleratorTableCRFunc)(const wxAnyButtonExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxAnyButtonExtSetBackgroundColourwxColourCRFunc)(const wxAnyButtonExt* self, wxColour const& colour, bool res);
typedef bool (*wxAnyButtonExtSetBackgroundStylewxBackgroundStyleFunc)(const wxAnyButtonExt* self, wxBackgroundStyle style, bool res);
typedef void (*wxAnyButtonExtSetCanFocusboolFunc)(const wxAnyButtonExt* self, bool param0);
typedef void (*wxAnyButtonExtSetConstraintSizesboolFunc)(const wxAnyButtonExt* self, bool recurse);
typedef bool (*wxAnyButtonExtSetCursorwxCursorCRFunc)(const wxAnyButtonExt* self, wxCursor const& cursor, bool res);
typedef void (*wxAnyButtonExtSetDoubleBufferedboolFunc)(const wxAnyButtonExt* self, bool param0);
typedef void (*wxAnyButtonExtSetDropTargetwxDropTargetPFunc)(const wxAnyButtonExt* self, wxDropTarget* dropTarget);
typedef void (*wxAnyButtonExtSetExtraStylelongFunc)(const wxAnyButtonExt* self, long exStyle);
typedef void (*wxAnyButtonExtSetFocusFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtSetFocusFromKbdFunc)(const wxAnyButtonExt* self);
typedef bool (*wxAnyButtonExtSetFontwxFontCRFunc)(const wxAnyButtonExt* self, wxFont const& font, bool res);
typedef bool (*wxAnyButtonExtSetForegroundColourwxColourCRFunc)(const wxAnyButtonExt* self, wxColour const& colour, bool res);
typedef void (*wxAnyButtonExtSetIdwxWindowIDFunc)(const wxAnyButtonExt* self, wxWindowID winid);
typedef void (*wxAnyButtonExtSetLabelwxStringCRFunc)(const wxAnyButtonExt* self, wxString const& label);
typedef void (*wxAnyButtonExtSetLabelTextwxStringCRFunc)(const wxAnyButtonExt* self, wxString const& text);
typedef void (*wxAnyButtonExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxAnyButtonExt* self, wxLayoutDirection param0);
typedef void (*wxAnyButtonExtSetMaxClientSizewxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& size);
typedef void (*wxAnyButtonExtSetMaxSizewxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& maxSize);
typedef void (*wxAnyButtonExtSetMinClientSizewxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& size);
typedef void (*wxAnyButtonExtSetMinSizewxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& minSize);
typedef void (*wxAnyButtonExtSetNamewxStringCRFunc)(const wxAnyButtonExt* self, wxString const& name);
typedef void (*wxAnyButtonExtSetNextHandlerwxEvtHandlerPFunc)(const wxAnyButtonExt* self, wxEvtHandler* handler);
typedef void (*wxAnyButtonExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxAnyButtonExt* self, wxEvtHandler* handler);
typedef void (*wxAnyButtonExtSetScrollPosintintboolFunc)(const wxAnyButtonExt* self, int orient, int pos, bool refresh);
typedef void (*wxAnyButtonExtSetScrollbarintintintintboolFunc)(const wxAnyButtonExt* self, int orient, int pos, int thumbVisible, int range, bool refresh);
typedef void (*wxAnyButtonExtSetSizeConstraintintintintintFunc)(const wxAnyButtonExt* self, int x, int y, int w, int h);
typedef void (*wxAnyButtonExtSetSizeHintsintintintintintintFunc)(const wxAnyButtonExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxAnyButtonExtSetThemeEnabledboolFunc)(const wxAnyButtonExt* self, bool enableTheme);
typedef bool (*wxAnyButtonExtSetTransparentwxByteFunc)(const wxAnyButtonExt* self, wxByte alpha, bool res);
typedef void (*wxAnyButtonExtSetValidatorwxValidatorCRFunc)(const wxAnyButtonExt* self, wxValidator const& validator);
typedef void (*wxAnyButtonExtSetWindowStyleFlaglongFunc)(const wxAnyButtonExt* self, long style);
typedef bool (*wxAnyButtonExtShouldInheritColoursFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtShowboolFunc)(const wxAnyButtonExt* self, bool show, bool res);
typedef bool (*wxAnyButtonExtShowWithEffectwxShowEffectunsignedintFunc)(const wxAnyButtonExt* self, wxShowEffect effect, unsigned int timeout, bool res);
typedef bool (*wxAnyButtonExtTransferDataFromWindowFunc)(const wxAnyButtonExt* self, bool res);
typedef bool (*wxAnyButtonExtTransferDataToWindowFunc)(const wxAnyButtonExt* self, bool res);
typedef void (*wxAnyButtonExtTriggerScrollEventwxEventTypeFunc)(const wxAnyButtonExt* self, wxEventType scrollEvent);
typedef bool (*wxAnyButtonExtTryAfterwxEventRFunc)(const wxAnyButtonExt* self, wxEvent& event, bool res);
typedef bool (*wxAnyButtonExtTryBeforewxEventRFunc)(const wxAnyButtonExt* self, wxEvent& event, bool res);
typedef bool (*wxAnyButtonExtUnregisterHotKeyintFunc)(const wxAnyButtonExt* self, int hotkeyId, bool res);
typedef void (*wxAnyButtonExtUpdateFunc)(const wxAnyButtonExt* self);
typedef void (*wxAnyButtonExtUpdateWindowUIlongFunc)(const wxAnyButtonExt* self, long flags);
typedef bool (*wxAnyButtonExtValidateFunc)(const wxAnyButtonExt* self, bool res);
typedef void (*wxAnyButtonExtWXAdjustFontToOwnPPIwxFontRFunc)(const wxAnyButtonExt* self, wxFont& param0);
typedef wxTextEntry const* (*wxAnyButtonExtWXGetTextEntryFunc)(const wxAnyButtonExt* self, wxTextEntry const* res);
typedef void* (*wxAnyButtonExtWXReservedEvtHandler1voidPFunc)(const wxAnyButtonExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonExtWXReservedEvtHandler2voidPFunc)(const wxAnyButtonExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonExtWXReservedWindow1voidPFunc)(const wxAnyButtonExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonExtWXReservedWindow2voidPFunc)(const wxAnyButtonExt* self, void* param0, void* res);
typedef void* (*wxAnyButtonExtWXReservedWindow3voidPFunc)(const wxAnyButtonExt* self, void* param0, void* res);
typedef void (*wxAnyButtonExtWXSetInitialFittingClientSizeintwxSizerPFunc)(const wxAnyButtonExt* self, int flags, wxSizer* sizer);
typedef void (*wxAnyButtonExtWarpPointerintintFunc)(const wxAnyButtonExt* self, int x, int y);
typedef wxSize (*wxAnyButtonExtWindowToClientSizewxSizeCRFunc)(const wxAnyButtonExt* self, wxSize const& size, wxSize res);

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
  wxAnyButtonBaseExtAddChildwxWindowBasePFunc m_wxAnyButtonBaseExtAddChildwxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxAnyButtonBase::AddChild(child);
    if (*m_wxAnyButtonBaseExtAddChildwxWindowBaseP != NULL){
      return m_wxAnyButtonBaseExtAddChildwxWindowBaseP(this, child);
    }
  }
  wxAnyButtonBaseExtAddPendingEventwxEventCRFunc m_wxAnyButtonBaseExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxAnyButtonBase::AddPendingEvent(event);
    if (*m_wxAnyButtonBaseExtAddPendingEventwxEventCR != NULL){
      return m_wxAnyButtonBaseExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxAnyButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxAnyButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxAnyButtonBase::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxAnyButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxAnyButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtAdjustForParentClientOriginintRintRintFunc m_wxAnyButtonBaseExtAdjustForParentClientOriginintRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxAnyButtonBase::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxAnyButtonBaseExtAdjustForParentClientOriginintRintRint != NULL){
      return m_wxAnyButtonBaseExtAdjustForParentClientOriginintRintRint(this, x, y, sizeFlags);
    }
  }
  wxAnyButtonBaseExtAlwaysShowScrollbarsboolboolFunc m_wxAnyButtonBaseExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxAnyButtonBase::AlwaysShowScrollbars(horz, vert);
    if (*m_wxAnyButtonBaseExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxAnyButtonBaseExtAlwaysShowScrollbarsboolbool(this, horz, vert);
    }
  }
  wxAnyButtonBaseExtAssociateHandleWXWidgetFunc m_wxAnyButtonBaseExtAssociateHandleWXWidget = NULL;
  virtual void AssociateHandle(WXWidget param0) override
  {
    wxAnyButtonBase::AssociateHandle(param0);
    if (*m_wxAnyButtonBaseExtAssociateHandleWXWidget != NULL){
      return m_wxAnyButtonBaseExtAssociateHandleWXWidget(this, param0);
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
  wxAnyButtonBaseExtCanScrollintFunc m_wxAnyButtonBaseExtCanScrollint = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxAnyButtonBase::CanScroll(orient);
    if (*m_wxAnyButtonBaseExtCanScrollint != NULL){
      return m_wxAnyButtonBaseExtCanScrollint(this, orient, res);
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
  wxAnyButtonBaseExtClientToWindowSizewxSizeCRFunc m_wxAnyButtonBaseExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButtonBase::ClientToWindowSize(size);
    if (*m_wxAnyButtonBaseExtClientToWindowSizewxSizeCR != NULL){
      return m_wxAnyButtonBaseExtClientToWindowSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtCloneRefDatawxObjectRefDataCPFunc m_wxAnyButtonBaseExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAnyButtonBase::CloneRefData(data);
    if (*m_wxAnyButtonBaseExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxAnyButtonBaseExtCloneRefDatawxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtCommandwxCommandEventRFunc m_wxAnyButtonBaseExtCommandwxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxAnyButtonBase::Command(event);
    if (*m_wxAnyButtonBaseExtCommandwxCommandEventR != NULL){
      return m_wxAnyButtonBaseExtCommandwxCommandEventR(this, event);
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
  wxAnyButtonBaseExtDoCentreintFunc m_wxAnyButtonBaseExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxAnyButtonBase::DoCentre(dir);
    if (*m_wxAnyButtonBaseExtDoCentreint != NULL){
      return m_wxAnyButtonBaseExtDoCentreint(this, dir);
    }
  }
  wxAnyButtonBaseExtDoClientToScreenintPintPFunc m_wxAnyButtonBaseExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxAnyButtonBase::DoClientToScreen(x, y);
    if (*m_wxAnyButtonBaseExtDoClientToScreenintPintP != NULL){
      return m_wxAnyButtonBaseExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoEnableboolFunc m_wxAnyButtonBaseExtDoEnablebool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxAnyButtonBase::DoEnable(enable);
    if (*m_wxAnyButtonBaseExtDoEnablebool != NULL){
      return m_wxAnyButtonBaseExtDoEnablebool(this, enable);
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
  wxAnyButtonBaseExtDoGetBestClientHeightintFunc m_wxAnyButtonBaseExtDoGetBestClientHeightint = NULL;
  virtual int DoGetBestClientHeight(int param0) const override
  {
    int res = wxAnyButtonBase::DoGetBestClientHeight(param0);
    if (*m_wxAnyButtonBaseExtDoGetBestClientHeightint != NULL){
      return m_wxAnyButtonBaseExtDoGetBestClientHeightint(this, param0, res);
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
  wxAnyButtonBaseExtDoGetBestClientWidthintFunc m_wxAnyButtonBaseExtDoGetBestClientWidthint = NULL;
  virtual int DoGetBestClientWidth(int param0) const override
  {
    int res = wxAnyButtonBase::DoGetBestClientWidth(param0);
    if (*m_wxAnyButtonBaseExtDoGetBestClientWidthint != NULL){
      return m_wxAnyButtonBaseExtDoGetBestClientWidthint(this, param0, res);
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
  wxAnyButtonBaseExtDoGetBitmapwxAnyButtonBaseNStateFunc m_wxAnyButtonBaseExtDoGetBitmapwxAnyButtonBaseNState = NULL;
  virtual wxBitmap DoGetBitmap(wxAnyButtonBase::State param0) const override
  {
    wxBitmap res = wxAnyButtonBase::DoGetBitmap(param0);
    if (*m_wxAnyButtonBaseExtDoGetBitmapwxAnyButtonBaseNState != NULL){
      return m_wxAnyButtonBaseExtDoGetBitmapwxAnyButtonBaseNState(this, param0, res);
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
  wxAnyButtonBaseExtDoGetClientSizeintPintPFunc m_wxAnyButtonBaseExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxAnyButtonBase::DoGetClientSize(width, height);
    if (*m_wxAnyButtonBaseExtDoGetClientSizeintPintP != NULL){
      return m_wxAnyButtonBaseExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxAnyButtonBaseExtDoGetPositionintPintPFunc m_wxAnyButtonBaseExtDoGetPositionintPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxAnyButtonBase::DoGetPosition(x, y);
    if (*m_wxAnyButtonBaseExtDoGetPositionintPintP != NULL){
      return m_wxAnyButtonBaseExtDoGetPositionintPintP(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoGetScreenPositionintPintPFunc m_wxAnyButtonBaseExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxAnyButtonBase::DoGetScreenPosition(x, y);
    if (*m_wxAnyButtonBaseExtDoGetScreenPositionintPintP != NULL){
      return m_wxAnyButtonBaseExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoGetSizeintPintPFunc m_wxAnyButtonBaseExtDoGetSizeintPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxAnyButtonBase::DoGetSize(width, height);
    if (*m_wxAnyButtonBaseExtDoGetSizeintPintP != NULL){
      return m_wxAnyButtonBaseExtDoGetSizeintPintP(this, width, height);
    }
  }
  wxAnyButtonBaseExtDoGetSizeFromClientSizewxSizeCRFunc m_wxAnyButtonBaseExtDoGetSizeFromClientSizewxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButtonBase::DoGetSizeFromClientSize(size);
    if (*m_wxAnyButtonBaseExtDoGetSizeFromClientSizewxSizeCR != NULL){
      return m_wxAnyButtonBaseExtDoGetSizeFromClientSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetSizeFromTextSizeintintFunc m_wxAnyButtonBaseExtDoGetSizeFromTextSizeintint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxAnyButtonBase::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxAnyButtonBaseExtDoGetSizeFromTextSizeintint != NULL){
      return m_wxAnyButtonBaseExtDoGetSizeFromTextSizeintint(this, xlen, ylen, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxAnyButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxAnyButtonBase::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxAnyButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxAnyButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
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
  wxAnyButtonBaseExtDoHitTestwxCoordwxCoordFunc m_wxAnyButtonBaseExtDoHitTestwxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxAnyButtonBase::DoHitTest(x, y);
    if (*m_wxAnyButtonBaseExtDoHitTestwxCoordwxCoord != NULL){
      return m_wxAnyButtonBaseExtDoHitTestwxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoIsExposedintintintintFunc m_wxAnyButtonBaseExtDoIsExposedintintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxAnyButtonBase::DoIsExposed(x, y, w, h);
    if (*m_wxAnyButtonBaseExtDoIsExposedintintintint != NULL){
      return m_wxAnyButtonBaseExtDoIsExposedintintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoIsExposedintintFunc m_wxAnyButtonBaseExtDoIsExposedintint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxAnyButtonBase::DoIsExposed(x, y);
    if (*m_wxAnyButtonBaseExtDoIsExposedintint != NULL){
      return m_wxAnyButtonBaseExtDoIsExposedintint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc m_wxAnyButtonBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxAnyButtonBase::DoMoveInTabOrder(win, move);
    if (*m_wxAnyButtonBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxAnyButtonBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxAnyButtonBaseExtDoMoveWindowintintintintFunc m_wxAnyButtonBaseExtDoMoveWindowintintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxAnyButtonBase::DoMoveWindow(x, y, width, height);
    if (*m_wxAnyButtonBaseExtDoMoveWindowintintintint != NULL){
      return m_wxAnyButtonBaseExtDoMoveWindowintintintint(this, x, y, width, height);
    }
  }
  wxAnyButtonBaseExtDoNavigateInintFunc m_wxAnyButtonBaseExtDoNavigateInint = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxAnyButtonBase::DoNavigateIn(flags);
    if (*m_wxAnyButtonBaseExtDoNavigateInint != NULL){
      return m_wxAnyButtonBaseExtDoNavigateInint(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoPhaseintFunc m_wxAnyButtonBaseExtDoPhaseint = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxAnyButtonBase::DoPhase(phase);
    if (*m_wxAnyButtonBaseExtDoPhaseint != NULL){
      return m_wxAnyButtonBaseExtDoPhaseint(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoPopupMenuwxMenuPintintFunc m_wxAnyButtonBaseExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxAnyButtonBase::DoPopupMenu(menu, x, y);
    if (*m_wxAnyButtonBaseExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxAnyButtonBaseExtDoPopupMenuwxMenuPintint(this, menu, x, y, res);
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
  wxAnyButtonBaseExtDoScreenToClientintPintPFunc m_wxAnyButtonBaseExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxAnyButtonBase::DoScreenToClient(x, y);
    if (*m_wxAnyButtonBaseExtDoScreenToClientintPintP != NULL){
      return m_wxAnyButtonBaseExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoSetAuthNeededboolFunc m_wxAnyButtonBaseExtDoSetAuthNeededbool = NULL;
  virtual void DoSetAuthNeeded(bool param0) override
  {
    wxAnyButtonBase::DoSetAuthNeeded(param0);
    if (*m_wxAnyButtonBaseExtDoSetAuthNeededbool != NULL){
      return m_wxAnyButtonBaseExtDoSetAuthNeededbool(this, param0);
    }
  }
  wxAnyButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc m_wxAnyButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState = NULL;
  virtual void DoSetBitmap(wxBitmapBundle const& param0, wxAnyButtonBase::State param1) override
  {
    wxAnyButtonBase::DoSetBitmap(param0, param1);
    if (*m_wxAnyButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState != NULL){
      return m_wxAnyButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState(this, param0, param1);
    }
  }
  wxAnyButtonBaseExtDoSetBitmapMarginswxCoordwxCoordFunc m_wxAnyButtonBaseExtDoSetBitmapMarginswxCoordwxCoord = NULL;
  virtual void DoSetBitmapMargins(wxCoord param0, wxCoord param1) override
  {
    wxAnyButtonBase::DoSetBitmapMargins(param0, param1);
    if (*m_wxAnyButtonBaseExtDoSetBitmapMarginswxCoordwxCoord != NULL){
      return m_wxAnyButtonBaseExtDoSetBitmapMarginswxCoordwxCoord(this, param0, param1);
    }
  }
  wxAnyButtonBaseExtDoSetBitmapPositionwxDirectionFunc m_wxAnyButtonBaseExtDoSetBitmapPositionwxDirection = NULL;
  virtual void DoSetBitmapPosition(wxDirection param0) override
  {
    wxAnyButtonBase::DoSetBitmapPosition(param0);
    if (*m_wxAnyButtonBaseExtDoSetBitmapPositionwxDirection != NULL){
      return m_wxAnyButtonBaseExtDoSetBitmapPositionwxDirection(this, param0);
    }
  }
  wxAnyButtonBaseExtDoSetClientDatavoidPFunc m_wxAnyButtonBaseExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxAnyButtonBase::DoSetClientData(data);
    if (*m_wxAnyButtonBaseExtDoSetClientDatavoidP != NULL){
      return m_wxAnyButtonBaseExtDoSetClientDatavoidP(this, data);
    }
  }
  wxAnyButtonBaseExtDoSetClientObjectwxClientDataPFunc m_wxAnyButtonBaseExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxAnyButtonBase::DoSetClientObject(data);
    if (*m_wxAnyButtonBaseExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxAnyButtonBaseExtDoSetClientObjectwxClientDataP(this, data);
    }
  }
  wxAnyButtonBaseExtDoSetClientSizeintintFunc m_wxAnyButtonBaseExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxAnyButtonBase::DoSetClientSize(width, height);
    if (*m_wxAnyButtonBaseExtDoSetClientSizeintint != NULL){
      return m_wxAnyButtonBaseExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxAnyButtonBaseExtDoSetLabelMarkupwxStringCRFunc m_wxAnyButtonBaseExtDoSetLabelMarkupwxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxAnyButtonBase::DoSetLabelMarkup(markup);
    if (*m_wxAnyButtonBaseExtDoSetLabelMarkupwxStringCR != NULL){
      return m_wxAnyButtonBaseExtDoSetLabelMarkupwxStringCR(this, markup, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtDoSetSizeintintintintintFunc m_wxAnyButtonBaseExtDoSetSizeintintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxAnyButtonBase::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxAnyButtonBaseExtDoSetSizeintintintintint != NULL){
      return m_wxAnyButtonBaseExtDoSetSizeintintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxAnyButtonBaseExtDoSetSizeHintsintintintintintintFunc m_wxAnyButtonBaseExtDoSetSizeHintsintintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxAnyButtonBase::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxAnyButtonBaseExtDoSetSizeHintsintintintintintint != NULL){
      return m_wxAnyButtonBaseExtDoSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxAnyButtonBaseExtDoSetToolTipwxToolTipPFunc m_wxAnyButtonBaseExtDoSetToolTipwxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxAnyButtonBase::DoSetToolTip(tip);
    if (*m_wxAnyButtonBaseExtDoSetToolTipwxToolTipP != NULL){
      return m_wxAnyButtonBaseExtDoSetToolTipwxToolTipP(this, tip);
    }
  }
  wxAnyButtonBaseExtDoSetToolTipTextwxStringCRFunc m_wxAnyButtonBaseExtDoSetToolTipTextwxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxAnyButtonBase::DoSetToolTipText(tip);
    if (*m_wxAnyButtonBaseExtDoSetToolTipTextwxStringCR != NULL){
      return m_wxAnyButtonBaseExtDoSetToolTipTextwxStringCR(this, tip);
    }
  }
  wxAnyButtonBaseExtDoSetVirtualSizeintintFunc m_wxAnyButtonBaseExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxAnyButtonBase::DoSetVirtualSize(x, y);
    if (*m_wxAnyButtonBaseExtDoSetVirtualSizeintint != NULL){
      return m_wxAnyButtonBaseExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxAnyButtonBaseExtDoSetWindowVariantwxWindowVariantFunc m_wxAnyButtonBaseExtDoSetWindowVariantwxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxAnyButtonBase::DoSetWindowVariant(variant);
    if (*m_wxAnyButtonBaseExtDoSetWindowVariantwxWindowVariant != NULL){
      return m_wxAnyButtonBaseExtDoSetWindowVariantwxWindowVariant(this, variant);
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
  wxAnyButtonBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxAnyButtonBaseExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxAnyButtonBase::DoUpdateWindowUI(event);
    if (*m_wxAnyButtonBaseExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxAnyButtonBaseExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxAnyButtonBaseExtDragAcceptFilesboolFunc m_wxAnyButtonBaseExtDragAcceptFilesbool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxAnyButtonBase::DragAcceptFiles(accept);
    if (*m_wxAnyButtonBaseExtDragAcceptFilesbool != NULL){
      return m_wxAnyButtonBaseExtDragAcceptFilesbool(this, accept);
    }
  }
  wxAnyButtonBaseExtEnableboolFunc m_wxAnyButtonBaseExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxAnyButtonBase::Enable(enable);
    if (*m_wxAnyButtonBaseExtEnablebool != NULL){
      return m_wxAnyButtonBaseExtEnablebool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtEnableTouchEventsintFunc m_wxAnyButtonBaseExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxAnyButtonBase::EnableTouchEvents(eventsMask);
    if (*m_wxAnyButtonBaseExtEnableTouchEventsint != NULL){
      return m_wxAnyButtonBaseExtEnableTouchEventsint(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtEnableVisibleFocusboolFunc m_wxAnyButtonBaseExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxAnyButtonBase::EnableVisibleFocus(enabled);
    if (*m_wxAnyButtonBaseExtEnableVisibleFocusbool != NULL){
      return m_wxAnyButtonBaseExtEnableVisibleFocusbool(this, enabled);
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
  wxAnyButtonBaseExtGetClientSizeConstraintintPintPFunc m_wxAnyButtonBaseExtGetClientSizeConstraintintPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxAnyButtonBase::GetClientSizeConstraint(w, h);
    if (*m_wxAnyButtonBaseExtGetClientSizeConstraintintPintP != NULL){
      return m_wxAnyButtonBaseExtGetClientSizeConstraintintPintP(this, w, h);
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
  wxAnyButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc m_wxAnyButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxAnyButtonBase::GetHelpTextAtPoint(pt, origin);
    if (*m_wxAnyButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin != NULL){
      return m_wxAnyButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin(this, pt, origin, res);
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
  wxAnyButtonBaseExtGetPositionConstraintintPintPFunc m_wxAnyButtonBaseExtGetPositionConstraintintPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxAnyButtonBase::GetPositionConstraint(x, y);
    if (*m_wxAnyButtonBaseExtGetPositionConstraintintPintP != NULL){
      return m_wxAnyButtonBaseExtGetPositionConstraintintPintP(this, x, y);
    }
  }
  wxAnyButtonBaseExtGetScrollPosintFunc m_wxAnyButtonBaseExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxAnyButtonBase::GetScrollPos(orient);
    if (*m_wxAnyButtonBaseExtGetScrollPosint != NULL){
      return m_wxAnyButtonBaseExtGetScrollPosint(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetScrollRangeintFunc m_wxAnyButtonBaseExtGetScrollRangeint = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxAnyButtonBase::GetScrollRange(orient);
    if (*m_wxAnyButtonBaseExtGetScrollRangeint != NULL){
      return m_wxAnyButtonBaseExtGetScrollRangeint(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetScrollThumbintFunc m_wxAnyButtonBaseExtGetScrollThumbint = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxAnyButtonBase::GetScrollThumb(orient);
    if (*m_wxAnyButtonBaseExtGetScrollThumbint != NULL){
      return m_wxAnyButtonBaseExtGetScrollThumbint(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtGetSizeConstraintintPintPFunc m_wxAnyButtonBaseExtGetSizeConstraintintPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxAnyButtonBase::GetSizeConstraint(w, h);
    if (*m_wxAnyButtonBaseExtGetSizeConstraintintPintP != NULL){
      return m_wxAnyButtonBaseExtGetSizeConstraintintPintP(this, w, h);
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
  wxAnyButtonBaseExtHideWithEffectwxShowEffectunsignedintFunc m_wxAnyButtonBaseExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxAnyButtonBase::HideWithEffect(effect, timeout);
    if (*m_wxAnyButtonBaseExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxAnyButtonBaseExtHideWithEffectwxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtInformFirstDirectionintintintFunc m_wxAnyButtonBaseExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxAnyButtonBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxAnyButtonBaseExtInformFirstDirectionintintint != NULL){
      return m_wxAnyButtonBaseExtInformFirstDirectionintintint(this, direction, size, availableOtherDir, res);
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
  wxAnyButtonBaseExtIsClientAreaChildwxWindowCPFunc m_wxAnyButtonBaseExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* param0) const override
  {
    bool res = wxAnyButtonBase::IsClientAreaChild(param0);
    if (*m_wxAnyButtonBaseExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxAnyButtonBaseExtIsClientAreaChildwxWindowCP(this, param0, res);
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
  wxAnyButtonBaseExtIsScrollbarAlwaysShownintFunc m_wxAnyButtonBaseExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxAnyButtonBase::IsScrollbarAlwaysShown(orient);
    if (*m_wxAnyButtonBaseExtIsScrollbarAlwaysShownint != NULL){
      return m_wxAnyButtonBaseExtIsScrollbarAlwaysShownint(this, orient, res);
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
  wxAnyButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxAnyButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind param0) const override
  {
    bool res = wxAnyButtonBase::IsTopNavigationDomain(param0);
    if (*m_wxAnyButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxAnyButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtIsTransparentBackgroundSupportedwxStringPFunc m_wxAnyButtonBaseExtIsTransparentBackgroundSupportedwxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxAnyButtonBase::IsTransparentBackgroundSupported(reason);
    if (*m_wxAnyButtonBaseExtIsTransparentBackgroundSupportedwxStringP != NULL){
      return m_wxAnyButtonBaseExtIsTransparentBackgroundSupportedwxStringP(this, reason, res);
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
  wxAnyButtonBaseExtLayoutPhase1intPFunc m_wxAnyButtonBaseExtLayoutPhase1intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxAnyButtonBase::LayoutPhase1(noChanges);
    if (*m_wxAnyButtonBaseExtLayoutPhase1intP != NULL){
      return m_wxAnyButtonBaseExtLayoutPhase1intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtLayoutPhase2intPFunc m_wxAnyButtonBaseExtLayoutPhase2intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxAnyButtonBase::LayoutPhase2(noChanges);
    if (*m_wxAnyButtonBaseExtLayoutPhase2intP != NULL){
      return m_wxAnyButtonBaseExtLayoutPhase2intP(this, noChanges, res);
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
  wxAnyButtonBaseExtMoveConstraintintintFunc m_wxAnyButtonBaseExtMoveConstraintintint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxAnyButtonBase::MoveConstraint(x, y);
    if (*m_wxAnyButtonBaseExtMoveConstraintintint != NULL){
      return m_wxAnyButtonBaseExtMoveConstraintintint(this, x, y);
    }
  }
  wxAnyButtonBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxAnyButtonBaseExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxAnyButtonBase::OnDynamicBind(param0);
    if (*m_wxAnyButtonBaseExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxAnyButtonBaseExtOnDynamicBindwxDynamicEventTableEntryR(this, param0, res);
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
  wxAnyButtonBaseExtPrepareDCwxDCRFunc m_wxAnyButtonBaseExtPrepareDCwxDCR = NULL;
  virtual void PrepareDC(wxDC& param0) override
  {
    wxAnyButtonBase::PrepareDC(param0);
    if (*m_wxAnyButtonBaseExtPrepareDCwxDCR != NULL){
      return m_wxAnyButtonBaseExtPrepareDCwxDCR(this, param0);
    }
  }
  wxAnyButtonBaseExtProcessEventwxEventRFunc m_wxAnyButtonBaseExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxAnyButtonBase::ProcessEvent(event);
    if (*m_wxAnyButtonBaseExtProcessEventwxEventR != NULL){
      return m_wxAnyButtonBaseExtProcessEventwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtQueueEventwxEventPFunc m_wxAnyButtonBaseExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxAnyButtonBase::QueueEvent(event);
    if (*m_wxAnyButtonBaseExtQueueEventwxEventP != NULL){
      return m_wxAnyButtonBaseExtQueueEventwxEventP(this, event);
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
  wxAnyButtonBaseExtRefreshboolwxRectCPFunc m_wxAnyButtonBaseExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxAnyButtonBase::Refresh(eraseBackground, rect);
    if (*m_wxAnyButtonBaseExtRefreshboolwxRectCP != NULL){
      return m_wxAnyButtonBaseExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxAnyButtonBaseExtRegisterHotKeyintintintFunc m_wxAnyButtonBaseExtRegisterHotKeyintintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxAnyButtonBase::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxAnyButtonBaseExtRegisterHotKeyintintint != NULL){
      return m_wxAnyButtonBaseExtRegisterHotKeyintintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtRemoveChildwxWindowBasePFunc m_wxAnyButtonBaseExtRemoveChildwxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxAnyButtonBase::RemoveChild(child);
    if (*m_wxAnyButtonBaseExtRemoveChildwxWindowBaseP != NULL){
      return m_wxAnyButtonBaseExtRemoveChildwxWindowBaseP(this, child);
    }
  }
  wxAnyButtonBaseExtReparentwxWindowBasePFunc m_wxAnyButtonBaseExtReparentwxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxAnyButtonBase::Reparent(newParent);
    if (*m_wxAnyButtonBaseExtReparentwxWindowBaseP != NULL){
      return m_wxAnyButtonBaseExtReparentwxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtScrollLinesintFunc m_wxAnyButtonBaseExtScrollLinesint = NULL;
  virtual bool ScrollLines(int param0) override
  {
    bool res = wxAnyButtonBase::ScrollLines(param0);
    if (*m_wxAnyButtonBaseExtScrollLinesint != NULL){
      return m_wxAnyButtonBaseExtScrollLinesint(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtScrollPagesintFunc m_wxAnyButtonBaseExtScrollPagesint = NULL;
  virtual bool ScrollPages(int param0) override
  {
    bool res = wxAnyButtonBase::ScrollPages(param0);
    if (*m_wxAnyButtonBaseExtScrollPagesint != NULL){
      return m_wxAnyButtonBaseExtScrollPagesint(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtScrollWindowintintwxRectCPFunc m_wxAnyButtonBaseExtScrollWindowintintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxAnyButtonBase::ScrollWindow(dx, dy, rect);
    if (*m_wxAnyButtonBaseExtScrollWindowintintwxRectCP != NULL){
      return m_wxAnyButtonBaseExtScrollWindowintintwxRectCP(this, dx, dy, rect);
    }
  }
  wxAnyButtonBaseExtSearchEventTablewxEventTableRwxEventRFunc m_wxAnyButtonBaseExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxAnyButtonBase::SearchEventTable(table, event);
    if (*m_wxAnyButtonBaseExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxAnyButtonBaseExtSearchEventTablewxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSendIdleEventswxIdleEventRFunc m_wxAnyButtonBaseExtSendIdleEventswxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxAnyButtonBase::SendIdleEvents(event);
    if (*m_wxAnyButtonBaseExtSendIdleEventswxIdleEventR != NULL){
      return m_wxAnyButtonBaseExtSendIdleEventswxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSendSizeEventintFunc m_wxAnyButtonBaseExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxAnyButtonBase::SendSizeEvent(flags);
    if (*m_wxAnyButtonBaseExtSendSizeEventint != NULL){
      return m_wxAnyButtonBaseExtSendSizeEventint(this, flags);
    }
  }
  wxAnyButtonBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc m_wxAnyButtonBaseExtSetAcceleratorTablewxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxAnyButtonBase::SetAcceleratorTable(accel);
    if (*m_wxAnyButtonBaseExtSetAcceleratorTablewxAcceleratorTableCR != NULL){
      return m_wxAnyButtonBaseExtSetAcceleratorTablewxAcceleratorTableCR(this, accel);
    }
  }
  wxAnyButtonBaseExtSetBackgroundColourwxColourCRFunc m_wxAnyButtonBaseExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxAnyButtonBase::SetBackgroundColour(colour);
    if (*m_wxAnyButtonBaseExtSetBackgroundColourwxColourCR != NULL){
      return m_wxAnyButtonBaseExtSetBackgroundColourwxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetBackgroundStylewxBackgroundStyleFunc m_wxAnyButtonBaseExtSetBackgroundStylewxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxAnyButtonBase::SetBackgroundStyle(style);
    if (*m_wxAnyButtonBaseExtSetBackgroundStylewxBackgroundStyle != NULL){
      return m_wxAnyButtonBaseExtSetBackgroundStylewxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetCanFocusboolFunc m_wxAnyButtonBaseExtSetCanFocusbool = NULL;
  virtual void SetCanFocus(bool param0) override
  {
    wxAnyButtonBase::SetCanFocus(param0);
    if (*m_wxAnyButtonBaseExtSetCanFocusbool != NULL){
      return m_wxAnyButtonBaseExtSetCanFocusbool(this, param0);
    }
  }
  wxAnyButtonBaseExtSetConstraintSizesboolFunc m_wxAnyButtonBaseExtSetConstraintSizesbool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxAnyButtonBase::SetConstraintSizes(recurse);
    if (*m_wxAnyButtonBaseExtSetConstraintSizesbool != NULL){
      return m_wxAnyButtonBaseExtSetConstraintSizesbool(this, recurse);
    }
  }
  wxAnyButtonBaseExtSetCursorwxCursorCRFunc m_wxAnyButtonBaseExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxAnyButtonBase::SetCursor(cursor);
    if (*m_wxAnyButtonBaseExtSetCursorwxCursorCR != NULL){
      return m_wxAnyButtonBaseExtSetCursorwxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetDoubleBufferedboolFunc m_wxAnyButtonBaseExtSetDoubleBufferedbool = NULL;
  virtual void SetDoubleBuffered(bool param0) override
  {
    wxAnyButtonBase::SetDoubleBuffered(param0);
    if (*m_wxAnyButtonBaseExtSetDoubleBufferedbool != NULL){
      return m_wxAnyButtonBaseExtSetDoubleBufferedbool(this, param0);
    }
  }
  wxAnyButtonBaseExtSetDropTargetwxDropTargetPFunc m_wxAnyButtonBaseExtSetDropTargetwxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxAnyButtonBase::SetDropTarget(dropTarget);
    if (*m_wxAnyButtonBaseExtSetDropTargetwxDropTargetP != NULL){
      return m_wxAnyButtonBaseExtSetDropTargetwxDropTargetP(this, dropTarget);
    }
  }
  wxAnyButtonBaseExtSetExtraStylelongFunc m_wxAnyButtonBaseExtSetExtraStylelong = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxAnyButtonBase::SetExtraStyle(exStyle);
    if (*m_wxAnyButtonBaseExtSetExtraStylelong != NULL){
      return m_wxAnyButtonBaseExtSetExtraStylelong(this, exStyle);
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
  wxAnyButtonBaseExtSetFontwxFontCRFunc m_wxAnyButtonBaseExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxAnyButtonBase::SetFont(font);
    if (*m_wxAnyButtonBaseExtSetFontwxFontCR != NULL){
      return m_wxAnyButtonBaseExtSetFontwxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetForegroundColourwxColourCRFunc m_wxAnyButtonBaseExtSetForegroundColourwxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxAnyButtonBase::SetForegroundColour(colour);
    if (*m_wxAnyButtonBaseExtSetForegroundColourwxColourCR != NULL){
      return m_wxAnyButtonBaseExtSetForegroundColourwxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetIdwxWindowIDFunc m_wxAnyButtonBaseExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxAnyButtonBase::SetId(winid);
    if (*m_wxAnyButtonBaseExtSetIdwxWindowID != NULL){
      return m_wxAnyButtonBaseExtSetIdwxWindowID(this, winid);
    }
  }
  wxAnyButtonBaseExtSetLabelwxStringCRFunc m_wxAnyButtonBaseExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxAnyButtonBase::SetLabel(label);
    if (*m_wxAnyButtonBaseExtSetLabelwxStringCR != NULL){
      return m_wxAnyButtonBaseExtSetLabelwxStringCR(this, label);
    }
  }
  wxAnyButtonBaseExtSetLabelTextwxStringCRFunc m_wxAnyButtonBaseExtSetLabelTextwxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxAnyButtonBase::SetLabelText(text);
    if (*m_wxAnyButtonBaseExtSetLabelTextwxStringCR != NULL){
      return m_wxAnyButtonBaseExtSetLabelTextwxStringCR(this, text);
    }
  }
  wxAnyButtonBaseExtSetLayoutDirectionwxLayoutDirectionFunc m_wxAnyButtonBaseExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxAnyButtonBase::SetLayoutDirection(param0);
    if (*m_wxAnyButtonBaseExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxAnyButtonBaseExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxAnyButtonBaseExtSetMaxClientSizewxSizeCRFunc m_wxAnyButtonBaseExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxAnyButtonBase::SetMaxClientSize(size);
    if (*m_wxAnyButtonBaseExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxAnyButtonBaseExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxAnyButtonBaseExtSetMaxSizewxSizeCRFunc m_wxAnyButtonBaseExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxAnyButtonBase::SetMaxSize(maxSize);
    if (*m_wxAnyButtonBaseExtSetMaxSizewxSizeCR != NULL){
      return m_wxAnyButtonBaseExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxAnyButtonBaseExtSetMinClientSizewxSizeCRFunc m_wxAnyButtonBaseExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxAnyButtonBase::SetMinClientSize(size);
    if (*m_wxAnyButtonBaseExtSetMinClientSizewxSizeCR != NULL){
      return m_wxAnyButtonBaseExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxAnyButtonBaseExtSetMinSizewxSizeCRFunc m_wxAnyButtonBaseExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxAnyButtonBase::SetMinSize(minSize);
    if (*m_wxAnyButtonBaseExtSetMinSizewxSizeCR != NULL){
      return m_wxAnyButtonBaseExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxAnyButtonBaseExtSetNamewxStringCRFunc m_wxAnyButtonBaseExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxAnyButtonBase::SetName(name);
    if (*m_wxAnyButtonBaseExtSetNamewxStringCR != NULL){
      return m_wxAnyButtonBaseExtSetNamewxStringCR(this, name);
    }
  }
  wxAnyButtonBaseExtSetNextHandlerwxEvtHandlerPFunc m_wxAnyButtonBaseExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxAnyButtonBase::SetNextHandler(handler);
    if (*m_wxAnyButtonBaseExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxAnyButtonBaseExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxAnyButtonBaseExtSetPreviousHandlerwxEvtHandlerPFunc m_wxAnyButtonBaseExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxAnyButtonBase::SetPreviousHandler(handler);
    if (*m_wxAnyButtonBaseExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxAnyButtonBaseExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxAnyButtonBaseExtSetScrollPosintintboolFunc m_wxAnyButtonBaseExtSetScrollPosintintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxAnyButtonBase::SetScrollPos(orient, pos, refresh);
    if (*m_wxAnyButtonBaseExtSetScrollPosintintbool != NULL){
      return m_wxAnyButtonBaseExtSetScrollPosintintbool(this, orient, pos, refresh);
    }
  }
  wxAnyButtonBaseExtSetScrollbarintintintintboolFunc m_wxAnyButtonBaseExtSetScrollbarintintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxAnyButtonBase::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxAnyButtonBaseExtSetScrollbarintintintintbool != NULL){
      return m_wxAnyButtonBaseExtSetScrollbarintintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxAnyButtonBaseExtSetSizeConstraintintintintintFunc m_wxAnyButtonBaseExtSetSizeConstraintintintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxAnyButtonBase::SetSizeConstraint(x, y, w, h);
    if (*m_wxAnyButtonBaseExtSetSizeConstraintintintintint != NULL){
      return m_wxAnyButtonBaseExtSetSizeConstraintintintintint(this, x, y, w, h);
    }
  }
  wxAnyButtonBaseExtSetSizeHintsintintintintintintFunc m_wxAnyButtonBaseExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxAnyButtonBase::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxAnyButtonBaseExtSetSizeHintsintintintintintint != NULL){
      return m_wxAnyButtonBaseExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxAnyButtonBaseExtSetThemeEnabledboolFunc m_wxAnyButtonBaseExtSetThemeEnabledbool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxAnyButtonBase::SetThemeEnabled(enableTheme);
    if (*m_wxAnyButtonBaseExtSetThemeEnabledbool != NULL){
      return m_wxAnyButtonBaseExtSetThemeEnabledbool(this, enableTheme);
    }
  }
  wxAnyButtonBaseExtSetTransparentwxByteFunc m_wxAnyButtonBaseExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxAnyButtonBase::SetTransparent(alpha);
    if (*m_wxAnyButtonBaseExtSetTransparentwxByte != NULL){
      return m_wxAnyButtonBaseExtSetTransparentwxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtSetValidatorwxValidatorCRFunc m_wxAnyButtonBaseExtSetValidatorwxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxAnyButtonBase::SetValidator(validator);
    if (*m_wxAnyButtonBaseExtSetValidatorwxValidatorCR != NULL){
      return m_wxAnyButtonBaseExtSetValidatorwxValidatorCR(this, validator);
    }
  }
  wxAnyButtonBaseExtSetWindowStyleFlaglongFunc m_wxAnyButtonBaseExtSetWindowStyleFlaglong = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxAnyButtonBase::SetWindowStyleFlag(style);
    if (*m_wxAnyButtonBaseExtSetWindowStyleFlaglong != NULL){
      return m_wxAnyButtonBaseExtSetWindowStyleFlaglong(this, style);
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
  wxAnyButtonBaseExtShowboolFunc m_wxAnyButtonBaseExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxAnyButtonBase::Show(show);
    if (*m_wxAnyButtonBaseExtShowbool != NULL){
      return m_wxAnyButtonBaseExtShowbool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtShowWithEffectwxShowEffectunsignedintFunc m_wxAnyButtonBaseExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxAnyButtonBase::ShowWithEffect(effect, timeout);
    if (*m_wxAnyButtonBaseExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxAnyButtonBaseExtShowWithEffectwxShowEffectunsignedint(this, effect, timeout, res);
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
  wxAnyButtonBaseExtTriggerScrollEventwxEventTypeFunc m_wxAnyButtonBaseExtTriggerScrollEventwxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxAnyButtonBase::TriggerScrollEvent(scrollEvent);
    if (*m_wxAnyButtonBaseExtTriggerScrollEventwxEventType != NULL){
      return m_wxAnyButtonBaseExtTriggerScrollEventwxEventType(this, scrollEvent);
    }
  }
  wxAnyButtonBaseExtTryAfterwxEventRFunc m_wxAnyButtonBaseExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxAnyButtonBase::TryAfter(event);
    if (*m_wxAnyButtonBaseExtTryAfterwxEventR != NULL){
      return m_wxAnyButtonBaseExtTryAfterwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtTryBeforewxEventRFunc m_wxAnyButtonBaseExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxAnyButtonBase::TryBefore(event);
    if (*m_wxAnyButtonBaseExtTryBeforewxEventR != NULL){
      return m_wxAnyButtonBaseExtTryBeforewxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtUnregisterHotKeyintFunc m_wxAnyButtonBaseExtUnregisterHotKeyint = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxAnyButtonBase::UnregisterHotKey(hotkeyId);
    if (*m_wxAnyButtonBaseExtUnregisterHotKeyint != NULL){
      return m_wxAnyButtonBaseExtUnregisterHotKeyint(this, hotkeyId, res);
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
  wxAnyButtonBaseExtUpdateWindowUIlongFunc m_wxAnyButtonBaseExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxAnyButtonBase::UpdateWindowUI(flags);
    if (*m_wxAnyButtonBaseExtUpdateWindowUIlong != NULL){
      return m_wxAnyButtonBaseExtUpdateWindowUIlong(this, flags);
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
  wxAnyButtonBaseExtWXAdjustFontToOwnPPIwxFontRFunc m_wxAnyButtonBaseExtWXAdjustFontToOwnPPIwxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& param0) const override
  {
    wxAnyButtonBase::WXAdjustFontToOwnPPI(param0);
    if (*m_wxAnyButtonBaseExtWXAdjustFontToOwnPPIwxFontR != NULL){
      return m_wxAnyButtonBaseExtWXAdjustFontToOwnPPIwxFontR(this, param0);
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
  wxAnyButtonBaseExtWXReservedEvtHandler1voidPFunc m_wxAnyButtonBaseExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxAnyButtonBase::WXReservedEvtHandler1(param0);
    if (*m_wxAnyButtonBaseExtWXReservedEvtHandler1voidP != NULL){
      return m_wxAnyButtonBaseExtWXReservedEvtHandler1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXReservedEvtHandler2voidPFunc m_wxAnyButtonBaseExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxAnyButtonBase::WXReservedEvtHandler2(param0);
    if (*m_wxAnyButtonBaseExtWXReservedEvtHandler2voidP != NULL){
      return m_wxAnyButtonBaseExtWXReservedEvtHandler2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXReservedWindow1voidPFunc m_wxAnyButtonBaseExtWXReservedWindow1voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxAnyButtonBase::WXReservedWindow1(param0);
    if (*m_wxAnyButtonBaseExtWXReservedWindow1voidP != NULL){
      return m_wxAnyButtonBaseExtWXReservedWindow1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXReservedWindow2voidPFunc m_wxAnyButtonBaseExtWXReservedWindow2voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxAnyButtonBase::WXReservedWindow2(param0);
    if (*m_wxAnyButtonBaseExtWXReservedWindow2voidP != NULL){
      return m_wxAnyButtonBaseExtWXReservedWindow2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXReservedWindow3voidPFunc m_wxAnyButtonBaseExtWXReservedWindow3voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxAnyButtonBase::WXReservedWindow3(param0);
    if (*m_wxAnyButtonBaseExtWXReservedWindow3voidP != NULL){
      return m_wxAnyButtonBaseExtWXReservedWindow3voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc m_wxAnyButtonBaseExtWXSetInitialFittingClientSizeintwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxAnyButtonBase::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxAnyButtonBaseExtWXSetInitialFittingClientSizeintwxSizerP != NULL){
      return m_wxAnyButtonBaseExtWXSetInitialFittingClientSizeintwxSizerP(this, flags, sizer);
    }
  }
  wxAnyButtonBaseExtWarpPointerintintFunc m_wxAnyButtonBaseExtWarpPointerintint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxAnyButtonBase::WarpPointer(x, y);
    if (*m_wxAnyButtonBaseExtWarpPointerintint != NULL){
      return m_wxAnyButtonBaseExtWarpPointerintint(this, x, y);
    }
  }
  wxAnyButtonBaseExtWindowToClientSizewxSizeCRFunc m_wxAnyButtonBaseExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButtonBase::WindowToClientSize(size);
    if (*m_wxAnyButtonBaseExtWindowToClientSizewxSizeCR != NULL){
      return m_wxAnyButtonBaseExtWindowToClientSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonBaseExt(wxAnyButtonBaseExtAcceptsFocusFunc a_AcceptsFocus, wxAnyButtonBaseExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxAnyButtonBaseExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxAnyButtonBaseExtAddChildwxWindowBasePFunc a_AddChildwxWindowBaseP, wxAnyButtonBaseExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxAnyButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxAnyButtonBaseExtAdjustForParentClientOriginintRintRintFunc a_AdjustForParentClientOriginintRintRint, wxAnyButtonBaseExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxAnyButtonBaseExtAssociateHandleWXWidgetFunc a_AssociateHandleWXWidget, wxAnyButtonBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxAnyButtonBaseExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxAnyButtonBaseExtCanBeFocusedFunc a_CanBeFocused, wxAnyButtonBaseExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxAnyButtonBaseExtCanScrollintFunc a_CanScrollint, wxAnyButtonBaseExtCanSetTransparentFunc a_CanSetTransparent, wxAnyButtonBaseExtClearBackgroundFunc a_ClearBackground, wxAnyButtonBaseExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxAnyButtonBaseExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxAnyButtonBaseExtCommandwxCommandEventRFunc a_CommandwxCommandEventR, wxAnyButtonBaseExtCreateRefDataFunc a_CreateRefData, wxAnyButtonBaseExtDestroyFunc a_Destroy, wxAnyButtonBaseExtDissociateHandleFunc a_DissociateHandle, wxAnyButtonBaseExtDoCaptureMouseFunc a_DoCaptureMouse, wxAnyButtonBaseExtDoCentreintFunc a_DoCentreint, wxAnyButtonBaseExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxAnyButtonBaseExtDoEnableboolFunc a_DoEnablebool, wxAnyButtonBaseExtDoFreezeFunc a_DoFreeze, wxAnyButtonBaseExtDoGetAuthNeededFunc a_DoGetAuthNeeded, wxAnyButtonBaseExtDoGetBestClientHeightintFunc a_DoGetBestClientHeightint, wxAnyButtonBaseExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxAnyButtonBaseExtDoGetBestClientWidthintFunc a_DoGetBestClientWidthint, wxAnyButtonBaseExtDoGetBestSizeFunc a_DoGetBestSize, wxAnyButtonBaseExtDoGetBitmapwxAnyButtonBaseNStateFunc a_DoGetBitmapwxAnyButtonBaseNState, wxAnyButtonBaseExtDoGetBitmapMarginsFunc a_DoGetBitmapMargins, wxAnyButtonBaseExtDoGetClientDataFunc a_DoGetClientData, wxAnyButtonBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxAnyButtonBaseExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxAnyButtonBaseExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxAnyButtonBaseExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxAnyButtonBaseExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxAnyButtonBaseExtDoGetSizeFromClientSizewxSizeCRFunc a_DoGetSizeFromClientSizewxSizeCR, wxAnyButtonBaseExtDoGetSizeFromTextSizeintintFunc a_DoGetSizeFromTextSizeintint, wxAnyButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxAnyButtonBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxAnyButtonBaseExtDoHitTestwxCoordwxCoordFunc a_DoHitTestwxCoordwxCoord, wxAnyButtonBaseExtDoIsExposedintintintintFunc a_DoIsExposedintintintint, wxAnyButtonBaseExtDoIsExposedintintFunc a_DoIsExposedintint, wxAnyButtonBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder, wxAnyButtonBaseExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxAnyButtonBaseExtDoNavigateInintFunc a_DoNavigateInint, wxAnyButtonBaseExtDoPhaseintFunc a_DoPhaseint, wxAnyButtonBaseExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxAnyButtonBaseExtDoReleaseMouseFunc a_DoReleaseMouse, wxAnyButtonBaseExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxAnyButtonBaseExtDoSetAuthNeededboolFunc a_DoSetAuthNeededbool, wxAnyButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc a_DoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState, wxAnyButtonBaseExtDoSetBitmapMarginswxCoordwxCoordFunc a_DoSetBitmapMarginswxCoordwxCoord, wxAnyButtonBaseExtDoSetBitmapPositionwxDirectionFunc a_DoSetBitmapPositionwxDirection, wxAnyButtonBaseExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxAnyButtonBaseExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxAnyButtonBaseExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxAnyButtonBaseExtDoSetLabelMarkupwxStringCRFunc a_DoSetLabelMarkupwxStringCR, wxAnyButtonBaseExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxAnyButtonBaseExtDoSetSizeHintsintintintintintintFunc a_DoSetSizeHintsintintintintintint, wxAnyButtonBaseExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxAnyButtonBaseExtDoSetToolTipTextwxStringCRFunc a_DoSetToolTipTextwxStringCR, wxAnyButtonBaseExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxAnyButtonBaseExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxAnyButtonBaseExtDoThawFunc a_DoThaw, wxAnyButtonBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxAnyButtonBaseExtDragAcceptFilesboolFunc a_DragAcceptFilesbool, wxAnyButtonBaseExtEnableboolFunc a_Enablebool, wxAnyButtonBaseExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxAnyButtonBaseExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxAnyButtonBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxAnyButtonBaseExtFitFunc a_Fit, wxAnyButtonBaseExtFitInsideFunc a_FitInside, wxAnyButtonBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxAnyButtonBaseExtGetCharHeightFunc a_GetCharHeight, wxAnyButtonBaseExtGetCharWidthFunc a_GetCharWidth, wxAnyButtonBaseExtGetClassInfoFunc a_GetClassInfo, wxAnyButtonBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxAnyButtonBaseExtGetClientSizeConstraintintPintPFunc a_GetClientSizeConstraintintPintP, wxAnyButtonBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxAnyButtonBaseExtGetDPIFunc a_GetDPI, wxAnyButtonBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxAnyButtonBaseExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxAnyButtonBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxAnyButtonBaseExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxAnyButtonBaseExtGetDropTargetFunc a_GetDropTarget, wxAnyButtonBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxAnyButtonBaseExtGetEventHashTableFunc a_GetEventHashTable, wxAnyButtonBaseExtGetEventTableFunc a_GetEventTable, wxAnyButtonBaseExtGetHandleFunc a_GetHandle, wxAnyButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin, wxAnyButtonBaseExtGetLabelFunc a_GetLabel, wxAnyButtonBaseExtGetLabelTextFunc a_GetLabelText, wxAnyButtonBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxAnyButtonBaseExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxAnyButtonBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxAnyButtonBaseExtGetMaxSizeFunc a_GetMaxSize, wxAnyButtonBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxAnyButtonBaseExtGetMinSizeFunc a_GetMinSize, wxAnyButtonBaseExtGetNameFunc a_GetName, wxAnyButtonBaseExtGetNormalStateFunc a_GetNormalState, wxAnyButtonBaseExtGetPositionConstraintintPintPFunc a_GetPositionConstraintintPintP, wxAnyButtonBaseExtGetScrollPosintFunc a_GetScrollPosint, wxAnyButtonBaseExtGetScrollRangeintFunc a_GetScrollRangeint, wxAnyButtonBaseExtGetScrollThumbintFunc a_GetScrollThumbint, wxAnyButtonBaseExtGetSizeConstraintintPintPFunc a_GetSizeConstraintintPintP, wxAnyButtonBaseExtGetThemeEnabledFunc a_GetThemeEnabled, wxAnyButtonBaseExtGetTransparentFunc a_GetTransparent, wxAnyButtonBaseExtGetValidatorFunc a_GetValidator, wxAnyButtonBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxAnyButtonBaseExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxAnyButtonBaseExtHasCaptureFunc a_HasCapture, wxAnyButtonBaseExtHasFocusFunc a_HasFocus, wxAnyButtonBaseExtHasMultiplePagesFunc a_HasMultiplePages, wxAnyButtonBaseExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxAnyButtonBaseExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxAnyButtonBaseExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxAnyButtonBaseExtInheritAttributesFunc a_InheritAttributes, wxAnyButtonBaseExtInitDialogFunc a_InitDialog, wxAnyButtonBaseExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxAnyButtonBaseExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxAnyButtonBaseExtIsRetainedFunc a_IsRetained, wxAnyButtonBaseExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxAnyButtonBaseExtIsShownFunc a_IsShown, wxAnyButtonBaseExtIsShownOnScreenFunc a_IsShownOnScreen, wxAnyButtonBaseExtIsThisEnabledFunc a_IsThisEnabled, wxAnyButtonBaseExtIsTopLevelFunc a_IsTopLevel, wxAnyButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxAnyButtonBaseExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxAnyButtonBaseExtLayoutFunc a_Layout, wxAnyButtonBaseExtLayoutPhase1intPFunc a_LayoutPhase1intP, wxAnyButtonBaseExtLayoutPhase2intPFunc a_LayoutPhase2intP, wxAnyButtonBaseExtLowerFunc a_Lower, wxAnyButtonBaseExtMoveConstraintintintFunc a_MoveConstraintintint, wxAnyButtonBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxAnyButtonBaseExtOnInternalIdleFunc a_OnInternalIdle, wxAnyButtonBaseExtPrepareDCwxDCRFunc a_PrepareDCwxDCR, wxAnyButtonBaseExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxAnyButtonBaseExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxAnyButtonBaseExtRaiseFunc a_Raise, wxAnyButtonBaseExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxAnyButtonBaseExtRegisterHotKeyintintintFunc a_RegisterHotKeyintintint, wxAnyButtonBaseExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxAnyButtonBaseExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxAnyButtonBaseExtScrollLinesintFunc a_ScrollLinesint, wxAnyButtonBaseExtScrollPagesintFunc a_ScrollPagesint, wxAnyButtonBaseExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxAnyButtonBaseExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxAnyButtonBaseExtSendIdleEventswxIdleEventRFunc a_SendIdleEventswxIdleEventR, wxAnyButtonBaseExtSendSizeEventintFunc a_SendSizeEventint, wxAnyButtonBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc a_SetAcceleratorTablewxAcceleratorTableCR, wxAnyButtonBaseExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxAnyButtonBaseExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxAnyButtonBaseExtSetCanFocusboolFunc a_SetCanFocusbool, wxAnyButtonBaseExtSetConstraintSizesboolFunc a_SetConstraintSizesbool, wxAnyButtonBaseExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxAnyButtonBaseExtSetDoubleBufferedboolFunc a_SetDoubleBufferedbool, wxAnyButtonBaseExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxAnyButtonBaseExtSetExtraStylelongFunc a_SetExtraStylelong, wxAnyButtonBaseExtSetFocusFunc a_SetFocus, wxAnyButtonBaseExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxAnyButtonBaseExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxAnyButtonBaseExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxAnyButtonBaseExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxAnyButtonBaseExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxAnyButtonBaseExtSetLabelTextwxStringCRFunc a_SetLabelTextwxStringCR, wxAnyButtonBaseExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxAnyButtonBaseExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxAnyButtonBaseExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxAnyButtonBaseExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxAnyButtonBaseExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxAnyButtonBaseExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxAnyButtonBaseExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxAnyButtonBaseExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxAnyButtonBaseExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxAnyButtonBaseExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxAnyButtonBaseExtSetSizeConstraintintintintintFunc a_SetSizeConstraintintintintint, wxAnyButtonBaseExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxAnyButtonBaseExtSetThemeEnabledboolFunc a_SetThemeEnabledbool, wxAnyButtonBaseExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxAnyButtonBaseExtSetValidatorwxValidatorCRFunc a_SetValidatorwxValidatorCR, wxAnyButtonBaseExtSetWindowStyleFlaglongFunc a_SetWindowStyleFlaglong, wxAnyButtonBaseExtShouldInheritColoursFunc a_ShouldInheritColours, wxAnyButtonBaseExtShowboolFunc a_Showbool, wxAnyButtonBaseExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxAnyButtonBaseExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxAnyButtonBaseExtTransferDataToWindowFunc a_TransferDataToWindow, wxAnyButtonBaseExtTriggerScrollEventwxEventTypeFunc a_TriggerScrollEventwxEventType, wxAnyButtonBaseExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxAnyButtonBaseExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxAnyButtonBaseExtUnregisterHotKeyintFunc a_UnregisterHotKeyint, wxAnyButtonBaseExtUpdateFunc a_Update, wxAnyButtonBaseExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxAnyButtonBaseExtValidateFunc a_Validate, wxAnyButtonBaseExtWXAdjustFontToOwnPPIwxFontRFunc a_WXAdjustFontToOwnPPIwxFontR, wxAnyButtonBaseExtWXGetTextEntryFunc a_WXGetTextEntry, wxAnyButtonBaseExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxAnyButtonBaseExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxAnyButtonBaseExtWXReservedWindow1voidPFunc a_WXReservedWindow1voidP, wxAnyButtonBaseExtWXReservedWindow2voidPFunc a_WXReservedWindow2voidP, wxAnyButtonBaseExtWXReservedWindow3voidPFunc a_WXReservedWindow3voidP, wxAnyButtonBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc a_WXSetInitialFittingClientSizeintwxSizerP, wxAnyButtonBaseExtWarpPointerintintFunc a_WarpPointerintint, wxAnyButtonBaseExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxAnyButtonBase() {
    m_wxAnyButtonBaseExtAcceptsFocus = a_AcceptsFocus;
    m_wxAnyButtonBaseExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxAnyButtonBaseExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxAnyButtonBaseExtAddChildwxWindowBaseP = a_AddChildwxWindowBaseP;
    m_wxAnyButtonBaseExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxAnyButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxAnyButtonBaseExtAdjustForParentClientOriginintRintRint = a_AdjustForParentClientOriginintRintRint;
    m_wxAnyButtonBaseExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxAnyButtonBaseExtAssociateHandleWXWidget = a_AssociateHandleWXWidget;
    m_wxAnyButtonBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxAnyButtonBaseExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxAnyButtonBaseExtCanBeFocused = a_CanBeFocused;
    m_wxAnyButtonBaseExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxAnyButtonBaseExtCanScrollint = a_CanScrollint;
    m_wxAnyButtonBaseExtCanSetTransparent = a_CanSetTransparent;
    m_wxAnyButtonBaseExtClearBackground = a_ClearBackground;
    m_wxAnyButtonBaseExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxAnyButtonBaseExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxAnyButtonBaseExtCommandwxCommandEventR = a_CommandwxCommandEventR;
    m_wxAnyButtonBaseExtCreateRefData = a_CreateRefData;
    m_wxAnyButtonBaseExtDestroy = a_Destroy;
    m_wxAnyButtonBaseExtDissociateHandle = a_DissociateHandle;
    m_wxAnyButtonBaseExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxAnyButtonBaseExtDoCentreint = a_DoCentreint;
    m_wxAnyButtonBaseExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxAnyButtonBaseExtDoEnablebool = a_DoEnablebool;
    m_wxAnyButtonBaseExtDoFreeze = a_DoFreeze;
    m_wxAnyButtonBaseExtDoGetAuthNeeded = a_DoGetAuthNeeded;
    m_wxAnyButtonBaseExtDoGetBestClientHeightint = a_DoGetBestClientHeightint;
    m_wxAnyButtonBaseExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxAnyButtonBaseExtDoGetBestClientWidthint = a_DoGetBestClientWidthint;
    m_wxAnyButtonBaseExtDoGetBestSize = a_DoGetBestSize;
    m_wxAnyButtonBaseExtDoGetBitmapwxAnyButtonBaseNState = a_DoGetBitmapwxAnyButtonBaseNState;
    m_wxAnyButtonBaseExtDoGetBitmapMargins = a_DoGetBitmapMargins;
    m_wxAnyButtonBaseExtDoGetClientData = a_DoGetClientData;
    m_wxAnyButtonBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxAnyButtonBaseExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxAnyButtonBaseExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxAnyButtonBaseExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxAnyButtonBaseExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxAnyButtonBaseExtDoGetSizeFromClientSizewxSizeCR = a_DoGetSizeFromClientSizewxSizeCR;
    m_wxAnyButtonBaseExtDoGetSizeFromTextSizeintint = a_DoGetSizeFromTextSizeintint;
    m_wxAnyButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxAnyButtonBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxAnyButtonBaseExtDoHitTestwxCoordwxCoord = a_DoHitTestwxCoordwxCoord;
    m_wxAnyButtonBaseExtDoIsExposedintintintint = a_DoIsExposedintintintint;
    m_wxAnyButtonBaseExtDoIsExposedintint = a_DoIsExposedintint;
    m_wxAnyButtonBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder;
    m_wxAnyButtonBaseExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxAnyButtonBaseExtDoNavigateInint = a_DoNavigateInint;
    m_wxAnyButtonBaseExtDoPhaseint = a_DoPhaseint;
    m_wxAnyButtonBaseExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxAnyButtonBaseExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxAnyButtonBaseExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxAnyButtonBaseExtDoSetAuthNeededbool = a_DoSetAuthNeededbool;
    m_wxAnyButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState = a_DoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState;
    m_wxAnyButtonBaseExtDoSetBitmapMarginswxCoordwxCoord = a_DoSetBitmapMarginswxCoordwxCoord;
    m_wxAnyButtonBaseExtDoSetBitmapPositionwxDirection = a_DoSetBitmapPositionwxDirection;
    m_wxAnyButtonBaseExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxAnyButtonBaseExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxAnyButtonBaseExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxAnyButtonBaseExtDoSetLabelMarkupwxStringCR = a_DoSetLabelMarkupwxStringCR;
    m_wxAnyButtonBaseExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxAnyButtonBaseExtDoSetSizeHintsintintintintintint = a_DoSetSizeHintsintintintintintint;
    m_wxAnyButtonBaseExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxAnyButtonBaseExtDoSetToolTipTextwxStringCR = a_DoSetToolTipTextwxStringCR;
    m_wxAnyButtonBaseExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxAnyButtonBaseExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxAnyButtonBaseExtDoThaw = a_DoThaw;
    m_wxAnyButtonBaseExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxAnyButtonBaseExtDragAcceptFilesbool = a_DragAcceptFilesbool;
    m_wxAnyButtonBaseExtEnablebool = a_Enablebool;
    m_wxAnyButtonBaseExtEnableTouchEventsint = a_EnableTouchEventsint;
    m_wxAnyButtonBaseExtEnableVisibleFocusbool = a_EnableVisibleFocusbool;
    m_wxAnyButtonBaseExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxAnyButtonBaseExtFit = a_Fit;
    m_wxAnyButtonBaseExtFitInside = a_FitInside;
    m_wxAnyButtonBaseExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxAnyButtonBaseExtGetCharHeight = a_GetCharHeight;
    m_wxAnyButtonBaseExtGetCharWidth = a_GetCharWidth;
    m_wxAnyButtonBaseExtGetClassInfo = a_GetClassInfo;
    m_wxAnyButtonBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxAnyButtonBaseExtGetClientSizeConstraintintPintP = a_GetClientSizeConstraintintPintP;
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
    m_wxAnyButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin;
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
    m_wxAnyButtonBaseExtGetPositionConstraintintPintP = a_GetPositionConstraintintPintP;
    m_wxAnyButtonBaseExtGetScrollPosint = a_GetScrollPosint;
    m_wxAnyButtonBaseExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxAnyButtonBaseExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxAnyButtonBaseExtGetSizeConstraintintPintP = a_GetSizeConstraintintPintP;
    m_wxAnyButtonBaseExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxAnyButtonBaseExtGetTransparent = a_GetTransparent;
    m_wxAnyButtonBaseExtGetValidator = a_GetValidator;
    m_wxAnyButtonBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxAnyButtonBaseExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxAnyButtonBaseExtHasCapture = a_HasCapture;
    m_wxAnyButtonBaseExtHasFocus = a_HasFocus;
    m_wxAnyButtonBaseExtHasMultiplePages = a_HasMultiplePages;
    m_wxAnyButtonBaseExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxAnyButtonBaseExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxAnyButtonBaseExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxAnyButtonBaseExtInheritAttributes = a_InheritAttributes;
    m_wxAnyButtonBaseExtInitDialog = a_InitDialog;
    m_wxAnyButtonBaseExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxAnyButtonBaseExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxAnyButtonBaseExtIsRetained = a_IsRetained;
    m_wxAnyButtonBaseExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxAnyButtonBaseExtIsShown = a_IsShown;
    m_wxAnyButtonBaseExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxAnyButtonBaseExtIsThisEnabled = a_IsThisEnabled;
    m_wxAnyButtonBaseExtIsTopLevel = a_IsTopLevel;
    m_wxAnyButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxAnyButtonBaseExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxAnyButtonBaseExtLayout = a_Layout;
    m_wxAnyButtonBaseExtLayoutPhase1intP = a_LayoutPhase1intP;
    m_wxAnyButtonBaseExtLayoutPhase2intP = a_LayoutPhase2intP;
    m_wxAnyButtonBaseExtLower = a_Lower;
    m_wxAnyButtonBaseExtMoveConstraintintint = a_MoveConstraintintint;
    m_wxAnyButtonBaseExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxAnyButtonBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxAnyButtonBaseExtPrepareDCwxDCR = a_PrepareDCwxDCR;
    m_wxAnyButtonBaseExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxAnyButtonBaseExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxAnyButtonBaseExtRaise = a_Raise;
    m_wxAnyButtonBaseExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxAnyButtonBaseExtRegisterHotKeyintintint = a_RegisterHotKeyintintint;
    m_wxAnyButtonBaseExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxAnyButtonBaseExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxAnyButtonBaseExtScrollLinesint = a_ScrollLinesint;
    m_wxAnyButtonBaseExtScrollPagesint = a_ScrollPagesint;
    m_wxAnyButtonBaseExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxAnyButtonBaseExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxAnyButtonBaseExtSendIdleEventswxIdleEventR = a_SendIdleEventswxIdleEventR;
    m_wxAnyButtonBaseExtSendSizeEventint = a_SendSizeEventint;
    m_wxAnyButtonBaseExtSetAcceleratorTablewxAcceleratorTableCR = a_SetAcceleratorTablewxAcceleratorTableCR;
    m_wxAnyButtonBaseExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxAnyButtonBaseExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxAnyButtonBaseExtSetCanFocusbool = a_SetCanFocusbool;
    m_wxAnyButtonBaseExtSetConstraintSizesbool = a_SetConstraintSizesbool;
    m_wxAnyButtonBaseExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxAnyButtonBaseExtSetDoubleBufferedbool = a_SetDoubleBufferedbool;
    m_wxAnyButtonBaseExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxAnyButtonBaseExtSetExtraStylelong = a_SetExtraStylelong;
    m_wxAnyButtonBaseExtSetFocus = a_SetFocus;
    m_wxAnyButtonBaseExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxAnyButtonBaseExtSetFontwxFontCR = a_SetFontwxFontCR;
    m_wxAnyButtonBaseExtSetForegroundColourwxColourCR = a_SetForegroundColourwxColourCR;
    m_wxAnyButtonBaseExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxAnyButtonBaseExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxAnyButtonBaseExtSetLabelTextwxStringCR = a_SetLabelTextwxStringCR;
    m_wxAnyButtonBaseExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxAnyButtonBaseExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxAnyButtonBaseExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxAnyButtonBaseExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxAnyButtonBaseExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxAnyButtonBaseExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxAnyButtonBaseExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxAnyButtonBaseExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxAnyButtonBaseExtSetScrollPosintintbool = a_SetScrollPosintintbool;
    m_wxAnyButtonBaseExtSetScrollbarintintintintbool = a_SetScrollbarintintintintbool;
    m_wxAnyButtonBaseExtSetSizeConstraintintintintint = a_SetSizeConstraintintintintint;
    m_wxAnyButtonBaseExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxAnyButtonBaseExtSetThemeEnabledbool = a_SetThemeEnabledbool;
    m_wxAnyButtonBaseExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxAnyButtonBaseExtSetValidatorwxValidatorCR = a_SetValidatorwxValidatorCR;
    m_wxAnyButtonBaseExtSetWindowStyleFlaglong = a_SetWindowStyleFlaglong;
    m_wxAnyButtonBaseExtShouldInheritColours = a_ShouldInheritColours;
    m_wxAnyButtonBaseExtShowbool = a_Showbool;
    m_wxAnyButtonBaseExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxAnyButtonBaseExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxAnyButtonBaseExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxAnyButtonBaseExtTriggerScrollEventwxEventType = a_TriggerScrollEventwxEventType;
    m_wxAnyButtonBaseExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxAnyButtonBaseExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxAnyButtonBaseExtUnregisterHotKeyint = a_UnregisterHotKeyint;
    m_wxAnyButtonBaseExtUpdate = a_Update;
    m_wxAnyButtonBaseExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxAnyButtonBaseExtValidate = a_Validate;
    m_wxAnyButtonBaseExtWXAdjustFontToOwnPPIwxFontR = a_WXAdjustFontToOwnPPIwxFontR;
    m_wxAnyButtonBaseExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxAnyButtonBaseExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxAnyButtonBaseExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxAnyButtonBaseExtWXReservedWindow1voidP = a_WXReservedWindow1voidP;
    m_wxAnyButtonBaseExtWXReservedWindow2voidP = a_WXReservedWindow2voidP;
    m_wxAnyButtonBaseExtWXReservedWindow3voidP = a_WXReservedWindow3voidP;
    m_wxAnyButtonBaseExtWXSetInitialFittingClientSizeintwxSizerP = a_WXSetInitialFittingClientSizeintwxSizerP;
    m_wxAnyButtonBaseExtWarpPointerintint = a_WarpPointerintint;
    m_wxAnyButtonBaseExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
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
  wxAnyButtonExtAddChildwxWindowBasePFunc m_wxAnyButtonExtAddChildwxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxAnyButton::AddChild(child);
    if (*m_wxAnyButtonExtAddChildwxWindowBaseP != NULL){
      return m_wxAnyButtonExtAddChildwxWindowBaseP(this, child);
    }
  }
  wxAnyButtonExtAddPendingEventwxEventCRFunc m_wxAnyButtonExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxAnyButton::AddPendingEvent(event);
    if (*m_wxAnyButtonExtAddPendingEventwxEventCR != NULL){
      return m_wxAnyButtonExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxAnyButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxAnyButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxAnyButton::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxAnyButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxAnyButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtAdjustForParentClientOriginintRintRintFunc m_wxAnyButtonExtAdjustForParentClientOriginintRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxAnyButton::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxAnyButtonExtAdjustForParentClientOriginintRintRint != NULL){
      return m_wxAnyButtonExtAdjustForParentClientOriginintRintRint(this, x, y, sizeFlags);
    }
  }
  wxAnyButtonExtAlwaysShowScrollbarsboolboolFunc m_wxAnyButtonExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool horz = true, bool vert = true) override
  {
    wxAnyButton::AlwaysShowScrollbars(horz, vert);
    if (*m_wxAnyButtonExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxAnyButtonExtAlwaysShowScrollbarsboolbool(this, horz, vert);
    }
  }
  wxAnyButtonExtAssociateHandleWXWidgetFunc m_wxAnyButtonExtAssociateHandleWXWidget = NULL;
  virtual void AssociateHandle(WXWidget param0) override
  {
    wxAnyButton::AssociateHandle(param0);
    if (*m_wxAnyButtonExtAssociateHandleWXWidget != NULL){
      return m_wxAnyButtonExtAssociateHandleWXWidget(this, param0);
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
  wxAnyButtonExtCanScrollintFunc m_wxAnyButtonExtCanScrollint = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxAnyButton::CanScroll(orient);
    if (*m_wxAnyButtonExtCanScrollint != NULL){
      return m_wxAnyButtonExtCanScrollint(this, orient, res);
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
  wxAnyButtonExtClientToWindowSizewxSizeCRFunc m_wxAnyButtonExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButton::ClientToWindowSize(size);
    if (*m_wxAnyButtonExtClientToWindowSizewxSizeCR != NULL){
      return m_wxAnyButtonExtClientToWindowSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtCloneRefDatawxObjectRefDataCPFunc m_wxAnyButtonExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAnyButton::CloneRefData(data);
    if (*m_wxAnyButtonExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxAnyButtonExtCloneRefDatawxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtCommandwxCommandEventRFunc m_wxAnyButtonExtCommandwxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxAnyButton::Command(event);
    if (*m_wxAnyButtonExtCommandwxCommandEventR != NULL){
      return m_wxAnyButtonExtCommandwxCommandEventR(this, event);
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
  wxAnyButtonExtDoCentreintFunc m_wxAnyButtonExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxAnyButton::DoCentre(dir);
    if (*m_wxAnyButtonExtDoCentreint != NULL){
      return m_wxAnyButtonExtDoCentreint(this, dir);
    }
  }
  wxAnyButtonExtDoClientToScreenintPintPFunc m_wxAnyButtonExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxAnyButton::DoClientToScreen(x, y);
    if (*m_wxAnyButtonExtDoClientToScreenintPintP != NULL){
      return m_wxAnyButtonExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxAnyButtonExtDoEnableboolFunc m_wxAnyButtonExtDoEnablebool = NULL;
  virtual void DoEnable(bool enable) override
  {
    wxAnyButton::DoEnable(enable);
    if (*m_wxAnyButtonExtDoEnablebool != NULL){
      return m_wxAnyButtonExtDoEnablebool(this, enable);
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
  wxAnyButtonExtDoGetBestClientHeightintFunc m_wxAnyButtonExtDoGetBestClientHeightint = NULL;
  virtual int DoGetBestClientHeight(int param0) const override
  {
    int res = wxAnyButton::DoGetBestClientHeight(param0);
    if (*m_wxAnyButtonExtDoGetBestClientHeightint != NULL){
      return m_wxAnyButtonExtDoGetBestClientHeightint(this, param0, res);
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
  wxAnyButtonExtDoGetBestClientWidthintFunc m_wxAnyButtonExtDoGetBestClientWidthint = NULL;
  virtual int DoGetBestClientWidth(int param0) const override
  {
    int res = wxAnyButton::DoGetBestClientWidth(param0);
    if (*m_wxAnyButtonExtDoGetBestClientWidthint != NULL){
      return m_wxAnyButtonExtDoGetBestClientWidthint(this, param0, res);
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
  wxAnyButtonExtDoGetBitmapwxAnyButtonBaseNStateFunc m_wxAnyButtonExtDoGetBitmapwxAnyButtonBaseNState = NULL;
  virtual wxBitmap DoGetBitmap(wxAnyButtonBase::State param0) const override
  {
    wxBitmap res = wxAnyButton::DoGetBitmap(param0);
    if (*m_wxAnyButtonExtDoGetBitmapwxAnyButtonBaseNState != NULL){
      return m_wxAnyButtonExtDoGetBitmapwxAnyButtonBaseNState(this, param0, res);
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
  wxAnyButtonExtDoGetClientSizeintPintPFunc m_wxAnyButtonExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxAnyButton::DoGetClientSize(width, height);
    if (*m_wxAnyButtonExtDoGetClientSizeintPintP != NULL){
      return m_wxAnyButtonExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxAnyButtonExtDoGetPositionintPintPFunc m_wxAnyButtonExtDoGetPositionintPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxAnyButton::DoGetPosition(x, y);
    if (*m_wxAnyButtonExtDoGetPositionintPintP != NULL){
      return m_wxAnyButtonExtDoGetPositionintPintP(this, x, y);
    }
  }
  wxAnyButtonExtDoGetScreenPositionintPintPFunc m_wxAnyButtonExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxAnyButton::DoGetScreenPosition(x, y);
    if (*m_wxAnyButtonExtDoGetScreenPositionintPintP != NULL){
      return m_wxAnyButtonExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxAnyButtonExtDoGetSizeintPintPFunc m_wxAnyButtonExtDoGetSizeintPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxAnyButton::DoGetSize(width, height);
    if (*m_wxAnyButtonExtDoGetSizeintPintP != NULL){
      return m_wxAnyButtonExtDoGetSizeintPintP(this, width, height);
    }
  }
  wxAnyButtonExtDoGetSizeFromClientSizewxSizeCRFunc m_wxAnyButtonExtDoGetSizeFromClientSizewxSizeCR = NULL;
  virtual wxSize DoGetSizeFromClientSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButton::DoGetSizeFromClientSize(size);
    if (*m_wxAnyButtonExtDoGetSizeFromClientSizewxSizeCR != NULL){
      return m_wxAnyButtonExtDoGetSizeFromClientSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetSizeFromTextSizeintintFunc m_wxAnyButtonExtDoGetSizeFromTextSizeintint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxAnyButton::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxAnyButtonExtDoGetSizeFromTextSizeintint != NULL){
      return m_wxAnyButtonExtDoGetSizeFromTextSizeintint(this, xlen, ylen, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxAnyButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* theFont = __null) const override
  {
    wxAnyButton::DoGetTextExtent(string, x, y, descent, externalLeading, theFont);
    if (*m_wxAnyButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxAnyButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, theFont);
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
  wxAnyButtonExtDoHitTestwxCoordwxCoordFunc m_wxAnyButtonExtDoHitTestwxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxAnyButton::DoHitTest(x, y);
    if (*m_wxAnyButtonExtDoHitTestwxCoordwxCoord != NULL){
      return m_wxAnyButtonExtDoHitTestwxCoordwxCoord(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoIsExposedintintintintFunc m_wxAnyButtonExtDoIsExposedintintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxAnyButton::DoIsExposed(x, y, w, h);
    if (*m_wxAnyButtonExtDoIsExposedintintintint != NULL){
      return m_wxAnyButtonExtDoIsExposedintintintint(this, x, y, w, h, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoIsExposedintintFunc m_wxAnyButtonExtDoIsExposedintint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxAnyButton::DoIsExposed(x, y);
    if (*m_wxAnyButtonExtDoIsExposedintint != NULL){
      return m_wxAnyButtonExtDoIsExposedintint(this, x, y, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc m_wxAnyButtonExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxAnyButton::DoMoveInTabOrder(win, move);
    if (*m_wxAnyButtonExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxAnyButtonExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxAnyButtonExtDoMoveWindowintintintintFunc m_wxAnyButtonExtDoMoveWindowintintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxAnyButton::DoMoveWindow(x, y, width, height);
    if (*m_wxAnyButtonExtDoMoveWindowintintintint != NULL){
      return m_wxAnyButtonExtDoMoveWindowintintintint(this, x, y, width, height);
    }
  }
  wxAnyButtonExtDoNavigateInintFunc m_wxAnyButtonExtDoNavigateInint = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxAnyButton::DoNavigateIn(flags);
    if (*m_wxAnyButtonExtDoNavigateInint != NULL){
      return m_wxAnyButtonExtDoNavigateInint(this, flags, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoPhaseintFunc m_wxAnyButtonExtDoPhaseint = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxAnyButton::DoPhase(phase);
    if (*m_wxAnyButtonExtDoPhaseint != NULL){
      return m_wxAnyButtonExtDoPhaseint(this, phase, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoPopupMenuwxMenuPintintFunc m_wxAnyButtonExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxAnyButton::DoPopupMenu(menu, x, y);
    if (*m_wxAnyButtonExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxAnyButtonExtDoPopupMenuwxMenuPintint(this, menu, x, y, res);
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
  wxAnyButtonExtDoScreenToClientintPintPFunc m_wxAnyButtonExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxAnyButton::DoScreenToClient(x, y);
    if (*m_wxAnyButtonExtDoScreenToClientintPintP != NULL){
      return m_wxAnyButtonExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxAnyButtonExtDoSetAuthNeededboolFunc m_wxAnyButtonExtDoSetAuthNeededbool = NULL;
  virtual void DoSetAuthNeeded(bool param0) override
  {
    wxAnyButton::DoSetAuthNeeded(param0);
    if (*m_wxAnyButtonExtDoSetAuthNeededbool != NULL){
      return m_wxAnyButtonExtDoSetAuthNeededbool(this, param0);
    }
  }
  wxAnyButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc m_wxAnyButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState = NULL;
  virtual void DoSetBitmap(wxBitmapBundle const& param0, wxAnyButtonBase::State param1) override
  {
    wxAnyButton::DoSetBitmap(param0, param1);
    if (*m_wxAnyButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState != NULL){
      return m_wxAnyButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState(this, param0, param1);
    }
  }
  wxAnyButtonExtDoSetBitmapMarginswxCoordwxCoordFunc m_wxAnyButtonExtDoSetBitmapMarginswxCoordwxCoord = NULL;
  virtual void DoSetBitmapMargins(wxCoord param0, wxCoord param1) override
  {
    wxAnyButton::DoSetBitmapMargins(param0, param1);
    if (*m_wxAnyButtonExtDoSetBitmapMarginswxCoordwxCoord != NULL){
      return m_wxAnyButtonExtDoSetBitmapMarginswxCoordwxCoord(this, param0, param1);
    }
  }
  wxAnyButtonExtDoSetBitmapPositionwxDirectionFunc m_wxAnyButtonExtDoSetBitmapPositionwxDirection = NULL;
  virtual void DoSetBitmapPosition(wxDirection param0) override
  {
    wxAnyButton::DoSetBitmapPosition(param0);
    if (*m_wxAnyButtonExtDoSetBitmapPositionwxDirection != NULL){
      return m_wxAnyButtonExtDoSetBitmapPositionwxDirection(this, param0);
    }
  }
  wxAnyButtonExtDoSetClientDatavoidPFunc m_wxAnyButtonExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxAnyButton::DoSetClientData(data);
    if (*m_wxAnyButtonExtDoSetClientDatavoidP != NULL){
      return m_wxAnyButtonExtDoSetClientDatavoidP(this, data);
    }
  }
  wxAnyButtonExtDoSetClientObjectwxClientDataPFunc m_wxAnyButtonExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxAnyButton::DoSetClientObject(data);
    if (*m_wxAnyButtonExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxAnyButtonExtDoSetClientObjectwxClientDataP(this, data);
    }
  }
  wxAnyButtonExtDoSetClientSizeintintFunc m_wxAnyButtonExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxAnyButton::DoSetClientSize(width, height);
    if (*m_wxAnyButtonExtDoSetClientSizeintint != NULL){
      return m_wxAnyButtonExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxAnyButtonExtDoSetLabelMarkupwxStringCRFunc m_wxAnyButtonExtDoSetLabelMarkupwxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxAnyButton::DoSetLabelMarkup(markup);
    if (*m_wxAnyButtonExtDoSetLabelMarkupwxStringCR != NULL){
      return m_wxAnyButtonExtDoSetLabelMarkupwxStringCR(this, markup, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtDoSetSizeintintintintintFunc m_wxAnyButtonExtDoSetSizeintintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxAnyButton::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxAnyButtonExtDoSetSizeintintintintint != NULL){
      return m_wxAnyButtonExtDoSetSizeintintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxAnyButtonExtDoSetSizeHintsintintintintintintFunc m_wxAnyButtonExtDoSetSizeHintsintintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxAnyButton::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxAnyButtonExtDoSetSizeHintsintintintintintint != NULL){
      return m_wxAnyButtonExtDoSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxAnyButtonExtDoSetToolTipwxToolTipPFunc m_wxAnyButtonExtDoSetToolTipwxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxAnyButton::DoSetToolTip(tip);
    if (*m_wxAnyButtonExtDoSetToolTipwxToolTipP != NULL){
      return m_wxAnyButtonExtDoSetToolTipwxToolTipP(this, tip);
    }
  }
  wxAnyButtonExtDoSetToolTipTextwxStringCRFunc m_wxAnyButtonExtDoSetToolTipTextwxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxAnyButton::DoSetToolTipText(tip);
    if (*m_wxAnyButtonExtDoSetToolTipTextwxStringCR != NULL){
      return m_wxAnyButtonExtDoSetToolTipTextwxStringCR(this, tip);
    }
  }
  wxAnyButtonExtDoSetVirtualSizeintintFunc m_wxAnyButtonExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxAnyButton::DoSetVirtualSize(x, y);
    if (*m_wxAnyButtonExtDoSetVirtualSizeintint != NULL){
      return m_wxAnyButtonExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxAnyButtonExtDoSetWindowVariantwxWindowVariantFunc m_wxAnyButtonExtDoSetWindowVariantwxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxAnyButton::DoSetWindowVariant(variant);
    if (*m_wxAnyButtonExtDoSetWindowVariantwxWindowVariant != NULL){
      return m_wxAnyButtonExtDoSetWindowVariantwxWindowVariant(this, variant);
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
  wxAnyButtonExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxAnyButtonExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxAnyButton::DoUpdateWindowUI(event);
    if (*m_wxAnyButtonExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxAnyButtonExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxAnyButtonExtDragAcceptFilesboolFunc m_wxAnyButtonExtDragAcceptFilesbool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxAnyButton::DragAcceptFiles(accept);
    if (*m_wxAnyButtonExtDragAcceptFilesbool != NULL){
      return m_wxAnyButtonExtDragAcceptFilesbool(this, accept);
    }
  }
  wxAnyButtonExtEnableboolFunc m_wxAnyButtonExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxAnyButton::Enable(enable);
    if (*m_wxAnyButtonExtEnablebool != NULL){
      return m_wxAnyButtonExtEnablebool(this, enable, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtEnableTouchEventsintFunc m_wxAnyButtonExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int eventsMask) override
  {
    bool res = wxAnyButton::EnableTouchEvents(eventsMask);
    if (*m_wxAnyButtonExtEnableTouchEventsint != NULL){
      return m_wxAnyButtonExtEnableTouchEventsint(this, eventsMask, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtEnableVisibleFocusboolFunc m_wxAnyButtonExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool enabled) override
  {
    wxAnyButton::EnableVisibleFocus(enabled);
    if (*m_wxAnyButtonExtEnableVisibleFocusbool != NULL){
      return m_wxAnyButtonExtEnableVisibleFocusbool(this, enabled);
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
  wxAnyButtonExtGetClientSizeConstraintintPintPFunc m_wxAnyButtonExtGetClientSizeConstraintintPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxAnyButton::GetClientSizeConstraint(w, h);
    if (*m_wxAnyButtonExtGetClientSizeConstraintintPintP != NULL){
      return m_wxAnyButtonExtGetClientSizeConstraintintPintP(this, w, h);
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
  wxAnyButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc m_wxAnyButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxAnyButton::GetHelpTextAtPoint(pt, origin);
    if (*m_wxAnyButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin != NULL){
      return m_wxAnyButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin(this, pt, origin, res);
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
  wxAnyButtonExtGetPositionConstraintintPintPFunc m_wxAnyButtonExtGetPositionConstraintintPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxAnyButton::GetPositionConstraint(x, y);
    if (*m_wxAnyButtonExtGetPositionConstraintintPintP != NULL){
      return m_wxAnyButtonExtGetPositionConstraintintPintP(this, x, y);
    }
  }
  wxAnyButtonExtGetScrollPosintFunc m_wxAnyButtonExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxAnyButton::GetScrollPos(orient);
    if (*m_wxAnyButtonExtGetScrollPosint != NULL){
      return m_wxAnyButtonExtGetScrollPosint(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetScrollRangeintFunc m_wxAnyButtonExtGetScrollRangeint = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxAnyButton::GetScrollRange(orient);
    if (*m_wxAnyButtonExtGetScrollRangeint != NULL){
      return m_wxAnyButtonExtGetScrollRangeint(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetScrollThumbintFunc m_wxAnyButtonExtGetScrollThumbint = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxAnyButton::GetScrollThumb(orient);
    if (*m_wxAnyButtonExtGetScrollThumbint != NULL){
      return m_wxAnyButtonExtGetScrollThumbint(this, orient, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtGetSizeConstraintintPintPFunc m_wxAnyButtonExtGetSizeConstraintintPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxAnyButton::GetSizeConstraint(w, h);
    if (*m_wxAnyButtonExtGetSizeConstraintintPintP != NULL){
      return m_wxAnyButtonExtGetSizeConstraintintPintP(this, w, h);
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
  wxAnyButtonExtHideWithEffectwxShowEffectunsignedintFunc m_wxAnyButtonExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxAnyButton::HideWithEffect(effect, timeout);
    if (*m_wxAnyButtonExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxAnyButtonExtHideWithEffectwxShowEffectunsignedint(this, effect, timeout, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtInformFirstDirectionintintintFunc m_wxAnyButtonExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxAnyButton::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxAnyButtonExtInformFirstDirectionintintint != NULL){
      return m_wxAnyButtonExtInformFirstDirectionintintint(this, direction, size, availableOtherDir, res);
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
  wxAnyButtonExtIsClientAreaChildwxWindowCPFunc m_wxAnyButtonExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* param0) const override
  {
    bool res = wxAnyButton::IsClientAreaChild(param0);
    if (*m_wxAnyButtonExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxAnyButtonExtIsClientAreaChildwxWindowCP(this, param0, res);
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
  wxAnyButtonExtIsScrollbarAlwaysShownintFunc m_wxAnyButtonExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int orient) const override
  {
    bool res = wxAnyButton::IsScrollbarAlwaysShown(orient);
    if (*m_wxAnyButtonExtIsScrollbarAlwaysShownint != NULL){
      return m_wxAnyButtonExtIsScrollbarAlwaysShownint(this, orient, res);
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
  wxAnyButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxAnyButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind param0) const override
  {
    bool res = wxAnyButton::IsTopNavigationDomain(param0);
    if (*m_wxAnyButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxAnyButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtIsTransparentBackgroundSupportedwxStringPFunc m_wxAnyButtonExtIsTransparentBackgroundSupportedwxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxAnyButton::IsTransparentBackgroundSupported(reason);
    if (*m_wxAnyButtonExtIsTransparentBackgroundSupportedwxStringP != NULL){
      return m_wxAnyButtonExtIsTransparentBackgroundSupportedwxStringP(this, reason, res);
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
  wxAnyButtonExtLayoutPhase1intPFunc m_wxAnyButtonExtLayoutPhase1intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxAnyButton::LayoutPhase1(noChanges);
    if (*m_wxAnyButtonExtLayoutPhase1intP != NULL){
      return m_wxAnyButtonExtLayoutPhase1intP(this, noChanges, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtLayoutPhase2intPFunc m_wxAnyButtonExtLayoutPhase2intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxAnyButton::LayoutPhase2(noChanges);
    if (*m_wxAnyButtonExtLayoutPhase2intP != NULL){
      return m_wxAnyButtonExtLayoutPhase2intP(this, noChanges, res);
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
  wxAnyButtonExtMoveConstraintintintFunc m_wxAnyButtonExtMoveConstraintintint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxAnyButton::MoveConstraint(x, y);
    if (*m_wxAnyButtonExtMoveConstraintintint != NULL){
      return m_wxAnyButtonExtMoveConstraintintint(this, x, y);
    }
  }
  wxAnyButtonExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxAnyButtonExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxAnyButton::OnDynamicBind(param0);
    if (*m_wxAnyButtonExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxAnyButtonExtOnDynamicBindwxDynamicEventTableEntryR(this, param0, res);
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
  wxAnyButtonExtPrepareDCwxDCRFunc m_wxAnyButtonExtPrepareDCwxDCR = NULL;
  virtual void PrepareDC(wxDC& param0) override
  {
    wxAnyButton::PrepareDC(param0);
    if (*m_wxAnyButtonExtPrepareDCwxDCR != NULL){
      return m_wxAnyButtonExtPrepareDCwxDCR(this, param0);
    }
  }
  wxAnyButtonExtProcessEventwxEventRFunc m_wxAnyButtonExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxAnyButton::ProcessEvent(event);
    if (*m_wxAnyButtonExtProcessEventwxEventR != NULL){
      return m_wxAnyButtonExtProcessEventwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtQueueEventwxEventPFunc m_wxAnyButtonExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxAnyButton::QueueEvent(event);
    if (*m_wxAnyButtonExtQueueEventwxEventP != NULL){
      return m_wxAnyButtonExtQueueEventwxEventP(this, event);
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
  wxAnyButtonExtRefreshboolwxRectCPFunc m_wxAnyButtonExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = __null) override
  {
    wxAnyButton::Refresh(eraseBackground, rect);
    if (*m_wxAnyButtonExtRefreshboolwxRectCP != NULL){
      return m_wxAnyButtonExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxAnyButtonExtRegisterHotKeyintintintFunc m_wxAnyButtonExtRegisterHotKeyintintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxAnyButton::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxAnyButtonExtRegisterHotKeyintintint != NULL){
      return m_wxAnyButtonExtRegisterHotKeyintintint(this, hotkeyId, modifiers, keycode, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtRemoveChildwxWindowBasePFunc m_wxAnyButtonExtRemoveChildwxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxAnyButton::RemoveChild(child);
    if (*m_wxAnyButtonExtRemoveChildwxWindowBaseP != NULL){
      return m_wxAnyButtonExtRemoveChildwxWindowBaseP(this, child);
    }
  }
  wxAnyButtonExtReparentwxWindowBasePFunc m_wxAnyButtonExtReparentwxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxAnyButton::Reparent(newParent);
    if (*m_wxAnyButtonExtReparentwxWindowBaseP != NULL){
      return m_wxAnyButtonExtReparentwxWindowBaseP(this, newParent, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtScrollLinesintFunc m_wxAnyButtonExtScrollLinesint = NULL;
  virtual bool ScrollLines(int param0) override
  {
    bool res = wxAnyButton::ScrollLines(param0);
    if (*m_wxAnyButtonExtScrollLinesint != NULL){
      return m_wxAnyButtonExtScrollLinesint(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtScrollPagesintFunc m_wxAnyButtonExtScrollPagesint = NULL;
  virtual bool ScrollPages(int param0) override
  {
    bool res = wxAnyButton::ScrollPages(param0);
    if (*m_wxAnyButtonExtScrollPagesint != NULL){
      return m_wxAnyButtonExtScrollPagesint(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtScrollWindowintintwxRectCPFunc m_wxAnyButtonExtScrollWindowintintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxAnyButton::ScrollWindow(dx, dy, rect);
    if (*m_wxAnyButtonExtScrollWindowintintwxRectCP != NULL){
      return m_wxAnyButtonExtScrollWindowintintwxRectCP(this, dx, dy, rect);
    }
  }
  wxAnyButtonExtSearchEventTablewxEventTableRwxEventRFunc m_wxAnyButtonExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxAnyButton::SearchEventTable(table, event);
    if (*m_wxAnyButtonExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxAnyButtonExtSearchEventTablewxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSendIdleEventswxIdleEventRFunc m_wxAnyButtonExtSendIdleEventswxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxAnyButton::SendIdleEvents(event);
    if (*m_wxAnyButtonExtSendIdleEventswxIdleEventR != NULL){
      return m_wxAnyButtonExtSendIdleEventswxIdleEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSendSizeEventintFunc m_wxAnyButtonExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxAnyButton::SendSizeEvent(flags);
    if (*m_wxAnyButtonExtSendSizeEventint != NULL){
      return m_wxAnyButtonExtSendSizeEventint(this, flags);
    }
  }
  wxAnyButtonExtSetAcceleratorTablewxAcceleratorTableCRFunc m_wxAnyButtonExtSetAcceleratorTablewxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxAnyButton::SetAcceleratorTable(accel);
    if (*m_wxAnyButtonExtSetAcceleratorTablewxAcceleratorTableCR != NULL){
      return m_wxAnyButtonExtSetAcceleratorTablewxAcceleratorTableCR(this, accel);
    }
  }
  wxAnyButtonExtSetBackgroundColourwxColourCRFunc m_wxAnyButtonExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxAnyButton::SetBackgroundColour(colour);
    if (*m_wxAnyButtonExtSetBackgroundColourwxColourCR != NULL){
      return m_wxAnyButtonExtSetBackgroundColourwxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetBackgroundStylewxBackgroundStyleFunc m_wxAnyButtonExtSetBackgroundStylewxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxAnyButton::SetBackgroundStyle(style);
    if (*m_wxAnyButtonExtSetBackgroundStylewxBackgroundStyle != NULL){
      return m_wxAnyButtonExtSetBackgroundStylewxBackgroundStyle(this, style, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetCanFocusboolFunc m_wxAnyButtonExtSetCanFocusbool = NULL;
  virtual void SetCanFocus(bool param0) override
  {
    wxAnyButton::SetCanFocus(param0);
    if (*m_wxAnyButtonExtSetCanFocusbool != NULL){
      return m_wxAnyButtonExtSetCanFocusbool(this, param0);
    }
  }
  wxAnyButtonExtSetConstraintSizesboolFunc m_wxAnyButtonExtSetConstraintSizesbool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxAnyButton::SetConstraintSizes(recurse);
    if (*m_wxAnyButtonExtSetConstraintSizesbool != NULL){
      return m_wxAnyButtonExtSetConstraintSizesbool(this, recurse);
    }
  }
  wxAnyButtonExtSetCursorwxCursorCRFunc m_wxAnyButtonExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxAnyButton::SetCursor(cursor);
    if (*m_wxAnyButtonExtSetCursorwxCursorCR != NULL){
      return m_wxAnyButtonExtSetCursorwxCursorCR(this, cursor, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetDoubleBufferedboolFunc m_wxAnyButtonExtSetDoubleBufferedbool = NULL;
  virtual void SetDoubleBuffered(bool param0) override
  {
    wxAnyButton::SetDoubleBuffered(param0);
    if (*m_wxAnyButtonExtSetDoubleBufferedbool != NULL){
      return m_wxAnyButtonExtSetDoubleBufferedbool(this, param0);
    }
  }
  wxAnyButtonExtSetDropTargetwxDropTargetPFunc m_wxAnyButtonExtSetDropTargetwxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxAnyButton::SetDropTarget(dropTarget);
    if (*m_wxAnyButtonExtSetDropTargetwxDropTargetP != NULL){
      return m_wxAnyButtonExtSetDropTargetwxDropTargetP(this, dropTarget);
    }
  }
  wxAnyButtonExtSetExtraStylelongFunc m_wxAnyButtonExtSetExtraStylelong = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxAnyButton::SetExtraStyle(exStyle);
    if (*m_wxAnyButtonExtSetExtraStylelong != NULL){
      return m_wxAnyButtonExtSetExtraStylelong(this, exStyle);
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
  wxAnyButtonExtSetFontwxFontCRFunc m_wxAnyButtonExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxAnyButton::SetFont(font);
    if (*m_wxAnyButtonExtSetFontwxFontCR != NULL){
      return m_wxAnyButtonExtSetFontwxFontCR(this, font, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetForegroundColourwxColourCRFunc m_wxAnyButtonExtSetForegroundColourwxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxAnyButton::SetForegroundColour(colour);
    if (*m_wxAnyButtonExtSetForegroundColourwxColourCR != NULL){
      return m_wxAnyButtonExtSetForegroundColourwxColourCR(this, colour, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetIdwxWindowIDFunc m_wxAnyButtonExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxAnyButton::SetId(winid);
    if (*m_wxAnyButtonExtSetIdwxWindowID != NULL){
      return m_wxAnyButtonExtSetIdwxWindowID(this, winid);
    }
  }
  wxAnyButtonExtSetLabelwxStringCRFunc m_wxAnyButtonExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxAnyButton::SetLabel(label);
    if (*m_wxAnyButtonExtSetLabelwxStringCR != NULL){
      return m_wxAnyButtonExtSetLabelwxStringCR(this, label);
    }
  }
  wxAnyButtonExtSetLabelTextwxStringCRFunc m_wxAnyButtonExtSetLabelTextwxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxAnyButton::SetLabelText(text);
    if (*m_wxAnyButtonExtSetLabelTextwxStringCR != NULL){
      return m_wxAnyButtonExtSetLabelTextwxStringCR(this, text);
    }
  }
  wxAnyButtonExtSetLayoutDirectionwxLayoutDirectionFunc m_wxAnyButtonExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxAnyButton::SetLayoutDirection(param0);
    if (*m_wxAnyButtonExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxAnyButtonExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxAnyButtonExtSetMaxClientSizewxSizeCRFunc m_wxAnyButtonExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxAnyButton::SetMaxClientSize(size);
    if (*m_wxAnyButtonExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxAnyButtonExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxAnyButtonExtSetMaxSizewxSizeCRFunc m_wxAnyButtonExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxAnyButton::SetMaxSize(maxSize);
    if (*m_wxAnyButtonExtSetMaxSizewxSizeCR != NULL){
      return m_wxAnyButtonExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxAnyButtonExtSetMinClientSizewxSizeCRFunc m_wxAnyButtonExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxAnyButton::SetMinClientSize(size);
    if (*m_wxAnyButtonExtSetMinClientSizewxSizeCR != NULL){
      return m_wxAnyButtonExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxAnyButtonExtSetMinSizewxSizeCRFunc m_wxAnyButtonExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxAnyButton::SetMinSize(minSize);
    if (*m_wxAnyButtonExtSetMinSizewxSizeCR != NULL){
      return m_wxAnyButtonExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxAnyButtonExtSetNamewxStringCRFunc m_wxAnyButtonExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxAnyButton::SetName(name);
    if (*m_wxAnyButtonExtSetNamewxStringCR != NULL){
      return m_wxAnyButtonExtSetNamewxStringCR(this, name);
    }
  }
  wxAnyButtonExtSetNextHandlerwxEvtHandlerPFunc m_wxAnyButtonExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxAnyButton::SetNextHandler(handler);
    if (*m_wxAnyButtonExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxAnyButtonExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxAnyButtonExtSetPreviousHandlerwxEvtHandlerPFunc m_wxAnyButtonExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxAnyButton::SetPreviousHandler(handler);
    if (*m_wxAnyButtonExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxAnyButtonExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxAnyButtonExtSetScrollPosintintboolFunc m_wxAnyButtonExtSetScrollPosintintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxAnyButton::SetScrollPos(orient, pos, refresh);
    if (*m_wxAnyButtonExtSetScrollPosintintbool != NULL){
      return m_wxAnyButtonExtSetScrollPosintintbool(this, orient, pos, refresh);
    }
  }
  wxAnyButtonExtSetScrollbarintintintintboolFunc m_wxAnyButtonExtSetScrollbarintintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh = true) override
  {
    wxAnyButton::SetScrollbar(orient, pos, thumbVisible, range, refresh);
    if (*m_wxAnyButtonExtSetScrollbarintintintintbool != NULL){
      return m_wxAnyButtonExtSetScrollbarintintintintbool(this, orient, pos, thumbVisible, range, refresh);
    }
  }
  wxAnyButtonExtSetSizeConstraintintintintintFunc m_wxAnyButtonExtSetSizeConstraintintintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxAnyButton::SetSizeConstraint(x, y, w, h);
    if (*m_wxAnyButtonExtSetSizeConstraintintintintint != NULL){
      return m_wxAnyButtonExtSetSizeConstraintintintintint(this, x, y, w, h);
    }
  }
  wxAnyButtonExtSetSizeHintsintintintintintintFunc m_wxAnyButtonExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxAnyButton::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxAnyButtonExtSetSizeHintsintintintintintint != NULL){
      return m_wxAnyButtonExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxAnyButtonExtSetThemeEnabledboolFunc m_wxAnyButtonExtSetThemeEnabledbool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxAnyButton::SetThemeEnabled(enableTheme);
    if (*m_wxAnyButtonExtSetThemeEnabledbool != NULL){
      return m_wxAnyButtonExtSetThemeEnabledbool(this, enableTheme);
    }
  }
  wxAnyButtonExtSetTransparentwxByteFunc m_wxAnyButtonExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte alpha) override
  {
    bool res = wxAnyButton::SetTransparent(alpha);
    if (*m_wxAnyButtonExtSetTransparentwxByte != NULL){
      return m_wxAnyButtonExtSetTransparentwxByte(this, alpha, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtSetValidatorwxValidatorCRFunc m_wxAnyButtonExtSetValidatorwxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxAnyButton::SetValidator(validator);
    if (*m_wxAnyButtonExtSetValidatorwxValidatorCR != NULL){
      return m_wxAnyButtonExtSetValidatorwxValidatorCR(this, validator);
    }
  }
  wxAnyButtonExtSetWindowStyleFlaglongFunc m_wxAnyButtonExtSetWindowStyleFlaglong = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxAnyButton::SetWindowStyleFlag(style);
    if (*m_wxAnyButtonExtSetWindowStyleFlaglong != NULL){
      return m_wxAnyButtonExtSetWindowStyleFlaglong(this, style);
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
  wxAnyButtonExtShowboolFunc m_wxAnyButtonExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxAnyButton::Show(show);
    if (*m_wxAnyButtonExtShowbool != NULL){
      return m_wxAnyButtonExtShowbool(this, show, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtShowWithEffectwxShowEffectunsignedintFunc m_wxAnyButtonExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) override
  {
    bool res = wxAnyButton::ShowWithEffect(effect, timeout);
    if (*m_wxAnyButtonExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxAnyButtonExtShowWithEffectwxShowEffectunsignedint(this, effect, timeout, res);
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
  wxAnyButtonExtTriggerScrollEventwxEventTypeFunc m_wxAnyButtonExtTriggerScrollEventwxEventType = NULL;
  virtual void TriggerScrollEvent(wxEventType scrollEvent) override
  {
    wxAnyButton::TriggerScrollEvent(scrollEvent);
    if (*m_wxAnyButtonExtTriggerScrollEventwxEventType != NULL){
      return m_wxAnyButtonExtTriggerScrollEventwxEventType(this, scrollEvent);
    }
  }
  wxAnyButtonExtTryAfterwxEventRFunc m_wxAnyButtonExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxAnyButton::TryAfter(event);
    if (*m_wxAnyButtonExtTryAfterwxEventR != NULL){
      return m_wxAnyButtonExtTryAfterwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtTryBeforewxEventRFunc m_wxAnyButtonExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxAnyButton::TryBefore(event);
    if (*m_wxAnyButtonExtTryBeforewxEventR != NULL){
      return m_wxAnyButtonExtTryBeforewxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtUnregisterHotKeyintFunc m_wxAnyButtonExtUnregisterHotKeyint = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxAnyButton::UnregisterHotKey(hotkeyId);
    if (*m_wxAnyButtonExtUnregisterHotKeyint != NULL){
      return m_wxAnyButtonExtUnregisterHotKeyint(this, hotkeyId, res);
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
  wxAnyButtonExtUpdateWindowUIlongFunc m_wxAnyButtonExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxAnyButton::UpdateWindowUI(flags);
    if (*m_wxAnyButtonExtUpdateWindowUIlong != NULL){
      return m_wxAnyButtonExtUpdateWindowUIlong(this, flags);
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
  wxAnyButtonExtWXAdjustFontToOwnPPIwxFontRFunc m_wxAnyButtonExtWXAdjustFontToOwnPPIwxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& param0) const override
  {
    wxAnyButton::WXAdjustFontToOwnPPI(param0);
    if (*m_wxAnyButtonExtWXAdjustFontToOwnPPIwxFontR != NULL){
      return m_wxAnyButtonExtWXAdjustFontToOwnPPIwxFontR(this, param0);
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
  wxAnyButtonExtWXReservedEvtHandler1voidPFunc m_wxAnyButtonExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxAnyButton::WXReservedEvtHandler1(param0);
    if (*m_wxAnyButtonExtWXReservedEvtHandler1voidP != NULL){
      return m_wxAnyButtonExtWXReservedEvtHandler1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXReservedEvtHandler2voidPFunc m_wxAnyButtonExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxAnyButton::WXReservedEvtHandler2(param0);
    if (*m_wxAnyButtonExtWXReservedEvtHandler2voidP != NULL){
      return m_wxAnyButtonExtWXReservedEvtHandler2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXReservedWindow1voidPFunc m_wxAnyButtonExtWXReservedWindow1voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxAnyButton::WXReservedWindow1(param0);
    if (*m_wxAnyButtonExtWXReservedWindow1voidP != NULL){
      return m_wxAnyButtonExtWXReservedWindow1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXReservedWindow2voidPFunc m_wxAnyButtonExtWXReservedWindow2voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxAnyButton::WXReservedWindow2(param0);
    if (*m_wxAnyButtonExtWXReservedWindow2voidP != NULL){
      return m_wxAnyButtonExtWXReservedWindow2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXReservedWindow3voidPFunc m_wxAnyButtonExtWXReservedWindow3voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxAnyButton::WXReservedWindow3(param0);
    if (*m_wxAnyButtonExtWXReservedWindow3voidP != NULL){
      return m_wxAnyButtonExtWXReservedWindow3voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExtWXSetInitialFittingClientSizeintwxSizerPFunc m_wxAnyButtonExtWXSetInitialFittingClientSizeintwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxAnyButton::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxAnyButtonExtWXSetInitialFittingClientSizeintwxSizerP != NULL){
      return m_wxAnyButtonExtWXSetInitialFittingClientSizeintwxSizerP(this, flags, sizer);
    }
  }
  wxAnyButtonExtWarpPointerintintFunc m_wxAnyButtonExtWarpPointerintint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxAnyButton::WarpPointer(x, y);
    if (*m_wxAnyButtonExtWarpPointerintint != NULL){
      return m_wxAnyButtonExtWarpPointerintint(this, x, y);
    }
  }
  wxAnyButtonExtWindowToClientSizewxSizeCRFunc m_wxAnyButtonExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxAnyButton::WindowToClientSize(size);
    if (*m_wxAnyButtonExtWindowToClientSizewxSizeCR != NULL){
      return m_wxAnyButtonExtWindowToClientSizewxSizeCR(this, size, res);
    }
    else {
      return res;
    }
  }
  wxAnyButtonExt(wxAnyButtonExtAcceptsFocusFunc a_AcceptsFocus, wxAnyButtonExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxAnyButtonExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxAnyButtonExtAddChildwxWindowBasePFunc a_AddChildwxWindowBaseP, wxAnyButtonExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxAnyButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxAnyButtonExtAdjustForParentClientOriginintRintRintFunc a_AdjustForParentClientOriginintRintRint, wxAnyButtonExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxAnyButtonExtAssociateHandleWXWidgetFunc a_AssociateHandleWXWidget, wxAnyButtonExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxAnyButtonExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxAnyButtonExtCanBeFocusedFunc a_CanBeFocused, wxAnyButtonExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxAnyButtonExtCanScrollintFunc a_CanScrollint, wxAnyButtonExtCanSetTransparentFunc a_CanSetTransparent, wxAnyButtonExtClearBackgroundFunc a_ClearBackground, wxAnyButtonExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxAnyButtonExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxAnyButtonExtCommandwxCommandEventRFunc a_CommandwxCommandEventR, wxAnyButtonExtCreateRefDataFunc a_CreateRefData, wxAnyButtonExtDestroyFunc a_Destroy, wxAnyButtonExtDissociateHandleFunc a_DissociateHandle, wxAnyButtonExtDoCaptureMouseFunc a_DoCaptureMouse, wxAnyButtonExtDoCentreintFunc a_DoCentreint, wxAnyButtonExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxAnyButtonExtDoEnableboolFunc a_DoEnablebool, wxAnyButtonExtDoFreezeFunc a_DoFreeze, wxAnyButtonExtDoGetAuthNeededFunc a_DoGetAuthNeeded, wxAnyButtonExtDoGetBestClientHeightintFunc a_DoGetBestClientHeightint, wxAnyButtonExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxAnyButtonExtDoGetBestClientWidthintFunc a_DoGetBestClientWidthint, wxAnyButtonExtDoGetBestSizeFunc a_DoGetBestSize, wxAnyButtonExtDoGetBitmapwxAnyButtonBaseNStateFunc a_DoGetBitmapwxAnyButtonBaseNState, wxAnyButtonExtDoGetBitmapMarginsFunc a_DoGetBitmapMargins, wxAnyButtonExtDoGetClientDataFunc a_DoGetClientData, wxAnyButtonExtDoGetClientObjectFunc a_DoGetClientObject, wxAnyButtonExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxAnyButtonExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxAnyButtonExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxAnyButtonExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxAnyButtonExtDoGetSizeFromClientSizewxSizeCRFunc a_DoGetSizeFromClientSizewxSizeCR, wxAnyButtonExtDoGetSizeFromTextSizeintintFunc a_DoGetSizeFromTextSizeintint, wxAnyButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxAnyButtonExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxAnyButtonExtDoHitTestwxCoordwxCoordFunc a_DoHitTestwxCoordwxCoord, wxAnyButtonExtDoIsExposedintintintintFunc a_DoIsExposedintintintint, wxAnyButtonExtDoIsExposedintintFunc a_DoIsExposedintint, wxAnyButtonExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder, wxAnyButtonExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxAnyButtonExtDoNavigateInintFunc a_DoNavigateInint, wxAnyButtonExtDoPhaseintFunc a_DoPhaseint, wxAnyButtonExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxAnyButtonExtDoReleaseMouseFunc a_DoReleaseMouse, wxAnyButtonExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxAnyButtonExtDoSetAuthNeededboolFunc a_DoSetAuthNeededbool, wxAnyButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc a_DoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState, wxAnyButtonExtDoSetBitmapMarginswxCoordwxCoordFunc a_DoSetBitmapMarginswxCoordwxCoord, wxAnyButtonExtDoSetBitmapPositionwxDirectionFunc a_DoSetBitmapPositionwxDirection, wxAnyButtonExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxAnyButtonExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxAnyButtonExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxAnyButtonExtDoSetLabelMarkupwxStringCRFunc a_DoSetLabelMarkupwxStringCR, wxAnyButtonExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxAnyButtonExtDoSetSizeHintsintintintintintintFunc a_DoSetSizeHintsintintintintintint, wxAnyButtonExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxAnyButtonExtDoSetToolTipTextwxStringCRFunc a_DoSetToolTipTextwxStringCR, wxAnyButtonExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxAnyButtonExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxAnyButtonExtDoThawFunc a_DoThaw, wxAnyButtonExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxAnyButtonExtDragAcceptFilesboolFunc a_DragAcceptFilesbool, wxAnyButtonExtEnableboolFunc a_Enablebool, wxAnyButtonExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxAnyButtonExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxAnyButtonExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxAnyButtonExtFitFunc a_Fit, wxAnyButtonExtFitInsideFunc a_FitInside, wxAnyButtonExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxAnyButtonExtGetCharHeightFunc a_GetCharHeight, wxAnyButtonExtGetCharWidthFunc a_GetCharWidth, wxAnyButtonExtGetClassInfoFunc a_GetClassInfo, wxAnyButtonExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxAnyButtonExtGetClientSizeConstraintintPintPFunc a_GetClientSizeConstraintintPintP, wxAnyButtonExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxAnyButtonExtGetDPIFunc a_GetDPI, wxAnyButtonExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxAnyButtonExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxAnyButtonExtGetDefaultBorderFunc a_GetDefaultBorder, wxAnyButtonExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxAnyButtonExtGetDropTargetFunc a_GetDropTarget, wxAnyButtonExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxAnyButtonExtGetEventHashTableFunc a_GetEventHashTable, wxAnyButtonExtGetEventTableFunc a_GetEventTable, wxAnyButtonExtGetHandleFunc a_GetHandle, wxAnyButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin, wxAnyButtonExtGetLabelFunc a_GetLabel, wxAnyButtonExtGetLabelTextFunc a_GetLabelText, wxAnyButtonExtGetLayoutDirectionFunc a_GetLayoutDirection, wxAnyButtonExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxAnyButtonExtGetMaxClientSizeFunc a_GetMaxClientSize, wxAnyButtonExtGetMaxSizeFunc a_GetMaxSize, wxAnyButtonExtGetMinClientSizeFunc a_GetMinClientSize, wxAnyButtonExtGetMinSizeFunc a_GetMinSize, wxAnyButtonExtGetNameFunc a_GetName, wxAnyButtonExtGetNormalStateFunc a_GetNormalState, wxAnyButtonExtGetPositionConstraintintPintPFunc a_GetPositionConstraintintPintP, wxAnyButtonExtGetScrollPosintFunc a_GetScrollPosint, wxAnyButtonExtGetScrollRangeintFunc a_GetScrollRangeint, wxAnyButtonExtGetScrollThumbintFunc a_GetScrollThumbint, wxAnyButtonExtGetSizeConstraintintPintPFunc a_GetSizeConstraintintPintP, wxAnyButtonExtGetThemeEnabledFunc a_GetThemeEnabled, wxAnyButtonExtGetTransparentFunc a_GetTransparent, wxAnyButtonExtGetValidatorFunc a_GetValidator, wxAnyButtonExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxAnyButtonExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxAnyButtonExtHasCaptureFunc a_HasCapture, wxAnyButtonExtHasFocusFunc a_HasFocus, wxAnyButtonExtHasMultiplePagesFunc a_HasMultiplePages, wxAnyButtonExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxAnyButtonExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxAnyButtonExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxAnyButtonExtInheritAttributesFunc a_InheritAttributes, wxAnyButtonExtInitDialogFunc a_InitDialog, wxAnyButtonExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxAnyButtonExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxAnyButtonExtIsRetainedFunc a_IsRetained, wxAnyButtonExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxAnyButtonExtIsShownFunc a_IsShown, wxAnyButtonExtIsShownOnScreenFunc a_IsShownOnScreen, wxAnyButtonExtIsThisEnabledFunc a_IsThisEnabled, wxAnyButtonExtIsTopLevelFunc a_IsTopLevel, wxAnyButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxAnyButtonExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxAnyButtonExtLayoutFunc a_Layout, wxAnyButtonExtLayoutPhase1intPFunc a_LayoutPhase1intP, wxAnyButtonExtLayoutPhase2intPFunc a_LayoutPhase2intP, wxAnyButtonExtLowerFunc a_Lower, wxAnyButtonExtMoveConstraintintintFunc a_MoveConstraintintint, wxAnyButtonExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxAnyButtonExtOnInternalIdleFunc a_OnInternalIdle, wxAnyButtonExtPrepareDCwxDCRFunc a_PrepareDCwxDCR, wxAnyButtonExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxAnyButtonExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxAnyButtonExtRaiseFunc a_Raise, wxAnyButtonExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxAnyButtonExtRegisterHotKeyintintintFunc a_RegisterHotKeyintintint, wxAnyButtonExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxAnyButtonExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxAnyButtonExtScrollLinesintFunc a_ScrollLinesint, wxAnyButtonExtScrollPagesintFunc a_ScrollPagesint, wxAnyButtonExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxAnyButtonExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxAnyButtonExtSendIdleEventswxIdleEventRFunc a_SendIdleEventswxIdleEventR, wxAnyButtonExtSendSizeEventintFunc a_SendSizeEventint, wxAnyButtonExtSetAcceleratorTablewxAcceleratorTableCRFunc a_SetAcceleratorTablewxAcceleratorTableCR, wxAnyButtonExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxAnyButtonExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxAnyButtonExtSetCanFocusboolFunc a_SetCanFocusbool, wxAnyButtonExtSetConstraintSizesboolFunc a_SetConstraintSizesbool, wxAnyButtonExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxAnyButtonExtSetDoubleBufferedboolFunc a_SetDoubleBufferedbool, wxAnyButtonExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxAnyButtonExtSetExtraStylelongFunc a_SetExtraStylelong, wxAnyButtonExtSetFocusFunc a_SetFocus, wxAnyButtonExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxAnyButtonExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxAnyButtonExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxAnyButtonExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxAnyButtonExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxAnyButtonExtSetLabelTextwxStringCRFunc a_SetLabelTextwxStringCR, wxAnyButtonExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxAnyButtonExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxAnyButtonExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxAnyButtonExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxAnyButtonExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxAnyButtonExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxAnyButtonExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxAnyButtonExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxAnyButtonExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxAnyButtonExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxAnyButtonExtSetSizeConstraintintintintintFunc a_SetSizeConstraintintintintint, wxAnyButtonExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxAnyButtonExtSetThemeEnabledboolFunc a_SetThemeEnabledbool, wxAnyButtonExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxAnyButtonExtSetValidatorwxValidatorCRFunc a_SetValidatorwxValidatorCR, wxAnyButtonExtSetWindowStyleFlaglongFunc a_SetWindowStyleFlaglong, wxAnyButtonExtShouldInheritColoursFunc a_ShouldInheritColours, wxAnyButtonExtShowboolFunc a_Showbool, wxAnyButtonExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxAnyButtonExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxAnyButtonExtTransferDataToWindowFunc a_TransferDataToWindow, wxAnyButtonExtTriggerScrollEventwxEventTypeFunc a_TriggerScrollEventwxEventType, wxAnyButtonExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxAnyButtonExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxAnyButtonExtUnregisterHotKeyintFunc a_UnregisterHotKeyint, wxAnyButtonExtUpdateFunc a_Update, wxAnyButtonExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxAnyButtonExtValidateFunc a_Validate, wxAnyButtonExtWXAdjustFontToOwnPPIwxFontRFunc a_WXAdjustFontToOwnPPIwxFontR, wxAnyButtonExtWXGetTextEntryFunc a_WXGetTextEntry, wxAnyButtonExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxAnyButtonExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxAnyButtonExtWXReservedWindow1voidPFunc a_WXReservedWindow1voidP, wxAnyButtonExtWXReservedWindow2voidPFunc a_WXReservedWindow2voidP, wxAnyButtonExtWXReservedWindow3voidPFunc a_WXReservedWindow3voidP, wxAnyButtonExtWXSetInitialFittingClientSizeintwxSizerPFunc a_WXSetInitialFittingClientSizeintwxSizerP, wxAnyButtonExtWarpPointerintintFunc a_WarpPointerintint, wxAnyButtonExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxAnyButton() {
    m_wxAnyButtonExtAcceptsFocus = a_AcceptsFocus;
    m_wxAnyButtonExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxAnyButtonExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxAnyButtonExtAddChildwxWindowBaseP = a_AddChildwxWindowBaseP;
    m_wxAnyButtonExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxAnyButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxAnyButtonExtAdjustForParentClientOriginintRintRint = a_AdjustForParentClientOriginintRintRint;
    m_wxAnyButtonExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxAnyButtonExtAssociateHandleWXWidget = a_AssociateHandleWXWidget;
    m_wxAnyButtonExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxAnyButtonExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxAnyButtonExtCanBeFocused = a_CanBeFocused;
    m_wxAnyButtonExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxAnyButtonExtCanScrollint = a_CanScrollint;
    m_wxAnyButtonExtCanSetTransparent = a_CanSetTransparent;
    m_wxAnyButtonExtClearBackground = a_ClearBackground;
    m_wxAnyButtonExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxAnyButtonExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxAnyButtonExtCommandwxCommandEventR = a_CommandwxCommandEventR;
    m_wxAnyButtonExtCreateRefData = a_CreateRefData;
    m_wxAnyButtonExtDestroy = a_Destroy;
    m_wxAnyButtonExtDissociateHandle = a_DissociateHandle;
    m_wxAnyButtonExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxAnyButtonExtDoCentreint = a_DoCentreint;
    m_wxAnyButtonExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxAnyButtonExtDoEnablebool = a_DoEnablebool;
    m_wxAnyButtonExtDoFreeze = a_DoFreeze;
    m_wxAnyButtonExtDoGetAuthNeeded = a_DoGetAuthNeeded;
    m_wxAnyButtonExtDoGetBestClientHeightint = a_DoGetBestClientHeightint;
    m_wxAnyButtonExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxAnyButtonExtDoGetBestClientWidthint = a_DoGetBestClientWidthint;
    m_wxAnyButtonExtDoGetBestSize = a_DoGetBestSize;
    m_wxAnyButtonExtDoGetBitmapwxAnyButtonBaseNState = a_DoGetBitmapwxAnyButtonBaseNState;
    m_wxAnyButtonExtDoGetBitmapMargins = a_DoGetBitmapMargins;
    m_wxAnyButtonExtDoGetClientData = a_DoGetClientData;
    m_wxAnyButtonExtDoGetClientObject = a_DoGetClientObject;
    m_wxAnyButtonExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxAnyButtonExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxAnyButtonExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxAnyButtonExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxAnyButtonExtDoGetSizeFromClientSizewxSizeCR = a_DoGetSizeFromClientSizewxSizeCR;
    m_wxAnyButtonExtDoGetSizeFromTextSizeintint = a_DoGetSizeFromTextSizeintint;
    m_wxAnyButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxAnyButtonExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxAnyButtonExtDoHitTestwxCoordwxCoord = a_DoHitTestwxCoordwxCoord;
    m_wxAnyButtonExtDoIsExposedintintintint = a_DoIsExposedintintintint;
    m_wxAnyButtonExtDoIsExposedintint = a_DoIsExposedintint;
    m_wxAnyButtonExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder;
    m_wxAnyButtonExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxAnyButtonExtDoNavigateInint = a_DoNavigateInint;
    m_wxAnyButtonExtDoPhaseint = a_DoPhaseint;
    m_wxAnyButtonExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxAnyButtonExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxAnyButtonExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxAnyButtonExtDoSetAuthNeededbool = a_DoSetAuthNeededbool;
    m_wxAnyButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState = a_DoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState;
    m_wxAnyButtonExtDoSetBitmapMarginswxCoordwxCoord = a_DoSetBitmapMarginswxCoordwxCoord;
    m_wxAnyButtonExtDoSetBitmapPositionwxDirection = a_DoSetBitmapPositionwxDirection;
    m_wxAnyButtonExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxAnyButtonExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxAnyButtonExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxAnyButtonExtDoSetLabelMarkupwxStringCR = a_DoSetLabelMarkupwxStringCR;
    m_wxAnyButtonExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxAnyButtonExtDoSetSizeHintsintintintintintint = a_DoSetSizeHintsintintintintintint;
    m_wxAnyButtonExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxAnyButtonExtDoSetToolTipTextwxStringCR = a_DoSetToolTipTextwxStringCR;
    m_wxAnyButtonExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxAnyButtonExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxAnyButtonExtDoThaw = a_DoThaw;
    m_wxAnyButtonExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxAnyButtonExtDragAcceptFilesbool = a_DragAcceptFilesbool;
    m_wxAnyButtonExtEnablebool = a_Enablebool;
    m_wxAnyButtonExtEnableTouchEventsint = a_EnableTouchEventsint;
    m_wxAnyButtonExtEnableVisibleFocusbool = a_EnableVisibleFocusbool;
    m_wxAnyButtonExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxAnyButtonExtFit = a_Fit;
    m_wxAnyButtonExtFitInside = a_FitInside;
    m_wxAnyButtonExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxAnyButtonExtGetCharHeight = a_GetCharHeight;
    m_wxAnyButtonExtGetCharWidth = a_GetCharWidth;
    m_wxAnyButtonExtGetClassInfo = a_GetClassInfo;
    m_wxAnyButtonExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxAnyButtonExtGetClientSizeConstraintintPintP = a_GetClientSizeConstraintintPintP;
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
    m_wxAnyButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin;
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
    m_wxAnyButtonExtGetPositionConstraintintPintP = a_GetPositionConstraintintPintP;
    m_wxAnyButtonExtGetScrollPosint = a_GetScrollPosint;
    m_wxAnyButtonExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxAnyButtonExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxAnyButtonExtGetSizeConstraintintPintP = a_GetSizeConstraintintPintP;
    m_wxAnyButtonExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxAnyButtonExtGetTransparent = a_GetTransparent;
    m_wxAnyButtonExtGetValidator = a_GetValidator;
    m_wxAnyButtonExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxAnyButtonExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxAnyButtonExtHasCapture = a_HasCapture;
    m_wxAnyButtonExtHasFocus = a_HasFocus;
    m_wxAnyButtonExtHasMultiplePages = a_HasMultiplePages;
    m_wxAnyButtonExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxAnyButtonExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxAnyButtonExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxAnyButtonExtInheritAttributes = a_InheritAttributes;
    m_wxAnyButtonExtInitDialog = a_InitDialog;
    m_wxAnyButtonExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxAnyButtonExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxAnyButtonExtIsRetained = a_IsRetained;
    m_wxAnyButtonExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxAnyButtonExtIsShown = a_IsShown;
    m_wxAnyButtonExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxAnyButtonExtIsThisEnabled = a_IsThisEnabled;
    m_wxAnyButtonExtIsTopLevel = a_IsTopLevel;
    m_wxAnyButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxAnyButtonExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxAnyButtonExtLayout = a_Layout;
    m_wxAnyButtonExtLayoutPhase1intP = a_LayoutPhase1intP;
    m_wxAnyButtonExtLayoutPhase2intP = a_LayoutPhase2intP;
    m_wxAnyButtonExtLower = a_Lower;
    m_wxAnyButtonExtMoveConstraintintint = a_MoveConstraintintint;
    m_wxAnyButtonExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxAnyButtonExtOnInternalIdle = a_OnInternalIdle;
    m_wxAnyButtonExtPrepareDCwxDCR = a_PrepareDCwxDCR;
    m_wxAnyButtonExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxAnyButtonExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxAnyButtonExtRaise = a_Raise;
    m_wxAnyButtonExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxAnyButtonExtRegisterHotKeyintintint = a_RegisterHotKeyintintint;
    m_wxAnyButtonExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxAnyButtonExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxAnyButtonExtScrollLinesint = a_ScrollLinesint;
    m_wxAnyButtonExtScrollPagesint = a_ScrollPagesint;
    m_wxAnyButtonExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxAnyButtonExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxAnyButtonExtSendIdleEventswxIdleEventR = a_SendIdleEventswxIdleEventR;
    m_wxAnyButtonExtSendSizeEventint = a_SendSizeEventint;
    m_wxAnyButtonExtSetAcceleratorTablewxAcceleratorTableCR = a_SetAcceleratorTablewxAcceleratorTableCR;
    m_wxAnyButtonExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxAnyButtonExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxAnyButtonExtSetCanFocusbool = a_SetCanFocusbool;
    m_wxAnyButtonExtSetConstraintSizesbool = a_SetConstraintSizesbool;
    m_wxAnyButtonExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxAnyButtonExtSetDoubleBufferedbool = a_SetDoubleBufferedbool;
    m_wxAnyButtonExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxAnyButtonExtSetExtraStylelong = a_SetExtraStylelong;
    m_wxAnyButtonExtSetFocus = a_SetFocus;
    m_wxAnyButtonExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxAnyButtonExtSetFontwxFontCR = a_SetFontwxFontCR;
    m_wxAnyButtonExtSetForegroundColourwxColourCR = a_SetForegroundColourwxColourCR;
    m_wxAnyButtonExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxAnyButtonExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxAnyButtonExtSetLabelTextwxStringCR = a_SetLabelTextwxStringCR;
    m_wxAnyButtonExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxAnyButtonExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxAnyButtonExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxAnyButtonExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxAnyButtonExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxAnyButtonExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxAnyButtonExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxAnyButtonExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxAnyButtonExtSetScrollPosintintbool = a_SetScrollPosintintbool;
    m_wxAnyButtonExtSetScrollbarintintintintbool = a_SetScrollbarintintintintbool;
    m_wxAnyButtonExtSetSizeConstraintintintintint = a_SetSizeConstraintintintintint;
    m_wxAnyButtonExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxAnyButtonExtSetThemeEnabledbool = a_SetThemeEnabledbool;
    m_wxAnyButtonExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxAnyButtonExtSetValidatorwxValidatorCR = a_SetValidatorwxValidatorCR;
    m_wxAnyButtonExtSetWindowStyleFlaglong = a_SetWindowStyleFlaglong;
    m_wxAnyButtonExtShouldInheritColours = a_ShouldInheritColours;
    m_wxAnyButtonExtShowbool = a_Showbool;
    m_wxAnyButtonExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxAnyButtonExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxAnyButtonExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxAnyButtonExtTriggerScrollEventwxEventType = a_TriggerScrollEventwxEventType;
    m_wxAnyButtonExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxAnyButtonExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxAnyButtonExtUnregisterHotKeyint = a_UnregisterHotKeyint;
    m_wxAnyButtonExtUpdate = a_Update;
    m_wxAnyButtonExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxAnyButtonExtValidate = a_Validate;
    m_wxAnyButtonExtWXAdjustFontToOwnPPIwxFontR = a_WXAdjustFontToOwnPPIwxFontR;
    m_wxAnyButtonExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxAnyButtonExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxAnyButtonExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxAnyButtonExtWXReservedWindow1voidP = a_WXReservedWindow1voidP;
    m_wxAnyButtonExtWXReservedWindow2voidP = a_WXReservedWindow2voidP;
    m_wxAnyButtonExtWXReservedWindow3voidP = a_WXReservedWindow3voidP;
    m_wxAnyButtonExtWXSetInitialFittingClientSizeintwxSizerP = a_WXSetInitialFittingClientSizeintwxSizerP;
    m_wxAnyButtonExtWarpPointerintint = a_WarpPointerintint;
    m_wxAnyButtonExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
  }
};



#endif
