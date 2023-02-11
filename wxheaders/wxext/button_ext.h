#ifndef _WX_BUTTON_H_EXT_
#define _WX_BUTTON_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxButtonBaseExt;
typedef bool (*wxButtonBaseExtAcceptsFocusFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtAcceptsFocusFromKeyboardFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtAcceptsFocusRecursivelyFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtAddChildwxWindowBasePFunc)(const wxButtonBaseExt* self, wxWindowBase* child);
typedef void (*wxButtonBaseExtAddPendingEventwxEventCRFunc)(const wxButtonBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxButtonBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal);
typedef void (*wxButtonBaseExtAdjustForParentClientOriginintRintRintFunc)(const wxButtonBaseExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxButtonBaseExtAlwaysShowScrollbarsboolboolFunc)(const wxButtonBaseExt* self, bool param0, bool param1);
typedef void (*wxButtonBaseExtAssociateHandleWXWidgetFunc)(const wxButtonBaseExt* self, WXWidget param0);
typedef bool (*wxButtonBaseExtBeginRepositioningChildrenFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtCanApplyThemeBorderFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtCanBeFocusedFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtCanBeOutsideClientAreaFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtCanScrollintFunc)(const wxButtonBaseExt* self, int orient);
typedef bool (*wxButtonBaseExtCanSetTransparentFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtClearBackgroundFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtClientToWindowSizewxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& size);
typedef wxObjectRefData* (*wxButtonBaseExtCloneRefDatawxObjectRefDataCPFunc)(const wxButtonBaseExt* self, wxObjectRefData const* data);
typedef void (*wxButtonBaseExtCommandwxCommandEventRFunc)(const wxButtonBaseExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxButtonBaseExtCreateRefDataFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtDestroyFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtDissociateHandleFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtDoCaptureMouseFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtDoCentreintFunc)(const wxButtonBaseExt* self, int dir);
typedef void (*wxButtonBaseExtDoClientToScreenintPintPFunc)(const wxButtonBaseExt* self, int* x, int* y);
typedef void (*wxButtonBaseExtDoEnableboolFunc)(const wxButtonBaseExt* self, bool param0);
typedef void (*wxButtonBaseExtDoFreezeFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtDoGetAuthNeededFunc)(const wxButtonBaseExt* self);
typedef int (*wxButtonBaseExtDoGetBestClientHeightintFunc)(const wxButtonBaseExt* self, int param0);
typedef wxSize (*wxButtonBaseExtDoGetBestClientSizeFunc)(const wxButtonBaseExt* self);
typedef int (*wxButtonBaseExtDoGetBestClientWidthintFunc)(const wxButtonBaseExt* self, int param0);
typedef wxSize (*wxButtonBaseExtDoGetBestSizeFunc)(const wxButtonBaseExt* self);
typedef wxBitmap (*wxButtonBaseExtDoGetBitmapwxAnyButtonBaseNStateFunc)(const wxButtonBaseExt* self, wxAnyButtonBase::State which);
typedef wxSize (*wxButtonBaseExtDoGetBitmapMarginsFunc)(const wxButtonBaseExt* self);
typedef void* (*wxButtonBaseExtDoGetClientDataFunc)(const wxButtonBaseExt* self);
typedef wxClientData* (*wxButtonBaseExtDoGetClientObjectFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtDoGetClientSizeintPintPFunc)(const wxButtonBaseExt* self, int* width, int* height);
typedef void (*wxButtonBaseExtDoGetPositionintPintPFunc)(const wxButtonBaseExt* self, int* x, int* y);
typedef void (*wxButtonBaseExtDoGetScreenPositionintPintPFunc)(const wxButtonBaseExt* self, int* x, int* y);
typedef void (*wxButtonBaseExtDoGetSizeintPintPFunc)(const wxButtonBaseExt* self, int* width, int* height);
typedef wxSize (*wxButtonBaseExtDoGetSizeFromTextSizeintintFunc)(const wxButtonBaseExt* self, int xlen, int ylen);
typedef void (*wxButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxButtonBaseExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* font);
typedef wxSize (*wxButtonBaseExtDoGetVirtualSizeFunc)(const wxButtonBaseExt* self);
typedef wxHitTest (*wxButtonBaseExtDoHitTestwxCoordwxCoordFunc)(const wxButtonBaseExt* self, wxCoord x, wxCoord y);
typedef bool (*wxButtonBaseExtDoIsExposedintintintintFunc)(const wxButtonBaseExt* self, int x, int y, int w, int h);
typedef bool (*wxButtonBaseExtDoIsExposedintintFunc)(const wxButtonBaseExt* self, int x, int y);
typedef void (*wxButtonBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc)(const wxButtonBaseExt* self, wxWindow* win, int move);
typedef void (*wxButtonBaseExtDoMoveWindowintintintintFunc)(const wxButtonBaseExt* self, int x, int y, int width, int height);
typedef bool (*wxButtonBaseExtDoNavigateInintFunc)(const wxButtonBaseExt* self, int flags);
typedef bool (*wxButtonBaseExtDoPhaseintFunc)(const wxButtonBaseExt* self, int phase);
typedef bool (*wxButtonBaseExtDoPopupMenuwxMenuPintintFunc)(const wxButtonBaseExt* self, wxMenu* menu, int x, int y);
typedef void (*wxButtonBaseExtDoReleaseMouseFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtDoScreenToClientintPintPFunc)(const wxButtonBaseExt* self, int* x, int* y);
typedef void (*wxButtonBaseExtDoSetAuthNeededboolFunc)(const wxButtonBaseExt* self, bool param0);
typedef void (*wxButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc)(const wxButtonBaseExt* self, wxBitmapBundle const& bitmapBundle, wxAnyButtonBase::State which);
typedef void (*wxButtonBaseExtDoSetBitmapMarginsintintFunc)(const wxButtonBaseExt* self, int x, int y);
typedef void (*wxButtonBaseExtDoSetBitmapMarginswxCoordwxCoordFunc)(const wxButtonBaseExt* self, wxCoord param0, wxCoord param1);
typedef void (*wxButtonBaseExtDoSetBitmapPositionwxDirectionFunc)(const wxButtonBaseExt* self, wxDirection dir);
typedef void (*wxButtonBaseExtDoSetClientDatavoidPFunc)(const wxButtonBaseExt* self, void* data);
typedef void (*wxButtonBaseExtDoSetClientObjectwxClientDataPFunc)(const wxButtonBaseExt* self, wxClientData* data);
typedef void (*wxButtonBaseExtDoSetClientSizeintintFunc)(const wxButtonBaseExt* self, int width, int height);
typedef bool (*wxButtonBaseExtDoSetLabelMarkupwxStringCRFunc)(const wxButtonBaseExt* self, wxString const& markup);
typedef void (*wxButtonBaseExtDoSetSizeintintintintintFunc)(const wxButtonBaseExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxButtonBaseExtDoSetSizeHintsintintintintintintFunc)(const wxButtonBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxButtonBaseExtDoSetToolTipwxToolTipPFunc)(const wxButtonBaseExt* self, wxToolTip* tip);
typedef void (*wxButtonBaseExtDoSetToolTipTextwxStringCRFunc)(const wxButtonBaseExt* self, wxString const& tip);
typedef void (*wxButtonBaseExtDoSetVirtualSizeintintFunc)(const wxButtonBaseExt* self, int x, int y);
typedef void (*wxButtonBaseExtDoSetWindowVariantwxWindowVariantFunc)(const wxButtonBaseExt* self, wxWindowVariant variant);
typedef void (*wxButtonBaseExtDoThawFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxButtonBaseExt* self, wxUpdateUIEvent& event);
typedef void (*wxButtonBaseExtDragAcceptFilesboolFunc)(const wxButtonBaseExt* self, bool accept);
typedef bool (*wxButtonBaseExtEnableboolFunc)(const wxButtonBaseExt* self, bool enable);
typedef bool (*wxButtonBaseExtEnableTouchEventsintFunc)(const wxButtonBaseExt* self, int param0);
typedef void (*wxButtonBaseExtEnableVisibleFocusboolFunc)(const wxButtonBaseExt* self, bool param0);
typedef void (*wxButtonBaseExtEndRepositioningChildrenFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtFitFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtFitInsideFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtGetBestVirtualSizeFunc)(const wxButtonBaseExt* self);
typedef int (*wxButtonBaseExtGetCharHeightFunc)(const wxButtonBaseExt* self);
typedef int (*wxButtonBaseExtGetCharWidthFunc)(const wxButtonBaseExt* self);
typedef wxClassInfo* (*wxButtonBaseExtGetClassInfoFunc)(const wxButtonBaseExt* self);
typedef wxPoint (*wxButtonBaseExtGetClientAreaOriginFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtGetClientSizeConstraintintPintPFunc)(const wxButtonBaseExt* self, int* w, int* h);
typedef double (*wxButtonBaseExtGetContentScaleFactorFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtGetDPIFunc)(const wxButtonBaseExt* self);
typedef double (*wxButtonBaseExtGetDPIScaleFactorFunc)(const wxButtonBaseExt* self);
typedef wxVisualAttributes (*wxButtonBaseExtGetDefaultAttributesFunc)(const wxButtonBaseExt* self);
typedef wxBorder (*wxButtonBaseExtGetDefaultBorderFunc)(const wxButtonBaseExt* self);
typedef wxBorder (*wxButtonBaseExtGetDefaultBorderForControlFunc)(const wxButtonBaseExt* self);
typedef wxDropTarget* (*wxButtonBaseExtGetDropTargetFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtGetEffectiveMinSizeFunc)(const wxButtonBaseExt* self);
typedef wxEventHashTable& (*wxButtonBaseExtGetEventHashTableFunc)(const wxButtonBaseExt* self);
typedef wxEventTable const* (*wxButtonBaseExtGetEventTableFunc)(const wxButtonBaseExt* self);
typedef WXWidget (*wxButtonBaseExtGetHandleFunc)(const wxButtonBaseExt* self);
typedef wxString (*wxButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc)(const wxButtonBaseExt* self, wxPoint const& pt, wxHelpEvent::Origin origin);
typedef wxString (*wxButtonBaseExtGetLabelFunc)(const wxButtonBaseExt* self);
typedef wxString (*wxButtonBaseExtGetLabelTextFunc)(const wxButtonBaseExt* self);
typedef wxLayoutDirection (*wxButtonBaseExtGetLayoutDirectionFunc)(const wxButtonBaseExt* self);
typedef wxWindow* (*wxButtonBaseExtGetMainWindowOfCompositeControlFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtGetMaxClientSizeFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtGetMaxSizeFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtGetMinClientSizeFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtGetMinSizeFunc)(const wxButtonBaseExt* self);
typedef wxString (*wxButtonBaseExtGetNameFunc)(const wxButtonBaseExt* self);
typedef wxAnyButtonBase::State (*wxButtonBaseExtGetNormalStateFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtGetPositionConstraintintPintPFunc)(const wxButtonBaseExt* self, int* x, int* y);
typedef int (*wxButtonBaseExtGetScrollPosintFunc)(const wxButtonBaseExt* self, int orient);
typedef int (*wxButtonBaseExtGetScrollRangeintFunc)(const wxButtonBaseExt* self, int orient);
typedef int (*wxButtonBaseExtGetScrollThumbintFunc)(const wxButtonBaseExt* self, int orient);
typedef void (*wxButtonBaseExtGetSizeConstraintintPintPFunc)(const wxButtonBaseExt* self, int* w, int* h);
typedef bool (*wxButtonBaseExtGetThemeEnabledFunc)(const wxButtonBaseExt* self);
typedef wxValidator* (*wxButtonBaseExtGetValidatorFunc)(const wxButtonBaseExt* self);
typedef wxSize (*wxButtonBaseExtGetWindowBorderSizeFunc)(const wxButtonBaseExt* self);
typedef long (*wxButtonBaseExtGetWindowStyleFlagFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtHasCaptureFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtHasFocusFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtHasMultiplePagesFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtHasTransparentBackgroundFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtHideWithEffectwxShowEffectunsignedintFunc)(const wxButtonBaseExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxButtonBaseExtInformFirstDirectionintintintFunc)(const wxButtonBaseExt* self, int direction, int size, int availableOtherDir);
typedef void (*wxButtonBaseExtInheritAttributesFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtInitDialogFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtIsClientAreaChildwxWindowCPFunc)(const wxButtonBaseExt* self, wxWindow const* param0);
typedef bool (*wxButtonBaseExtIsDoubleBufferedFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtIsRetainedFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtIsScrollbarAlwaysShownintFunc)(const wxButtonBaseExt* self, int param0);
typedef bool (*wxButtonBaseExtIsShownFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtIsShownOnScreenFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtIsThisEnabledFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtIsTopLevelFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxButtonBaseExt* self, wxWindowBase::NavigationKind param0);
typedef bool (*wxButtonBaseExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxButtonBaseExt* self, wxString* reason);
typedef bool (*wxButtonBaseExtLayoutFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtLayoutPhase1intPFunc)(const wxButtonBaseExt* self, int* noChanges);
typedef bool (*wxButtonBaseExtLayoutPhase2intPFunc)(const wxButtonBaseExt* self, int* noChanges);
typedef void (*wxButtonBaseExtLowerFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtMoveConstraintintintFunc)(const wxButtonBaseExt* self, int x, int y);
typedef bool (*wxButtonBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxButtonBaseExt* self, wxDynamicEventTableEntry& param0);
typedef void (*wxButtonBaseExtOnInternalIdleFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtPrepareDCwxDCRFunc)(const wxButtonBaseExt* self, wxDC& param0);
typedef bool (*wxButtonBaseExtProcessEventwxEventRFunc)(const wxButtonBaseExt* self, wxEvent& event);
typedef void (*wxButtonBaseExtQueueEventwxEventPFunc)(const wxButtonBaseExt* self, wxEvent* event);
typedef void (*wxButtonBaseExtRaiseFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtRefreshboolwxRectCPFunc)(const wxButtonBaseExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxButtonBaseExtRegisterHotKeyintintintFunc)(const wxButtonBaseExt* self, int hotkeyId, int modifiers, int keycode);
typedef void (*wxButtonBaseExtRemoveChildwxWindowBasePFunc)(const wxButtonBaseExt* self, wxWindowBase* child);
typedef bool (*wxButtonBaseExtReparentwxWindowBasePFunc)(const wxButtonBaseExt* self, wxWindowBase* newParent);
typedef bool (*wxButtonBaseExtScrollLinesintFunc)(const wxButtonBaseExt* self, int param0);
typedef bool (*wxButtonBaseExtScrollPagesintFunc)(const wxButtonBaseExt* self, int param0);
typedef void (*wxButtonBaseExtScrollWindowintintwxRectCPFunc)(const wxButtonBaseExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxButtonBaseExtSearchEventTablewxEventTableRwxEventRFunc)(const wxButtonBaseExt* self, wxEventTable& table, wxEvent& event);
typedef bool (*wxButtonBaseExtSendIdleEventswxIdleEventRFunc)(const wxButtonBaseExt* self, wxIdleEvent& event);
typedef void (*wxButtonBaseExtSendSizeEventintFunc)(const wxButtonBaseExt* self, int flags);
typedef void (*wxButtonBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc)(const wxButtonBaseExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxButtonBaseExtSetBackgroundColourwxColourCRFunc)(const wxButtonBaseExt* self, wxColour const& colour);
typedef bool (*wxButtonBaseExtSetBackgroundStylewxBackgroundStyleFunc)(const wxButtonBaseExt* self, wxBackgroundStyle style);
typedef void (*wxButtonBaseExtSetCanFocusboolFunc)(const wxButtonBaseExt* self, bool param0);
typedef void (*wxButtonBaseExtSetConstraintSizesboolFunc)(const wxButtonBaseExt* self, bool recurse);
typedef bool (*wxButtonBaseExtSetCursorwxCursorCRFunc)(const wxButtonBaseExt* self, wxCursor const& cursor);
typedef wxWindow* (*wxButtonBaseExtSetDefaultFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtSetDoubleBufferedboolFunc)(const wxButtonBaseExt* self, bool param0);
typedef void (*wxButtonBaseExtSetDropTargetwxDropTargetPFunc)(const wxButtonBaseExt* self, wxDropTarget* dropTarget);
typedef void (*wxButtonBaseExtSetExtraStylelongFunc)(const wxButtonBaseExt* self, long exStyle);
typedef void (*wxButtonBaseExtSetFocusFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtSetFocusFromKbdFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtSetFontwxFontCRFunc)(const wxButtonBaseExt* self, wxFont const& font);
typedef bool (*wxButtonBaseExtSetForegroundColourwxColourCRFunc)(const wxButtonBaseExt* self, wxColour const& colour);
typedef void (*wxButtonBaseExtSetIdwxWindowIDFunc)(const wxButtonBaseExt* self, wxWindowID winid);
typedef void (*wxButtonBaseExtSetLabelwxStringCRFunc)(const wxButtonBaseExt* self, wxString const& label);
typedef void (*wxButtonBaseExtSetLabelTextwxStringCRFunc)(const wxButtonBaseExt* self, wxString const& text);
typedef void (*wxButtonBaseExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxButtonBaseExt* self, wxLayoutDirection param0);
typedef void (*wxButtonBaseExtSetMaxClientSizewxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& size);
typedef void (*wxButtonBaseExtSetMaxSizewxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& maxSize);
typedef void (*wxButtonBaseExtSetMinClientSizewxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& size);
typedef void (*wxButtonBaseExtSetMinSizewxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& minSize);
typedef void (*wxButtonBaseExtSetNamewxStringCRFunc)(const wxButtonBaseExt* self, wxString const& name);
typedef void (*wxButtonBaseExtSetNextHandlerwxEvtHandlerPFunc)(const wxButtonBaseExt* self, wxEvtHandler* handler);
typedef void (*wxButtonBaseExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxButtonBaseExt* self, wxEvtHandler* handler);
typedef void (*wxButtonBaseExtSetScrollPosintintboolFunc)(const wxButtonBaseExt* self, int orient, int pos, bool refresh);
typedef void (*wxButtonBaseExtSetScrollbarintintintintboolFunc)(const wxButtonBaseExt* self, int orient, int pos, int thumbvisible, int range, bool refresh);
typedef void (*wxButtonBaseExtSetSizeConstraintintintintintFunc)(const wxButtonBaseExt* self, int x, int y, int w, int h);
typedef void (*wxButtonBaseExtSetSizeHintsintintintintintintFunc)(const wxButtonBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxButtonBaseExtSetThemeEnabledboolFunc)(const wxButtonBaseExt* self, bool enableTheme);
typedef bool (*wxButtonBaseExtSetTransparentwxByteFunc)(const wxButtonBaseExt* self, wxByte param0);
typedef void (*wxButtonBaseExtSetValidatorwxValidatorCRFunc)(const wxButtonBaseExt* self, wxValidator const& validator);
typedef void (*wxButtonBaseExtSetWindowStyleFlaglongFunc)(const wxButtonBaseExt* self, long style);
typedef bool (*wxButtonBaseExtShouldInheritColoursFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtShowboolFunc)(const wxButtonBaseExt* self, bool show);
typedef bool (*wxButtonBaseExtShowWithEffectwxShowEffectunsignedintFunc)(const wxButtonBaseExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxButtonBaseExtTransferDataFromWindowFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtTransferDataToWindowFunc)(const wxButtonBaseExt* self);
typedef bool (*wxButtonBaseExtTryAfterwxEventRFunc)(const wxButtonBaseExt* self, wxEvent& event);
typedef bool (*wxButtonBaseExtTryBeforewxEventRFunc)(const wxButtonBaseExt* self, wxEvent& event);
typedef bool (*wxButtonBaseExtUnregisterHotKeyintFunc)(const wxButtonBaseExt* self, int hotkeyId);
typedef void (*wxButtonBaseExtUpdateFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtUpdateWindowUIlongFunc)(const wxButtonBaseExt* self, long flags);
typedef bool (*wxButtonBaseExtValidateFunc)(const wxButtonBaseExt* self);
typedef void (*wxButtonBaseExtWXAdjustFontToOwnPPIwxFontRFunc)(const wxButtonBaseExt* self, wxFont& param0);
typedef wxTextEntry const* (*wxButtonBaseExtWXGetTextEntryFunc)(const wxButtonBaseExt* self);
typedef void* (*wxButtonBaseExtWXReservedEvtHandler1voidPFunc)(const wxButtonBaseExt* self, void* param0);
typedef void* (*wxButtonBaseExtWXReservedEvtHandler2voidPFunc)(const wxButtonBaseExt* self, void* param0);
typedef void* (*wxButtonBaseExtWXReservedWindow1voidPFunc)(const wxButtonBaseExt* self, void* param0);
typedef void* (*wxButtonBaseExtWXReservedWindow2voidPFunc)(const wxButtonBaseExt* self, void* param0);
typedef void* (*wxButtonBaseExtWXReservedWindow3voidPFunc)(const wxButtonBaseExt* self, void* param0);
typedef void (*wxButtonBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc)(const wxButtonBaseExt* self, int flags, wxSizer* sizer);
typedef void (*wxButtonBaseExtWarpPointerintintFunc)(const wxButtonBaseExt* self, int x, int y);
typedef wxSize (*wxButtonBaseExtWindowToClientSizewxSizeCRFunc)(const wxButtonBaseExt* self, wxSize const& size);
class wxButtonExt;
typedef bool (*wxButtonExtAcceptsFocusFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtAcceptsFocusFromKeyboardFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtAcceptsFocusRecursivelyFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtAddChildwxWindowBasePFunc)(const wxButtonExt* self, wxWindowBase* child);
typedef void (*wxButtonExtAddPendingEventwxEventCRFunc)(const wxButtonExt* self, wxEvent const& event);
typedef wxCoord (*wxButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxButtonExt* self, wxCoord x, wxCoord width, wxCoord widthTotal);
typedef void (*wxButtonExtAdjustForParentClientOriginintRintRintFunc)(const wxButtonExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxButtonExtAlwaysShowScrollbarsboolboolFunc)(const wxButtonExt* self, bool param0, bool param1);
typedef void (*wxButtonExtAssociateHandleWXWidgetFunc)(const wxButtonExt* self, WXWidget param0);
typedef bool (*wxButtonExtBeginRepositioningChildrenFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtCanApplyThemeBorderFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtCanBeFocusedFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtCanBeOutsideClientAreaFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtCanScrollintFunc)(const wxButtonExt* self, int orient);
typedef bool (*wxButtonExtCanSetTransparentFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtClearBackgroundFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtClientToWindowSizewxSizeCRFunc)(const wxButtonExt* self, wxSize const& size);
typedef wxObjectRefData* (*wxButtonExtCloneRefDatawxObjectRefDataCPFunc)(const wxButtonExt* self, wxObjectRefData const* data);
typedef void (*wxButtonExtCommandwxCommandEventRFunc)(const wxButtonExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxButtonExtCreateRefDataFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtDestroyFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtDissociateHandleFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtDoCaptureMouseFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtDoCentreintFunc)(const wxButtonExt* self, int dir);
typedef void (*wxButtonExtDoClientToScreenintPintPFunc)(const wxButtonExt* self, int* x, int* y);
typedef void (*wxButtonExtDoEnableboolFunc)(const wxButtonExt* self, bool param0);
typedef void (*wxButtonExtDoFreezeFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtDoGetAuthNeededFunc)(const wxButtonExt* self);
typedef int (*wxButtonExtDoGetBestClientHeightintFunc)(const wxButtonExt* self, int param0);
typedef wxSize (*wxButtonExtDoGetBestClientSizeFunc)(const wxButtonExt* self);
typedef int (*wxButtonExtDoGetBestClientWidthintFunc)(const wxButtonExt* self, int param0);
typedef wxSize (*wxButtonExtDoGetBestSizeFunc)(const wxButtonExt* self);
typedef wxBitmap (*wxButtonExtDoGetBitmapwxAnyButtonBaseNStateFunc)(const wxButtonExt* self, wxAnyButtonBase::State which);
typedef wxSize (*wxButtonExtDoGetBitmapMarginsFunc)(const wxButtonExt* self);
typedef void* (*wxButtonExtDoGetClientDataFunc)(const wxButtonExt* self);
typedef wxClientData* (*wxButtonExtDoGetClientObjectFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtDoGetClientSizeintPintPFunc)(const wxButtonExt* self, int* width, int* height);
typedef void (*wxButtonExtDoGetPositionintPintPFunc)(const wxButtonExt* self, int* x, int* y);
typedef void (*wxButtonExtDoGetScreenPositionintPintPFunc)(const wxButtonExt* self, int* x, int* y);
typedef void (*wxButtonExtDoGetSizeintPintPFunc)(const wxButtonExt* self, int* width, int* height);
typedef wxSize (*wxButtonExtDoGetSizeFromTextSizeintintFunc)(const wxButtonExt* self, int xlen, int ylen);
typedef void (*wxButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxButtonExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* font);
typedef wxSize (*wxButtonExtDoGetVirtualSizeFunc)(const wxButtonExt* self);
typedef wxHitTest (*wxButtonExtDoHitTestwxCoordwxCoordFunc)(const wxButtonExt* self, wxCoord x, wxCoord y);
typedef bool (*wxButtonExtDoIsExposedintintintintFunc)(const wxButtonExt* self, int x, int y, int w, int h);
typedef bool (*wxButtonExtDoIsExposedintintFunc)(const wxButtonExt* self, int x, int y);
typedef void (*wxButtonExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc)(const wxButtonExt* self, wxWindow* win, int move);
typedef void (*wxButtonExtDoMoveWindowintintintintFunc)(const wxButtonExt* self, int x, int y, int width, int height);
typedef bool (*wxButtonExtDoNavigateInintFunc)(const wxButtonExt* self, int flags);
typedef bool (*wxButtonExtDoPhaseintFunc)(const wxButtonExt* self, int phase);
typedef bool (*wxButtonExtDoPopupMenuwxMenuPintintFunc)(const wxButtonExt* self, wxMenu* menu, int x, int y);
typedef void (*wxButtonExtDoReleaseMouseFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtDoScreenToClientintPintPFunc)(const wxButtonExt* self, int* x, int* y);
typedef void (*wxButtonExtDoSetAuthNeededboolFunc)(const wxButtonExt* self, bool param0);
typedef void (*wxButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc)(const wxButtonExt* self, wxBitmapBundle const& bitmapBundle, wxAnyButtonBase::State which);
typedef void (*wxButtonExtDoSetBitmapMarginsintintFunc)(const wxButtonExt* self, int x, int y);
typedef void (*wxButtonExtDoSetBitmapMarginswxCoordwxCoordFunc)(const wxButtonExt* self, wxCoord param0, wxCoord param1);
typedef void (*wxButtonExtDoSetBitmapPositionwxDirectionFunc)(const wxButtonExt* self, wxDirection dir);
typedef void (*wxButtonExtDoSetClientDatavoidPFunc)(const wxButtonExt* self, void* data);
typedef void (*wxButtonExtDoSetClientObjectwxClientDataPFunc)(const wxButtonExt* self, wxClientData* data);
typedef void (*wxButtonExtDoSetClientSizeintintFunc)(const wxButtonExt* self, int width, int height);
typedef bool (*wxButtonExtDoSetLabelMarkupwxStringCRFunc)(const wxButtonExt* self, wxString const& markup);
typedef void (*wxButtonExtDoSetSizeintintintintintFunc)(const wxButtonExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxButtonExtDoSetSizeHintsintintintintintintFunc)(const wxButtonExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxButtonExtDoSetToolTipwxToolTipPFunc)(const wxButtonExt* self, wxToolTip* tip);
typedef void (*wxButtonExtDoSetToolTipTextwxStringCRFunc)(const wxButtonExt* self, wxString const& tip);
typedef void (*wxButtonExtDoSetVirtualSizeintintFunc)(const wxButtonExt* self, int x, int y);
typedef void (*wxButtonExtDoSetWindowVariantwxWindowVariantFunc)(const wxButtonExt* self, wxWindowVariant variant);
typedef void (*wxButtonExtDoThawFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxButtonExt* self, wxUpdateUIEvent& event);
typedef void (*wxButtonExtDragAcceptFilesboolFunc)(const wxButtonExt* self, bool accept);
typedef bool (*wxButtonExtEnableboolFunc)(const wxButtonExt* self, bool enable);
typedef bool (*wxButtonExtEnableTouchEventsintFunc)(const wxButtonExt* self, int param0);
typedef void (*wxButtonExtEnableVisibleFocusboolFunc)(const wxButtonExt* self, bool param0);
typedef void (*wxButtonExtEndRepositioningChildrenFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtFitFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtFitInsideFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtGetBestVirtualSizeFunc)(const wxButtonExt* self);
typedef int (*wxButtonExtGetCharHeightFunc)(const wxButtonExt* self);
typedef int (*wxButtonExtGetCharWidthFunc)(const wxButtonExt* self);
typedef wxClassInfo* (*wxButtonExtGetClassInfoFunc)(const wxButtonExt* self);
typedef wxPoint (*wxButtonExtGetClientAreaOriginFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtGetClientSizeConstraintintPintPFunc)(const wxButtonExt* self, int* w, int* h);
typedef double (*wxButtonExtGetContentScaleFactorFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtGetDPIFunc)(const wxButtonExt* self);
typedef double (*wxButtonExtGetDPIScaleFactorFunc)(const wxButtonExt* self);
typedef wxVisualAttributes (*wxButtonExtGetDefaultAttributesFunc)(const wxButtonExt* self);
typedef wxBorder (*wxButtonExtGetDefaultBorderFunc)(const wxButtonExt* self);
typedef wxBorder (*wxButtonExtGetDefaultBorderForControlFunc)(const wxButtonExt* self);
typedef wxDropTarget* (*wxButtonExtGetDropTargetFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtGetEffectiveMinSizeFunc)(const wxButtonExt* self);
typedef wxEventHashTable& (*wxButtonExtGetEventHashTableFunc)(const wxButtonExt* self);
typedef wxEventTable const* (*wxButtonExtGetEventTableFunc)(const wxButtonExt* self);
typedef WXWidget (*wxButtonExtGetHandleFunc)(const wxButtonExt* self);
typedef wxString (*wxButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc)(const wxButtonExt* self, wxPoint const& pt, wxHelpEvent::Origin origin);
typedef wxString (*wxButtonExtGetLabelFunc)(const wxButtonExt* self);
typedef wxString (*wxButtonExtGetLabelTextFunc)(const wxButtonExt* self);
typedef wxLayoutDirection (*wxButtonExtGetLayoutDirectionFunc)(const wxButtonExt* self);
typedef wxWindow* (*wxButtonExtGetMainWindowOfCompositeControlFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtGetMaxClientSizeFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtGetMaxSizeFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtGetMinClientSizeFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtGetMinSizeFunc)(const wxButtonExt* self);
typedef wxString (*wxButtonExtGetNameFunc)(const wxButtonExt* self);
typedef wxAnyButtonBase::State (*wxButtonExtGetNormalStateFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtGetPositionConstraintintPintPFunc)(const wxButtonExt* self, int* x, int* y);
typedef int (*wxButtonExtGetScrollPosintFunc)(const wxButtonExt* self, int orient);
typedef int (*wxButtonExtGetScrollRangeintFunc)(const wxButtonExt* self, int orient);
typedef int (*wxButtonExtGetScrollThumbintFunc)(const wxButtonExt* self, int orient);
typedef void (*wxButtonExtGetSizeConstraintintPintPFunc)(const wxButtonExt* self, int* w, int* h);
typedef bool (*wxButtonExtGetThemeEnabledFunc)(const wxButtonExt* self);
typedef wxValidator* (*wxButtonExtGetValidatorFunc)(const wxButtonExt* self);
typedef wxSize (*wxButtonExtGetWindowBorderSizeFunc)(const wxButtonExt* self);
typedef long (*wxButtonExtGetWindowStyleFlagFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtHasCaptureFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtHasFocusFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtHasMultiplePagesFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtHasTransparentBackgroundFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtHideWithEffectwxShowEffectunsignedintFunc)(const wxButtonExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxButtonExtInformFirstDirectionintintintFunc)(const wxButtonExt* self, int direction, int size, int availableOtherDir);
typedef void (*wxButtonExtInheritAttributesFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtInitDialogFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtIsClientAreaChildwxWindowCPFunc)(const wxButtonExt* self, wxWindow const* param0);
typedef bool (*wxButtonExtIsDoubleBufferedFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtIsRetainedFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtIsScrollbarAlwaysShownintFunc)(const wxButtonExt* self, int param0);
typedef bool (*wxButtonExtIsShownFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtIsShownOnScreenFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtIsThisEnabledFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtIsTopLevelFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxButtonExt* self, wxWindowBase::NavigationKind param0);
typedef bool (*wxButtonExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxButtonExt* self, wxString* reason);
typedef bool (*wxButtonExtLayoutFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtLayoutPhase1intPFunc)(const wxButtonExt* self, int* noChanges);
typedef bool (*wxButtonExtLayoutPhase2intPFunc)(const wxButtonExt* self, int* noChanges);
typedef void (*wxButtonExtLowerFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtMoveConstraintintintFunc)(const wxButtonExt* self, int x, int y);
typedef bool (*wxButtonExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxButtonExt* self, wxDynamicEventTableEntry& param0);
typedef void (*wxButtonExtOnInternalIdleFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtPrepareDCwxDCRFunc)(const wxButtonExt* self, wxDC& param0);
typedef bool (*wxButtonExtProcessEventwxEventRFunc)(const wxButtonExt* self, wxEvent& event);
typedef void (*wxButtonExtQueueEventwxEventPFunc)(const wxButtonExt* self, wxEvent* event);
typedef void (*wxButtonExtRaiseFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtRefreshboolwxRectCPFunc)(const wxButtonExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxButtonExtRegisterHotKeyintintintFunc)(const wxButtonExt* self, int hotkeyId, int modifiers, int keycode);
typedef void (*wxButtonExtRemoveChildwxWindowBasePFunc)(const wxButtonExt* self, wxWindowBase* child);
typedef bool (*wxButtonExtReparentwxWindowBasePFunc)(const wxButtonExt* self, wxWindowBase* newParent);
typedef bool (*wxButtonExtScrollLinesintFunc)(const wxButtonExt* self, int param0);
typedef bool (*wxButtonExtScrollPagesintFunc)(const wxButtonExt* self, int param0);
typedef void (*wxButtonExtScrollWindowintintwxRectCPFunc)(const wxButtonExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxButtonExtSearchEventTablewxEventTableRwxEventRFunc)(const wxButtonExt* self, wxEventTable& table, wxEvent& event);
typedef bool (*wxButtonExtSendIdleEventswxIdleEventRFunc)(const wxButtonExt* self, wxIdleEvent& event);
typedef void (*wxButtonExtSendSizeEventintFunc)(const wxButtonExt* self, int flags);
typedef void (*wxButtonExtSetAcceleratorTablewxAcceleratorTableCRFunc)(const wxButtonExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxButtonExtSetBackgroundColourwxColourCRFunc)(const wxButtonExt* self, wxColour const& colour);
typedef bool (*wxButtonExtSetBackgroundStylewxBackgroundStyleFunc)(const wxButtonExt* self, wxBackgroundStyle style);
typedef void (*wxButtonExtSetCanFocusboolFunc)(const wxButtonExt* self, bool param0);
typedef void (*wxButtonExtSetConstraintSizesboolFunc)(const wxButtonExt* self, bool recurse);
typedef bool (*wxButtonExtSetCursorwxCursorCRFunc)(const wxButtonExt* self, wxCursor const& cursor);
typedef wxWindow* (*wxButtonExtSetDefaultFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtSetDoubleBufferedboolFunc)(const wxButtonExt* self, bool param0);
typedef void (*wxButtonExtSetDropTargetwxDropTargetPFunc)(const wxButtonExt* self, wxDropTarget* dropTarget);
typedef void (*wxButtonExtSetExtraStylelongFunc)(const wxButtonExt* self, long exStyle);
typedef void (*wxButtonExtSetFocusFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtSetFocusFromKbdFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtSetFontwxFontCRFunc)(const wxButtonExt* self, wxFont const& font);
typedef bool (*wxButtonExtSetForegroundColourwxColourCRFunc)(const wxButtonExt* self, wxColour const& colour);
typedef void (*wxButtonExtSetIdwxWindowIDFunc)(const wxButtonExt* self, wxWindowID winid);
typedef void (*wxButtonExtSetLabelwxStringCRFunc)(const wxButtonExt* self, wxString const& label);
typedef void (*wxButtonExtSetLabelTextwxStringCRFunc)(const wxButtonExt* self, wxString const& text);
typedef void (*wxButtonExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxButtonExt* self, wxLayoutDirection param0);
typedef void (*wxButtonExtSetMaxClientSizewxSizeCRFunc)(const wxButtonExt* self, wxSize const& size);
typedef void (*wxButtonExtSetMaxSizewxSizeCRFunc)(const wxButtonExt* self, wxSize const& maxSize);
typedef void (*wxButtonExtSetMinClientSizewxSizeCRFunc)(const wxButtonExt* self, wxSize const& size);
typedef void (*wxButtonExtSetMinSizewxSizeCRFunc)(const wxButtonExt* self, wxSize const& minSize);
typedef void (*wxButtonExtSetNamewxStringCRFunc)(const wxButtonExt* self, wxString const& name);
typedef void (*wxButtonExtSetNextHandlerwxEvtHandlerPFunc)(const wxButtonExt* self, wxEvtHandler* handler);
typedef void (*wxButtonExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxButtonExt* self, wxEvtHandler* handler);
typedef void (*wxButtonExtSetScrollPosintintboolFunc)(const wxButtonExt* self, int orient, int pos, bool refresh);
typedef void (*wxButtonExtSetScrollbarintintintintboolFunc)(const wxButtonExt* self, int orient, int pos, int thumbvisible, int range, bool refresh);
typedef void (*wxButtonExtSetSizeConstraintintintintintFunc)(const wxButtonExt* self, int x, int y, int w, int h);
typedef void (*wxButtonExtSetSizeHintsintintintintintintFunc)(const wxButtonExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxButtonExtSetThemeEnabledboolFunc)(const wxButtonExt* self, bool enableTheme);
typedef bool (*wxButtonExtSetTransparentwxByteFunc)(const wxButtonExt* self, wxByte param0);
typedef void (*wxButtonExtSetValidatorwxValidatorCRFunc)(const wxButtonExt* self, wxValidator const& validator);
typedef void (*wxButtonExtSetWindowStyleFlaglongFunc)(const wxButtonExt* self, long style);
typedef bool (*wxButtonExtShouldInheritColoursFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtShowboolFunc)(const wxButtonExt* self, bool show);
typedef bool (*wxButtonExtShowWithEffectwxShowEffectunsignedintFunc)(const wxButtonExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxButtonExtTransferDataFromWindowFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtTransferDataToWindowFunc)(const wxButtonExt* self);
typedef bool (*wxButtonExtTryAfterwxEventRFunc)(const wxButtonExt* self, wxEvent& event);
typedef bool (*wxButtonExtTryBeforewxEventRFunc)(const wxButtonExt* self, wxEvent& event);
typedef bool (*wxButtonExtUnregisterHotKeyintFunc)(const wxButtonExt* self, int hotkeyId);
typedef void (*wxButtonExtUpdateFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtUpdateWindowUIlongFunc)(const wxButtonExt* self, long flags);
typedef bool (*wxButtonExtValidateFunc)(const wxButtonExt* self);
typedef void (*wxButtonExtWXAdjustFontToOwnPPIwxFontRFunc)(const wxButtonExt* self, wxFont& param0);
typedef wxTextEntry const* (*wxButtonExtWXGetTextEntryFunc)(const wxButtonExt* self);
typedef void* (*wxButtonExtWXReservedEvtHandler1voidPFunc)(const wxButtonExt* self, void* param0);
typedef void* (*wxButtonExtWXReservedEvtHandler2voidPFunc)(const wxButtonExt* self, void* param0);
typedef void* (*wxButtonExtWXReservedWindow1voidPFunc)(const wxButtonExt* self, void* param0);
typedef void* (*wxButtonExtWXReservedWindow2voidPFunc)(const wxButtonExt* self, void* param0);
typedef void* (*wxButtonExtWXReservedWindow3voidPFunc)(const wxButtonExt* self, void* param0);
typedef void (*wxButtonExtWXSetInitialFittingClientSizeintwxSizerPFunc)(const wxButtonExt* self, int flags, wxSizer* sizer);
typedef void (*wxButtonExtWarpPointerintintFunc)(const wxButtonExt* self, int x, int y);
typedef wxSize (*wxButtonExtWindowToClientSizewxSizeCRFunc)(const wxButtonExt* self, wxSize const& size);

class wxButtonBaseExt: public wxButtonBase
{
public:
  wxButtonBaseExt(): wxButtonBase()  {  }
  wxButtonBaseExtAcceptsFocusFunc m_wxButtonBaseExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxButtonBase::AcceptsFocus();
    if (*m_wxButtonBaseExtAcceptsFocus != NULL){
      return m_wxButtonBaseExtAcceptsFocus(this);
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
      return m_wxButtonBaseExtAcceptsFocusFromKeyboard(this);
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
      return m_wxButtonBaseExtAcceptsFocusRecursively(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtAddChildwxWindowBasePFunc m_wxButtonBaseExtAddChildwxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxButtonBase::AddChild(child);
    if (*m_wxButtonBaseExtAddChildwxWindowBaseP != NULL){
      return m_wxButtonBaseExtAddChildwxWindowBaseP(this, child);
    }
  }
  wxButtonBaseExtAddPendingEventwxEventCRFunc m_wxButtonBaseExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxButtonBase::AddPendingEvent(event);
    if (*m_wxButtonBaseExtAddPendingEventwxEventCR != NULL){
      return m_wxButtonBaseExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxButtonBase::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtAdjustForParentClientOriginintRintRintFunc m_wxButtonBaseExtAdjustForParentClientOriginintRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxButtonBase::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxButtonBaseExtAdjustForParentClientOriginintRintRint != NULL){
      return m_wxButtonBaseExtAdjustForParentClientOriginintRintRint(this, x, y, sizeFlags);
    }
  }
  wxButtonBaseExtAlwaysShowScrollbarsboolboolFunc m_wxButtonBaseExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool param0 = true, bool param1 = true) override
  {
    wxButtonBase::AlwaysShowScrollbars(param0, param1);
    if (*m_wxButtonBaseExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxButtonBaseExtAlwaysShowScrollbarsboolbool(this, param0, param1);
    }
  }
  wxButtonBaseExtAssociateHandleWXWidgetFunc m_wxButtonBaseExtAssociateHandleWXWidget = NULL;
  virtual void AssociateHandle(WXWidget param0) override
  {
    wxButtonBase::AssociateHandle(param0);
    if (*m_wxButtonBaseExtAssociateHandleWXWidget != NULL){
      return m_wxButtonBaseExtAssociateHandleWXWidget(this, param0);
    }
  }
  wxButtonBaseExtBeginRepositioningChildrenFunc m_wxButtonBaseExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxButtonBase::BeginRepositioningChildren();
    if (*m_wxButtonBaseExtBeginRepositioningChildren != NULL){
      return m_wxButtonBaseExtBeginRepositioningChildren(this);
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
      return m_wxButtonBaseExtCanApplyThemeBorder(this);
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
      return m_wxButtonBaseExtCanBeFocused(this);
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
      return m_wxButtonBaseExtCanBeOutsideClientArea(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtCanScrollintFunc m_wxButtonBaseExtCanScrollint = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxButtonBase::CanScroll(orient);
    if (*m_wxButtonBaseExtCanScrollint != NULL){
      return m_wxButtonBaseExtCanScrollint(this, orient);
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
      return m_wxButtonBaseExtCanSetTransparent(this);
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
  wxButtonBaseExtClientToWindowSizewxSizeCRFunc m_wxButtonBaseExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxButtonBase::ClientToWindowSize(size);
    if (*m_wxButtonBaseExtClientToWindowSizewxSizeCR != NULL){
      return m_wxButtonBaseExtClientToWindowSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtCloneRefDatawxObjectRefDataCPFunc m_wxButtonBaseExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxButtonBase::CloneRefData(data);
    if (*m_wxButtonBaseExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxButtonBaseExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtCommandwxCommandEventRFunc m_wxButtonBaseExtCommandwxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxButtonBase::Command(event);
    if (*m_wxButtonBaseExtCommandwxCommandEventR != NULL){
      return m_wxButtonBaseExtCommandwxCommandEventR(this, event);
    }
  }
  wxButtonBaseExtCreateRefDataFunc m_wxButtonBaseExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxButtonBase::CreateRefData();
    if (*m_wxButtonBaseExtCreateRefData != NULL){
      return m_wxButtonBaseExtCreateRefData(this);
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
      return m_wxButtonBaseExtDestroy(this);
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
  wxButtonBaseExtDoCentreintFunc m_wxButtonBaseExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxButtonBase::DoCentre(dir);
    if (*m_wxButtonBaseExtDoCentreint != NULL){
      return m_wxButtonBaseExtDoCentreint(this, dir);
    }
  }
  wxButtonBaseExtDoClientToScreenintPintPFunc m_wxButtonBaseExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxButtonBase::DoClientToScreen(x, y);
    if (*m_wxButtonBaseExtDoClientToScreenintPintP != NULL){
      return m_wxButtonBaseExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxButtonBaseExtDoEnableboolFunc m_wxButtonBaseExtDoEnablebool = NULL;
  virtual void DoEnable(bool param0) override
  {
    wxButtonBase::DoEnable(param0);
    if (*m_wxButtonBaseExtDoEnablebool != NULL){
      return m_wxButtonBaseExtDoEnablebool(this, param0);
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
      return m_wxButtonBaseExtDoGetAuthNeeded(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetBestClientHeightintFunc m_wxButtonBaseExtDoGetBestClientHeightint = NULL;
  virtual int DoGetBestClientHeight(int param0) const override
  {
    int res = wxButtonBase::DoGetBestClientHeight(param0);
    if (*m_wxButtonBaseExtDoGetBestClientHeightint != NULL){
      return m_wxButtonBaseExtDoGetBestClientHeightint(this, param0);
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
      return m_wxButtonBaseExtDoGetBestClientSize(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetBestClientWidthintFunc m_wxButtonBaseExtDoGetBestClientWidthint = NULL;
  virtual int DoGetBestClientWidth(int param0) const override
  {
    int res = wxButtonBase::DoGetBestClientWidth(param0);
    if (*m_wxButtonBaseExtDoGetBestClientWidthint != NULL){
      return m_wxButtonBaseExtDoGetBestClientWidthint(this, param0);
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
      return m_wxButtonBaseExtDoGetBestSize(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetBitmapwxAnyButtonBaseNStateFunc m_wxButtonBaseExtDoGetBitmapwxAnyButtonBaseNState = NULL;
  virtual wxBitmap DoGetBitmap(wxAnyButtonBase::State which) const override
  {
    wxBitmap res = wxButtonBase::DoGetBitmap(which);
    if (*m_wxButtonBaseExtDoGetBitmapwxAnyButtonBaseNState != NULL){
      return m_wxButtonBaseExtDoGetBitmapwxAnyButtonBaseNState(this, which);
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
      return m_wxButtonBaseExtDoGetBitmapMargins(this);
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
      return m_wxButtonBaseExtDoGetClientData(this);
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
      return m_wxButtonBaseExtDoGetClientObject(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetClientSizeintPintPFunc m_wxButtonBaseExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxButtonBase::DoGetClientSize(width, height);
    if (*m_wxButtonBaseExtDoGetClientSizeintPintP != NULL){
      return m_wxButtonBaseExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxButtonBaseExtDoGetPositionintPintPFunc m_wxButtonBaseExtDoGetPositionintPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxButtonBase::DoGetPosition(x, y);
    if (*m_wxButtonBaseExtDoGetPositionintPintP != NULL){
      return m_wxButtonBaseExtDoGetPositionintPintP(this, x, y);
    }
  }
  wxButtonBaseExtDoGetScreenPositionintPintPFunc m_wxButtonBaseExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxButtonBase::DoGetScreenPosition(x, y);
    if (*m_wxButtonBaseExtDoGetScreenPositionintPintP != NULL){
      return m_wxButtonBaseExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxButtonBaseExtDoGetSizeintPintPFunc m_wxButtonBaseExtDoGetSizeintPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxButtonBase::DoGetSize(width, height);
    if (*m_wxButtonBaseExtDoGetSizeintPintP != NULL){
      return m_wxButtonBaseExtDoGetSizeintPintP(this, width, height);
    }
  }
  wxButtonBaseExtDoGetSizeFromTextSizeintintFunc m_wxButtonBaseExtDoGetSizeFromTextSizeintint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxButtonBase::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxButtonBaseExtDoGetSizeFromTextSizeintint != NULL){
      return m_wxButtonBaseExtDoGetSizeFromTextSizeintint(this, xlen, ylen);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* font = __null) const override
  {
    wxButtonBase::DoGetTextExtent(string, x, y, descent, externalLeading, font);
    if (*m_wxButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, font);
    }
  }
  wxButtonBaseExtDoGetVirtualSizeFunc m_wxButtonBaseExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxButtonBase::DoGetVirtualSize();
    if (*m_wxButtonBaseExtDoGetVirtualSize != NULL){
      return m_wxButtonBaseExtDoGetVirtualSize(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoHitTestwxCoordwxCoordFunc m_wxButtonBaseExtDoHitTestwxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxButtonBase::DoHitTest(x, y);
    if (*m_wxButtonBaseExtDoHitTestwxCoordwxCoord != NULL){
      return m_wxButtonBaseExtDoHitTestwxCoordwxCoord(this, x, y);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoIsExposedintintintintFunc m_wxButtonBaseExtDoIsExposedintintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxButtonBase::DoIsExposed(x, y, w, h);
    if (*m_wxButtonBaseExtDoIsExposedintintintint != NULL){
      return m_wxButtonBaseExtDoIsExposedintintintint(this, x, y, w, h);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoIsExposedintintFunc m_wxButtonBaseExtDoIsExposedintint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxButtonBase::DoIsExposed(x, y);
    if (*m_wxButtonBaseExtDoIsExposedintint != NULL){
      return m_wxButtonBaseExtDoIsExposedintint(this, x, y);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoMoveWindowintintintintFunc m_wxButtonBaseExtDoMoveWindowintintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxButtonBase::DoMoveWindow(x, y, width, height);
    if (*m_wxButtonBaseExtDoMoveWindowintintintint != NULL){
      return m_wxButtonBaseExtDoMoveWindowintintintint(this, x, y, width, height);
    }
  }
  wxButtonBaseExtDoNavigateInintFunc m_wxButtonBaseExtDoNavigateInint = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxButtonBase::DoNavigateIn(flags);
    if (*m_wxButtonBaseExtDoNavigateInint != NULL){
      return m_wxButtonBaseExtDoNavigateInint(this, flags);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoPhaseintFunc m_wxButtonBaseExtDoPhaseint = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxButtonBase::DoPhase(phase);
    if (*m_wxButtonBaseExtDoPhaseint != NULL){
      return m_wxButtonBaseExtDoPhaseint(this, phase);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoPopupMenuwxMenuPintintFunc m_wxButtonBaseExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxButtonBase::DoPopupMenu(menu, x, y);
    if (*m_wxButtonBaseExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxButtonBaseExtDoPopupMenuwxMenuPintint(this, menu, x, y);
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
  wxButtonBaseExtDoScreenToClientintPintPFunc m_wxButtonBaseExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxButtonBase::DoScreenToClient(x, y);
    if (*m_wxButtonBaseExtDoScreenToClientintPintP != NULL){
      return m_wxButtonBaseExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxButtonBaseExtDoSetAuthNeededboolFunc m_wxButtonBaseExtDoSetAuthNeededbool = NULL;
  virtual void DoSetAuthNeeded(bool param0) override
  {
    wxButtonBase::DoSetAuthNeeded(param0);
    if (*m_wxButtonBaseExtDoSetAuthNeededbool != NULL){
      return m_wxButtonBaseExtDoSetAuthNeededbool(this, param0);
    }
  }
  wxButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc m_wxButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState = NULL;
  virtual void DoSetBitmap(wxBitmapBundle const& bitmapBundle, wxAnyButtonBase::State which) override
  {
    wxButtonBase::DoSetBitmap(bitmapBundle, which);
    if (*m_wxButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState != NULL){
      return m_wxButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState(this, bitmapBundle, which);
    }
  }
  wxButtonBaseExtDoSetBitmapMarginsintintFunc m_wxButtonBaseExtDoSetBitmapMarginsintint = NULL;
  virtual void DoSetBitmapMargins(int x, int y) override
  {
    wxButtonBase::DoSetBitmapMargins(x, y);
    if (*m_wxButtonBaseExtDoSetBitmapMarginsintint != NULL){
      return m_wxButtonBaseExtDoSetBitmapMarginsintint(this, x, y);
    }
  }
  wxButtonBaseExtDoSetBitmapPositionwxDirectionFunc m_wxButtonBaseExtDoSetBitmapPositionwxDirection = NULL;
  virtual void DoSetBitmapPosition(wxDirection dir) override
  {
    wxButtonBase::DoSetBitmapPosition(dir);
    if (*m_wxButtonBaseExtDoSetBitmapPositionwxDirection != NULL){
      return m_wxButtonBaseExtDoSetBitmapPositionwxDirection(this, dir);
    }
  }
  wxButtonBaseExtDoSetClientDatavoidPFunc m_wxButtonBaseExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxButtonBase::DoSetClientData(data);
    if (*m_wxButtonBaseExtDoSetClientDatavoidP != NULL){
      return m_wxButtonBaseExtDoSetClientDatavoidP(this, data);
    }
  }
  wxButtonBaseExtDoSetClientObjectwxClientDataPFunc m_wxButtonBaseExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxButtonBase::DoSetClientObject(data);
    if (*m_wxButtonBaseExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxButtonBaseExtDoSetClientObjectwxClientDataP(this, data);
    }
  }
  wxButtonBaseExtDoSetClientSizeintintFunc m_wxButtonBaseExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxButtonBase::DoSetClientSize(width, height);
    if (*m_wxButtonBaseExtDoSetClientSizeintint != NULL){
      return m_wxButtonBaseExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxButtonBaseExtDoSetLabelMarkupwxStringCRFunc m_wxButtonBaseExtDoSetLabelMarkupwxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxButtonBase::DoSetLabelMarkup(markup);
    if (*m_wxButtonBaseExtDoSetLabelMarkupwxStringCR != NULL){
      return m_wxButtonBaseExtDoSetLabelMarkupwxStringCR(this, markup);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtDoSetSizeintintintintintFunc m_wxButtonBaseExtDoSetSizeintintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxButtonBase::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxButtonBaseExtDoSetSizeintintintintint != NULL){
      return m_wxButtonBaseExtDoSetSizeintintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxButtonBaseExtDoSetSizeHintsintintintintintintFunc m_wxButtonBaseExtDoSetSizeHintsintintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxButtonBase::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxButtonBaseExtDoSetSizeHintsintintintintintint != NULL){
      return m_wxButtonBaseExtDoSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxButtonBaseExtDoSetToolTipwxToolTipPFunc m_wxButtonBaseExtDoSetToolTipwxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxButtonBase::DoSetToolTip(tip);
    if (*m_wxButtonBaseExtDoSetToolTipwxToolTipP != NULL){
      return m_wxButtonBaseExtDoSetToolTipwxToolTipP(this, tip);
    }
  }
  wxButtonBaseExtDoSetToolTipTextwxStringCRFunc m_wxButtonBaseExtDoSetToolTipTextwxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxButtonBase::DoSetToolTipText(tip);
    if (*m_wxButtonBaseExtDoSetToolTipTextwxStringCR != NULL){
      return m_wxButtonBaseExtDoSetToolTipTextwxStringCR(this, tip);
    }
  }
  wxButtonBaseExtDoSetVirtualSizeintintFunc m_wxButtonBaseExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxButtonBase::DoSetVirtualSize(x, y);
    if (*m_wxButtonBaseExtDoSetVirtualSizeintint != NULL){
      return m_wxButtonBaseExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxButtonBaseExtDoSetWindowVariantwxWindowVariantFunc m_wxButtonBaseExtDoSetWindowVariantwxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxButtonBase::DoSetWindowVariant(variant);
    if (*m_wxButtonBaseExtDoSetWindowVariantwxWindowVariant != NULL){
      return m_wxButtonBaseExtDoSetWindowVariantwxWindowVariant(this, variant);
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
  wxButtonBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxButtonBaseExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxButtonBase::DoUpdateWindowUI(event);
    if (*m_wxButtonBaseExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxButtonBaseExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxButtonBaseExtDragAcceptFilesboolFunc m_wxButtonBaseExtDragAcceptFilesbool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxButtonBase::DragAcceptFiles(accept);
    if (*m_wxButtonBaseExtDragAcceptFilesbool != NULL){
      return m_wxButtonBaseExtDragAcceptFilesbool(this, accept);
    }
  }
  wxButtonBaseExtEnableboolFunc m_wxButtonBaseExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxButtonBase::Enable(enable);
    if (*m_wxButtonBaseExtEnablebool != NULL){
      return m_wxButtonBaseExtEnablebool(this, enable);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtEnableTouchEventsintFunc m_wxButtonBaseExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int param0) override
  {
    bool res = wxButtonBase::EnableTouchEvents(param0);
    if (*m_wxButtonBaseExtEnableTouchEventsint != NULL){
      return m_wxButtonBaseExtEnableTouchEventsint(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtEnableVisibleFocusboolFunc m_wxButtonBaseExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool param0) override
  {
    wxButtonBase::EnableVisibleFocus(param0);
    if (*m_wxButtonBaseExtEnableVisibleFocusbool != NULL){
      return m_wxButtonBaseExtEnableVisibleFocusbool(this, param0);
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
      return m_wxButtonBaseExtGetBestVirtualSize(this);
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
      return m_wxButtonBaseExtGetCharHeight(this);
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
      return m_wxButtonBaseExtGetCharWidth(this);
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
      return m_wxButtonBaseExtGetClassInfo(this);
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
      return m_wxButtonBaseExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetClientSizeConstraintintPintPFunc m_wxButtonBaseExtGetClientSizeConstraintintPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxButtonBase::GetClientSizeConstraint(w, h);
    if (*m_wxButtonBaseExtGetClientSizeConstraintintPintP != NULL){
      return m_wxButtonBaseExtGetClientSizeConstraintintPintP(this, w, h);
    }
  }
  wxButtonBaseExtGetContentScaleFactorFunc m_wxButtonBaseExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxButtonBase::GetContentScaleFactor();
    if (*m_wxButtonBaseExtGetContentScaleFactor != NULL){
      return m_wxButtonBaseExtGetContentScaleFactor(this);
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
      return m_wxButtonBaseExtGetDPI(this);
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
      return m_wxButtonBaseExtGetDPIScaleFactor(this);
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
      return m_wxButtonBaseExtGetDefaultAttributes(this);
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
      return m_wxButtonBaseExtGetDefaultBorder(this);
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
      return m_wxButtonBaseExtGetDefaultBorderForControl(this);
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
      return m_wxButtonBaseExtGetDropTarget(this);
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
      return m_wxButtonBaseExtGetEffectiveMinSize(this);
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
      return m_wxButtonBaseExtGetEventHashTable(this);
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
      return m_wxButtonBaseExtGetEventTable(this);
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
      return m_wxButtonBaseExtGetHandle(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc m_wxButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxButtonBase::GetHelpTextAtPoint(pt, origin);
    if (*m_wxButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin != NULL){
      return m_wxButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin(this, pt, origin);
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
      return m_wxButtonBaseExtGetLabel(this);
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
      return m_wxButtonBaseExtGetLabelText(this);
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
      return m_wxButtonBaseExtGetLayoutDirection(this);
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
      return m_wxButtonBaseExtGetMainWindowOfCompositeControl(this);
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
      return m_wxButtonBaseExtGetMaxClientSize(this);
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
      return m_wxButtonBaseExtGetMaxSize(this);
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
      return m_wxButtonBaseExtGetMinClientSize(this);
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
      return m_wxButtonBaseExtGetMinSize(this);
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
      return m_wxButtonBaseExtGetName(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetNormalStateFunc m_wxButtonBaseExtGetNormalState = NULL;
  virtual wxAnyButtonBase::State GetNormalState() const override
  {
    wxAnyButtonBase::State res = wxButtonBase::GetNormalState();
    if (*m_wxButtonBaseExtGetNormalState != NULL){
      return m_wxButtonBaseExtGetNormalState(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetPositionConstraintintPintPFunc m_wxButtonBaseExtGetPositionConstraintintPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxButtonBase::GetPositionConstraint(x, y);
    if (*m_wxButtonBaseExtGetPositionConstraintintPintP != NULL){
      return m_wxButtonBaseExtGetPositionConstraintintPintP(this, x, y);
    }
  }
  wxButtonBaseExtGetScrollPosintFunc m_wxButtonBaseExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxButtonBase::GetScrollPos(orient);
    if (*m_wxButtonBaseExtGetScrollPosint != NULL){
      return m_wxButtonBaseExtGetScrollPosint(this, orient);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetScrollRangeintFunc m_wxButtonBaseExtGetScrollRangeint = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxButtonBase::GetScrollRange(orient);
    if (*m_wxButtonBaseExtGetScrollRangeint != NULL){
      return m_wxButtonBaseExtGetScrollRangeint(this, orient);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetScrollThumbintFunc m_wxButtonBaseExtGetScrollThumbint = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxButtonBase::GetScrollThumb(orient);
    if (*m_wxButtonBaseExtGetScrollThumbint != NULL){
      return m_wxButtonBaseExtGetScrollThumbint(this, orient);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtGetSizeConstraintintPintPFunc m_wxButtonBaseExtGetSizeConstraintintPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxButtonBase::GetSizeConstraint(w, h);
    if (*m_wxButtonBaseExtGetSizeConstraintintPintP != NULL){
      return m_wxButtonBaseExtGetSizeConstraintintPintP(this, w, h);
    }
  }
  wxButtonBaseExtGetThemeEnabledFunc m_wxButtonBaseExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxButtonBase::GetThemeEnabled();
    if (*m_wxButtonBaseExtGetThemeEnabled != NULL){
      return m_wxButtonBaseExtGetThemeEnabled(this);
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
      return m_wxButtonBaseExtGetValidator(this);
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
      return m_wxButtonBaseExtGetWindowBorderSize(this);
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
      return m_wxButtonBaseExtGetWindowStyleFlag(this);
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
      return m_wxButtonBaseExtHasCapture(this);
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
      return m_wxButtonBaseExtHasFocus(this);
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
      return m_wxButtonBaseExtHasMultiplePages(this);
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
      return m_wxButtonBaseExtHasTransparentBackground(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtHideWithEffectwxShowEffectunsignedintFunc m_wxButtonBaseExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxButtonBase::HideWithEffect(param0, param1);
    if (*m_wxButtonBaseExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxButtonBaseExtHideWithEffectwxShowEffectunsignedint(this, param0, param1);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtInformFirstDirectionintintintFunc m_wxButtonBaseExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxButtonBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxButtonBaseExtInformFirstDirectionintintint != NULL){
      return m_wxButtonBaseExtInformFirstDirectionintintint(this, direction, size, availableOtherDir);
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
  wxButtonBaseExtIsClientAreaChildwxWindowCPFunc m_wxButtonBaseExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* param0) const override
  {
    bool res = wxButtonBase::IsClientAreaChild(param0);
    if (*m_wxButtonBaseExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxButtonBaseExtIsClientAreaChildwxWindowCP(this, param0);
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
      return m_wxButtonBaseExtIsDoubleBuffered(this);
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
      return m_wxButtonBaseExtIsRetained(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsScrollbarAlwaysShownintFunc m_wxButtonBaseExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int param0) const override
  {
    bool res = wxButtonBase::IsScrollbarAlwaysShown(param0);
    if (*m_wxButtonBaseExtIsScrollbarAlwaysShownint != NULL){
      return m_wxButtonBaseExtIsScrollbarAlwaysShownint(this, param0);
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
      return m_wxButtonBaseExtIsShown(this);
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
      return m_wxButtonBaseExtIsShownOnScreen(this);
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
      return m_wxButtonBaseExtIsThisEnabled(this);
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
      return m_wxButtonBaseExtIsTopLevel(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind param0) const override
  {
    bool res = wxButtonBase::IsTopNavigationDomain(param0);
    if (*m_wxButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtIsTransparentBackgroundSupportedwxStringPFunc m_wxButtonBaseExtIsTransparentBackgroundSupportedwxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxButtonBase::IsTransparentBackgroundSupported(reason);
    if (*m_wxButtonBaseExtIsTransparentBackgroundSupportedwxStringP != NULL){
      return m_wxButtonBaseExtIsTransparentBackgroundSupportedwxStringP(this, reason);
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
      return m_wxButtonBaseExtLayout(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtLayoutPhase1intPFunc m_wxButtonBaseExtLayoutPhase1intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxButtonBase::LayoutPhase1(noChanges);
    if (*m_wxButtonBaseExtLayoutPhase1intP != NULL){
      return m_wxButtonBaseExtLayoutPhase1intP(this, noChanges);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtLayoutPhase2intPFunc m_wxButtonBaseExtLayoutPhase2intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxButtonBase::LayoutPhase2(noChanges);
    if (*m_wxButtonBaseExtLayoutPhase2intP != NULL){
      return m_wxButtonBaseExtLayoutPhase2intP(this, noChanges);
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
  wxButtonBaseExtMoveConstraintintintFunc m_wxButtonBaseExtMoveConstraintintint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxButtonBase::MoveConstraint(x, y);
    if (*m_wxButtonBaseExtMoveConstraintintint != NULL){
      return m_wxButtonBaseExtMoveConstraintintint(this, x, y);
    }
  }
  wxButtonBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxButtonBaseExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxButtonBase::OnDynamicBind(param0);
    if (*m_wxButtonBaseExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxButtonBaseExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
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
  wxButtonBaseExtPrepareDCwxDCRFunc m_wxButtonBaseExtPrepareDCwxDCR = NULL;
  virtual void PrepareDC(wxDC& param0) override
  {
    wxButtonBase::PrepareDC(param0);
    if (*m_wxButtonBaseExtPrepareDCwxDCR != NULL){
      return m_wxButtonBaseExtPrepareDCwxDCR(this, param0);
    }
  }
  wxButtonBaseExtProcessEventwxEventRFunc m_wxButtonBaseExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxButtonBase::ProcessEvent(event);
    if (*m_wxButtonBaseExtProcessEventwxEventR != NULL){
      return m_wxButtonBaseExtProcessEventwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtQueueEventwxEventPFunc m_wxButtonBaseExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxButtonBase::QueueEvent(event);
    if (*m_wxButtonBaseExtQueueEventwxEventP != NULL){
      return m_wxButtonBaseExtQueueEventwxEventP(this, event);
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
  wxButtonBaseExtRefreshboolwxRectCPFunc m_wxButtonBaseExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = (const wxRect*)__null) override
  {
    wxButtonBase::Refresh(eraseBackground, rect);
    if (*m_wxButtonBaseExtRefreshboolwxRectCP != NULL){
      return m_wxButtonBaseExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxButtonBaseExtRegisterHotKeyintintintFunc m_wxButtonBaseExtRegisterHotKeyintintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxButtonBase::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxButtonBaseExtRegisterHotKeyintintint != NULL){
      return m_wxButtonBaseExtRegisterHotKeyintintint(this, hotkeyId, modifiers, keycode);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtRemoveChildwxWindowBasePFunc m_wxButtonBaseExtRemoveChildwxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxButtonBase::RemoveChild(child);
    if (*m_wxButtonBaseExtRemoveChildwxWindowBaseP != NULL){
      return m_wxButtonBaseExtRemoveChildwxWindowBaseP(this, child);
    }
  }
  wxButtonBaseExtReparentwxWindowBasePFunc m_wxButtonBaseExtReparentwxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxButtonBase::Reparent(newParent);
    if (*m_wxButtonBaseExtReparentwxWindowBaseP != NULL){
      return m_wxButtonBaseExtReparentwxWindowBaseP(this, newParent);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtScrollLinesintFunc m_wxButtonBaseExtScrollLinesint = NULL;
  virtual bool ScrollLines(int param0) override
  {
    bool res = wxButtonBase::ScrollLines(param0);
    if (*m_wxButtonBaseExtScrollLinesint != NULL){
      return m_wxButtonBaseExtScrollLinesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtScrollPagesintFunc m_wxButtonBaseExtScrollPagesint = NULL;
  virtual bool ScrollPages(int param0) override
  {
    bool res = wxButtonBase::ScrollPages(param0);
    if (*m_wxButtonBaseExtScrollPagesint != NULL){
      return m_wxButtonBaseExtScrollPagesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtScrollWindowintintwxRectCPFunc m_wxButtonBaseExtScrollWindowintintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxButtonBase::ScrollWindow(dx, dy, rect);
    if (*m_wxButtonBaseExtScrollWindowintintwxRectCP != NULL){
      return m_wxButtonBaseExtScrollWindowintintwxRectCP(this, dx, dy, rect);
    }
  }
  wxButtonBaseExtSearchEventTablewxEventTableRwxEventRFunc m_wxButtonBaseExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxButtonBase::SearchEventTable(table, event);
    if (*m_wxButtonBaseExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxButtonBaseExtSearchEventTablewxEventTableRwxEventR(this, table, event);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSendIdleEventswxIdleEventRFunc m_wxButtonBaseExtSendIdleEventswxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxButtonBase::SendIdleEvents(event);
    if (*m_wxButtonBaseExtSendIdleEventswxIdleEventR != NULL){
      return m_wxButtonBaseExtSendIdleEventswxIdleEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSendSizeEventintFunc m_wxButtonBaseExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxButtonBase::SendSizeEvent(flags);
    if (*m_wxButtonBaseExtSendSizeEventint != NULL){
      return m_wxButtonBaseExtSendSizeEventint(this, flags);
    }
  }
  wxButtonBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc m_wxButtonBaseExtSetAcceleratorTablewxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxButtonBase::SetAcceleratorTable(accel);
    if (*m_wxButtonBaseExtSetAcceleratorTablewxAcceleratorTableCR != NULL){
      return m_wxButtonBaseExtSetAcceleratorTablewxAcceleratorTableCR(this, accel);
    }
  }
  wxButtonBaseExtSetBackgroundColourwxColourCRFunc m_wxButtonBaseExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxButtonBase::SetBackgroundColour(colour);
    if (*m_wxButtonBaseExtSetBackgroundColourwxColourCR != NULL){
      return m_wxButtonBaseExtSetBackgroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetBackgroundStylewxBackgroundStyleFunc m_wxButtonBaseExtSetBackgroundStylewxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxButtonBase::SetBackgroundStyle(style);
    if (*m_wxButtonBaseExtSetBackgroundStylewxBackgroundStyle != NULL){
      return m_wxButtonBaseExtSetBackgroundStylewxBackgroundStyle(this, style);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetCanFocusboolFunc m_wxButtonBaseExtSetCanFocusbool = NULL;
  virtual void SetCanFocus(bool param0) override
  {
    wxButtonBase::SetCanFocus(param0);
    if (*m_wxButtonBaseExtSetCanFocusbool != NULL){
      return m_wxButtonBaseExtSetCanFocusbool(this, param0);
    }
  }
  wxButtonBaseExtSetConstraintSizesboolFunc m_wxButtonBaseExtSetConstraintSizesbool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxButtonBase::SetConstraintSizes(recurse);
    if (*m_wxButtonBaseExtSetConstraintSizesbool != NULL){
      return m_wxButtonBaseExtSetConstraintSizesbool(this, recurse);
    }
  }
  wxButtonBaseExtSetCursorwxCursorCRFunc m_wxButtonBaseExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxButtonBase::SetCursor(cursor);
    if (*m_wxButtonBaseExtSetCursorwxCursorCR != NULL){
      return m_wxButtonBaseExtSetCursorwxCursorCR(this, cursor);
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
      return m_wxButtonBaseExtSetDefault(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetDoubleBufferedboolFunc m_wxButtonBaseExtSetDoubleBufferedbool = NULL;
  virtual void SetDoubleBuffered(bool param0) override
  {
    wxButtonBase::SetDoubleBuffered(param0);
    if (*m_wxButtonBaseExtSetDoubleBufferedbool != NULL){
      return m_wxButtonBaseExtSetDoubleBufferedbool(this, param0);
    }
  }
  wxButtonBaseExtSetDropTargetwxDropTargetPFunc m_wxButtonBaseExtSetDropTargetwxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxButtonBase::SetDropTarget(dropTarget);
    if (*m_wxButtonBaseExtSetDropTargetwxDropTargetP != NULL){
      return m_wxButtonBaseExtSetDropTargetwxDropTargetP(this, dropTarget);
    }
  }
  wxButtonBaseExtSetExtraStylelongFunc m_wxButtonBaseExtSetExtraStylelong = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxButtonBase::SetExtraStyle(exStyle);
    if (*m_wxButtonBaseExtSetExtraStylelong != NULL){
      return m_wxButtonBaseExtSetExtraStylelong(this, exStyle);
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
  wxButtonBaseExtSetFontwxFontCRFunc m_wxButtonBaseExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxButtonBase::SetFont(font);
    if (*m_wxButtonBaseExtSetFontwxFontCR != NULL){
      return m_wxButtonBaseExtSetFontwxFontCR(this, font);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetForegroundColourwxColourCRFunc m_wxButtonBaseExtSetForegroundColourwxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxButtonBase::SetForegroundColour(colour);
    if (*m_wxButtonBaseExtSetForegroundColourwxColourCR != NULL){
      return m_wxButtonBaseExtSetForegroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetIdwxWindowIDFunc m_wxButtonBaseExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxButtonBase::SetId(winid);
    if (*m_wxButtonBaseExtSetIdwxWindowID != NULL){
      return m_wxButtonBaseExtSetIdwxWindowID(this, winid);
    }
  }
  wxButtonBaseExtSetLabelwxStringCRFunc m_wxButtonBaseExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxButtonBase::SetLabel(label);
    if (*m_wxButtonBaseExtSetLabelwxStringCR != NULL){
      return m_wxButtonBaseExtSetLabelwxStringCR(this, label);
    }
  }
  wxButtonBaseExtSetLabelTextwxStringCRFunc m_wxButtonBaseExtSetLabelTextwxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxButtonBase::SetLabelText(text);
    if (*m_wxButtonBaseExtSetLabelTextwxStringCR != NULL){
      return m_wxButtonBaseExtSetLabelTextwxStringCR(this, text);
    }
  }
  wxButtonBaseExtSetLayoutDirectionwxLayoutDirectionFunc m_wxButtonBaseExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxButtonBase::SetLayoutDirection(param0);
    if (*m_wxButtonBaseExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxButtonBaseExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxButtonBaseExtSetMaxClientSizewxSizeCRFunc m_wxButtonBaseExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxButtonBase::SetMaxClientSize(size);
    if (*m_wxButtonBaseExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxButtonBaseExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxButtonBaseExtSetMaxSizewxSizeCRFunc m_wxButtonBaseExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxButtonBase::SetMaxSize(maxSize);
    if (*m_wxButtonBaseExtSetMaxSizewxSizeCR != NULL){
      return m_wxButtonBaseExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxButtonBaseExtSetMinClientSizewxSizeCRFunc m_wxButtonBaseExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxButtonBase::SetMinClientSize(size);
    if (*m_wxButtonBaseExtSetMinClientSizewxSizeCR != NULL){
      return m_wxButtonBaseExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxButtonBaseExtSetMinSizewxSizeCRFunc m_wxButtonBaseExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxButtonBase::SetMinSize(minSize);
    if (*m_wxButtonBaseExtSetMinSizewxSizeCR != NULL){
      return m_wxButtonBaseExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxButtonBaseExtSetNamewxStringCRFunc m_wxButtonBaseExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxButtonBase::SetName(name);
    if (*m_wxButtonBaseExtSetNamewxStringCR != NULL){
      return m_wxButtonBaseExtSetNamewxStringCR(this, name);
    }
  }
  wxButtonBaseExtSetNextHandlerwxEvtHandlerPFunc m_wxButtonBaseExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxButtonBase::SetNextHandler(handler);
    if (*m_wxButtonBaseExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxButtonBaseExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxButtonBaseExtSetPreviousHandlerwxEvtHandlerPFunc m_wxButtonBaseExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxButtonBase::SetPreviousHandler(handler);
    if (*m_wxButtonBaseExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxButtonBaseExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxButtonBaseExtSetScrollPosintintboolFunc m_wxButtonBaseExtSetScrollPosintintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxButtonBase::SetScrollPos(orient, pos, refresh);
    if (*m_wxButtonBaseExtSetScrollPosintintbool != NULL){
      return m_wxButtonBaseExtSetScrollPosintintbool(this, orient, pos, refresh);
    }
  }
  wxButtonBaseExtSetScrollbarintintintintboolFunc m_wxButtonBaseExtSetScrollbarintintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbvisible, int range, bool refresh = true) override
  {
    wxButtonBase::SetScrollbar(orient, pos, thumbvisible, range, refresh);
    if (*m_wxButtonBaseExtSetScrollbarintintintintbool != NULL){
      return m_wxButtonBaseExtSetScrollbarintintintintbool(this, orient, pos, thumbvisible, range, refresh);
    }
  }
  wxButtonBaseExtSetSizeConstraintintintintintFunc m_wxButtonBaseExtSetSizeConstraintintintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxButtonBase::SetSizeConstraint(x, y, w, h);
    if (*m_wxButtonBaseExtSetSizeConstraintintintintint != NULL){
      return m_wxButtonBaseExtSetSizeConstraintintintintint(this, x, y, w, h);
    }
  }
  wxButtonBaseExtSetSizeHintsintintintintintintFunc m_wxButtonBaseExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxButtonBase::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxButtonBaseExtSetSizeHintsintintintintintint != NULL){
      return m_wxButtonBaseExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxButtonBaseExtSetThemeEnabledboolFunc m_wxButtonBaseExtSetThemeEnabledbool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxButtonBase::SetThemeEnabled(enableTheme);
    if (*m_wxButtonBaseExtSetThemeEnabledbool != NULL){
      return m_wxButtonBaseExtSetThemeEnabledbool(this, enableTheme);
    }
  }
  wxButtonBaseExtSetTransparentwxByteFunc m_wxButtonBaseExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte param0) override
  {
    bool res = wxButtonBase::SetTransparent(param0);
    if (*m_wxButtonBaseExtSetTransparentwxByte != NULL){
      return m_wxButtonBaseExtSetTransparentwxByte(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtSetValidatorwxValidatorCRFunc m_wxButtonBaseExtSetValidatorwxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxButtonBase::SetValidator(validator);
    if (*m_wxButtonBaseExtSetValidatorwxValidatorCR != NULL){
      return m_wxButtonBaseExtSetValidatorwxValidatorCR(this, validator);
    }
  }
  wxButtonBaseExtSetWindowStyleFlaglongFunc m_wxButtonBaseExtSetWindowStyleFlaglong = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxButtonBase::SetWindowStyleFlag(style);
    if (*m_wxButtonBaseExtSetWindowStyleFlaglong != NULL){
      return m_wxButtonBaseExtSetWindowStyleFlaglong(this, style);
    }
  }
  wxButtonBaseExtShouldInheritColoursFunc m_wxButtonBaseExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxButtonBase::ShouldInheritColours();
    if (*m_wxButtonBaseExtShouldInheritColours != NULL){
      return m_wxButtonBaseExtShouldInheritColours(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtShowboolFunc m_wxButtonBaseExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxButtonBase::Show(show);
    if (*m_wxButtonBaseExtShowbool != NULL){
      return m_wxButtonBaseExtShowbool(this, show);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtShowWithEffectwxShowEffectunsignedintFunc m_wxButtonBaseExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxButtonBase::ShowWithEffect(param0, param1);
    if (*m_wxButtonBaseExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxButtonBaseExtShowWithEffectwxShowEffectunsignedint(this, param0, param1);
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
      return m_wxButtonBaseExtTransferDataFromWindow(this);
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
      return m_wxButtonBaseExtTransferDataToWindow(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtTryAfterwxEventRFunc m_wxButtonBaseExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxButtonBase::TryAfter(event);
    if (*m_wxButtonBaseExtTryAfterwxEventR != NULL){
      return m_wxButtonBaseExtTryAfterwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtTryBeforewxEventRFunc m_wxButtonBaseExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxButtonBase::TryBefore(event);
    if (*m_wxButtonBaseExtTryBeforewxEventR != NULL){
      return m_wxButtonBaseExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtUnregisterHotKeyintFunc m_wxButtonBaseExtUnregisterHotKeyint = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxButtonBase::UnregisterHotKey(hotkeyId);
    if (*m_wxButtonBaseExtUnregisterHotKeyint != NULL){
      return m_wxButtonBaseExtUnregisterHotKeyint(this, hotkeyId);
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
  wxButtonBaseExtUpdateWindowUIlongFunc m_wxButtonBaseExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxButtonBase::UpdateWindowUI(flags);
    if (*m_wxButtonBaseExtUpdateWindowUIlong != NULL){
      return m_wxButtonBaseExtUpdateWindowUIlong(this, flags);
    }
  }
  wxButtonBaseExtValidateFunc m_wxButtonBaseExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxButtonBase::Validate();
    if (*m_wxButtonBaseExtValidate != NULL){
      return m_wxButtonBaseExtValidate(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXAdjustFontToOwnPPIwxFontRFunc m_wxButtonBaseExtWXAdjustFontToOwnPPIwxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& param0) const override
  {
    wxButtonBase::WXAdjustFontToOwnPPI(param0);
    if (*m_wxButtonBaseExtWXAdjustFontToOwnPPIwxFontR != NULL){
      return m_wxButtonBaseExtWXAdjustFontToOwnPPIwxFontR(this, param0);
    }
  }
  wxButtonBaseExtWXGetTextEntryFunc m_wxButtonBaseExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxButtonBase::WXGetTextEntry();
    if (*m_wxButtonBaseExtWXGetTextEntry != NULL){
      return m_wxButtonBaseExtWXGetTextEntry(this);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXReservedEvtHandler1voidPFunc m_wxButtonBaseExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxButtonBase::WXReservedEvtHandler1(param0);
    if (*m_wxButtonBaseExtWXReservedEvtHandler1voidP != NULL){
      return m_wxButtonBaseExtWXReservedEvtHandler1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXReservedEvtHandler2voidPFunc m_wxButtonBaseExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxButtonBase::WXReservedEvtHandler2(param0);
    if (*m_wxButtonBaseExtWXReservedEvtHandler2voidP != NULL){
      return m_wxButtonBaseExtWXReservedEvtHandler2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXReservedWindow1voidPFunc m_wxButtonBaseExtWXReservedWindow1voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxButtonBase::WXReservedWindow1(param0);
    if (*m_wxButtonBaseExtWXReservedWindow1voidP != NULL){
      return m_wxButtonBaseExtWXReservedWindow1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXReservedWindow2voidPFunc m_wxButtonBaseExtWXReservedWindow2voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxButtonBase::WXReservedWindow2(param0);
    if (*m_wxButtonBaseExtWXReservedWindow2voidP != NULL){
      return m_wxButtonBaseExtWXReservedWindow2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXReservedWindow3voidPFunc m_wxButtonBaseExtWXReservedWindow3voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxButtonBase::WXReservedWindow3(param0);
    if (*m_wxButtonBaseExtWXReservedWindow3voidP != NULL){
      return m_wxButtonBaseExtWXReservedWindow3voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc m_wxButtonBaseExtWXSetInitialFittingClientSizeintwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxButtonBase::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxButtonBaseExtWXSetInitialFittingClientSizeintwxSizerP != NULL){
      return m_wxButtonBaseExtWXSetInitialFittingClientSizeintwxSizerP(this, flags, sizer);
    }
  }
  wxButtonBaseExtWarpPointerintintFunc m_wxButtonBaseExtWarpPointerintint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxButtonBase::WarpPointer(x, y);
    if (*m_wxButtonBaseExtWarpPointerintint != NULL){
      return m_wxButtonBaseExtWarpPointerintint(this, x, y);
    }
  }
  wxButtonBaseExtWindowToClientSizewxSizeCRFunc m_wxButtonBaseExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxButtonBase::WindowToClientSize(size);
    if (*m_wxButtonBaseExtWindowToClientSizewxSizeCR != NULL){
      return m_wxButtonBaseExtWindowToClientSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxButtonBaseExt(wxButtonBaseExtAcceptsFocusFunc a_AcceptsFocus, wxButtonBaseExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxButtonBaseExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxButtonBaseExtAddChildwxWindowBasePFunc a_AddChildwxWindowBaseP, wxButtonBaseExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxButtonBaseExtAdjustForParentClientOriginintRintRintFunc a_AdjustForParentClientOriginintRintRint, wxButtonBaseExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxButtonBaseExtAssociateHandleWXWidgetFunc a_AssociateHandleWXWidget, wxButtonBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxButtonBaseExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxButtonBaseExtCanBeFocusedFunc a_CanBeFocused, wxButtonBaseExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxButtonBaseExtCanScrollintFunc a_CanScrollint, wxButtonBaseExtCanSetTransparentFunc a_CanSetTransparent, wxButtonBaseExtClearBackgroundFunc a_ClearBackground, wxButtonBaseExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxButtonBaseExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxButtonBaseExtCommandwxCommandEventRFunc a_CommandwxCommandEventR, wxButtonBaseExtCreateRefDataFunc a_CreateRefData, wxButtonBaseExtDestroyFunc a_Destroy, wxButtonBaseExtDissociateHandleFunc a_DissociateHandle, wxButtonBaseExtDoCaptureMouseFunc a_DoCaptureMouse, wxButtonBaseExtDoCentreintFunc a_DoCentreint, wxButtonBaseExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxButtonBaseExtDoEnableboolFunc a_DoEnablebool, wxButtonBaseExtDoFreezeFunc a_DoFreeze, wxButtonBaseExtDoGetAuthNeededFunc a_DoGetAuthNeeded, wxButtonBaseExtDoGetBestClientHeightintFunc a_DoGetBestClientHeightint, wxButtonBaseExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxButtonBaseExtDoGetBestClientWidthintFunc a_DoGetBestClientWidthint, wxButtonBaseExtDoGetBestSizeFunc a_DoGetBestSize, wxButtonBaseExtDoGetBitmapwxAnyButtonBaseNStateFunc a_DoGetBitmapwxAnyButtonBaseNState, wxButtonBaseExtDoGetBitmapMarginsFunc a_DoGetBitmapMargins, wxButtonBaseExtDoGetClientDataFunc a_DoGetClientData, wxButtonBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxButtonBaseExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxButtonBaseExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxButtonBaseExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxButtonBaseExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxButtonBaseExtDoGetSizeFromTextSizeintintFunc a_DoGetSizeFromTextSizeintint, wxButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxButtonBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxButtonBaseExtDoHitTestwxCoordwxCoordFunc a_DoHitTestwxCoordwxCoord, wxButtonBaseExtDoIsExposedintintintintFunc a_DoIsExposedintintintint, wxButtonBaseExtDoIsExposedintintFunc a_DoIsExposedintint, wxButtonBaseExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxButtonBaseExtDoNavigateInintFunc a_DoNavigateInint, wxButtonBaseExtDoPhaseintFunc a_DoPhaseint, wxButtonBaseExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxButtonBaseExtDoReleaseMouseFunc a_DoReleaseMouse, wxButtonBaseExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxButtonBaseExtDoSetAuthNeededboolFunc a_DoSetAuthNeededbool, wxButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc a_DoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState, wxButtonBaseExtDoSetBitmapMarginsintintFunc a_DoSetBitmapMarginsintint, wxButtonBaseExtDoSetBitmapPositionwxDirectionFunc a_DoSetBitmapPositionwxDirection, wxButtonBaseExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxButtonBaseExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxButtonBaseExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxButtonBaseExtDoSetLabelMarkupwxStringCRFunc a_DoSetLabelMarkupwxStringCR, wxButtonBaseExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxButtonBaseExtDoSetSizeHintsintintintintintintFunc a_DoSetSizeHintsintintintintintint, wxButtonBaseExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxButtonBaseExtDoSetToolTipTextwxStringCRFunc a_DoSetToolTipTextwxStringCR, wxButtonBaseExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxButtonBaseExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxButtonBaseExtDoThawFunc a_DoThaw, wxButtonBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxButtonBaseExtDragAcceptFilesboolFunc a_DragAcceptFilesbool, wxButtonBaseExtEnableboolFunc a_Enablebool, wxButtonBaseExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxButtonBaseExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxButtonBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxButtonBaseExtFitFunc a_Fit, wxButtonBaseExtFitInsideFunc a_FitInside, wxButtonBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxButtonBaseExtGetCharHeightFunc a_GetCharHeight, wxButtonBaseExtGetCharWidthFunc a_GetCharWidth, wxButtonBaseExtGetClassInfoFunc a_GetClassInfo, wxButtonBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxButtonBaseExtGetClientSizeConstraintintPintPFunc a_GetClientSizeConstraintintPintP, wxButtonBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxButtonBaseExtGetDPIFunc a_GetDPI, wxButtonBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxButtonBaseExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxButtonBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxButtonBaseExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxButtonBaseExtGetDropTargetFunc a_GetDropTarget, wxButtonBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxButtonBaseExtGetEventHashTableFunc a_GetEventHashTable, wxButtonBaseExtGetEventTableFunc a_GetEventTable, wxButtonBaseExtGetHandleFunc a_GetHandle, wxButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin, wxButtonBaseExtGetLabelFunc a_GetLabel, wxButtonBaseExtGetLabelTextFunc a_GetLabelText, wxButtonBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxButtonBaseExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxButtonBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxButtonBaseExtGetMaxSizeFunc a_GetMaxSize, wxButtonBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxButtonBaseExtGetMinSizeFunc a_GetMinSize, wxButtonBaseExtGetNameFunc a_GetName, wxButtonBaseExtGetNormalStateFunc a_GetNormalState, wxButtonBaseExtGetPositionConstraintintPintPFunc a_GetPositionConstraintintPintP, wxButtonBaseExtGetScrollPosintFunc a_GetScrollPosint, wxButtonBaseExtGetScrollRangeintFunc a_GetScrollRangeint, wxButtonBaseExtGetScrollThumbintFunc a_GetScrollThumbint, wxButtonBaseExtGetSizeConstraintintPintPFunc a_GetSizeConstraintintPintP, wxButtonBaseExtGetThemeEnabledFunc a_GetThemeEnabled, wxButtonBaseExtGetValidatorFunc a_GetValidator, wxButtonBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxButtonBaseExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxButtonBaseExtHasCaptureFunc a_HasCapture, wxButtonBaseExtHasFocusFunc a_HasFocus, wxButtonBaseExtHasMultiplePagesFunc a_HasMultiplePages, wxButtonBaseExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxButtonBaseExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxButtonBaseExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxButtonBaseExtInheritAttributesFunc a_InheritAttributes, wxButtonBaseExtInitDialogFunc a_InitDialog, wxButtonBaseExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxButtonBaseExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxButtonBaseExtIsRetainedFunc a_IsRetained, wxButtonBaseExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxButtonBaseExtIsShownFunc a_IsShown, wxButtonBaseExtIsShownOnScreenFunc a_IsShownOnScreen, wxButtonBaseExtIsThisEnabledFunc a_IsThisEnabled, wxButtonBaseExtIsTopLevelFunc a_IsTopLevel, wxButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxButtonBaseExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxButtonBaseExtLayoutFunc a_Layout, wxButtonBaseExtLayoutPhase1intPFunc a_LayoutPhase1intP, wxButtonBaseExtLayoutPhase2intPFunc a_LayoutPhase2intP, wxButtonBaseExtLowerFunc a_Lower, wxButtonBaseExtMoveConstraintintintFunc a_MoveConstraintintint, wxButtonBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxButtonBaseExtOnInternalIdleFunc a_OnInternalIdle, wxButtonBaseExtPrepareDCwxDCRFunc a_PrepareDCwxDCR, wxButtonBaseExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxButtonBaseExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxButtonBaseExtRaiseFunc a_Raise, wxButtonBaseExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxButtonBaseExtRegisterHotKeyintintintFunc a_RegisterHotKeyintintint, wxButtonBaseExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxButtonBaseExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxButtonBaseExtScrollLinesintFunc a_ScrollLinesint, wxButtonBaseExtScrollPagesintFunc a_ScrollPagesint, wxButtonBaseExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxButtonBaseExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxButtonBaseExtSendIdleEventswxIdleEventRFunc a_SendIdleEventswxIdleEventR, wxButtonBaseExtSendSizeEventintFunc a_SendSizeEventint, wxButtonBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc a_SetAcceleratorTablewxAcceleratorTableCR, wxButtonBaseExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxButtonBaseExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxButtonBaseExtSetCanFocusboolFunc a_SetCanFocusbool, wxButtonBaseExtSetConstraintSizesboolFunc a_SetConstraintSizesbool, wxButtonBaseExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxButtonBaseExtSetDefaultFunc a_SetDefault, wxButtonBaseExtSetDoubleBufferedboolFunc a_SetDoubleBufferedbool, wxButtonBaseExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxButtonBaseExtSetExtraStylelongFunc a_SetExtraStylelong, wxButtonBaseExtSetFocusFunc a_SetFocus, wxButtonBaseExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxButtonBaseExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxButtonBaseExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxButtonBaseExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxButtonBaseExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxButtonBaseExtSetLabelTextwxStringCRFunc a_SetLabelTextwxStringCR, wxButtonBaseExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxButtonBaseExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxButtonBaseExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxButtonBaseExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxButtonBaseExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxButtonBaseExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxButtonBaseExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxButtonBaseExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxButtonBaseExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxButtonBaseExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxButtonBaseExtSetSizeConstraintintintintintFunc a_SetSizeConstraintintintintint, wxButtonBaseExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxButtonBaseExtSetThemeEnabledboolFunc a_SetThemeEnabledbool, wxButtonBaseExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxButtonBaseExtSetValidatorwxValidatorCRFunc a_SetValidatorwxValidatorCR, wxButtonBaseExtSetWindowStyleFlaglongFunc a_SetWindowStyleFlaglong, wxButtonBaseExtShouldInheritColoursFunc a_ShouldInheritColours, wxButtonBaseExtShowboolFunc a_Showbool, wxButtonBaseExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxButtonBaseExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxButtonBaseExtTransferDataToWindowFunc a_TransferDataToWindow, wxButtonBaseExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxButtonBaseExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxButtonBaseExtUnregisterHotKeyintFunc a_UnregisterHotKeyint, wxButtonBaseExtUpdateFunc a_Update, wxButtonBaseExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxButtonBaseExtValidateFunc a_Validate, wxButtonBaseExtWXAdjustFontToOwnPPIwxFontRFunc a_WXAdjustFontToOwnPPIwxFontR, wxButtonBaseExtWXGetTextEntryFunc a_WXGetTextEntry, wxButtonBaseExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxButtonBaseExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxButtonBaseExtWXReservedWindow1voidPFunc a_WXReservedWindow1voidP, wxButtonBaseExtWXReservedWindow2voidPFunc a_WXReservedWindow2voidP, wxButtonBaseExtWXReservedWindow3voidPFunc a_WXReservedWindow3voidP, wxButtonBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc a_WXSetInitialFittingClientSizeintwxSizerP, wxButtonBaseExtWarpPointerintintFunc a_WarpPointerintint, wxButtonBaseExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxButtonBase() {
    m_wxButtonBaseExtAcceptsFocus = a_AcceptsFocus;
    m_wxButtonBaseExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxButtonBaseExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxButtonBaseExtAddChildwxWindowBaseP = a_AddChildwxWindowBaseP;
    m_wxButtonBaseExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxButtonBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxButtonBaseExtAdjustForParentClientOriginintRintRint = a_AdjustForParentClientOriginintRintRint;
    m_wxButtonBaseExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxButtonBaseExtAssociateHandleWXWidget = a_AssociateHandleWXWidget;
    m_wxButtonBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxButtonBaseExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxButtonBaseExtCanBeFocused = a_CanBeFocused;
    m_wxButtonBaseExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxButtonBaseExtCanScrollint = a_CanScrollint;
    m_wxButtonBaseExtCanSetTransparent = a_CanSetTransparent;
    m_wxButtonBaseExtClearBackground = a_ClearBackground;
    m_wxButtonBaseExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxButtonBaseExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxButtonBaseExtCommandwxCommandEventR = a_CommandwxCommandEventR;
    m_wxButtonBaseExtCreateRefData = a_CreateRefData;
    m_wxButtonBaseExtDestroy = a_Destroy;
    m_wxButtonBaseExtDissociateHandle = a_DissociateHandle;
    m_wxButtonBaseExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxButtonBaseExtDoCentreint = a_DoCentreint;
    m_wxButtonBaseExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxButtonBaseExtDoEnablebool = a_DoEnablebool;
    m_wxButtonBaseExtDoFreeze = a_DoFreeze;
    m_wxButtonBaseExtDoGetAuthNeeded = a_DoGetAuthNeeded;
    m_wxButtonBaseExtDoGetBestClientHeightint = a_DoGetBestClientHeightint;
    m_wxButtonBaseExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxButtonBaseExtDoGetBestClientWidthint = a_DoGetBestClientWidthint;
    m_wxButtonBaseExtDoGetBestSize = a_DoGetBestSize;
    m_wxButtonBaseExtDoGetBitmapwxAnyButtonBaseNState = a_DoGetBitmapwxAnyButtonBaseNState;
    m_wxButtonBaseExtDoGetBitmapMargins = a_DoGetBitmapMargins;
    m_wxButtonBaseExtDoGetClientData = a_DoGetClientData;
    m_wxButtonBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxButtonBaseExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxButtonBaseExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxButtonBaseExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxButtonBaseExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxButtonBaseExtDoGetSizeFromTextSizeintint = a_DoGetSizeFromTextSizeintint;
    m_wxButtonBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxButtonBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxButtonBaseExtDoHitTestwxCoordwxCoord = a_DoHitTestwxCoordwxCoord;
    m_wxButtonBaseExtDoIsExposedintintintint = a_DoIsExposedintintintint;
    m_wxButtonBaseExtDoIsExposedintint = a_DoIsExposedintint;
    m_wxButtonBaseExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxButtonBaseExtDoNavigateInint = a_DoNavigateInint;
    m_wxButtonBaseExtDoPhaseint = a_DoPhaseint;
    m_wxButtonBaseExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxButtonBaseExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxButtonBaseExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxButtonBaseExtDoSetAuthNeededbool = a_DoSetAuthNeededbool;
    m_wxButtonBaseExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState = a_DoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState;
    m_wxButtonBaseExtDoSetBitmapMarginsintint = a_DoSetBitmapMarginsintint;
    m_wxButtonBaseExtDoSetBitmapPositionwxDirection = a_DoSetBitmapPositionwxDirection;
    m_wxButtonBaseExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxButtonBaseExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxButtonBaseExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxButtonBaseExtDoSetLabelMarkupwxStringCR = a_DoSetLabelMarkupwxStringCR;
    m_wxButtonBaseExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxButtonBaseExtDoSetSizeHintsintintintintintint = a_DoSetSizeHintsintintintintintint;
    m_wxButtonBaseExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxButtonBaseExtDoSetToolTipTextwxStringCR = a_DoSetToolTipTextwxStringCR;
    m_wxButtonBaseExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxButtonBaseExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxButtonBaseExtDoThaw = a_DoThaw;
    m_wxButtonBaseExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxButtonBaseExtDragAcceptFilesbool = a_DragAcceptFilesbool;
    m_wxButtonBaseExtEnablebool = a_Enablebool;
    m_wxButtonBaseExtEnableTouchEventsint = a_EnableTouchEventsint;
    m_wxButtonBaseExtEnableVisibleFocusbool = a_EnableVisibleFocusbool;
    m_wxButtonBaseExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxButtonBaseExtFit = a_Fit;
    m_wxButtonBaseExtFitInside = a_FitInside;
    m_wxButtonBaseExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxButtonBaseExtGetCharHeight = a_GetCharHeight;
    m_wxButtonBaseExtGetCharWidth = a_GetCharWidth;
    m_wxButtonBaseExtGetClassInfo = a_GetClassInfo;
    m_wxButtonBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxButtonBaseExtGetClientSizeConstraintintPintP = a_GetClientSizeConstraintintPintP;
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
    m_wxButtonBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin;
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
    m_wxButtonBaseExtGetPositionConstraintintPintP = a_GetPositionConstraintintPintP;
    m_wxButtonBaseExtGetScrollPosint = a_GetScrollPosint;
    m_wxButtonBaseExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxButtonBaseExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxButtonBaseExtGetSizeConstraintintPintP = a_GetSizeConstraintintPintP;
    m_wxButtonBaseExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxButtonBaseExtGetValidator = a_GetValidator;
    m_wxButtonBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxButtonBaseExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxButtonBaseExtHasCapture = a_HasCapture;
    m_wxButtonBaseExtHasFocus = a_HasFocus;
    m_wxButtonBaseExtHasMultiplePages = a_HasMultiplePages;
    m_wxButtonBaseExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxButtonBaseExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxButtonBaseExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxButtonBaseExtInheritAttributes = a_InheritAttributes;
    m_wxButtonBaseExtInitDialog = a_InitDialog;
    m_wxButtonBaseExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxButtonBaseExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxButtonBaseExtIsRetained = a_IsRetained;
    m_wxButtonBaseExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxButtonBaseExtIsShown = a_IsShown;
    m_wxButtonBaseExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxButtonBaseExtIsThisEnabled = a_IsThisEnabled;
    m_wxButtonBaseExtIsTopLevel = a_IsTopLevel;
    m_wxButtonBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxButtonBaseExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxButtonBaseExtLayout = a_Layout;
    m_wxButtonBaseExtLayoutPhase1intP = a_LayoutPhase1intP;
    m_wxButtonBaseExtLayoutPhase2intP = a_LayoutPhase2intP;
    m_wxButtonBaseExtLower = a_Lower;
    m_wxButtonBaseExtMoveConstraintintint = a_MoveConstraintintint;
    m_wxButtonBaseExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxButtonBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxButtonBaseExtPrepareDCwxDCR = a_PrepareDCwxDCR;
    m_wxButtonBaseExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxButtonBaseExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxButtonBaseExtRaise = a_Raise;
    m_wxButtonBaseExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxButtonBaseExtRegisterHotKeyintintint = a_RegisterHotKeyintintint;
    m_wxButtonBaseExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxButtonBaseExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxButtonBaseExtScrollLinesint = a_ScrollLinesint;
    m_wxButtonBaseExtScrollPagesint = a_ScrollPagesint;
    m_wxButtonBaseExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxButtonBaseExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxButtonBaseExtSendIdleEventswxIdleEventR = a_SendIdleEventswxIdleEventR;
    m_wxButtonBaseExtSendSizeEventint = a_SendSizeEventint;
    m_wxButtonBaseExtSetAcceleratorTablewxAcceleratorTableCR = a_SetAcceleratorTablewxAcceleratorTableCR;
    m_wxButtonBaseExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxButtonBaseExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxButtonBaseExtSetCanFocusbool = a_SetCanFocusbool;
    m_wxButtonBaseExtSetConstraintSizesbool = a_SetConstraintSizesbool;
    m_wxButtonBaseExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxButtonBaseExtSetDefault = a_SetDefault;
    m_wxButtonBaseExtSetDoubleBufferedbool = a_SetDoubleBufferedbool;
    m_wxButtonBaseExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxButtonBaseExtSetExtraStylelong = a_SetExtraStylelong;
    m_wxButtonBaseExtSetFocus = a_SetFocus;
    m_wxButtonBaseExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxButtonBaseExtSetFontwxFontCR = a_SetFontwxFontCR;
    m_wxButtonBaseExtSetForegroundColourwxColourCR = a_SetForegroundColourwxColourCR;
    m_wxButtonBaseExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxButtonBaseExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxButtonBaseExtSetLabelTextwxStringCR = a_SetLabelTextwxStringCR;
    m_wxButtonBaseExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxButtonBaseExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxButtonBaseExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxButtonBaseExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxButtonBaseExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxButtonBaseExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxButtonBaseExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxButtonBaseExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxButtonBaseExtSetScrollPosintintbool = a_SetScrollPosintintbool;
    m_wxButtonBaseExtSetScrollbarintintintintbool = a_SetScrollbarintintintintbool;
    m_wxButtonBaseExtSetSizeConstraintintintintint = a_SetSizeConstraintintintintint;
    m_wxButtonBaseExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxButtonBaseExtSetThemeEnabledbool = a_SetThemeEnabledbool;
    m_wxButtonBaseExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxButtonBaseExtSetValidatorwxValidatorCR = a_SetValidatorwxValidatorCR;
    m_wxButtonBaseExtSetWindowStyleFlaglong = a_SetWindowStyleFlaglong;
    m_wxButtonBaseExtShouldInheritColours = a_ShouldInheritColours;
    m_wxButtonBaseExtShowbool = a_Showbool;
    m_wxButtonBaseExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxButtonBaseExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxButtonBaseExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxButtonBaseExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxButtonBaseExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxButtonBaseExtUnregisterHotKeyint = a_UnregisterHotKeyint;
    m_wxButtonBaseExtUpdate = a_Update;
    m_wxButtonBaseExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxButtonBaseExtValidate = a_Validate;
    m_wxButtonBaseExtWXAdjustFontToOwnPPIwxFontR = a_WXAdjustFontToOwnPPIwxFontR;
    m_wxButtonBaseExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxButtonBaseExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxButtonBaseExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxButtonBaseExtWXReservedWindow1voidP = a_WXReservedWindow1voidP;
    m_wxButtonBaseExtWXReservedWindow2voidP = a_WXReservedWindow2voidP;
    m_wxButtonBaseExtWXReservedWindow3voidP = a_WXReservedWindow3voidP;
    m_wxButtonBaseExtWXSetInitialFittingClientSizeintwxSizerP = a_WXSetInitialFittingClientSizeintwxSizerP;
    m_wxButtonBaseExtWarpPointerintint = a_WarpPointerintint;
    m_wxButtonBaseExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
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
      return m_wxButtonExtAcceptsFocus(this);
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
      return m_wxButtonExtAcceptsFocusFromKeyboard(this);
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
      return m_wxButtonExtAcceptsFocusRecursively(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtAddChildwxWindowBasePFunc m_wxButtonExtAddChildwxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxButton::AddChild(child);
    if (*m_wxButtonExtAddChildwxWindowBaseP != NULL){
      return m_wxButtonExtAddChildwxWindowBaseP(this, child);
    }
  }
  wxButtonExtAddPendingEventwxEventCRFunc m_wxButtonExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxButton::AddPendingEvent(event);
    if (*m_wxButtonExtAddPendingEventwxEventCR != NULL){
      return m_wxButtonExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxButton::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal);
    }
    else {
      return res;
    }
  }
  wxButtonExtAdjustForParentClientOriginintRintRintFunc m_wxButtonExtAdjustForParentClientOriginintRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxButton::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxButtonExtAdjustForParentClientOriginintRintRint != NULL){
      return m_wxButtonExtAdjustForParentClientOriginintRintRint(this, x, y, sizeFlags);
    }
  }
  wxButtonExtAlwaysShowScrollbarsboolboolFunc m_wxButtonExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool param0 = true, bool param1 = true) override
  {
    wxButton::AlwaysShowScrollbars(param0, param1);
    if (*m_wxButtonExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxButtonExtAlwaysShowScrollbarsboolbool(this, param0, param1);
    }
  }
  wxButtonExtAssociateHandleWXWidgetFunc m_wxButtonExtAssociateHandleWXWidget = NULL;
  virtual void AssociateHandle(WXWidget param0) override
  {
    wxButton::AssociateHandle(param0);
    if (*m_wxButtonExtAssociateHandleWXWidget != NULL){
      return m_wxButtonExtAssociateHandleWXWidget(this, param0);
    }
  }
  wxButtonExtBeginRepositioningChildrenFunc m_wxButtonExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxButton::BeginRepositioningChildren();
    if (*m_wxButtonExtBeginRepositioningChildren != NULL){
      return m_wxButtonExtBeginRepositioningChildren(this);
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
      return m_wxButtonExtCanApplyThemeBorder(this);
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
      return m_wxButtonExtCanBeFocused(this);
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
      return m_wxButtonExtCanBeOutsideClientArea(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtCanScrollintFunc m_wxButtonExtCanScrollint = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxButton::CanScroll(orient);
    if (*m_wxButtonExtCanScrollint != NULL){
      return m_wxButtonExtCanScrollint(this, orient);
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
      return m_wxButtonExtCanSetTransparent(this);
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
  wxButtonExtClientToWindowSizewxSizeCRFunc m_wxButtonExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxButton::ClientToWindowSize(size);
    if (*m_wxButtonExtClientToWindowSizewxSizeCR != NULL){
      return m_wxButtonExtClientToWindowSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxButtonExtCloneRefDatawxObjectRefDataCPFunc m_wxButtonExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxButton::CloneRefData(data);
    if (*m_wxButtonExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxButtonExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxButtonExtCommandwxCommandEventRFunc m_wxButtonExtCommandwxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxButton::Command(event);
    if (*m_wxButtonExtCommandwxCommandEventR != NULL){
      return m_wxButtonExtCommandwxCommandEventR(this, event);
    }
  }
  wxButtonExtCreateRefDataFunc m_wxButtonExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxButton::CreateRefData();
    if (*m_wxButtonExtCreateRefData != NULL){
      return m_wxButtonExtCreateRefData(this);
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
      return m_wxButtonExtDestroy(this);
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
  wxButtonExtDoCentreintFunc m_wxButtonExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxButton::DoCentre(dir);
    if (*m_wxButtonExtDoCentreint != NULL){
      return m_wxButtonExtDoCentreint(this, dir);
    }
  }
  wxButtonExtDoClientToScreenintPintPFunc m_wxButtonExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxButton::DoClientToScreen(x, y);
    if (*m_wxButtonExtDoClientToScreenintPintP != NULL){
      return m_wxButtonExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxButtonExtDoEnableboolFunc m_wxButtonExtDoEnablebool = NULL;
  virtual void DoEnable(bool param0) override
  {
    wxButton::DoEnable(param0);
    if (*m_wxButtonExtDoEnablebool != NULL){
      return m_wxButtonExtDoEnablebool(this, param0);
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
      return m_wxButtonExtDoGetAuthNeeded(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetBestClientHeightintFunc m_wxButtonExtDoGetBestClientHeightint = NULL;
  virtual int DoGetBestClientHeight(int param0) const override
  {
    int res = wxButton::DoGetBestClientHeight(param0);
    if (*m_wxButtonExtDoGetBestClientHeightint != NULL){
      return m_wxButtonExtDoGetBestClientHeightint(this, param0);
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
      return m_wxButtonExtDoGetBestClientSize(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetBestClientWidthintFunc m_wxButtonExtDoGetBestClientWidthint = NULL;
  virtual int DoGetBestClientWidth(int param0) const override
  {
    int res = wxButton::DoGetBestClientWidth(param0);
    if (*m_wxButtonExtDoGetBestClientWidthint != NULL){
      return m_wxButtonExtDoGetBestClientWidthint(this, param0);
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
      return m_wxButtonExtDoGetBestSize(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetBitmapwxAnyButtonBaseNStateFunc m_wxButtonExtDoGetBitmapwxAnyButtonBaseNState = NULL;
  virtual wxBitmap DoGetBitmap(wxAnyButtonBase::State which) const override
  {
    wxBitmap res = wxButton::DoGetBitmap(which);
    if (*m_wxButtonExtDoGetBitmapwxAnyButtonBaseNState != NULL){
      return m_wxButtonExtDoGetBitmapwxAnyButtonBaseNState(this, which);
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
      return m_wxButtonExtDoGetBitmapMargins(this);
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
      return m_wxButtonExtDoGetClientData(this);
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
      return m_wxButtonExtDoGetClientObject(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetClientSizeintPintPFunc m_wxButtonExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxButton::DoGetClientSize(width, height);
    if (*m_wxButtonExtDoGetClientSizeintPintP != NULL){
      return m_wxButtonExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxButtonExtDoGetPositionintPintPFunc m_wxButtonExtDoGetPositionintPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxButton::DoGetPosition(x, y);
    if (*m_wxButtonExtDoGetPositionintPintP != NULL){
      return m_wxButtonExtDoGetPositionintPintP(this, x, y);
    }
  }
  wxButtonExtDoGetScreenPositionintPintPFunc m_wxButtonExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxButton::DoGetScreenPosition(x, y);
    if (*m_wxButtonExtDoGetScreenPositionintPintP != NULL){
      return m_wxButtonExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxButtonExtDoGetSizeintPintPFunc m_wxButtonExtDoGetSizeintPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxButton::DoGetSize(width, height);
    if (*m_wxButtonExtDoGetSizeintPintP != NULL){
      return m_wxButtonExtDoGetSizeintPintP(this, width, height);
    }
  }
  wxButtonExtDoGetSizeFromTextSizeintintFunc m_wxButtonExtDoGetSizeFromTextSizeintint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxButton::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxButtonExtDoGetSizeFromTextSizeintint != NULL){
      return m_wxButtonExtDoGetSizeFromTextSizeintint(this, xlen, ylen);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* font = __null) const override
  {
    wxButton::DoGetTextExtent(string, x, y, descent, externalLeading, font);
    if (*m_wxButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, font);
    }
  }
  wxButtonExtDoGetVirtualSizeFunc m_wxButtonExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxButton::DoGetVirtualSize();
    if (*m_wxButtonExtDoGetVirtualSize != NULL){
      return m_wxButtonExtDoGetVirtualSize(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoHitTestwxCoordwxCoordFunc m_wxButtonExtDoHitTestwxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxButton::DoHitTest(x, y);
    if (*m_wxButtonExtDoHitTestwxCoordwxCoord != NULL){
      return m_wxButtonExtDoHitTestwxCoordwxCoord(this, x, y);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoIsExposedintintintintFunc m_wxButtonExtDoIsExposedintintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxButton::DoIsExposed(x, y, w, h);
    if (*m_wxButtonExtDoIsExposedintintintint != NULL){
      return m_wxButtonExtDoIsExposedintintintint(this, x, y, w, h);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoIsExposedintintFunc m_wxButtonExtDoIsExposedintint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxButton::DoIsExposed(x, y);
    if (*m_wxButtonExtDoIsExposedintint != NULL){
      return m_wxButtonExtDoIsExposedintint(this, x, y);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoMoveWindowintintintintFunc m_wxButtonExtDoMoveWindowintintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxButton::DoMoveWindow(x, y, width, height);
    if (*m_wxButtonExtDoMoveWindowintintintint != NULL){
      return m_wxButtonExtDoMoveWindowintintintint(this, x, y, width, height);
    }
  }
  wxButtonExtDoNavigateInintFunc m_wxButtonExtDoNavigateInint = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxButton::DoNavigateIn(flags);
    if (*m_wxButtonExtDoNavigateInint != NULL){
      return m_wxButtonExtDoNavigateInint(this, flags);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoPhaseintFunc m_wxButtonExtDoPhaseint = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxButton::DoPhase(phase);
    if (*m_wxButtonExtDoPhaseint != NULL){
      return m_wxButtonExtDoPhaseint(this, phase);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoPopupMenuwxMenuPintintFunc m_wxButtonExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxButton::DoPopupMenu(menu, x, y);
    if (*m_wxButtonExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxButtonExtDoPopupMenuwxMenuPintint(this, menu, x, y);
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
  wxButtonExtDoScreenToClientintPintPFunc m_wxButtonExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxButton::DoScreenToClient(x, y);
    if (*m_wxButtonExtDoScreenToClientintPintP != NULL){
      return m_wxButtonExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxButtonExtDoSetAuthNeededboolFunc m_wxButtonExtDoSetAuthNeededbool = NULL;
  virtual void DoSetAuthNeeded(bool param0) override
  {
    wxButton::DoSetAuthNeeded(param0);
    if (*m_wxButtonExtDoSetAuthNeededbool != NULL){
      return m_wxButtonExtDoSetAuthNeededbool(this, param0);
    }
  }
  wxButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc m_wxButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState = NULL;
  virtual void DoSetBitmap(wxBitmapBundle const& bitmapBundle, wxAnyButtonBase::State which) override
  {
    wxButton::DoSetBitmap(bitmapBundle, which);
    if (*m_wxButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState != NULL){
      return m_wxButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState(this, bitmapBundle, which);
    }
  }
  wxButtonExtDoSetBitmapMarginsintintFunc m_wxButtonExtDoSetBitmapMarginsintint = NULL;
  virtual void DoSetBitmapMargins(int x, int y) override
  {
    wxButton::DoSetBitmapMargins(x, y);
    if (*m_wxButtonExtDoSetBitmapMarginsintint != NULL){
      return m_wxButtonExtDoSetBitmapMarginsintint(this, x, y);
    }
  }
  wxButtonExtDoSetBitmapPositionwxDirectionFunc m_wxButtonExtDoSetBitmapPositionwxDirection = NULL;
  virtual void DoSetBitmapPosition(wxDirection dir) override
  {
    wxButton::DoSetBitmapPosition(dir);
    if (*m_wxButtonExtDoSetBitmapPositionwxDirection != NULL){
      return m_wxButtonExtDoSetBitmapPositionwxDirection(this, dir);
    }
  }
  wxButtonExtDoSetClientDatavoidPFunc m_wxButtonExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxButton::DoSetClientData(data);
    if (*m_wxButtonExtDoSetClientDatavoidP != NULL){
      return m_wxButtonExtDoSetClientDatavoidP(this, data);
    }
  }
  wxButtonExtDoSetClientObjectwxClientDataPFunc m_wxButtonExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxButton::DoSetClientObject(data);
    if (*m_wxButtonExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxButtonExtDoSetClientObjectwxClientDataP(this, data);
    }
  }
  wxButtonExtDoSetClientSizeintintFunc m_wxButtonExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxButton::DoSetClientSize(width, height);
    if (*m_wxButtonExtDoSetClientSizeintint != NULL){
      return m_wxButtonExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxButtonExtDoSetLabelMarkupwxStringCRFunc m_wxButtonExtDoSetLabelMarkupwxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxButton::DoSetLabelMarkup(markup);
    if (*m_wxButtonExtDoSetLabelMarkupwxStringCR != NULL){
      return m_wxButtonExtDoSetLabelMarkupwxStringCR(this, markup);
    }
    else {
      return res;
    }
  }
  wxButtonExtDoSetSizeintintintintintFunc m_wxButtonExtDoSetSizeintintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxButton::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxButtonExtDoSetSizeintintintintint != NULL){
      return m_wxButtonExtDoSetSizeintintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxButtonExtDoSetSizeHintsintintintintintintFunc m_wxButtonExtDoSetSizeHintsintintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxButton::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxButtonExtDoSetSizeHintsintintintintintint != NULL){
      return m_wxButtonExtDoSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxButtonExtDoSetToolTipwxToolTipPFunc m_wxButtonExtDoSetToolTipwxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxButton::DoSetToolTip(tip);
    if (*m_wxButtonExtDoSetToolTipwxToolTipP != NULL){
      return m_wxButtonExtDoSetToolTipwxToolTipP(this, tip);
    }
  }
  wxButtonExtDoSetToolTipTextwxStringCRFunc m_wxButtonExtDoSetToolTipTextwxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxButton::DoSetToolTipText(tip);
    if (*m_wxButtonExtDoSetToolTipTextwxStringCR != NULL){
      return m_wxButtonExtDoSetToolTipTextwxStringCR(this, tip);
    }
  }
  wxButtonExtDoSetVirtualSizeintintFunc m_wxButtonExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxButton::DoSetVirtualSize(x, y);
    if (*m_wxButtonExtDoSetVirtualSizeintint != NULL){
      return m_wxButtonExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxButtonExtDoSetWindowVariantwxWindowVariantFunc m_wxButtonExtDoSetWindowVariantwxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxButton::DoSetWindowVariant(variant);
    if (*m_wxButtonExtDoSetWindowVariantwxWindowVariant != NULL){
      return m_wxButtonExtDoSetWindowVariantwxWindowVariant(this, variant);
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
  wxButtonExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxButtonExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxButton::DoUpdateWindowUI(event);
    if (*m_wxButtonExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxButtonExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxButtonExtDragAcceptFilesboolFunc m_wxButtonExtDragAcceptFilesbool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxButton::DragAcceptFiles(accept);
    if (*m_wxButtonExtDragAcceptFilesbool != NULL){
      return m_wxButtonExtDragAcceptFilesbool(this, accept);
    }
  }
  wxButtonExtEnableboolFunc m_wxButtonExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxButton::Enable(enable);
    if (*m_wxButtonExtEnablebool != NULL){
      return m_wxButtonExtEnablebool(this, enable);
    }
    else {
      return res;
    }
  }
  wxButtonExtEnableTouchEventsintFunc m_wxButtonExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int param0) override
  {
    bool res = wxButton::EnableTouchEvents(param0);
    if (*m_wxButtonExtEnableTouchEventsint != NULL){
      return m_wxButtonExtEnableTouchEventsint(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonExtEnableVisibleFocusboolFunc m_wxButtonExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool param0) override
  {
    wxButton::EnableVisibleFocus(param0);
    if (*m_wxButtonExtEnableVisibleFocusbool != NULL){
      return m_wxButtonExtEnableVisibleFocusbool(this, param0);
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
      return m_wxButtonExtGetBestVirtualSize(this);
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
      return m_wxButtonExtGetCharHeight(this);
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
      return m_wxButtonExtGetCharWidth(this);
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
      return m_wxButtonExtGetClassInfo(this);
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
      return m_wxButtonExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetClientSizeConstraintintPintPFunc m_wxButtonExtGetClientSizeConstraintintPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxButton::GetClientSizeConstraint(w, h);
    if (*m_wxButtonExtGetClientSizeConstraintintPintP != NULL){
      return m_wxButtonExtGetClientSizeConstraintintPintP(this, w, h);
    }
  }
  wxButtonExtGetContentScaleFactorFunc m_wxButtonExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxButton::GetContentScaleFactor();
    if (*m_wxButtonExtGetContentScaleFactor != NULL){
      return m_wxButtonExtGetContentScaleFactor(this);
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
      return m_wxButtonExtGetDPI(this);
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
      return m_wxButtonExtGetDPIScaleFactor(this);
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
      return m_wxButtonExtGetDefaultAttributes(this);
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
      return m_wxButtonExtGetDefaultBorder(this);
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
      return m_wxButtonExtGetDefaultBorderForControl(this);
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
      return m_wxButtonExtGetDropTarget(this);
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
      return m_wxButtonExtGetEffectiveMinSize(this);
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
      return m_wxButtonExtGetEventHashTable(this);
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
      return m_wxButtonExtGetEventTable(this);
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
      return m_wxButtonExtGetHandle(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc m_wxButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxButton::GetHelpTextAtPoint(pt, origin);
    if (*m_wxButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin != NULL){
      return m_wxButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin(this, pt, origin);
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
      return m_wxButtonExtGetLabel(this);
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
      return m_wxButtonExtGetLabelText(this);
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
      return m_wxButtonExtGetLayoutDirection(this);
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
      return m_wxButtonExtGetMainWindowOfCompositeControl(this);
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
      return m_wxButtonExtGetMaxClientSize(this);
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
      return m_wxButtonExtGetMaxSize(this);
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
      return m_wxButtonExtGetMinClientSize(this);
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
      return m_wxButtonExtGetMinSize(this);
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
      return m_wxButtonExtGetName(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetNormalStateFunc m_wxButtonExtGetNormalState = NULL;
  virtual wxAnyButtonBase::State GetNormalState() const override
  {
    wxAnyButtonBase::State res = wxButton::GetNormalState();
    if (*m_wxButtonExtGetNormalState != NULL){
      return m_wxButtonExtGetNormalState(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetPositionConstraintintPintPFunc m_wxButtonExtGetPositionConstraintintPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxButton::GetPositionConstraint(x, y);
    if (*m_wxButtonExtGetPositionConstraintintPintP != NULL){
      return m_wxButtonExtGetPositionConstraintintPintP(this, x, y);
    }
  }
  wxButtonExtGetScrollPosintFunc m_wxButtonExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxButton::GetScrollPos(orient);
    if (*m_wxButtonExtGetScrollPosint != NULL){
      return m_wxButtonExtGetScrollPosint(this, orient);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetScrollRangeintFunc m_wxButtonExtGetScrollRangeint = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxButton::GetScrollRange(orient);
    if (*m_wxButtonExtGetScrollRangeint != NULL){
      return m_wxButtonExtGetScrollRangeint(this, orient);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetScrollThumbintFunc m_wxButtonExtGetScrollThumbint = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxButton::GetScrollThumb(orient);
    if (*m_wxButtonExtGetScrollThumbint != NULL){
      return m_wxButtonExtGetScrollThumbint(this, orient);
    }
    else {
      return res;
    }
  }
  wxButtonExtGetSizeConstraintintPintPFunc m_wxButtonExtGetSizeConstraintintPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxButton::GetSizeConstraint(w, h);
    if (*m_wxButtonExtGetSizeConstraintintPintP != NULL){
      return m_wxButtonExtGetSizeConstraintintPintP(this, w, h);
    }
  }
  wxButtonExtGetThemeEnabledFunc m_wxButtonExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxButton::GetThemeEnabled();
    if (*m_wxButtonExtGetThemeEnabled != NULL){
      return m_wxButtonExtGetThemeEnabled(this);
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
      return m_wxButtonExtGetValidator(this);
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
      return m_wxButtonExtGetWindowBorderSize(this);
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
      return m_wxButtonExtGetWindowStyleFlag(this);
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
      return m_wxButtonExtHasCapture(this);
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
      return m_wxButtonExtHasFocus(this);
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
      return m_wxButtonExtHasMultiplePages(this);
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
      return m_wxButtonExtHasTransparentBackground(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtHideWithEffectwxShowEffectunsignedintFunc m_wxButtonExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxButton::HideWithEffect(param0, param1);
    if (*m_wxButtonExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxButtonExtHideWithEffectwxShowEffectunsignedint(this, param0, param1);
    }
    else {
      return res;
    }
  }
  wxButtonExtInformFirstDirectionintintintFunc m_wxButtonExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxButton::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxButtonExtInformFirstDirectionintintint != NULL){
      return m_wxButtonExtInformFirstDirectionintintint(this, direction, size, availableOtherDir);
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
  wxButtonExtIsClientAreaChildwxWindowCPFunc m_wxButtonExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* param0) const override
  {
    bool res = wxButton::IsClientAreaChild(param0);
    if (*m_wxButtonExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxButtonExtIsClientAreaChildwxWindowCP(this, param0);
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
      return m_wxButtonExtIsDoubleBuffered(this);
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
      return m_wxButtonExtIsRetained(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsScrollbarAlwaysShownintFunc m_wxButtonExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int param0) const override
  {
    bool res = wxButton::IsScrollbarAlwaysShown(param0);
    if (*m_wxButtonExtIsScrollbarAlwaysShownint != NULL){
      return m_wxButtonExtIsScrollbarAlwaysShownint(this, param0);
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
      return m_wxButtonExtIsShown(this);
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
      return m_wxButtonExtIsShownOnScreen(this);
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
      return m_wxButtonExtIsThisEnabled(this);
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
      return m_wxButtonExtIsTopLevel(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind param0) const override
  {
    bool res = wxButton::IsTopNavigationDomain(param0);
    if (*m_wxButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonExtIsTransparentBackgroundSupportedwxStringPFunc m_wxButtonExtIsTransparentBackgroundSupportedwxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxButton::IsTransparentBackgroundSupported(reason);
    if (*m_wxButtonExtIsTransparentBackgroundSupportedwxStringP != NULL){
      return m_wxButtonExtIsTransparentBackgroundSupportedwxStringP(this, reason);
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
      return m_wxButtonExtLayout(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtLayoutPhase1intPFunc m_wxButtonExtLayoutPhase1intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxButton::LayoutPhase1(noChanges);
    if (*m_wxButtonExtLayoutPhase1intP != NULL){
      return m_wxButtonExtLayoutPhase1intP(this, noChanges);
    }
    else {
      return res;
    }
  }
  wxButtonExtLayoutPhase2intPFunc m_wxButtonExtLayoutPhase2intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxButton::LayoutPhase2(noChanges);
    if (*m_wxButtonExtLayoutPhase2intP != NULL){
      return m_wxButtonExtLayoutPhase2intP(this, noChanges);
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
  wxButtonExtMoveConstraintintintFunc m_wxButtonExtMoveConstraintintint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxButton::MoveConstraint(x, y);
    if (*m_wxButtonExtMoveConstraintintint != NULL){
      return m_wxButtonExtMoveConstraintintint(this, x, y);
    }
  }
  wxButtonExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxButtonExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxButton::OnDynamicBind(param0);
    if (*m_wxButtonExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxButtonExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
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
  wxButtonExtPrepareDCwxDCRFunc m_wxButtonExtPrepareDCwxDCR = NULL;
  virtual void PrepareDC(wxDC& param0) override
  {
    wxButton::PrepareDC(param0);
    if (*m_wxButtonExtPrepareDCwxDCR != NULL){
      return m_wxButtonExtPrepareDCwxDCR(this, param0);
    }
  }
  wxButtonExtProcessEventwxEventRFunc m_wxButtonExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxButton::ProcessEvent(event);
    if (*m_wxButtonExtProcessEventwxEventR != NULL){
      return m_wxButtonExtProcessEventwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxButtonExtQueueEventwxEventPFunc m_wxButtonExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxButton::QueueEvent(event);
    if (*m_wxButtonExtQueueEventwxEventP != NULL){
      return m_wxButtonExtQueueEventwxEventP(this, event);
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
  wxButtonExtRefreshboolwxRectCPFunc m_wxButtonExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = (const wxRect*)__null) override
  {
    wxButton::Refresh(eraseBackground, rect);
    if (*m_wxButtonExtRefreshboolwxRectCP != NULL){
      return m_wxButtonExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxButtonExtRegisterHotKeyintintintFunc m_wxButtonExtRegisterHotKeyintintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxButton::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxButtonExtRegisterHotKeyintintint != NULL){
      return m_wxButtonExtRegisterHotKeyintintint(this, hotkeyId, modifiers, keycode);
    }
    else {
      return res;
    }
  }
  wxButtonExtRemoveChildwxWindowBasePFunc m_wxButtonExtRemoveChildwxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxButton::RemoveChild(child);
    if (*m_wxButtonExtRemoveChildwxWindowBaseP != NULL){
      return m_wxButtonExtRemoveChildwxWindowBaseP(this, child);
    }
  }
  wxButtonExtReparentwxWindowBasePFunc m_wxButtonExtReparentwxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxButton::Reparent(newParent);
    if (*m_wxButtonExtReparentwxWindowBaseP != NULL){
      return m_wxButtonExtReparentwxWindowBaseP(this, newParent);
    }
    else {
      return res;
    }
  }
  wxButtonExtScrollLinesintFunc m_wxButtonExtScrollLinesint = NULL;
  virtual bool ScrollLines(int param0) override
  {
    bool res = wxButton::ScrollLines(param0);
    if (*m_wxButtonExtScrollLinesint != NULL){
      return m_wxButtonExtScrollLinesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonExtScrollPagesintFunc m_wxButtonExtScrollPagesint = NULL;
  virtual bool ScrollPages(int param0) override
  {
    bool res = wxButton::ScrollPages(param0);
    if (*m_wxButtonExtScrollPagesint != NULL){
      return m_wxButtonExtScrollPagesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonExtScrollWindowintintwxRectCPFunc m_wxButtonExtScrollWindowintintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxButton::ScrollWindow(dx, dy, rect);
    if (*m_wxButtonExtScrollWindowintintwxRectCP != NULL){
      return m_wxButtonExtScrollWindowintintwxRectCP(this, dx, dy, rect);
    }
  }
  wxButtonExtSearchEventTablewxEventTableRwxEventRFunc m_wxButtonExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxButton::SearchEventTable(table, event);
    if (*m_wxButtonExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxButtonExtSearchEventTablewxEventTableRwxEventR(this, table, event);
    }
    else {
      return res;
    }
  }
  wxButtonExtSendIdleEventswxIdleEventRFunc m_wxButtonExtSendIdleEventswxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxButton::SendIdleEvents(event);
    if (*m_wxButtonExtSendIdleEventswxIdleEventR != NULL){
      return m_wxButtonExtSendIdleEventswxIdleEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxButtonExtSendSizeEventintFunc m_wxButtonExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxButton::SendSizeEvent(flags);
    if (*m_wxButtonExtSendSizeEventint != NULL){
      return m_wxButtonExtSendSizeEventint(this, flags);
    }
  }
  wxButtonExtSetAcceleratorTablewxAcceleratorTableCRFunc m_wxButtonExtSetAcceleratorTablewxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxButton::SetAcceleratorTable(accel);
    if (*m_wxButtonExtSetAcceleratorTablewxAcceleratorTableCR != NULL){
      return m_wxButtonExtSetAcceleratorTablewxAcceleratorTableCR(this, accel);
    }
  }
  wxButtonExtSetBackgroundColourwxColourCRFunc m_wxButtonExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxButton::SetBackgroundColour(colour);
    if (*m_wxButtonExtSetBackgroundColourwxColourCR != NULL){
      return m_wxButtonExtSetBackgroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetBackgroundStylewxBackgroundStyleFunc m_wxButtonExtSetBackgroundStylewxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxButton::SetBackgroundStyle(style);
    if (*m_wxButtonExtSetBackgroundStylewxBackgroundStyle != NULL){
      return m_wxButtonExtSetBackgroundStylewxBackgroundStyle(this, style);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetCanFocusboolFunc m_wxButtonExtSetCanFocusbool = NULL;
  virtual void SetCanFocus(bool param0) override
  {
    wxButton::SetCanFocus(param0);
    if (*m_wxButtonExtSetCanFocusbool != NULL){
      return m_wxButtonExtSetCanFocusbool(this, param0);
    }
  }
  wxButtonExtSetConstraintSizesboolFunc m_wxButtonExtSetConstraintSizesbool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxButton::SetConstraintSizes(recurse);
    if (*m_wxButtonExtSetConstraintSizesbool != NULL){
      return m_wxButtonExtSetConstraintSizesbool(this, recurse);
    }
  }
  wxButtonExtSetCursorwxCursorCRFunc m_wxButtonExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxButton::SetCursor(cursor);
    if (*m_wxButtonExtSetCursorwxCursorCR != NULL){
      return m_wxButtonExtSetCursorwxCursorCR(this, cursor);
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
      return m_wxButtonExtSetDefault(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetDoubleBufferedboolFunc m_wxButtonExtSetDoubleBufferedbool = NULL;
  virtual void SetDoubleBuffered(bool param0) override
  {
    wxButton::SetDoubleBuffered(param0);
    if (*m_wxButtonExtSetDoubleBufferedbool != NULL){
      return m_wxButtonExtSetDoubleBufferedbool(this, param0);
    }
  }
  wxButtonExtSetDropTargetwxDropTargetPFunc m_wxButtonExtSetDropTargetwxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxButton::SetDropTarget(dropTarget);
    if (*m_wxButtonExtSetDropTargetwxDropTargetP != NULL){
      return m_wxButtonExtSetDropTargetwxDropTargetP(this, dropTarget);
    }
  }
  wxButtonExtSetExtraStylelongFunc m_wxButtonExtSetExtraStylelong = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxButton::SetExtraStyle(exStyle);
    if (*m_wxButtonExtSetExtraStylelong != NULL){
      return m_wxButtonExtSetExtraStylelong(this, exStyle);
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
  wxButtonExtSetFontwxFontCRFunc m_wxButtonExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxButton::SetFont(font);
    if (*m_wxButtonExtSetFontwxFontCR != NULL){
      return m_wxButtonExtSetFontwxFontCR(this, font);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetForegroundColourwxColourCRFunc m_wxButtonExtSetForegroundColourwxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxButton::SetForegroundColour(colour);
    if (*m_wxButtonExtSetForegroundColourwxColourCR != NULL){
      return m_wxButtonExtSetForegroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetIdwxWindowIDFunc m_wxButtonExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxButton::SetId(winid);
    if (*m_wxButtonExtSetIdwxWindowID != NULL){
      return m_wxButtonExtSetIdwxWindowID(this, winid);
    }
  }
  wxButtonExtSetLabelwxStringCRFunc m_wxButtonExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxButton::SetLabel(label);
    if (*m_wxButtonExtSetLabelwxStringCR != NULL){
      return m_wxButtonExtSetLabelwxStringCR(this, label);
    }
  }
  wxButtonExtSetLabelTextwxStringCRFunc m_wxButtonExtSetLabelTextwxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxButton::SetLabelText(text);
    if (*m_wxButtonExtSetLabelTextwxStringCR != NULL){
      return m_wxButtonExtSetLabelTextwxStringCR(this, text);
    }
  }
  wxButtonExtSetLayoutDirectionwxLayoutDirectionFunc m_wxButtonExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxButton::SetLayoutDirection(param0);
    if (*m_wxButtonExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxButtonExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxButtonExtSetMaxClientSizewxSizeCRFunc m_wxButtonExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxButton::SetMaxClientSize(size);
    if (*m_wxButtonExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxButtonExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxButtonExtSetMaxSizewxSizeCRFunc m_wxButtonExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxButton::SetMaxSize(maxSize);
    if (*m_wxButtonExtSetMaxSizewxSizeCR != NULL){
      return m_wxButtonExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxButtonExtSetMinClientSizewxSizeCRFunc m_wxButtonExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxButton::SetMinClientSize(size);
    if (*m_wxButtonExtSetMinClientSizewxSizeCR != NULL){
      return m_wxButtonExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxButtonExtSetMinSizewxSizeCRFunc m_wxButtonExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxButton::SetMinSize(minSize);
    if (*m_wxButtonExtSetMinSizewxSizeCR != NULL){
      return m_wxButtonExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxButtonExtSetNamewxStringCRFunc m_wxButtonExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxButton::SetName(name);
    if (*m_wxButtonExtSetNamewxStringCR != NULL){
      return m_wxButtonExtSetNamewxStringCR(this, name);
    }
  }
  wxButtonExtSetNextHandlerwxEvtHandlerPFunc m_wxButtonExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxButton::SetNextHandler(handler);
    if (*m_wxButtonExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxButtonExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxButtonExtSetPreviousHandlerwxEvtHandlerPFunc m_wxButtonExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxButton::SetPreviousHandler(handler);
    if (*m_wxButtonExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxButtonExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxButtonExtSetScrollPosintintboolFunc m_wxButtonExtSetScrollPosintintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxButton::SetScrollPos(orient, pos, refresh);
    if (*m_wxButtonExtSetScrollPosintintbool != NULL){
      return m_wxButtonExtSetScrollPosintintbool(this, orient, pos, refresh);
    }
  }
  wxButtonExtSetScrollbarintintintintboolFunc m_wxButtonExtSetScrollbarintintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbvisible, int range, bool refresh = true) override
  {
    wxButton::SetScrollbar(orient, pos, thumbvisible, range, refresh);
    if (*m_wxButtonExtSetScrollbarintintintintbool != NULL){
      return m_wxButtonExtSetScrollbarintintintintbool(this, orient, pos, thumbvisible, range, refresh);
    }
  }
  wxButtonExtSetSizeConstraintintintintintFunc m_wxButtonExtSetSizeConstraintintintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxButton::SetSizeConstraint(x, y, w, h);
    if (*m_wxButtonExtSetSizeConstraintintintintint != NULL){
      return m_wxButtonExtSetSizeConstraintintintintint(this, x, y, w, h);
    }
  }
  wxButtonExtSetSizeHintsintintintintintintFunc m_wxButtonExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxButton::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxButtonExtSetSizeHintsintintintintintint != NULL){
      return m_wxButtonExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxButtonExtSetThemeEnabledboolFunc m_wxButtonExtSetThemeEnabledbool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxButton::SetThemeEnabled(enableTheme);
    if (*m_wxButtonExtSetThemeEnabledbool != NULL){
      return m_wxButtonExtSetThemeEnabledbool(this, enableTheme);
    }
  }
  wxButtonExtSetTransparentwxByteFunc m_wxButtonExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte param0) override
  {
    bool res = wxButton::SetTransparent(param0);
    if (*m_wxButtonExtSetTransparentwxByte != NULL){
      return m_wxButtonExtSetTransparentwxByte(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonExtSetValidatorwxValidatorCRFunc m_wxButtonExtSetValidatorwxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxButton::SetValidator(validator);
    if (*m_wxButtonExtSetValidatorwxValidatorCR != NULL){
      return m_wxButtonExtSetValidatorwxValidatorCR(this, validator);
    }
  }
  wxButtonExtSetWindowStyleFlaglongFunc m_wxButtonExtSetWindowStyleFlaglong = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxButton::SetWindowStyleFlag(style);
    if (*m_wxButtonExtSetWindowStyleFlaglong != NULL){
      return m_wxButtonExtSetWindowStyleFlaglong(this, style);
    }
  }
  wxButtonExtShouldInheritColoursFunc m_wxButtonExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxButton::ShouldInheritColours();
    if (*m_wxButtonExtShouldInheritColours != NULL){
      return m_wxButtonExtShouldInheritColours(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtShowboolFunc m_wxButtonExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxButton::Show(show);
    if (*m_wxButtonExtShowbool != NULL){
      return m_wxButtonExtShowbool(this, show);
    }
    else {
      return res;
    }
  }
  wxButtonExtShowWithEffectwxShowEffectunsignedintFunc m_wxButtonExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxButton::ShowWithEffect(param0, param1);
    if (*m_wxButtonExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxButtonExtShowWithEffectwxShowEffectunsignedint(this, param0, param1);
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
      return m_wxButtonExtTransferDataFromWindow(this);
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
      return m_wxButtonExtTransferDataToWindow(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtTryAfterwxEventRFunc m_wxButtonExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxButton::TryAfter(event);
    if (*m_wxButtonExtTryAfterwxEventR != NULL){
      return m_wxButtonExtTryAfterwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxButtonExtTryBeforewxEventRFunc m_wxButtonExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxButton::TryBefore(event);
    if (*m_wxButtonExtTryBeforewxEventR != NULL){
      return m_wxButtonExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxButtonExtUnregisterHotKeyintFunc m_wxButtonExtUnregisterHotKeyint = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxButton::UnregisterHotKey(hotkeyId);
    if (*m_wxButtonExtUnregisterHotKeyint != NULL){
      return m_wxButtonExtUnregisterHotKeyint(this, hotkeyId);
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
  wxButtonExtUpdateWindowUIlongFunc m_wxButtonExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxButton::UpdateWindowUI(flags);
    if (*m_wxButtonExtUpdateWindowUIlong != NULL){
      return m_wxButtonExtUpdateWindowUIlong(this, flags);
    }
  }
  wxButtonExtValidateFunc m_wxButtonExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxButton::Validate();
    if (*m_wxButtonExtValidate != NULL){
      return m_wxButtonExtValidate(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXAdjustFontToOwnPPIwxFontRFunc m_wxButtonExtWXAdjustFontToOwnPPIwxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& param0) const override
  {
    wxButton::WXAdjustFontToOwnPPI(param0);
    if (*m_wxButtonExtWXAdjustFontToOwnPPIwxFontR != NULL){
      return m_wxButtonExtWXAdjustFontToOwnPPIwxFontR(this, param0);
    }
  }
  wxButtonExtWXGetTextEntryFunc m_wxButtonExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxButton::WXGetTextEntry();
    if (*m_wxButtonExtWXGetTextEntry != NULL){
      return m_wxButtonExtWXGetTextEntry(this);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXReservedEvtHandler1voidPFunc m_wxButtonExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxButton::WXReservedEvtHandler1(param0);
    if (*m_wxButtonExtWXReservedEvtHandler1voidP != NULL){
      return m_wxButtonExtWXReservedEvtHandler1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXReservedEvtHandler2voidPFunc m_wxButtonExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxButton::WXReservedEvtHandler2(param0);
    if (*m_wxButtonExtWXReservedEvtHandler2voidP != NULL){
      return m_wxButtonExtWXReservedEvtHandler2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXReservedWindow1voidPFunc m_wxButtonExtWXReservedWindow1voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxButton::WXReservedWindow1(param0);
    if (*m_wxButtonExtWXReservedWindow1voidP != NULL){
      return m_wxButtonExtWXReservedWindow1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXReservedWindow2voidPFunc m_wxButtonExtWXReservedWindow2voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxButton::WXReservedWindow2(param0);
    if (*m_wxButtonExtWXReservedWindow2voidP != NULL){
      return m_wxButtonExtWXReservedWindow2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXReservedWindow3voidPFunc m_wxButtonExtWXReservedWindow3voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxButton::WXReservedWindow3(param0);
    if (*m_wxButtonExtWXReservedWindow3voidP != NULL){
      return m_wxButtonExtWXReservedWindow3voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxButtonExtWXSetInitialFittingClientSizeintwxSizerPFunc m_wxButtonExtWXSetInitialFittingClientSizeintwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxButton::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxButtonExtWXSetInitialFittingClientSizeintwxSizerP != NULL){
      return m_wxButtonExtWXSetInitialFittingClientSizeintwxSizerP(this, flags, sizer);
    }
  }
  wxButtonExtWarpPointerintintFunc m_wxButtonExtWarpPointerintint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxButton::WarpPointer(x, y);
    if (*m_wxButtonExtWarpPointerintint != NULL){
      return m_wxButtonExtWarpPointerintint(this, x, y);
    }
  }
  wxButtonExtWindowToClientSizewxSizeCRFunc m_wxButtonExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxButton::WindowToClientSize(size);
    if (*m_wxButtonExtWindowToClientSizewxSizeCR != NULL){
      return m_wxButtonExtWindowToClientSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxButtonExt(wxButtonExtAcceptsFocusFunc a_AcceptsFocus, wxButtonExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxButtonExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxButtonExtAddChildwxWindowBasePFunc a_AddChildwxWindowBaseP, wxButtonExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxButtonExtAdjustForParentClientOriginintRintRintFunc a_AdjustForParentClientOriginintRintRint, wxButtonExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxButtonExtAssociateHandleWXWidgetFunc a_AssociateHandleWXWidget, wxButtonExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxButtonExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxButtonExtCanBeFocusedFunc a_CanBeFocused, wxButtonExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxButtonExtCanScrollintFunc a_CanScrollint, wxButtonExtCanSetTransparentFunc a_CanSetTransparent, wxButtonExtClearBackgroundFunc a_ClearBackground, wxButtonExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxButtonExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxButtonExtCommandwxCommandEventRFunc a_CommandwxCommandEventR, wxButtonExtCreateRefDataFunc a_CreateRefData, wxButtonExtDestroyFunc a_Destroy, wxButtonExtDissociateHandleFunc a_DissociateHandle, wxButtonExtDoCaptureMouseFunc a_DoCaptureMouse, wxButtonExtDoCentreintFunc a_DoCentreint, wxButtonExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxButtonExtDoEnableboolFunc a_DoEnablebool, wxButtonExtDoFreezeFunc a_DoFreeze, wxButtonExtDoGetAuthNeededFunc a_DoGetAuthNeeded, wxButtonExtDoGetBestClientHeightintFunc a_DoGetBestClientHeightint, wxButtonExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxButtonExtDoGetBestClientWidthintFunc a_DoGetBestClientWidthint, wxButtonExtDoGetBestSizeFunc a_DoGetBestSize, wxButtonExtDoGetBitmapwxAnyButtonBaseNStateFunc a_DoGetBitmapwxAnyButtonBaseNState, wxButtonExtDoGetBitmapMarginsFunc a_DoGetBitmapMargins, wxButtonExtDoGetClientDataFunc a_DoGetClientData, wxButtonExtDoGetClientObjectFunc a_DoGetClientObject, wxButtonExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxButtonExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxButtonExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxButtonExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxButtonExtDoGetSizeFromTextSizeintintFunc a_DoGetSizeFromTextSizeintint, wxButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxButtonExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxButtonExtDoHitTestwxCoordwxCoordFunc a_DoHitTestwxCoordwxCoord, wxButtonExtDoIsExposedintintintintFunc a_DoIsExposedintintintint, wxButtonExtDoIsExposedintintFunc a_DoIsExposedintint, wxButtonExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxButtonExtDoNavigateInintFunc a_DoNavigateInint, wxButtonExtDoPhaseintFunc a_DoPhaseint, wxButtonExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxButtonExtDoReleaseMouseFunc a_DoReleaseMouse, wxButtonExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxButtonExtDoSetAuthNeededboolFunc a_DoSetAuthNeededbool, wxButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNStateFunc a_DoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState, wxButtonExtDoSetBitmapMarginsintintFunc a_DoSetBitmapMarginsintint, wxButtonExtDoSetBitmapPositionwxDirectionFunc a_DoSetBitmapPositionwxDirection, wxButtonExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxButtonExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxButtonExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxButtonExtDoSetLabelMarkupwxStringCRFunc a_DoSetLabelMarkupwxStringCR, wxButtonExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxButtonExtDoSetSizeHintsintintintintintintFunc a_DoSetSizeHintsintintintintintint, wxButtonExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxButtonExtDoSetToolTipTextwxStringCRFunc a_DoSetToolTipTextwxStringCR, wxButtonExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxButtonExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxButtonExtDoThawFunc a_DoThaw, wxButtonExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxButtonExtDragAcceptFilesboolFunc a_DragAcceptFilesbool, wxButtonExtEnableboolFunc a_Enablebool, wxButtonExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxButtonExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxButtonExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxButtonExtFitFunc a_Fit, wxButtonExtFitInsideFunc a_FitInside, wxButtonExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxButtonExtGetCharHeightFunc a_GetCharHeight, wxButtonExtGetCharWidthFunc a_GetCharWidth, wxButtonExtGetClassInfoFunc a_GetClassInfo, wxButtonExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxButtonExtGetClientSizeConstraintintPintPFunc a_GetClientSizeConstraintintPintP, wxButtonExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxButtonExtGetDPIFunc a_GetDPI, wxButtonExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxButtonExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxButtonExtGetDefaultBorderFunc a_GetDefaultBorder, wxButtonExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxButtonExtGetDropTargetFunc a_GetDropTarget, wxButtonExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxButtonExtGetEventHashTableFunc a_GetEventHashTable, wxButtonExtGetEventTableFunc a_GetEventTable, wxButtonExtGetHandleFunc a_GetHandle, wxButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin, wxButtonExtGetLabelFunc a_GetLabel, wxButtonExtGetLabelTextFunc a_GetLabelText, wxButtonExtGetLayoutDirectionFunc a_GetLayoutDirection, wxButtonExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxButtonExtGetMaxClientSizeFunc a_GetMaxClientSize, wxButtonExtGetMaxSizeFunc a_GetMaxSize, wxButtonExtGetMinClientSizeFunc a_GetMinClientSize, wxButtonExtGetMinSizeFunc a_GetMinSize, wxButtonExtGetNameFunc a_GetName, wxButtonExtGetNormalStateFunc a_GetNormalState, wxButtonExtGetPositionConstraintintPintPFunc a_GetPositionConstraintintPintP, wxButtonExtGetScrollPosintFunc a_GetScrollPosint, wxButtonExtGetScrollRangeintFunc a_GetScrollRangeint, wxButtonExtGetScrollThumbintFunc a_GetScrollThumbint, wxButtonExtGetSizeConstraintintPintPFunc a_GetSizeConstraintintPintP, wxButtonExtGetThemeEnabledFunc a_GetThemeEnabled, wxButtonExtGetValidatorFunc a_GetValidator, wxButtonExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxButtonExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxButtonExtHasCaptureFunc a_HasCapture, wxButtonExtHasFocusFunc a_HasFocus, wxButtonExtHasMultiplePagesFunc a_HasMultiplePages, wxButtonExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxButtonExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxButtonExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxButtonExtInheritAttributesFunc a_InheritAttributes, wxButtonExtInitDialogFunc a_InitDialog, wxButtonExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxButtonExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxButtonExtIsRetainedFunc a_IsRetained, wxButtonExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxButtonExtIsShownFunc a_IsShown, wxButtonExtIsShownOnScreenFunc a_IsShownOnScreen, wxButtonExtIsThisEnabledFunc a_IsThisEnabled, wxButtonExtIsTopLevelFunc a_IsTopLevel, wxButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxButtonExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxButtonExtLayoutFunc a_Layout, wxButtonExtLayoutPhase1intPFunc a_LayoutPhase1intP, wxButtonExtLayoutPhase2intPFunc a_LayoutPhase2intP, wxButtonExtLowerFunc a_Lower, wxButtonExtMoveConstraintintintFunc a_MoveConstraintintint, wxButtonExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxButtonExtOnInternalIdleFunc a_OnInternalIdle, wxButtonExtPrepareDCwxDCRFunc a_PrepareDCwxDCR, wxButtonExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxButtonExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxButtonExtRaiseFunc a_Raise, wxButtonExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxButtonExtRegisterHotKeyintintintFunc a_RegisterHotKeyintintint, wxButtonExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxButtonExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxButtonExtScrollLinesintFunc a_ScrollLinesint, wxButtonExtScrollPagesintFunc a_ScrollPagesint, wxButtonExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxButtonExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxButtonExtSendIdleEventswxIdleEventRFunc a_SendIdleEventswxIdleEventR, wxButtonExtSendSizeEventintFunc a_SendSizeEventint, wxButtonExtSetAcceleratorTablewxAcceleratorTableCRFunc a_SetAcceleratorTablewxAcceleratorTableCR, wxButtonExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxButtonExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxButtonExtSetCanFocusboolFunc a_SetCanFocusbool, wxButtonExtSetConstraintSizesboolFunc a_SetConstraintSizesbool, wxButtonExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxButtonExtSetDefaultFunc a_SetDefault, wxButtonExtSetDoubleBufferedboolFunc a_SetDoubleBufferedbool, wxButtonExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxButtonExtSetExtraStylelongFunc a_SetExtraStylelong, wxButtonExtSetFocusFunc a_SetFocus, wxButtonExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxButtonExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxButtonExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxButtonExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxButtonExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxButtonExtSetLabelTextwxStringCRFunc a_SetLabelTextwxStringCR, wxButtonExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxButtonExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxButtonExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxButtonExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxButtonExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxButtonExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxButtonExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxButtonExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxButtonExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxButtonExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxButtonExtSetSizeConstraintintintintintFunc a_SetSizeConstraintintintintint, wxButtonExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxButtonExtSetThemeEnabledboolFunc a_SetThemeEnabledbool, wxButtonExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxButtonExtSetValidatorwxValidatorCRFunc a_SetValidatorwxValidatorCR, wxButtonExtSetWindowStyleFlaglongFunc a_SetWindowStyleFlaglong, wxButtonExtShouldInheritColoursFunc a_ShouldInheritColours, wxButtonExtShowboolFunc a_Showbool, wxButtonExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxButtonExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxButtonExtTransferDataToWindowFunc a_TransferDataToWindow, wxButtonExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxButtonExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxButtonExtUnregisterHotKeyintFunc a_UnregisterHotKeyint, wxButtonExtUpdateFunc a_Update, wxButtonExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxButtonExtValidateFunc a_Validate, wxButtonExtWXAdjustFontToOwnPPIwxFontRFunc a_WXAdjustFontToOwnPPIwxFontR, wxButtonExtWXGetTextEntryFunc a_WXGetTextEntry, wxButtonExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxButtonExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxButtonExtWXReservedWindow1voidPFunc a_WXReservedWindow1voidP, wxButtonExtWXReservedWindow2voidPFunc a_WXReservedWindow2voidP, wxButtonExtWXReservedWindow3voidPFunc a_WXReservedWindow3voidP, wxButtonExtWXSetInitialFittingClientSizeintwxSizerPFunc a_WXSetInitialFittingClientSizeintwxSizerP, wxButtonExtWarpPointerintintFunc a_WarpPointerintint, wxButtonExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxButton() {
    m_wxButtonExtAcceptsFocus = a_AcceptsFocus;
    m_wxButtonExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxButtonExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxButtonExtAddChildwxWindowBaseP = a_AddChildwxWindowBaseP;
    m_wxButtonExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxButtonExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxButtonExtAdjustForParentClientOriginintRintRint = a_AdjustForParentClientOriginintRintRint;
    m_wxButtonExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxButtonExtAssociateHandleWXWidget = a_AssociateHandleWXWidget;
    m_wxButtonExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxButtonExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxButtonExtCanBeFocused = a_CanBeFocused;
    m_wxButtonExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxButtonExtCanScrollint = a_CanScrollint;
    m_wxButtonExtCanSetTransparent = a_CanSetTransparent;
    m_wxButtonExtClearBackground = a_ClearBackground;
    m_wxButtonExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxButtonExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxButtonExtCommandwxCommandEventR = a_CommandwxCommandEventR;
    m_wxButtonExtCreateRefData = a_CreateRefData;
    m_wxButtonExtDestroy = a_Destroy;
    m_wxButtonExtDissociateHandle = a_DissociateHandle;
    m_wxButtonExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxButtonExtDoCentreint = a_DoCentreint;
    m_wxButtonExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxButtonExtDoEnablebool = a_DoEnablebool;
    m_wxButtonExtDoFreeze = a_DoFreeze;
    m_wxButtonExtDoGetAuthNeeded = a_DoGetAuthNeeded;
    m_wxButtonExtDoGetBestClientHeightint = a_DoGetBestClientHeightint;
    m_wxButtonExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxButtonExtDoGetBestClientWidthint = a_DoGetBestClientWidthint;
    m_wxButtonExtDoGetBestSize = a_DoGetBestSize;
    m_wxButtonExtDoGetBitmapwxAnyButtonBaseNState = a_DoGetBitmapwxAnyButtonBaseNState;
    m_wxButtonExtDoGetBitmapMargins = a_DoGetBitmapMargins;
    m_wxButtonExtDoGetClientData = a_DoGetClientData;
    m_wxButtonExtDoGetClientObject = a_DoGetClientObject;
    m_wxButtonExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxButtonExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxButtonExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxButtonExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxButtonExtDoGetSizeFromTextSizeintint = a_DoGetSizeFromTextSizeintint;
    m_wxButtonExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxButtonExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxButtonExtDoHitTestwxCoordwxCoord = a_DoHitTestwxCoordwxCoord;
    m_wxButtonExtDoIsExposedintintintint = a_DoIsExposedintintintint;
    m_wxButtonExtDoIsExposedintint = a_DoIsExposedintint;
    m_wxButtonExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxButtonExtDoNavigateInint = a_DoNavigateInint;
    m_wxButtonExtDoPhaseint = a_DoPhaseint;
    m_wxButtonExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxButtonExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxButtonExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxButtonExtDoSetAuthNeededbool = a_DoSetAuthNeededbool;
    m_wxButtonExtDoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState = a_DoSetBitmapwxBitmapBundleCRwxAnyButtonBaseNState;
    m_wxButtonExtDoSetBitmapMarginsintint = a_DoSetBitmapMarginsintint;
    m_wxButtonExtDoSetBitmapPositionwxDirection = a_DoSetBitmapPositionwxDirection;
    m_wxButtonExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxButtonExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxButtonExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxButtonExtDoSetLabelMarkupwxStringCR = a_DoSetLabelMarkupwxStringCR;
    m_wxButtonExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxButtonExtDoSetSizeHintsintintintintintint = a_DoSetSizeHintsintintintintintint;
    m_wxButtonExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxButtonExtDoSetToolTipTextwxStringCR = a_DoSetToolTipTextwxStringCR;
    m_wxButtonExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxButtonExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxButtonExtDoThaw = a_DoThaw;
    m_wxButtonExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxButtonExtDragAcceptFilesbool = a_DragAcceptFilesbool;
    m_wxButtonExtEnablebool = a_Enablebool;
    m_wxButtonExtEnableTouchEventsint = a_EnableTouchEventsint;
    m_wxButtonExtEnableVisibleFocusbool = a_EnableVisibleFocusbool;
    m_wxButtonExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxButtonExtFit = a_Fit;
    m_wxButtonExtFitInside = a_FitInside;
    m_wxButtonExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxButtonExtGetCharHeight = a_GetCharHeight;
    m_wxButtonExtGetCharWidth = a_GetCharWidth;
    m_wxButtonExtGetClassInfo = a_GetClassInfo;
    m_wxButtonExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxButtonExtGetClientSizeConstraintintPintP = a_GetClientSizeConstraintintPintP;
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
    m_wxButtonExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin;
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
    m_wxButtonExtGetPositionConstraintintPintP = a_GetPositionConstraintintPintP;
    m_wxButtonExtGetScrollPosint = a_GetScrollPosint;
    m_wxButtonExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxButtonExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxButtonExtGetSizeConstraintintPintP = a_GetSizeConstraintintPintP;
    m_wxButtonExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxButtonExtGetValidator = a_GetValidator;
    m_wxButtonExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxButtonExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxButtonExtHasCapture = a_HasCapture;
    m_wxButtonExtHasFocus = a_HasFocus;
    m_wxButtonExtHasMultiplePages = a_HasMultiplePages;
    m_wxButtonExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxButtonExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxButtonExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxButtonExtInheritAttributes = a_InheritAttributes;
    m_wxButtonExtInitDialog = a_InitDialog;
    m_wxButtonExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxButtonExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxButtonExtIsRetained = a_IsRetained;
    m_wxButtonExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxButtonExtIsShown = a_IsShown;
    m_wxButtonExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxButtonExtIsThisEnabled = a_IsThisEnabled;
    m_wxButtonExtIsTopLevel = a_IsTopLevel;
    m_wxButtonExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxButtonExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxButtonExtLayout = a_Layout;
    m_wxButtonExtLayoutPhase1intP = a_LayoutPhase1intP;
    m_wxButtonExtLayoutPhase2intP = a_LayoutPhase2intP;
    m_wxButtonExtLower = a_Lower;
    m_wxButtonExtMoveConstraintintint = a_MoveConstraintintint;
    m_wxButtonExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxButtonExtOnInternalIdle = a_OnInternalIdle;
    m_wxButtonExtPrepareDCwxDCR = a_PrepareDCwxDCR;
    m_wxButtonExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxButtonExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxButtonExtRaise = a_Raise;
    m_wxButtonExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxButtonExtRegisterHotKeyintintint = a_RegisterHotKeyintintint;
    m_wxButtonExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxButtonExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxButtonExtScrollLinesint = a_ScrollLinesint;
    m_wxButtonExtScrollPagesint = a_ScrollPagesint;
    m_wxButtonExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxButtonExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxButtonExtSendIdleEventswxIdleEventR = a_SendIdleEventswxIdleEventR;
    m_wxButtonExtSendSizeEventint = a_SendSizeEventint;
    m_wxButtonExtSetAcceleratorTablewxAcceleratorTableCR = a_SetAcceleratorTablewxAcceleratorTableCR;
    m_wxButtonExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxButtonExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxButtonExtSetCanFocusbool = a_SetCanFocusbool;
    m_wxButtonExtSetConstraintSizesbool = a_SetConstraintSizesbool;
    m_wxButtonExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxButtonExtSetDefault = a_SetDefault;
    m_wxButtonExtSetDoubleBufferedbool = a_SetDoubleBufferedbool;
    m_wxButtonExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxButtonExtSetExtraStylelong = a_SetExtraStylelong;
    m_wxButtonExtSetFocus = a_SetFocus;
    m_wxButtonExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxButtonExtSetFontwxFontCR = a_SetFontwxFontCR;
    m_wxButtonExtSetForegroundColourwxColourCR = a_SetForegroundColourwxColourCR;
    m_wxButtonExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxButtonExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxButtonExtSetLabelTextwxStringCR = a_SetLabelTextwxStringCR;
    m_wxButtonExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxButtonExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxButtonExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxButtonExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxButtonExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxButtonExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxButtonExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxButtonExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxButtonExtSetScrollPosintintbool = a_SetScrollPosintintbool;
    m_wxButtonExtSetScrollbarintintintintbool = a_SetScrollbarintintintintbool;
    m_wxButtonExtSetSizeConstraintintintintint = a_SetSizeConstraintintintintint;
    m_wxButtonExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxButtonExtSetThemeEnabledbool = a_SetThemeEnabledbool;
    m_wxButtonExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxButtonExtSetValidatorwxValidatorCR = a_SetValidatorwxValidatorCR;
    m_wxButtonExtSetWindowStyleFlaglong = a_SetWindowStyleFlaglong;
    m_wxButtonExtShouldInheritColours = a_ShouldInheritColours;
    m_wxButtonExtShowbool = a_Showbool;
    m_wxButtonExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxButtonExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxButtonExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxButtonExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxButtonExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxButtonExtUnregisterHotKeyint = a_UnregisterHotKeyint;
    m_wxButtonExtUpdate = a_Update;
    m_wxButtonExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxButtonExtValidate = a_Validate;
    m_wxButtonExtWXAdjustFontToOwnPPIwxFontR = a_WXAdjustFontToOwnPPIwxFontR;
    m_wxButtonExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxButtonExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxButtonExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxButtonExtWXReservedWindow1voidP = a_WXReservedWindow1voidP;
    m_wxButtonExtWXReservedWindow2voidP = a_WXReservedWindow2voidP;
    m_wxButtonExtWXReservedWindow3voidP = a_WXReservedWindow3voidP;
    m_wxButtonExtWXSetInitialFittingClientSizeintwxSizerP = a_WXSetInitialFittingClientSizeintwxSizerP;
    m_wxButtonExtWarpPointerintint = a_WarpPointerintint;
    m_wxButtonExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
  }
};



#endif
