#ifndef _WX_CONTROL_H_EXT_
#define _WX_CONTROL_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxControlBaseExt;
typedef bool (*wxControlBaseExtAcceptsFocusFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtAcceptsFocusFromKeyboardFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtAcceptsFocusRecursivelyFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtAddChildwxWindowBasePFunc)(const wxControlBaseExt* self, wxWindowBase* child);
typedef void (*wxControlBaseExtAddPendingEventwxEventCRFunc)(const wxControlBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxControlBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxControlBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal);
typedef void (*wxControlBaseExtAdjustForParentClientOriginintRintRintFunc)(const wxControlBaseExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxControlBaseExtAlwaysShowScrollbarsboolboolFunc)(const wxControlBaseExt* self, bool param0, bool param1);
typedef void (*wxControlBaseExtAssociateHandleWXWidgetFunc)(const wxControlBaseExt* self, WXWidget param0);
typedef bool (*wxControlBaseExtBeginRepositioningChildrenFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtCanApplyThemeBorderFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtCanBeFocusedFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtCanBeOutsideClientAreaFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtCanScrollintFunc)(const wxControlBaseExt* self, int orient);
typedef bool (*wxControlBaseExtCanSetTransparentFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtClearBackgroundFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtClientToWindowSizewxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& size);
typedef wxObjectRefData* (*wxControlBaseExtCloneRefDatawxObjectRefDataCPFunc)(const wxControlBaseExt* self, wxObjectRefData const* data);
typedef void (*wxControlBaseExtCommandwxCommandEventRFunc)(const wxControlBaseExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxControlBaseExtCreateRefDataFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtDestroyFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtDissociateHandleFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtDoCaptureMouseFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtDoCentreintFunc)(const wxControlBaseExt* self, int dir);
typedef void (*wxControlBaseExtDoClientToScreenintPintPFunc)(const wxControlBaseExt* self, int* x, int* y);
typedef void (*wxControlBaseExtDoEnableboolFunc)(const wxControlBaseExt* self, bool param0);
typedef void (*wxControlBaseExtDoFreezeFunc)(const wxControlBaseExt* self);
typedef int (*wxControlBaseExtDoGetBestClientHeightintFunc)(const wxControlBaseExt* self, int param0);
typedef wxSize (*wxControlBaseExtDoGetBestClientSizeFunc)(const wxControlBaseExt* self);
typedef int (*wxControlBaseExtDoGetBestClientWidthintFunc)(const wxControlBaseExt* self, int param0);
typedef wxSize (*wxControlBaseExtDoGetBestSizeFunc)(const wxControlBaseExt* self);
typedef void* (*wxControlBaseExtDoGetClientDataFunc)(const wxControlBaseExt* self);
typedef wxClientData* (*wxControlBaseExtDoGetClientObjectFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtDoGetClientSizeintPintPFunc)(const wxControlBaseExt* self, int* width, int* height);
typedef void (*wxControlBaseExtDoGetPositionintPintPFunc)(const wxControlBaseExt* self, int* x, int* y);
typedef void (*wxControlBaseExtDoGetScreenPositionintPintPFunc)(const wxControlBaseExt* self, int* x, int* y);
typedef void (*wxControlBaseExtDoGetSizeintPintPFunc)(const wxControlBaseExt* self, int* width, int* height);
typedef wxSize (*wxControlBaseExtDoGetSizeFromTextSizeintintFunc)(const wxControlBaseExt* self, int xlen, int ylen);
typedef void (*wxControlBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxControlBaseExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* font);
typedef wxSize (*wxControlBaseExtDoGetVirtualSizeFunc)(const wxControlBaseExt* self);
typedef wxHitTest (*wxControlBaseExtDoHitTestwxCoordwxCoordFunc)(const wxControlBaseExt* self, wxCoord x, wxCoord y);
typedef bool (*wxControlBaseExtDoIsExposedintintintintFunc)(const wxControlBaseExt* self, int x, int y, int w, int h);
typedef bool (*wxControlBaseExtDoIsExposedintintFunc)(const wxControlBaseExt* self, int x, int y);
typedef void (*wxControlBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc)(const wxControlBaseExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxControlBaseExtDoMoveWindowintintintintFunc)(const wxControlBaseExt* self, int x, int y, int width, int height);
typedef bool (*wxControlBaseExtDoNavigateInintFunc)(const wxControlBaseExt* self, int flags);
typedef bool (*wxControlBaseExtDoPhaseintFunc)(const wxControlBaseExt* self, int phase);
typedef bool (*wxControlBaseExtDoPopupMenuwxMenuPintintFunc)(const wxControlBaseExt* self, wxMenu* menu, int x, int y);
typedef void (*wxControlBaseExtDoReleaseMouseFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtDoScreenToClientintPintPFunc)(const wxControlBaseExt* self, int* x, int* y);
typedef void (*wxControlBaseExtDoSetClientDatavoidPFunc)(const wxControlBaseExt* self, void* data);
typedef void (*wxControlBaseExtDoSetClientObjectwxClientDataPFunc)(const wxControlBaseExt* self, wxClientData* data);
typedef void (*wxControlBaseExtDoSetClientSizeintintFunc)(const wxControlBaseExt* self, int width, int height);
typedef bool (*wxControlBaseExtDoSetLabelMarkupwxStringCRFunc)(const wxControlBaseExt* self, wxString const& markup);
typedef void (*wxControlBaseExtDoSetSizeintintintintintFunc)(const wxControlBaseExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxControlBaseExtDoSetSizeHintsintintintintintintFunc)(const wxControlBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxControlBaseExtDoSetToolTipwxToolTipPFunc)(const wxControlBaseExt* self, wxToolTip* tip);
typedef void (*wxControlBaseExtDoSetToolTipTextwxStringCRFunc)(const wxControlBaseExt* self, wxString const& tip);
typedef void (*wxControlBaseExtDoSetVirtualSizeintintFunc)(const wxControlBaseExt* self, int x, int y);
typedef void (*wxControlBaseExtDoSetWindowVariantwxWindowVariantFunc)(const wxControlBaseExt* self, wxWindowVariant variant);
typedef void (*wxControlBaseExtDoThawFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxControlBaseExt* self, wxUpdateUIEvent& event);
typedef void (*wxControlBaseExtDragAcceptFilesboolFunc)(const wxControlBaseExt* self, bool accept);
typedef bool (*wxControlBaseExtEnableboolFunc)(const wxControlBaseExt* self, bool enable);
typedef bool (*wxControlBaseExtEnableTouchEventsintFunc)(const wxControlBaseExt* self, int param0);
typedef void (*wxControlBaseExtEnableVisibleFocusboolFunc)(const wxControlBaseExt* self, bool param0);
typedef void (*wxControlBaseExtEndRepositioningChildrenFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtFitFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtFitInsideFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtGetBestVirtualSizeFunc)(const wxControlBaseExt* self);
typedef int (*wxControlBaseExtGetCharHeightFunc)(const wxControlBaseExt* self);
typedef int (*wxControlBaseExtGetCharWidthFunc)(const wxControlBaseExt* self);
typedef wxClassInfo* (*wxControlBaseExtGetClassInfoFunc)(const wxControlBaseExt* self);
typedef wxPoint (*wxControlBaseExtGetClientAreaOriginFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtGetClientSizeConstraintintPintPFunc)(const wxControlBaseExt* self, int* w, int* h);
typedef double (*wxControlBaseExtGetContentScaleFactorFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtGetDPIFunc)(const wxControlBaseExt* self);
typedef double (*wxControlBaseExtGetDPIScaleFactorFunc)(const wxControlBaseExt* self);
typedef wxVisualAttributes (*wxControlBaseExtGetDefaultAttributesFunc)(const wxControlBaseExt* self);
typedef wxBorder (*wxControlBaseExtGetDefaultBorderFunc)(const wxControlBaseExt* self);
typedef wxBorder (*wxControlBaseExtGetDefaultBorderForControlFunc)(const wxControlBaseExt* self);
typedef wxDropTarget* (*wxControlBaseExtGetDropTargetFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtGetEffectiveMinSizeFunc)(const wxControlBaseExt* self);
typedef wxEventHashTable& (*wxControlBaseExtGetEventHashTableFunc)(const wxControlBaseExt* self);
typedef wxEventTable const* (*wxControlBaseExtGetEventTableFunc)(const wxControlBaseExt* self);
typedef WXWidget (*wxControlBaseExtGetHandleFunc)(const wxControlBaseExt* self);
typedef wxString (*wxControlBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc)(const wxControlBaseExt* self, wxPoint const& pt, wxHelpEvent::Origin origin);
typedef wxString (*wxControlBaseExtGetLabelFunc)(const wxControlBaseExt* self);
typedef wxString (*wxControlBaseExtGetLabelTextFunc)(const wxControlBaseExt* self);
typedef wxLayoutDirection (*wxControlBaseExtGetLayoutDirectionFunc)(const wxControlBaseExt* self);
typedef wxWindow* (*wxControlBaseExtGetMainWindowOfCompositeControlFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtGetMaxClientSizeFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtGetMaxSizeFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtGetMinClientSizeFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtGetMinSizeFunc)(const wxControlBaseExt* self);
typedef wxString (*wxControlBaseExtGetNameFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtGetPositionConstraintintPintPFunc)(const wxControlBaseExt* self, int* x, int* y);
typedef int (*wxControlBaseExtGetScrollPosintFunc)(const wxControlBaseExt* self, int orient);
typedef int (*wxControlBaseExtGetScrollRangeintFunc)(const wxControlBaseExt* self, int orient);
typedef int (*wxControlBaseExtGetScrollThumbintFunc)(const wxControlBaseExt* self, int orient);
typedef void (*wxControlBaseExtGetSizeConstraintintPintPFunc)(const wxControlBaseExt* self, int* w, int* h);
typedef bool (*wxControlBaseExtGetThemeEnabledFunc)(const wxControlBaseExt* self);
typedef wxValidator* (*wxControlBaseExtGetValidatorFunc)(const wxControlBaseExt* self);
typedef wxSize (*wxControlBaseExtGetWindowBorderSizeFunc)(const wxControlBaseExt* self);
typedef long (*wxControlBaseExtGetWindowStyleFlagFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtHasCaptureFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtHasFocusFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtHasMultiplePagesFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtHasTransparentBackgroundFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtHideWithEffectwxShowEffectunsignedintFunc)(const wxControlBaseExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxControlBaseExtInformFirstDirectionintintintFunc)(const wxControlBaseExt* self, int direction, int size, int availableOtherDir);
typedef void (*wxControlBaseExtInheritAttributesFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtInitDialogFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtIsClientAreaChildwxWindowCPFunc)(const wxControlBaseExt* self, wxWindow const* param0);
typedef bool (*wxControlBaseExtIsDoubleBufferedFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtIsRetainedFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtIsScrollbarAlwaysShownintFunc)(const wxControlBaseExt* self, int param0);
typedef bool (*wxControlBaseExtIsShownFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtIsShownOnScreenFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtIsThisEnabledFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtIsTopLevelFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxControlBaseExt* self, wxWindowBase::NavigationKind param0);
typedef bool (*wxControlBaseExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxControlBaseExt* self, wxString* reason);
typedef bool (*wxControlBaseExtLayoutFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtLayoutPhase1intPFunc)(const wxControlBaseExt* self, int* noChanges);
typedef bool (*wxControlBaseExtLayoutPhase2intPFunc)(const wxControlBaseExt* self, int* noChanges);
typedef void (*wxControlBaseExtLowerFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtMoveConstraintintintFunc)(const wxControlBaseExt* self, int x, int y);
typedef bool (*wxControlBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxControlBaseExt* self, wxDynamicEventTableEntry& param0);
typedef void (*wxControlBaseExtOnInternalIdleFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtPrepareDCwxDCRFunc)(const wxControlBaseExt* self, wxDC& param0);
typedef bool (*wxControlBaseExtProcessEventwxEventRFunc)(const wxControlBaseExt* self, wxEvent& event);
typedef void (*wxControlBaseExtQueueEventwxEventPFunc)(const wxControlBaseExt* self, wxEvent* event);
typedef void (*wxControlBaseExtRaiseFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtRefreshboolwxRectCPFunc)(const wxControlBaseExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxControlBaseExtRegisterHotKeyintintintFunc)(const wxControlBaseExt* self, int hotkeyId, int modifiers, int keycode);
typedef void (*wxControlBaseExtRemoveChildwxWindowBasePFunc)(const wxControlBaseExt* self, wxWindowBase* child);
typedef bool (*wxControlBaseExtReparentwxWindowBasePFunc)(const wxControlBaseExt* self, wxWindowBase* newParent);
typedef bool (*wxControlBaseExtScrollLinesintFunc)(const wxControlBaseExt* self, int param0);
typedef bool (*wxControlBaseExtScrollPagesintFunc)(const wxControlBaseExt* self, int param0);
typedef void (*wxControlBaseExtScrollWindowintintwxRectCPFunc)(const wxControlBaseExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxControlBaseExtSearchEventTablewxEventTableRwxEventRFunc)(const wxControlBaseExt* self, wxEventTable& table, wxEvent& event);
typedef bool (*wxControlBaseExtSendIdleEventswxIdleEventRFunc)(const wxControlBaseExt* self, wxIdleEvent& event);
typedef void (*wxControlBaseExtSendSizeEventintFunc)(const wxControlBaseExt* self, int flags);
typedef void (*wxControlBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc)(const wxControlBaseExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxControlBaseExtSetBackgroundColourwxColourCRFunc)(const wxControlBaseExt* self, wxColour const& colour);
typedef bool (*wxControlBaseExtSetBackgroundStylewxBackgroundStyleFunc)(const wxControlBaseExt* self, wxBackgroundStyle style);
typedef void (*wxControlBaseExtSetCanFocusboolFunc)(const wxControlBaseExt* self, bool param0);
typedef void (*wxControlBaseExtSetConstraintSizesboolFunc)(const wxControlBaseExt* self, bool recurse);
typedef bool (*wxControlBaseExtSetCursorwxCursorCRFunc)(const wxControlBaseExt* self, wxCursor const& cursor);
typedef void (*wxControlBaseExtSetDoubleBufferedboolFunc)(const wxControlBaseExt* self, bool param0);
typedef void (*wxControlBaseExtSetDropTargetwxDropTargetPFunc)(const wxControlBaseExt* self, wxDropTarget* dropTarget);
typedef void (*wxControlBaseExtSetExtraStylelongFunc)(const wxControlBaseExt* self, long exStyle);
typedef void (*wxControlBaseExtSetFocusFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtSetFocusFromKbdFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtSetFontwxFontCRFunc)(const wxControlBaseExt* self, wxFont const& font);
typedef bool (*wxControlBaseExtSetForegroundColourwxColourCRFunc)(const wxControlBaseExt* self, wxColour const& colour);
typedef void (*wxControlBaseExtSetIdwxWindowIDFunc)(const wxControlBaseExt* self, wxWindowID winid);
typedef void (*wxControlBaseExtSetLabelwxStringCRFunc)(const wxControlBaseExt* self, wxString const& label);
typedef void (*wxControlBaseExtSetLabelTextwxStringCRFunc)(const wxControlBaseExt* self, wxString const& text);
typedef void (*wxControlBaseExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxControlBaseExt* self, wxLayoutDirection param0);
typedef void (*wxControlBaseExtSetMaxClientSizewxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& size);
typedef void (*wxControlBaseExtSetMaxSizewxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& maxSize);
typedef void (*wxControlBaseExtSetMinClientSizewxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& size);
typedef void (*wxControlBaseExtSetMinSizewxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& minSize);
typedef void (*wxControlBaseExtSetNamewxStringCRFunc)(const wxControlBaseExt* self, wxString const& name);
typedef void (*wxControlBaseExtSetNextHandlerwxEvtHandlerPFunc)(const wxControlBaseExt* self, wxEvtHandler* handler);
typedef void (*wxControlBaseExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxControlBaseExt* self, wxEvtHandler* handler);
typedef void (*wxControlBaseExtSetScrollPosintintboolFunc)(const wxControlBaseExt* self, int orient, int pos, bool refresh);
typedef void (*wxControlBaseExtSetScrollbarintintintintboolFunc)(const wxControlBaseExt* self, int orient, int pos, int thumbvisible, int range, bool refresh);
typedef void (*wxControlBaseExtSetSizeConstraintintintintintFunc)(const wxControlBaseExt* self, int x, int y, int w, int h);
typedef void (*wxControlBaseExtSetSizeHintsintintintintintintFunc)(const wxControlBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxControlBaseExtSetThemeEnabledboolFunc)(const wxControlBaseExt* self, bool enableTheme);
typedef bool (*wxControlBaseExtSetTransparentwxByteFunc)(const wxControlBaseExt* self, wxByte param0);
typedef void (*wxControlBaseExtSetValidatorwxValidatorCRFunc)(const wxControlBaseExt* self, wxValidator const& validator);
typedef void (*wxControlBaseExtSetWindowStyleFlaglongFunc)(const wxControlBaseExt* self, long style);
typedef bool (*wxControlBaseExtShouldInheritColoursFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtShowboolFunc)(const wxControlBaseExt* self, bool show);
typedef bool (*wxControlBaseExtShowWithEffectwxShowEffectunsignedintFunc)(const wxControlBaseExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxControlBaseExtTransferDataFromWindowFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtTransferDataToWindowFunc)(const wxControlBaseExt* self);
typedef bool (*wxControlBaseExtTryAfterwxEventRFunc)(const wxControlBaseExt* self, wxEvent& event);
typedef bool (*wxControlBaseExtTryBeforewxEventRFunc)(const wxControlBaseExt* self, wxEvent& event);
typedef bool (*wxControlBaseExtUnregisterHotKeyintFunc)(const wxControlBaseExt* self, int hotkeyId);
typedef void (*wxControlBaseExtUpdateFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtUpdateWindowUIlongFunc)(const wxControlBaseExt* self, long flags);
typedef bool (*wxControlBaseExtValidateFunc)(const wxControlBaseExt* self);
typedef void (*wxControlBaseExtWXAdjustFontToOwnPPIwxFontRFunc)(const wxControlBaseExt* self, wxFont& param0);
typedef wxTextEntry const* (*wxControlBaseExtWXGetTextEntryFunc)(const wxControlBaseExt* self);
typedef void* (*wxControlBaseExtWXReservedEvtHandler1voidPFunc)(const wxControlBaseExt* self, void* param0);
typedef void* (*wxControlBaseExtWXReservedEvtHandler2voidPFunc)(const wxControlBaseExt* self, void* param0);
typedef void* (*wxControlBaseExtWXReservedWindow1voidPFunc)(const wxControlBaseExt* self, void* param0);
typedef void* (*wxControlBaseExtWXReservedWindow2voidPFunc)(const wxControlBaseExt* self, void* param0);
typedef void* (*wxControlBaseExtWXReservedWindow3voidPFunc)(const wxControlBaseExt* self, void* param0);
typedef void (*wxControlBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc)(const wxControlBaseExt* self, int flags, wxSizer* sizer);
typedef void (*wxControlBaseExtWarpPointerintintFunc)(const wxControlBaseExt* self, int x, int y);
typedef wxSize (*wxControlBaseExtWindowToClientSizewxSizeCRFunc)(const wxControlBaseExt* self, wxSize const& size);
class wxControlExt;
typedef bool (*wxControlExtAcceptsFocusFunc)(const wxControlExt* self);
typedef bool (*wxControlExtAcceptsFocusFromKeyboardFunc)(const wxControlExt* self);
typedef bool (*wxControlExtAcceptsFocusRecursivelyFunc)(const wxControlExt* self);
typedef void (*wxControlExtAddChildwxWindowBasePFunc)(const wxControlExt* self, wxWindowBase* child);
typedef void (*wxControlExtAddPendingEventwxEventCRFunc)(const wxControlExt* self, wxEvent const& event);
typedef wxCoord (*wxControlExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxControlExt* self, wxCoord x, wxCoord width, wxCoord widthTotal);
typedef void (*wxControlExtAdjustForParentClientOriginintRintRintFunc)(const wxControlExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxControlExtAlwaysShowScrollbarsboolboolFunc)(const wxControlExt* self, bool param0, bool param1);
typedef void (*wxControlExtAssociateHandleWXWidgetFunc)(const wxControlExt* self, WXWidget param0);
typedef bool (*wxControlExtBeginRepositioningChildrenFunc)(const wxControlExt* self);
typedef bool (*wxControlExtCanApplyThemeBorderFunc)(const wxControlExt* self);
typedef bool (*wxControlExtCanBeFocusedFunc)(const wxControlExt* self);
typedef bool (*wxControlExtCanBeOutsideClientAreaFunc)(const wxControlExt* self);
typedef bool (*wxControlExtCanScrollintFunc)(const wxControlExt* self, int orient);
typedef bool (*wxControlExtCanSetTransparentFunc)(const wxControlExt* self);
typedef void (*wxControlExtClearBackgroundFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtClientToWindowSizewxSizeCRFunc)(const wxControlExt* self, wxSize const& size);
typedef wxObjectRefData* (*wxControlExtCloneRefDatawxObjectRefDataCPFunc)(const wxControlExt* self, wxObjectRefData const* data);
typedef void (*wxControlExtCommandwxCommandEventRFunc)(const wxControlExt* self, wxCommandEvent& event);
typedef wxObjectRefData* (*wxControlExtCreateRefDataFunc)(const wxControlExt* self);
typedef bool (*wxControlExtDestroyFunc)(const wxControlExt* self);
typedef void (*wxControlExtDissociateHandleFunc)(const wxControlExt* self);
typedef void (*wxControlExtDoCaptureMouseFunc)(const wxControlExt* self);
typedef void (*wxControlExtDoCentreintFunc)(const wxControlExt* self, int dir);
typedef void (*wxControlExtDoClientToScreenintPintPFunc)(const wxControlExt* self, int* x, int* y);
typedef void (*wxControlExtDoEnableboolFunc)(const wxControlExt* self, bool param0);
typedef void (*wxControlExtDoFreezeFunc)(const wxControlExt* self);
typedef int (*wxControlExtDoGetBestClientHeightintFunc)(const wxControlExt* self, int param0);
typedef wxSize (*wxControlExtDoGetBestClientSizeFunc)(const wxControlExt* self);
typedef int (*wxControlExtDoGetBestClientWidthintFunc)(const wxControlExt* self, int param0);
typedef wxSize (*wxControlExtDoGetBestSizeFunc)(const wxControlExt* self);
typedef void* (*wxControlExtDoGetClientDataFunc)(const wxControlExt* self);
typedef wxClientData* (*wxControlExtDoGetClientObjectFunc)(const wxControlExt* self);
typedef void (*wxControlExtDoGetClientSizeintPintPFunc)(const wxControlExt* self, int* width, int* height);
typedef void (*wxControlExtDoGetPositionintPintPFunc)(const wxControlExt* self, int* x, int* y);
typedef void (*wxControlExtDoGetScreenPositionintPintPFunc)(const wxControlExt* self, int* x, int* y);
typedef void (*wxControlExtDoGetSizeintPintPFunc)(const wxControlExt* self, int* width, int* height);
typedef wxSize (*wxControlExtDoGetSizeFromTextSizeintintFunc)(const wxControlExt* self, int xlen, int ylen);
typedef void (*wxControlExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxControlExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* font);
typedef wxSize (*wxControlExtDoGetVirtualSizeFunc)(const wxControlExt* self);
typedef wxHitTest (*wxControlExtDoHitTestwxCoordwxCoordFunc)(const wxControlExt* self, wxCoord x, wxCoord y);
typedef bool (*wxControlExtDoIsExposedintintintintFunc)(const wxControlExt* self, int x, int y, int w, int h);
typedef bool (*wxControlExtDoIsExposedintintFunc)(const wxControlExt* self, int x, int y);
typedef void (*wxControlExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc)(const wxControlExt* self, wxWindow* win, wxWindowBase::WindowOrder move);
typedef void (*wxControlExtDoMoveWindowintintintintFunc)(const wxControlExt* self, int x, int y, int width, int height);
typedef bool (*wxControlExtDoNavigateInintFunc)(const wxControlExt* self, int flags);
typedef bool (*wxControlExtDoPhaseintFunc)(const wxControlExt* self, int phase);
typedef bool (*wxControlExtDoPopupMenuwxMenuPintintFunc)(const wxControlExt* self, wxMenu* menu, int x, int y);
typedef void (*wxControlExtDoReleaseMouseFunc)(const wxControlExt* self);
typedef void (*wxControlExtDoScreenToClientintPintPFunc)(const wxControlExt* self, int* x, int* y);
typedef void (*wxControlExtDoSetClientDatavoidPFunc)(const wxControlExt* self, void* data);
typedef void (*wxControlExtDoSetClientObjectwxClientDataPFunc)(const wxControlExt* self, wxClientData* data);
typedef void (*wxControlExtDoSetClientSizeintintFunc)(const wxControlExt* self, int width, int height);
typedef bool (*wxControlExtDoSetLabelMarkupwxStringCRFunc)(const wxControlExt* self, wxString const& markup);
typedef void (*wxControlExtDoSetSizeintintintintintFunc)(const wxControlExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxControlExtDoSetSizeHintsintintintintintintFunc)(const wxControlExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxControlExtDoSetToolTipwxToolTipPFunc)(const wxControlExt* self, wxToolTip* tip);
typedef void (*wxControlExtDoSetToolTipTextwxStringCRFunc)(const wxControlExt* self, wxString const& tip);
typedef void (*wxControlExtDoSetVirtualSizeintintFunc)(const wxControlExt* self, int x, int y);
typedef void (*wxControlExtDoSetWindowVariantwxWindowVariantFunc)(const wxControlExt* self, wxWindowVariant variant);
typedef void (*wxControlExtDoThawFunc)(const wxControlExt* self);
typedef void (*wxControlExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxControlExt* self, wxUpdateUIEvent& event);
typedef void (*wxControlExtDragAcceptFilesboolFunc)(const wxControlExt* self, bool accept);
typedef bool (*wxControlExtEnableboolFunc)(const wxControlExt* self, bool enable);
typedef bool (*wxControlExtEnableTouchEventsintFunc)(const wxControlExt* self, int param0);
typedef void (*wxControlExtEnableVisibleFocusboolFunc)(const wxControlExt* self, bool param0);
typedef void (*wxControlExtEndRepositioningChildrenFunc)(const wxControlExt* self);
typedef void (*wxControlExtFitFunc)(const wxControlExt* self);
typedef void (*wxControlExtFitInsideFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtGetBestVirtualSizeFunc)(const wxControlExt* self);
typedef int (*wxControlExtGetCharHeightFunc)(const wxControlExt* self);
typedef int (*wxControlExtGetCharWidthFunc)(const wxControlExt* self);
typedef wxClassInfo* (*wxControlExtGetClassInfoFunc)(const wxControlExt* self);
typedef wxPoint (*wxControlExtGetClientAreaOriginFunc)(const wxControlExt* self);
typedef void (*wxControlExtGetClientSizeConstraintintPintPFunc)(const wxControlExt* self, int* w, int* h);
typedef double (*wxControlExtGetContentScaleFactorFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtGetDPIFunc)(const wxControlExt* self);
typedef double (*wxControlExtGetDPIScaleFactorFunc)(const wxControlExt* self);
typedef wxVisualAttributes (*wxControlExtGetDefaultAttributesFunc)(const wxControlExt* self);
typedef wxBorder (*wxControlExtGetDefaultBorderFunc)(const wxControlExt* self);
typedef wxBorder (*wxControlExtGetDefaultBorderForControlFunc)(const wxControlExt* self);
typedef wxDropTarget* (*wxControlExtGetDropTargetFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtGetEffectiveMinSizeFunc)(const wxControlExt* self);
typedef wxEventHashTable& (*wxControlExtGetEventHashTableFunc)(const wxControlExt* self);
typedef wxEventTable const* (*wxControlExtGetEventTableFunc)(const wxControlExt* self);
typedef WXWidget (*wxControlExtGetHandleFunc)(const wxControlExt* self);
typedef wxString (*wxControlExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc)(const wxControlExt* self, wxPoint const& pt, wxHelpEvent::Origin origin);
typedef wxString (*wxControlExtGetLabelFunc)(const wxControlExt* self);
typedef wxString (*wxControlExtGetLabelTextFunc)(const wxControlExt* self);
typedef wxLayoutDirection (*wxControlExtGetLayoutDirectionFunc)(const wxControlExt* self);
typedef wxWindow* (*wxControlExtGetMainWindowOfCompositeControlFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtGetMaxClientSizeFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtGetMaxSizeFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtGetMinClientSizeFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtGetMinSizeFunc)(const wxControlExt* self);
typedef wxString (*wxControlExtGetNameFunc)(const wxControlExt* self);
typedef void (*wxControlExtGetPositionConstraintintPintPFunc)(const wxControlExt* self, int* x, int* y);
typedef int (*wxControlExtGetScrollPosintFunc)(const wxControlExt* self, int orient);
typedef int (*wxControlExtGetScrollRangeintFunc)(const wxControlExt* self, int orient);
typedef int (*wxControlExtGetScrollThumbintFunc)(const wxControlExt* self, int orient);
typedef void (*wxControlExtGetSizeConstraintintPintPFunc)(const wxControlExt* self, int* w, int* h);
typedef bool (*wxControlExtGetThemeEnabledFunc)(const wxControlExt* self);
typedef wxValidator* (*wxControlExtGetValidatorFunc)(const wxControlExt* self);
typedef wxSize (*wxControlExtGetWindowBorderSizeFunc)(const wxControlExt* self);
typedef long (*wxControlExtGetWindowStyleFlagFunc)(const wxControlExt* self);
typedef bool (*wxControlExtHasCaptureFunc)(const wxControlExt* self);
typedef bool (*wxControlExtHasFocusFunc)(const wxControlExt* self);
typedef bool (*wxControlExtHasMultiplePagesFunc)(const wxControlExt* self);
typedef bool (*wxControlExtHasTransparentBackgroundFunc)(const wxControlExt* self);
typedef bool (*wxControlExtHideWithEffectwxShowEffectunsignedintFunc)(const wxControlExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxControlExtInformFirstDirectionintintintFunc)(const wxControlExt* self, int direction, int size, int availableOtherDir);
typedef void (*wxControlExtInheritAttributesFunc)(const wxControlExt* self);
typedef void (*wxControlExtInitDialogFunc)(const wxControlExt* self);
typedef bool (*wxControlExtIsClientAreaChildwxWindowCPFunc)(const wxControlExt* self, wxWindow const* param0);
typedef bool (*wxControlExtIsDoubleBufferedFunc)(const wxControlExt* self);
typedef bool (*wxControlExtIsRetainedFunc)(const wxControlExt* self);
typedef bool (*wxControlExtIsScrollbarAlwaysShownintFunc)(const wxControlExt* self, int param0);
typedef bool (*wxControlExtIsShownFunc)(const wxControlExt* self);
typedef bool (*wxControlExtIsShownOnScreenFunc)(const wxControlExt* self);
typedef bool (*wxControlExtIsThisEnabledFunc)(const wxControlExt* self);
typedef bool (*wxControlExtIsTopLevelFunc)(const wxControlExt* self);
typedef bool (*wxControlExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxControlExt* self, wxWindowBase::NavigationKind param0);
typedef bool (*wxControlExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxControlExt* self, wxString* reason);
typedef bool (*wxControlExtLayoutFunc)(const wxControlExt* self);
typedef bool (*wxControlExtLayoutPhase1intPFunc)(const wxControlExt* self, int* noChanges);
typedef bool (*wxControlExtLayoutPhase2intPFunc)(const wxControlExt* self, int* noChanges);
typedef void (*wxControlExtLowerFunc)(const wxControlExt* self);
typedef void (*wxControlExtMoveConstraintintintFunc)(const wxControlExt* self, int x, int y);
typedef bool (*wxControlExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxControlExt* self, wxDynamicEventTableEntry& param0);
typedef void (*wxControlExtOnInternalIdleFunc)(const wxControlExt* self);
typedef void (*wxControlExtPrepareDCwxDCRFunc)(const wxControlExt* self, wxDC& param0);
typedef bool (*wxControlExtProcessEventwxEventRFunc)(const wxControlExt* self, wxEvent& event);
typedef void (*wxControlExtQueueEventwxEventPFunc)(const wxControlExt* self, wxEvent* event);
typedef void (*wxControlExtRaiseFunc)(const wxControlExt* self);
typedef void (*wxControlExtRefreshboolwxRectCPFunc)(const wxControlExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxControlExtRegisterHotKeyintintintFunc)(const wxControlExt* self, int hotkeyId, int modifiers, int keycode);
typedef void (*wxControlExtRemoveChildwxWindowBasePFunc)(const wxControlExt* self, wxWindowBase* child);
typedef bool (*wxControlExtReparentwxWindowBasePFunc)(const wxControlExt* self, wxWindowBase* newParent);
typedef bool (*wxControlExtScrollLinesintFunc)(const wxControlExt* self, int param0);
typedef bool (*wxControlExtScrollPagesintFunc)(const wxControlExt* self, int param0);
typedef void (*wxControlExtScrollWindowintintwxRectCPFunc)(const wxControlExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxControlExtSearchEventTablewxEventTableRwxEventRFunc)(const wxControlExt* self, wxEventTable& table, wxEvent& event);
typedef bool (*wxControlExtSendIdleEventswxIdleEventRFunc)(const wxControlExt* self, wxIdleEvent& event);
typedef void (*wxControlExtSendSizeEventintFunc)(const wxControlExt* self, int flags);
typedef void (*wxControlExtSetAcceleratorTablewxAcceleratorTableCRFunc)(const wxControlExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxControlExtSetBackgroundColourwxColourCRFunc)(const wxControlExt* self, wxColour const& colour);
typedef bool (*wxControlExtSetBackgroundStylewxBackgroundStyleFunc)(const wxControlExt* self, wxBackgroundStyle style);
typedef void (*wxControlExtSetCanFocusboolFunc)(const wxControlExt* self, bool param0);
typedef void (*wxControlExtSetConstraintSizesboolFunc)(const wxControlExt* self, bool recurse);
typedef bool (*wxControlExtSetCursorwxCursorCRFunc)(const wxControlExt* self, wxCursor const& cursor);
typedef void (*wxControlExtSetDoubleBufferedboolFunc)(const wxControlExt* self, bool param0);
typedef void (*wxControlExtSetDropTargetwxDropTargetPFunc)(const wxControlExt* self, wxDropTarget* dropTarget);
typedef void (*wxControlExtSetExtraStylelongFunc)(const wxControlExt* self, long exStyle);
typedef void (*wxControlExtSetFocusFunc)(const wxControlExt* self);
typedef void (*wxControlExtSetFocusFromKbdFunc)(const wxControlExt* self);
typedef bool (*wxControlExtSetFontwxFontCRFunc)(const wxControlExt* self, wxFont const& font);
typedef bool (*wxControlExtSetForegroundColourwxColourCRFunc)(const wxControlExt* self, wxColour const& colour);
typedef void (*wxControlExtSetIdwxWindowIDFunc)(const wxControlExt* self, wxWindowID winid);
typedef void (*wxControlExtSetLabelwxStringCRFunc)(const wxControlExt* self, wxString const& label);
typedef void (*wxControlExtSetLabelTextwxStringCRFunc)(const wxControlExt* self, wxString const& text);
typedef void (*wxControlExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxControlExt* self, wxLayoutDirection param0);
typedef void (*wxControlExtSetMaxClientSizewxSizeCRFunc)(const wxControlExt* self, wxSize const& size);
typedef void (*wxControlExtSetMaxSizewxSizeCRFunc)(const wxControlExt* self, wxSize const& maxSize);
typedef void (*wxControlExtSetMinClientSizewxSizeCRFunc)(const wxControlExt* self, wxSize const& size);
typedef void (*wxControlExtSetMinSizewxSizeCRFunc)(const wxControlExt* self, wxSize const& minSize);
typedef void (*wxControlExtSetNamewxStringCRFunc)(const wxControlExt* self, wxString const& name);
typedef void (*wxControlExtSetNextHandlerwxEvtHandlerPFunc)(const wxControlExt* self, wxEvtHandler* handler);
typedef void (*wxControlExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxControlExt* self, wxEvtHandler* handler);
typedef void (*wxControlExtSetScrollPosintintboolFunc)(const wxControlExt* self, int orient, int pos, bool refresh);
typedef void (*wxControlExtSetScrollbarintintintintboolFunc)(const wxControlExt* self, int orient, int pos, int thumbvisible, int range, bool refresh);
typedef void (*wxControlExtSetSizeConstraintintintintintFunc)(const wxControlExt* self, int x, int y, int w, int h);
typedef void (*wxControlExtSetSizeHintsintintintintintintFunc)(const wxControlExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxControlExtSetThemeEnabledboolFunc)(const wxControlExt* self, bool enableTheme);
typedef bool (*wxControlExtSetTransparentwxByteFunc)(const wxControlExt* self, wxByte param0);
typedef void (*wxControlExtSetValidatorwxValidatorCRFunc)(const wxControlExt* self, wxValidator const& validator);
typedef void (*wxControlExtSetWindowStyleFlaglongFunc)(const wxControlExt* self, long style);
typedef bool (*wxControlExtShouldInheritColoursFunc)(const wxControlExt* self);
typedef bool (*wxControlExtShowboolFunc)(const wxControlExt* self, bool show);
typedef bool (*wxControlExtShowWithEffectwxShowEffectunsignedintFunc)(const wxControlExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxControlExtTransferDataFromWindowFunc)(const wxControlExt* self);
typedef bool (*wxControlExtTransferDataToWindowFunc)(const wxControlExt* self);
typedef bool (*wxControlExtTryAfterwxEventRFunc)(const wxControlExt* self, wxEvent& event);
typedef bool (*wxControlExtTryBeforewxEventRFunc)(const wxControlExt* self, wxEvent& event);
typedef bool (*wxControlExtUnregisterHotKeyintFunc)(const wxControlExt* self, int hotkeyId);
typedef void (*wxControlExtUpdateFunc)(const wxControlExt* self);
typedef void (*wxControlExtUpdateWindowUIlongFunc)(const wxControlExt* self, long flags);
typedef bool (*wxControlExtValidateFunc)(const wxControlExt* self);
typedef void (*wxControlExtWXAdjustFontToOwnPPIwxFontRFunc)(const wxControlExt* self, wxFont& param0);
typedef wxTextEntry const* (*wxControlExtWXGetTextEntryFunc)(const wxControlExt* self);
typedef void* (*wxControlExtWXReservedEvtHandler1voidPFunc)(const wxControlExt* self, void* param0);
typedef void* (*wxControlExtWXReservedEvtHandler2voidPFunc)(const wxControlExt* self, void* param0);
typedef void* (*wxControlExtWXReservedWindow1voidPFunc)(const wxControlExt* self, void* param0);
typedef void* (*wxControlExtWXReservedWindow2voidPFunc)(const wxControlExt* self, void* param0);
typedef void* (*wxControlExtWXReservedWindow3voidPFunc)(const wxControlExt* self, void* param0);
typedef void (*wxControlExtWXSetInitialFittingClientSizeintwxSizerPFunc)(const wxControlExt* self, int flags, wxSizer* sizer);
typedef void (*wxControlExtWarpPointerintintFunc)(const wxControlExt* self, int x, int y);
typedef wxSize (*wxControlExtWindowToClientSizewxSizeCRFunc)(const wxControlExt* self, wxSize const& size);

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
      return m_wxControlBaseExtAcceptsFocus(this);
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
      return m_wxControlBaseExtAcceptsFocusFromKeyboard(this);
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
      return m_wxControlBaseExtAcceptsFocusRecursively(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtAddChildwxWindowBasePFunc m_wxControlBaseExtAddChildwxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxControlBase::AddChild(child);
    if (*m_wxControlBaseExtAddChildwxWindowBaseP != NULL){
      return m_wxControlBaseExtAddChildwxWindowBaseP(this, child);
    }
  }
  wxControlBaseExtAddPendingEventwxEventCRFunc m_wxControlBaseExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxControlBase::AddPendingEvent(event);
    if (*m_wxControlBaseExtAddPendingEventwxEventCR != NULL){
      return m_wxControlBaseExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxControlBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxControlBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxControlBase::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxControlBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxControlBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtAdjustForParentClientOriginintRintRintFunc m_wxControlBaseExtAdjustForParentClientOriginintRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxControlBase::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxControlBaseExtAdjustForParentClientOriginintRintRint != NULL){
      return m_wxControlBaseExtAdjustForParentClientOriginintRintRint(this, x, y, sizeFlags);
    }
  }
  wxControlBaseExtAlwaysShowScrollbarsboolboolFunc m_wxControlBaseExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool param0 = true, bool param1 = true) override
  {
    wxControlBase::AlwaysShowScrollbars(param0, param1);
    if (*m_wxControlBaseExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxControlBaseExtAlwaysShowScrollbarsboolbool(this, param0, param1);
    }
  }
  wxControlBaseExtAssociateHandleWXWidgetFunc m_wxControlBaseExtAssociateHandleWXWidget = NULL;
  virtual void AssociateHandle(WXWidget param0) override
  {
    wxControlBase::AssociateHandle(param0);
    if (*m_wxControlBaseExtAssociateHandleWXWidget != NULL){
      return m_wxControlBaseExtAssociateHandleWXWidget(this, param0);
    }
  }
  wxControlBaseExtBeginRepositioningChildrenFunc m_wxControlBaseExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxControlBase::BeginRepositioningChildren();
    if (*m_wxControlBaseExtBeginRepositioningChildren != NULL){
      return m_wxControlBaseExtBeginRepositioningChildren(this);
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
      return m_wxControlBaseExtCanApplyThemeBorder(this);
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
      return m_wxControlBaseExtCanBeFocused(this);
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
      return m_wxControlBaseExtCanBeOutsideClientArea(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtCanScrollintFunc m_wxControlBaseExtCanScrollint = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxControlBase::CanScroll(orient);
    if (*m_wxControlBaseExtCanScrollint != NULL){
      return m_wxControlBaseExtCanScrollint(this, orient);
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
      return m_wxControlBaseExtCanSetTransparent(this);
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
  wxControlBaseExtClientToWindowSizewxSizeCRFunc m_wxControlBaseExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxControlBase::ClientToWindowSize(size);
    if (*m_wxControlBaseExtClientToWindowSizewxSizeCR != NULL){
      return m_wxControlBaseExtClientToWindowSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtCloneRefDatawxObjectRefDataCPFunc m_wxControlBaseExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxControlBase::CloneRefData(data);
    if (*m_wxControlBaseExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxControlBaseExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtCommandwxCommandEventRFunc m_wxControlBaseExtCommandwxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxControlBase::Command(event);
    if (*m_wxControlBaseExtCommandwxCommandEventR != NULL){
      return m_wxControlBaseExtCommandwxCommandEventR(this, event);
    }
  }
  wxControlBaseExtCreateRefDataFunc m_wxControlBaseExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxControlBase::CreateRefData();
    if (*m_wxControlBaseExtCreateRefData != NULL){
      return m_wxControlBaseExtCreateRefData(this);
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
      return m_wxControlBaseExtDestroy(this);
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
  wxControlBaseExtDoCentreintFunc m_wxControlBaseExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxControlBase::DoCentre(dir);
    if (*m_wxControlBaseExtDoCentreint != NULL){
      return m_wxControlBaseExtDoCentreint(this, dir);
    }
  }
  wxControlBaseExtDoClientToScreenintPintPFunc m_wxControlBaseExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxControlBase::DoClientToScreen(x, y);
    if (*m_wxControlBaseExtDoClientToScreenintPintP != NULL){
      return m_wxControlBaseExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxControlBaseExtDoEnableboolFunc m_wxControlBaseExtDoEnablebool = NULL;
  virtual void DoEnable(bool param0) override
  {
    wxControlBase::DoEnable(param0);
    if (*m_wxControlBaseExtDoEnablebool != NULL){
      return m_wxControlBaseExtDoEnablebool(this, param0);
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
  wxControlBaseExtDoGetBestClientHeightintFunc m_wxControlBaseExtDoGetBestClientHeightint = NULL;
  virtual int DoGetBestClientHeight(int param0) const override
  {
    int res = wxControlBase::DoGetBestClientHeight(param0);
    if (*m_wxControlBaseExtDoGetBestClientHeightint != NULL){
      return m_wxControlBaseExtDoGetBestClientHeightint(this, param0);
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
      return m_wxControlBaseExtDoGetBestClientSize(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetBestClientWidthintFunc m_wxControlBaseExtDoGetBestClientWidthint = NULL;
  virtual int DoGetBestClientWidth(int param0) const override
  {
    int res = wxControlBase::DoGetBestClientWidth(param0);
    if (*m_wxControlBaseExtDoGetBestClientWidthint != NULL){
      return m_wxControlBaseExtDoGetBestClientWidthint(this, param0);
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
      return m_wxControlBaseExtDoGetBestSize(this);
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
      return m_wxControlBaseExtDoGetClientData(this);
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
      return m_wxControlBaseExtDoGetClientObject(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetClientSizeintPintPFunc m_wxControlBaseExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxControlBase::DoGetClientSize(width, height);
    if (*m_wxControlBaseExtDoGetClientSizeintPintP != NULL){
      return m_wxControlBaseExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxControlBaseExtDoGetPositionintPintPFunc m_wxControlBaseExtDoGetPositionintPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxControlBase::DoGetPosition(x, y);
    if (*m_wxControlBaseExtDoGetPositionintPintP != NULL){
      return m_wxControlBaseExtDoGetPositionintPintP(this, x, y);
    }
  }
  wxControlBaseExtDoGetScreenPositionintPintPFunc m_wxControlBaseExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxControlBase::DoGetScreenPosition(x, y);
    if (*m_wxControlBaseExtDoGetScreenPositionintPintP != NULL){
      return m_wxControlBaseExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxControlBaseExtDoGetSizeintPintPFunc m_wxControlBaseExtDoGetSizeintPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxControlBase::DoGetSize(width, height);
    if (*m_wxControlBaseExtDoGetSizeintPintP != NULL){
      return m_wxControlBaseExtDoGetSizeintPintP(this, width, height);
    }
  }
  wxControlBaseExtDoGetSizeFromTextSizeintintFunc m_wxControlBaseExtDoGetSizeFromTextSizeintint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxControlBase::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxControlBaseExtDoGetSizeFromTextSizeintint != NULL){
      return m_wxControlBaseExtDoGetSizeFromTextSizeintint(this, xlen, ylen);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxControlBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* font = __null) const override
  {
    wxControlBase::DoGetTextExtent(string, x, y, descent, externalLeading, font);
    if (*m_wxControlBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxControlBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, font);
    }
  }
  wxControlBaseExtDoGetVirtualSizeFunc m_wxControlBaseExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxControlBase::DoGetVirtualSize();
    if (*m_wxControlBaseExtDoGetVirtualSize != NULL){
      return m_wxControlBaseExtDoGetVirtualSize(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoHitTestwxCoordwxCoordFunc m_wxControlBaseExtDoHitTestwxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxControlBase::DoHitTest(x, y);
    if (*m_wxControlBaseExtDoHitTestwxCoordwxCoord != NULL){
      return m_wxControlBaseExtDoHitTestwxCoordwxCoord(this, x, y);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoIsExposedintintintintFunc m_wxControlBaseExtDoIsExposedintintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxControlBase::DoIsExposed(x, y, w, h);
    if (*m_wxControlBaseExtDoIsExposedintintintint != NULL){
      return m_wxControlBaseExtDoIsExposedintintintint(this, x, y, w, h);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoIsExposedintintFunc m_wxControlBaseExtDoIsExposedintint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxControlBase::DoIsExposed(x, y);
    if (*m_wxControlBaseExtDoIsExposedintint != NULL){
      return m_wxControlBaseExtDoIsExposedintint(this, x, y);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc m_wxControlBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxControlBase::DoMoveInTabOrder(win, move);
    if (*m_wxControlBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxControlBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxControlBaseExtDoMoveWindowintintintintFunc m_wxControlBaseExtDoMoveWindowintintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxControlBase::DoMoveWindow(x, y, width, height);
    if (*m_wxControlBaseExtDoMoveWindowintintintint != NULL){
      return m_wxControlBaseExtDoMoveWindowintintintint(this, x, y, width, height);
    }
  }
  wxControlBaseExtDoNavigateInintFunc m_wxControlBaseExtDoNavigateInint = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxControlBase::DoNavigateIn(flags);
    if (*m_wxControlBaseExtDoNavigateInint != NULL){
      return m_wxControlBaseExtDoNavigateInint(this, flags);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoPhaseintFunc m_wxControlBaseExtDoPhaseint = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxControlBase::DoPhase(phase);
    if (*m_wxControlBaseExtDoPhaseint != NULL){
      return m_wxControlBaseExtDoPhaseint(this, phase);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoPopupMenuwxMenuPintintFunc m_wxControlBaseExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxControlBase::DoPopupMenu(menu, x, y);
    if (*m_wxControlBaseExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxControlBaseExtDoPopupMenuwxMenuPintint(this, menu, x, y);
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
  wxControlBaseExtDoScreenToClientintPintPFunc m_wxControlBaseExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxControlBase::DoScreenToClient(x, y);
    if (*m_wxControlBaseExtDoScreenToClientintPintP != NULL){
      return m_wxControlBaseExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxControlBaseExtDoSetClientDatavoidPFunc m_wxControlBaseExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxControlBase::DoSetClientData(data);
    if (*m_wxControlBaseExtDoSetClientDatavoidP != NULL){
      return m_wxControlBaseExtDoSetClientDatavoidP(this, data);
    }
  }
  wxControlBaseExtDoSetClientObjectwxClientDataPFunc m_wxControlBaseExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxControlBase::DoSetClientObject(data);
    if (*m_wxControlBaseExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxControlBaseExtDoSetClientObjectwxClientDataP(this, data);
    }
  }
  wxControlBaseExtDoSetClientSizeintintFunc m_wxControlBaseExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxControlBase::DoSetClientSize(width, height);
    if (*m_wxControlBaseExtDoSetClientSizeintint != NULL){
      return m_wxControlBaseExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxControlBaseExtDoSetLabelMarkupwxStringCRFunc m_wxControlBaseExtDoSetLabelMarkupwxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxControlBase::DoSetLabelMarkup(markup);
    if (*m_wxControlBaseExtDoSetLabelMarkupwxStringCR != NULL){
      return m_wxControlBaseExtDoSetLabelMarkupwxStringCR(this, markup);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtDoSetSizeintintintintintFunc m_wxControlBaseExtDoSetSizeintintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxControlBase::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxControlBaseExtDoSetSizeintintintintint != NULL){
      return m_wxControlBaseExtDoSetSizeintintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxControlBaseExtDoSetSizeHintsintintintintintintFunc m_wxControlBaseExtDoSetSizeHintsintintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxControlBase::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxControlBaseExtDoSetSizeHintsintintintintintint != NULL){
      return m_wxControlBaseExtDoSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxControlBaseExtDoSetToolTipwxToolTipPFunc m_wxControlBaseExtDoSetToolTipwxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxControlBase::DoSetToolTip(tip);
    if (*m_wxControlBaseExtDoSetToolTipwxToolTipP != NULL){
      return m_wxControlBaseExtDoSetToolTipwxToolTipP(this, tip);
    }
  }
  wxControlBaseExtDoSetToolTipTextwxStringCRFunc m_wxControlBaseExtDoSetToolTipTextwxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxControlBase::DoSetToolTipText(tip);
    if (*m_wxControlBaseExtDoSetToolTipTextwxStringCR != NULL){
      return m_wxControlBaseExtDoSetToolTipTextwxStringCR(this, tip);
    }
  }
  wxControlBaseExtDoSetVirtualSizeintintFunc m_wxControlBaseExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxControlBase::DoSetVirtualSize(x, y);
    if (*m_wxControlBaseExtDoSetVirtualSizeintint != NULL){
      return m_wxControlBaseExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxControlBaseExtDoSetWindowVariantwxWindowVariantFunc m_wxControlBaseExtDoSetWindowVariantwxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxControlBase::DoSetWindowVariant(variant);
    if (*m_wxControlBaseExtDoSetWindowVariantwxWindowVariant != NULL){
      return m_wxControlBaseExtDoSetWindowVariantwxWindowVariant(this, variant);
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
  wxControlBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxControlBaseExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxControlBase::DoUpdateWindowUI(event);
    if (*m_wxControlBaseExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxControlBaseExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxControlBaseExtDragAcceptFilesboolFunc m_wxControlBaseExtDragAcceptFilesbool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxControlBase::DragAcceptFiles(accept);
    if (*m_wxControlBaseExtDragAcceptFilesbool != NULL){
      return m_wxControlBaseExtDragAcceptFilesbool(this, accept);
    }
  }
  wxControlBaseExtEnableboolFunc m_wxControlBaseExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxControlBase::Enable(enable);
    if (*m_wxControlBaseExtEnablebool != NULL){
      return m_wxControlBaseExtEnablebool(this, enable);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtEnableTouchEventsintFunc m_wxControlBaseExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int param0) override
  {
    bool res = wxControlBase::EnableTouchEvents(param0);
    if (*m_wxControlBaseExtEnableTouchEventsint != NULL){
      return m_wxControlBaseExtEnableTouchEventsint(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtEnableVisibleFocusboolFunc m_wxControlBaseExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool param0) override
  {
    wxControlBase::EnableVisibleFocus(param0);
    if (*m_wxControlBaseExtEnableVisibleFocusbool != NULL){
      return m_wxControlBaseExtEnableVisibleFocusbool(this, param0);
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
      return m_wxControlBaseExtGetBestVirtualSize(this);
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
      return m_wxControlBaseExtGetCharHeight(this);
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
      return m_wxControlBaseExtGetCharWidth(this);
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
      return m_wxControlBaseExtGetClassInfo(this);
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
      return m_wxControlBaseExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetClientSizeConstraintintPintPFunc m_wxControlBaseExtGetClientSizeConstraintintPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxControlBase::GetClientSizeConstraint(w, h);
    if (*m_wxControlBaseExtGetClientSizeConstraintintPintP != NULL){
      return m_wxControlBaseExtGetClientSizeConstraintintPintP(this, w, h);
    }
  }
  wxControlBaseExtGetContentScaleFactorFunc m_wxControlBaseExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxControlBase::GetContentScaleFactor();
    if (*m_wxControlBaseExtGetContentScaleFactor != NULL){
      return m_wxControlBaseExtGetContentScaleFactor(this);
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
      return m_wxControlBaseExtGetDPI(this);
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
      return m_wxControlBaseExtGetDPIScaleFactor(this);
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
      return m_wxControlBaseExtGetDefaultAttributes(this);
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
      return m_wxControlBaseExtGetDefaultBorder(this);
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
      return m_wxControlBaseExtGetDefaultBorderForControl(this);
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
      return m_wxControlBaseExtGetDropTarget(this);
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
      return m_wxControlBaseExtGetEffectiveMinSize(this);
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
      return m_wxControlBaseExtGetEventHashTable(this);
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
      return m_wxControlBaseExtGetEventTable(this);
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
      return m_wxControlBaseExtGetHandle(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc m_wxControlBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxControlBase::GetHelpTextAtPoint(pt, origin);
    if (*m_wxControlBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin != NULL){
      return m_wxControlBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin(this, pt, origin);
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
      return m_wxControlBaseExtGetLabel(this);
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
      return m_wxControlBaseExtGetLabelText(this);
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
      return m_wxControlBaseExtGetLayoutDirection(this);
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
      return m_wxControlBaseExtGetMainWindowOfCompositeControl(this);
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
      return m_wxControlBaseExtGetMaxClientSize(this);
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
      return m_wxControlBaseExtGetMaxSize(this);
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
      return m_wxControlBaseExtGetMinClientSize(this);
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
      return m_wxControlBaseExtGetMinSize(this);
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
      return m_wxControlBaseExtGetName(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetPositionConstraintintPintPFunc m_wxControlBaseExtGetPositionConstraintintPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxControlBase::GetPositionConstraint(x, y);
    if (*m_wxControlBaseExtGetPositionConstraintintPintP != NULL){
      return m_wxControlBaseExtGetPositionConstraintintPintP(this, x, y);
    }
  }
  wxControlBaseExtGetScrollPosintFunc m_wxControlBaseExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxControlBase::GetScrollPos(orient);
    if (*m_wxControlBaseExtGetScrollPosint != NULL){
      return m_wxControlBaseExtGetScrollPosint(this, orient);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetScrollRangeintFunc m_wxControlBaseExtGetScrollRangeint = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxControlBase::GetScrollRange(orient);
    if (*m_wxControlBaseExtGetScrollRangeint != NULL){
      return m_wxControlBaseExtGetScrollRangeint(this, orient);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetScrollThumbintFunc m_wxControlBaseExtGetScrollThumbint = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxControlBase::GetScrollThumb(orient);
    if (*m_wxControlBaseExtGetScrollThumbint != NULL){
      return m_wxControlBaseExtGetScrollThumbint(this, orient);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtGetSizeConstraintintPintPFunc m_wxControlBaseExtGetSizeConstraintintPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxControlBase::GetSizeConstraint(w, h);
    if (*m_wxControlBaseExtGetSizeConstraintintPintP != NULL){
      return m_wxControlBaseExtGetSizeConstraintintPintP(this, w, h);
    }
  }
  wxControlBaseExtGetThemeEnabledFunc m_wxControlBaseExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxControlBase::GetThemeEnabled();
    if (*m_wxControlBaseExtGetThemeEnabled != NULL){
      return m_wxControlBaseExtGetThemeEnabled(this);
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
      return m_wxControlBaseExtGetValidator(this);
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
      return m_wxControlBaseExtGetWindowBorderSize(this);
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
      return m_wxControlBaseExtGetWindowStyleFlag(this);
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
      return m_wxControlBaseExtHasCapture(this);
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
      return m_wxControlBaseExtHasFocus(this);
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
      return m_wxControlBaseExtHasMultiplePages(this);
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
      return m_wxControlBaseExtHasTransparentBackground(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtHideWithEffectwxShowEffectunsignedintFunc m_wxControlBaseExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxControlBase::HideWithEffect(param0, param1);
    if (*m_wxControlBaseExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxControlBaseExtHideWithEffectwxShowEffectunsignedint(this, param0, param1);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtInformFirstDirectionintintintFunc m_wxControlBaseExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxControlBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxControlBaseExtInformFirstDirectionintintint != NULL){
      return m_wxControlBaseExtInformFirstDirectionintintint(this, direction, size, availableOtherDir);
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
  wxControlBaseExtIsClientAreaChildwxWindowCPFunc m_wxControlBaseExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* param0) const override
  {
    bool res = wxControlBase::IsClientAreaChild(param0);
    if (*m_wxControlBaseExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxControlBaseExtIsClientAreaChildwxWindowCP(this, param0);
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
      return m_wxControlBaseExtIsDoubleBuffered(this);
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
      return m_wxControlBaseExtIsRetained(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsScrollbarAlwaysShownintFunc m_wxControlBaseExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int param0) const override
  {
    bool res = wxControlBase::IsScrollbarAlwaysShown(param0);
    if (*m_wxControlBaseExtIsScrollbarAlwaysShownint != NULL){
      return m_wxControlBaseExtIsScrollbarAlwaysShownint(this, param0);
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
      return m_wxControlBaseExtIsShown(this);
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
      return m_wxControlBaseExtIsShownOnScreen(this);
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
      return m_wxControlBaseExtIsThisEnabled(this);
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
      return m_wxControlBaseExtIsTopLevel(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxControlBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind param0) const override
  {
    bool res = wxControlBase::IsTopNavigationDomain(param0);
    if (*m_wxControlBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxControlBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtIsTransparentBackgroundSupportedwxStringPFunc m_wxControlBaseExtIsTransparentBackgroundSupportedwxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxControlBase::IsTransparentBackgroundSupported(reason);
    if (*m_wxControlBaseExtIsTransparentBackgroundSupportedwxStringP != NULL){
      return m_wxControlBaseExtIsTransparentBackgroundSupportedwxStringP(this, reason);
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
      return m_wxControlBaseExtLayout(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtLayoutPhase1intPFunc m_wxControlBaseExtLayoutPhase1intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxControlBase::LayoutPhase1(noChanges);
    if (*m_wxControlBaseExtLayoutPhase1intP != NULL){
      return m_wxControlBaseExtLayoutPhase1intP(this, noChanges);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtLayoutPhase2intPFunc m_wxControlBaseExtLayoutPhase2intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxControlBase::LayoutPhase2(noChanges);
    if (*m_wxControlBaseExtLayoutPhase2intP != NULL){
      return m_wxControlBaseExtLayoutPhase2intP(this, noChanges);
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
  wxControlBaseExtMoveConstraintintintFunc m_wxControlBaseExtMoveConstraintintint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxControlBase::MoveConstraint(x, y);
    if (*m_wxControlBaseExtMoveConstraintintint != NULL){
      return m_wxControlBaseExtMoveConstraintintint(this, x, y);
    }
  }
  wxControlBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxControlBaseExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxControlBase::OnDynamicBind(param0);
    if (*m_wxControlBaseExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxControlBaseExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
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
  wxControlBaseExtPrepareDCwxDCRFunc m_wxControlBaseExtPrepareDCwxDCR = NULL;
  virtual void PrepareDC(wxDC& param0) override
  {
    wxControlBase::PrepareDC(param0);
    if (*m_wxControlBaseExtPrepareDCwxDCR != NULL){
      return m_wxControlBaseExtPrepareDCwxDCR(this, param0);
    }
  }
  wxControlBaseExtProcessEventwxEventRFunc m_wxControlBaseExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxControlBase::ProcessEvent(event);
    if (*m_wxControlBaseExtProcessEventwxEventR != NULL){
      return m_wxControlBaseExtProcessEventwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtQueueEventwxEventPFunc m_wxControlBaseExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxControlBase::QueueEvent(event);
    if (*m_wxControlBaseExtQueueEventwxEventP != NULL){
      return m_wxControlBaseExtQueueEventwxEventP(this, event);
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
  wxControlBaseExtRefreshboolwxRectCPFunc m_wxControlBaseExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = (const wxRect*)__null) override
  {
    wxControlBase::Refresh(eraseBackground, rect);
    if (*m_wxControlBaseExtRefreshboolwxRectCP != NULL){
      return m_wxControlBaseExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxControlBaseExtRegisterHotKeyintintintFunc m_wxControlBaseExtRegisterHotKeyintintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxControlBase::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxControlBaseExtRegisterHotKeyintintint != NULL){
      return m_wxControlBaseExtRegisterHotKeyintintint(this, hotkeyId, modifiers, keycode);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtRemoveChildwxWindowBasePFunc m_wxControlBaseExtRemoveChildwxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxControlBase::RemoveChild(child);
    if (*m_wxControlBaseExtRemoveChildwxWindowBaseP != NULL){
      return m_wxControlBaseExtRemoveChildwxWindowBaseP(this, child);
    }
  }
  wxControlBaseExtReparentwxWindowBasePFunc m_wxControlBaseExtReparentwxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxControlBase::Reparent(newParent);
    if (*m_wxControlBaseExtReparentwxWindowBaseP != NULL){
      return m_wxControlBaseExtReparentwxWindowBaseP(this, newParent);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtScrollLinesintFunc m_wxControlBaseExtScrollLinesint = NULL;
  virtual bool ScrollLines(int param0) override
  {
    bool res = wxControlBase::ScrollLines(param0);
    if (*m_wxControlBaseExtScrollLinesint != NULL){
      return m_wxControlBaseExtScrollLinesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtScrollPagesintFunc m_wxControlBaseExtScrollPagesint = NULL;
  virtual bool ScrollPages(int param0) override
  {
    bool res = wxControlBase::ScrollPages(param0);
    if (*m_wxControlBaseExtScrollPagesint != NULL){
      return m_wxControlBaseExtScrollPagesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtScrollWindowintintwxRectCPFunc m_wxControlBaseExtScrollWindowintintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxControlBase::ScrollWindow(dx, dy, rect);
    if (*m_wxControlBaseExtScrollWindowintintwxRectCP != NULL){
      return m_wxControlBaseExtScrollWindowintintwxRectCP(this, dx, dy, rect);
    }
  }
  wxControlBaseExtSearchEventTablewxEventTableRwxEventRFunc m_wxControlBaseExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxControlBase::SearchEventTable(table, event);
    if (*m_wxControlBaseExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxControlBaseExtSearchEventTablewxEventTableRwxEventR(this, table, event);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSendIdleEventswxIdleEventRFunc m_wxControlBaseExtSendIdleEventswxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxControlBase::SendIdleEvents(event);
    if (*m_wxControlBaseExtSendIdleEventswxIdleEventR != NULL){
      return m_wxControlBaseExtSendIdleEventswxIdleEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSendSizeEventintFunc m_wxControlBaseExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxControlBase::SendSizeEvent(flags);
    if (*m_wxControlBaseExtSendSizeEventint != NULL){
      return m_wxControlBaseExtSendSizeEventint(this, flags);
    }
  }
  wxControlBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc m_wxControlBaseExtSetAcceleratorTablewxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxControlBase::SetAcceleratorTable(accel);
    if (*m_wxControlBaseExtSetAcceleratorTablewxAcceleratorTableCR != NULL){
      return m_wxControlBaseExtSetAcceleratorTablewxAcceleratorTableCR(this, accel);
    }
  }
  wxControlBaseExtSetBackgroundColourwxColourCRFunc m_wxControlBaseExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxControlBase::SetBackgroundColour(colour);
    if (*m_wxControlBaseExtSetBackgroundColourwxColourCR != NULL){
      return m_wxControlBaseExtSetBackgroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetBackgroundStylewxBackgroundStyleFunc m_wxControlBaseExtSetBackgroundStylewxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxControlBase::SetBackgroundStyle(style);
    if (*m_wxControlBaseExtSetBackgroundStylewxBackgroundStyle != NULL){
      return m_wxControlBaseExtSetBackgroundStylewxBackgroundStyle(this, style);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetCanFocusboolFunc m_wxControlBaseExtSetCanFocusbool = NULL;
  virtual void SetCanFocus(bool param0) override
  {
    wxControlBase::SetCanFocus(param0);
    if (*m_wxControlBaseExtSetCanFocusbool != NULL){
      return m_wxControlBaseExtSetCanFocusbool(this, param0);
    }
  }
  wxControlBaseExtSetConstraintSizesboolFunc m_wxControlBaseExtSetConstraintSizesbool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxControlBase::SetConstraintSizes(recurse);
    if (*m_wxControlBaseExtSetConstraintSizesbool != NULL){
      return m_wxControlBaseExtSetConstraintSizesbool(this, recurse);
    }
  }
  wxControlBaseExtSetCursorwxCursorCRFunc m_wxControlBaseExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxControlBase::SetCursor(cursor);
    if (*m_wxControlBaseExtSetCursorwxCursorCR != NULL){
      return m_wxControlBaseExtSetCursorwxCursorCR(this, cursor);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetDoubleBufferedboolFunc m_wxControlBaseExtSetDoubleBufferedbool = NULL;
  virtual void SetDoubleBuffered(bool param0) override
  {
    wxControlBase::SetDoubleBuffered(param0);
    if (*m_wxControlBaseExtSetDoubleBufferedbool != NULL){
      return m_wxControlBaseExtSetDoubleBufferedbool(this, param0);
    }
  }
  wxControlBaseExtSetDropTargetwxDropTargetPFunc m_wxControlBaseExtSetDropTargetwxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxControlBase::SetDropTarget(dropTarget);
    if (*m_wxControlBaseExtSetDropTargetwxDropTargetP != NULL){
      return m_wxControlBaseExtSetDropTargetwxDropTargetP(this, dropTarget);
    }
  }
  wxControlBaseExtSetExtraStylelongFunc m_wxControlBaseExtSetExtraStylelong = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxControlBase::SetExtraStyle(exStyle);
    if (*m_wxControlBaseExtSetExtraStylelong != NULL){
      return m_wxControlBaseExtSetExtraStylelong(this, exStyle);
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
  wxControlBaseExtSetFontwxFontCRFunc m_wxControlBaseExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxControlBase::SetFont(font);
    if (*m_wxControlBaseExtSetFontwxFontCR != NULL){
      return m_wxControlBaseExtSetFontwxFontCR(this, font);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetForegroundColourwxColourCRFunc m_wxControlBaseExtSetForegroundColourwxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxControlBase::SetForegroundColour(colour);
    if (*m_wxControlBaseExtSetForegroundColourwxColourCR != NULL){
      return m_wxControlBaseExtSetForegroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetIdwxWindowIDFunc m_wxControlBaseExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxControlBase::SetId(winid);
    if (*m_wxControlBaseExtSetIdwxWindowID != NULL){
      return m_wxControlBaseExtSetIdwxWindowID(this, winid);
    }
  }
  wxControlBaseExtSetLabelwxStringCRFunc m_wxControlBaseExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxControlBase::SetLabel(label);
    if (*m_wxControlBaseExtSetLabelwxStringCR != NULL){
      return m_wxControlBaseExtSetLabelwxStringCR(this, label);
    }
  }
  wxControlBaseExtSetLabelTextwxStringCRFunc m_wxControlBaseExtSetLabelTextwxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxControlBase::SetLabelText(text);
    if (*m_wxControlBaseExtSetLabelTextwxStringCR != NULL){
      return m_wxControlBaseExtSetLabelTextwxStringCR(this, text);
    }
  }
  wxControlBaseExtSetLayoutDirectionwxLayoutDirectionFunc m_wxControlBaseExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxControlBase::SetLayoutDirection(param0);
    if (*m_wxControlBaseExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxControlBaseExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxControlBaseExtSetMaxClientSizewxSizeCRFunc m_wxControlBaseExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxControlBase::SetMaxClientSize(size);
    if (*m_wxControlBaseExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxControlBaseExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxControlBaseExtSetMaxSizewxSizeCRFunc m_wxControlBaseExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxControlBase::SetMaxSize(maxSize);
    if (*m_wxControlBaseExtSetMaxSizewxSizeCR != NULL){
      return m_wxControlBaseExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxControlBaseExtSetMinClientSizewxSizeCRFunc m_wxControlBaseExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxControlBase::SetMinClientSize(size);
    if (*m_wxControlBaseExtSetMinClientSizewxSizeCR != NULL){
      return m_wxControlBaseExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxControlBaseExtSetMinSizewxSizeCRFunc m_wxControlBaseExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxControlBase::SetMinSize(minSize);
    if (*m_wxControlBaseExtSetMinSizewxSizeCR != NULL){
      return m_wxControlBaseExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxControlBaseExtSetNamewxStringCRFunc m_wxControlBaseExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxControlBase::SetName(name);
    if (*m_wxControlBaseExtSetNamewxStringCR != NULL){
      return m_wxControlBaseExtSetNamewxStringCR(this, name);
    }
  }
  wxControlBaseExtSetNextHandlerwxEvtHandlerPFunc m_wxControlBaseExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxControlBase::SetNextHandler(handler);
    if (*m_wxControlBaseExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxControlBaseExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxControlBaseExtSetPreviousHandlerwxEvtHandlerPFunc m_wxControlBaseExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxControlBase::SetPreviousHandler(handler);
    if (*m_wxControlBaseExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxControlBaseExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxControlBaseExtSetScrollPosintintboolFunc m_wxControlBaseExtSetScrollPosintintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxControlBase::SetScrollPos(orient, pos, refresh);
    if (*m_wxControlBaseExtSetScrollPosintintbool != NULL){
      return m_wxControlBaseExtSetScrollPosintintbool(this, orient, pos, refresh);
    }
  }
  wxControlBaseExtSetScrollbarintintintintboolFunc m_wxControlBaseExtSetScrollbarintintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbvisible, int range, bool refresh = true) override
  {
    wxControlBase::SetScrollbar(orient, pos, thumbvisible, range, refresh);
    if (*m_wxControlBaseExtSetScrollbarintintintintbool != NULL){
      return m_wxControlBaseExtSetScrollbarintintintintbool(this, orient, pos, thumbvisible, range, refresh);
    }
  }
  wxControlBaseExtSetSizeConstraintintintintintFunc m_wxControlBaseExtSetSizeConstraintintintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxControlBase::SetSizeConstraint(x, y, w, h);
    if (*m_wxControlBaseExtSetSizeConstraintintintintint != NULL){
      return m_wxControlBaseExtSetSizeConstraintintintintint(this, x, y, w, h);
    }
  }
  wxControlBaseExtSetSizeHintsintintintintintintFunc m_wxControlBaseExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxControlBase::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxControlBaseExtSetSizeHintsintintintintintint != NULL){
      return m_wxControlBaseExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxControlBaseExtSetThemeEnabledboolFunc m_wxControlBaseExtSetThemeEnabledbool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxControlBase::SetThemeEnabled(enableTheme);
    if (*m_wxControlBaseExtSetThemeEnabledbool != NULL){
      return m_wxControlBaseExtSetThemeEnabledbool(this, enableTheme);
    }
  }
  wxControlBaseExtSetTransparentwxByteFunc m_wxControlBaseExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte param0) override
  {
    bool res = wxControlBase::SetTransparent(param0);
    if (*m_wxControlBaseExtSetTransparentwxByte != NULL){
      return m_wxControlBaseExtSetTransparentwxByte(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtSetValidatorwxValidatorCRFunc m_wxControlBaseExtSetValidatorwxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxControlBase::SetValidator(validator);
    if (*m_wxControlBaseExtSetValidatorwxValidatorCR != NULL){
      return m_wxControlBaseExtSetValidatorwxValidatorCR(this, validator);
    }
  }
  wxControlBaseExtSetWindowStyleFlaglongFunc m_wxControlBaseExtSetWindowStyleFlaglong = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxControlBase::SetWindowStyleFlag(style);
    if (*m_wxControlBaseExtSetWindowStyleFlaglong != NULL){
      return m_wxControlBaseExtSetWindowStyleFlaglong(this, style);
    }
  }
  wxControlBaseExtShouldInheritColoursFunc m_wxControlBaseExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxControlBase::ShouldInheritColours();
    if (*m_wxControlBaseExtShouldInheritColours != NULL){
      return m_wxControlBaseExtShouldInheritColours(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtShowboolFunc m_wxControlBaseExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxControlBase::Show(show);
    if (*m_wxControlBaseExtShowbool != NULL){
      return m_wxControlBaseExtShowbool(this, show);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtShowWithEffectwxShowEffectunsignedintFunc m_wxControlBaseExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxControlBase::ShowWithEffect(param0, param1);
    if (*m_wxControlBaseExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxControlBaseExtShowWithEffectwxShowEffectunsignedint(this, param0, param1);
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
      return m_wxControlBaseExtTransferDataFromWindow(this);
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
      return m_wxControlBaseExtTransferDataToWindow(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtTryAfterwxEventRFunc m_wxControlBaseExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxControlBase::TryAfter(event);
    if (*m_wxControlBaseExtTryAfterwxEventR != NULL){
      return m_wxControlBaseExtTryAfterwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtTryBeforewxEventRFunc m_wxControlBaseExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxControlBase::TryBefore(event);
    if (*m_wxControlBaseExtTryBeforewxEventR != NULL){
      return m_wxControlBaseExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtUnregisterHotKeyintFunc m_wxControlBaseExtUnregisterHotKeyint = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxControlBase::UnregisterHotKey(hotkeyId);
    if (*m_wxControlBaseExtUnregisterHotKeyint != NULL){
      return m_wxControlBaseExtUnregisterHotKeyint(this, hotkeyId);
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
  wxControlBaseExtUpdateWindowUIlongFunc m_wxControlBaseExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxControlBase::UpdateWindowUI(flags);
    if (*m_wxControlBaseExtUpdateWindowUIlong != NULL){
      return m_wxControlBaseExtUpdateWindowUIlong(this, flags);
    }
  }
  wxControlBaseExtValidateFunc m_wxControlBaseExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxControlBase::Validate();
    if (*m_wxControlBaseExtValidate != NULL){
      return m_wxControlBaseExtValidate(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXAdjustFontToOwnPPIwxFontRFunc m_wxControlBaseExtWXAdjustFontToOwnPPIwxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& param0) const override
  {
    wxControlBase::WXAdjustFontToOwnPPI(param0);
    if (*m_wxControlBaseExtWXAdjustFontToOwnPPIwxFontR != NULL){
      return m_wxControlBaseExtWXAdjustFontToOwnPPIwxFontR(this, param0);
    }
  }
  wxControlBaseExtWXGetTextEntryFunc m_wxControlBaseExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxControlBase::WXGetTextEntry();
    if (*m_wxControlBaseExtWXGetTextEntry != NULL){
      return m_wxControlBaseExtWXGetTextEntry(this);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXReservedEvtHandler1voidPFunc m_wxControlBaseExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxControlBase::WXReservedEvtHandler1(param0);
    if (*m_wxControlBaseExtWXReservedEvtHandler1voidP != NULL){
      return m_wxControlBaseExtWXReservedEvtHandler1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXReservedEvtHandler2voidPFunc m_wxControlBaseExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxControlBase::WXReservedEvtHandler2(param0);
    if (*m_wxControlBaseExtWXReservedEvtHandler2voidP != NULL){
      return m_wxControlBaseExtWXReservedEvtHandler2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXReservedWindow1voidPFunc m_wxControlBaseExtWXReservedWindow1voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxControlBase::WXReservedWindow1(param0);
    if (*m_wxControlBaseExtWXReservedWindow1voidP != NULL){
      return m_wxControlBaseExtWXReservedWindow1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXReservedWindow2voidPFunc m_wxControlBaseExtWXReservedWindow2voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxControlBase::WXReservedWindow2(param0);
    if (*m_wxControlBaseExtWXReservedWindow2voidP != NULL){
      return m_wxControlBaseExtWXReservedWindow2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXReservedWindow3voidPFunc m_wxControlBaseExtWXReservedWindow3voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxControlBase::WXReservedWindow3(param0);
    if (*m_wxControlBaseExtWXReservedWindow3voidP != NULL){
      return m_wxControlBaseExtWXReservedWindow3voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc m_wxControlBaseExtWXSetInitialFittingClientSizeintwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxControlBase::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxControlBaseExtWXSetInitialFittingClientSizeintwxSizerP != NULL){
      return m_wxControlBaseExtWXSetInitialFittingClientSizeintwxSizerP(this, flags, sizer);
    }
  }
  wxControlBaseExtWarpPointerintintFunc m_wxControlBaseExtWarpPointerintint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxControlBase::WarpPointer(x, y);
    if (*m_wxControlBaseExtWarpPointerintint != NULL){
      return m_wxControlBaseExtWarpPointerintint(this, x, y);
    }
  }
  wxControlBaseExtWindowToClientSizewxSizeCRFunc m_wxControlBaseExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxControlBase::WindowToClientSize(size);
    if (*m_wxControlBaseExtWindowToClientSizewxSizeCR != NULL){
      return m_wxControlBaseExtWindowToClientSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxControlBaseExt(wxControlBaseExtAcceptsFocusFunc a_AcceptsFocus, wxControlBaseExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxControlBaseExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxControlBaseExtAddChildwxWindowBasePFunc a_AddChildwxWindowBaseP, wxControlBaseExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxControlBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxControlBaseExtAdjustForParentClientOriginintRintRintFunc a_AdjustForParentClientOriginintRintRint, wxControlBaseExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxControlBaseExtAssociateHandleWXWidgetFunc a_AssociateHandleWXWidget, wxControlBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxControlBaseExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxControlBaseExtCanBeFocusedFunc a_CanBeFocused, wxControlBaseExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxControlBaseExtCanScrollintFunc a_CanScrollint, wxControlBaseExtCanSetTransparentFunc a_CanSetTransparent, wxControlBaseExtClearBackgroundFunc a_ClearBackground, wxControlBaseExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxControlBaseExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxControlBaseExtCommandwxCommandEventRFunc a_CommandwxCommandEventR, wxControlBaseExtCreateRefDataFunc a_CreateRefData, wxControlBaseExtDestroyFunc a_Destroy, wxControlBaseExtDissociateHandleFunc a_DissociateHandle, wxControlBaseExtDoCaptureMouseFunc a_DoCaptureMouse, wxControlBaseExtDoCentreintFunc a_DoCentreint, wxControlBaseExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxControlBaseExtDoEnableboolFunc a_DoEnablebool, wxControlBaseExtDoFreezeFunc a_DoFreeze, wxControlBaseExtDoGetBestClientHeightintFunc a_DoGetBestClientHeightint, wxControlBaseExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxControlBaseExtDoGetBestClientWidthintFunc a_DoGetBestClientWidthint, wxControlBaseExtDoGetBestSizeFunc a_DoGetBestSize, wxControlBaseExtDoGetClientDataFunc a_DoGetClientData, wxControlBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxControlBaseExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxControlBaseExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxControlBaseExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxControlBaseExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxControlBaseExtDoGetSizeFromTextSizeintintFunc a_DoGetSizeFromTextSizeintint, wxControlBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxControlBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxControlBaseExtDoHitTestwxCoordwxCoordFunc a_DoHitTestwxCoordwxCoord, wxControlBaseExtDoIsExposedintintintintFunc a_DoIsExposedintintintint, wxControlBaseExtDoIsExposedintintFunc a_DoIsExposedintint, wxControlBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder, wxControlBaseExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxControlBaseExtDoNavigateInintFunc a_DoNavigateInint, wxControlBaseExtDoPhaseintFunc a_DoPhaseint, wxControlBaseExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxControlBaseExtDoReleaseMouseFunc a_DoReleaseMouse, wxControlBaseExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxControlBaseExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxControlBaseExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxControlBaseExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxControlBaseExtDoSetLabelMarkupwxStringCRFunc a_DoSetLabelMarkupwxStringCR, wxControlBaseExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxControlBaseExtDoSetSizeHintsintintintintintintFunc a_DoSetSizeHintsintintintintintint, wxControlBaseExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxControlBaseExtDoSetToolTipTextwxStringCRFunc a_DoSetToolTipTextwxStringCR, wxControlBaseExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxControlBaseExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxControlBaseExtDoThawFunc a_DoThaw, wxControlBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxControlBaseExtDragAcceptFilesboolFunc a_DragAcceptFilesbool, wxControlBaseExtEnableboolFunc a_Enablebool, wxControlBaseExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxControlBaseExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxControlBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxControlBaseExtFitFunc a_Fit, wxControlBaseExtFitInsideFunc a_FitInside, wxControlBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxControlBaseExtGetCharHeightFunc a_GetCharHeight, wxControlBaseExtGetCharWidthFunc a_GetCharWidth, wxControlBaseExtGetClassInfoFunc a_GetClassInfo, wxControlBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxControlBaseExtGetClientSizeConstraintintPintPFunc a_GetClientSizeConstraintintPintP, wxControlBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxControlBaseExtGetDPIFunc a_GetDPI, wxControlBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxControlBaseExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxControlBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxControlBaseExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxControlBaseExtGetDropTargetFunc a_GetDropTarget, wxControlBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxControlBaseExtGetEventHashTableFunc a_GetEventHashTable, wxControlBaseExtGetEventTableFunc a_GetEventTable, wxControlBaseExtGetHandleFunc a_GetHandle, wxControlBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin, wxControlBaseExtGetLabelFunc a_GetLabel, wxControlBaseExtGetLabelTextFunc a_GetLabelText, wxControlBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxControlBaseExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxControlBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxControlBaseExtGetMaxSizeFunc a_GetMaxSize, wxControlBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxControlBaseExtGetMinSizeFunc a_GetMinSize, wxControlBaseExtGetNameFunc a_GetName, wxControlBaseExtGetPositionConstraintintPintPFunc a_GetPositionConstraintintPintP, wxControlBaseExtGetScrollPosintFunc a_GetScrollPosint, wxControlBaseExtGetScrollRangeintFunc a_GetScrollRangeint, wxControlBaseExtGetScrollThumbintFunc a_GetScrollThumbint, wxControlBaseExtGetSizeConstraintintPintPFunc a_GetSizeConstraintintPintP, wxControlBaseExtGetThemeEnabledFunc a_GetThemeEnabled, wxControlBaseExtGetValidatorFunc a_GetValidator, wxControlBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxControlBaseExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxControlBaseExtHasCaptureFunc a_HasCapture, wxControlBaseExtHasFocusFunc a_HasFocus, wxControlBaseExtHasMultiplePagesFunc a_HasMultiplePages, wxControlBaseExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxControlBaseExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxControlBaseExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxControlBaseExtInheritAttributesFunc a_InheritAttributes, wxControlBaseExtInitDialogFunc a_InitDialog, wxControlBaseExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxControlBaseExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxControlBaseExtIsRetainedFunc a_IsRetained, wxControlBaseExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxControlBaseExtIsShownFunc a_IsShown, wxControlBaseExtIsShownOnScreenFunc a_IsShownOnScreen, wxControlBaseExtIsThisEnabledFunc a_IsThisEnabled, wxControlBaseExtIsTopLevelFunc a_IsTopLevel, wxControlBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxControlBaseExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxControlBaseExtLayoutFunc a_Layout, wxControlBaseExtLayoutPhase1intPFunc a_LayoutPhase1intP, wxControlBaseExtLayoutPhase2intPFunc a_LayoutPhase2intP, wxControlBaseExtLowerFunc a_Lower, wxControlBaseExtMoveConstraintintintFunc a_MoveConstraintintint, wxControlBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxControlBaseExtOnInternalIdleFunc a_OnInternalIdle, wxControlBaseExtPrepareDCwxDCRFunc a_PrepareDCwxDCR, wxControlBaseExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxControlBaseExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxControlBaseExtRaiseFunc a_Raise, wxControlBaseExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxControlBaseExtRegisterHotKeyintintintFunc a_RegisterHotKeyintintint, wxControlBaseExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxControlBaseExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxControlBaseExtScrollLinesintFunc a_ScrollLinesint, wxControlBaseExtScrollPagesintFunc a_ScrollPagesint, wxControlBaseExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxControlBaseExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxControlBaseExtSendIdleEventswxIdleEventRFunc a_SendIdleEventswxIdleEventR, wxControlBaseExtSendSizeEventintFunc a_SendSizeEventint, wxControlBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc a_SetAcceleratorTablewxAcceleratorTableCR, wxControlBaseExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxControlBaseExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxControlBaseExtSetCanFocusboolFunc a_SetCanFocusbool, wxControlBaseExtSetConstraintSizesboolFunc a_SetConstraintSizesbool, wxControlBaseExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxControlBaseExtSetDoubleBufferedboolFunc a_SetDoubleBufferedbool, wxControlBaseExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxControlBaseExtSetExtraStylelongFunc a_SetExtraStylelong, wxControlBaseExtSetFocusFunc a_SetFocus, wxControlBaseExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxControlBaseExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxControlBaseExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxControlBaseExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxControlBaseExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxControlBaseExtSetLabelTextwxStringCRFunc a_SetLabelTextwxStringCR, wxControlBaseExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxControlBaseExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxControlBaseExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxControlBaseExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxControlBaseExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxControlBaseExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxControlBaseExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxControlBaseExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxControlBaseExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxControlBaseExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxControlBaseExtSetSizeConstraintintintintintFunc a_SetSizeConstraintintintintint, wxControlBaseExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxControlBaseExtSetThemeEnabledboolFunc a_SetThemeEnabledbool, wxControlBaseExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxControlBaseExtSetValidatorwxValidatorCRFunc a_SetValidatorwxValidatorCR, wxControlBaseExtSetWindowStyleFlaglongFunc a_SetWindowStyleFlaglong, wxControlBaseExtShouldInheritColoursFunc a_ShouldInheritColours, wxControlBaseExtShowboolFunc a_Showbool, wxControlBaseExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxControlBaseExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxControlBaseExtTransferDataToWindowFunc a_TransferDataToWindow, wxControlBaseExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxControlBaseExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxControlBaseExtUnregisterHotKeyintFunc a_UnregisterHotKeyint, wxControlBaseExtUpdateFunc a_Update, wxControlBaseExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxControlBaseExtValidateFunc a_Validate, wxControlBaseExtWXAdjustFontToOwnPPIwxFontRFunc a_WXAdjustFontToOwnPPIwxFontR, wxControlBaseExtWXGetTextEntryFunc a_WXGetTextEntry, wxControlBaseExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxControlBaseExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxControlBaseExtWXReservedWindow1voidPFunc a_WXReservedWindow1voidP, wxControlBaseExtWXReservedWindow2voidPFunc a_WXReservedWindow2voidP, wxControlBaseExtWXReservedWindow3voidPFunc a_WXReservedWindow3voidP, wxControlBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc a_WXSetInitialFittingClientSizeintwxSizerP, wxControlBaseExtWarpPointerintintFunc a_WarpPointerintint, wxControlBaseExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxControlBase() {
    m_wxControlBaseExtAcceptsFocus = a_AcceptsFocus;
    m_wxControlBaseExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxControlBaseExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxControlBaseExtAddChildwxWindowBaseP = a_AddChildwxWindowBaseP;
    m_wxControlBaseExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxControlBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxControlBaseExtAdjustForParentClientOriginintRintRint = a_AdjustForParentClientOriginintRintRint;
    m_wxControlBaseExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxControlBaseExtAssociateHandleWXWidget = a_AssociateHandleWXWidget;
    m_wxControlBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxControlBaseExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxControlBaseExtCanBeFocused = a_CanBeFocused;
    m_wxControlBaseExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxControlBaseExtCanScrollint = a_CanScrollint;
    m_wxControlBaseExtCanSetTransparent = a_CanSetTransparent;
    m_wxControlBaseExtClearBackground = a_ClearBackground;
    m_wxControlBaseExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxControlBaseExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxControlBaseExtCommandwxCommandEventR = a_CommandwxCommandEventR;
    m_wxControlBaseExtCreateRefData = a_CreateRefData;
    m_wxControlBaseExtDestroy = a_Destroy;
    m_wxControlBaseExtDissociateHandle = a_DissociateHandle;
    m_wxControlBaseExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxControlBaseExtDoCentreint = a_DoCentreint;
    m_wxControlBaseExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxControlBaseExtDoEnablebool = a_DoEnablebool;
    m_wxControlBaseExtDoFreeze = a_DoFreeze;
    m_wxControlBaseExtDoGetBestClientHeightint = a_DoGetBestClientHeightint;
    m_wxControlBaseExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxControlBaseExtDoGetBestClientWidthint = a_DoGetBestClientWidthint;
    m_wxControlBaseExtDoGetBestSize = a_DoGetBestSize;
    m_wxControlBaseExtDoGetClientData = a_DoGetClientData;
    m_wxControlBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxControlBaseExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxControlBaseExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxControlBaseExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxControlBaseExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxControlBaseExtDoGetSizeFromTextSizeintint = a_DoGetSizeFromTextSizeintint;
    m_wxControlBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxControlBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxControlBaseExtDoHitTestwxCoordwxCoord = a_DoHitTestwxCoordwxCoord;
    m_wxControlBaseExtDoIsExposedintintintint = a_DoIsExposedintintintint;
    m_wxControlBaseExtDoIsExposedintint = a_DoIsExposedintint;
    m_wxControlBaseExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder;
    m_wxControlBaseExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxControlBaseExtDoNavigateInint = a_DoNavigateInint;
    m_wxControlBaseExtDoPhaseint = a_DoPhaseint;
    m_wxControlBaseExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxControlBaseExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxControlBaseExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxControlBaseExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxControlBaseExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxControlBaseExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxControlBaseExtDoSetLabelMarkupwxStringCR = a_DoSetLabelMarkupwxStringCR;
    m_wxControlBaseExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxControlBaseExtDoSetSizeHintsintintintintintint = a_DoSetSizeHintsintintintintintint;
    m_wxControlBaseExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxControlBaseExtDoSetToolTipTextwxStringCR = a_DoSetToolTipTextwxStringCR;
    m_wxControlBaseExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxControlBaseExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxControlBaseExtDoThaw = a_DoThaw;
    m_wxControlBaseExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxControlBaseExtDragAcceptFilesbool = a_DragAcceptFilesbool;
    m_wxControlBaseExtEnablebool = a_Enablebool;
    m_wxControlBaseExtEnableTouchEventsint = a_EnableTouchEventsint;
    m_wxControlBaseExtEnableVisibleFocusbool = a_EnableVisibleFocusbool;
    m_wxControlBaseExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxControlBaseExtFit = a_Fit;
    m_wxControlBaseExtFitInside = a_FitInside;
    m_wxControlBaseExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxControlBaseExtGetCharHeight = a_GetCharHeight;
    m_wxControlBaseExtGetCharWidth = a_GetCharWidth;
    m_wxControlBaseExtGetClassInfo = a_GetClassInfo;
    m_wxControlBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxControlBaseExtGetClientSizeConstraintintPintP = a_GetClientSizeConstraintintPintP;
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
    m_wxControlBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin;
    m_wxControlBaseExtGetLabel = a_GetLabel;
    m_wxControlBaseExtGetLabelText = a_GetLabelText;
    m_wxControlBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxControlBaseExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxControlBaseExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxControlBaseExtGetMaxSize = a_GetMaxSize;
    m_wxControlBaseExtGetMinClientSize = a_GetMinClientSize;
    m_wxControlBaseExtGetMinSize = a_GetMinSize;
    m_wxControlBaseExtGetName = a_GetName;
    m_wxControlBaseExtGetPositionConstraintintPintP = a_GetPositionConstraintintPintP;
    m_wxControlBaseExtGetScrollPosint = a_GetScrollPosint;
    m_wxControlBaseExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxControlBaseExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxControlBaseExtGetSizeConstraintintPintP = a_GetSizeConstraintintPintP;
    m_wxControlBaseExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxControlBaseExtGetValidator = a_GetValidator;
    m_wxControlBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxControlBaseExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxControlBaseExtHasCapture = a_HasCapture;
    m_wxControlBaseExtHasFocus = a_HasFocus;
    m_wxControlBaseExtHasMultiplePages = a_HasMultiplePages;
    m_wxControlBaseExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxControlBaseExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxControlBaseExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxControlBaseExtInheritAttributes = a_InheritAttributes;
    m_wxControlBaseExtInitDialog = a_InitDialog;
    m_wxControlBaseExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxControlBaseExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxControlBaseExtIsRetained = a_IsRetained;
    m_wxControlBaseExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxControlBaseExtIsShown = a_IsShown;
    m_wxControlBaseExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxControlBaseExtIsThisEnabled = a_IsThisEnabled;
    m_wxControlBaseExtIsTopLevel = a_IsTopLevel;
    m_wxControlBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxControlBaseExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxControlBaseExtLayout = a_Layout;
    m_wxControlBaseExtLayoutPhase1intP = a_LayoutPhase1intP;
    m_wxControlBaseExtLayoutPhase2intP = a_LayoutPhase2intP;
    m_wxControlBaseExtLower = a_Lower;
    m_wxControlBaseExtMoveConstraintintint = a_MoveConstraintintint;
    m_wxControlBaseExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxControlBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxControlBaseExtPrepareDCwxDCR = a_PrepareDCwxDCR;
    m_wxControlBaseExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxControlBaseExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxControlBaseExtRaise = a_Raise;
    m_wxControlBaseExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxControlBaseExtRegisterHotKeyintintint = a_RegisterHotKeyintintint;
    m_wxControlBaseExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxControlBaseExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxControlBaseExtScrollLinesint = a_ScrollLinesint;
    m_wxControlBaseExtScrollPagesint = a_ScrollPagesint;
    m_wxControlBaseExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxControlBaseExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxControlBaseExtSendIdleEventswxIdleEventR = a_SendIdleEventswxIdleEventR;
    m_wxControlBaseExtSendSizeEventint = a_SendSizeEventint;
    m_wxControlBaseExtSetAcceleratorTablewxAcceleratorTableCR = a_SetAcceleratorTablewxAcceleratorTableCR;
    m_wxControlBaseExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxControlBaseExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxControlBaseExtSetCanFocusbool = a_SetCanFocusbool;
    m_wxControlBaseExtSetConstraintSizesbool = a_SetConstraintSizesbool;
    m_wxControlBaseExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxControlBaseExtSetDoubleBufferedbool = a_SetDoubleBufferedbool;
    m_wxControlBaseExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxControlBaseExtSetExtraStylelong = a_SetExtraStylelong;
    m_wxControlBaseExtSetFocus = a_SetFocus;
    m_wxControlBaseExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxControlBaseExtSetFontwxFontCR = a_SetFontwxFontCR;
    m_wxControlBaseExtSetForegroundColourwxColourCR = a_SetForegroundColourwxColourCR;
    m_wxControlBaseExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxControlBaseExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxControlBaseExtSetLabelTextwxStringCR = a_SetLabelTextwxStringCR;
    m_wxControlBaseExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxControlBaseExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxControlBaseExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxControlBaseExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxControlBaseExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxControlBaseExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxControlBaseExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxControlBaseExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxControlBaseExtSetScrollPosintintbool = a_SetScrollPosintintbool;
    m_wxControlBaseExtSetScrollbarintintintintbool = a_SetScrollbarintintintintbool;
    m_wxControlBaseExtSetSizeConstraintintintintint = a_SetSizeConstraintintintintint;
    m_wxControlBaseExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxControlBaseExtSetThemeEnabledbool = a_SetThemeEnabledbool;
    m_wxControlBaseExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxControlBaseExtSetValidatorwxValidatorCR = a_SetValidatorwxValidatorCR;
    m_wxControlBaseExtSetWindowStyleFlaglong = a_SetWindowStyleFlaglong;
    m_wxControlBaseExtShouldInheritColours = a_ShouldInheritColours;
    m_wxControlBaseExtShowbool = a_Showbool;
    m_wxControlBaseExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxControlBaseExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxControlBaseExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxControlBaseExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxControlBaseExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxControlBaseExtUnregisterHotKeyint = a_UnregisterHotKeyint;
    m_wxControlBaseExtUpdate = a_Update;
    m_wxControlBaseExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxControlBaseExtValidate = a_Validate;
    m_wxControlBaseExtWXAdjustFontToOwnPPIwxFontR = a_WXAdjustFontToOwnPPIwxFontR;
    m_wxControlBaseExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxControlBaseExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxControlBaseExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxControlBaseExtWXReservedWindow1voidP = a_WXReservedWindow1voidP;
    m_wxControlBaseExtWXReservedWindow2voidP = a_WXReservedWindow2voidP;
    m_wxControlBaseExtWXReservedWindow3voidP = a_WXReservedWindow3voidP;
    m_wxControlBaseExtWXSetInitialFittingClientSizeintwxSizerP = a_WXSetInitialFittingClientSizeintwxSizerP;
    m_wxControlBaseExtWarpPointerintint = a_WarpPointerintint;
    m_wxControlBaseExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
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
      return m_wxControlExtAcceptsFocus(this);
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
      return m_wxControlExtAcceptsFocusFromKeyboard(this);
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
      return m_wxControlExtAcceptsFocusRecursively(this);
    }
    else {
      return res;
    }
  }
  wxControlExtAddChildwxWindowBasePFunc m_wxControlExtAddChildwxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxControl::AddChild(child);
    if (*m_wxControlExtAddChildwxWindowBaseP != NULL){
      return m_wxControlExtAddChildwxWindowBaseP(this, child);
    }
  }
  wxControlExtAddPendingEventwxEventCRFunc m_wxControlExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxControl::AddPendingEvent(event);
    if (*m_wxControlExtAddPendingEventwxEventCR != NULL){
      return m_wxControlExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxControlExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxControlExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxControl::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxControlExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxControlExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal);
    }
    else {
      return res;
    }
  }
  wxControlExtAdjustForParentClientOriginintRintRintFunc m_wxControlExtAdjustForParentClientOriginintRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxControl::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxControlExtAdjustForParentClientOriginintRintRint != NULL){
      return m_wxControlExtAdjustForParentClientOriginintRintRint(this, x, y, sizeFlags);
    }
  }
  wxControlExtAlwaysShowScrollbarsboolboolFunc m_wxControlExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool param0 = true, bool param1 = true) override
  {
    wxControl::AlwaysShowScrollbars(param0, param1);
    if (*m_wxControlExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxControlExtAlwaysShowScrollbarsboolbool(this, param0, param1);
    }
  }
  wxControlExtAssociateHandleWXWidgetFunc m_wxControlExtAssociateHandleWXWidget = NULL;
  virtual void AssociateHandle(WXWidget param0) override
  {
    wxControl::AssociateHandle(param0);
    if (*m_wxControlExtAssociateHandleWXWidget != NULL){
      return m_wxControlExtAssociateHandleWXWidget(this, param0);
    }
  }
  wxControlExtBeginRepositioningChildrenFunc m_wxControlExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxControl::BeginRepositioningChildren();
    if (*m_wxControlExtBeginRepositioningChildren != NULL){
      return m_wxControlExtBeginRepositioningChildren(this);
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
      return m_wxControlExtCanApplyThemeBorder(this);
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
      return m_wxControlExtCanBeFocused(this);
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
      return m_wxControlExtCanBeOutsideClientArea(this);
    }
    else {
      return res;
    }
  }
  wxControlExtCanScrollintFunc m_wxControlExtCanScrollint = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxControl::CanScroll(orient);
    if (*m_wxControlExtCanScrollint != NULL){
      return m_wxControlExtCanScrollint(this, orient);
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
      return m_wxControlExtCanSetTransparent(this);
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
  wxControlExtClientToWindowSizewxSizeCRFunc m_wxControlExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxControl::ClientToWindowSize(size);
    if (*m_wxControlExtClientToWindowSizewxSizeCR != NULL){
      return m_wxControlExtClientToWindowSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxControlExtCloneRefDatawxObjectRefDataCPFunc m_wxControlExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxControl::CloneRefData(data);
    if (*m_wxControlExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxControlExtCloneRefDatawxObjectRefDataCP(this, data);
    }
    else {
      return res;
    }
  }
  wxControlExtCommandwxCommandEventRFunc m_wxControlExtCommandwxCommandEventR = NULL;
  virtual void Command(wxCommandEvent& event) override
  {
    wxControl::Command(event);
    if (*m_wxControlExtCommandwxCommandEventR != NULL){
      return m_wxControlExtCommandwxCommandEventR(this, event);
    }
  }
  wxControlExtCreateRefDataFunc m_wxControlExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxControl::CreateRefData();
    if (*m_wxControlExtCreateRefData != NULL){
      return m_wxControlExtCreateRefData(this);
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
      return m_wxControlExtDestroy(this);
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
  wxControlExtDoCentreintFunc m_wxControlExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxControl::DoCentre(dir);
    if (*m_wxControlExtDoCentreint != NULL){
      return m_wxControlExtDoCentreint(this, dir);
    }
  }
  wxControlExtDoClientToScreenintPintPFunc m_wxControlExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxControl::DoClientToScreen(x, y);
    if (*m_wxControlExtDoClientToScreenintPintP != NULL){
      return m_wxControlExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxControlExtDoEnableboolFunc m_wxControlExtDoEnablebool = NULL;
  virtual void DoEnable(bool param0) override
  {
    wxControl::DoEnable(param0);
    if (*m_wxControlExtDoEnablebool != NULL){
      return m_wxControlExtDoEnablebool(this, param0);
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
  wxControlExtDoGetBestClientHeightintFunc m_wxControlExtDoGetBestClientHeightint = NULL;
  virtual int DoGetBestClientHeight(int param0) const override
  {
    int res = wxControl::DoGetBestClientHeight(param0);
    if (*m_wxControlExtDoGetBestClientHeightint != NULL){
      return m_wxControlExtDoGetBestClientHeightint(this, param0);
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
      return m_wxControlExtDoGetBestClientSize(this);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetBestClientWidthintFunc m_wxControlExtDoGetBestClientWidthint = NULL;
  virtual int DoGetBestClientWidth(int param0) const override
  {
    int res = wxControl::DoGetBestClientWidth(param0);
    if (*m_wxControlExtDoGetBestClientWidthint != NULL){
      return m_wxControlExtDoGetBestClientWidthint(this, param0);
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
      return m_wxControlExtDoGetBestSize(this);
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
      return m_wxControlExtDoGetClientData(this);
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
      return m_wxControlExtDoGetClientObject(this);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetClientSizeintPintPFunc m_wxControlExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxControl::DoGetClientSize(width, height);
    if (*m_wxControlExtDoGetClientSizeintPintP != NULL){
      return m_wxControlExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxControlExtDoGetPositionintPintPFunc m_wxControlExtDoGetPositionintPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxControl::DoGetPosition(x, y);
    if (*m_wxControlExtDoGetPositionintPintP != NULL){
      return m_wxControlExtDoGetPositionintPintP(this, x, y);
    }
  }
  wxControlExtDoGetScreenPositionintPintPFunc m_wxControlExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxControl::DoGetScreenPosition(x, y);
    if (*m_wxControlExtDoGetScreenPositionintPintP != NULL){
      return m_wxControlExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxControlExtDoGetSizeintPintPFunc m_wxControlExtDoGetSizeintPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxControl::DoGetSize(width, height);
    if (*m_wxControlExtDoGetSizeintPintP != NULL){
      return m_wxControlExtDoGetSizeintPintP(this, width, height);
    }
  }
  wxControlExtDoGetSizeFromTextSizeintintFunc m_wxControlExtDoGetSizeFromTextSizeintint = NULL;
  virtual wxSize DoGetSizeFromTextSize(int xlen, int ylen = -1) const override
  {
    wxSize res = wxControl::DoGetSizeFromTextSize(xlen, ylen);
    if (*m_wxControlExtDoGetSizeFromTextSizeintint != NULL){
      return m_wxControlExtDoGetSizeFromTextSizeintint(this, xlen, ylen);
    }
    else {
      return res;
    }
  }
  wxControlExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxControlExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* font = __null) const override
  {
    wxControl::DoGetTextExtent(string, x, y, descent, externalLeading, font);
    if (*m_wxControlExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxControlExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, font);
    }
  }
  wxControlExtDoGetVirtualSizeFunc m_wxControlExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxControl::DoGetVirtualSize();
    if (*m_wxControlExtDoGetVirtualSize != NULL){
      return m_wxControlExtDoGetVirtualSize(this);
    }
    else {
      return res;
    }
  }
  wxControlExtDoHitTestwxCoordwxCoordFunc m_wxControlExtDoHitTestwxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxControl::DoHitTest(x, y);
    if (*m_wxControlExtDoHitTestwxCoordwxCoord != NULL){
      return m_wxControlExtDoHitTestwxCoordwxCoord(this, x, y);
    }
    else {
      return res;
    }
  }
  wxControlExtDoIsExposedintintintintFunc m_wxControlExtDoIsExposedintintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxControl::DoIsExposed(x, y, w, h);
    if (*m_wxControlExtDoIsExposedintintintint != NULL){
      return m_wxControlExtDoIsExposedintintintint(this, x, y, w, h);
    }
    else {
      return res;
    }
  }
  wxControlExtDoIsExposedintintFunc m_wxControlExtDoIsExposedintint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxControl::DoIsExposed(x, y);
    if (*m_wxControlExtDoIsExposedintint != NULL){
      return m_wxControlExtDoIsExposedintint(this, x, y);
    }
    else {
      return res;
    }
  }
  wxControlExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc m_wxControlExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder = NULL;
  virtual void DoMoveInTabOrder(wxWindow* win, wxWindowBase::WindowOrder move) override
  {
    wxControl::DoMoveInTabOrder(win, move);
    if (*m_wxControlExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder != NULL){
      return m_wxControlExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder(this, win, move);
    }
  }
  wxControlExtDoMoveWindowintintintintFunc m_wxControlExtDoMoveWindowintintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxControl::DoMoveWindow(x, y, width, height);
    if (*m_wxControlExtDoMoveWindowintintintint != NULL){
      return m_wxControlExtDoMoveWindowintintintint(this, x, y, width, height);
    }
  }
  wxControlExtDoNavigateInintFunc m_wxControlExtDoNavigateInint = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxControl::DoNavigateIn(flags);
    if (*m_wxControlExtDoNavigateInint != NULL){
      return m_wxControlExtDoNavigateInint(this, flags);
    }
    else {
      return res;
    }
  }
  wxControlExtDoPhaseintFunc m_wxControlExtDoPhaseint = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxControl::DoPhase(phase);
    if (*m_wxControlExtDoPhaseint != NULL){
      return m_wxControlExtDoPhaseint(this, phase);
    }
    else {
      return res;
    }
  }
  wxControlExtDoPopupMenuwxMenuPintintFunc m_wxControlExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxControl::DoPopupMenu(menu, x, y);
    if (*m_wxControlExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxControlExtDoPopupMenuwxMenuPintint(this, menu, x, y);
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
  wxControlExtDoScreenToClientintPintPFunc m_wxControlExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxControl::DoScreenToClient(x, y);
    if (*m_wxControlExtDoScreenToClientintPintP != NULL){
      return m_wxControlExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxControlExtDoSetClientDatavoidPFunc m_wxControlExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxControl::DoSetClientData(data);
    if (*m_wxControlExtDoSetClientDatavoidP != NULL){
      return m_wxControlExtDoSetClientDatavoidP(this, data);
    }
  }
  wxControlExtDoSetClientObjectwxClientDataPFunc m_wxControlExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxControl::DoSetClientObject(data);
    if (*m_wxControlExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxControlExtDoSetClientObjectwxClientDataP(this, data);
    }
  }
  wxControlExtDoSetClientSizeintintFunc m_wxControlExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxControl::DoSetClientSize(width, height);
    if (*m_wxControlExtDoSetClientSizeintint != NULL){
      return m_wxControlExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxControlExtDoSetLabelMarkupwxStringCRFunc m_wxControlExtDoSetLabelMarkupwxStringCR = NULL;
  virtual bool DoSetLabelMarkup(wxString const& markup) override
  {
    bool res = wxControl::DoSetLabelMarkup(markup);
    if (*m_wxControlExtDoSetLabelMarkupwxStringCR != NULL){
      return m_wxControlExtDoSetLabelMarkupwxStringCR(this, markup);
    }
    else {
      return res;
    }
  }
  wxControlExtDoSetSizeintintintintintFunc m_wxControlExtDoSetSizeintintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxControl::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxControlExtDoSetSizeintintintintint != NULL){
      return m_wxControlExtDoSetSizeintintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxControlExtDoSetSizeHintsintintintintintintFunc m_wxControlExtDoSetSizeHintsintintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxControl::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxControlExtDoSetSizeHintsintintintintintint != NULL){
      return m_wxControlExtDoSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxControlExtDoSetToolTipwxToolTipPFunc m_wxControlExtDoSetToolTipwxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxControl::DoSetToolTip(tip);
    if (*m_wxControlExtDoSetToolTipwxToolTipP != NULL){
      return m_wxControlExtDoSetToolTipwxToolTipP(this, tip);
    }
  }
  wxControlExtDoSetToolTipTextwxStringCRFunc m_wxControlExtDoSetToolTipTextwxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxControl::DoSetToolTipText(tip);
    if (*m_wxControlExtDoSetToolTipTextwxStringCR != NULL){
      return m_wxControlExtDoSetToolTipTextwxStringCR(this, tip);
    }
  }
  wxControlExtDoSetVirtualSizeintintFunc m_wxControlExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxControl::DoSetVirtualSize(x, y);
    if (*m_wxControlExtDoSetVirtualSizeintint != NULL){
      return m_wxControlExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxControlExtDoSetWindowVariantwxWindowVariantFunc m_wxControlExtDoSetWindowVariantwxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxControl::DoSetWindowVariant(variant);
    if (*m_wxControlExtDoSetWindowVariantwxWindowVariant != NULL){
      return m_wxControlExtDoSetWindowVariantwxWindowVariant(this, variant);
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
  wxControlExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxControlExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxControl::DoUpdateWindowUI(event);
    if (*m_wxControlExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxControlExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxControlExtDragAcceptFilesboolFunc m_wxControlExtDragAcceptFilesbool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxControl::DragAcceptFiles(accept);
    if (*m_wxControlExtDragAcceptFilesbool != NULL){
      return m_wxControlExtDragAcceptFilesbool(this, accept);
    }
  }
  wxControlExtEnableboolFunc m_wxControlExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxControl::Enable(enable);
    if (*m_wxControlExtEnablebool != NULL){
      return m_wxControlExtEnablebool(this, enable);
    }
    else {
      return res;
    }
  }
  wxControlExtEnableTouchEventsintFunc m_wxControlExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int param0) override
  {
    bool res = wxControl::EnableTouchEvents(param0);
    if (*m_wxControlExtEnableTouchEventsint != NULL){
      return m_wxControlExtEnableTouchEventsint(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlExtEnableVisibleFocusboolFunc m_wxControlExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool param0) override
  {
    wxControl::EnableVisibleFocus(param0);
    if (*m_wxControlExtEnableVisibleFocusbool != NULL){
      return m_wxControlExtEnableVisibleFocusbool(this, param0);
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
      return m_wxControlExtGetBestVirtualSize(this);
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
      return m_wxControlExtGetCharHeight(this);
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
      return m_wxControlExtGetCharWidth(this);
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
      return m_wxControlExtGetClassInfo(this);
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
      return m_wxControlExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxControlExtGetClientSizeConstraintintPintPFunc m_wxControlExtGetClientSizeConstraintintPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxControl::GetClientSizeConstraint(w, h);
    if (*m_wxControlExtGetClientSizeConstraintintPintP != NULL){
      return m_wxControlExtGetClientSizeConstraintintPintP(this, w, h);
    }
  }
  wxControlExtGetContentScaleFactorFunc m_wxControlExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxControl::GetContentScaleFactor();
    if (*m_wxControlExtGetContentScaleFactor != NULL){
      return m_wxControlExtGetContentScaleFactor(this);
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
      return m_wxControlExtGetDPI(this);
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
      return m_wxControlExtGetDPIScaleFactor(this);
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
      return m_wxControlExtGetDefaultAttributes(this);
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
      return m_wxControlExtGetDefaultBorder(this);
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
      return m_wxControlExtGetDefaultBorderForControl(this);
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
      return m_wxControlExtGetDropTarget(this);
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
      return m_wxControlExtGetEffectiveMinSize(this);
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
      return m_wxControlExtGetEventHashTable(this);
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
      return m_wxControlExtGetEventTable(this);
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
      return m_wxControlExtGetHandle(this);
    }
    else {
      return res;
    }
  }
  wxControlExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc m_wxControlExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxControl::GetHelpTextAtPoint(pt, origin);
    if (*m_wxControlExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin != NULL){
      return m_wxControlExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin(this, pt, origin);
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
      return m_wxControlExtGetLabel(this);
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
      return m_wxControlExtGetLabelText(this);
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
      return m_wxControlExtGetLayoutDirection(this);
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
      return m_wxControlExtGetMainWindowOfCompositeControl(this);
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
      return m_wxControlExtGetMaxClientSize(this);
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
      return m_wxControlExtGetMaxSize(this);
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
      return m_wxControlExtGetMinClientSize(this);
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
      return m_wxControlExtGetMinSize(this);
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
      return m_wxControlExtGetName(this);
    }
    else {
      return res;
    }
  }
  wxControlExtGetPositionConstraintintPintPFunc m_wxControlExtGetPositionConstraintintPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxControl::GetPositionConstraint(x, y);
    if (*m_wxControlExtGetPositionConstraintintPintP != NULL){
      return m_wxControlExtGetPositionConstraintintPintP(this, x, y);
    }
  }
  wxControlExtGetScrollPosintFunc m_wxControlExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxControl::GetScrollPos(orient);
    if (*m_wxControlExtGetScrollPosint != NULL){
      return m_wxControlExtGetScrollPosint(this, orient);
    }
    else {
      return res;
    }
  }
  wxControlExtGetScrollRangeintFunc m_wxControlExtGetScrollRangeint = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxControl::GetScrollRange(orient);
    if (*m_wxControlExtGetScrollRangeint != NULL){
      return m_wxControlExtGetScrollRangeint(this, orient);
    }
    else {
      return res;
    }
  }
  wxControlExtGetScrollThumbintFunc m_wxControlExtGetScrollThumbint = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxControl::GetScrollThumb(orient);
    if (*m_wxControlExtGetScrollThumbint != NULL){
      return m_wxControlExtGetScrollThumbint(this, orient);
    }
    else {
      return res;
    }
  }
  wxControlExtGetSizeConstraintintPintPFunc m_wxControlExtGetSizeConstraintintPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxControl::GetSizeConstraint(w, h);
    if (*m_wxControlExtGetSizeConstraintintPintP != NULL){
      return m_wxControlExtGetSizeConstraintintPintP(this, w, h);
    }
  }
  wxControlExtGetThemeEnabledFunc m_wxControlExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxControl::GetThemeEnabled();
    if (*m_wxControlExtGetThemeEnabled != NULL){
      return m_wxControlExtGetThemeEnabled(this);
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
      return m_wxControlExtGetValidator(this);
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
      return m_wxControlExtGetWindowBorderSize(this);
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
      return m_wxControlExtGetWindowStyleFlag(this);
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
      return m_wxControlExtHasCapture(this);
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
      return m_wxControlExtHasFocus(this);
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
      return m_wxControlExtHasMultiplePages(this);
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
      return m_wxControlExtHasTransparentBackground(this);
    }
    else {
      return res;
    }
  }
  wxControlExtHideWithEffectwxShowEffectunsignedintFunc m_wxControlExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxControl::HideWithEffect(param0, param1);
    if (*m_wxControlExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxControlExtHideWithEffectwxShowEffectunsignedint(this, param0, param1);
    }
    else {
      return res;
    }
  }
  wxControlExtInformFirstDirectionintintintFunc m_wxControlExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxControl::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxControlExtInformFirstDirectionintintint != NULL){
      return m_wxControlExtInformFirstDirectionintintint(this, direction, size, availableOtherDir);
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
  wxControlExtIsClientAreaChildwxWindowCPFunc m_wxControlExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* param0) const override
  {
    bool res = wxControl::IsClientAreaChild(param0);
    if (*m_wxControlExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxControlExtIsClientAreaChildwxWindowCP(this, param0);
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
      return m_wxControlExtIsDoubleBuffered(this);
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
      return m_wxControlExtIsRetained(this);
    }
    else {
      return res;
    }
  }
  wxControlExtIsScrollbarAlwaysShownintFunc m_wxControlExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int param0) const override
  {
    bool res = wxControl::IsScrollbarAlwaysShown(param0);
    if (*m_wxControlExtIsScrollbarAlwaysShownint != NULL){
      return m_wxControlExtIsScrollbarAlwaysShownint(this, param0);
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
      return m_wxControlExtIsShown(this);
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
      return m_wxControlExtIsShownOnScreen(this);
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
      return m_wxControlExtIsThisEnabled(this);
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
      return m_wxControlExtIsTopLevel(this);
    }
    else {
      return res;
    }
  }
  wxControlExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxControlExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind param0) const override
  {
    bool res = wxControl::IsTopNavigationDomain(param0);
    if (*m_wxControlExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxControlExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlExtIsTransparentBackgroundSupportedwxStringPFunc m_wxControlExtIsTransparentBackgroundSupportedwxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxControl::IsTransparentBackgroundSupported(reason);
    if (*m_wxControlExtIsTransparentBackgroundSupportedwxStringP != NULL){
      return m_wxControlExtIsTransparentBackgroundSupportedwxStringP(this, reason);
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
      return m_wxControlExtLayout(this);
    }
    else {
      return res;
    }
  }
  wxControlExtLayoutPhase1intPFunc m_wxControlExtLayoutPhase1intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxControl::LayoutPhase1(noChanges);
    if (*m_wxControlExtLayoutPhase1intP != NULL){
      return m_wxControlExtLayoutPhase1intP(this, noChanges);
    }
    else {
      return res;
    }
  }
  wxControlExtLayoutPhase2intPFunc m_wxControlExtLayoutPhase2intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxControl::LayoutPhase2(noChanges);
    if (*m_wxControlExtLayoutPhase2intP != NULL){
      return m_wxControlExtLayoutPhase2intP(this, noChanges);
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
  wxControlExtMoveConstraintintintFunc m_wxControlExtMoveConstraintintint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxControl::MoveConstraint(x, y);
    if (*m_wxControlExtMoveConstraintintint != NULL){
      return m_wxControlExtMoveConstraintintint(this, x, y);
    }
  }
  wxControlExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxControlExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxControl::OnDynamicBind(param0);
    if (*m_wxControlExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxControlExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
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
  wxControlExtPrepareDCwxDCRFunc m_wxControlExtPrepareDCwxDCR = NULL;
  virtual void PrepareDC(wxDC& param0) override
  {
    wxControl::PrepareDC(param0);
    if (*m_wxControlExtPrepareDCwxDCR != NULL){
      return m_wxControlExtPrepareDCwxDCR(this, param0);
    }
  }
  wxControlExtProcessEventwxEventRFunc m_wxControlExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxControl::ProcessEvent(event);
    if (*m_wxControlExtProcessEventwxEventR != NULL){
      return m_wxControlExtProcessEventwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxControlExtQueueEventwxEventPFunc m_wxControlExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxControl::QueueEvent(event);
    if (*m_wxControlExtQueueEventwxEventP != NULL){
      return m_wxControlExtQueueEventwxEventP(this, event);
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
  wxControlExtRefreshboolwxRectCPFunc m_wxControlExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = (const wxRect*)__null) override
  {
    wxControl::Refresh(eraseBackground, rect);
    if (*m_wxControlExtRefreshboolwxRectCP != NULL){
      return m_wxControlExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxControlExtRegisterHotKeyintintintFunc m_wxControlExtRegisterHotKeyintintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxControl::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxControlExtRegisterHotKeyintintint != NULL){
      return m_wxControlExtRegisterHotKeyintintint(this, hotkeyId, modifiers, keycode);
    }
    else {
      return res;
    }
  }
  wxControlExtRemoveChildwxWindowBasePFunc m_wxControlExtRemoveChildwxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxControl::RemoveChild(child);
    if (*m_wxControlExtRemoveChildwxWindowBaseP != NULL){
      return m_wxControlExtRemoveChildwxWindowBaseP(this, child);
    }
  }
  wxControlExtReparentwxWindowBasePFunc m_wxControlExtReparentwxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxControl::Reparent(newParent);
    if (*m_wxControlExtReparentwxWindowBaseP != NULL){
      return m_wxControlExtReparentwxWindowBaseP(this, newParent);
    }
    else {
      return res;
    }
  }
  wxControlExtScrollLinesintFunc m_wxControlExtScrollLinesint = NULL;
  virtual bool ScrollLines(int param0) override
  {
    bool res = wxControl::ScrollLines(param0);
    if (*m_wxControlExtScrollLinesint != NULL){
      return m_wxControlExtScrollLinesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlExtScrollPagesintFunc m_wxControlExtScrollPagesint = NULL;
  virtual bool ScrollPages(int param0) override
  {
    bool res = wxControl::ScrollPages(param0);
    if (*m_wxControlExtScrollPagesint != NULL){
      return m_wxControlExtScrollPagesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlExtScrollWindowintintwxRectCPFunc m_wxControlExtScrollWindowintintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxControl::ScrollWindow(dx, dy, rect);
    if (*m_wxControlExtScrollWindowintintwxRectCP != NULL){
      return m_wxControlExtScrollWindowintintwxRectCP(this, dx, dy, rect);
    }
  }
  wxControlExtSearchEventTablewxEventTableRwxEventRFunc m_wxControlExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxControl::SearchEventTable(table, event);
    if (*m_wxControlExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxControlExtSearchEventTablewxEventTableRwxEventR(this, table, event);
    }
    else {
      return res;
    }
  }
  wxControlExtSendIdleEventswxIdleEventRFunc m_wxControlExtSendIdleEventswxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxControl::SendIdleEvents(event);
    if (*m_wxControlExtSendIdleEventswxIdleEventR != NULL){
      return m_wxControlExtSendIdleEventswxIdleEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxControlExtSendSizeEventintFunc m_wxControlExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxControl::SendSizeEvent(flags);
    if (*m_wxControlExtSendSizeEventint != NULL){
      return m_wxControlExtSendSizeEventint(this, flags);
    }
  }
  wxControlExtSetAcceleratorTablewxAcceleratorTableCRFunc m_wxControlExtSetAcceleratorTablewxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxControl::SetAcceleratorTable(accel);
    if (*m_wxControlExtSetAcceleratorTablewxAcceleratorTableCR != NULL){
      return m_wxControlExtSetAcceleratorTablewxAcceleratorTableCR(this, accel);
    }
  }
  wxControlExtSetBackgroundColourwxColourCRFunc m_wxControlExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxControl::SetBackgroundColour(colour);
    if (*m_wxControlExtSetBackgroundColourwxColourCR != NULL){
      return m_wxControlExtSetBackgroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxControlExtSetBackgroundStylewxBackgroundStyleFunc m_wxControlExtSetBackgroundStylewxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxControl::SetBackgroundStyle(style);
    if (*m_wxControlExtSetBackgroundStylewxBackgroundStyle != NULL){
      return m_wxControlExtSetBackgroundStylewxBackgroundStyle(this, style);
    }
    else {
      return res;
    }
  }
  wxControlExtSetCanFocusboolFunc m_wxControlExtSetCanFocusbool = NULL;
  virtual void SetCanFocus(bool param0) override
  {
    wxControl::SetCanFocus(param0);
    if (*m_wxControlExtSetCanFocusbool != NULL){
      return m_wxControlExtSetCanFocusbool(this, param0);
    }
  }
  wxControlExtSetConstraintSizesboolFunc m_wxControlExtSetConstraintSizesbool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxControl::SetConstraintSizes(recurse);
    if (*m_wxControlExtSetConstraintSizesbool != NULL){
      return m_wxControlExtSetConstraintSizesbool(this, recurse);
    }
  }
  wxControlExtSetCursorwxCursorCRFunc m_wxControlExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxControl::SetCursor(cursor);
    if (*m_wxControlExtSetCursorwxCursorCR != NULL){
      return m_wxControlExtSetCursorwxCursorCR(this, cursor);
    }
    else {
      return res;
    }
  }
  wxControlExtSetDoubleBufferedboolFunc m_wxControlExtSetDoubleBufferedbool = NULL;
  virtual void SetDoubleBuffered(bool param0) override
  {
    wxControl::SetDoubleBuffered(param0);
    if (*m_wxControlExtSetDoubleBufferedbool != NULL){
      return m_wxControlExtSetDoubleBufferedbool(this, param0);
    }
  }
  wxControlExtSetDropTargetwxDropTargetPFunc m_wxControlExtSetDropTargetwxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxControl::SetDropTarget(dropTarget);
    if (*m_wxControlExtSetDropTargetwxDropTargetP != NULL){
      return m_wxControlExtSetDropTargetwxDropTargetP(this, dropTarget);
    }
  }
  wxControlExtSetExtraStylelongFunc m_wxControlExtSetExtraStylelong = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxControl::SetExtraStyle(exStyle);
    if (*m_wxControlExtSetExtraStylelong != NULL){
      return m_wxControlExtSetExtraStylelong(this, exStyle);
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
  wxControlExtSetFontwxFontCRFunc m_wxControlExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxControl::SetFont(font);
    if (*m_wxControlExtSetFontwxFontCR != NULL){
      return m_wxControlExtSetFontwxFontCR(this, font);
    }
    else {
      return res;
    }
  }
  wxControlExtSetForegroundColourwxColourCRFunc m_wxControlExtSetForegroundColourwxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxControl::SetForegroundColour(colour);
    if (*m_wxControlExtSetForegroundColourwxColourCR != NULL){
      return m_wxControlExtSetForegroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxControlExtSetIdwxWindowIDFunc m_wxControlExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxControl::SetId(winid);
    if (*m_wxControlExtSetIdwxWindowID != NULL){
      return m_wxControlExtSetIdwxWindowID(this, winid);
    }
  }
  wxControlExtSetLabelwxStringCRFunc m_wxControlExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxControl::SetLabel(label);
    if (*m_wxControlExtSetLabelwxStringCR != NULL){
      return m_wxControlExtSetLabelwxStringCR(this, label);
    }
  }
  wxControlExtSetLabelTextwxStringCRFunc m_wxControlExtSetLabelTextwxStringCR = NULL;
  virtual void SetLabelText(wxString const& text) override
  {
    wxControl::SetLabelText(text);
    if (*m_wxControlExtSetLabelTextwxStringCR != NULL){
      return m_wxControlExtSetLabelTextwxStringCR(this, text);
    }
  }
  wxControlExtSetLayoutDirectionwxLayoutDirectionFunc m_wxControlExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxControl::SetLayoutDirection(param0);
    if (*m_wxControlExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxControlExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxControlExtSetMaxClientSizewxSizeCRFunc m_wxControlExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxControl::SetMaxClientSize(size);
    if (*m_wxControlExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxControlExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxControlExtSetMaxSizewxSizeCRFunc m_wxControlExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxControl::SetMaxSize(maxSize);
    if (*m_wxControlExtSetMaxSizewxSizeCR != NULL){
      return m_wxControlExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxControlExtSetMinClientSizewxSizeCRFunc m_wxControlExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxControl::SetMinClientSize(size);
    if (*m_wxControlExtSetMinClientSizewxSizeCR != NULL){
      return m_wxControlExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxControlExtSetMinSizewxSizeCRFunc m_wxControlExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxControl::SetMinSize(minSize);
    if (*m_wxControlExtSetMinSizewxSizeCR != NULL){
      return m_wxControlExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxControlExtSetNamewxStringCRFunc m_wxControlExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxControl::SetName(name);
    if (*m_wxControlExtSetNamewxStringCR != NULL){
      return m_wxControlExtSetNamewxStringCR(this, name);
    }
  }
  wxControlExtSetNextHandlerwxEvtHandlerPFunc m_wxControlExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxControl::SetNextHandler(handler);
    if (*m_wxControlExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxControlExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxControlExtSetPreviousHandlerwxEvtHandlerPFunc m_wxControlExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxControl::SetPreviousHandler(handler);
    if (*m_wxControlExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxControlExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxControlExtSetScrollPosintintboolFunc m_wxControlExtSetScrollPosintintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxControl::SetScrollPos(orient, pos, refresh);
    if (*m_wxControlExtSetScrollPosintintbool != NULL){
      return m_wxControlExtSetScrollPosintintbool(this, orient, pos, refresh);
    }
  }
  wxControlExtSetScrollbarintintintintboolFunc m_wxControlExtSetScrollbarintintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbvisible, int range, bool refresh = true) override
  {
    wxControl::SetScrollbar(orient, pos, thumbvisible, range, refresh);
    if (*m_wxControlExtSetScrollbarintintintintbool != NULL){
      return m_wxControlExtSetScrollbarintintintintbool(this, orient, pos, thumbvisible, range, refresh);
    }
  }
  wxControlExtSetSizeConstraintintintintintFunc m_wxControlExtSetSizeConstraintintintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxControl::SetSizeConstraint(x, y, w, h);
    if (*m_wxControlExtSetSizeConstraintintintintint != NULL){
      return m_wxControlExtSetSizeConstraintintintintint(this, x, y, w, h);
    }
  }
  wxControlExtSetSizeHintsintintintintintintFunc m_wxControlExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxControl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxControlExtSetSizeHintsintintintintintint != NULL){
      return m_wxControlExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxControlExtSetThemeEnabledboolFunc m_wxControlExtSetThemeEnabledbool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxControl::SetThemeEnabled(enableTheme);
    if (*m_wxControlExtSetThemeEnabledbool != NULL){
      return m_wxControlExtSetThemeEnabledbool(this, enableTheme);
    }
  }
  wxControlExtSetTransparentwxByteFunc m_wxControlExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte param0) override
  {
    bool res = wxControl::SetTransparent(param0);
    if (*m_wxControlExtSetTransparentwxByte != NULL){
      return m_wxControlExtSetTransparentwxByte(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlExtSetValidatorwxValidatorCRFunc m_wxControlExtSetValidatorwxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxControl::SetValidator(validator);
    if (*m_wxControlExtSetValidatorwxValidatorCR != NULL){
      return m_wxControlExtSetValidatorwxValidatorCR(this, validator);
    }
  }
  wxControlExtSetWindowStyleFlaglongFunc m_wxControlExtSetWindowStyleFlaglong = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxControl::SetWindowStyleFlag(style);
    if (*m_wxControlExtSetWindowStyleFlaglong != NULL){
      return m_wxControlExtSetWindowStyleFlaglong(this, style);
    }
  }
  wxControlExtShouldInheritColoursFunc m_wxControlExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxControl::ShouldInheritColours();
    if (*m_wxControlExtShouldInheritColours != NULL){
      return m_wxControlExtShouldInheritColours(this);
    }
    else {
      return res;
    }
  }
  wxControlExtShowboolFunc m_wxControlExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxControl::Show(show);
    if (*m_wxControlExtShowbool != NULL){
      return m_wxControlExtShowbool(this, show);
    }
    else {
      return res;
    }
  }
  wxControlExtShowWithEffectwxShowEffectunsignedintFunc m_wxControlExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxControl::ShowWithEffect(param0, param1);
    if (*m_wxControlExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxControlExtShowWithEffectwxShowEffectunsignedint(this, param0, param1);
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
      return m_wxControlExtTransferDataFromWindow(this);
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
      return m_wxControlExtTransferDataToWindow(this);
    }
    else {
      return res;
    }
  }
  wxControlExtTryAfterwxEventRFunc m_wxControlExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxControl::TryAfter(event);
    if (*m_wxControlExtTryAfterwxEventR != NULL){
      return m_wxControlExtTryAfterwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxControlExtTryBeforewxEventRFunc m_wxControlExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxControl::TryBefore(event);
    if (*m_wxControlExtTryBeforewxEventR != NULL){
      return m_wxControlExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxControlExtUnregisterHotKeyintFunc m_wxControlExtUnregisterHotKeyint = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxControl::UnregisterHotKey(hotkeyId);
    if (*m_wxControlExtUnregisterHotKeyint != NULL){
      return m_wxControlExtUnregisterHotKeyint(this, hotkeyId);
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
  wxControlExtUpdateWindowUIlongFunc m_wxControlExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxControl::UpdateWindowUI(flags);
    if (*m_wxControlExtUpdateWindowUIlong != NULL){
      return m_wxControlExtUpdateWindowUIlong(this, flags);
    }
  }
  wxControlExtValidateFunc m_wxControlExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxControl::Validate();
    if (*m_wxControlExtValidate != NULL){
      return m_wxControlExtValidate(this);
    }
    else {
      return res;
    }
  }
  wxControlExtWXAdjustFontToOwnPPIwxFontRFunc m_wxControlExtWXAdjustFontToOwnPPIwxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& param0) const override
  {
    wxControl::WXAdjustFontToOwnPPI(param0);
    if (*m_wxControlExtWXAdjustFontToOwnPPIwxFontR != NULL){
      return m_wxControlExtWXAdjustFontToOwnPPIwxFontR(this, param0);
    }
  }
  wxControlExtWXGetTextEntryFunc m_wxControlExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxControl::WXGetTextEntry();
    if (*m_wxControlExtWXGetTextEntry != NULL){
      return m_wxControlExtWXGetTextEntry(this);
    }
    else {
      return res;
    }
  }
  wxControlExtWXReservedEvtHandler1voidPFunc m_wxControlExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxControl::WXReservedEvtHandler1(param0);
    if (*m_wxControlExtWXReservedEvtHandler1voidP != NULL){
      return m_wxControlExtWXReservedEvtHandler1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlExtWXReservedEvtHandler2voidPFunc m_wxControlExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxControl::WXReservedEvtHandler2(param0);
    if (*m_wxControlExtWXReservedEvtHandler2voidP != NULL){
      return m_wxControlExtWXReservedEvtHandler2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlExtWXReservedWindow1voidPFunc m_wxControlExtWXReservedWindow1voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxControl::WXReservedWindow1(param0);
    if (*m_wxControlExtWXReservedWindow1voidP != NULL){
      return m_wxControlExtWXReservedWindow1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlExtWXReservedWindow2voidPFunc m_wxControlExtWXReservedWindow2voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxControl::WXReservedWindow2(param0);
    if (*m_wxControlExtWXReservedWindow2voidP != NULL){
      return m_wxControlExtWXReservedWindow2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlExtWXReservedWindow3voidPFunc m_wxControlExtWXReservedWindow3voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxControl::WXReservedWindow3(param0);
    if (*m_wxControlExtWXReservedWindow3voidP != NULL){
      return m_wxControlExtWXReservedWindow3voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxControlExtWXSetInitialFittingClientSizeintwxSizerPFunc m_wxControlExtWXSetInitialFittingClientSizeintwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxControl::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxControlExtWXSetInitialFittingClientSizeintwxSizerP != NULL){
      return m_wxControlExtWXSetInitialFittingClientSizeintwxSizerP(this, flags, sizer);
    }
  }
  wxControlExtWarpPointerintintFunc m_wxControlExtWarpPointerintint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxControl::WarpPointer(x, y);
    if (*m_wxControlExtWarpPointerintint != NULL){
      return m_wxControlExtWarpPointerintint(this, x, y);
    }
  }
  wxControlExtWindowToClientSizewxSizeCRFunc m_wxControlExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxControl::WindowToClientSize(size);
    if (*m_wxControlExtWindowToClientSizewxSizeCR != NULL){
      return m_wxControlExtWindowToClientSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxControlExt(wxControlExtAcceptsFocusFunc a_AcceptsFocus, wxControlExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxControlExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxControlExtAddChildwxWindowBasePFunc a_AddChildwxWindowBaseP, wxControlExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxControlExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxControlExtAdjustForParentClientOriginintRintRintFunc a_AdjustForParentClientOriginintRintRint, wxControlExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxControlExtAssociateHandleWXWidgetFunc a_AssociateHandleWXWidget, wxControlExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxControlExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxControlExtCanBeFocusedFunc a_CanBeFocused, wxControlExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxControlExtCanScrollintFunc a_CanScrollint, wxControlExtCanSetTransparentFunc a_CanSetTransparent, wxControlExtClearBackgroundFunc a_ClearBackground, wxControlExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxControlExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxControlExtCommandwxCommandEventRFunc a_CommandwxCommandEventR, wxControlExtCreateRefDataFunc a_CreateRefData, wxControlExtDestroyFunc a_Destroy, wxControlExtDissociateHandleFunc a_DissociateHandle, wxControlExtDoCaptureMouseFunc a_DoCaptureMouse, wxControlExtDoCentreintFunc a_DoCentreint, wxControlExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxControlExtDoEnableboolFunc a_DoEnablebool, wxControlExtDoFreezeFunc a_DoFreeze, wxControlExtDoGetBestClientHeightintFunc a_DoGetBestClientHeightint, wxControlExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxControlExtDoGetBestClientWidthintFunc a_DoGetBestClientWidthint, wxControlExtDoGetBestSizeFunc a_DoGetBestSize, wxControlExtDoGetClientDataFunc a_DoGetClientData, wxControlExtDoGetClientObjectFunc a_DoGetClientObject, wxControlExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxControlExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxControlExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxControlExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxControlExtDoGetSizeFromTextSizeintintFunc a_DoGetSizeFromTextSizeintint, wxControlExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxControlExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxControlExtDoHitTestwxCoordwxCoordFunc a_DoHitTestwxCoordwxCoord, wxControlExtDoIsExposedintintintintFunc a_DoIsExposedintintintint, wxControlExtDoIsExposedintintFunc a_DoIsExposedintint, wxControlExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrderFunc a_DoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder, wxControlExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxControlExtDoNavigateInintFunc a_DoNavigateInint, wxControlExtDoPhaseintFunc a_DoPhaseint, wxControlExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxControlExtDoReleaseMouseFunc a_DoReleaseMouse, wxControlExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxControlExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxControlExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxControlExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxControlExtDoSetLabelMarkupwxStringCRFunc a_DoSetLabelMarkupwxStringCR, wxControlExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxControlExtDoSetSizeHintsintintintintintintFunc a_DoSetSizeHintsintintintintintint, wxControlExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxControlExtDoSetToolTipTextwxStringCRFunc a_DoSetToolTipTextwxStringCR, wxControlExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxControlExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxControlExtDoThawFunc a_DoThaw, wxControlExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxControlExtDragAcceptFilesboolFunc a_DragAcceptFilesbool, wxControlExtEnableboolFunc a_Enablebool, wxControlExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxControlExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxControlExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxControlExtFitFunc a_Fit, wxControlExtFitInsideFunc a_FitInside, wxControlExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxControlExtGetCharHeightFunc a_GetCharHeight, wxControlExtGetCharWidthFunc a_GetCharWidth, wxControlExtGetClassInfoFunc a_GetClassInfo, wxControlExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxControlExtGetClientSizeConstraintintPintPFunc a_GetClientSizeConstraintintPintP, wxControlExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxControlExtGetDPIFunc a_GetDPI, wxControlExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxControlExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxControlExtGetDefaultBorderFunc a_GetDefaultBorder, wxControlExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxControlExtGetDropTargetFunc a_GetDropTarget, wxControlExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxControlExtGetEventHashTableFunc a_GetEventHashTable, wxControlExtGetEventTableFunc a_GetEventTable, wxControlExtGetHandleFunc a_GetHandle, wxControlExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin, wxControlExtGetLabelFunc a_GetLabel, wxControlExtGetLabelTextFunc a_GetLabelText, wxControlExtGetLayoutDirectionFunc a_GetLayoutDirection, wxControlExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxControlExtGetMaxClientSizeFunc a_GetMaxClientSize, wxControlExtGetMaxSizeFunc a_GetMaxSize, wxControlExtGetMinClientSizeFunc a_GetMinClientSize, wxControlExtGetMinSizeFunc a_GetMinSize, wxControlExtGetNameFunc a_GetName, wxControlExtGetPositionConstraintintPintPFunc a_GetPositionConstraintintPintP, wxControlExtGetScrollPosintFunc a_GetScrollPosint, wxControlExtGetScrollRangeintFunc a_GetScrollRangeint, wxControlExtGetScrollThumbintFunc a_GetScrollThumbint, wxControlExtGetSizeConstraintintPintPFunc a_GetSizeConstraintintPintP, wxControlExtGetThemeEnabledFunc a_GetThemeEnabled, wxControlExtGetValidatorFunc a_GetValidator, wxControlExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxControlExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxControlExtHasCaptureFunc a_HasCapture, wxControlExtHasFocusFunc a_HasFocus, wxControlExtHasMultiplePagesFunc a_HasMultiplePages, wxControlExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxControlExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxControlExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxControlExtInheritAttributesFunc a_InheritAttributes, wxControlExtInitDialogFunc a_InitDialog, wxControlExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxControlExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxControlExtIsRetainedFunc a_IsRetained, wxControlExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxControlExtIsShownFunc a_IsShown, wxControlExtIsShownOnScreenFunc a_IsShownOnScreen, wxControlExtIsThisEnabledFunc a_IsThisEnabled, wxControlExtIsTopLevelFunc a_IsTopLevel, wxControlExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxControlExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxControlExtLayoutFunc a_Layout, wxControlExtLayoutPhase1intPFunc a_LayoutPhase1intP, wxControlExtLayoutPhase2intPFunc a_LayoutPhase2intP, wxControlExtLowerFunc a_Lower, wxControlExtMoveConstraintintintFunc a_MoveConstraintintint, wxControlExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxControlExtOnInternalIdleFunc a_OnInternalIdle, wxControlExtPrepareDCwxDCRFunc a_PrepareDCwxDCR, wxControlExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxControlExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxControlExtRaiseFunc a_Raise, wxControlExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxControlExtRegisterHotKeyintintintFunc a_RegisterHotKeyintintint, wxControlExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxControlExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxControlExtScrollLinesintFunc a_ScrollLinesint, wxControlExtScrollPagesintFunc a_ScrollPagesint, wxControlExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxControlExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxControlExtSendIdleEventswxIdleEventRFunc a_SendIdleEventswxIdleEventR, wxControlExtSendSizeEventintFunc a_SendSizeEventint, wxControlExtSetAcceleratorTablewxAcceleratorTableCRFunc a_SetAcceleratorTablewxAcceleratorTableCR, wxControlExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxControlExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxControlExtSetCanFocusboolFunc a_SetCanFocusbool, wxControlExtSetConstraintSizesboolFunc a_SetConstraintSizesbool, wxControlExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxControlExtSetDoubleBufferedboolFunc a_SetDoubleBufferedbool, wxControlExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxControlExtSetExtraStylelongFunc a_SetExtraStylelong, wxControlExtSetFocusFunc a_SetFocus, wxControlExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxControlExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxControlExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxControlExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxControlExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxControlExtSetLabelTextwxStringCRFunc a_SetLabelTextwxStringCR, wxControlExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxControlExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxControlExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxControlExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxControlExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxControlExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxControlExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxControlExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxControlExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxControlExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxControlExtSetSizeConstraintintintintintFunc a_SetSizeConstraintintintintint, wxControlExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxControlExtSetThemeEnabledboolFunc a_SetThemeEnabledbool, wxControlExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxControlExtSetValidatorwxValidatorCRFunc a_SetValidatorwxValidatorCR, wxControlExtSetWindowStyleFlaglongFunc a_SetWindowStyleFlaglong, wxControlExtShouldInheritColoursFunc a_ShouldInheritColours, wxControlExtShowboolFunc a_Showbool, wxControlExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxControlExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxControlExtTransferDataToWindowFunc a_TransferDataToWindow, wxControlExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxControlExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxControlExtUnregisterHotKeyintFunc a_UnregisterHotKeyint, wxControlExtUpdateFunc a_Update, wxControlExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxControlExtValidateFunc a_Validate, wxControlExtWXAdjustFontToOwnPPIwxFontRFunc a_WXAdjustFontToOwnPPIwxFontR, wxControlExtWXGetTextEntryFunc a_WXGetTextEntry, wxControlExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxControlExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxControlExtWXReservedWindow1voidPFunc a_WXReservedWindow1voidP, wxControlExtWXReservedWindow2voidPFunc a_WXReservedWindow2voidP, wxControlExtWXReservedWindow3voidPFunc a_WXReservedWindow3voidP, wxControlExtWXSetInitialFittingClientSizeintwxSizerPFunc a_WXSetInitialFittingClientSizeintwxSizerP, wxControlExtWarpPointerintintFunc a_WarpPointerintint, wxControlExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxControl() {
    m_wxControlExtAcceptsFocus = a_AcceptsFocus;
    m_wxControlExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxControlExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxControlExtAddChildwxWindowBaseP = a_AddChildwxWindowBaseP;
    m_wxControlExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxControlExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxControlExtAdjustForParentClientOriginintRintRint = a_AdjustForParentClientOriginintRintRint;
    m_wxControlExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxControlExtAssociateHandleWXWidget = a_AssociateHandleWXWidget;
    m_wxControlExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxControlExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxControlExtCanBeFocused = a_CanBeFocused;
    m_wxControlExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxControlExtCanScrollint = a_CanScrollint;
    m_wxControlExtCanSetTransparent = a_CanSetTransparent;
    m_wxControlExtClearBackground = a_ClearBackground;
    m_wxControlExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxControlExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxControlExtCommandwxCommandEventR = a_CommandwxCommandEventR;
    m_wxControlExtCreateRefData = a_CreateRefData;
    m_wxControlExtDestroy = a_Destroy;
    m_wxControlExtDissociateHandle = a_DissociateHandle;
    m_wxControlExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxControlExtDoCentreint = a_DoCentreint;
    m_wxControlExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxControlExtDoEnablebool = a_DoEnablebool;
    m_wxControlExtDoFreeze = a_DoFreeze;
    m_wxControlExtDoGetBestClientHeightint = a_DoGetBestClientHeightint;
    m_wxControlExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxControlExtDoGetBestClientWidthint = a_DoGetBestClientWidthint;
    m_wxControlExtDoGetBestSize = a_DoGetBestSize;
    m_wxControlExtDoGetClientData = a_DoGetClientData;
    m_wxControlExtDoGetClientObject = a_DoGetClientObject;
    m_wxControlExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxControlExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxControlExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxControlExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxControlExtDoGetSizeFromTextSizeintint = a_DoGetSizeFromTextSizeintint;
    m_wxControlExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxControlExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxControlExtDoHitTestwxCoordwxCoord = a_DoHitTestwxCoordwxCoord;
    m_wxControlExtDoIsExposedintintintint = a_DoIsExposedintintintint;
    m_wxControlExtDoIsExposedintint = a_DoIsExposedintint;
    m_wxControlExtDoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder = a_DoMoveInTabOrderwxWindowPwxWindowBaseNWindowOrder;
    m_wxControlExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxControlExtDoNavigateInint = a_DoNavigateInint;
    m_wxControlExtDoPhaseint = a_DoPhaseint;
    m_wxControlExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxControlExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxControlExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxControlExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxControlExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxControlExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxControlExtDoSetLabelMarkupwxStringCR = a_DoSetLabelMarkupwxStringCR;
    m_wxControlExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxControlExtDoSetSizeHintsintintintintintint = a_DoSetSizeHintsintintintintintint;
    m_wxControlExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxControlExtDoSetToolTipTextwxStringCR = a_DoSetToolTipTextwxStringCR;
    m_wxControlExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxControlExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxControlExtDoThaw = a_DoThaw;
    m_wxControlExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxControlExtDragAcceptFilesbool = a_DragAcceptFilesbool;
    m_wxControlExtEnablebool = a_Enablebool;
    m_wxControlExtEnableTouchEventsint = a_EnableTouchEventsint;
    m_wxControlExtEnableVisibleFocusbool = a_EnableVisibleFocusbool;
    m_wxControlExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxControlExtFit = a_Fit;
    m_wxControlExtFitInside = a_FitInside;
    m_wxControlExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxControlExtGetCharHeight = a_GetCharHeight;
    m_wxControlExtGetCharWidth = a_GetCharWidth;
    m_wxControlExtGetClassInfo = a_GetClassInfo;
    m_wxControlExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxControlExtGetClientSizeConstraintintPintP = a_GetClientSizeConstraintintPintP;
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
    m_wxControlExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin;
    m_wxControlExtGetLabel = a_GetLabel;
    m_wxControlExtGetLabelText = a_GetLabelText;
    m_wxControlExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxControlExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxControlExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxControlExtGetMaxSize = a_GetMaxSize;
    m_wxControlExtGetMinClientSize = a_GetMinClientSize;
    m_wxControlExtGetMinSize = a_GetMinSize;
    m_wxControlExtGetName = a_GetName;
    m_wxControlExtGetPositionConstraintintPintP = a_GetPositionConstraintintPintP;
    m_wxControlExtGetScrollPosint = a_GetScrollPosint;
    m_wxControlExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxControlExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxControlExtGetSizeConstraintintPintP = a_GetSizeConstraintintPintP;
    m_wxControlExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxControlExtGetValidator = a_GetValidator;
    m_wxControlExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxControlExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxControlExtHasCapture = a_HasCapture;
    m_wxControlExtHasFocus = a_HasFocus;
    m_wxControlExtHasMultiplePages = a_HasMultiplePages;
    m_wxControlExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxControlExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxControlExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxControlExtInheritAttributes = a_InheritAttributes;
    m_wxControlExtInitDialog = a_InitDialog;
    m_wxControlExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxControlExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxControlExtIsRetained = a_IsRetained;
    m_wxControlExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxControlExtIsShown = a_IsShown;
    m_wxControlExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxControlExtIsThisEnabled = a_IsThisEnabled;
    m_wxControlExtIsTopLevel = a_IsTopLevel;
    m_wxControlExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxControlExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxControlExtLayout = a_Layout;
    m_wxControlExtLayoutPhase1intP = a_LayoutPhase1intP;
    m_wxControlExtLayoutPhase2intP = a_LayoutPhase2intP;
    m_wxControlExtLower = a_Lower;
    m_wxControlExtMoveConstraintintint = a_MoveConstraintintint;
    m_wxControlExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxControlExtOnInternalIdle = a_OnInternalIdle;
    m_wxControlExtPrepareDCwxDCR = a_PrepareDCwxDCR;
    m_wxControlExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxControlExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxControlExtRaise = a_Raise;
    m_wxControlExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxControlExtRegisterHotKeyintintint = a_RegisterHotKeyintintint;
    m_wxControlExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxControlExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxControlExtScrollLinesint = a_ScrollLinesint;
    m_wxControlExtScrollPagesint = a_ScrollPagesint;
    m_wxControlExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxControlExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxControlExtSendIdleEventswxIdleEventR = a_SendIdleEventswxIdleEventR;
    m_wxControlExtSendSizeEventint = a_SendSizeEventint;
    m_wxControlExtSetAcceleratorTablewxAcceleratorTableCR = a_SetAcceleratorTablewxAcceleratorTableCR;
    m_wxControlExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxControlExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxControlExtSetCanFocusbool = a_SetCanFocusbool;
    m_wxControlExtSetConstraintSizesbool = a_SetConstraintSizesbool;
    m_wxControlExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxControlExtSetDoubleBufferedbool = a_SetDoubleBufferedbool;
    m_wxControlExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxControlExtSetExtraStylelong = a_SetExtraStylelong;
    m_wxControlExtSetFocus = a_SetFocus;
    m_wxControlExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxControlExtSetFontwxFontCR = a_SetFontwxFontCR;
    m_wxControlExtSetForegroundColourwxColourCR = a_SetForegroundColourwxColourCR;
    m_wxControlExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxControlExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxControlExtSetLabelTextwxStringCR = a_SetLabelTextwxStringCR;
    m_wxControlExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxControlExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxControlExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxControlExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxControlExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxControlExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxControlExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxControlExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxControlExtSetScrollPosintintbool = a_SetScrollPosintintbool;
    m_wxControlExtSetScrollbarintintintintbool = a_SetScrollbarintintintintbool;
    m_wxControlExtSetSizeConstraintintintintint = a_SetSizeConstraintintintintint;
    m_wxControlExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxControlExtSetThemeEnabledbool = a_SetThemeEnabledbool;
    m_wxControlExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxControlExtSetValidatorwxValidatorCR = a_SetValidatorwxValidatorCR;
    m_wxControlExtSetWindowStyleFlaglong = a_SetWindowStyleFlaglong;
    m_wxControlExtShouldInheritColours = a_ShouldInheritColours;
    m_wxControlExtShowbool = a_Showbool;
    m_wxControlExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxControlExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxControlExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxControlExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxControlExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxControlExtUnregisterHotKeyint = a_UnregisterHotKeyint;
    m_wxControlExtUpdate = a_Update;
    m_wxControlExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxControlExtValidate = a_Validate;
    m_wxControlExtWXAdjustFontToOwnPPIwxFontR = a_WXAdjustFontToOwnPPIwxFontR;
    m_wxControlExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxControlExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxControlExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxControlExtWXReservedWindow1voidP = a_WXReservedWindow1voidP;
    m_wxControlExtWXReservedWindow2voidP = a_WXReservedWindow2voidP;
    m_wxControlExtWXReservedWindow3voidP = a_WXReservedWindow3voidP;
    m_wxControlExtWXSetInitialFittingClientSizeintwxSizerP = a_WXSetInitialFittingClientSizeintwxSizerP;
    m_wxControlExtWarpPointerintint = a_WarpPointerintint;
    m_wxControlExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
  }
};



#endif
