#ifndef _WX_PANEL_H_EXT_
#define _WX_PANEL_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxNavigationEnabledWindowExt;
typedef bool (*wxNavigationEnabledWindowExtAcceptsFocusFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtAcceptsFocusFromKeyboardFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtAcceptsFocusRecursivelyFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtAddChildwxWindowBasePFunc)(const wxNavigationEnabledWindowExt* self, wxWindowBase* child);
typedef void (*wxNavigationEnabledWindowExtAddPendingEventwxEventCRFunc)(const wxNavigationEnabledWindowExt* self, wxEvent const& event);
typedef wxCoord (*wxNavigationEnabledWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxNavigationEnabledWindowExt* self, wxCoord x, wxCoord width, wxCoord widthTotal);
typedef void (*wxNavigationEnabledWindowExtAdjustForParentClientOriginintRintRintFunc)(const wxNavigationEnabledWindowExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxNavigationEnabledWindowExtAlwaysShowScrollbarsboolboolFunc)(const wxNavigationEnabledWindowExt* self, bool param0, bool param1);
typedef void (*wxNavigationEnabledWindowExtAssociateHandleWXWidgetFunc)(const wxNavigationEnabledWindowExt* self, WXWidget param0);
typedef bool (*wxNavigationEnabledWindowExtBeginRepositioningChildrenFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtCanApplyThemeBorderFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtCanBeFocusedFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtCanBeOutsideClientAreaFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtCanScrollintFunc)(const wxNavigationEnabledWindowExt* self, int orient);
typedef bool (*wxNavigationEnabledWindowExtCanSetTransparentFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtClearBackgroundFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtClientToWindowSizewxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& size);
typedef wxObjectRefData* (*wxNavigationEnabledWindowExtCloneRefDatawxObjectRefDataCPFunc)(const wxNavigationEnabledWindowExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxNavigationEnabledWindowExtCreateRefDataFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtDestroyFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtDissociateHandleFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtDoCaptureMouseFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtDoCentreintFunc)(const wxNavigationEnabledWindowExt* self, int dir);
typedef void (*wxNavigationEnabledWindowExtDoClientToScreenintPintPFunc)(const wxNavigationEnabledWindowExt* self, int* x, int* y);
typedef void (*wxNavigationEnabledWindowExtDoEnableboolFunc)(const wxNavigationEnabledWindowExt* self, bool param0);
typedef void (*wxNavigationEnabledWindowExtDoFreezeFunc)(const wxNavigationEnabledWindowExt* self);
typedef int (*wxNavigationEnabledWindowExtDoGetBestClientHeightintFunc)(const wxNavigationEnabledWindowExt* self, int param0);
typedef wxSize (*wxNavigationEnabledWindowExtDoGetBestClientSizeFunc)(const wxNavigationEnabledWindowExt* self);
typedef int (*wxNavigationEnabledWindowExtDoGetBestClientWidthintFunc)(const wxNavigationEnabledWindowExt* self, int param0);
typedef wxSize (*wxNavigationEnabledWindowExtDoGetBestSizeFunc)(const wxNavigationEnabledWindowExt* self);
typedef void* (*wxNavigationEnabledWindowExtDoGetClientDataFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxClientData* (*wxNavigationEnabledWindowExtDoGetClientObjectFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtDoGetClientSizeintPintPFunc)(const wxNavigationEnabledWindowExt* self, int* width, int* height);
typedef void (*wxNavigationEnabledWindowExtDoGetPositionintPintPFunc)(const wxNavigationEnabledWindowExt* self, int* x, int* y);
typedef void (*wxNavigationEnabledWindowExtDoGetScreenPositionintPintPFunc)(const wxNavigationEnabledWindowExt* self, int* x, int* y);
typedef void (*wxNavigationEnabledWindowExtDoGetSizeintPintPFunc)(const wxNavigationEnabledWindowExt* self, int* width, int* height);
typedef void (*wxNavigationEnabledWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxNavigationEnabledWindowExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* font);
typedef wxSize (*wxNavigationEnabledWindowExtDoGetVirtualSizeFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxHitTest (*wxNavigationEnabledWindowExtDoHitTestwxCoordwxCoordFunc)(const wxNavigationEnabledWindowExt* self, wxCoord x, wxCoord y);
typedef bool (*wxNavigationEnabledWindowExtDoIsExposedintintintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y, int w, int h);
typedef bool (*wxNavigationEnabledWindowExtDoIsExposedintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y);
typedef void (*wxNavigationEnabledWindowExtDoMoveWindowintintintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y, int width, int height);
typedef bool (*wxNavigationEnabledWindowExtDoNavigateInintFunc)(const wxNavigationEnabledWindowExt* self, int flags);
typedef bool (*wxNavigationEnabledWindowExtDoPhaseintFunc)(const wxNavigationEnabledWindowExt* self, int phase);
typedef bool (*wxNavigationEnabledWindowExtDoPopupMenuwxMenuPintintFunc)(const wxNavigationEnabledWindowExt* self, wxMenu* menu, int x, int y);
typedef void (*wxNavigationEnabledWindowExtDoReleaseMouseFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtDoScreenToClientintPintPFunc)(const wxNavigationEnabledWindowExt* self, int* x, int* y);
typedef void (*wxNavigationEnabledWindowExtDoSetClientDatavoidPFunc)(const wxNavigationEnabledWindowExt* self, void* data);
typedef void (*wxNavigationEnabledWindowExtDoSetClientObjectwxClientDataPFunc)(const wxNavigationEnabledWindowExt* self, wxClientData* data);
typedef void (*wxNavigationEnabledWindowExtDoSetClientSizeintintFunc)(const wxNavigationEnabledWindowExt* self, int width, int height);
typedef void (*wxNavigationEnabledWindowExtDoSetSizeintintintintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxNavigationEnabledWindowExtDoSetSizeHintsintintintintintintFunc)(const wxNavigationEnabledWindowExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxNavigationEnabledWindowExtDoSetToolTipwxToolTipPFunc)(const wxNavigationEnabledWindowExt* self, wxToolTip* tip);
typedef void (*wxNavigationEnabledWindowExtDoSetToolTipTextwxStringCRFunc)(const wxNavigationEnabledWindowExt* self, wxString const& tip);
typedef void (*wxNavigationEnabledWindowExtDoSetVirtualSizeintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y);
typedef void (*wxNavigationEnabledWindowExtDoSetWindowVariantwxWindowVariantFunc)(const wxNavigationEnabledWindowExt* self, wxWindowVariant variant);
typedef void (*wxNavigationEnabledWindowExtDoThawFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxNavigationEnabledWindowExt* self, wxUpdateUIEvent& event);
typedef void (*wxNavigationEnabledWindowExtDragAcceptFilesboolFunc)(const wxNavigationEnabledWindowExt* self, bool accept);
typedef bool (*wxNavigationEnabledWindowExtEnableboolFunc)(const wxNavigationEnabledWindowExt* self, bool enable);
typedef bool (*wxNavigationEnabledWindowExtEnableTouchEventsintFunc)(const wxNavigationEnabledWindowExt* self, int param0);
typedef void (*wxNavigationEnabledWindowExtEnableVisibleFocusboolFunc)(const wxNavigationEnabledWindowExt* self, bool param0);
typedef void (*wxNavigationEnabledWindowExtEndRepositioningChildrenFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtFitFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtFitInsideFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtGetBestVirtualSizeFunc)(const wxNavigationEnabledWindowExt* self);
typedef int (*wxNavigationEnabledWindowExtGetCharHeightFunc)(const wxNavigationEnabledWindowExt* self);
typedef int (*wxNavigationEnabledWindowExtGetCharWidthFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxClassInfo* (*wxNavigationEnabledWindowExtGetClassInfoFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxPoint (*wxNavigationEnabledWindowExtGetClientAreaOriginFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtGetClientSizeConstraintintPintPFunc)(const wxNavigationEnabledWindowExt* self, int* w, int* h);
typedef double (*wxNavigationEnabledWindowExtGetContentScaleFactorFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtGetDPIFunc)(const wxNavigationEnabledWindowExt* self);
typedef double (*wxNavigationEnabledWindowExtGetDPIScaleFactorFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxVisualAttributes (*wxNavigationEnabledWindowExtGetDefaultAttributesFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxBorder (*wxNavigationEnabledWindowExtGetDefaultBorderFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxBorder (*wxNavigationEnabledWindowExtGetDefaultBorderForControlFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxDropTarget* (*wxNavigationEnabledWindowExtGetDropTargetFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtGetEffectiveMinSizeFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxEventHashTable& (*wxNavigationEnabledWindowExtGetEventHashTableFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxEventTable const* (*wxNavigationEnabledWindowExtGetEventTableFunc)(const wxNavigationEnabledWindowExt* self);
typedef WXWidget (*wxNavigationEnabledWindowExtGetHandleFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxString (*wxNavigationEnabledWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc)(const wxNavigationEnabledWindowExt* self, wxPoint const& pt, wxHelpEvent::Origin origin);
typedef wxString (*wxNavigationEnabledWindowExtGetLabelFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxLayoutDirection (*wxNavigationEnabledWindowExtGetLayoutDirectionFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxWindow* (*wxNavigationEnabledWindowExtGetMainWindowOfCompositeControlFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtGetMaxClientSizeFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtGetMaxSizeFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtGetMinClientSizeFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtGetMinSizeFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxString (*wxNavigationEnabledWindowExtGetNameFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtGetPositionConstraintintPintPFunc)(const wxNavigationEnabledWindowExt* self, int* x, int* y);
typedef int (*wxNavigationEnabledWindowExtGetScrollPosintFunc)(const wxNavigationEnabledWindowExt* self, int orient);
typedef int (*wxNavigationEnabledWindowExtGetScrollRangeintFunc)(const wxNavigationEnabledWindowExt* self, int orient);
typedef int (*wxNavigationEnabledWindowExtGetScrollThumbintFunc)(const wxNavigationEnabledWindowExt* self, int orient);
typedef void (*wxNavigationEnabledWindowExtGetSizeConstraintintPintPFunc)(const wxNavigationEnabledWindowExt* self, int* w, int* h);
typedef bool (*wxNavigationEnabledWindowExtGetThemeEnabledFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxValidator* (*wxNavigationEnabledWindowExtGetValidatorFunc)(const wxNavigationEnabledWindowExt* self);
typedef wxSize (*wxNavigationEnabledWindowExtGetWindowBorderSizeFunc)(const wxNavigationEnabledWindowExt* self);
typedef long (*wxNavigationEnabledWindowExtGetWindowStyleFlagFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtHasCaptureFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtHasFocusFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtHasMultiplePagesFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtHasTransparentBackgroundFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtHideWithEffectwxShowEffectunsignedintFunc)(const wxNavigationEnabledWindowExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxNavigationEnabledWindowExtInformFirstDirectionintintintFunc)(const wxNavigationEnabledWindowExt* self, int direction, int size, int availableOtherDir);
typedef void (*wxNavigationEnabledWindowExtInheritAttributesFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtInitDialogFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtIsClientAreaChildwxWindowCPFunc)(const wxNavigationEnabledWindowExt* self, wxWindow const* param0);
typedef bool (*wxNavigationEnabledWindowExtIsDoubleBufferedFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtIsRetainedFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtIsScrollbarAlwaysShownintFunc)(const wxNavigationEnabledWindowExt* self, int param0);
typedef bool (*wxNavigationEnabledWindowExtIsShownFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtIsShownOnScreenFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtIsThisEnabledFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtIsTopLevelFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxNavigationEnabledWindowExt* self, wxWindowBase::NavigationKind param0);
typedef bool (*wxNavigationEnabledWindowExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxNavigationEnabledWindowExt* self, wxString* reason);
typedef bool (*wxNavigationEnabledWindowExtLayoutFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtLayoutPhase1intPFunc)(const wxNavigationEnabledWindowExt* self, int* noChanges);
typedef bool (*wxNavigationEnabledWindowExtLayoutPhase2intPFunc)(const wxNavigationEnabledWindowExt* self, int* noChanges);
typedef void (*wxNavigationEnabledWindowExtLowerFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtMoveConstraintintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y);
typedef bool (*wxNavigationEnabledWindowExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxNavigationEnabledWindowExt* self, wxDynamicEventTableEntry& param0);
typedef void (*wxNavigationEnabledWindowExtOnInternalIdleFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtPrepareDCwxDCRFunc)(const wxNavigationEnabledWindowExt* self, wxDC& param0);
typedef bool (*wxNavigationEnabledWindowExtProcessEventwxEventRFunc)(const wxNavigationEnabledWindowExt* self, wxEvent& event);
typedef void (*wxNavigationEnabledWindowExtQueueEventwxEventPFunc)(const wxNavigationEnabledWindowExt* self, wxEvent* event);
typedef void (*wxNavigationEnabledWindowExtRaiseFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtRefreshboolwxRectCPFunc)(const wxNavigationEnabledWindowExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxNavigationEnabledWindowExtRegisterHotKeyintintintFunc)(const wxNavigationEnabledWindowExt* self, int hotkeyId, int modifiers, int keycode);
typedef void (*wxNavigationEnabledWindowExtRemoveChildwxWindowBasePFunc)(const wxNavigationEnabledWindowExt* self, wxWindowBase* child);
typedef bool (*wxNavigationEnabledWindowExtReparentwxWindowBasePFunc)(const wxNavigationEnabledWindowExt* self, wxWindowBase* newParent);
typedef bool (*wxNavigationEnabledWindowExtScrollLinesintFunc)(const wxNavigationEnabledWindowExt* self, int param0);
typedef bool (*wxNavigationEnabledWindowExtScrollPagesintFunc)(const wxNavigationEnabledWindowExt* self, int param0);
typedef void (*wxNavigationEnabledWindowExtScrollWindowintintwxRectCPFunc)(const wxNavigationEnabledWindowExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxNavigationEnabledWindowExtSearchEventTablewxEventTableRwxEventRFunc)(const wxNavigationEnabledWindowExt* self, wxEventTable& table, wxEvent& event);
typedef bool (*wxNavigationEnabledWindowExtSendIdleEventswxIdleEventRFunc)(const wxNavigationEnabledWindowExt* self, wxIdleEvent& event);
typedef void (*wxNavigationEnabledWindowExtSendSizeEventintFunc)(const wxNavigationEnabledWindowExt* self, int flags);
typedef void (*wxNavigationEnabledWindowExtSetAcceleratorTablewxAcceleratorTableCRFunc)(const wxNavigationEnabledWindowExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxNavigationEnabledWindowExtSetBackgroundColourwxColourCRFunc)(const wxNavigationEnabledWindowExt* self, wxColour const& colour);
typedef bool (*wxNavigationEnabledWindowExtSetBackgroundStylewxBackgroundStyleFunc)(const wxNavigationEnabledWindowExt* self, wxBackgroundStyle style);
typedef void (*wxNavigationEnabledWindowExtSetCanFocusboolFunc)(const wxNavigationEnabledWindowExt* self, bool param0);
typedef void (*wxNavigationEnabledWindowExtSetConstraintSizesboolFunc)(const wxNavigationEnabledWindowExt* self, bool recurse);
typedef bool (*wxNavigationEnabledWindowExtSetCursorwxCursorCRFunc)(const wxNavigationEnabledWindowExt* self, wxCursor const& cursor);
typedef void (*wxNavigationEnabledWindowExtSetDoubleBufferedboolFunc)(const wxNavigationEnabledWindowExt* self, bool param0);
typedef void (*wxNavigationEnabledWindowExtSetDropTargetwxDropTargetPFunc)(const wxNavigationEnabledWindowExt* self, wxDropTarget* dropTarget);
typedef void (*wxNavigationEnabledWindowExtSetExtraStylelongFunc)(const wxNavigationEnabledWindowExt* self, long exStyle);
typedef void (*wxNavigationEnabledWindowExtSetFocusFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtSetFocusFromKbdFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtSetFontwxFontCRFunc)(const wxNavigationEnabledWindowExt* self, wxFont const& font);
typedef bool (*wxNavigationEnabledWindowExtSetForegroundColourwxColourCRFunc)(const wxNavigationEnabledWindowExt* self, wxColour const& colour);
typedef void (*wxNavigationEnabledWindowExtSetIdwxWindowIDFunc)(const wxNavigationEnabledWindowExt* self, wxWindowID winid);
typedef void (*wxNavigationEnabledWindowExtSetLabelwxStringCRFunc)(const wxNavigationEnabledWindowExt* self, wxString const& label);
typedef void (*wxNavigationEnabledWindowExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxNavigationEnabledWindowExt* self, wxLayoutDirection param0);
typedef void (*wxNavigationEnabledWindowExtSetMaxClientSizewxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& size);
typedef void (*wxNavigationEnabledWindowExtSetMaxSizewxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& maxSize);
typedef void (*wxNavigationEnabledWindowExtSetMinClientSizewxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& size);
typedef void (*wxNavigationEnabledWindowExtSetMinSizewxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& minSize);
typedef void (*wxNavigationEnabledWindowExtSetNamewxStringCRFunc)(const wxNavigationEnabledWindowExt* self, wxString const& name);
typedef void (*wxNavigationEnabledWindowExtSetNextHandlerwxEvtHandlerPFunc)(const wxNavigationEnabledWindowExt* self, wxEvtHandler* handler);
typedef void (*wxNavigationEnabledWindowExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxNavigationEnabledWindowExt* self, wxEvtHandler* handler);
typedef void (*wxNavigationEnabledWindowExtSetScrollPosintintboolFunc)(const wxNavigationEnabledWindowExt* self, int orient, int pos, bool refresh);
typedef void (*wxNavigationEnabledWindowExtSetScrollbarintintintintboolFunc)(const wxNavigationEnabledWindowExt* self, int orient, int pos, int thumbvisible, int range, bool refresh);
typedef void (*wxNavigationEnabledWindowExtSetSizeConstraintintintintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y, int w, int h);
typedef void (*wxNavigationEnabledWindowExtSetSizeHintsintintintintintintFunc)(const wxNavigationEnabledWindowExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxNavigationEnabledWindowExtSetThemeEnabledboolFunc)(const wxNavigationEnabledWindowExt* self, bool enableTheme);
typedef bool (*wxNavigationEnabledWindowExtSetTransparentwxByteFunc)(const wxNavigationEnabledWindowExt* self, wxByte param0);
typedef void (*wxNavigationEnabledWindowExtSetValidatorwxValidatorCRFunc)(const wxNavigationEnabledWindowExt* self, wxValidator const& validator);
typedef void (*wxNavigationEnabledWindowExtSetWindowStyleFlaglongFunc)(const wxNavigationEnabledWindowExt* self, long style);
typedef bool (*wxNavigationEnabledWindowExtShouldInheritColoursFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtShowboolFunc)(const wxNavigationEnabledWindowExt* self, bool show);
typedef bool (*wxNavigationEnabledWindowExtShowWithEffectwxShowEffectunsignedintFunc)(const wxNavigationEnabledWindowExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxNavigationEnabledWindowExtTransferDataFromWindowFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtTransferDataToWindowFunc)(const wxNavigationEnabledWindowExt* self);
typedef bool (*wxNavigationEnabledWindowExtTryAfterwxEventRFunc)(const wxNavigationEnabledWindowExt* self, wxEvent& event);
typedef bool (*wxNavigationEnabledWindowExtTryBeforewxEventRFunc)(const wxNavigationEnabledWindowExt* self, wxEvent& event);
typedef bool (*wxNavigationEnabledWindowExtUnregisterHotKeyintFunc)(const wxNavigationEnabledWindowExt* self, int hotkeyId);
typedef void (*wxNavigationEnabledWindowExtUpdateFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtUpdateWindowUIlongFunc)(const wxNavigationEnabledWindowExt* self, long flags);
typedef bool (*wxNavigationEnabledWindowExtValidateFunc)(const wxNavigationEnabledWindowExt* self);
typedef void (*wxNavigationEnabledWindowExtWXAdjustFontToOwnPPIwxFontRFunc)(const wxNavigationEnabledWindowExt* self, wxFont& param0);
typedef wxTextEntry const* (*wxNavigationEnabledWindowExtWXGetTextEntryFunc)(const wxNavigationEnabledWindowExt* self);
typedef void* (*wxNavigationEnabledWindowExtWXReservedEvtHandler1voidPFunc)(const wxNavigationEnabledWindowExt* self, void* param0);
typedef void* (*wxNavigationEnabledWindowExtWXReservedEvtHandler2voidPFunc)(const wxNavigationEnabledWindowExt* self, void* param0);
typedef void* (*wxNavigationEnabledWindowExtWXReservedWindow1voidPFunc)(const wxNavigationEnabledWindowExt* self, void* param0);
typedef void* (*wxNavigationEnabledWindowExtWXReservedWindow2voidPFunc)(const wxNavigationEnabledWindowExt* self, void* param0);
typedef void* (*wxNavigationEnabledWindowExtWXReservedWindow3voidPFunc)(const wxNavigationEnabledWindowExt* self, void* param0);
typedef void (*wxNavigationEnabledWindowExtWXSetInitialFittingClientSizeintwxSizerPFunc)(const wxNavigationEnabledWindowExt* self, int flags, wxSizer* sizer);
typedef void (*wxNavigationEnabledWindowExtWarpPointerintintFunc)(const wxNavigationEnabledWindowExt* self, int x, int y);
typedef wxSize (*wxNavigationEnabledWindowExtWindowToClientSizewxSizeCRFunc)(const wxNavigationEnabledWindowExt* self, wxSize const& size);
class wxPanelBaseExt;
typedef bool (*wxPanelBaseExtAcceptsFocusFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtAcceptsFocusFromKeyboardFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtAcceptsFocusRecursivelyFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtAddChildwxWindowBasePFunc)(const wxPanelBaseExt* self, wxWindowBase* child);
typedef void (*wxPanelBaseExtAddPendingEventwxEventCRFunc)(const wxPanelBaseExt* self, wxEvent const& event);
typedef wxCoord (*wxPanelBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxPanelBaseExt* self, wxCoord x, wxCoord width, wxCoord widthTotal);
typedef void (*wxPanelBaseExtAdjustForParentClientOriginintRintRintFunc)(const wxPanelBaseExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxPanelBaseExtAlwaysShowScrollbarsboolboolFunc)(const wxPanelBaseExt* self, bool param0, bool param1);
typedef void (*wxPanelBaseExtAssociateHandleWXWidgetFunc)(const wxPanelBaseExt* self, WXWidget param0);
typedef bool (*wxPanelBaseExtBeginRepositioningChildrenFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtCanApplyThemeBorderFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtCanBeFocusedFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtCanBeOutsideClientAreaFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtCanScrollintFunc)(const wxPanelBaseExt* self, int orient);
typedef bool (*wxPanelBaseExtCanSetTransparentFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtClearBackgroundFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtClientToWindowSizewxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& size);
typedef wxObjectRefData* (*wxPanelBaseExtCloneRefDatawxObjectRefDataCPFunc)(const wxPanelBaseExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxPanelBaseExtCreateRefDataFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtDestroyFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtDissociateHandleFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtDoCaptureMouseFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtDoCentreintFunc)(const wxPanelBaseExt* self, int dir);
typedef void (*wxPanelBaseExtDoClientToScreenintPintPFunc)(const wxPanelBaseExt* self, int* x, int* y);
typedef void (*wxPanelBaseExtDoEnableboolFunc)(const wxPanelBaseExt* self, bool param0);
typedef void (*wxPanelBaseExtDoFreezeFunc)(const wxPanelBaseExt* self);
typedef int (*wxPanelBaseExtDoGetBestClientHeightintFunc)(const wxPanelBaseExt* self, int param0);
typedef wxSize (*wxPanelBaseExtDoGetBestClientSizeFunc)(const wxPanelBaseExt* self);
typedef int (*wxPanelBaseExtDoGetBestClientWidthintFunc)(const wxPanelBaseExt* self, int param0);
typedef wxSize (*wxPanelBaseExtDoGetBestSizeFunc)(const wxPanelBaseExt* self);
typedef void* (*wxPanelBaseExtDoGetClientDataFunc)(const wxPanelBaseExt* self);
typedef wxClientData* (*wxPanelBaseExtDoGetClientObjectFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtDoGetClientSizeintPintPFunc)(const wxPanelBaseExt* self, int* width, int* height);
typedef void (*wxPanelBaseExtDoGetPositionintPintPFunc)(const wxPanelBaseExt* self, int* x, int* y);
typedef void (*wxPanelBaseExtDoGetScreenPositionintPintPFunc)(const wxPanelBaseExt* self, int* x, int* y);
typedef void (*wxPanelBaseExtDoGetSizeintPintPFunc)(const wxPanelBaseExt* self, int* width, int* height);
typedef void (*wxPanelBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxPanelBaseExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* font);
typedef wxSize (*wxPanelBaseExtDoGetVirtualSizeFunc)(const wxPanelBaseExt* self);
typedef wxHitTest (*wxPanelBaseExtDoHitTestwxCoordwxCoordFunc)(const wxPanelBaseExt* self, wxCoord x, wxCoord y);
typedef bool (*wxPanelBaseExtDoIsExposedintintintintFunc)(const wxPanelBaseExt* self, int x, int y, int w, int h);
typedef bool (*wxPanelBaseExtDoIsExposedintintFunc)(const wxPanelBaseExt* self, int x, int y);
typedef void (*wxPanelBaseExtDoMoveWindowintintintintFunc)(const wxPanelBaseExt* self, int x, int y, int width, int height);
typedef bool (*wxPanelBaseExtDoNavigateInintFunc)(const wxPanelBaseExt* self, int flags);
typedef bool (*wxPanelBaseExtDoPhaseintFunc)(const wxPanelBaseExt* self, int phase);
typedef bool (*wxPanelBaseExtDoPopupMenuwxMenuPintintFunc)(const wxPanelBaseExt* self, wxMenu* menu, int x, int y);
typedef void (*wxPanelBaseExtDoReleaseMouseFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtDoScreenToClientintPintPFunc)(const wxPanelBaseExt* self, int* x, int* y);
typedef void (*wxPanelBaseExtDoSetClientDatavoidPFunc)(const wxPanelBaseExt* self, void* data);
typedef void (*wxPanelBaseExtDoSetClientObjectwxClientDataPFunc)(const wxPanelBaseExt* self, wxClientData* data);
typedef void (*wxPanelBaseExtDoSetClientSizeintintFunc)(const wxPanelBaseExt* self, int width, int height);
typedef void (*wxPanelBaseExtDoSetSizeintintintintintFunc)(const wxPanelBaseExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxPanelBaseExtDoSetSizeHintsintintintintintintFunc)(const wxPanelBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxPanelBaseExtDoSetToolTipwxToolTipPFunc)(const wxPanelBaseExt* self, wxToolTip* tip);
typedef void (*wxPanelBaseExtDoSetToolTipTextwxStringCRFunc)(const wxPanelBaseExt* self, wxString const& tip);
typedef void (*wxPanelBaseExtDoSetVirtualSizeintintFunc)(const wxPanelBaseExt* self, int x, int y);
typedef void (*wxPanelBaseExtDoSetWindowVariantwxWindowVariantFunc)(const wxPanelBaseExt* self, wxWindowVariant variant);
typedef void (*wxPanelBaseExtDoThawFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxPanelBaseExt* self, wxUpdateUIEvent& event);
typedef void (*wxPanelBaseExtDragAcceptFilesboolFunc)(const wxPanelBaseExt* self, bool accept);
typedef bool (*wxPanelBaseExtEnableboolFunc)(const wxPanelBaseExt* self, bool enable);
typedef bool (*wxPanelBaseExtEnableTouchEventsintFunc)(const wxPanelBaseExt* self, int param0);
typedef void (*wxPanelBaseExtEnableVisibleFocusboolFunc)(const wxPanelBaseExt* self, bool param0);
typedef void (*wxPanelBaseExtEndRepositioningChildrenFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtFitFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtFitInsideFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtGetBestVirtualSizeFunc)(const wxPanelBaseExt* self);
typedef int (*wxPanelBaseExtGetCharHeightFunc)(const wxPanelBaseExt* self);
typedef int (*wxPanelBaseExtGetCharWidthFunc)(const wxPanelBaseExt* self);
typedef wxClassInfo* (*wxPanelBaseExtGetClassInfoFunc)(const wxPanelBaseExt* self);
typedef wxPoint (*wxPanelBaseExtGetClientAreaOriginFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtGetClientSizeConstraintintPintPFunc)(const wxPanelBaseExt* self, int* w, int* h);
typedef double (*wxPanelBaseExtGetContentScaleFactorFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtGetDPIFunc)(const wxPanelBaseExt* self);
typedef double (*wxPanelBaseExtGetDPIScaleFactorFunc)(const wxPanelBaseExt* self);
typedef wxVisualAttributes (*wxPanelBaseExtGetDefaultAttributesFunc)(const wxPanelBaseExt* self);
typedef wxBorder (*wxPanelBaseExtGetDefaultBorderFunc)(const wxPanelBaseExt* self);
typedef wxBorder (*wxPanelBaseExtGetDefaultBorderForControlFunc)(const wxPanelBaseExt* self);
typedef wxDropTarget* (*wxPanelBaseExtGetDropTargetFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtGetEffectiveMinSizeFunc)(const wxPanelBaseExt* self);
typedef wxEventHashTable& (*wxPanelBaseExtGetEventHashTableFunc)(const wxPanelBaseExt* self);
typedef wxEventTable const* (*wxPanelBaseExtGetEventTableFunc)(const wxPanelBaseExt* self);
typedef WXWidget (*wxPanelBaseExtGetHandleFunc)(const wxPanelBaseExt* self);
typedef wxString (*wxPanelBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc)(const wxPanelBaseExt* self, wxPoint const& pt, wxHelpEvent::Origin origin);
typedef wxString (*wxPanelBaseExtGetLabelFunc)(const wxPanelBaseExt* self);
typedef wxLayoutDirection (*wxPanelBaseExtGetLayoutDirectionFunc)(const wxPanelBaseExt* self);
typedef wxWindow* (*wxPanelBaseExtGetMainWindowOfCompositeControlFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtGetMaxClientSizeFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtGetMaxSizeFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtGetMinClientSizeFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtGetMinSizeFunc)(const wxPanelBaseExt* self);
typedef wxString (*wxPanelBaseExtGetNameFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtGetPositionConstraintintPintPFunc)(const wxPanelBaseExt* self, int* x, int* y);
typedef int (*wxPanelBaseExtGetScrollPosintFunc)(const wxPanelBaseExt* self, int orient);
typedef int (*wxPanelBaseExtGetScrollRangeintFunc)(const wxPanelBaseExt* self, int orient);
typedef int (*wxPanelBaseExtGetScrollThumbintFunc)(const wxPanelBaseExt* self, int orient);
typedef void (*wxPanelBaseExtGetSizeConstraintintPintPFunc)(const wxPanelBaseExt* self, int* w, int* h);
typedef bool (*wxPanelBaseExtGetThemeEnabledFunc)(const wxPanelBaseExt* self);
typedef wxValidator* (*wxPanelBaseExtGetValidatorFunc)(const wxPanelBaseExt* self);
typedef wxSize (*wxPanelBaseExtGetWindowBorderSizeFunc)(const wxPanelBaseExt* self);
typedef long (*wxPanelBaseExtGetWindowStyleFlagFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtHasCaptureFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtHasFocusFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtHasMultiplePagesFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtHasTransparentBackgroundFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtHideWithEffectwxShowEffectunsignedintFunc)(const wxPanelBaseExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxPanelBaseExtInformFirstDirectionintintintFunc)(const wxPanelBaseExt* self, int direction, int size, int availableOtherDir);
typedef void (*wxPanelBaseExtInheritAttributesFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtInitDialogFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtIsClientAreaChildwxWindowCPFunc)(const wxPanelBaseExt* self, wxWindow const* param0);
typedef bool (*wxPanelBaseExtIsDoubleBufferedFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtIsRetainedFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtIsScrollbarAlwaysShownintFunc)(const wxPanelBaseExt* self, int param0);
typedef bool (*wxPanelBaseExtIsShownFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtIsShownOnScreenFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtIsThisEnabledFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtIsTopLevelFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxPanelBaseExt* self, wxWindowBase::NavigationKind param0);
typedef bool (*wxPanelBaseExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxPanelBaseExt* self, wxString* reason);
typedef bool (*wxPanelBaseExtLayoutFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtLayoutPhase1intPFunc)(const wxPanelBaseExt* self, int* noChanges);
typedef bool (*wxPanelBaseExtLayoutPhase2intPFunc)(const wxPanelBaseExt* self, int* noChanges);
typedef void (*wxPanelBaseExtLowerFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtMoveConstraintintintFunc)(const wxPanelBaseExt* self, int x, int y);
typedef bool (*wxPanelBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxPanelBaseExt* self, wxDynamicEventTableEntry& param0);
typedef void (*wxPanelBaseExtOnInternalIdleFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtPrepareDCwxDCRFunc)(const wxPanelBaseExt* self, wxDC& param0);
typedef bool (*wxPanelBaseExtProcessEventwxEventRFunc)(const wxPanelBaseExt* self, wxEvent& event);
typedef void (*wxPanelBaseExtQueueEventwxEventPFunc)(const wxPanelBaseExt* self, wxEvent* event);
typedef void (*wxPanelBaseExtRaiseFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtRefreshboolwxRectCPFunc)(const wxPanelBaseExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxPanelBaseExtRegisterHotKeyintintintFunc)(const wxPanelBaseExt* self, int hotkeyId, int modifiers, int keycode);
typedef void (*wxPanelBaseExtRemoveChildwxWindowBasePFunc)(const wxPanelBaseExt* self, wxWindowBase* child);
typedef bool (*wxPanelBaseExtReparentwxWindowBasePFunc)(const wxPanelBaseExt* self, wxWindowBase* newParent);
typedef bool (*wxPanelBaseExtScrollLinesintFunc)(const wxPanelBaseExt* self, int param0);
typedef bool (*wxPanelBaseExtScrollPagesintFunc)(const wxPanelBaseExt* self, int param0);
typedef void (*wxPanelBaseExtScrollWindowintintwxRectCPFunc)(const wxPanelBaseExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxPanelBaseExtSearchEventTablewxEventTableRwxEventRFunc)(const wxPanelBaseExt* self, wxEventTable& table, wxEvent& event);
typedef bool (*wxPanelBaseExtSendIdleEventswxIdleEventRFunc)(const wxPanelBaseExt* self, wxIdleEvent& event);
typedef void (*wxPanelBaseExtSendSizeEventintFunc)(const wxPanelBaseExt* self, int flags);
typedef void (*wxPanelBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc)(const wxPanelBaseExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxPanelBaseExtSetBackgroundColourwxColourCRFunc)(const wxPanelBaseExt* self, wxColour const& colour);
typedef bool (*wxPanelBaseExtSetBackgroundStylewxBackgroundStyleFunc)(const wxPanelBaseExt* self, wxBackgroundStyle style);
typedef void (*wxPanelBaseExtSetCanFocusboolFunc)(const wxPanelBaseExt* self, bool param0);
typedef void (*wxPanelBaseExtSetConstraintSizesboolFunc)(const wxPanelBaseExt* self, bool recurse);
typedef bool (*wxPanelBaseExtSetCursorwxCursorCRFunc)(const wxPanelBaseExt* self, wxCursor const& cursor);
typedef void (*wxPanelBaseExtSetDoubleBufferedboolFunc)(const wxPanelBaseExt* self, bool param0);
typedef void (*wxPanelBaseExtSetDropTargetwxDropTargetPFunc)(const wxPanelBaseExt* self, wxDropTarget* dropTarget);
typedef void (*wxPanelBaseExtSetExtraStylelongFunc)(const wxPanelBaseExt* self, long exStyle);
typedef void (*wxPanelBaseExtSetFocusFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtSetFocusFromKbdFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtSetFontwxFontCRFunc)(const wxPanelBaseExt* self, wxFont const& font);
typedef bool (*wxPanelBaseExtSetForegroundColourwxColourCRFunc)(const wxPanelBaseExt* self, wxColour const& colour);
typedef void (*wxPanelBaseExtSetIdwxWindowIDFunc)(const wxPanelBaseExt* self, wxWindowID winid);
typedef void (*wxPanelBaseExtSetLabelwxStringCRFunc)(const wxPanelBaseExt* self, wxString const& label);
typedef void (*wxPanelBaseExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxPanelBaseExt* self, wxLayoutDirection param0);
typedef void (*wxPanelBaseExtSetMaxClientSizewxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& size);
typedef void (*wxPanelBaseExtSetMaxSizewxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& maxSize);
typedef void (*wxPanelBaseExtSetMinClientSizewxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& size);
typedef void (*wxPanelBaseExtSetMinSizewxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& minSize);
typedef void (*wxPanelBaseExtSetNamewxStringCRFunc)(const wxPanelBaseExt* self, wxString const& name);
typedef void (*wxPanelBaseExtSetNextHandlerwxEvtHandlerPFunc)(const wxPanelBaseExt* self, wxEvtHandler* handler);
typedef void (*wxPanelBaseExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxPanelBaseExt* self, wxEvtHandler* handler);
typedef void (*wxPanelBaseExtSetScrollPosintintboolFunc)(const wxPanelBaseExt* self, int orient, int pos, bool refresh);
typedef void (*wxPanelBaseExtSetScrollbarintintintintboolFunc)(const wxPanelBaseExt* self, int orient, int pos, int thumbvisible, int range, bool refresh);
typedef void (*wxPanelBaseExtSetSizeConstraintintintintintFunc)(const wxPanelBaseExt* self, int x, int y, int w, int h);
typedef void (*wxPanelBaseExtSetSizeHintsintintintintintintFunc)(const wxPanelBaseExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxPanelBaseExtSetThemeEnabledboolFunc)(const wxPanelBaseExt* self, bool enableTheme);
typedef bool (*wxPanelBaseExtSetTransparentwxByteFunc)(const wxPanelBaseExt* self, wxByte param0);
typedef void (*wxPanelBaseExtSetValidatorwxValidatorCRFunc)(const wxPanelBaseExt* self, wxValidator const& validator);
typedef void (*wxPanelBaseExtSetWindowStyleFlaglongFunc)(const wxPanelBaseExt* self, long style);
typedef bool (*wxPanelBaseExtShouldInheritColoursFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtShowboolFunc)(const wxPanelBaseExt* self, bool show);
typedef bool (*wxPanelBaseExtShowWithEffectwxShowEffectunsignedintFunc)(const wxPanelBaseExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxPanelBaseExtTransferDataFromWindowFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtTransferDataToWindowFunc)(const wxPanelBaseExt* self);
typedef bool (*wxPanelBaseExtTryAfterwxEventRFunc)(const wxPanelBaseExt* self, wxEvent& event);
typedef bool (*wxPanelBaseExtTryBeforewxEventRFunc)(const wxPanelBaseExt* self, wxEvent& event);
typedef bool (*wxPanelBaseExtUnregisterHotKeyintFunc)(const wxPanelBaseExt* self, int hotkeyId);
typedef void (*wxPanelBaseExtUpdateFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtUpdateWindowUIlongFunc)(const wxPanelBaseExt* self, long flags);
typedef bool (*wxPanelBaseExtValidateFunc)(const wxPanelBaseExt* self);
typedef void (*wxPanelBaseExtWXAdjustFontToOwnPPIwxFontRFunc)(const wxPanelBaseExt* self, wxFont& param0);
typedef wxTextEntry const* (*wxPanelBaseExtWXGetTextEntryFunc)(const wxPanelBaseExt* self);
typedef void* (*wxPanelBaseExtWXReservedEvtHandler1voidPFunc)(const wxPanelBaseExt* self, void* param0);
typedef void* (*wxPanelBaseExtWXReservedEvtHandler2voidPFunc)(const wxPanelBaseExt* self, void* param0);
typedef void* (*wxPanelBaseExtWXReservedWindow1voidPFunc)(const wxPanelBaseExt* self, void* param0);
typedef void* (*wxPanelBaseExtWXReservedWindow2voidPFunc)(const wxPanelBaseExt* self, void* param0);
typedef void* (*wxPanelBaseExtWXReservedWindow3voidPFunc)(const wxPanelBaseExt* self, void* param0);
typedef void (*wxPanelBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc)(const wxPanelBaseExt* self, int flags, wxSizer* sizer);
typedef void (*wxPanelBaseExtWarpPointerintintFunc)(const wxPanelBaseExt* self, int x, int y);
typedef wxSize (*wxPanelBaseExtWindowToClientSizewxSizeCRFunc)(const wxPanelBaseExt* self, wxSize const& size);
class wxPanelExt;
typedef bool (*wxPanelExtAcceptsFocusFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtAcceptsFocusFromKeyboardFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtAcceptsFocusRecursivelyFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtAddChildwxWindowBasePFunc)(const wxPanelExt* self, wxWindowBase* child);
typedef void (*wxPanelExtAddPendingEventwxEventCRFunc)(const wxPanelExt* self, wxEvent const& event);
typedef wxCoord (*wxPanelExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc)(const wxPanelExt* self, wxCoord x, wxCoord width, wxCoord widthTotal);
typedef void (*wxPanelExtAdjustForParentClientOriginintRintRintFunc)(const wxPanelExt* self, int& x, int& y, int sizeFlags);
typedef void (*wxPanelExtAlwaysShowScrollbarsboolboolFunc)(const wxPanelExt* self, bool param0, bool param1);
typedef void (*wxPanelExtAssociateHandleWXWidgetFunc)(const wxPanelExt* self, WXWidget param0);
typedef bool (*wxPanelExtBeginRepositioningChildrenFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtCanApplyThemeBorderFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtCanBeFocusedFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtCanBeOutsideClientAreaFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtCanScrollintFunc)(const wxPanelExt* self, int orient);
typedef bool (*wxPanelExtCanSetTransparentFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtClearBackgroundFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtClientToWindowSizewxSizeCRFunc)(const wxPanelExt* self, wxSize const& size);
typedef wxObjectRefData* (*wxPanelExtCloneRefDatawxObjectRefDataCPFunc)(const wxPanelExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxPanelExtCreateRefDataFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtDestroyFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtDissociateHandleFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtDoCaptureMouseFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtDoCentreintFunc)(const wxPanelExt* self, int dir);
typedef void (*wxPanelExtDoClientToScreenintPintPFunc)(const wxPanelExt* self, int* x, int* y);
typedef void (*wxPanelExtDoEnableboolFunc)(const wxPanelExt* self, bool param0);
typedef void (*wxPanelExtDoFreezeFunc)(const wxPanelExt* self);
typedef int (*wxPanelExtDoGetBestClientHeightintFunc)(const wxPanelExt* self, int param0);
typedef wxSize (*wxPanelExtDoGetBestClientSizeFunc)(const wxPanelExt* self);
typedef int (*wxPanelExtDoGetBestClientWidthintFunc)(const wxPanelExt* self, int param0);
typedef wxSize (*wxPanelExtDoGetBestSizeFunc)(const wxPanelExt* self);
typedef void* (*wxPanelExtDoGetClientDataFunc)(const wxPanelExt* self);
typedef wxClientData* (*wxPanelExtDoGetClientObjectFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtDoGetClientSizeintPintPFunc)(const wxPanelExt* self, int* width, int* height);
typedef void (*wxPanelExtDoGetPositionintPintPFunc)(const wxPanelExt* self, int* x, int* y);
typedef void (*wxPanelExtDoGetScreenPositionintPintPFunc)(const wxPanelExt* self, int* x, int* y);
typedef void (*wxPanelExtDoGetSizeintPintPFunc)(const wxPanelExt* self, int* width, int* height);
typedef void (*wxPanelExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc)(const wxPanelExt* self, wxString const& string, int* x, int* y, int* descent, int* externalLeading, wxFont const* font);
typedef wxSize (*wxPanelExtDoGetVirtualSizeFunc)(const wxPanelExt* self);
typedef wxHitTest (*wxPanelExtDoHitTestwxCoordwxCoordFunc)(const wxPanelExt* self, wxCoord x, wxCoord y);
typedef bool (*wxPanelExtDoIsExposedintintintintFunc)(const wxPanelExt* self, int x, int y, int w, int h);
typedef bool (*wxPanelExtDoIsExposedintintFunc)(const wxPanelExt* self, int x, int y);
typedef void (*wxPanelExtDoMoveWindowintintintintFunc)(const wxPanelExt* self, int x, int y, int width, int height);
typedef bool (*wxPanelExtDoNavigateInintFunc)(const wxPanelExt* self, int flags);
typedef bool (*wxPanelExtDoPhaseintFunc)(const wxPanelExt* self, int phase);
typedef bool (*wxPanelExtDoPopupMenuwxMenuPintintFunc)(const wxPanelExt* self, wxMenu* menu, int x, int y);
typedef void (*wxPanelExtDoReleaseMouseFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtDoScreenToClientintPintPFunc)(const wxPanelExt* self, int* x, int* y);
typedef void (*wxPanelExtDoSetClientDatavoidPFunc)(const wxPanelExt* self, void* data);
typedef void (*wxPanelExtDoSetClientObjectwxClientDataPFunc)(const wxPanelExt* self, wxClientData* data);
typedef void (*wxPanelExtDoSetClientSizeintintFunc)(const wxPanelExt* self, int width, int height);
typedef void (*wxPanelExtDoSetSizeintintintintintFunc)(const wxPanelExt* self, int x, int y, int width, int height, int sizeFlags);
typedef void (*wxPanelExtDoSetSizeHintsintintintintintintFunc)(const wxPanelExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxPanelExtDoSetToolTipwxToolTipPFunc)(const wxPanelExt* self, wxToolTip* tip);
typedef void (*wxPanelExtDoSetToolTipTextwxStringCRFunc)(const wxPanelExt* self, wxString const& tip);
typedef void (*wxPanelExtDoSetVirtualSizeintintFunc)(const wxPanelExt* self, int x, int y);
typedef void (*wxPanelExtDoSetWindowVariantwxWindowVariantFunc)(const wxPanelExt* self, wxWindowVariant variant);
typedef void (*wxPanelExtDoThawFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtDoUpdateWindowUIwxUpdateUIEventRFunc)(const wxPanelExt* self, wxUpdateUIEvent& event);
typedef void (*wxPanelExtDragAcceptFilesboolFunc)(const wxPanelExt* self, bool accept);
typedef bool (*wxPanelExtEnableboolFunc)(const wxPanelExt* self, bool enable);
typedef bool (*wxPanelExtEnableTouchEventsintFunc)(const wxPanelExt* self, int param0);
typedef void (*wxPanelExtEnableVisibleFocusboolFunc)(const wxPanelExt* self, bool param0);
typedef void (*wxPanelExtEndRepositioningChildrenFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtFitFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtFitInsideFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtGetBestVirtualSizeFunc)(const wxPanelExt* self);
typedef int (*wxPanelExtGetCharHeightFunc)(const wxPanelExt* self);
typedef int (*wxPanelExtGetCharWidthFunc)(const wxPanelExt* self);
typedef wxClassInfo* (*wxPanelExtGetClassInfoFunc)(const wxPanelExt* self);
typedef wxPoint (*wxPanelExtGetClientAreaOriginFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtGetClientSizeConstraintintPintPFunc)(const wxPanelExt* self, int* w, int* h);
typedef double (*wxPanelExtGetContentScaleFactorFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtGetDPIFunc)(const wxPanelExt* self);
typedef double (*wxPanelExtGetDPIScaleFactorFunc)(const wxPanelExt* self);
typedef wxVisualAttributes (*wxPanelExtGetDefaultAttributesFunc)(const wxPanelExt* self);
typedef wxBorder (*wxPanelExtGetDefaultBorderFunc)(const wxPanelExt* self);
typedef wxBorder (*wxPanelExtGetDefaultBorderForControlFunc)(const wxPanelExt* self);
typedef wxDropTarget* (*wxPanelExtGetDropTargetFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtGetEffectiveMinSizeFunc)(const wxPanelExt* self);
typedef wxEventHashTable& (*wxPanelExtGetEventHashTableFunc)(const wxPanelExt* self);
typedef wxEventTable const* (*wxPanelExtGetEventTableFunc)(const wxPanelExt* self);
typedef WXWidget (*wxPanelExtGetHandleFunc)(const wxPanelExt* self);
typedef wxString (*wxPanelExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc)(const wxPanelExt* self, wxPoint const& pt, wxHelpEvent::Origin origin);
typedef wxString (*wxPanelExtGetLabelFunc)(const wxPanelExt* self);
typedef wxLayoutDirection (*wxPanelExtGetLayoutDirectionFunc)(const wxPanelExt* self);
typedef wxWindow* (*wxPanelExtGetMainWindowOfCompositeControlFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtGetMaxClientSizeFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtGetMaxSizeFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtGetMinClientSizeFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtGetMinSizeFunc)(const wxPanelExt* self);
typedef wxString (*wxPanelExtGetNameFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtGetPositionConstraintintPintPFunc)(const wxPanelExt* self, int* x, int* y);
typedef int (*wxPanelExtGetScrollPosintFunc)(const wxPanelExt* self, int orient);
typedef int (*wxPanelExtGetScrollRangeintFunc)(const wxPanelExt* self, int orient);
typedef int (*wxPanelExtGetScrollThumbintFunc)(const wxPanelExt* self, int orient);
typedef void (*wxPanelExtGetSizeConstraintintPintPFunc)(const wxPanelExt* self, int* w, int* h);
typedef bool (*wxPanelExtGetThemeEnabledFunc)(const wxPanelExt* self);
typedef wxValidator* (*wxPanelExtGetValidatorFunc)(const wxPanelExt* self);
typedef wxSize (*wxPanelExtGetWindowBorderSizeFunc)(const wxPanelExt* self);
typedef long (*wxPanelExtGetWindowStyleFlagFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtHasCaptureFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtHasFocusFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtHasMultiplePagesFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtHasTransparentBackgroundFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtHideWithEffectwxShowEffectunsignedintFunc)(const wxPanelExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxPanelExtInformFirstDirectionintintintFunc)(const wxPanelExt* self, int direction, int size, int availableOtherDir);
typedef void (*wxPanelExtInheritAttributesFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtInitDialogFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtIsClientAreaChildwxWindowCPFunc)(const wxPanelExt* self, wxWindow const* param0);
typedef bool (*wxPanelExtIsDoubleBufferedFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtIsRetainedFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtIsScrollbarAlwaysShownintFunc)(const wxPanelExt* self, int param0);
typedef bool (*wxPanelExtIsShownFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtIsShownOnScreenFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtIsThisEnabledFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtIsTopLevelFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc)(const wxPanelExt* self, wxWindowBase::NavigationKind param0);
typedef bool (*wxPanelExtIsTransparentBackgroundSupportedwxStringPFunc)(const wxPanelExt* self, wxString* reason);
typedef bool (*wxPanelExtLayoutFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtLayoutPhase1intPFunc)(const wxPanelExt* self, int* noChanges);
typedef bool (*wxPanelExtLayoutPhase2intPFunc)(const wxPanelExt* self, int* noChanges);
typedef void (*wxPanelExtLowerFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtMoveConstraintintintFunc)(const wxPanelExt* self, int x, int y);
typedef bool (*wxPanelExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxPanelExt* self, wxDynamicEventTableEntry& param0);
typedef void (*wxPanelExtOnInternalIdleFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtPrepareDCwxDCRFunc)(const wxPanelExt* self, wxDC& param0);
typedef bool (*wxPanelExtProcessEventwxEventRFunc)(const wxPanelExt* self, wxEvent& event);
typedef void (*wxPanelExtQueueEventwxEventPFunc)(const wxPanelExt* self, wxEvent* event);
typedef void (*wxPanelExtRaiseFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtRefreshboolwxRectCPFunc)(const wxPanelExt* self, bool eraseBackground, wxRect const* rect);
typedef bool (*wxPanelExtRegisterHotKeyintintintFunc)(const wxPanelExt* self, int hotkeyId, int modifiers, int keycode);
typedef void (*wxPanelExtRemoveChildwxWindowBasePFunc)(const wxPanelExt* self, wxWindowBase* child);
typedef bool (*wxPanelExtReparentwxWindowBasePFunc)(const wxPanelExt* self, wxWindowBase* newParent);
typedef bool (*wxPanelExtScrollLinesintFunc)(const wxPanelExt* self, int param0);
typedef bool (*wxPanelExtScrollPagesintFunc)(const wxPanelExt* self, int param0);
typedef void (*wxPanelExtScrollWindowintintwxRectCPFunc)(const wxPanelExt* self, int dx, int dy, wxRect const* rect);
typedef bool (*wxPanelExtSearchEventTablewxEventTableRwxEventRFunc)(const wxPanelExt* self, wxEventTable& table, wxEvent& event);
typedef bool (*wxPanelExtSendIdleEventswxIdleEventRFunc)(const wxPanelExt* self, wxIdleEvent& event);
typedef void (*wxPanelExtSendSizeEventintFunc)(const wxPanelExt* self, int flags);
typedef void (*wxPanelExtSetAcceleratorTablewxAcceleratorTableCRFunc)(const wxPanelExt* self, wxAcceleratorTable const& accel);
typedef bool (*wxPanelExtSetBackgroundColourwxColourCRFunc)(const wxPanelExt* self, wxColour const& colour);
typedef bool (*wxPanelExtSetBackgroundStylewxBackgroundStyleFunc)(const wxPanelExt* self, wxBackgroundStyle style);
typedef void (*wxPanelExtSetCanFocusboolFunc)(const wxPanelExt* self, bool param0);
typedef void (*wxPanelExtSetConstraintSizesboolFunc)(const wxPanelExt* self, bool recurse);
typedef bool (*wxPanelExtSetCursorwxCursorCRFunc)(const wxPanelExt* self, wxCursor const& cursor);
typedef void (*wxPanelExtSetDoubleBufferedboolFunc)(const wxPanelExt* self, bool param0);
typedef void (*wxPanelExtSetDropTargetwxDropTargetPFunc)(const wxPanelExt* self, wxDropTarget* dropTarget);
typedef void (*wxPanelExtSetExtraStylelongFunc)(const wxPanelExt* self, long exStyle);
typedef void (*wxPanelExtSetFocusFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtSetFocusFromKbdFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtSetFontwxFontCRFunc)(const wxPanelExt* self, wxFont const& font);
typedef bool (*wxPanelExtSetForegroundColourwxColourCRFunc)(const wxPanelExt* self, wxColour const& colour);
typedef void (*wxPanelExtSetIdwxWindowIDFunc)(const wxPanelExt* self, wxWindowID winid);
typedef void (*wxPanelExtSetLabelwxStringCRFunc)(const wxPanelExt* self, wxString const& label);
typedef void (*wxPanelExtSetLayoutDirectionwxLayoutDirectionFunc)(const wxPanelExt* self, wxLayoutDirection param0);
typedef void (*wxPanelExtSetMaxClientSizewxSizeCRFunc)(const wxPanelExt* self, wxSize const& size);
typedef void (*wxPanelExtSetMaxSizewxSizeCRFunc)(const wxPanelExt* self, wxSize const& maxSize);
typedef void (*wxPanelExtSetMinClientSizewxSizeCRFunc)(const wxPanelExt* self, wxSize const& size);
typedef void (*wxPanelExtSetMinSizewxSizeCRFunc)(const wxPanelExt* self, wxSize const& minSize);
typedef void (*wxPanelExtSetNamewxStringCRFunc)(const wxPanelExt* self, wxString const& name);
typedef void (*wxPanelExtSetNextHandlerwxEvtHandlerPFunc)(const wxPanelExt* self, wxEvtHandler* handler);
typedef void (*wxPanelExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxPanelExt* self, wxEvtHandler* handler);
typedef void (*wxPanelExtSetScrollPosintintboolFunc)(const wxPanelExt* self, int orient, int pos, bool refresh);
typedef void (*wxPanelExtSetScrollbarintintintintboolFunc)(const wxPanelExt* self, int orient, int pos, int thumbvisible, int range, bool refresh);
typedef void (*wxPanelExtSetSizeConstraintintintintintFunc)(const wxPanelExt* self, int x, int y, int w, int h);
typedef void (*wxPanelExtSetSizeHintsintintintintintintFunc)(const wxPanelExt* self, int minW, int minH, int maxW, int maxH, int incW, int incH);
typedef void (*wxPanelExtSetThemeEnabledboolFunc)(const wxPanelExt* self, bool enableTheme);
typedef bool (*wxPanelExtSetTransparentwxByteFunc)(const wxPanelExt* self, wxByte param0);
typedef void (*wxPanelExtSetValidatorwxValidatorCRFunc)(const wxPanelExt* self, wxValidator const& validator);
typedef void (*wxPanelExtSetWindowStyleFlaglongFunc)(const wxPanelExt* self, long style);
typedef bool (*wxPanelExtShouldInheritColoursFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtShowboolFunc)(const wxPanelExt* self, bool show);
typedef bool (*wxPanelExtShowWithEffectwxShowEffectunsignedintFunc)(const wxPanelExt* self, wxShowEffect param0, unsigned int param1);
typedef bool (*wxPanelExtTransferDataFromWindowFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtTransferDataToWindowFunc)(const wxPanelExt* self);
typedef bool (*wxPanelExtTryAfterwxEventRFunc)(const wxPanelExt* self, wxEvent& event);
typedef bool (*wxPanelExtTryBeforewxEventRFunc)(const wxPanelExt* self, wxEvent& event);
typedef bool (*wxPanelExtUnregisterHotKeyintFunc)(const wxPanelExt* self, int hotkeyId);
typedef void (*wxPanelExtUpdateFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtUpdateWindowUIlongFunc)(const wxPanelExt* self, long flags);
typedef bool (*wxPanelExtValidateFunc)(const wxPanelExt* self);
typedef void (*wxPanelExtWXAdjustFontToOwnPPIwxFontRFunc)(const wxPanelExt* self, wxFont& param0);
typedef wxTextEntry const* (*wxPanelExtWXGetTextEntryFunc)(const wxPanelExt* self);
typedef void* (*wxPanelExtWXReservedEvtHandler1voidPFunc)(const wxPanelExt* self, void* param0);
typedef void* (*wxPanelExtWXReservedEvtHandler2voidPFunc)(const wxPanelExt* self, void* param0);
typedef void* (*wxPanelExtWXReservedWindow1voidPFunc)(const wxPanelExt* self, void* param0);
typedef void* (*wxPanelExtWXReservedWindow2voidPFunc)(const wxPanelExt* self, void* param0);
typedef void* (*wxPanelExtWXReservedWindow3voidPFunc)(const wxPanelExt* self, void* param0);
typedef void (*wxPanelExtWXSetInitialFittingClientSizeintwxSizerPFunc)(const wxPanelExt* self, int flags, wxSizer* sizer);
typedef void (*wxPanelExtWarpPointerintintFunc)(const wxPanelExt* self, int x, int y);
typedef wxSize (*wxPanelExtWindowToClientSizewxSizeCRFunc)(const wxPanelExt* self, wxSize const& size);

class wxNavigationEnabledWindowExt: public wxNavigationEnabledWindow
{
public:
  wxNavigationEnabledWindowExt(): wxNavigationEnabledWindow()  {  }
  wxNavigationEnabledWindowExtAcceptsFocusFunc m_wxNavigationEnabledWindowExtAcceptsFocus = NULL;
  virtual bool AcceptsFocus() const override
  {
    bool res = wxNavigationEnabledWindow::AcceptsFocus();
    if (*m_wxNavigationEnabledWindowExtAcceptsFocus != NULL){
      return m_wxNavigationEnabledWindowExtAcceptsFocus(this);
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
      return m_wxNavigationEnabledWindowExtAcceptsFocusFromKeyboard(this);
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
      return m_wxNavigationEnabledWindowExtAcceptsFocusRecursively(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtAddChildwxWindowBasePFunc m_wxNavigationEnabledWindowExtAddChildwxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxNavigationEnabledWindow::AddChild(child);
    if (*m_wxNavigationEnabledWindowExtAddChildwxWindowBaseP != NULL){
      return m_wxNavigationEnabledWindowExtAddChildwxWindowBaseP(this, child);
    }
  }
  wxNavigationEnabledWindowExtAddPendingEventwxEventCRFunc m_wxNavigationEnabledWindowExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxNavigationEnabledWindow::AddPendingEvent(event);
    if (*m_wxNavigationEnabledWindowExtAddPendingEventwxEventCR != NULL){
      return m_wxNavigationEnabledWindowExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxNavigationEnabledWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxNavigationEnabledWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxNavigationEnabledWindow::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxNavigationEnabledWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxNavigationEnabledWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtAdjustForParentClientOriginintRintRintFunc m_wxNavigationEnabledWindowExtAdjustForParentClientOriginintRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxNavigationEnabledWindow::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxNavigationEnabledWindowExtAdjustForParentClientOriginintRintRint != NULL){
      return m_wxNavigationEnabledWindowExtAdjustForParentClientOriginintRintRint(this, x, y, sizeFlags);
    }
  }
  wxNavigationEnabledWindowExtAlwaysShowScrollbarsboolboolFunc m_wxNavigationEnabledWindowExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool param0 = true, bool param1 = true) override
  {
    wxNavigationEnabledWindow::AlwaysShowScrollbars(param0, param1);
    if (*m_wxNavigationEnabledWindowExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxNavigationEnabledWindowExtAlwaysShowScrollbarsboolbool(this, param0, param1);
    }
  }
  wxNavigationEnabledWindowExtAssociateHandleWXWidgetFunc m_wxNavigationEnabledWindowExtAssociateHandleWXWidget = NULL;
  virtual void AssociateHandle(WXWidget param0) override
  {
    wxNavigationEnabledWindow::AssociateHandle(param0);
    if (*m_wxNavigationEnabledWindowExtAssociateHandleWXWidget != NULL){
      return m_wxNavigationEnabledWindowExtAssociateHandleWXWidget(this, param0);
    }
  }
  wxNavigationEnabledWindowExtBeginRepositioningChildrenFunc m_wxNavigationEnabledWindowExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxNavigationEnabledWindow::BeginRepositioningChildren();
    if (*m_wxNavigationEnabledWindowExtBeginRepositioningChildren != NULL){
      return m_wxNavigationEnabledWindowExtBeginRepositioningChildren(this);
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
      return m_wxNavigationEnabledWindowExtCanApplyThemeBorder(this);
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
      return m_wxNavigationEnabledWindowExtCanBeFocused(this);
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
      return m_wxNavigationEnabledWindowExtCanBeOutsideClientArea(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtCanScrollintFunc m_wxNavigationEnabledWindowExtCanScrollint = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxNavigationEnabledWindow::CanScroll(orient);
    if (*m_wxNavigationEnabledWindowExtCanScrollint != NULL){
      return m_wxNavigationEnabledWindowExtCanScrollint(this, orient);
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
      return m_wxNavigationEnabledWindowExtCanSetTransparent(this);
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
  wxNavigationEnabledWindowExtClientToWindowSizewxSizeCRFunc m_wxNavigationEnabledWindowExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxNavigationEnabledWindow::ClientToWindowSize(size);
    if (*m_wxNavigationEnabledWindowExtClientToWindowSizewxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtClientToWindowSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtCloneRefDatawxObjectRefDataCPFunc m_wxNavigationEnabledWindowExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxNavigationEnabledWindow::CloneRefData(data);
    if (*m_wxNavigationEnabledWindowExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxNavigationEnabledWindowExtCloneRefDatawxObjectRefDataCP(this, data);
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
      return m_wxNavigationEnabledWindowExtCreateRefData(this);
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
      return m_wxNavigationEnabledWindowExtDestroy(this);
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
  wxNavigationEnabledWindowExtDoCentreintFunc m_wxNavigationEnabledWindowExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxNavigationEnabledWindow::DoCentre(dir);
    if (*m_wxNavigationEnabledWindowExtDoCentreint != NULL){
      return m_wxNavigationEnabledWindowExtDoCentreint(this, dir);
    }
  }
  wxNavigationEnabledWindowExtDoClientToScreenintPintPFunc m_wxNavigationEnabledWindowExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxNavigationEnabledWindow::DoClientToScreen(x, y);
    if (*m_wxNavigationEnabledWindowExtDoClientToScreenintPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtDoEnableboolFunc m_wxNavigationEnabledWindowExtDoEnablebool = NULL;
  virtual void DoEnable(bool param0) override
  {
    wxNavigationEnabledWindow::DoEnable(param0);
    if (*m_wxNavigationEnabledWindowExtDoEnablebool != NULL){
      return m_wxNavigationEnabledWindowExtDoEnablebool(this, param0);
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
  wxNavigationEnabledWindowExtDoGetBestClientHeightintFunc m_wxNavigationEnabledWindowExtDoGetBestClientHeightint = NULL;
  virtual int DoGetBestClientHeight(int param0) const override
  {
    int res = wxNavigationEnabledWindow::DoGetBestClientHeight(param0);
    if (*m_wxNavigationEnabledWindowExtDoGetBestClientHeightint != NULL){
      return m_wxNavigationEnabledWindowExtDoGetBestClientHeightint(this, param0);
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
      return m_wxNavigationEnabledWindowExtDoGetBestClientSize(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoGetBestClientWidthintFunc m_wxNavigationEnabledWindowExtDoGetBestClientWidthint = NULL;
  virtual int DoGetBestClientWidth(int param0) const override
  {
    int res = wxNavigationEnabledWindow::DoGetBestClientWidth(param0);
    if (*m_wxNavigationEnabledWindowExtDoGetBestClientWidthint != NULL){
      return m_wxNavigationEnabledWindowExtDoGetBestClientWidthint(this, param0);
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
      return m_wxNavigationEnabledWindowExtDoGetBestSize(this);
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
      return m_wxNavigationEnabledWindowExtDoGetClientData(this);
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
      return m_wxNavigationEnabledWindowExtDoGetClientObject(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoGetClientSizeintPintPFunc m_wxNavigationEnabledWindowExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxNavigationEnabledWindow::DoGetClientSize(width, height);
    if (*m_wxNavigationEnabledWindowExtDoGetClientSizeintPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxNavigationEnabledWindowExtDoGetPositionintPintPFunc m_wxNavigationEnabledWindowExtDoGetPositionintPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxNavigationEnabledWindow::DoGetPosition(x, y);
    if (*m_wxNavigationEnabledWindowExtDoGetPositionintPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoGetPositionintPintP(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtDoGetScreenPositionintPintPFunc m_wxNavigationEnabledWindowExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxNavigationEnabledWindow::DoGetScreenPosition(x, y);
    if (*m_wxNavigationEnabledWindowExtDoGetScreenPositionintPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtDoGetSizeintPintPFunc m_wxNavigationEnabledWindowExtDoGetSizeintPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxNavigationEnabledWindow::DoGetSize(width, height);
    if (*m_wxNavigationEnabledWindowExtDoGetSizeintPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoGetSizeintPintP(this, width, height);
    }
  }
  wxNavigationEnabledWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxNavigationEnabledWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* font = __null) const override
  {
    wxNavigationEnabledWindow::DoGetTextExtent(string, x, y, descent, externalLeading, font);
    if (*m_wxNavigationEnabledWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxNavigationEnabledWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, font);
    }
  }
  wxNavigationEnabledWindowExtDoGetVirtualSizeFunc m_wxNavigationEnabledWindowExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxNavigationEnabledWindow::DoGetVirtualSize();
    if (*m_wxNavigationEnabledWindowExtDoGetVirtualSize != NULL){
      return m_wxNavigationEnabledWindowExtDoGetVirtualSize(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoHitTestwxCoordwxCoordFunc m_wxNavigationEnabledWindowExtDoHitTestwxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxNavigationEnabledWindow::DoHitTest(x, y);
    if (*m_wxNavigationEnabledWindowExtDoHitTestwxCoordwxCoord != NULL){
      return m_wxNavigationEnabledWindowExtDoHitTestwxCoordwxCoord(this, x, y);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoIsExposedintintintintFunc m_wxNavigationEnabledWindowExtDoIsExposedintintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxNavigationEnabledWindow::DoIsExposed(x, y, w, h);
    if (*m_wxNavigationEnabledWindowExtDoIsExposedintintintint != NULL){
      return m_wxNavigationEnabledWindowExtDoIsExposedintintintint(this, x, y, w, h);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoIsExposedintintFunc m_wxNavigationEnabledWindowExtDoIsExposedintint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxNavigationEnabledWindow::DoIsExposed(x, y);
    if (*m_wxNavigationEnabledWindowExtDoIsExposedintint != NULL){
      return m_wxNavigationEnabledWindowExtDoIsExposedintint(this, x, y);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoMoveWindowintintintintFunc m_wxNavigationEnabledWindowExtDoMoveWindowintintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxNavigationEnabledWindow::DoMoveWindow(x, y, width, height);
    if (*m_wxNavigationEnabledWindowExtDoMoveWindowintintintint != NULL){
      return m_wxNavigationEnabledWindowExtDoMoveWindowintintintint(this, x, y, width, height);
    }
  }
  wxNavigationEnabledWindowExtDoNavigateInintFunc m_wxNavigationEnabledWindowExtDoNavigateInint = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxNavigationEnabledWindow::DoNavigateIn(flags);
    if (*m_wxNavigationEnabledWindowExtDoNavigateInint != NULL){
      return m_wxNavigationEnabledWindowExtDoNavigateInint(this, flags);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoPhaseintFunc m_wxNavigationEnabledWindowExtDoPhaseint = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxNavigationEnabledWindow::DoPhase(phase);
    if (*m_wxNavigationEnabledWindowExtDoPhaseint != NULL){
      return m_wxNavigationEnabledWindowExtDoPhaseint(this, phase);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtDoPopupMenuwxMenuPintintFunc m_wxNavigationEnabledWindowExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxNavigationEnabledWindow::DoPopupMenu(menu, x, y);
    if (*m_wxNavigationEnabledWindowExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxNavigationEnabledWindowExtDoPopupMenuwxMenuPintint(this, menu, x, y);
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
  wxNavigationEnabledWindowExtDoScreenToClientintPintPFunc m_wxNavigationEnabledWindowExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxNavigationEnabledWindow::DoScreenToClient(x, y);
    if (*m_wxNavigationEnabledWindowExtDoScreenToClientintPintP != NULL){
      return m_wxNavigationEnabledWindowExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtDoSetClientDatavoidPFunc m_wxNavigationEnabledWindowExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxNavigationEnabledWindow::DoSetClientData(data);
    if (*m_wxNavigationEnabledWindowExtDoSetClientDatavoidP != NULL){
      return m_wxNavigationEnabledWindowExtDoSetClientDatavoidP(this, data);
    }
  }
  wxNavigationEnabledWindowExtDoSetClientObjectwxClientDataPFunc m_wxNavigationEnabledWindowExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxNavigationEnabledWindow::DoSetClientObject(data);
    if (*m_wxNavigationEnabledWindowExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxNavigationEnabledWindowExtDoSetClientObjectwxClientDataP(this, data);
    }
  }
  wxNavigationEnabledWindowExtDoSetClientSizeintintFunc m_wxNavigationEnabledWindowExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxNavigationEnabledWindow::DoSetClientSize(width, height);
    if (*m_wxNavigationEnabledWindowExtDoSetClientSizeintint != NULL){
      return m_wxNavigationEnabledWindowExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxNavigationEnabledWindowExtDoSetSizeintintintintintFunc m_wxNavigationEnabledWindowExtDoSetSizeintintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxNavigationEnabledWindow::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxNavigationEnabledWindowExtDoSetSizeintintintintint != NULL){
      return m_wxNavigationEnabledWindowExtDoSetSizeintintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxNavigationEnabledWindowExtDoSetSizeHintsintintintintintintFunc m_wxNavigationEnabledWindowExtDoSetSizeHintsintintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxNavigationEnabledWindow::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxNavigationEnabledWindowExtDoSetSizeHintsintintintintintint != NULL){
      return m_wxNavigationEnabledWindowExtDoSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxNavigationEnabledWindowExtDoSetToolTipwxToolTipPFunc m_wxNavigationEnabledWindowExtDoSetToolTipwxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxNavigationEnabledWindow::DoSetToolTip(tip);
    if (*m_wxNavigationEnabledWindowExtDoSetToolTipwxToolTipP != NULL){
      return m_wxNavigationEnabledWindowExtDoSetToolTipwxToolTipP(this, tip);
    }
  }
  wxNavigationEnabledWindowExtDoSetToolTipTextwxStringCRFunc m_wxNavigationEnabledWindowExtDoSetToolTipTextwxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxNavigationEnabledWindow::DoSetToolTipText(tip);
    if (*m_wxNavigationEnabledWindowExtDoSetToolTipTextwxStringCR != NULL){
      return m_wxNavigationEnabledWindowExtDoSetToolTipTextwxStringCR(this, tip);
    }
  }
  wxNavigationEnabledWindowExtDoSetVirtualSizeintintFunc m_wxNavigationEnabledWindowExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxNavigationEnabledWindow::DoSetVirtualSize(x, y);
    if (*m_wxNavigationEnabledWindowExtDoSetVirtualSizeintint != NULL){
      return m_wxNavigationEnabledWindowExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtDoSetWindowVariantwxWindowVariantFunc m_wxNavigationEnabledWindowExtDoSetWindowVariantwxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxNavigationEnabledWindow::DoSetWindowVariant(variant);
    if (*m_wxNavigationEnabledWindowExtDoSetWindowVariantwxWindowVariant != NULL){
      return m_wxNavigationEnabledWindowExtDoSetWindowVariantwxWindowVariant(this, variant);
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
  wxNavigationEnabledWindowExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxNavigationEnabledWindowExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxNavigationEnabledWindow::DoUpdateWindowUI(event);
    if (*m_wxNavigationEnabledWindowExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxNavigationEnabledWindowExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxNavigationEnabledWindowExtDragAcceptFilesboolFunc m_wxNavigationEnabledWindowExtDragAcceptFilesbool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxNavigationEnabledWindow::DragAcceptFiles(accept);
    if (*m_wxNavigationEnabledWindowExtDragAcceptFilesbool != NULL){
      return m_wxNavigationEnabledWindowExtDragAcceptFilesbool(this, accept);
    }
  }
  wxNavigationEnabledWindowExtEnableboolFunc m_wxNavigationEnabledWindowExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxNavigationEnabledWindow::Enable(enable);
    if (*m_wxNavigationEnabledWindowExtEnablebool != NULL){
      return m_wxNavigationEnabledWindowExtEnablebool(this, enable);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtEnableTouchEventsintFunc m_wxNavigationEnabledWindowExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int param0) override
  {
    bool res = wxNavigationEnabledWindow::EnableTouchEvents(param0);
    if (*m_wxNavigationEnabledWindowExtEnableTouchEventsint != NULL){
      return m_wxNavigationEnabledWindowExtEnableTouchEventsint(this, param0);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtEnableVisibleFocusboolFunc m_wxNavigationEnabledWindowExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool param0) override
  {
    wxNavigationEnabledWindow::EnableVisibleFocus(param0);
    if (*m_wxNavigationEnabledWindowExtEnableVisibleFocusbool != NULL){
      return m_wxNavigationEnabledWindowExtEnableVisibleFocusbool(this, param0);
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
      return m_wxNavigationEnabledWindowExtGetBestVirtualSize(this);
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
      return m_wxNavigationEnabledWindowExtGetCharHeight(this);
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
      return m_wxNavigationEnabledWindowExtGetCharWidth(this);
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
      return m_wxNavigationEnabledWindowExtGetClassInfo(this);
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
      return m_wxNavigationEnabledWindowExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetClientSizeConstraintintPintPFunc m_wxNavigationEnabledWindowExtGetClientSizeConstraintintPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxNavigationEnabledWindow::GetClientSizeConstraint(w, h);
    if (*m_wxNavigationEnabledWindowExtGetClientSizeConstraintintPintP != NULL){
      return m_wxNavigationEnabledWindowExtGetClientSizeConstraintintPintP(this, w, h);
    }
  }
  wxNavigationEnabledWindowExtGetContentScaleFactorFunc m_wxNavigationEnabledWindowExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxNavigationEnabledWindow::GetContentScaleFactor();
    if (*m_wxNavigationEnabledWindowExtGetContentScaleFactor != NULL){
      return m_wxNavigationEnabledWindowExtGetContentScaleFactor(this);
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
      return m_wxNavigationEnabledWindowExtGetDPI(this);
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
      return m_wxNavigationEnabledWindowExtGetDPIScaleFactor(this);
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
      return m_wxNavigationEnabledWindowExtGetDefaultAttributes(this);
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
      return m_wxNavigationEnabledWindowExtGetDefaultBorder(this);
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
      return m_wxNavigationEnabledWindowExtGetDefaultBorderForControl(this);
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
      return m_wxNavigationEnabledWindowExtGetDropTarget(this);
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
      return m_wxNavigationEnabledWindowExtGetEffectiveMinSize(this);
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
      return m_wxNavigationEnabledWindowExtGetEventHashTable(this);
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
      return m_wxNavigationEnabledWindowExtGetEventTable(this);
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
      return m_wxNavigationEnabledWindowExtGetHandle(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc m_wxNavigationEnabledWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxNavigationEnabledWindow::GetHelpTextAtPoint(pt, origin);
    if (*m_wxNavigationEnabledWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin != NULL){
      return m_wxNavigationEnabledWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin(this, pt, origin);
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
      return m_wxNavigationEnabledWindowExtGetLabel(this);
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
      return m_wxNavigationEnabledWindowExtGetLayoutDirection(this);
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
      return m_wxNavigationEnabledWindowExtGetMainWindowOfCompositeControl(this);
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
      return m_wxNavigationEnabledWindowExtGetMaxClientSize(this);
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
      return m_wxNavigationEnabledWindowExtGetMaxSize(this);
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
      return m_wxNavigationEnabledWindowExtGetMinClientSize(this);
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
      return m_wxNavigationEnabledWindowExtGetMinSize(this);
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
      return m_wxNavigationEnabledWindowExtGetName(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetPositionConstraintintPintPFunc m_wxNavigationEnabledWindowExtGetPositionConstraintintPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxNavigationEnabledWindow::GetPositionConstraint(x, y);
    if (*m_wxNavigationEnabledWindowExtGetPositionConstraintintPintP != NULL){
      return m_wxNavigationEnabledWindowExtGetPositionConstraintintPintP(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtGetScrollPosintFunc m_wxNavigationEnabledWindowExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxNavigationEnabledWindow::GetScrollPos(orient);
    if (*m_wxNavigationEnabledWindowExtGetScrollPosint != NULL){
      return m_wxNavigationEnabledWindowExtGetScrollPosint(this, orient);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetScrollRangeintFunc m_wxNavigationEnabledWindowExtGetScrollRangeint = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxNavigationEnabledWindow::GetScrollRange(orient);
    if (*m_wxNavigationEnabledWindowExtGetScrollRangeint != NULL){
      return m_wxNavigationEnabledWindowExtGetScrollRangeint(this, orient);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetScrollThumbintFunc m_wxNavigationEnabledWindowExtGetScrollThumbint = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxNavigationEnabledWindow::GetScrollThumb(orient);
    if (*m_wxNavigationEnabledWindowExtGetScrollThumbint != NULL){
      return m_wxNavigationEnabledWindowExtGetScrollThumbint(this, orient);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtGetSizeConstraintintPintPFunc m_wxNavigationEnabledWindowExtGetSizeConstraintintPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxNavigationEnabledWindow::GetSizeConstraint(w, h);
    if (*m_wxNavigationEnabledWindowExtGetSizeConstraintintPintP != NULL){
      return m_wxNavigationEnabledWindowExtGetSizeConstraintintPintP(this, w, h);
    }
  }
  wxNavigationEnabledWindowExtGetThemeEnabledFunc m_wxNavigationEnabledWindowExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxNavigationEnabledWindow::GetThemeEnabled();
    if (*m_wxNavigationEnabledWindowExtGetThemeEnabled != NULL){
      return m_wxNavigationEnabledWindowExtGetThemeEnabled(this);
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
      return m_wxNavigationEnabledWindowExtGetValidator(this);
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
      return m_wxNavigationEnabledWindowExtGetWindowBorderSize(this);
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
      return m_wxNavigationEnabledWindowExtGetWindowStyleFlag(this);
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
      return m_wxNavigationEnabledWindowExtHasCapture(this);
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
      return m_wxNavigationEnabledWindowExtHasFocus(this);
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
      return m_wxNavigationEnabledWindowExtHasMultiplePages(this);
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
      return m_wxNavigationEnabledWindowExtHasTransparentBackground(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtHideWithEffectwxShowEffectunsignedintFunc m_wxNavigationEnabledWindowExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxNavigationEnabledWindow::HideWithEffect(param0, param1);
    if (*m_wxNavigationEnabledWindowExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxNavigationEnabledWindowExtHideWithEffectwxShowEffectunsignedint(this, param0, param1);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtInformFirstDirectionintintintFunc m_wxNavigationEnabledWindowExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxNavigationEnabledWindow::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxNavigationEnabledWindowExtInformFirstDirectionintintint != NULL){
      return m_wxNavigationEnabledWindowExtInformFirstDirectionintintint(this, direction, size, availableOtherDir);
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
  wxNavigationEnabledWindowExtIsClientAreaChildwxWindowCPFunc m_wxNavigationEnabledWindowExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* param0) const override
  {
    bool res = wxNavigationEnabledWindow::IsClientAreaChild(param0);
    if (*m_wxNavigationEnabledWindowExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxNavigationEnabledWindowExtIsClientAreaChildwxWindowCP(this, param0);
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
      return m_wxNavigationEnabledWindowExtIsDoubleBuffered(this);
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
      return m_wxNavigationEnabledWindowExtIsRetained(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsScrollbarAlwaysShownintFunc m_wxNavigationEnabledWindowExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int param0) const override
  {
    bool res = wxNavigationEnabledWindow::IsScrollbarAlwaysShown(param0);
    if (*m_wxNavigationEnabledWindowExtIsScrollbarAlwaysShownint != NULL){
      return m_wxNavigationEnabledWindowExtIsScrollbarAlwaysShownint(this, param0);
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
      return m_wxNavigationEnabledWindowExtIsShown(this);
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
      return m_wxNavigationEnabledWindowExtIsShownOnScreen(this);
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
      return m_wxNavigationEnabledWindowExtIsThisEnabled(this);
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
      return m_wxNavigationEnabledWindowExtIsTopLevel(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxNavigationEnabledWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind param0) const override
  {
    bool res = wxNavigationEnabledWindow::IsTopNavigationDomain(param0);
    if (*m_wxNavigationEnabledWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxNavigationEnabledWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, param0);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtIsTransparentBackgroundSupportedwxStringPFunc m_wxNavigationEnabledWindowExtIsTransparentBackgroundSupportedwxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxNavigationEnabledWindow::IsTransparentBackgroundSupported(reason);
    if (*m_wxNavigationEnabledWindowExtIsTransparentBackgroundSupportedwxStringP != NULL){
      return m_wxNavigationEnabledWindowExtIsTransparentBackgroundSupportedwxStringP(this, reason);
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
      return m_wxNavigationEnabledWindowExtLayout(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtLayoutPhase1intPFunc m_wxNavigationEnabledWindowExtLayoutPhase1intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxNavigationEnabledWindow::LayoutPhase1(noChanges);
    if (*m_wxNavigationEnabledWindowExtLayoutPhase1intP != NULL){
      return m_wxNavigationEnabledWindowExtLayoutPhase1intP(this, noChanges);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtLayoutPhase2intPFunc m_wxNavigationEnabledWindowExtLayoutPhase2intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxNavigationEnabledWindow::LayoutPhase2(noChanges);
    if (*m_wxNavigationEnabledWindowExtLayoutPhase2intP != NULL){
      return m_wxNavigationEnabledWindowExtLayoutPhase2intP(this, noChanges);
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
  wxNavigationEnabledWindowExtMoveConstraintintintFunc m_wxNavigationEnabledWindowExtMoveConstraintintint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxNavigationEnabledWindow::MoveConstraint(x, y);
    if (*m_wxNavigationEnabledWindowExtMoveConstraintintint != NULL){
      return m_wxNavigationEnabledWindowExtMoveConstraintintint(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxNavigationEnabledWindowExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxNavigationEnabledWindow::OnDynamicBind(param0);
    if (*m_wxNavigationEnabledWindowExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxNavigationEnabledWindowExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
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
  wxNavigationEnabledWindowExtPrepareDCwxDCRFunc m_wxNavigationEnabledWindowExtPrepareDCwxDCR = NULL;
  virtual void PrepareDC(wxDC& param0) override
  {
    wxNavigationEnabledWindow::PrepareDC(param0);
    if (*m_wxNavigationEnabledWindowExtPrepareDCwxDCR != NULL){
      return m_wxNavigationEnabledWindowExtPrepareDCwxDCR(this, param0);
    }
  }
  wxNavigationEnabledWindowExtProcessEventwxEventRFunc m_wxNavigationEnabledWindowExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxNavigationEnabledWindow::ProcessEvent(event);
    if (*m_wxNavigationEnabledWindowExtProcessEventwxEventR != NULL){
      return m_wxNavigationEnabledWindowExtProcessEventwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtQueueEventwxEventPFunc m_wxNavigationEnabledWindowExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxNavigationEnabledWindow::QueueEvent(event);
    if (*m_wxNavigationEnabledWindowExtQueueEventwxEventP != NULL){
      return m_wxNavigationEnabledWindowExtQueueEventwxEventP(this, event);
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
  wxNavigationEnabledWindowExtRefreshboolwxRectCPFunc m_wxNavigationEnabledWindowExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = (const wxRect*)__null) override
  {
    wxNavigationEnabledWindow::Refresh(eraseBackground, rect);
    if (*m_wxNavigationEnabledWindowExtRefreshboolwxRectCP != NULL){
      return m_wxNavigationEnabledWindowExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxNavigationEnabledWindowExtRegisterHotKeyintintintFunc m_wxNavigationEnabledWindowExtRegisterHotKeyintintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxNavigationEnabledWindow::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxNavigationEnabledWindowExtRegisterHotKeyintintint != NULL){
      return m_wxNavigationEnabledWindowExtRegisterHotKeyintintint(this, hotkeyId, modifiers, keycode);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtRemoveChildwxWindowBasePFunc m_wxNavigationEnabledWindowExtRemoveChildwxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxNavigationEnabledWindow::RemoveChild(child);
    if (*m_wxNavigationEnabledWindowExtRemoveChildwxWindowBaseP != NULL){
      return m_wxNavigationEnabledWindowExtRemoveChildwxWindowBaseP(this, child);
    }
  }
  wxNavigationEnabledWindowExtReparentwxWindowBasePFunc m_wxNavigationEnabledWindowExtReparentwxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxNavigationEnabledWindow::Reparent(newParent);
    if (*m_wxNavigationEnabledWindowExtReparentwxWindowBaseP != NULL){
      return m_wxNavigationEnabledWindowExtReparentwxWindowBaseP(this, newParent);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtScrollLinesintFunc m_wxNavigationEnabledWindowExtScrollLinesint = NULL;
  virtual bool ScrollLines(int param0) override
  {
    bool res = wxNavigationEnabledWindow::ScrollLines(param0);
    if (*m_wxNavigationEnabledWindowExtScrollLinesint != NULL){
      return m_wxNavigationEnabledWindowExtScrollLinesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtScrollPagesintFunc m_wxNavigationEnabledWindowExtScrollPagesint = NULL;
  virtual bool ScrollPages(int param0) override
  {
    bool res = wxNavigationEnabledWindow::ScrollPages(param0);
    if (*m_wxNavigationEnabledWindowExtScrollPagesint != NULL){
      return m_wxNavigationEnabledWindowExtScrollPagesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtScrollWindowintintwxRectCPFunc m_wxNavigationEnabledWindowExtScrollWindowintintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxNavigationEnabledWindow::ScrollWindow(dx, dy, rect);
    if (*m_wxNavigationEnabledWindowExtScrollWindowintintwxRectCP != NULL){
      return m_wxNavigationEnabledWindowExtScrollWindowintintwxRectCP(this, dx, dy, rect);
    }
  }
  wxNavigationEnabledWindowExtSearchEventTablewxEventTableRwxEventRFunc m_wxNavigationEnabledWindowExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxNavigationEnabledWindow::SearchEventTable(table, event);
    if (*m_wxNavigationEnabledWindowExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxNavigationEnabledWindowExtSearchEventTablewxEventTableRwxEventR(this, table, event);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSendIdleEventswxIdleEventRFunc m_wxNavigationEnabledWindowExtSendIdleEventswxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxNavigationEnabledWindow::SendIdleEvents(event);
    if (*m_wxNavigationEnabledWindowExtSendIdleEventswxIdleEventR != NULL){
      return m_wxNavigationEnabledWindowExtSendIdleEventswxIdleEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSendSizeEventintFunc m_wxNavigationEnabledWindowExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxNavigationEnabledWindow::SendSizeEvent(flags);
    if (*m_wxNavigationEnabledWindowExtSendSizeEventint != NULL){
      return m_wxNavigationEnabledWindowExtSendSizeEventint(this, flags);
    }
  }
  wxNavigationEnabledWindowExtSetAcceleratorTablewxAcceleratorTableCRFunc m_wxNavigationEnabledWindowExtSetAcceleratorTablewxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxNavigationEnabledWindow::SetAcceleratorTable(accel);
    if (*m_wxNavigationEnabledWindowExtSetAcceleratorTablewxAcceleratorTableCR != NULL){
      return m_wxNavigationEnabledWindowExtSetAcceleratorTablewxAcceleratorTableCR(this, accel);
    }
  }
  wxNavigationEnabledWindowExtSetBackgroundColourwxColourCRFunc m_wxNavigationEnabledWindowExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxNavigationEnabledWindow::SetBackgroundColour(colour);
    if (*m_wxNavigationEnabledWindowExtSetBackgroundColourwxColourCR != NULL){
      return m_wxNavigationEnabledWindowExtSetBackgroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetBackgroundStylewxBackgroundStyleFunc m_wxNavigationEnabledWindowExtSetBackgroundStylewxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxNavigationEnabledWindow::SetBackgroundStyle(style);
    if (*m_wxNavigationEnabledWindowExtSetBackgroundStylewxBackgroundStyle != NULL){
      return m_wxNavigationEnabledWindowExtSetBackgroundStylewxBackgroundStyle(this, style);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetCanFocusboolFunc m_wxNavigationEnabledWindowExtSetCanFocusbool = NULL;
  virtual void SetCanFocus(bool param0) override
  {
    wxNavigationEnabledWindow::SetCanFocus(param0);
    if (*m_wxNavigationEnabledWindowExtSetCanFocusbool != NULL){
      return m_wxNavigationEnabledWindowExtSetCanFocusbool(this, param0);
    }
  }
  wxNavigationEnabledWindowExtSetConstraintSizesboolFunc m_wxNavigationEnabledWindowExtSetConstraintSizesbool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxNavigationEnabledWindow::SetConstraintSizes(recurse);
    if (*m_wxNavigationEnabledWindowExtSetConstraintSizesbool != NULL){
      return m_wxNavigationEnabledWindowExtSetConstraintSizesbool(this, recurse);
    }
  }
  wxNavigationEnabledWindowExtSetCursorwxCursorCRFunc m_wxNavigationEnabledWindowExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxNavigationEnabledWindow::SetCursor(cursor);
    if (*m_wxNavigationEnabledWindowExtSetCursorwxCursorCR != NULL){
      return m_wxNavigationEnabledWindowExtSetCursorwxCursorCR(this, cursor);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetDoubleBufferedboolFunc m_wxNavigationEnabledWindowExtSetDoubleBufferedbool = NULL;
  virtual void SetDoubleBuffered(bool param0) override
  {
    wxNavigationEnabledWindow::SetDoubleBuffered(param0);
    if (*m_wxNavigationEnabledWindowExtSetDoubleBufferedbool != NULL){
      return m_wxNavigationEnabledWindowExtSetDoubleBufferedbool(this, param0);
    }
  }
  wxNavigationEnabledWindowExtSetDropTargetwxDropTargetPFunc m_wxNavigationEnabledWindowExtSetDropTargetwxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxNavigationEnabledWindow::SetDropTarget(dropTarget);
    if (*m_wxNavigationEnabledWindowExtSetDropTargetwxDropTargetP != NULL){
      return m_wxNavigationEnabledWindowExtSetDropTargetwxDropTargetP(this, dropTarget);
    }
  }
  wxNavigationEnabledWindowExtSetExtraStylelongFunc m_wxNavigationEnabledWindowExtSetExtraStylelong = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxNavigationEnabledWindow::SetExtraStyle(exStyle);
    if (*m_wxNavigationEnabledWindowExtSetExtraStylelong != NULL){
      return m_wxNavigationEnabledWindowExtSetExtraStylelong(this, exStyle);
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
  wxNavigationEnabledWindowExtSetFontwxFontCRFunc m_wxNavigationEnabledWindowExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxNavigationEnabledWindow::SetFont(font);
    if (*m_wxNavigationEnabledWindowExtSetFontwxFontCR != NULL){
      return m_wxNavigationEnabledWindowExtSetFontwxFontCR(this, font);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetForegroundColourwxColourCRFunc m_wxNavigationEnabledWindowExtSetForegroundColourwxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxNavigationEnabledWindow::SetForegroundColour(colour);
    if (*m_wxNavigationEnabledWindowExtSetForegroundColourwxColourCR != NULL){
      return m_wxNavigationEnabledWindowExtSetForegroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetIdwxWindowIDFunc m_wxNavigationEnabledWindowExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxNavigationEnabledWindow::SetId(winid);
    if (*m_wxNavigationEnabledWindowExtSetIdwxWindowID != NULL){
      return m_wxNavigationEnabledWindowExtSetIdwxWindowID(this, winid);
    }
  }
  wxNavigationEnabledWindowExtSetLabelwxStringCRFunc m_wxNavigationEnabledWindowExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxNavigationEnabledWindow::SetLabel(label);
    if (*m_wxNavigationEnabledWindowExtSetLabelwxStringCR != NULL){
      return m_wxNavigationEnabledWindowExtSetLabelwxStringCR(this, label);
    }
  }
  wxNavigationEnabledWindowExtSetLayoutDirectionwxLayoutDirectionFunc m_wxNavigationEnabledWindowExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxNavigationEnabledWindow::SetLayoutDirection(param0);
    if (*m_wxNavigationEnabledWindowExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxNavigationEnabledWindowExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxNavigationEnabledWindowExtSetMaxClientSizewxSizeCRFunc m_wxNavigationEnabledWindowExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxNavigationEnabledWindow::SetMaxClientSize(size);
    if (*m_wxNavigationEnabledWindowExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxNavigationEnabledWindowExtSetMaxSizewxSizeCRFunc m_wxNavigationEnabledWindowExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxNavigationEnabledWindow::SetMaxSize(maxSize);
    if (*m_wxNavigationEnabledWindowExtSetMaxSizewxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxNavigationEnabledWindowExtSetMinClientSizewxSizeCRFunc m_wxNavigationEnabledWindowExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxNavigationEnabledWindow::SetMinClientSize(size);
    if (*m_wxNavigationEnabledWindowExtSetMinClientSizewxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxNavigationEnabledWindowExtSetMinSizewxSizeCRFunc m_wxNavigationEnabledWindowExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxNavigationEnabledWindow::SetMinSize(minSize);
    if (*m_wxNavigationEnabledWindowExtSetMinSizewxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxNavigationEnabledWindowExtSetNamewxStringCRFunc m_wxNavigationEnabledWindowExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxNavigationEnabledWindow::SetName(name);
    if (*m_wxNavigationEnabledWindowExtSetNamewxStringCR != NULL){
      return m_wxNavigationEnabledWindowExtSetNamewxStringCR(this, name);
    }
  }
  wxNavigationEnabledWindowExtSetNextHandlerwxEvtHandlerPFunc m_wxNavigationEnabledWindowExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxNavigationEnabledWindow::SetNextHandler(handler);
    if (*m_wxNavigationEnabledWindowExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxNavigationEnabledWindowExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxNavigationEnabledWindowExtSetPreviousHandlerwxEvtHandlerPFunc m_wxNavigationEnabledWindowExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxNavigationEnabledWindow::SetPreviousHandler(handler);
    if (*m_wxNavigationEnabledWindowExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxNavigationEnabledWindowExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxNavigationEnabledWindowExtSetScrollPosintintboolFunc m_wxNavigationEnabledWindowExtSetScrollPosintintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxNavigationEnabledWindow::SetScrollPos(orient, pos, refresh);
    if (*m_wxNavigationEnabledWindowExtSetScrollPosintintbool != NULL){
      return m_wxNavigationEnabledWindowExtSetScrollPosintintbool(this, orient, pos, refresh);
    }
  }
  wxNavigationEnabledWindowExtSetScrollbarintintintintboolFunc m_wxNavigationEnabledWindowExtSetScrollbarintintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbvisible, int range, bool refresh = true) override
  {
    wxNavigationEnabledWindow::SetScrollbar(orient, pos, thumbvisible, range, refresh);
    if (*m_wxNavigationEnabledWindowExtSetScrollbarintintintintbool != NULL){
      return m_wxNavigationEnabledWindowExtSetScrollbarintintintintbool(this, orient, pos, thumbvisible, range, refresh);
    }
  }
  wxNavigationEnabledWindowExtSetSizeConstraintintintintintFunc m_wxNavigationEnabledWindowExtSetSizeConstraintintintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxNavigationEnabledWindow::SetSizeConstraint(x, y, w, h);
    if (*m_wxNavigationEnabledWindowExtSetSizeConstraintintintintint != NULL){
      return m_wxNavigationEnabledWindowExtSetSizeConstraintintintintint(this, x, y, w, h);
    }
  }
  wxNavigationEnabledWindowExtSetSizeHintsintintintintintintFunc m_wxNavigationEnabledWindowExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxNavigationEnabledWindow::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxNavigationEnabledWindowExtSetSizeHintsintintintintintint != NULL){
      return m_wxNavigationEnabledWindowExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxNavigationEnabledWindowExtSetThemeEnabledboolFunc m_wxNavigationEnabledWindowExtSetThemeEnabledbool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxNavigationEnabledWindow::SetThemeEnabled(enableTheme);
    if (*m_wxNavigationEnabledWindowExtSetThemeEnabledbool != NULL){
      return m_wxNavigationEnabledWindowExtSetThemeEnabledbool(this, enableTheme);
    }
  }
  wxNavigationEnabledWindowExtSetTransparentwxByteFunc m_wxNavigationEnabledWindowExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte param0) override
  {
    bool res = wxNavigationEnabledWindow::SetTransparent(param0);
    if (*m_wxNavigationEnabledWindowExtSetTransparentwxByte != NULL){
      return m_wxNavigationEnabledWindowExtSetTransparentwxByte(this, param0);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtSetValidatorwxValidatorCRFunc m_wxNavigationEnabledWindowExtSetValidatorwxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxNavigationEnabledWindow::SetValidator(validator);
    if (*m_wxNavigationEnabledWindowExtSetValidatorwxValidatorCR != NULL){
      return m_wxNavigationEnabledWindowExtSetValidatorwxValidatorCR(this, validator);
    }
  }
  wxNavigationEnabledWindowExtSetWindowStyleFlaglongFunc m_wxNavigationEnabledWindowExtSetWindowStyleFlaglong = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxNavigationEnabledWindow::SetWindowStyleFlag(style);
    if (*m_wxNavigationEnabledWindowExtSetWindowStyleFlaglong != NULL){
      return m_wxNavigationEnabledWindowExtSetWindowStyleFlaglong(this, style);
    }
  }
  wxNavigationEnabledWindowExtShouldInheritColoursFunc m_wxNavigationEnabledWindowExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxNavigationEnabledWindow::ShouldInheritColours();
    if (*m_wxNavigationEnabledWindowExtShouldInheritColours != NULL){
      return m_wxNavigationEnabledWindowExtShouldInheritColours(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtShowboolFunc m_wxNavigationEnabledWindowExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxNavigationEnabledWindow::Show(show);
    if (*m_wxNavigationEnabledWindowExtShowbool != NULL){
      return m_wxNavigationEnabledWindowExtShowbool(this, show);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtShowWithEffectwxShowEffectunsignedintFunc m_wxNavigationEnabledWindowExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxNavigationEnabledWindow::ShowWithEffect(param0, param1);
    if (*m_wxNavigationEnabledWindowExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxNavigationEnabledWindowExtShowWithEffectwxShowEffectunsignedint(this, param0, param1);
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
      return m_wxNavigationEnabledWindowExtTransferDataFromWindow(this);
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
      return m_wxNavigationEnabledWindowExtTransferDataToWindow(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtTryAfterwxEventRFunc m_wxNavigationEnabledWindowExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxNavigationEnabledWindow::TryAfter(event);
    if (*m_wxNavigationEnabledWindowExtTryAfterwxEventR != NULL){
      return m_wxNavigationEnabledWindowExtTryAfterwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtTryBeforewxEventRFunc m_wxNavigationEnabledWindowExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxNavigationEnabledWindow::TryBefore(event);
    if (*m_wxNavigationEnabledWindowExtTryBeforewxEventR != NULL){
      return m_wxNavigationEnabledWindowExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtUnregisterHotKeyintFunc m_wxNavigationEnabledWindowExtUnregisterHotKeyint = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxNavigationEnabledWindow::UnregisterHotKey(hotkeyId);
    if (*m_wxNavigationEnabledWindowExtUnregisterHotKeyint != NULL){
      return m_wxNavigationEnabledWindowExtUnregisterHotKeyint(this, hotkeyId);
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
  wxNavigationEnabledWindowExtUpdateWindowUIlongFunc m_wxNavigationEnabledWindowExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxNavigationEnabledWindow::UpdateWindowUI(flags);
    if (*m_wxNavigationEnabledWindowExtUpdateWindowUIlong != NULL){
      return m_wxNavigationEnabledWindowExtUpdateWindowUIlong(this, flags);
    }
  }
  wxNavigationEnabledWindowExtValidateFunc m_wxNavigationEnabledWindowExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxNavigationEnabledWindow::Validate();
    if (*m_wxNavigationEnabledWindowExtValidate != NULL){
      return m_wxNavigationEnabledWindowExtValidate(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXAdjustFontToOwnPPIwxFontRFunc m_wxNavigationEnabledWindowExtWXAdjustFontToOwnPPIwxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& param0) const override
  {
    wxNavigationEnabledWindow::WXAdjustFontToOwnPPI(param0);
    if (*m_wxNavigationEnabledWindowExtWXAdjustFontToOwnPPIwxFontR != NULL){
      return m_wxNavigationEnabledWindowExtWXAdjustFontToOwnPPIwxFontR(this, param0);
    }
  }
  wxNavigationEnabledWindowExtWXGetTextEntryFunc m_wxNavigationEnabledWindowExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxNavigationEnabledWindow::WXGetTextEntry();
    if (*m_wxNavigationEnabledWindowExtWXGetTextEntry != NULL){
      return m_wxNavigationEnabledWindowExtWXGetTextEntry(this);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXReservedEvtHandler1voidPFunc m_wxNavigationEnabledWindowExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxNavigationEnabledWindow::WXReservedEvtHandler1(param0);
    if (*m_wxNavigationEnabledWindowExtWXReservedEvtHandler1voidP != NULL){
      return m_wxNavigationEnabledWindowExtWXReservedEvtHandler1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXReservedEvtHandler2voidPFunc m_wxNavigationEnabledWindowExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxNavigationEnabledWindow::WXReservedEvtHandler2(param0);
    if (*m_wxNavigationEnabledWindowExtWXReservedEvtHandler2voidP != NULL){
      return m_wxNavigationEnabledWindowExtWXReservedEvtHandler2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXReservedWindow1voidPFunc m_wxNavigationEnabledWindowExtWXReservedWindow1voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxNavigationEnabledWindow::WXReservedWindow1(param0);
    if (*m_wxNavigationEnabledWindowExtWXReservedWindow1voidP != NULL){
      return m_wxNavigationEnabledWindowExtWXReservedWindow1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXReservedWindow2voidPFunc m_wxNavigationEnabledWindowExtWXReservedWindow2voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxNavigationEnabledWindow::WXReservedWindow2(param0);
    if (*m_wxNavigationEnabledWindowExtWXReservedWindow2voidP != NULL){
      return m_wxNavigationEnabledWindowExtWXReservedWindow2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXReservedWindow3voidPFunc m_wxNavigationEnabledWindowExtWXReservedWindow3voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxNavigationEnabledWindow::WXReservedWindow3(param0);
    if (*m_wxNavigationEnabledWindowExtWXReservedWindow3voidP != NULL){
      return m_wxNavigationEnabledWindowExtWXReservedWindow3voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExtWXSetInitialFittingClientSizeintwxSizerPFunc m_wxNavigationEnabledWindowExtWXSetInitialFittingClientSizeintwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxNavigationEnabledWindow::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxNavigationEnabledWindowExtWXSetInitialFittingClientSizeintwxSizerP != NULL){
      return m_wxNavigationEnabledWindowExtWXSetInitialFittingClientSizeintwxSizerP(this, flags, sizer);
    }
  }
  wxNavigationEnabledWindowExtWarpPointerintintFunc m_wxNavigationEnabledWindowExtWarpPointerintint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxNavigationEnabledWindow::WarpPointer(x, y);
    if (*m_wxNavigationEnabledWindowExtWarpPointerintint != NULL){
      return m_wxNavigationEnabledWindowExtWarpPointerintint(this, x, y);
    }
  }
  wxNavigationEnabledWindowExtWindowToClientSizewxSizeCRFunc m_wxNavigationEnabledWindowExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxNavigationEnabledWindow::WindowToClientSize(size);
    if (*m_wxNavigationEnabledWindowExtWindowToClientSizewxSizeCR != NULL){
      return m_wxNavigationEnabledWindowExtWindowToClientSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxNavigationEnabledWindowExt(wxNavigationEnabledWindowExtAcceptsFocusFunc a_AcceptsFocus, wxNavigationEnabledWindowExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxNavigationEnabledWindowExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxNavigationEnabledWindowExtAddChildwxWindowBasePFunc a_AddChildwxWindowBaseP, wxNavigationEnabledWindowExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxNavigationEnabledWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxNavigationEnabledWindowExtAdjustForParentClientOriginintRintRintFunc a_AdjustForParentClientOriginintRintRint, wxNavigationEnabledWindowExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxNavigationEnabledWindowExtAssociateHandleWXWidgetFunc a_AssociateHandleWXWidget, wxNavigationEnabledWindowExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxNavigationEnabledWindowExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxNavigationEnabledWindowExtCanBeFocusedFunc a_CanBeFocused, wxNavigationEnabledWindowExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxNavigationEnabledWindowExtCanScrollintFunc a_CanScrollint, wxNavigationEnabledWindowExtCanSetTransparentFunc a_CanSetTransparent, wxNavigationEnabledWindowExtClearBackgroundFunc a_ClearBackground, wxNavigationEnabledWindowExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxNavigationEnabledWindowExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxNavigationEnabledWindowExtCreateRefDataFunc a_CreateRefData, wxNavigationEnabledWindowExtDestroyFunc a_Destroy, wxNavigationEnabledWindowExtDissociateHandleFunc a_DissociateHandle, wxNavigationEnabledWindowExtDoCaptureMouseFunc a_DoCaptureMouse, wxNavigationEnabledWindowExtDoCentreintFunc a_DoCentreint, wxNavigationEnabledWindowExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxNavigationEnabledWindowExtDoEnableboolFunc a_DoEnablebool, wxNavigationEnabledWindowExtDoFreezeFunc a_DoFreeze, wxNavigationEnabledWindowExtDoGetBestClientHeightintFunc a_DoGetBestClientHeightint, wxNavigationEnabledWindowExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxNavigationEnabledWindowExtDoGetBestClientWidthintFunc a_DoGetBestClientWidthint, wxNavigationEnabledWindowExtDoGetBestSizeFunc a_DoGetBestSize, wxNavigationEnabledWindowExtDoGetClientDataFunc a_DoGetClientData, wxNavigationEnabledWindowExtDoGetClientObjectFunc a_DoGetClientObject, wxNavigationEnabledWindowExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxNavigationEnabledWindowExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxNavigationEnabledWindowExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxNavigationEnabledWindowExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxNavigationEnabledWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxNavigationEnabledWindowExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxNavigationEnabledWindowExtDoHitTestwxCoordwxCoordFunc a_DoHitTestwxCoordwxCoord, wxNavigationEnabledWindowExtDoIsExposedintintintintFunc a_DoIsExposedintintintint, wxNavigationEnabledWindowExtDoIsExposedintintFunc a_DoIsExposedintint, wxNavigationEnabledWindowExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxNavigationEnabledWindowExtDoNavigateInintFunc a_DoNavigateInint, wxNavigationEnabledWindowExtDoPhaseintFunc a_DoPhaseint, wxNavigationEnabledWindowExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxNavigationEnabledWindowExtDoReleaseMouseFunc a_DoReleaseMouse, wxNavigationEnabledWindowExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxNavigationEnabledWindowExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxNavigationEnabledWindowExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxNavigationEnabledWindowExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxNavigationEnabledWindowExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxNavigationEnabledWindowExtDoSetSizeHintsintintintintintintFunc a_DoSetSizeHintsintintintintintint, wxNavigationEnabledWindowExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxNavigationEnabledWindowExtDoSetToolTipTextwxStringCRFunc a_DoSetToolTipTextwxStringCR, wxNavigationEnabledWindowExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxNavigationEnabledWindowExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxNavigationEnabledWindowExtDoThawFunc a_DoThaw, wxNavigationEnabledWindowExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxNavigationEnabledWindowExtDragAcceptFilesboolFunc a_DragAcceptFilesbool, wxNavigationEnabledWindowExtEnableboolFunc a_Enablebool, wxNavigationEnabledWindowExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxNavigationEnabledWindowExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxNavigationEnabledWindowExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxNavigationEnabledWindowExtFitFunc a_Fit, wxNavigationEnabledWindowExtFitInsideFunc a_FitInside, wxNavigationEnabledWindowExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxNavigationEnabledWindowExtGetCharHeightFunc a_GetCharHeight, wxNavigationEnabledWindowExtGetCharWidthFunc a_GetCharWidth, wxNavigationEnabledWindowExtGetClassInfoFunc a_GetClassInfo, wxNavigationEnabledWindowExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxNavigationEnabledWindowExtGetClientSizeConstraintintPintPFunc a_GetClientSizeConstraintintPintP, wxNavigationEnabledWindowExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxNavigationEnabledWindowExtGetDPIFunc a_GetDPI, wxNavigationEnabledWindowExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxNavigationEnabledWindowExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxNavigationEnabledWindowExtGetDefaultBorderFunc a_GetDefaultBorder, wxNavigationEnabledWindowExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxNavigationEnabledWindowExtGetDropTargetFunc a_GetDropTarget, wxNavigationEnabledWindowExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxNavigationEnabledWindowExtGetEventHashTableFunc a_GetEventHashTable, wxNavigationEnabledWindowExtGetEventTableFunc a_GetEventTable, wxNavigationEnabledWindowExtGetHandleFunc a_GetHandle, wxNavigationEnabledWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin, wxNavigationEnabledWindowExtGetLabelFunc a_GetLabel, wxNavigationEnabledWindowExtGetLayoutDirectionFunc a_GetLayoutDirection, wxNavigationEnabledWindowExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxNavigationEnabledWindowExtGetMaxClientSizeFunc a_GetMaxClientSize, wxNavigationEnabledWindowExtGetMaxSizeFunc a_GetMaxSize, wxNavigationEnabledWindowExtGetMinClientSizeFunc a_GetMinClientSize, wxNavigationEnabledWindowExtGetMinSizeFunc a_GetMinSize, wxNavigationEnabledWindowExtGetNameFunc a_GetName, wxNavigationEnabledWindowExtGetPositionConstraintintPintPFunc a_GetPositionConstraintintPintP, wxNavigationEnabledWindowExtGetScrollPosintFunc a_GetScrollPosint, wxNavigationEnabledWindowExtGetScrollRangeintFunc a_GetScrollRangeint, wxNavigationEnabledWindowExtGetScrollThumbintFunc a_GetScrollThumbint, wxNavigationEnabledWindowExtGetSizeConstraintintPintPFunc a_GetSizeConstraintintPintP, wxNavigationEnabledWindowExtGetThemeEnabledFunc a_GetThemeEnabled, wxNavigationEnabledWindowExtGetValidatorFunc a_GetValidator, wxNavigationEnabledWindowExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxNavigationEnabledWindowExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxNavigationEnabledWindowExtHasCaptureFunc a_HasCapture, wxNavigationEnabledWindowExtHasFocusFunc a_HasFocus, wxNavigationEnabledWindowExtHasMultiplePagesFunc a_HasMultiplePages, wxNavigationEnabledWindowExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxNavigationEnabledWindowExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxNavigationEnabledWindowExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxNavigationEnabledWindowExtInheritAttributesFunc a_InheritAttributes, wxNavigationEnabledWindowExtInitDialogFunc a_InitDialog, wxNavigationEnabledWindowExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxNavigationEnabledWindowExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxNavigationEnabledWindowExtIsRetainedFunc a_IsRetained, wxNavigationEnabledWindowExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxNavigationEnabledWindowExtIsShownFunc a_IsShown, wxNavigationEnabledWindowExtIsShownOnScreenFunc a_IsShownOnScreen, wxNavigationEnabledWindowExtIsThisEnabledFunc a_IsThisEnabled, wxNavigationEnabledWindowExtIsTopLevelFunc a_IsTopLevel, wxNavigationEnabledWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxNavigationEnabledWindowExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxNavigationEnabledWindowExtLayoutFunc a_Layout, wxNavigationEnabledWindowExtLayoutPhase1intPFunc a_LayoutPhase1intP, wxNavigationEnabledWindowExtLayoutPhase2intPFunc a_LayoutPhase2intP, wxNavigationEnabledWindowExtLowerFunc a_Lower, wxNavigationEnabledWindowExtMoveConstraintintintFunc a_MoveConstraintintint, wxNavigationEnabledWindowExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxNavigationEnabledWindowExtOnInternalIdleFunc a_OnInternalIdle, wxNavigationEnabledWindowExtPrepareDCwxDCRFunc a_PrepareDCwxDCR, wxNavigationEnabledWindowExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxNavigationEnabledWindowExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxNavigationEnabledWindowExtRaiseFunc a_Raise, wxNavigationEnabledWindowExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxNavigationEnabledWindowExtRegisterHotKeyintintintFunc a_RegisterHotKeyintintint, wxNavigationEnabledWindowExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxNavigationEnabledWindowExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxNavigationEnabledWindowExtScrollLinesintFunc a_ScrollLinesint, wxNavigationEnabledWindowExtScrollPagesintFunc a_ScrollPagesint, wxNavigationEnabledWindowExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxNavigationEnabledWindowExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxNavigationEnabledWindowExtSendIdleEventswxIdleEventRFunc a_SendIdleEventswxIdleEventR, wxNavigationEnabledWindowExtSendSizeEventintFunc a_SendSizeEventint, wxNavigationEnabledWindowExtSetAcceleratorTablewxAcceleratorTableCRFunc a_SetAcceleratorTablewxAcceleratorTableCR, wxNavigationEnabledWindowExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxNavigationEnabledWindowExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxNavigationEnabledWindowExtSetCanFocusboolFunc a_SetCanFocusbool, wxNavigationEnabledWindowExtSetConstraintSizesboolFunc a_SetConstraintSizesbool, wxNavigationEnabledWindowExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxNavigationEnabledWindowExtSetDoubleBufferedboolFunc a_SetDoubleBufferedbool, wxNavigationEnabledWindowExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxNavigationEnabledWindowExtSetExtraStylelongFunc a_SetExtraStylelong, wxNavigationEnabledWindowExtSetFocusFunc a_SetFocus, wxNavigationEnabledWindowExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxNavigationEnabledWindowExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxNavigationEnabledWindowExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxNavigationEnabledWindowExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxNavigationEnabledWindowExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxNavigationEnabledWindowExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxNavigationEnabledWindowExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxNavigationEnabledWindowExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxNavigationEnabledWindowExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxNavigationEnabledWindowExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxNavigationEnabledWindowExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxNavigationEnabledWindowExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxNavigationEnabledWindowExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxNavigationEnabledWindowExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxNavigationEnabledWindowExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxNavigationEnabledWindowExtSetSizeConstraintintintintintFunc a_SetSizeConstraintintintintint, wxNavigationEnabledWindowExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxNavigationEnabledWindowExtSetThemeEnabledboolFunc a_SetThemeEnabledbool, wxNavigationEnabledWindowExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxNavigationEnabledWindowExtSetValidatorwxValidatorCRFunc a_SetValidatorwxValidatorCR, wxNavigationEnabledWindowExtSetWindowStyleFlaglongFunc a_SetWindowStyleFlaglong, wxNavigationEnabledWindowExtShouldInheritColoursFunc a_ShouldInheritColours, wxNavigationEnabledWindowExtShowboolFunc a_Showbool, wxNavigationEnabledWindowExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxNavigationEnabledWindowExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxNavigationEnabledWindowExtTransferDataToWindowFunc a_TransferDataToWindow, wxNavigationEnabledWindowExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxNavigationEnabledWindowExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxNavigationEnabledWindowExtUnregisterHotKeyintFunc a_UnregisterHotKeyint, wxNavigationEnabledWindowExtUpdateFunc a_Update, wxNavigationEnabledWindowExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxNavigationEnabledWindowExtValidateFunc a_Validate, wxNavigationEnabledWindowExtWXAdjustFontToOwnPPIwxFontRFunc a_WXAdjustFontToOwnPPIwxFontR, wxNavigationEnabledWindowExtWXGetTextEntryFunc a_WXGetTextEntry, wxNavigationEnabledWindowExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxNavigationEnabledWindowExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxNavigationEnabledWindowExtWXReservedWindow1voidPFunc a_WXReservedWindow1voidP, wxNavigationEnabledWindowExtWXReservedWindow2voidPFunc a_WXReservedWindow2voidP, wxNavigationEnabledWindowExtWXReservedWindow3voidPFunc a_WXReservedWindow3voidP, wxNavigationEnabledWindowExtWXSetInitialFittingClientSizeintwxSizerPFunc a_WXSetInitialFittingClientSizeintwxSizerP, wxNavigationEnabledWindowExtWarpPointerintintFunc a_WarpPointerintint, wxNavigationEnabledWindowExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxNavigationEnabledWindow() {
    m_wxNavigationEnabledWindowExtAcceptsFocus = a_AcceptsFocus;
    m_wxNavigationEnabledWindowExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxNavigationEnabledWindowExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxNavigationEnabledWindowExtAddChildwxWindowBaseP = a_AddChildwxWindowBaseP;
    m_wxNavigationEnabledWindowExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxNavigationEnabledWindowExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxNavigationEnabledWindowExtAdjustForParentClientOriginintRintRint = a_AdjustForParentClientOriginintRintRint;
    m_wxNavigationEnabledWindowExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxNavigationEnabledWindowExtAssociateHandleWXWidget = a_AssociateHandleWXWidget;
    m_wxNavigationEnabledWindowExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxNavigationEnabledWindowExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxNavigationEnabledWindowExtCanBeFocused = a_CanBeFocused;
    m_wxNavigationEnabledWindowExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxNavigationEnabledWindowExtCanScrollint = a_CanScrollint;
    m_wxNavigationEnabledWindowExtCanSetTransparent = a_CanSetTransparent;
    m_wxNavigationEnabledWindowExtClearBackground = a_ClearBackground;
    m_wxNavigationEnabledWindowExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxNavigationEnabledWindowExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxNavigationEnabledWindowExtCreateRefData = a_CreateRefData;
    m_wxNavigationEnabledWindowExtDestroy = a_Destroy;
    m_wxNavigationEnabledWindowExtDissociateHandle = a_DissociateHandle;
    m_wxNavigationEnabledWindowExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxNavigationEnabledWindowExtDoCentreint = a_DoCentreint;
    m_wxNavigationEnabledWindowExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxNavigationEnabledWindowExtDoEnablebool = a_DoEnablebool;
    m_wxNavigationEnabledWindowExtDoFreeze = a_DoFreeze;
    m_wxNavigationEnabledWindowExtDoGetBestClientHeightint = a_DoGetBestClientHeightint;
    m_wxNavigationEnabledWindowExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxNavigationEnabledWindowExtDoGetBestClientWidthint = a_DoGetBestClientWidthint;
    m_wxNavigationEnabledWindowExtDoGetBestSize = a_DoGetBestSize;
    m_wxNavigationEnabledWindowExtDoGetClientData = a_DoGetClientData;
    m_wxNavigationEnabledWindowExtDoGetClientObject = a_DoGetClientObject;
    m_wxNavigationEnabledWindowExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxNavigationEnabledWindowExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxNavigationEnabledWindowExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxNavigationEnabledWindowExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxNavigationEnabledWindowExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxNavigationEnabledWindowExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxNavigationEnabledWindowExtDoHitTestwxCoordwxCoord = a_DoHitTestwxCoordwxCoord;
    m_wxNavigationEnabledWindowExtDoIsExposedintintintint = a_DoIsExposedintintintint;
    m_wxNavigationEnabledWindowExtDoIsExposedintint = a_DoIsExposedintint;
    m_wxNavigationEnabledWindowExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxNavigationEnabledWindowExtDoNavigateInint = a_DoNavigateInint;
    m_wxNavigationEnabledWindowExtDoPhaseint = a_DoPhaseint;
    m_wxNavigationEnabledWindowExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxNavigationEnabledWindowExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxNavigationEnabledWindowExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxNavigationEnabledWindowExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxNavigationEnabledWindowExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxNavigationEnabledWindowExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxNavigationEnabledWindowExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxNavigationEnabledWindowExtDoSetSizeHintsintintintintintint = a_DoSetSizeHintsintintintintintint;
    m_wxNavigationEnabledWindowExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxNavigationEnabledWindowExtDoSetToolTipTextwxStringCR = a_DoSetToolTipTextwxStringCR;
    m_wxNavigationEnabledWindowExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxNavigationEnabledWindowExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxNavigationEnabledWindowExtDoThaw = a_DoThaw;
    m_wxNavigationEnabledWindowExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxNavigationEnabledWindowExtDragAcceptFilesbool = a_DragAcceptFilesbool;
    m_wxNavigationEnabledWindowExtEnablebool = a_Enablebool;
    m_wxNavigationEnabledWindowExtEnableTouchEventsint = a_EnableTouchEventsint;
    m_wxNavigationEnabledWindowExtEnableVisibleFocusbool = a_EnableVisibleFocusbool;
    m_wxNavigationEnabledWindowExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxNavigationEnabledWindowExtFit = a_Fit;
    m_wxNavigationEnabledWindowExtFitInside = a_FitInside;
    m_wxNavigationEnabledWindowExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxNavigationEnabledWindowExtGetCharHeight = a_GetCharHeight;
    m_wxNavigationEnabledWindowExtGetCharWidth = a_GetCharWidth;
    m_wxNavigationEnabledWindowExtGetClassInfo = a_GetClassInfo;
    m_wxNavigationEnabledWindowExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxNavigationEnabledWindowExtGetClientSizeConstraintintPintP = a_GetClientSizeConstraintintPintP;
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
    m_wxNavigationEnabledWindowExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin;
    m_wxNavigationEnabledWindowExtGetLabel = a_GetLabel;
    m_wxNavigationEnabledWindowExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxNavigationEnabledWindowExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxNavigationEnabledWindowExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxNavigationEnabledWindowExtGetMaxSize = a_GetMaxSize;
    m_wxNavigationEnabledWindowExtGetMinClientSize = a_GetMinClientSize;
    m_wxNavigationEnabledWindowExtGetMinSize = a_GetMinSize;
    m_wxNavigationEnabledWindowExtGetName = a_GetName;
    m_wxNavigationEnabledWindowExtGetPositionConstraintintPintP = a_GetPositionConstraintintPintP;
    m_wxNavigationEnabledWindowExtGetScrollPosint = a_GetScrollPosint;
    m_wxNavigationEnabledWindowExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxNavigationEnabledWindowExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxNavigationEnabledWindowExtGetSizeConstraintintPintP = a_GetSizeConstraintintPintP;
    m_wxNavigationEnabledWindowExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxNavigationEnabledWindowExtGetValidator = a_GetValidator;
    m_wxNavigationEnabledWindowExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxNavigationEnabledWindowExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxNavigationEnabledWindowExtHasCapture = a_HasCapture;
    m_wxNavigationEnabledWindowExtHasFocus = a_HasFocus;
    m_wxNavigationEnabledWindowExtHasMultiplePages = a_HasMultiplePages;
    m_wxNavigationEnabledWindowExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxNavigationEnabledWindowExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxNavigationEnabledWindowExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxNavigationEnabledWindowExtInheritAttributes = a_InheritAttributes;
    m_wxNavigationEnabledWindowExtInitDialog = a_InitDialog;
    m_wxNavigationEnabledWindowExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxNavigationEnabledWindowExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxNavigationEnabledWindowExtIsRetained = a_IsRetained;
    m_wxNavigationEnabledWindowExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxNavigationEnabledWindowExtIsShown = a_IsShown;
    m_wxNavigationEnabledWindowExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxNavigationEnabledWindowExtIsThisEnabled = a_IsThisEnabled;
    m_wxNavigationEnabledWindowExtIsTopLevel = a_IsTopLevel;
    m_wxNavigationEnabledWindowExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxNavigationEnabledWindowExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxNavigationEnabledWindowExtLayout = a_Layout;
    m_wxNavigationEnabledWindowExtLayoutPhase1intP = a_LayoutPhase1intP;
    m_wxNavigationEnabledWindowExtLayoutPhase2intP = a_LayoutPhase2intP;
    m_wxNavigationEnabledWindowExtLower = a_Lower;
    m_wxNavigationEnabledWindowExtMoveConstraintintint = a_MoveConstraintintint;
    m_wxNavigationEnabledWindowExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxNavigationEnabledWindowExtOnInternalIdle = a_OnInternalIdle;
    m_wxNavigationEnabledWindowExtPrepareDCwxDCR = a_PrepareDCwxDCR;
    m_wxNavigationEnabledWindowExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxNavigationEnabledWindowExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxNavigationEnabledWindowExtRaise = a_Raise;
    m_wxNavigationEnabledWindowExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxNavigationEnabledWindowExtRegisterHotKeyintintint = a_RegisterHotKeyintintint;
    m_wxNavigationEnabledWindowExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxNavigationEnabledWindowExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxNavigationEnabledWindowExtScrollLinesint = a_ScrollLinesint;
    m_wxNavigationEnabledWindowExtScrollPagesint = a_ScrollPagesint;
    m_wxNavigationEnabledWindowExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxNavigationEnabledWindowExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxNavigationEnabledWindowExtSendIdleEventswxIdleEventR = a_SendIdleEventswxIdleEventR;
    m_wxNavigationEnabledWindowExtSendSizeEventint = a_SendSizeEventint;
    m_wxNavigationEnabledWindowExtSetAcceleratorTablewxAcceleratorTableCR = a_SetAcceleratorTablewxAcceleratorTableCR;
    m_wxNavigationEnabledWindowExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxNavigationEnabledWindowExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxNavigationEnabledWindowExtSetCanFocusbool = a_SetCanFocusbool;
    m_wxNavigationEnabledWindowExtSetConstraintSizesbool = a_SetConstraintSizesbool;
    m_wxNavigationEnabledWindowExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxNavigationEnabledWindowExtSetDoubleBufferedbool = a_SetDoubleBufferedbool;
    m_wxNavigationEnabledWindowExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxNavigationEnabledWindowExtSetExtraStylelong = a_SetExtraStylelong;
    m_wxNavigationEnabledWindowExtSetFocus = a_SetFocus;
    m_wxNavigationEnabledWindowExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxNavigationEnabledWindowExtSetFontwxFontCR = a_SetFontwxFontCR;
    m_wxNavigationEnabledWindowExtSetForegroundColourwxColourCR = a_SetForegroundColourwxColourCR;
    m_wxNavigationEnabledWindowExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxNavigationEnabledWindowExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxNavigationEnabledWindowExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxNavigationEnabledWindowExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxNavigationEnabledWindowExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxNavigationEnabledWindowExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxNavigationEnabledWindowExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxNavigationEnabledWindowExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxNavigationEnabledWindowExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxNavigationEnabledWindowExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxNavigationEnabledWindowExtSetScrollPosintintbool = a_SetScrollPosintintbool;
    m_wxNavigationEnabledWindowExtSetScrollbarintintintintbool = a_SetScrollbarintintintintbool;
    m_wxNavigationEnabledWindowExtSetSizeConstraintintintintint = a_SetSizeConstraintintintintint;
    m_wxNavigationEnabledWindowExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxNavigationEnabledWindowExtSetThemeEnabledbool = a_SetThemeEnabledbool;
    m_wxNavigationEnabledWindowExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxNavigationEnabledWindowExtSetValidatorwxValidatorCR = a_SetValidatorwxValidatorCR;
    m_wxNavigationEnabledWindowExtSetWindowStyleFlaglong = a_SetWindowStyleFlaglong;
    m_wxNavigationEnabledWindowExtShouldInheritColours = a_ShouldInheritColours;
    m_wxNavigationEnabledWindowExtShowbool = a_Showbool;
    m_wxNavigationEnabledWindowExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxNavigationEnabledWindowExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxNavigationEnabledWindowExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxNavigationEnabledWindowExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxNavigationEnabledWindowExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxNavigationEnabledWindowExtUnregisterHotKeyint = a_UnregisterHotKeyint;
    m_wxNavigationEnabledWindowExtUpdate = a_Update;
    m_wxNavigationEnabledWindowExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxNavigationEnabledWindowExtValidate = a_Validate;
    m_wxNavigationEnabledWindowExtWXAdjustFontToOwnPPIwxFontR = a_WXAdjustFontToOwnPPIwxFontR;
    m_wxNavigationEnabledWindowExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxNavigationEnabledWindowExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxNavigationEnabledWindowExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxNavigationEnabledWindowExtWXReservedWindow1voidP = a_WXReservedWindow1voidP;
    m_wxNavigationEnabledWindowExtWXReservedWindow2voidP = a_WXReservedWindow2voidP;
    m_wxNavigationEnabledWindowExtWXReservedWindow3voidP = a_WXReservedWindow3voidP;
    m_wxNavigationEnabledWindowExtWXSetInitialFittingClientSizeintwxSizerP = a_WXSetInitialFittingClientSizeintwxSizerP;
    m_wxNavigationEnabledWindowExtWarpPointerintint = a_WarpPointerintint;
    m_wxNavigationEnabledWindowExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
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
      return m_wxPanelBaseExtAcceptsFocus(this);
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
      return m_wxPanelBaseExtAcceptsFocusFromKeyboard(this);
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
      return m_wxPanelBaseExtAcceptsFocusRecursively(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtAddChildwxWindowBasePFunc m_wxPanelBaseExtAddChildwxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxPanelBase::AddChild(child);
    if (*m_wxPanelBaseExtAddChildwxWindowBaseP != NULL){
      return m_wxPanelBaseExtAddChildwxWindowBaseP(this, child);
    }
  }
  wxPanelBaseExtAddPendingEventwxEventCRFunc m_wxPanelBaseExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxPanelBase::AddPendingEvent(event);
    if (*m_wxPanelBaseExtAddPendingEventwxEventCR != NULL){
      return m_wxPanelBaseExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxPanelBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxPanelBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxPanelBase::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxPanelBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxPanelBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtAdjustForParentClientOriginintRintRintFunc m_wxPanelBaseExtAdjustForParentClientOriginintRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxPanelBase::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxPanelBaseExtAdjustForParentClientOriginintRintRint != NULL){
      return m_wxPanelBaseExtAdjustForParentClientOriginintRintRint(this, x, y, sizeFlags);
    }
  }
  wxPanelBaseExtAlwaysShowScrollbarsboolboolFunc m_wxPanelBaseExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool param0 = true, bool param1 = true) override
  {
    wxPanelBase::AlwaysShowScrollbars(param0, param1);
    if (*m_wxPanelBaseExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxPanelBaseExtAlwaysShowScrollbarsboolbool(this, param0, param1);
    }
  }
  wxPanelBaseExtAssociateHandleWXWidgetFunc m_wxPanelBaseExtAssociateHandleWXWidget = NULL;
  virtual void AssociateHandle(WXWidget param0) override
  {
    wxPanelBase::AssociateHandle(param0);
    if (*m_wxPanelBaseExtAssociateHandleWXWidget != NULL){
      return m_wxPanelBaseExtAssociateHandleWXWidget(this, param0);
    }
  }
  wxPanelBaseExtBeginRepositioningChildrenFunc m_wxPanelBaseExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxPanelBase::BeginRepositioningChildren();
    if (*m_wxPanelBaseExtBeginRepositioningChildren != NULL){
      return m_wxPanelBaseExtBeginRepositioningChildren(this);
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
      return m_wxPanelBaseExtCanApplyThemeBorder(this);
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
      return m_wxPanelBaseExtCanBeFocused(this);
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
      return m_wxPanelBaseExtCanBeOutsideClientArea(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtCanScrollintFunc m_wxPanelBaseExtCanScrollint = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxPanelBase::CanScroll(orient);
    if (*m_wxPanelBaseExtCanScrollint != NULL){
      return m_wxPanelBaseExtCanScrollint(this, orient);
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
      return m_wxPanelBaseExtCanSetTransparent(this);
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
  wxPanelBaseExtClientToWindowSizewxSizeCRFunc m_wxPanelBaseExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxPanelBase::ClientToWindowSize(size);
    if (*m_wxPanelBaseExtClientToWindowSizewxSizeCR != NULL){
      return m_wxPanelBaseExtClientToWindowSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtCloneRefDatawxObjectRefDataCPFunc m_wxPanelBaseExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxPanelBase::CloneRefData(data);
    if (*m_wxPanelBaseExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxPanelBaseExtCloneRefDatawxObjectRefDataCP(this, data);
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
      return m_wxPanelBaseExtCreateRefData(this);
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
      return m_wxPanelBaseExtDestroy(this);
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
  wxPanelBaseExtDoCentreintFunc m_wxPanelBaseExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxPanelBase::DoCentre(dir);
    if (*m_wxPanelBaseExtDoCentreint != NULL){
      return m_wxPanelBaseExtDoCentreint(this, dir);
    }
  }
  wxPanelBaseExtDoClientToScreenintPintPFunc m_wxPanelBaseExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxPanelBase::DoClientToScreen(x, y);
    if (*m_wxPanelBaseExtDoClientToScreenintPintP != NULL){
      return m_wxPanelBaseExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxPanelBaseExtDoEnableboolFunc m_wxPanelBaseExtDoEnablebool = NULL;
  virtual void DoEnable(bool param0) override
  {
    wxPanelBase::DoEnable(param0);
    if (*m_wxPanelBaseExtDoEnablebool != NULL){
      return m_wxPanelBaseExtDoEnablebool(this, param0);
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
  wxPanelBaseExtDoGetBestClientHeightintFunc m_wxPanelBaseExtDoGetBestClientHeightint = NULL;
  virtual int DoGetBestClientHeight(int param0) const override
  {
    int res = wxPanelBase::DoGetBestClientHeight(param0);
    if (*m_wxPanelBaseExtDoGetBestClientHeightint != NULL){
      return m_wxPanelBaseExtDoGetBestClientHeightint(this, param0);
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
      return m_wxPanelBaseExtDoGetBestClientSize(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoGetBestClientWidthintFunc m_wxPanelBaseExtDoGetBestClientWidthint = NULL;
  virtual int DoGetBestClientWidth(int param0) const override
  {
    int res = wxPanelBase::DoGetBestClientWidth(param0);
    if (*m_wxPanelBaseExtDoGetBestClientWidthint != NULL){
      return m_wxPanelBaseExtDoGetBestClientWidthint(this, param0);
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
      return m_wxPanelBaseExtDoGetBestSize(this);
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
      return m_wxPanelBaseExtDoGetClientData(this);
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
      return m_wxPanelBaseExtDoGetClientObject(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoGetClientSizeintPintPFunc m_wxPanelBaseExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxPanelBase::DoGetClientSize(width, height);
    if (*m_wxPanelBaseExtDoGetClientSizeintPintP != NULL){
      return m_wxPanelBaseExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxPanelBaseExtDoGetPositionintPintPFunc m_wxPanelBaseExtDoGetPositionintPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxPanelBase::DoGetPosition(x, y);
    if (*m_wxPanelBaseExtDoGetPositionintPintP != NULL){
      return m_wxPanelBaseExtDoGetPositionintPintP(this, x, y);
    }
  }
  wxPanelBaseExtDoGetScreenPositionintPintPFunc m_wxPanelBaseExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxPanelBase::DoGetScreenPosition(x, y);
    if (*m_wxPanelBaseExtDoGetScreenPositionintPintP != NULL){
      return m_wxPanelBaseExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxPanelBaseExtDoGetSizeintPintPFunc m_wxPanelBaseExtDoGetSizeintPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxPanelBase::DoGetSize(width, height);
    if (*m_wxPanelBaseExtDoGetSizeintPintP != NULL){
      return m_wxPanelBaseExtDoGetSizeintPintP(this, width, height);
    }
  }
  wxPanelBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxPanelBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* font = __null) const override
  {
    wxPanelBase::DoGetTextExtent(string, x, y, descent, externalLeading, font);
    if (*m_wxPanelBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxPanelBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, font);
    }
  }
  wxPanelBaseExtDoGetVirtualSizeFunc m_wxPanelBaseExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxPanelBase::DoGetVirtualSize();
    if (*m_wxPanelBaseExtDoGetVirtualSize != NULL){
      return m_wxPanelBaseExtDoGetVirtualSize(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoHitTestwxCoordwxCoordFunc m_wxPanelBaseExtDoHitTestwxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxPanelBase::DoHitTest(x, y);
    if (*m_wxPanelBaseExtDoHitTestwxCoordwxCoord != NULL){
      return m_wxPanelBaseExtDoHitTestwxCoordwxCoord(this, x, y);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoIsExposedintintintintFunc m_wxPanelBaseExtDoIsExposedintintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxPanelBase::DoIsExposed(x, y, w, h);
    if (*m_wxPanelBaseExtDoIsExposedintintintint != NULL){
      return m_wxPanelBaseExtDoIsExposedintintintint(this, x, y, w, h);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoIsExposedintintFunc m_wxPanelBaseExtDoIsExposedintint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxPanelBase::DoIsExposed(x, y);
    if (*m_wxPanelBaseExtDoIsExposedintint != NULL){
      return m_wxPanelBaseExtDoIsExposedintint(this, x, y);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoMoveWindowintintintintFunc m_wxPanelBaseExtDoMoveWindowintintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxPanelBase::DoMoveWindow(x, y, width, height);
    if (*m_wxPanelBaseExtDoMoveWindowintintintint != NULL){
      return m_wxPanelBaseExtDoMoveWindowintintintint(this, x, y, width, height);
    }
  }
  wxPanelBaseExtDoNavigateInintFunc m_wxPanelBaseExtDoNavigateInint = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxPanelBase::DoNavigateIn(flags);
    if (*m_wxPanelBaseExtDoNavigateInint != NULL){
      return m_wxPanelBaseExtDoNavigateInint(this, flags);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoPhaseintFunc m_wxPanelBaseExtDoPhaseint = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxPanelBase::DoPhase(phase);
    if (*m_wxPanelBaseExtDoPhaseint != NULL){
      return m_wxPanelBaseExtDoPhaseint(this, phase);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtDoPopupMenuwxMenuPintintFunc m_wxPanelBaseExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxPanelBase::DoPopupMenu(menu, x, y);
    if (*m_wxPanelBaseExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxPanelBaseExtDoPopupMenuwxMenuPintint(this, menu, x, y);
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
  wxPanelBaseExtDoScreenToClientintPintPFunc m_wxPanelBaseExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxPanelBase::DoScreenToClient(x, y);
    if (*m_wxPanelBaseExtDoScreenToClientintPintP != NULL){
      return m_wxPanelBaseExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxPanelBaseExtDoSetClientDatavoidPFunc m_wxPanelBaseExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxPanelBase::DoSetClientData(data);
    if (*m_wxPanelBaseExtDoSetClientDatavoidP != NULL){
      return m_wxPanelBaseExtDoSetClientDatavoidP(this, data);
    }
  }
  wxPanelBaseExtDoSetClientObjectwxClientDataPFunc m_wxPanelBaseExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxPanelBase::DoSetClientObject(data);
    if (*m_wxPanelBaseExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxPanelBaseExtDoSetClientObjectwxClientDataP(this, data);
    }
  }
  wxPanelBaseExtDoSetClientSizeintintFunc m_wxPanelBaseExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxPanelBase::DoSetClientSize(width, height);
    if (*m_wxPanelBaseExtDoSetClientSizeintint != NULL){
      return m_wxPanelBaseExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxPanelBaseExtDoSetSizeintintintintintFunc m_wxPanelBaseExtDoSetSizeintintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxPanelBase::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxPanelBaseExtDoSetSizeintintintintint != NULL){
      return m_wxPanelBaseExtDoSetSizeintintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxPanelBaseExtDoSetSizeHintsintintintintintintFunc m_wxPanelBaseExtDoSetSizeHintsintintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxPanelBase::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxPanelBaseExtDoSetSizeHintsintintintintintint != NULL){
      return m_wxPanelBaseExtDoSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxPanelBaseExtDoSetToolTipwxToolTipPFunc m_wxPanelBaseExtDoSetToolTipwxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxPanelBase::DoSetToolTip(tip);
    if (*m_wxPanelBaseExtDoSetToolTipwxToolTipP != NULL){
      return m_wxPanelBaseExtDoSetToolTipwxToolTipP(this, tip);
    }
  }
  wxPanelBaseExtDoSetToolTipTextwxStringCRFunc m_wxPanelBaseExtDoSetToolTipTextwxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxPanelBase::DoSetToolTipText(tip);
    if (*m_wxPanelBaseExtDoSetToolTipTextwxStringCR != NULL){
      return m_wxPanelBaseExtDoSetToolTipTextwxStringCR(this, tip);
    }
  }
  wxPanelBaseExtDoSetVirtualSizeintintFunc m_wxPanelBaseExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxPanelBase::DoSetVirtualSize(x, y);
    if (*m_wxPanelBaseExtDoSetVirtualSizeintint != NULL){
      return m_wxPanelBaseExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxPanelBaseExtDoSetWindowVariantwxWindowVariantFunc m_wxPanelBaseExtDoSetWindowVariantwxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxPanelBase::DoSetWindowVariant(variant);
    if (*m_wxPanelBaseExtDoSetWindowVariantwxWindowVariant != NULL){
      return m_wxPanelBaseExtDoSetWindowVariantwxWindowVariant(this, variant);
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
  wxPanelBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxPanelBaseExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxPanelBase::DoUpdateWindowUI(event);
    if (*m_wxPanelBaseExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxPanelBaseExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxPanelBaseExtDragAcceptFilesboolFunc m_wxPanelBaseExtDragAcceptFilesbool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxPanelBase::DragAcceptFiles(accept);
    if (*m_wxPanelBaseExtDragAcceptFilesbool != NULL){
      return m_wxPanelBaseExtDragAcceptFilesbool(this, accept);
    }
  }
  wxPanelBaseExtEnableboolFunc m_wxPanelBaseExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxPanelBase::Enable(enable);
    if (*m_wxPanelBaseExtEnablebool != NULL){
      return m_wxPanelBaseExtEnablebool(this, enable);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtEnableTouchEventsintFunc m_wxPanelBaseExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int param0) override
  {
    bool res = wxPanelBase::EnableTouchEvents(param0);
    if (*m_wxPanelBaseExtEnableTouchEventsint != NULL){
      return m_wxPanelBaseExtEnableTouchEventsint(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtEnableVisibleFocusboolFunc m_wxPanelBaseExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool param0) override
  {
    wxPanelBase::EnableVisibleFocus(param0);
    if (*m_wxPanelBaseExtEnableVisibleFocusbool != NULL){
      return m_wxPanelBaseExtEnableVisibleFocusbool(this, param0);
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
      return m_wxPanelBaseExtGetBestVirtualSize(this);
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
      return m_wxPanelBaseExtGetCharHeight(this);
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
      return m_wxPanelBaseExtGetCharWidth(this);
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
      return m_wxPanelBaseExtGetClassInfo(this);
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
      return m_wxPanelBaseExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetClientSizeConstraintintPintPFunc m_wxPanelBaseExtGetClientSizeConstraintintPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxPanelBase::GetClientSizeConstraint(w, h);
    if (*m_wxPanelBaseExtGetClientSizeConstraintintPintP != NULL){
      return m_wxPanelBaseExtGetClientSizeConstraintintPintP(this, w, h);
    }
  }
  wxPanelBaseExtGetContentScaleFactorFunc m_wxPanelBaseExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxPanelBase::GetContentScaleFactor();
    if (*m_wxPanelBaseExtGetContentScaleFactor != NULL){
      return m_wxPanelBaseExtGetContentScaleFactor(this);
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
      return m_wxPanelBaseExtGetDPI(this);
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
      return m_wxPanelBaseExtGetDPIScaleFactor(this);
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
      return m_wxPanelBaseExtGetDefaultAttributes(this);
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
      return m_wxPanelBaseExtGetDefaultBorder(this);
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
      return m_wxPanelBaseExtGetDefaultBorderForControl(this);
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
      return m_wxPanelBaseExtGetDropTarget(this);
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
      return m_wxPanelBaseExtGetEffectiveMinSize(this);
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
      return m_wxPanelBaseExtGetEventHashTable(this);
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
      return m_wxPanelBaseExtGetEventTable(this);
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
      return m_wxPanelBaseExtGetHandle(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc m_wxPanelBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxPanelBase::GetHelpTextAtPoint(pt, origin);
    if (*m_wxPanelBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin != NULL){
      return m_wxPanelBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin(this, pt, origin);
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
      return m_wxPanelBaseExtGetLabel(this);
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
      return m_wxPanelBaseExtGetLayoutDirection(this);
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
      return m_wxPanelBaseExtGetMainWindowOfCompositeControl(this);
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
      return m_wxPanelBaseExtGetMaxClientSize(this);
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
      return m_wxPanelBaseExtGetMaxSize(this);
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
      return m_wxPanelBaseExtGetMinClientSize(this);
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
      return m_wxPanelBaseExtGetMinSize(this);
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
      return m_wxPanelBaseExtGetName(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetPositionConstraintintPintPFunc m_wxPanelBaseExtGetPositionConstraintintPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxPanelBase::GetPositionConstraint(x, y);
    if (*m_wxPanelBaseExtGetPositionConstraintintPintP != NULL){
      return m_wxPanelBaseExtGetPositionConstraintintPintP(this, x, y);
    }
  }
  wxPanelBaseExtGetScrollPosintFunc m_wxPanelBaseExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxPanelBase::GetScrollPos(orient);
    if (*m_wxPanelBaseExtGetScrollPosint != NULL){
      return m_wxPanelBaseExtGetScrollPosint(this, orient);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetScrollRangeintFunc m_wxPanelBaseExtGetScrollRangeint = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxPanelBase::GetScrollRange(orient);
    if (*m_wxPanelBaseExtGetScrollRangeint != NULL){
      return m_wxPanelBaseExtGetScrollRangeint(this, orient);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetScrollThumbintFunc m_wxPanelBaseExtGetScrollThumbint = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxPanelBase::GetScrollThumb(orient);
    if (*m_wxPanelBaseExtGetScrollThumbint != NULL){
      return m_wxPanelBaseExtGetScrollThumbint(this, orient);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtGetSizeConstraintintPintPFunc m_wxPanelBaseExtGetSizeConstraintintPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxPanelBase::GetSizeConstraint(w, h);
    if (*m_wxPanelBaseExtGetSizeConstraintintPintP != NULL){
      return m_wxPanelBaseExtGetSizeConstraintintPintP(this, w, h);
    }
  }
  wxPanelBaseExtGetThemeEnabledFunc m_wxPanelBaseExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxPanelBase::GetThemeEnabled();
    if (*m_wxPanelBaseExtGetThemeEnabled != NULL){
      return m_wxPanelBaseExtGetThemeEnabled(this);
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
      return m_wxPanelBaseExtGetValidator(this);
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
      return m_wxPanelBaseExtGetWindowBorderSize(this);
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
      return m_wxPanelBaseExtGetWindowStyleFlag(this);
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
      return m_wxPanelBaseExtHasCapture(this);
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
      return m_wxPanelBaseExtHasFocus(this);
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
      return m_wxPanelBaseExtHasMultiplePages(this);
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
      return m_wxPanelBaseExtHasTransparentBackground(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtHideWithEffectwxShowEffectunsignedintFunc m_wxPanelBaseExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxPanelBase::HideWithEffect(param0, param1);
    if (*m_wxPanelBaseExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxPanelBaseExtHideWithEffectwxShowEffectunsignedint(this, param0, param1);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtInformFirstDirectionintintintFunc m_wxPanelBaseExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxPanelBase::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxPanelBaseExtInformFirstDirectionintintint != NULL){
      return m_wxPanelBaseExtInformFirstDirectionintintint(this, direction, size, availableOtherDir);
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
  wxPanelBaseExtIsClientAreaChildwxWindowCPFunc m_wxPanelBaseExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* param0) const override
  {
    bool res = wxPanelBase::IsClientAreaChild(param0);
    if (*m_wxPanelBaseExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxPanelBaseExtIsClientAreaChildwxWindowCP(this, param0);
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
      return m_wxPanelBaseExtIsDoubleBuffered(this);
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
      return m_wxPanelBaseExtIsRetained(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsScrollbarAlwaysShownintFunc m_wxPanelBaseExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int param0) const override
  {
    bool res = wxPanelBase::IsScrollbarAlwaysShown(param0);
    if (*m_wxPanelBaseExtIsScrollbarAlwaysShownint != NULL){
      return m_wxPanelBaseExtIsScrollbarAlwaysShownint(this, param0);
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
      return m_wxPanelBaseExtIsShown(this);
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
      return m_wxPanelBaseExtIsShownOnScreen(this);
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
      return m_wxPanelBaseExtIsThisEnabled(this);
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
      return m_wxPanelBaseExtIsTopLevel(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxPanelBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind param0) const override
  {
    bool res = wxPanelBase::IsTopNavigationDomain(param0);
    if (*m_wxPanelBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxPanelBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtIsTransparentBackgroundSupportedwxStringPFunc m_wxPanelBaseExtIsTransparentBackgroundSupportedwxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxPanelBase::IsTransparentBackgroundSupported(reason);
    if (*m_wxPanelBaseExtIsTransparentBackgroundSupportedwxStringP != NULL){
      return m_wxPanelBaseExtIsTransparentBackgroundSupportedwxStringP(this, reason);
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
      return m_wxPanelBaseExtLayout(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtLayoutPhase1intPFunc m_wxPanelBaseExtLayoutPhase1intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxPanelBase::LayoutPhase1(noChanges);
    if (*m_wxPanelBaseExtLayoutPhase1intP != NULL){
      return m_wxPanelBaseExtLayoutPhase1intP(this, noChanges);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtLayoutPhase2intPFunc m_wxPanelBaseExtLayoutPhase2intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxPanelBase::LayoutPhase2(noChanges);
    if (*m_wxPanelBaseExtLayoutPhase2intP != NULL){
      return m_wxPanelBaseExtLayoutPhase2intP(this, noChanges);
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
  wxPanelBaseExtMoveConstraintintintFunc m_wxPanelBaseExtMoveConstraintintint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxPanelBase::MoveConstraint(x, y);
    if (*m_wxPanelBaseExtMoveConstraintintint != NULL){
      return m_wxPanelBaseExtMoveConstraintintint(this, x, y);
    }
  }
  wxPanelBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxPanelBaseExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxPanelBase::OnDynamicBind(param0);
    if (*m_wxPanelBaseExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxPanelBaseExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
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
  wxPanelBaseExtPrepareDCwxDCRFunc m_wxPanelBaseExtPrepareDCwxDCR = NULL;
  virtual void PrepareDC(wxDC& param0) override
  {
    wxPanelBase::PrepareDC(param0);
    if (*m_wxPanelBaseExtPrepareDCwxDCR != NULL){
      return m_wxPanelBaseExtPrepareDCwxDCR(this, param0);
    }
  }
  wxPanelBaseExtProcessEventwxEventRFunc m_wxPanelBaseExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxPanelBase::ProcessEvent(event);
    if (*m_wxPanelBaseExtProcessEventwxEventR != NULL){
      return m_wxPanelBaseExtProcessEventwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtQueueEventwxEventPFunc m_wxPanelBaseExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxPanelBase::QueueEvent(event);
    if (*m_wxPanelBaseExtQueueEventwxEventP != NULL){
      return m_wxPanelBaseExtQueueEventwxEventP(this, event);
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
  wxPanelBaseExtRefreshboolwxRectCPFunc m_wxPanelBaseExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = (const wxRect*)__null) override
  {
    wxPanelBase::Refresh(eraseBackground, rect);
    if (*m_wxPanelBaseExtRefreshboolwxRectCP != NULL){
      return m_wxPanelBaseExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxPanelBaseExtRegisterHotKeyintintintFunc m_wxPanelBaseExtRegisterHotKeyintintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxPanelBase::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxPanelBaseExtRegisterHotKeyintintint != NULL){
      return m_wxPanelBaseExtRegisterHotKeyintintint(this, hotkeyId, modifiers, keycode);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtRemoveChildwxWindowBasePFunc m_wxPanelBaseExtRemoveChildwxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxPanelBase::RemoveChild(child);
    if (*m_wxPanelBaseExtRemoveChildwxWindowBaseP != NULL){
      return m_wxPanelBaseExtRemoveChildwxWindowBaseP(this, child);
    }
  }
  wxPanelBaseExtReparentwxWindowBasePFunc m_wxPanelBaseExtReparentwxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxPanelBase::Reparent(newParent);
    if (*m_wxPanelBaseExtReparentwxWindowBaseP != NULL){
      return m_wxPanelBaseExtReparentwxWindowBaseP(this, newParent);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtScrollLinesintFunc m_wxPanelBaseExtScrollLinesint = NULL;
  virtual bool ScrollLines(int param0) override
  {
    bool res = wxPanelBase::ScrollLines(param0);
    if (*m_wxPanelBaseExtScrollLinesint != NULL){
      return m_wxPanelBaseExtScrollLinesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtScrollPagesintFunc m_wxPanelBaseExtScrollPagesint = NULL;
  virtual bool ScrollPages(int param0) override
  {
    bool res = wxPanelBase::ScrollPages(param0);
    if (*m_wxPanelBaseExtScrollPagesint != NULL){
      return m_wxPanelBaseExtScrollPagesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtScrollWindowintintwxRectCPFunc m_wxPanelBaseExtScrollWindowintintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxPanelBase::ScrollWindow(dx, dy, rect);
    if (*m_wxPanelBaseExtScrollWindowintintwxRectCP != NULL){
      return m_wxPanelBaseExtScrollWindowintintwxRectCP(this, dx, dy, rect);
    }
  }
  wxPanelBaseExtSearchEventTablewxEventTableRwxEventRFunc m_wxPanelBaseExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxPanelBase::SearchEventTable(table, event);
    if (*m_wxPanelBaseExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxPanelBaseExtSearchEventTablewxEventTableRwxEventR(this, table, event);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSendIdleEventswxIdleEventRFunc m_wxPanelBaseExtSendIdleEventswxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxPanelBase::SendIdleEvents(event);
    if (*m_wxPanelBaseExtSendIdleEventswxIdleEventR != NULL){
      return m_wxPanelBaseExtSendIdleEventswxIdleEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSendSizeEventintFunc m_wxPanelBaseExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxPanelBase::SendSizeEvent(flags);
    if (*m_wxPanelBaseExtSendSizeEventint != NULL){
      return m_wxPanelBaseExtSendSizeEventint(this, flags);
    }
  }
  wxPanelBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc m_wxPanelBaseExtSetAcceleratorTablewxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxPanelBase::SetAcceleratorTable(accel);
    if (*m_wxPanelBaseExtSetAcceleratorTablewxAcceleratorTableCR != NULL){
      return m_wxPanelBaseExtSetAcceleratorTablewxAcceleratorTableCR(this, accel);
    }
  }
  wxPanelBaseExtSetBackgroundColourwxColourCRFunc m_wxPanelBaseExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxPanelBase::SetBackgroundColour(colour);
    if (*m_wxPanelBaseExtSetBackgroundColourwxColourCR != NULL){
      return m_wxPanelBaseExtSetBackgroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetBackgroundStylewxBackgroundStyleFunc m_wxPanelBaseExtSetBackgroundStylewxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxPanelBase::SetBackgroundStyle(style);
    if (*m_wxPanelBaseExtSetBackgroundStylewxBackgroundStyle != NULL){
      return m_wxPanelBaseExtSetBackgroundStylewxBackgroundStyle(this, style);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetCanFocusboolFunc m_wxPanelBaseExtSetCanFocusbool = NULL;
  virtual void SetCanFocus(bool param0) override
  {
    wxPanelBase::SetCanFocus(param0);
    if (*m_wxPanelBaseExtSetCanFocusbool != NULL){
      return m_wxPanelBaseExtSetCanFocusbool(this, param0);
    }
  }
  wxPanelBaseExtSetConstraintSizesboolFunc m_wxPanelBaseExtSetConstraintSizesbool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxPanelBase::SetConstraintSizes(recurse);
    if (*m_wxPanelBaseExtSetConstraintSizesbool != NULL){
      return m_wxPanelBaseExtSetConstraintSizesbool(this, recurse);
    }
  }
  wxPanelBaseExtSetCursorwxCursorCRFunc m_wxPanelBaseExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxPanelBase::SetCursor(cursor);
    if (*m_wxPanelBaseExtSetCursorwxCursorCR != NULL){
      return m_wxPanelBaseExtSetCursorwxCursorCR(this, cursor);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetDoubleBufferedboolFunc m_wxPanelBaseExtSetDoubleBufferedbool = NULL;
  virtual void SetDoubleBuffered(bool param0) override
  {
    wxPanelBase::SetDoubleBuffered(param0);
    if (*m_wxPanelBaseExtSetDoubleBufferedbool != NULL){
      return m_wxPanelBaseExtSetDoubleBufferedbool(this, param0);
    }
  }
  wxPanelBaseExtSetDropTargetwxDropTargetPFunc m_wxPanelBaseExtSetDropTargetwxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxPanelBase::SetDropTarget(dropTarget);
    if (*m_wxPanelBaseExtSetDropTargetwxDropTargetP != NULL){
      return m_wxPanelBaseExtSetDropTargetwxDropTargetP(this, dropTarget);
    }
  }
  wxPanelBaseExtSetExtraStylelongFunc m_wxPanelBaseExtSetExtraStylelong = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxPanelBase::SetExtraStyle(exStyle);
    if (*m_wxPanelBaseExtSetExtraStylelong != NULL){
      return m_wxPanelBaseExtSetExtraStylelong(this, exStyle);
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
  wxPanelBaseExtSetFontwxFontCRFunc m_wxPanelBaseExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxPanelBase::SetFont(font);
    if (*m_wxPanelBaseExtSetFontwxFontCR != NULL){
      return m_wxPanelBaseExtSetFontwxFontCR(this, font);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetForegroundColourwxColourCRFunc m_wxPanelBaseExtSetForegroundColourwxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxPanelBase::SetForegroundColour(colour);
    if (*m_wxPanelBaseExtSetForegroundColourwxColourCR != NULL){
      return m_wxPanelBaseExtSetForegroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetIdwxWindowIDFunc m_wxPanelBaseExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxPanelBase::SetId(winid);
    if (*m_wxPanelBaseExtSetIdwxWindowID != NULL){
      return m_wxPanelBaseExtSetIdwxWindowID(this, winid);
    }
  }
  wxPanelBaseExtSetLabelwxStringCRFunc m_wxPanelBaseExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxPanelBase::SetLabel(label);
    if (*m_wxPanelBaseExtSetLabelwxStringCR != NULL){
      return m_wxPanelBaseExtSetLabelwxStringCR(this, label);
    }
  }
  wxPanelBaseExtSetLayoutDirectionwxLayoutDirectionFunc m_wxPanelBaseExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxPanelBase::SetLayoutDirection(param0);
    if (*m_wxPanelBaseExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxPanelBaseExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxPanelBaseExtSetMaxClientSizewxSizeCRFunc m_wxPanelBaseExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxPanelBase::SetMaxClientSize(size);
    if (*m_wxPanelBaseExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxPanelBaseExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxPanelBaseExtSetMaxSizewxSizeCRFunc m_wxPanelBaseExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxPanelBase::SetMaxSize(maxSize);
    if (*m_wxPanelBaseExtSetMaxSizewxSizeCR != NULL){
      return m_wxPanelBaseExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxPanelBaseExtSetMinClientSizewxSizeCRFunc m_wxPanelBaseExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxPanelBase::SetMinClientSize(size);
    if (*m_wxPanelBaseExtSetMinClientSizewxSizeCR != NULL){
      return m_wxPanelBaseExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxPanelBaseExtSetMinSizewxSizeCRFunc m_wxPanelBaseExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxPanelBase::SetMinSize(minSize);
    if (*m_wxPanelBaseExtSetMinSizewxSizeCR != NULL){
      return m_wxPanelBaseExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxPanelBaseExtSetNamewxStringCRFunc m_wxPanelBaseExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxPanelBase::SetName(name);
    if (*m_wxPanelBaseExtSetNamewxStringCR != NULL){
      return m_wxPanelBaseExtSetNamewxStringCR(this, name);
    }
  }
  wxPanelBaseExtSetNextHandlerwxEvtHandlerPFunc m_wxPanelBaseExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxPanelBase::SetNextHandler(handler);
    if (*m_wxPanelBaseExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxPanelBaseExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxPanelBaseExtSetPreviousHandlerwxEvtHandlerPFunc m_wxPanelBaseExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxPanelBase::SetPreviousHandler(handler);
    if (*m_wxPanelBaseExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxPanelBaseExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxPanelBaseExtSetScrollPosintintboolFunc m_wxPanelBaseExtSetScrollPosintintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxPanelBase::SetScrollPos(orient, pos, refresh);
    if (*m_wxPanelBaseExtSetScrollPosintintbool != NULL){
      return m_wxPanelBaseExtSetScrollPosintintbool(this, orient, pos, refresh);
    }
  }
  wxPanelBaseExtSetScrollbarintintintintboolFunc m_wxPanelBaseExtSetScrollbarintintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbvisible, int range, bool refresh = true) override
  {
    wxPanelBase::SetScrollbar(orient, pos, thumbvisible, range, refresh);
    if (*m_wxPanelBaseExtSetScrollbarintintintintbool != NULL){
      return m_wxPanelBaseExtSetScrollbarintintintintbool(this, orient, pos, thumbvisible, range, refresh);
    }
  }
  wxPanelBaseExtSetSizeConstraintintintintintFunc m_wxPanelBaseExtSetSizeConstraintintintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxPanelBase::SetSizeConstraint(x, y, w, h);
    if (*m_wxPanelBaseExtSetSizeConstraintintintintint != NULL){
      return m_wxPanelBaseExtSetSizeConstraintintintintint(this, x, y, w, h);
    }
  }
  wxPanelBaseExtSetSizeHintsintintintintintintFunc m_wxPanelBaseExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxPanelBase::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxPanelBaseExtSetSizeHintsintintintintintint != NULL){
      return m_wxPanelBaseExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxPanelBaseExtSetThemeEnabledboolFunc m_wxPanelBaseExtSetThemeEnabledbool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxPanelBase::SetThemeEnabled(enableTheme);
    if (*m_wxPanelBaseExtSetThemeEnabledbool != NULL){
      return m_wxPanelBaseExtSetThemeEnabledbool(this, enableTheme);
    }
  }
  wxPanelBaseExtSetTransparentwxByteFunc m_wxPanelBaseExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte param0) override
  {
    bool res = wxPanelBase::SetTransparent(param0);
    if (*m_wxPanelBaseExtSetTransparentwxByte != NULL){
      return m_wxPanelBaseExtSetTransparentwxByte(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtSetValidatorwxValidatorCRFunc m_wxPanelBaseExtSetValidatorwxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxPanelBase::SetValidator(validator);
    if (*m_wxPanelBaseExtSetValidatorwxValidatorCR != NULL){
      return m_wxPanelBaseExtSetValidatorwxValidatorCR(this, validator);
    }
  }
  wxPanelBaseExtSetWindowStyleFlaglongFunc m_wxPanelBaseExtSetWindowStyleFlaglong = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxPanelBase::SetWindowStyleFlag(style);
    if (*m_wxPanelBaseExtSetWindowStyleFlaglong != NULL){
      return m_wxPanelBaseExtSetWindowStyleFlaglong(this, style);
    }
  }
  wxPanelBaseExtShouldInheritColoursFunc m_wxPanelBaseExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxPanelBase::ShouldInheritColours();
    if (*m_wxPanelBaseExtShouldInheritColours != NULL){
      return m_wxPanelBaseExtShouldInheritColours(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtShowboolFunc m_wxPanelBaseExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxPanelBase::Show(show);
    if (*m_wxPanelBaseExtShowbool != NULL){
      return m_wxPanelBaseExtShowbool(this, show);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtShowWithEffectwxShowEffectunsignedintFunc m_wxPanelBaseExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxPanelBase::ShowWithEffect(param0, param1);
    if (*m_wxPanelBaseExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxPanelBaseExtShowWithEffectwxShowEffectunsignedint(this, param0, param1);
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
      return m_wxPanelBaseExtTransferDataFromWindow(this);
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
      return m_wxPanelBaseExtTransferDataToWindow(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtTryAfterwxEventRFunc m_wxPanelBaseExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxPanelBase::TryAfter(event);
    if (*m_wxPanelBaseExtTryAfterwxEventR != NULL){
      return m_wxPanelBaseExtTryAfterwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtTryBeforewxEventRFunc m_wxPanelBaseExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxPanelBase::TryBefore(event);
    if (*m_wxPanelBaseExtTryBeforewxEventR != NULL){
      return m_wxPanelBaseExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtUnregisterHotKeyintFunc m_wxPanelBaseExtUnregisterHotKeyint = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxPanelBase::UnregisterHotKey(hotkeyId);
    if (*m_wxPanelBaseExtUnregisterHotKeyint != NULL){
      return m_wxPanelBaseExtUnregisterHotKeyint(this, hotkeyId);
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
  wxPanelBaseExtUpdateWindowUIlongFunc m_wxPanelBaseExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxPanelBase::UpdateWindowUI(flags);
    if (*m_wxPanelBaseExtUpdateWindowUIlong != NULL){
      return m_wxPanelBaseExtUpdateWindowUIlong(this, flags);
    }
  }
  wxPanelBaseExtValidateFunc m_wxPanelBaseExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxPanelBase::Validate();
    if (*m_wxPanelBaseExtValidate != NULL){
      return m_wxPanelBaseExtValidate(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXAdjustFontToOwnPPIwxFontRFunc m_wxPanelBaseExtWXAdjustFontToOwnPPIwxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& param0) const override
  {
    wxPanelBase::WXAdjustFontToOwnPPI(param0);
    if (*m_wxPanelBaseExtWXAdjustFontToOwnPPIwxFontR != NULL){
      return m_wxPanelBaseExtWXAdjustFontToOwnPPIwxFontR(this, param0);
    }
  }
  wxPanelBaseExtWXGetTextEntryFunc m_wxPanelBaseExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxPanelBase::WXGetTextEntry();
    if (*m_wxPanelBaseExtWXGetTextEntry != NULL){
      return m_wxPanelBaseExtWXGetTextEntry(this);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXReservedEvtHandler1voidPFunc m_wxPanelBaseExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxPanelBase::WXReservedEvtHandler1(param0);
    if (*m_wxPanelBaseExtWXReservedEvtHandler1voidP != NULL){
      return m_wxPanelBaseExtWXReservedEvtHandler1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXReservedEvtHandler2voidPFunc m_wxPanelBaseExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxPanelBase::WXReservedEvtHandler2(param0);
    if (*m_wxPanelBaseExtWXReservedEvtHandler2voidP != NULL){
      return m_wxPanelBaseExtWXReservedEvtHandler2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXReservedWindow1voidPFunc m_wxPanelBaseExtWXReservedWindow1voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxPanelBase::WXReservedWindow1(param0);
    if (*m_wxPanelBaseExtWXReservedWindow1voidP != NULL){
      return m_wxPanelBaseExtWXReservedWindow1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXReservedWindow2voidPFunc m_wxPanelBaseExtWXReservedWindow2voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxPanelBase::WXReservedWindow2(param0);
    if (*m_wxPanelBaseExtWXReservedWindow2voidP != NULL){
      return m_wxPanelBaseExtWXReservedWindow2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXReservedWindow3voidPFunc m_wxPanelBaseExtWXReservedWindow3voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxPanelBase::WXReservedWindow3(param0);
    if (*m_wxPanelBaseExtWXReservedWindow3voidP != NULL){
      return m_wxPanelBaseExtWXReservedWindow3voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc m_wxPanelBaseExtWXSetInitialFittingClientSizeintwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxPanelBase::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxPanelBaseExtWXSetInitialFittingClientSizeintwxSizerP != NULL){
      return m_wxPanelBaseExtWXSetInitialFittingClientSizeintwxSizerP(this, flags, sizer);
    }
  }
  wxPanelBaseExtWarpPointerintintFunc m_wxPanelBaseExtWarpPointerintint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxPanelBase::WarpPointer(x, y);
    if (*m_wxPanelBaseExtWarpPointerintint != NULL){
      return m_wxPanelBaseExtWarpPointerintint(this, x, y);
    }
  }
  wxPanelBaseExtWindowToClientSizewxSizeCRFunc m_wxPanelBaseExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxPanelBase::WindowToClientSize(size);
    if (*m_wxPanelBaseExtWindowToClientSizewxSizeCR != NULL){
      return m_wxPanelBaseExtWindowToClientSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxPanelBaseExt(wxPanelBaseExtAcceptsFocusFunc a_AcceptsFocus, wxPanelBaseExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxPanelBaseExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxPanelBaseExtAddChildwxWindowBasePFunc a_AddChildwxWindowBaseP, wxPanelBaseExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxPanelBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxPanelBaseExtAdjustForParentClientOriginintRintRintFunc a_AdjustForParentClientOriginintRintRint, wxPanelBaseExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxPanelBaseExtAssociateHandleWXWidgetFunc a_AssociateHandleWXWidget, wxPanelBaseExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxPanelBaseExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxPanelBaseExtCanBeFocusedFunc a_CanBeFocused, wxPanelBaseExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxPanelBaseExtCanScrollintFunc a_CanScrollint, wxPanelBaseExtCanSetTransparentFunc a_CanSetTransparent, wxPanelBaseExtClearBackgroundFunc a_ClearBackground, wxPanelBaseExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxPanelBaseExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxPanelBaseExtCreateRefDataFunc a_CreateRefData, wxPanelBaseExtDestroyFunc a_Destroy, wxPanelBaseExtDissociateHandleFunc a_DissociateHandle, wxPanelBaseExtDoCaptureMouseFunc a_DoCaptureMouse, wxPanelBaseExtDoCentreintFunc a_DoCentreint, wxPanelBaseExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxPanelBaseExtDoEnableboolFunc a_DoEnablebool, wxPanelBaseExtDoFreezeFunc a_DoFreeze, wxPanelBaseExtDoGetBestClientHeightintFunc a_DoGetBestClientHeightint, wxPanelBaseExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxPanelBaseExtDoGetBestClientWidthintFunc a_DoGetBestClientWidthint, wxPanelBaseExtDoGetBestSizeFunc a_DoGetBestSize, wxPanelBaseExtDoGetClientDataFunc a_DoGetClientData, wxPanelBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxPanelBaseExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxPanelBaseExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxPanelBaseExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxPanelBaseExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxPanelBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxPanelBaseExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxPanelBaseExtDoHitTestwxCoordwxCoordFunc a_DoHitTestwxCoordwxCoord, wxPanelBaseExtDoIsExposedintintintintFunc a_DoIsExposedintintintint, wxPanelBaseExtDoIsExposedintintFunc a_DoIsExposedintint, wxPanelBaseExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxPanelBaseExtDoNavigateInintFunc a_DoNavigateInint, wxPanelBaseExtDoPhaseintFunc a_DoPhaseint, wxPanelBaseExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxPanelBaseExtDoReleaseMouseFunc a_DoReleaseMouse, wxPanelBaseExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxPanelBaseExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxPanelBaseExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxPanelBaseExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxPanelBaseExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxPanelBaseExtDoSetSizeHintsintintintintintintFunc a_DoSetSizeHintsintintintintintint, wxPanelBaseExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxPanelBaseExtDoSetToolTipTextwxStringCRFunc a_DoSetToolTipTextwxStringCR, wxPanelBaseExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxPanelBaseExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxPanelBaseExtDoThawFunc a_DoThaw, wxPanelBaseExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxPanelBaseExtDragAcceptFilesboolFunc a_DragAcceptFilesbool, wxPanelBaseExtEnableboolFunc a_Enablebool, wxPanelBaseExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxPanelBaseExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxPanelBaseExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxPanelBaseExtFitFunc a_Fit, wxPanelBaseExtFitInsideFunc a_FitInside, wxPanelBaseExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxPanelBaseExtGetCharHeightFunc a_GetCharHeight, wxPanelBaseExtGetCharWidthFunc a_GetCharWidth, wxPanelBaseExtGetClassInfoFunc a_GetClassInfo, wxPanelBaseExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxPanelBaseExtGetClientSizeConstraintintPintPFunc a_GetClientSizeConstraintintPintP, wxPanelBaseExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxPanelBaseExtGetDPIFunc a_GetDPI, wxPanelBaseExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxPanelBaseExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxPanelBaseExtGetDefaultBorderFunc a_GetDefaultBorder, wxPanelBaseExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxPanelBaseExtGetDropTargetFunc a_GetDropTarget, wxPanelBaseExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxPanelBaseExtGetEventHashTableFunc a_GetEventHashTable, wxPanelBaseExtGetEventTableFunc a_GetEventTable, wxPanelBaseExtGetHandleFunc a_GetHandle, wxPanelBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin, wxPanelBaseExtGetLabelFunc a_GetLabel, wxPanelBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxPanelBaseExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxPanelBaseExtGetMaxClientSizeFunc a_GetMaxClientSize, wxPanelBaseExtGetMaxSizeFunc a_GetMaxSize, wxPanelBaseExtGetMinClientSizeFunc a_GetMinClientSize, wxPanelBaseExtGetMinSizeFunc a_GetMinSize, wxPanelBaseExtGetNameFunc a_GetName, wxPanelBaseExtGetPositionConstraintintPintPFunc a_GetPositionConstraintintPintP, wxPanelBaseExtGetScrollPosintFunc a_GetScrollPosint, wxPanelBaseExtGetScrollRangeintFunc a_GetScrollRangeint, wxPanelBaseExtGetScrollThumbintFunc a_GetScrollThumbint, wxPanelBaseExtGetSizeConstraintintPintPFunc a_GetSizeConstraintintPintP, wxPanelBaseExtGetThemeEnabledFunc a_GetThemeEnabled, wxPanelBaseExtGetValidatorFunc a_GetValidator, wxPanelBaseExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxPanelBaseExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxPanelBaseExtHasCaptureFunc a_HasCapture, wxPanelBaseExtHasFocusFunc a_HasFocus, wxPanelBaseExtHasMultiplePagesFunc a_HasMultiplePages, wxPanelBaseExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxPanelBaseExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxPanelBaseExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxPanelBaseExtInheritAttributesFunc a_InheritAttributes, wxPanelBaseExtInitDialogFunc a_InitDialog, wxPanelBaseExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxPanelBaseExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxPanelBaseExtIsRetainedFunc a_IsRetained, wxPanelBaseExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxPanelBaseExtIsShownFunc a_IsShown, wxPanelBaseExtIsShownOnScreenFunc a_IsShownOnScreen, wxPanelBaseExtIsThisEnabledFunc a_IsThisEnabled, wxPanelBaseExtIsTopLevelFunc a_IsTopLevel, wxPanelBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxPanelBaseExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxPanelBaseExtLayoutFunc a_Layout, wxPanelBaseExtLayoutPhase1intPFunc a_LayoutPhase1intP, wxPanelBaseExtLayoutPhase2intPFunc a_LayoutPhase2intP, wxPanelBaseExtLowerFunc a_Lower, wxPanelBaseExtMoveConstraintintintFunc a_MoveConstraintintint, wxPanelBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxPanelBaseExtOnInternalIdleFunc a_OnInternalIdle, wxPanelBaseExtPrepareDCwxDCRFunc a_PrepareDCwxDCR, wxPanelBaseExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxPanelBaseExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxPanelBaseExtRaiseFunc a_Raise, wxPanelBaseExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxPanelBaseExtRegisterHotKeyintintintFunc a_RegisterHotKeyintintint, wxPanelBaseExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxPanelBaseExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxPanelBaseExtScrollLinesintFunc a_ScrollLinesint, wxPanelBaseExtScrollPagesintFunc a_ScrollPagesint, wxPanelBaseExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxPanelBaseExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxPanelBaseExtSendIdleEventswxIdleEventRFunc a_SendIdleEventswxIdleEventR, wxPanelBaseExtSendSizeEventintFunc a_SendSizeEventint, wxPanelBaseExtSetAcceleratorTablewxAcceleratorTableCRFunc a_SetAcceleratorTablewxAcceleratorTableCR, wxPanelBaseExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxPanelBaseExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxPanelBaseExtSetCanFocusboolFunc a_SetCanFocusbool, wxPanelBaseExtSetConstraintSizesboolFunc a_SetConstraintSizesbool, wxPanelBaseExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxPanelBaseExtSetDoubleBufferedboolFunc a_SetDoubleBufferedbool, wxPanelBaseExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxPanelBaseExtSetExtraStylelongFunc a_SetExtraStylelong, wxPanelBaseExtSetFocusFunc a_SetFocus, wxPanelBaseExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxPanelBaseExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxPanelBaseExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxPanelBaseExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxPanelBaseExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxPanelBaseExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxPanelBaseExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxPanelBaseExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxPanelBaseExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxPanelBaseExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxPanelBaseExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxPanelBaseExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxPanelBaseExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxPanelBaseExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxPanelBaseExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxPanelBaseExtSetSizeConstraintintintintintFunc a_SetSizeConstraintintintintint, wxPanelBaseExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxPanelBaseExtSetThemeEnabledboolFunc a_SetThemeEnabledbool, wxPanelBaseExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxPanelBaseExtSetValidatorwxValidatorCRFunc a_SetValidatorwxValidatorCR, wxPanelBaseExtSetWindowStyleFlaglongFunc a_SetWindowStyleFlaglong, wxPanelBaseExtShouldInheritColoursFunc a_ShouldInheritColours, wxPanelBaseExtShowboolFunc a_Showbool, wxPanelBaseExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxPanelBaseExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxPanelBaseExtTransferDataToWindowFunc a_TransferDataToWindow, wxPanelBaseExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxPanelBaseExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxPanelBaseExtUnregisterHotKeyintFunc a_UnregisterHotKeyint, wxPanelBaseExtUpdateFunc a_Update, wxPanelBaseExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxPanelBaseExtValidateFunc a_Validate, wxPanelBaseExtWXAdjustFontToOwnPPIwxFontRFunc a_WXAdjustFontToOwnPPIwxFontR, wxPanelBaseExtWXGetTextEntryFunc a_WXGetTextEntry, wxPanelBaseExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxPanelBaseExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxPanelBaseExtWXReservedWindow1voidPFunc a_WXReservedWindow1voidP, wxPanelBaseExtWXReservedWindow2voidPFunc a_WXReservedWindow2voidP, wxPanelBaseExtWXReservedWindow3voidPFunc a_WXReservedWindow3voidP, wxPanelBaseExtWXSetInitialFittingClientSizeintwxSizerPFunc a_WXSetInitialFittingClientSizeintwxSizerP, wxPanelBaseExtWarpPointerintintFunc a_WarpPointerintint, wxPanelBaseExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxPanelBase() {
    m_wxPanelBaseExtAcceptsFocus = a_AcceptsFocus;
    m_wxPanelBaseExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxPanelBaseExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxPanelBaseExtAddChildwxWindowBaseP = a_AddChildwxWindowBaseP;
    m_wxPanelBaseExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxPanelBaseExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxPanelBaseExtAdjustForParentClientOriginintRintRint = a_AdjustForParentClientOriginintRintRint;
    m_wxPanelBaseExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxPanelBaseExtAssociateHandleWXWidget = a_AssociateHandleWXWidget;
    m_wxPanelBaseExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxPanelBaseExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxPanelBaseExtCanBeFocused = a_CanBeFocused;
    m_wxPanelBaseExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxPanelBaseExtCanScrollint = a_CanScrollint;
    m_wxPanelBaseExtCanSetTransparent = a_CanSetTransparent;
    m_wxPanelBaseExtClearBackground = a_ClearBackground;
    m_wxPanelBaseExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxPanelBaseExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxPanelBaseExtCreateRefData = a_CreateRefData;
    m_wxPanelBaseExtDestroy = a_Destroy;
    m_wxPanelBaseExtDissociateHandle = a_DissociateHandle;
    m_wxPanelBaseExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxPanelBaseExtDoCentreint = a_DoCentreint;
    m_wxPanelBaseExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxPanelBaseExtDoEnablebool = a_DoEnablebool;
    m_wxPanelBaseExtDoFreeze = a_DoFreeze;
    m_wxPanelBaseExtDoGetBestClientHeightint = a_DoGetBestClientHeightint;
    m_wxPanelBaseExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxPanelBaseExtDoGetBestClientWidthint = a_DoGetBestClientWidthint;
    m_wxPanelBaseExtDoGetBestSize = a_DoGetBestSize;
    m_wxPanelBaseExtDoGetClientData = a_DoGetClientData;
    m_wxPanelBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxPanelBaseExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxPanelBaseExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxPanelBaseExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxPanelBaseExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxPanelBaseExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxPanelBaseExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxPanelBaseExtDoHitTestwxCoordwxCoord = a_DoHitTestwxCoordwxCoord;
    m_wxPanelBaseExtDoIsExposedintintintint = a_DoIsExposedintintintint;
    m_wxPanelBaseExtDoIsExposedintint = a_DoIsExposedintint;
    m_wxPanelBaseExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxPanelBaseExtDoNavigateInint = a_DoNavigateInint;
    m_wxPanelBaseExtDoPhaseint = a_DoPhaseint;
    m_wxPanelBaseExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxPanelBaseExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxPanelBaseExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxPanelBaseExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxPanelBaseExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxPanelBaseExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxPanelBaseExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxPanelBaseExtDoSetSizeHintsintintintintintint = a_DoSetSizeHintsintintintintintint;
    m_wxPanelBaseExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxPanelBaseExtDoSetToolTipTextwxStringCR = a_DoSetToolTipTextwxStringCR;
    m_wxPanelBaseExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxPanelBaseExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxPanelBaseExtDoThaw = a_DoThaw;
    m_wxPanelBaseExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxPanelBaseExtDragAcceptFilesbool = a_DragAcceptFilesbool;
    m_wxPanelBaseExtEnablebool = a_Enablebool;
    m_wxPanelBaseExtEnableTouchEventsint = a_EnableTouchEventsint;
    m_wxPanelBaseExtEnableVisibleFocusbool = a_EnableVisibleFocusbool;
    m_wxPanelBaseExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxPanelBaseExtFit = a_Fit;
    m_wxPanelBaseExtFitInside = a_FitInside;
    m_wxPanelBaseExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxPanelBaseExtGetCharHeight = a_GetCharHeight;
    m_wxPanelBaseExtGetCharWidth = a_GetCharWidth;
    m_wxPanelBaseExtGetClassInfo = a_GetClassInfo;
    m_wxPanelBaseExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxPanelBaseExtGetClientSizeConstraintintPintP = a_GetClientSizeConstraintintPintP;
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
    m_wxPanelBaseExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin;
    m_wxPanelBaseExtGetLabel = a_GetLabel;
    m_wxPanelBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxPanelBaseExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxPanelBaseExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxPanelBaseExtGetMaxSize = a_GetMaxSize;
    m_wxPanelBaseExtGetMinClientSize = a_GetMinClientSize;
    m_wxPanelBaseExtGetMinSize = a_GetMinSize;
    m_wxPanelBaseExtGetName = a_GetName;
    m_wxPanelBaseExtGetPositionConstraintintPintP = a_GetPositionConstraintintPintP;
    m_wxPanelBaseExtGetScrollPosint = a_GetScrollPosint;
    m_wxPanelBaseExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxPanelBaseExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxPanelBaseExtGetSizeConstraintintPintP = a_GetSizeConstraintintPintP;
    m_wxPanelBaseExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxPanelBaseExtGetValidator = a_GetValidator;
    m_wxPanelBaseExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxPanelBaseExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxPanelBaseExtHasCapture = a_HasCapture;
    m_wxPanelBaseExtHasFocus = a_HasFocus;
    m_wxPanelBaseExtHasMultiplePages = a_HasMultiplePages;
    m_wxPanelBaseExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxPanelBaseExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxPanelBaseExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxPanelBaseExtInheritAttributes = a_InheritAttributes;
    m_wxPanelBaseExtInitDialog = a_InitDialog;
    m_wxPanelBaseExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxPanelBaseExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxPanelBaseExtIsRetained = a_IsRetained;
    m_wxPanelBaseExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxPanelBaseExtIsShown = a_IsShown;
    m_wxPanelBaseExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxPanelBaseExtIsThisEnabled = a_IsThisEnabled;
    m_wxPanelBaseExtIsTopLevel = a_IsTopLevel;
    m_wxPanelBaseExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxPanelBaseExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxPanelBaseExtLayout = a_Layout;
    m_wxPanelBaseExtLayoutPhase1intP = a_LayoutPhase1intP;
    m_wxPanelBaseExtLayoutPhase2intP = a_LayoutPhase2intP;
    m_wxPanelBaseExtLower = a_Lower;
    m_wxPanelBaseExtMoveConstraintintint = a_MoveConstraintintint;
    m_wxPanelBaseExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxPanelBaseExtOnInternalIdle = a_OnInternalIdle;
    m_wxPanelBaseExtPrepareDCwxDCR = a_PrepareDCwxDCR;
    m_wxPanelBaseExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxPanelBaseExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxPanelBaseExtRaise = a_Raise;
    m_wxPanelBaseExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxPanelBaseExtRegisterHotKeyintintint = a_RegisterHotKeyintintint;
    m_wxPanelBaseExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxPanelBaseExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxPanelBaseExtScrollLinesint = a_ScrollLinesint;
    m_wxPanelBaseExtScrollPagesint = a_ScrollPagesint;
    m_wxPanelBaseExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxPanelBaseExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxPanelBaseExtSendIdleEventswxIdleEventR = a_SendIdleEventswxIdleEventR;
    m_wxPanelBaseExtSendSizeEventint = a_SendSizeEventint;
    m_wxPanelBaseExtSetAcceleratorTablewxAcceleratorTableCR = a_SetAcceleratorTablewxAcceleratorTableCR;
    m_wxPanelBaseExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxPanelBaseExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxPanelBaseExtSetCanFocusbool = a_SetCanFocusbool;
    m_wxPanelBaseExtSetConstraintSizesbool = a_SetConstraintSizesbool;
    m_wxPanelBaseExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxPanelBaseExtSetDoubleBufferedbool = a_SetDoubleBufferedbool;
    m_wxPanelBaseExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxPanelBaseExtSetExtraStylelong = a_SetExtraStylelong;
    m_wxPanelBaseExtSetFocus = a_SetFocus;
    m_wxPanelBaseExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxPanelBaseExtSetFontwxFontCR = a_SetFontwxFontCR;
    m_wxPanelBaseExtSetForegroundColourwxColourCR = a_SetForegroundColourwxColourCR;
    m_wxPanelBaseExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxPanelBaseExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxPanelBaseExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxPanelBaseExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxPanelBaseExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxPanelBaseExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxPanelBaseExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxPanelBaseExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxPanelBaseExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxPanelBaseExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxPanelBaseExtSetScrollPosintintbool = a_SetScrollPosintintbool;
    m_wxPanelBaseExtSetScrollbarintintintintbool = a_SetScrollbarintintintintbool;
    m_wxPanelBaseExtSetSizeConstraintintintintint = a_SetSizeConstraintintintintint;
    m_wxPanelBaseExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxPanelBaseExtSetThemeEnabledbool = a_SetThemeEnabledbool;
    m_wxPanelBaseExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxPanelBaseExtSetValidatorwxValidatorCR = a_SetValidatorwxValidatorCR;
    m_wxPanelBaseExtSetWindowStyleFlaglong = a_SetWindowStyleFlaglong;
    m_wxPanelBaseExtShouldInheritColours = a_ShouldInheritColours;
    m_wxPanelBaseExtShowbool = a_Showbool;
    m_wxPanelBaseExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxPanelBaseExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxPanelBaseExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxPanelBaseExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxPanelBaseExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxPanelBaseExtUnregisterHotKeyint = a_UnregisterHotKeyint;
    m_wxPanelBaseExtUpdate = a_Update;
    m_wxPanelBaseExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxPanelBaseExtValidate = a_Validate;
    m_wxPanelBaseExtWXAdjustFontToOwnPPIwxFontR = a_WXAdjustFontToOwnPPIwxFontR;
    m_wxPanelBaseExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxPanelBaseExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxPanelBaseExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxPanelBaseExtWXReservedWindow1voidP = a_WXReservedWindow1voidP;
    m_wxPanelBaseExtWXReservedWindow2voidP = a_WXReservedWindow2voidP;
    m_wxPanelBaseExtWXReservedWindow3voidP = a_WXReservedWindow3voidP;
    m_wxPanelBaseExtWXSetInitialFittingClientSizeintwxSizerP = a_WXSetInitialFittingClientSizeintwxSizerP;
    m_wxPanelBaseExtWarpPointerintint = a_WarpPointerintint;
    m_wxPanelBaseExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
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
      return m_wxPanelExtAcceptsFocus(this);
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
      return m_wxPanelExtAcceptsFocusFromKeyboard(this);
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
      return m_wxPanelExtAcceptsFocusRecursively(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtAddChildwxWindowBasePFunc m_wxPanelExtAddChildwxWindowBaseP = NULL;
  virtual void AddChild(wxWindowBase* child) override
  {
    wxPanel::AddChild(child);
    if (*m_wxPanelExtAddChildwxWindowBaseP != NULL){
      return m_wxPanelExtAddChildwxWindowBaseP(this, child);
    }
  }
  wxPanelExtAddPendingEventwxEventCRFunc m_wxPanelExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxPanel::AddPendingEvent(event);
    if (*m_wxPanelExtAddPendingEventwxEventCR != NULL){
      return m_wxPanelExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxPanelExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc m_wxPanelExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = NULL;
  virtual wxCoord AdjustForLayoutDirection(wxCoord x, wxCoord width, wxCoord widthTotal) const override
  {
    wxCoord res = wxPanel::AdjustForLayoutDirection(x, width, widthTotal);
    if (*m_wxPanelExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord != NULL){
      return m_wxPanelExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord(this, x, width, widthTotal);
    }
    else {
      return res;
    }
  }
  wxPanelExtAdjustForParentClientOriginintRintRintFunc m_wxPanelExtAdjustForParentClientOriginintRintRint = NULL;
  virtual void AdjustForParentClientOrigin(int& x, int& y, int sizeFlags = 0) const override
  {
    wxPanel::AdjustForParentClientOrigin(x, y, sizeFlags);
    if (*m_wxPanelExtAdjustForParentClientOriginintRintRint != NULL){
      return m_wxPanelExtAdjustForParentClientOriginintRintRint(this, x, y, sizeFlags);
    }
  }
  wxPanelExtAlwaysShowScrollbarsboolboolFunc m_wxPanelExtAlwaysShowScrollbarsboolbool = NULL;
  virtual void AlwaysShowScrollbars(bool param0 = true, bool param1 = true) override
  {
    wxPanel::AlwaysShowScrollbars(param0, param1);
    if (*m_wxPanelExtAlwaysShowScrollbarsboolbool != NULL){
      return m_wxPanelExtAlwaysShowScrollbarsboolbool(this, param0, param1);
    }
  }
  wxPanelExtAssociateHandleWXWidgetFunc m_wxPanelExtAssociateHandleWXWidget = NULL;
  virtual void AssociateHandle(WXWidget param0) override
  {
    wxPanel::AssociateHandle(param0);
    if (*m_wxPanelExtAssociateHandleWXWidget != NULL){
      return m_wxPanelExtAssociateHandleWXWidget(this, param0);
    }
  }
  wxPanelExtBeginRepositioningChildrenFunc m_wxPanelExtBeginRepositioningChildren = NULL;
  virtual bool BeginRepositioningChildren() override
  {
    bool res = wxPanel::BeginRepositioningChildren();
    if (*m_wxPanelExtBeginRepositioningChildren != NULL){
      return m_wxPanelExtBeginRepositioningChildren(this);
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
      return m_wxPanelExtCanApplyThemeBorder(this);
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
      return m_wxPanelExtCanBeFocused(this);
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
      return m_wxPanelExtCanBeOutsideClientArea(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtCanScrollintFunc m_wxPanelExtCanScrollint = NULL;
  virtual bool CanScroll(int orient) const override
  {
    bool res = wxPanel::CanScroll(orient);
    if (*m_wxPanelExtCanScrollint != NULL){
      return m_wxPanelExtCanScrollint(this, orient);
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
      return m_wxPanelExtCanSetTransparent(this);
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
  wxPanelExtClientToWindowSizewxSizeCRFunc m_wxPanelExtClientToWindowSizewxSizeCR = NULL;
  virtual wxSize ClientToWindowSize(wxSize const& size) const override
  {
    wxSize res = wxPanel::ClientToWindowSize(size);
    if (*m_wxPanelExtClientToWindowSizewxSizeCR != NULL){
      return m_wxPanelExtClientToWindowSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxPanelExtCloneRefDatawxObjectRefDataCPFunc m_wxPanelExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxPanel::CloneRefData(data);
    if (*m_wxPanelExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxPanelExtCloneRefDatawxObjectRefDataCP(this, data);
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
      return m_wxPanelExtCreateRefData(this);
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
      return m_wxPanelExtDestroy(this);
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
  wxPanelExtDoCentreintFunc m_wxPanelExtDoCentreint = NULL;
  virtual void DoCentre(int dir) override
  {
    wxPanel::DoCentre(dir);
    if (*m_wxPanelExtDoCentreint != NULL){
      return m_wxPanelExtDoCentreint(this, dir);
    }
  }
  wxPanelExtDoClientToScreenintPintPFunc m_wxPanelExtDoClientToScreenintPintP = NULL;
  virtual void DoClientToScreen(int* x, int* y) const override
  {
    wxPanel::DoClientToScreen(x, y);
    if (*m_wxPanelExtDoClientToScreenintPintP != NULL){
      return m_wxPanelExtDoClientToScreenintPintP(this, x, y);
    }
  }
  wxPanelExtDoEnableboolFunc m_wxPanelExtDoEnablebool = NULL;
  virtual void DoEnable(bool param0) override
  {
    wxPanel::DoEnable(param0);
    if (*m_wxPanelExtDoEnablebool != NULL){
      return m_wxPanelExtDoEnablebool(this, param0);
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
  wxPanelExtDoGetBestClientHeightintFunc m_wxPanelExtDoGetBestClientHeightint = NULL;
  virtual int DoGetBestClientHeight(int param0) const override
  {
    int res = wxPanel::DoGetBestClientHeight(param0);
    if (*m_wxPanelExtDoGetBestClientHeightint != NULL){
      return m_wxPanelExtDoGetBestClientHeightint(this, param0);
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
      return m_wxPanelExtDoGetBestClientSize(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoGetBestClientWidthintFunc m_wxPanelExtDoGetBestClientWidthint = NULL;
  virtual int DoGetBestClientWidth(int param0) const override
  {
    int res = wxPanel::DoGetBestClientWidth(param0);
    if (*m_wxPanelExtDoGetBestClientWidthint != NULL){
      return m_wxPanelExtDoGetBestClientWidthint(this, param0);
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
      return m_wxPanelExtDoGetBestSize(this);
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
      return m_wxPanelExtDoGetClientData(this);
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
      return m_wxPanelExtDoGetClientObject(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoGetClientSizeintPintPFunc m_wxPanelExtDoGetClientSizeintPintP = NULL;
  virtual void DoGetClientSize(int* width, int* height) const override
  {
    wxPanel::DoGetClientSize(width, height);
    if (*m_wxPanelExtDoGetClientSizeintPintP != NULL){
      return m_wxPanelExtDoGetClientSizeintPintP(this, width, height);
    }
  }
  wxPanelExtDoGetPositionintPintPFunc m_wxPanelExtDoGetPositionintPintP = NULL;
  virtual void DoGetPosition(int* x, int* y) const override
  {
    wxPanel::DoGetPosition(x, y);
    if (*m_wxPanelExtDoGetPositionintPintP != NULL){
      return m_wxPanelExtDoGetPositionintPintP(this, x, y);
    }
  }
  wxPanelExtDoGetScreenPositionintPintPFunc m_wxPanelExtDoGetScreenPositionintPintP = NULL;
  virtual void DoGetScreenPosition(int* x, int* y) const override
  {
    wxPanel::DoGetScreenPosition(x, y);
    if (*m_wxPanelExtDoGetScreenPositionintPintP != NULL){
      return m_wxPanelExtDoGetScreenPositionintPintP(this, x, y);
    }
  }
  wxPanelExtDoGetSizeintPintPFunc m_wxPanelExtDoGetSizeintPintP = NULL;
  virtual void DoGetSize(int* width, int* height) const override
  {
    wxPanel::DoGetSize(width, height);
    if (*m_wxPanelExtDoGetSizeintPintP != NULL){
      return m_wxPanelExtDoGetSizeintPintP(this, width, height);
    }
  }
  wxPanelExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc m_wxPanelExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = NULL;
  virtual void DoGetTextExtent(wxString const& string, int* x, int* y, int* descent = __null, int* externalLeading = __null, wxFont const* font = __null) const override
  {
    wxPanel::DoGetTextExtent(string, x, y, descent, externalLeading, font);
    if (*m_wxPanelExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP != NULL){
      return m_wxPanelExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP(this, string, x, y, descent, externalLeading, font);
    }
  }
  wxPanelExtDoGetVirtualSizeFunc m_wxPanelExtDoGetVirtualSize = NULL;
  virtual wxSize DoGetVirtualSize() const override
  {
    wxSize res = wxPanel::DoGetVirtualSize();
    if (*m_wxPanelExtDoGetVirtualSize != NULL){
      return m_wxPanelExtDoGetVirtualSize(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoHitTestwxCoordwxCoordFunc m_wxPanelExtDoHitTestwxCoordwxCoord = NULL;
  virtual wxHitTest DoHitTest(wxCoord x, wxCoord y) const override
  {
    wxHitTest res = wxPanel::DoHitTest(x, y);
    if (*m_wxPanelExtDoHitTestwxCoordwxCoord != NULL){
      return m_wxPanelExtDoHitTestwxCoordwxCoord(this, x, y);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoIsExposedintintintintFunc m_wxPanelExtDoIsExposedintintintint = NULL;
  virtual bool DoIsExposed(int x, int y, int w, int h) const override
  {
    bool res = wxPanel::DoIsExposed(x, y, w, h);
    if (*m_wxPanelExtDoIsExposedintintintint != NULL){
      return m_wxPanelExtDoIsExposedintintintint(this, x, y, w, h);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoIsExposedintintFunc m_wxPanelExtDoIsExposedintint = NULL;
  virtual bool DoIsExposed(int x, int y) const override
  {
    bool res = wxPanel::DoIsExposed(x, y);
    if (*m_wxPanelExtDoIsExposedintint != NULL){
      return m_wxPanelExtDoIsExposedintint(this, x, y);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoMoveWindowintintintintFunc m_wxPanelExtDoMoveWindowintintintint = NULL;
  virtual void DoMoveWindow(int x, int y, int width, int height) override
  {
    wxPanel::DoMoveWindow(x, y, width, height);
    if (*m_wxPanelExtDoMoveWindowintintintint != NULL){
      return m_wxPanelExtDoMoveWindowintintintint(this, x, y, width, height);
    }
  }
  wxPanelExtDoNavigateInintFunc m_wxPanelExtDoNavigateInint = NULL;
  virtual bool DoNavigateIn(int flags) override
  {
    bool res = wxPanel::DoNavigateIn(flags);
    if (*m_wxPanelExtDoNavigateInint != NULL){
      return m_wxPanelExtDoNavigateInint(this, flags);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoPhaseintFunc m_wxPanelExtDoPhaseint = NULL;
  virtual bool DoPhase(int phase) override
  {
    bool res = wxPanel::DoPhase(phase);
    if (*m_wxPanelExtDoPhaseint != NULL){
      return m_wxPanelExtDoPhaseint(this, phase);
    }
    else {
      return res;
    }
  }
  wxPanelExtDoPopupMenuwxMenuPintintFunc m_wxPanelExtDoPopupMenuwxMenuPintint = NULL;
  virtual bool DoPopupMenu(wxMenu* menu, int x, int y) override
  {
    bool res = wxPanel::DoPopupMenu(menu, x, y);
    if (*m_wxPanelExtDoPopupMenuwxMenuPintint != NULL){
      return m_wxPanelExtDoPopupMenuwxMenuPintint(this, menu, x, y);
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
  wxPanelExtDoScreenToClientintPintPFunc m_wxPanelExtDoScreenToClientintPintP = NULL;
  virtual void DoScreenToClient(int* x, int* y) const override
  {
    wxPanel::DoScreenToClient(x, y);
    if (*m_wxPanelExtDoScreenToClientintPintP != NULL){
      return m_wxPanelExtDoScreenToClientintPintP(this, x, y);
    }
  }
  wxPanelExtDoSetClientDatavoidPFunc m_wxPanelExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxPanel::DoSetClientData(data);
    if (*m_wxPanelExtDoSetClientDatavoidP != NULL){
      return m_wxPanelExtDoSetClientDatavoidP(this, data);
    }
  }
  wxPanelExtDoSetClientObjectwxClientDataPFunc m_wxPanelExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxPanel::DoSetClientObject(data);
    if (*m_wxPanelExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxPanelExtDoSetClientObjectwxClientDataP(this, data);
    }
  }
  wxPanelExtDoSetClientSizeintintFunc m_wxPanelExtDoSetClientSizeintint = NULL;
  virtual void DoSetClientSize(int width, int height) override
  {
    wxPanel::DoSetClientSize(width, height);
    if (*m_wxPanelExtDoSetClientSizeintint != NULL){
      return m_wxPanelExtDoSetClientSizeintint(this, width, height);
    }
  }
  wxPanelExtDoSetSizeintintintintintFunc m_wxPanelExtDoSetSizeintintintintint = NULL;
  virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags = (0x0001 | 0x0002)) override
  {
    wxPanel::DoSetSize(x, y, width, height, sizeFlags);
    if (*m_wxPanelExtDoSetSizeintintintintint != NULL){
      return m_wxPanelExtDoSetSizeintintintintint(this, x, y, width, height, sizeFlags);
    }
  }
  wxPanelExtDoSetSizeHintsintintintintintintFunc m_wxPanelExtDoSetSizeHintsintintintintintint = NULL;
  virtual void DoSetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH) override
  {
    wxPanel::DoSetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxPanelExtDoSetSizeHintsintintintintintint != NULL){
      return m_wxPanelExtDoSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxPanelExtDoSetToolTipwxToolTipPFunc m_wxPanelExtDoSetToolTipwxToolTipP = NULL;
  virtual void DoSetToolTip(wxToolTip* tip) override
  {
    wxPanel::DoSetToolTip(tip);
    if (*m_wxPanelExtDoSetToolTipwxToolTipP != NULL){
      return m_wxPanelExtDoSetToolTipwxToolTipP(this, tip);
    }
  }
  wxPanelExtDoSetToolTipTextwxStringCRFunc m_wxPanelExtDoSetToolTipTextwxStringCR = NULL;
  virtual void DoSetToolTipText(wxString const& tip) override
  {
    wxPanel::DoSetToolTipText(tip);
    if (*m_wxPanelExtDoSetToolTipTextwxStringCR != NULL){
      return m_wxPanelExtDoSetToolTipTextwxStringCR(this, tip);
    }
  }
  wxPanelExtDoSetVirtualSizeintintFunc m_wxPanelExtDoSetVirtualSizeintint = NULL;
  virtual void DoSetVirtualSize(int x, int y) override
  {
    wxPanel::DoSetVirtualSize(x, y);
    if (*m_wxPanelExtDoSetVirtualSizeintint != NULL){
      return m_wxPanelExtDoSetVirtualSizeintint(this, x, y);
    }
  }
  wxPanelExtDoSetWindowVariantwxWindowVariantFunc m_wxPanelExtDoSetWindowVariantwxWindowVariant = NULL;
  virtual void DoSetWindowVariant(wxWindowVariant variant) override
  {
    wxPanel::DoSetWindowVariant(variant);
    if (*m_wxPanelExtDoSetWindowVariantwxWindowVariant != NULL){
      return m_wxPanelExtDoSetWindowVariantwxWindowVariant(this, variant);
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
  wxPanelExtDoUpdateWindowUIwxUpdateUIEventRFunc m_wxPanelExtDoUpdateWindowUIwxUpdateUIEventR = NULL;
  virtual void DoUpdateWindowUI(wxUpdateUIEvent& event) override
  {
    wxPanel::DoUpdateWindowUI(event);
    if (*m_wxPanelExtDoUpdateWindowUIwxUpdateUIEventR != NULL){
      return m_wxPanelExtDoUpdateWindowUIwxUpdateUIEventR(this, event);
    }
  }
  wxPanelExtDragAcceptFilesboolFunc m_wxPanelExtDragAcceptFilesbool = NULL;
  virtual void DragAcceptFiles(bool accept) override
  {
    wxPanel::DragAcceptFiles(accept);
    if (*m_wxPanelExtDragAcceptFilesbool != NULL){
      return m_wxPanelExtDragAcceptFilesbool(this, accept);
    }
  }
  wxPanelExtEnableboolFunc m_wxPanelExtEnablebool = NULL;
  virtual bool Enable(bool enable = true) override
  {
    bool res = wxPanel::Enable(enable);
    if (*m_wxPanelExtEnablebool != NULL){
      return m_wxPanelExtEnablebool(this, enable);
    }
    else {
      return res;
    }
  }
  wxPanelExtEnableTouchEventsintFunc m_wxPanelExtEnableTouchEventsint = NULL;
  virtual bool EnableTouchEvents(int param0) override
  {
    bool res = wxPanel::EnableTouchEvents(param0);
    if (*m_wxPanelExtEnableTouchEventsint != NULL){
      return m_wxPanelExtEnableTouchEventsint(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelExtEnableVisibleFocusboolFunc m_wxPanelExtEnableVisibleFocusbool = NULL;
  virtual void EnableVisibleFocus(bool param0) override
  {
    wxPanel::EnableVisibleFocus(param0);
    if (*m_wxPanelExtEnableVisibleFocusbool != NULL){
      return m_wxPanelExtEnableVisibleFocusbool(this, param0);
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
      return m_wxPanelExtGetBestVirtualSize(this);
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
      return m_wxPanelExtGetCharHeight(this);
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
      return m_wxPanelExtGetCharWidth(this);
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
      return m_wxPanelExtGetClassInfo(this);
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
      return m_wxPanelExtGetClientAreaOrigin(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetClientSizeConstraintintPintPFunc m_wxPanelExtGetClientSizeConstraintintPintP = NULL;
  virtual void GetClientSizeConstraint(int* w, int* h) const override
  {
    wxPanel::GetClientSizeConstraint(w, h);
    if (*m_wxPanelExtGetClientSizeConstraintintPintP != NULL){
      return m_wxPanelExtGetClientSizeConstraintintPintP(this, w, h);
    }
  }
  wxPanelExtGetContentScaleFactorFunc m_wxPanelExtGetContentScaleFactor = NULL;
  virtual double GetContentScaleFactor() const override
  {
    double res = wxPanel::GetContentScaleFactor();
    if (*m_wxPanelExtGetContentScaleFactor != NULL){
      return m_wxPanelExtGetContentScaleFactor(this);
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
      return m_wxPanelExtGetDPI(this);
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
      return m_wxPanelExtGetDPIScaleFactor(this);
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
      return m_wxPanelExtGetDefaultAttributes(this);
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
      return m_wxPanelExtGetDefaultBorder(this);
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
      return m_wxPanelExtGetDefaultBorderForControl(this);
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
      return m_wxPanelExtGetDropTarget(this);
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
      return m_wxPanelExtGetEffectiveMinSize(this);
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
      return m_wxPanelExtGetEventHashTable(this);
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
      return m_wxPanelExtGetEventTable(this);
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
      return m_wxPanelExtGetHandle(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc m_wxPanelExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = NULL;
  virtual wxString GetHelpTextAtPoint(wxPoint const& pt, wxHelpEvent::Origin origin) const override
  {
    wxString res = wxPanel::GetHelpTextAtPoint(pt, origin);
    if (*m_wxPanelExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin != NULL){
      return m_wxPanelExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin(this, pt, origin);
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
      return m_wxPanelExtGetLabel(this);
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
      return m_wxPanelExtGetLayoutDirection(this);
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
      return m_wxPanelExtGetMainWindowOfCompositeControl(this);
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
      return m_wxPanelExtGetMaxClientSize(this);
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
      return m_wxPanelExtGetMaxSize(this);
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
      return m_wxPanelExtGetMinClientSize(this);
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
      return m_wxPanelExtGetMinSize(this);
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
      return m_wxPanelExtGetName(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetPositionConstraintintPintPFunc m_wxPanelExtGetPositionConstraintintPintP = NULL;
  virtual void GetPositionConstraint(int* x, int* y) const override
  {
    wxPanel::GetPositionConstraint(x, y);
    if (*m_wxPanelExtGetPositionConstraintintPintP != NULL){
      return m_wxPanelExtGetPositionConstraintintPintP(this, x, y);
    }
  }
  wxPanelExtGetScrollPosintFunc m_wxPanelExtGetScrollPosint = NULL;
  virtual int GetScrollPos(int orient) const override
  {
    int res = wxPanel::GetScrollPos(orient);
    if (*m_wxPanelExtGetScrollPosint != NULL){
      return m_wxPanelExtGetScrollPosint(this, orient);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetScrollRangeintFunc m_wxPanelExtGetScrollRangeint = NULL;
  virtual int GetScrollRange(int orient) const override
  {
    int res = wxPanel::GetScrollRange(orient);
    if (*m_wxPanelExtGetScrollRangeint != NULL){
      return m_wxPanelExtGetScrollRangeint(this, orient);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetScrollThumbintFunc m_wxPanelExtGetScrollThumbint = NULL;
  virtual int GetScrollThumb(int orient) const override
  {
    int res = wxPanel::GetScrollThumb(orient);
    if (*m_wxPanelExtGetScrollThumbint != NULL){
      return m_wxPanelExtGetScrollThumbint(this, orient);
    }
    else {
      return res;
    }
  }
  wxPanelExtGetSizeConstraintintPintPFunc m_wxPanelExtGetSizeConstraintintPintP = NULL;
  virtual void GetSizeConstraint(int* w, int* h) const override
  {
    wxPanel::GetSizeConstraint(w, h);
    if (*m_wxPanelExtGetSizeConstraintintPintP != NULL){
      return m_wxPanelExtGetSizeConstraintintPintP(this, w, h);
    }
  }
  wxPanelExtGetThemeEnabledFunc m_wxPanelExtGetThemeEnabled = NULL;
  virtual bool GetThemeEnabled() const override
  {
    bool res = wxPanel::GetThemeEnabled();
    if (*m_wxPanelExtGetThemeEnabled != NULL){
      return m_wxPanelExtGetThemeEnabled(this);
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
      return m_wxPanelExtGetValidator(this);
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
      return m_wxPanelExtGetWindowBorderSize(this);
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
      return m_wxPanelExtGetWindowStyleFlag(this);
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
      return m_wxPanelExtHasCapture(this);
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
      return m_wxPanelExtHasFocus(this);
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
      return m_wxPanelExtHasMultiplePages(this);
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
      return m_wxPanelExtHasTransparentBackground(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtHideWithEffectwxShowEffectunsignedintFunc m_wxPanelExtHideWithEffectwxShowEffectunsignedint = NULL;
  virtual bool HideWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxPanel::HideWithEffect(param0, param1);
    if (*m_wxPanelExtHideWithEffectwxShowEffectunsignedint != NULL){
      return m_wxPanelExtHideWithEffectwxShowEffectunsignedint(this, param0, param1);
    }
    else {
      return res;
    }
  }
  wxPanelExtInformFirstDirectionintintintFunc m_wxPanelExtInformFirstDirectionintintint = NULL;
  virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override
  {
    bool res = wxPanel::InformFirstDirection(direction, size, availableOtherDir);
    if (*m_wxPanelExtInformFirstDirectionintintint != NULL){
      return m_wxPanelExtInformFirstDirectionintintint(this, direction, size, availableOtherDir);
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
  wxPanelExtIsClientAreaChildwxWindowCPFunc m_wxPanelExtIsClientAreaChildwxWindowCP = NULL;
  virtual bool IsClientAreaChild(wxWindow const* param0) const override
  {
    bool res = wxPanel::IsClientAreaChild(param0);
    if (*m_wxPanelExtIsClientAreaChildwxWindowCP != NULL){
      return m_wxPanelExtIsClientAreaChildwxWindowCP(this, param0);
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
      return m_wxPanelExtIsDoubleBuffered(this);
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
      return m_wxPanelExtIsRetained(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsScrollbarAlwaysShownintFunc m_wxPanelExtIsScrollbarAlwaysShownint = NULL;
  virtual bool IsScrollbarAlwaysShown(int param0) const override
  {
    bool res = wxPanel::IsScrollbarAlwaysShown(param0);
    if (*m_wxPanelExtIsScrollbarAlwaysShownint != NULL){
      return m_wxPanelExtIsScrollbarAlwaysShownint(this, param0);
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
      return m_wxPanelExtIsShown(this);
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
      return m_wxPanelExtIsShownOnScreen(this);
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
      return m_wxPanelExtIsThisEnabled(this);
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
      return m_wxPanelExtIsTopLevel(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc m_wxPanelExtIsTopNavigationDomainwxWindowBaseNNavigationKind = NULL;
  virtual bool IsTopNavigationDomain(wxWindowBase::NavigationKind param0) const override
  {
    bool res = wxPanel::IsTopNavigationDomain(param0);
    if (*m_wxPanelExtIsTopNavigationDomainwxWindowBaseNNavigationKind != NULL){
      return m_wxPanelExtIsTopNavigationDomainwxWindowBaseNNavigationKind(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelExtIsTransparentBackgroundSupportedwxStringPFunc m_wxPanelExtIsTransparentBackgroundSupportedwxStringP = NULL;
  virtual bool IsTransparentBackgroundSupported(wxString* reason = __null) const override
  {
    bool res = wxPanel::IsTransparentBackgroundSupported(reason);
    if (*m_wxPanelExtIsTransparentBackgroundSupportedwxStringP != NULL){
      return m_wxPanelExtIsTransparentBackgroundSupportedwxStringP(this, reason);
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
      return m_wxPanelExtLayout(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtLayoutPhase1intPFunc m_wxPanelExtLayoutPhase1intP = NULL;
  virtual bool LayoutPhase1(int* noChanges) override
  {
    bool res = wxPanel::LayoutPhase1(noChanges);
    if (*m_wxPanelExtLayoutPhase1intP != NULL){
      return m_wxPanelExtLayoutPhase1intP(this, noChanges);
    }
    else {
      return res;
    }
  }
  wxPanelExtLayoutPhase2intPFunc m_wxPanelExtLayoutPhase2intP = NULL;
  virtual bool LayoutPhase2(int* noChanges) override
  {
    bool res = wxPanel::LayoutPhase2(noChanges);
    if (*m_wxPanelExtLayoutPhase2intP != NULL){
      return m_wxPanelExtLayoutPhase2intP(this, noChanges);
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
  wxPanelExtMoveConstraintintintFunc m_wxPanelExtMoveConstraintintint = NULL;
  virtual void MoveConstraint(int x, int y) override
  {
    wxPanel::MoveConstraint(x, y);
    if (*m_wxPanelExtMoveConstraintintint != NULL){
      return m_wxPanelExtMoveConstraintintint(this, x, y);
    }
  }
  wxPanelExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxPanelExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxPanel::OnDynamicBind(param0);
    if (*m_wxPanelExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxPanelExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
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
  wxPanelExtPrepareDCwxDCRFunc m_wxPanelExtPrepareDCwxDCR = NULL;
  virtual void PrepareDC(wxDC& param0) override
  {
    wxPanel::PrepareDC(param0);
    if (*m_wxPanelExtPrepareDCwxDCR != NULL){
      return m_wxPanelExtPrepareDCwxDCR(this, param0);
    }
  }
  wxPanelExtProcessEventwxEventRFunc m_wxPanelExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxPanel::ProcessEvent(event);
    if (*m_wxPanelExtProcessEventwxEventR != NULL){
      return m_wxPanelExtProcessEventwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxPanelExtQueueEventwxEventPFunc m_wxPanelExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxPanel::QueueEvent(event);
    if (*m_wxPanelExtQueueEventwxEventP != NULL){
      return m_wxPanelExtQueueEventwxEventP(this, event);
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
  wxPanelExtRefreshboolwxRectCPFunc m_wxPanelExtRefreshboolwxRectCP = NULL;
  virtual void Refresh(bool eraseBackground = true, wxRect const* rect = (const wxRect*)__null) override
  {
    wxPanel::Refresh(eraseBackground, rect);
    if (*m_wxPanelExtRefreshboolwxRectCP != NULL){
      return m_wxPanelExtRefreshboolwxRectCP(this, eraseBackground, rect);
    }
  }
  wxPanelExtRegisterHotKeyintintintFunc m_wxPanelExtRegisterHotKeyintintint = NULL;
  virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode) override
  {
    bool res = wxPanel::RegisterHotKey(hotkeyId, modifiers, keycode);
    if (*m_wxPanelExtRegisterHotKeyintintint != NULL){
      return m_wxPanelExtRegisterHotKeyintintint(this, hotkeyId, modifiers, keycode);
    }
    else {
      return res;
    }
  }
  wxPanelExtRemoveChildwxWindowBasePFunc m_wxPanelExtRemoveChildwxWindowBaseP = NULL;
  virtual void RemoveChild(wxWindowBase* child) override
  {
    wxPanel::RemoveChild(child);
    if (*m_wxPanelExtRemoveChildwxWindowBaseP != NULL){
      return m_wxPanelExtRemoveChildwxWindowBaseP(this, child);
    }
  }
  wxPanelExtReparentwxWindowBasePFunc m_wxPanelExtReparentwxWindowBaseP = NULL;
  virtual bool Reparent(wxWindowBase* newParent) override
  {
    bool res = wxPanel::Reparent(newParent);
    if (*m_wxPanelExtReparentwxWindowBaseP != NULL){
      return m_wxPanelExtReparentwxWindowBaseP(this, newParent);
    }
    else {
      return res;
    }
  }
  wxPanelExtScrollLinesintFunc m_wxPanelExtScrollLinesint = NULL;
  virtual bool ScrollLines(int param0) override
  {
    bool res = wxPanel::ScrollLines(param0);
    if (*m_wxPanelExtScrollLinesint != NULL){
      return m_wxPanelExtScrollLinesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelExtScrollPagesintFunc m_wxPanelExtScrollPagesint = NULL;
  virtual bool ScrollPages(int param0) override
  {
    bool res = wxPanel::ScrollPages(param0);
    if (*m_wxPanelExtScrollPagesint != NULL){
      return m_wxPanelExtScrollPagesint(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelExtScrollWindowintintwxRectCPFunc m_wxPanelExtScrollWindowintintwxRectCP = NULL;
  virtual void ScrollWindow(int dx, int dy, wxRect const* rect = __null) override
  {
    wxPanel::ScrollWindow(dx, dy, rect);
    if (*m_wxPanelExtScrollWindowintintwxRectCP != NULL){
      return m_wxPanelExtScrollWindowintintwxRectCP(this, dx, dy, rect);
    }
  }
  wxPanelExtSearchEventTablewxEventTableRwxEventRFunc m_wxPanelExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxPanel::SearchEventTable(table, event);
    if (*m_wxPanelExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxPanelExtSearchEventTablewxEventTableRwxEventR(this, table, event);
    }
    else {
      return res;
    }
  }
  wxPanelExtSendIdleEventswxIdleEventRFunc m_wxPanelExtSendIdleEventswxIdleEventR = NULL;
  virtual bool SendIdleEvents(wxIdleEvent& event) override
  {
    bool res = wxPanel::SendIdleEvents(event);
    if (*m_wxPanelExtSendIdleEventswxIdleEventR != NULL){
      return m_wxPanelExtSendIdleEventswxIdleEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxPanelExtSendSizeEventintFunc m_wxPanelExtSendSizeEventint = NULL;
  virtual void SendSizeEvent(int flags = 0) override
  {
    wxPanel::SendSizeEvent(flags);
    if (*m_wxPanelExtSendSizeEventint != NULL){
      return m_wxPanelExtSendSizeEventint(this, flags);
    }
  }
  wxPanelExtSetAcceleratorTablewxAcceleratorTableCRFunc m_wxPanelExtSetAcceleratorTablewxAcceleratorTableCR = NULL;
  virtual void SetAcceleratorTable(wxAcceleratorTable const& accel) override
  {
    wxPanel::SetAcceleratorTable(accel);
    if (*m_wxPanelExtSetAcceleratorTablewxAcceleratorTableCR != NULL){
      return m_wxPanelExtSetAcceleratorTablewxAcceleratorTableCR(this, accel);
    }
  }
  wxPanelExtSetBackgroundColourwxColourCRFunc m_wxPanelExtSetBackgroundColourwxColourCR = NULL;
  virtual bool SetBackgroundColour(wxColour const& colour) override
  {
    bool res = wxPanel::SetBackgroundColour(colour);
    if (*m_wxPanelExtSetBackgroundColourwxColourCR != NULL){
      return m_wxPanelExtSetBackgroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetBackgroundStylewxBackgroundStyleFunc m_wxPanelExtSetBackgroundStylewxBackgroundStyle = NULL;
  virtual bool SetBackgroundStyle(wxBackgroundStyle style) override
  {
    bool res = wxPanel::SetBackgroundStyle(style);
    if (*m_wxPanelExtSetBackgroundStylewxBackgroundStyle != NULL){
      return m_wxPanelExtSetBackgroundStylewxBackgroundStyle(this, style);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetCanFocusboolFunc m_wxPanelExtSetCanFocusbool = NULL;
  virtual void SetCanFocus(bool param0) override
  {
    wxPanel::SetCanFocus(param0);
    if (*m_wxPanelExtSetCanFocusbool != NULL){
      return m_wxPanelExtSetCanFocusbool(this, param0);
    }
  }
  wxPanelExtSetConstraintSizesboolFunc m_wxPanelExtSetConstraintSizesbool = NULL;
  virtual void SetConstraintSizes(bool recurse = true) override
  {
    wxPanel::SetConstraintSizes(recurse);
    if (*m_wxPanelExtSetConstraintSizesbool != NULL){
      return m_wxPanelExtSetConstraintSizesbool(this, recurse);
    }
  }
  wxPanelExtSetCursorwxCursorCRFunc m_wxPanelExtSetCursorwxCursorCR = NULL;
  virtual bool SetCursor(wxCursor const& cursor) override
  {
    bool res = wxPanel::SetCursor(cursor);
    if (*m_wxPanelExtSetCursorwxCursorCR != NULL){
      return m_wxPanelExtSetCursorwxCursorCR(this, cursor);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetDoubleBufferedboolFunc m_wxPanelExtSetDoubleBufferedbool = NULL;
  virtual void SetDoubleBuffered(bool param0) override
  {
    wxPanel::SetDoubleBuffered(param0);
    if (*m_wxPanelExtSetDoubleBufferedbool != NULL){
      return m_wxPanelExtSetDoubleBufferedbool(this, param0);
    }
  }
  wxPanelExtSetDropTargetwxDropTargetPFunc m_wxPanelExtSetDropTargetwxDropTargetP = NULL;
  virtual void SetDropTarget(wxDropTarget* dropTarget) override
  {
    wxPanel::SetDropTarget(dropTarget);
    if (*m_wxPanelExtSetDropTargetwxDropTargetP != NULL){
      return m_wxPanelExtSetDropTargetwxDropTargetP(this, dropTarget);
    }
  }
  wxPanelExtSetExtraStylelongFunc m_wxPanelExtSetExtraStylelong = NULL;
  virtual void SetExtraStyle(long exStyle) override
  {
    wxPanel::SetExtraStyle(exStyle);
    if (*m_wxPanelExtSetExtraStylelong != NULL){
      return m_wxPanelExtSetExtraStylelong(this, exStyle);
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
  wxPanelExtSetFontwxFontCRFunc m_wxPanelExtSetFontwxFontCR = NULL;
  virtual bool SetFont(wxFont const& font) override
  {
    bool res = wxPanel::SetFont(font);
    if (*m_wxPanelExtSetFontwxFontCR != NULL){
      return m_wxPanelExtSetFontwxFontCR(this, font);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetForegroundColourwxColourCRFunc m_wxPanelExtSetForegroundColourwxColourCR = NULL;
  virtual bool SetForegroundColour(wxColour const& colour) override
  {
    bool res = wxPanel::SetForegroundColour(colour);
    if (*m_wxPanelExtSetForegroundColourwxColourCR != NULL){
      return m_wxPanelExtSetForegroundColourwxColourCR(this, colour);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetIdwxWindowIDFunc m_wxPanelExtSetIdwxWindowID = NULL;
  virtual void SetId(wxWindowID winid) override
  {
    wxPanel::SetId(winid);
    if (*m_wxPanelExtSetIdwxWindowID != NULL){
      return m_wxPanelExtSetIdwxWindowID(this, winid);
    }
  }
  wxPanelExtSetLabelwxStringCRFunc m_wxPanelExtSetLabelwxStringCR = NULL;
  virtual void SetLabel(wxString const& label) override
  {
    wxPanel::SetLabel(label);
    if (*m_wxPanelExtSetLabelwxStringCR != NULL){
      return m_wxPanelExtSetLabelwxStringCR(this, label);
    }
  }
  wxPanelExtSetLayoutDirectionwxLayoutDirectionFunc m_wxPanelExtSetLayoutDirectionwxLayoutDirection = NULL;
  virtual void SetLayoutDirection(wxLayoutDirection param0) override
  {
    wxPanel::SetLayoutDirection(param0);
    if (*m_wxPanelExtSetLayoutDirectionwxLayoutDirection != NULL){
      return m_wxPanelExtSetLayoutDirectionwxLayoutDirection(this, param0);
    }
  }
  wxPanelExtSetMaxClientSizewxSizeCRFunc m_wxPanelExtSetMaxClientSizewxSizeCR = NULL;
  virtual void SetMaxClientSize(wxSize const& size) override
  {
    wxPanel::SetMaxClientSize(size);
    if (*m_wxPanelExtSetMaxClientSizewxSizeCR != NULL){
      return m_wxPanelExtSetMaxClientSizewxSizeCR(this, size);
    }
  }
  wxPanelExtSetMaxSizewxSizeCRFunc m_wxPanelExtSetMaxSizewxSizeCR = NULL;
  virtual void SetMaxSize(wxSize const& maxSize) override
  {
    wxPanel::SetMaxSize(maxSize);
    if (*m_wxPanelExtSetMaxSizewxSizeCR != NULL){
      return m_wxPanelExtSetMaxSizewxSizeCR(this, maxSize);
    }
  }
  wxPanelExtSetMinClientSizewxSizeCRFunc m_wxPanelExtSetMinClientSizewxSizeCR = NULL;
  virtual void SetMinClientSize(wxSize const& size) override
  {
    wxPanel::SetMinClientSize(size);
    if (*m_wxPanelExtSetMinClientSizewxSizeCR != NULL){
      return m_wxPanelExtSetMinClientSizewxSizeCR(this, size);
    }
  }
  wxPanelExtSetMinSizewxSizeCRFunc m_wxPanelExtSetMinSizewxSizeCR = NULL;
  virtual void SetMinSize(wxSize const& minSize) override
  {
    wxPanel::SetMinSize(minSize);
    if (*m_wxPanelExtSetMinSizewxSizeCR != NULL){
      return m_wxPanelExtSetMinSizewxSizeCR(this, minSize);
    }
  }
  wxPanelExtSetNamewxStringCRFunc m_wxPanelExtSetNamewxStringCR = NULL;
  virtual void SetName(wxString const& name) override
  {
    wxPanel::SetName(name);
    if (*m_wxPanelExtSetNamewxStringCR != NULL){
      return m_wxPanelExtSetNamewxStringCR(this, name);
    }
  }
  wxPanelExtSetNextHandlerwxEvtHandlerPFunc m_wxPanelExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxPanel::SetNextHandler(handler);
    if (*m_wxPanelExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxPanelExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxPanelExtSetPreviousHandlerwxEvtHandlerPFunc m_wxPanelExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxPanel::SetPreviousHandler(handler);
    if (*m_wxPanelExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxPanelExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxPanelExtSetScrollPosintintboolFunc m_wxPanelExtSetScrollPosintintbool = NULL;
  virtual void SetScrollPos(int orient, int pos, bool refresh = true) override
  {
    wxPanel::SetScrollPos(orient, pos, refresh);
    if (*m_wxPanelExtSetScrollPosintintbool != NULL){
      return m_wxPanelExtSetScrollPosintintbool(this, orient, pos, refresh);
    }
  }
  wxPanelExtSetScrollbarintintintintboolFunc m_wxPanelExtSetScrollbarintintintintbool = NULL;
  virtual void SetScrollbar(int orient, int pos, int thumbvisible, int range, bool refresh = true) override
  {
    wxPanel::SetScrollbar(orient, pos, thumbvisible, range, refresh);
    if (*m_wxPanelExtSetScrollbarintintintintbool != NULL){
      return m_wxPanelExtSetScrollbarintintintintbool(this, orient, pos, thumbvisible, range, refresh);
    }
  }
  wxPanelExtSetSizeConstraintintintintintFunc m_wxPanelExtSetSizeConstraintintintintint = NULL;
  virtual void SetSizeConstraint(int x, int y, int w, int h) override
  {
    wxPanel::SetSizeConstraint(x, y, w, h);
    if (*m_wxPanelExtSetSizeConstraintintintintint != NULL){
      return m_wxPanelExtSetSizeConstraintintintintint(this, x, y, w, h);
    }
  }
  wxPanelExtSetSizeHintsintintintintintintFunc m_wxPanelExtSetSizeHintsintintintintintint = NULL;
  virtual void SetSizeHints(int minW, int minH, int maxW = wxDefaultCoord, int maxH = wxDefaultCoord, int incW = wxDefaultCoord, int incH = wxDefaultCoord) override
  {
    wxPanel::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    if (*m_wxPanelExtSetSizeHintsintintintintintint != NULL){
      return m_wxPanelExtSetSizeHintsintintintintintint(this, minW, minH, maxW, maxH, incW, incH);
    }
  }
  wxPanelExtSetThemeEnabledboolFunc m_wxPanelExtSetThemeEnabledbool = NULL;
  virtual void SetThemeEnabled(bool enableTheme) override
  {
    wxPanel::SetThemeEnabled(enableTheme);
    if (*m_wxPanelExtSetThemeEnabledbool != NULL){
      return m_wxPanelExtSetThemeEnabledbool(this, enableTheme);
    }
  }
  wxPanelExtSetTransparentwxByteFunc m_wxPanelExtSetTransparentwxByte = NULL;
  virtual bool SetTransparent(wxByte param0) override
  {
    bool res = wxPanel::SetTransparent(param0);
    if (*m_wxPanelExtSetTransparentwxByte != NULL){
      return m_wxPanelExtSetTransparentwxByte(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelExtSetValidatorwxValidatorCRFunc m_wxPanelExtSetValidatorwxValidatorCR = NULL;
  virtual void SetValidator(wxValidator const& validator) override
  {
    wxPanel::SetValidator(validator);
    if (*m_wxPanelExtSetValidatorwxValidatorCR != NULL){
      return m_wxPanelExtSetValidatorwxValidatorCR(this, validator);
    }
  }
  wxPanelExtSetWindowStyleFlaglongFunc m_wxPanelExtSetWindowStyleFlaglong = NULL;
  virtual void SetWindowStyleFlag(long style) override
  {
    wxPanel::SetWindowStyleFlag(style);
    if (*m_wxPanelExtSetWindowStyleFlaglong != NULL){
      return m_wxPanelExtSetWindowStyleFlaglong(this, style);
    }
  }
  wxPanelExtShouldInheritColoursFunc m_wxPanelExtShouldInheritColours = NULL;
  virtual bool ShouldInheritColours() const override
  {
    bool res = wxPanel::ShouldInheritColours();
    if (*m_wxPanelExtShouldInheritColours != NULL){
      return m_wxPanelExtShouldInheritColours(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtShowboolFunc m_wxPanelExtShowbool = NULL;
  virtual bool Show(bool show = true) override
  {
    bool res = wxPanel::Show(show);
    if (*m_wxPanelExtShowbool != NULL){
      return m_wxPanelExtShowbool(this, show);
    }
    else {
      return res;
    }
  }
  wxPanelExtShowWithEffectwxShowEffectunsignedintFunc m_wxPanelExtShowWithEffectwxShowEffectunsignedint = NULL;
  virtual bool ShowWithEffect(wxShowEffect param0, unsigned int param1 = 0) override
  {
    bool res = wxPanel::ShowWithEffect(param0, param1);
    if (*m_wxPanelExtShowWithEffectwxShowEffectunsignedint != NULL){
      return m_wxPanelExtShowWithEffectwxShowEffectunsignedint(this, param0, param1);
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
      return m_wxPanelExtTransferDataFromWindow(this);
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
      return m_wxPanelExtTransferDataToWindow(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtTryAfterwxEventRFunc m_wxPanelExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxPanel::TryAfter(event);
    if (*m_wxPanelExtTryAfterwxEventR != NULL){
      return m_wxPanelExtTryAfterwxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxPanelExtTryBeforewxEventRFunc m_wxPanelExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxPanel::TryBefore(event);
    if (*m_wxPanelExtTryBeforewxEventR != NULL){
      return m_wxPanelExtTryBeforewxEventR(this, event);
    }
    else {
      return res;
    }
  }
  wxPanelExtUnregisterHotKeyintFunc m_wxPanelExtUnregisterHotKeyint = NULL;
  virtual bool UnregisterHotKey(int hotkeyId) override
  {
    bool res = wxPanel::UnregisterHotKey(hotkeyId);
    if (*m_wxPanelExtUnregisterHotKeyint != NULL){
      return m_wxPanelExtUnregisterHotKeyint(this, hotkeyId);
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
  wxPanelExtUpdateWindowUIlongFunc m_wxPanelExtUpdateWindowUIlong = NULL;
  virtual void UpdateWindowUI(long flags = wxUPDATE_UI_NONE) override
  {
    wxPanel::UpdateWindowUI(flags);
    if (*m_wxPanelExtUpdateWindowUIlong != NULL){
      return m_wxPanelExtUpdateWindowUIlong(this, flags);
    }
  }
  wxPanelExtValidateFunc m_wxPanelExtValidate = NULL;
  virtual bool Validate() override
  {
    bool res = wxPanel::Validate();
    if (*m_wxPanelExtValidate != NULL){
      return m_wxPanelExtValidate(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXAdjustFontToOwnPPIwxFontRFunc m_wxPanelExtWXAdjustFontToOwnPPIwxFontR = NULL;
  virtual void WXAdjustFontToOwnPPI(wxFont& param0) const override
  {
    wxPanel::WXAdjustFontToOwnPPI(param0);
    if (*m_wxPanelExtWXAdjustFontToOwnPPIwxFontR != NULL){
      return m_wxPanelExtWXAdjustFontToOwnPPIwxFontR(this, param0);
    }
  }
  wxPanelExtWXGetTextEntryFunc m_wxPanelExtWXGetTextEntry = NULL;
  virtual wxTextEntry const* WXGetTextEntry() const override
  {
    wxTextEntry const* res = wxPanel::WXGetTextEntry();
    if (*m_wxPanelExtWXGetTextEntry != NULL){
      return m_wxPanelExtWXGetTextEntry(this);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXReservedEvtHandler1voidPFunc m_wxPanelExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxPanel::WXReservedEvtHandler1(param0);
    if (*m_wxPanelExtWXReservedEvtHandler1voidP != NULL){
      return m_wxPanelExtWXReservedEvtHandler1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXReservedEvtHandler2voidPFunc m_wxPanelExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxPanel::WXReservedEvtHandler2(param0);
    if (*m_wxPanelExtWXReservedEvtHandler2voidP != NULL){
      return m_wxPanelExtWXReservedEvtHandler2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXReservedWindow1voidPFunc m_wxPanelExtWXReservedWindow1voidP = NULL;
  virtual void* WXReservedWindow1(void* param0) override
  {
    void* res = wxPanel::WXReservedWindow1(param0);
    if (*m_wxPanelExtWXReservedWindow1voidP != NULL){
      return m_wxPanelExtWXReservedWindow1voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXReservedWindow2voidPFunc m_wxPanelExtWXReservedWindow2voidP = NULL;
  virtual void* WXReservedWindow2(void* param0) override
  {
    void* res = wxPanel::WXReservedWindow2(param0);
    if (*m_wxPanelExtWXReservedWindow2voidP != NULL){
      return m_wxPanelExtWXReservedWindow2voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXReservedWindow3voidPFunc m_wxPanelExtWXReservedWindow3voidP = NULL;
  virtual void* WXReservedWindow3(void* param0) override
  {
    void* res = wxPanel::WXReservedWindow3(param0);
    if (*m_wxPanelExtWXReservedWindow3voidP != NULL){
      return m_wxPanelExtWXReservedWindow3voidP(this, param0);
    }
    else {
      return res;
    }
  }
  wxPanelExtWXSetInitialFittingClientSizeintwxSizerPFunc m_wxPanelExtWXSetInitialFittingClientSizeintwxSizerP = NULL;
  virtual void WXSetInitialFittingClientSize(int flags, wxSizer* sizer = __null) override
  {
    wxPanel::WXSetInitialFittingClientSize(flags, sizer);
    if (*m_wxPanelExtWXSetInitialFittingClientSizeintwxSizerP != NULL){
      return m_wxPanelExtWXSetInitialFittingClientSizeintwxSizerP(this, flags, sizer);
    }
  }
  wxPanelExtWarpPointerintintFunc m_wxPanelExtWarpPointerintint = NULL;
  virtual void WarpPointer(int x, int y) override
  {
    wxPanel::WarpPointer(x, y);
    if (*m_wxPanelExtWarpPointerintint != NULL){
      return m_wxPanelExtWarpPointerintint(this, x, y);
    }
  }
  wxPanelExtWindowToClientSizewxSizeCRFunc m_wxPanelExtWindowToClientSizewxSizeCR = NULL;
  virtual wxSize WindowToClientSize(wxSize const& size) const override
  {
    wxSize res = wxPanel::WindowToClientSize(size);
    if (*m_wxPanelExtWindowToClientSizewxSizeCR != NULL){
      return m_wxPanelExtWindowToClientSizewxSizeCR(this, size);
    }
    else {
      return res;
    }
  }
  wxPanelExt(wxPanelExtAcceptsFocusFunc a_AcceptsFocus, wxPanelExtAcceptsFocusFromKeyboardFunc a_AcceptsFocusFromKeyboard, wxPanelExtAcceptsFocusRecursivelyFunc a_AcceptsFocusRecursively, wxPanelExtAddChildwxWindowBasePFunc a_AddChildwxWindowBaseP, wxPanelExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxPanelExtAdjustForLayoutDirectionwxCoordwxCoordwxCoordFunc a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord, wxPanelExtAdjustForParentClientOriginintRintRintFunc a_AdjustForParentClientOriginintRintRint, wxPanelExtAlwaysShowScrollbarsboolboolFunc a_AlwaysShowScrollbarsboolbool, wxPanelExtAssociateHandleWXWidgetFunc a_AssociateHandleWXWidget, wxPanelExtBeginRepositioningChildrenFunc a_BeginRepositioningChildren, wxPanelExtCanApplyThemeBorderFunc a_CanApplyThemeBorder, wxPanelExtCanBeFocusedFunc a_CanBeFocused, wxPanelExtCanBeOutsideClientAreaFunc a_CanBeOutsideClientArea, wxPanelExtCanScrollintFunc a_CanScrollint, wxPanelExtCanSetTransparentFunc a_CanSetTransparent, wxPanelExtClearBackgroundFunc a_ClearBackground, wxPanelExtClientToWindowSizewxSizeCRFunc a_ClientToWindowSizewxSizeCR, wxPanelExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxPanelExtCreateRefDataFunc a_CreateRefData, wxPanelExtDestroyFunc a_Destroy, wxPanelExtDissociateHandleFunc a_DissociateHandle, wxPanelExtDoCaptureMouseFunc a_DoCaptureMouse, wxPanelExtDoCentreintFunc a_DoCentreint, wxPanelExtDoClientToScreenintPintPFunc a_DoClientToScreenintPintP, wxPanelExtDoEnableboolFunc a_DoEnablebool, wxPanelExtDoFreezeFunc a_DoFreeze, wxPanelExtDoGetBestClientHeightintFunc a_DoGetBestClientHeightint, wxPanelExtDoGetBestClientSizeFunc a_DoGetBestClientSize, wxPanelExtDoGetBestClientWidthintFunc a_DoGetBestClientWidthint, wxPanelExtDoGetBestSizeFunc a_DoGetBestSize, wxPanelExtDoGetClientDataFunc a_DoGetClientData, wxPanelExtDoGetClientObjectFunc a_DoGetClientObject, wxPanelExtDoGetClientSizeintPintPFunc a_DoGetClientSizeintPintP, wxPanelExtDoGetPositionintPintPFunc a_DoGetPositionintPintP, wxPanelExtDoGetScreenPositionintPintPFunc a_DoGetScreenPositionintPintP, wxPanelExtDoGetSizeintPintPFunc a_DoGetSizeintPintP, wxPanelExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCPFunc a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP, wxPanelExtDoGetVirtualSizeFunc a_DoGetVirtualSize, wxPanelExtDoHitTestwxCoordwxCoordFunc a_DoHitTestwxCoordwxCoord, wxPanelExtDoIsExposedintintintintFunc a_DoIsExposedintintintint, wxPanelExtDoIsExposedintintFunc a_DoIsExposedintint, wxPanelExtDoMoveWindowintintintintFunc a_DoMoveWindowintintintint, wxPanelExtDoNavigateInintFunc a_DoNavigateInint, wxPanelExtDoPhaseintFunc a_DoPhaseint, wxPanelExtDoPopupMenuwxMenuPintintFunc a_DoPopupMenuwxMenuPintint, wxPanelExtDoReleaseMouseFunc a_DoReleaseMouse, wxPanelExtDoScreenToClientintPintPFunc a_DoScreenToClientintPintP, wxPanelExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxPanelExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxPanelExtDoSetClientSizeintintFunc a_DoSetClientSizeintint, wxPanelExtDoSetSizeintintintintintFunc a_DoSetSizeintintintintint, wxPanelExtDoSetSizeHintsintintintintintintFunc a_DoSetSizeHintsintintintintintint, wxPanelExtDoSetToolTipwxToolTipPFunc a_DoSetToolTipwxToolTipP, wxPanelExtDoSetToolTipTextwxStringCRFunc a_DoSetToolTipTextwxStringCR, wxPanelExtDoSetVirtualSizeintintFunc a_DoSetVirtualSizeintint, wxPanelExtDoSetWindowVariantwxWindowVariantFunc a_DoSetWindowVariantwxWindowVariant, wxPanelExtDoThawFunc a_DoThaw, wxPanelExtDoUpdateWindowUIwxUpdateUIEventRFunc a_DoUpdateWindowUIwxUpdateUIEventR, wxPanelExtDragAcceptFilesboolFunc a_DragAcceptFilesbool, wxPanelExtEnableboolFunc a_Enablebool, wxPanelExtEnableTouchEventsintFunc a_EnableTouchEventsint, wxPanelExtEnableVisibleFocusboolFunc a_EnableVisibleFocusbool, wxPanelExtEndRepositioningChildrenFunc a_EndRepositioningChildren, wxPanelExtFitFunc a_Fit, wxPanelExtFitInsideFunc a_FitInside, wxPanelExtGetBestVirtualSizeFunc a_GetBestVirtualSize, wxPanelExtGetCharHeightFunc a_GetCharHeight, wxPanelExtGetCharWidthFunc a_GetCharWidth, wxPanelExtGetClassInfoFunc a_GetClassInfo, wxPanelExtGetClientAreaOriginFunc a_GetClientAreaOrigin, wxPanelExtGetClientSizeConstraintintPintPFunc a_GetClientSizeConstraintintPintP, wxPanelExtGetContentScaleFactorFunc a_GetContentScaleFactor, wxPanelExtGetDPIFunc a_GetDPI, wxPanelExtGetDPIScaleFactorFunc a_GetDPIScaleFactor, wxPanelExtGetDefaultAttributesFunc a_GetDefaultAttributes, wxPanelExtGetDefaultBorderFunc a_GetDefaultBorder, wxPanelExtGetDefaultBorderForControlFunc a_GetDefaultBorderForControl, wxPanelExtGetDropTargetFunc a_GetDropTarget, wxPanelExtGetEffectiveMinSizeFunc a_GetEffectiveMinSize, wxPanelExtGetEventHashTableFunc a_GetEventHashTable, wxPanelExtGetEventTableFunc a_GetEventTable, wxPanelExtGetHandleFunc a_GetHandle, wxPanelExtGetHelpTextAtPointwxPointCRwxHelpEventNOriginFunc a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin, wxPanelExtGetLabelFunc a_GetLabel, wxPanelExtGetLayoutDirectionFunc a_GetLayoutDirection, wxPanelExtGetMainWindowOfCompositeControlFunc a_GetMainWindowOfCompositeControl, wxPanelExtGetMaxClientSizeFunc a_GetMaxClientSize, wxPanelExtGetMaxSizeFunc a_GetMaxSize, wxPanelExtGetMinClientSizeFunc a_GetMinClientSize, wxPanelExtGetMinSizeFunc a_GetMinSize, wxPanelExtGetNameFunc a_GetName, wxPanelExtGetPositionConstraintintPintPFunc a_GetPositionConstraintintPintP, wxPanelExtGetScrollPosintFunc a_GetScrollPosint, wxPanelExtGetScrollRangeintFunc a_GetScrollRangeint, wxPanelExtGetScrollThumbintFunc a_GetScrollThumbint, wxPanelExtGetSizeConstraintintPintPFunc a_GetSizeConstraintintPintP, wxPanelExtGetThemeEnabledFunc a_GetThemeEnabled, wxPanelExtGetValidatorFunc a_GetValidator, wxPanelExtGetWindowBorderSizeFunc a_GetWindowBorderSize, wxPanelExtGetWindowStyleFlagFunc a_GetWindowStyleFlag, wxPanelExtHasCaptureFunc a_HasCapture, wxPanelExtHasFocusFunc a_HasFocus, wxPanelExtHasMultiplePagesFunc a_HasMultiplePages, wxPanelExtHasTransparentBackgroundFunc a_HasTransparentBackground, wxPanelExtHideWithEffectwxShowEffectunsignedintFunc a_HideWithEffectwxShowEffectunsignedint, wxPanelExtInformFirstDirectionintintintFunc a_InformFirstDirectionintintint, wxPanelExtInheritAttributesFunc a_InheritAttributes, wxPanelExtInitDialogFunc a_InitDialog, wxPanelExtIsClientAreaChildwxWindowCPFunc a_IsClientAreaChildwxWindowCP, wxPanelExtIsDoubleBufferedFunc a_IsDoubleBuffered, wxPanelExtIsRetainedFunc a_IsRetained, wxPanelExtIsScrollbarAlwaysShownintFunc a_IsScrollbarAlwaysShownint, wxPanelExtIsShownFunc a_IsShown, wxPanelExtIsShownOnScreenFunc a_IsShownOnScreen, wxPanelExtIsThisEnabledFunc a_IsThisEnabled, wxPanelExtIsTopLevelFunc a_IsTopLevel, wxPanelExtIsTopNavigationDomainwxWindowBaseNNavigationKindFunc a_IsTopNavigationDomainwxWindowBaseNNavigationKind, wxPanelExtIsTransparentBackgroundSupportedwxStringPFunc a_IsTransparentBackgroundSupportedwxStringP, wxPanelExtLayoutFunc a_Layout, wxPanelExtLayoutPhase1intPFunc a_LayoutPhase1intP, wxPanelExtLayoutPhase2intPFunc a_LayoutPhase2intP, wxPanelExtLowerFunc a_Lower, wxPanelExtMoveConstraintintintFunc a_MoveConstraintintint, wxPanelExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxPanelExtOnInternalIdleFunc a_OnInternalIdle, wxPanelExtPrepareDCwxDCRFunc a_PrepareDCwxDCR, wxPanelExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxPanelExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxPanelExtRaiseFunc a_Raise, wxPanelExtRefreshboolwxRectCPFunc a_RefreshboolwxRectCP, wxPanelExtRegisterHotKeyintintintFunc a_RegisterHotKeyintintint, wxPanelExtRemoveChildwxWindowBasePFunc a_RemoveChildwxWindowBaseP, wxPanelExtReparentwxWindowBasePFunc a_ReparentwxWindowBaseP, wxPanelExtScrollLinesintFunc a_ScrollLinesint, wxPanelExtScrollPagesintFunc a_ScrollPagesint, wxPanelExtScrollWindowintintwxRectCPFunc a_ScrollWindowintintwxRectCP, wxPanelExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxPanelExtSendIdleEventswxIdleEventRFunc a_SendIdleEventswxIdleEventR, wxPanelExtSendSizeEventintFunc a_SendSizeEventint, wxPanelExtSetAcceleratorTablewxAcceleratorTableCRFunc a_SetAcceleratorTablewxAcceleratorTableCR, wxPanelExtSetBackgroundColourwxColourCRFunc a_SetBackgroundColourwxColourCR, wxPanelExtSetBackgroundStylewxBackgroundStyleFunc a_SetBackgroundStylewxBackgroundStyle, wxPanelExtSetCanFocusboolFunc a_SetCanFocusbool, wxPanelExtSetConstraintSizesboolFunc a_SetConstraintSizesbool, wxPanelExtSetCursorwxCursorCRFunc a_SetCursorwxCursorCR, wxPanelExtSetDoubleBufferedboolFunc a_SetDoubleBufferedbool, wxPanelExtSetDropTargetwxDropTargetPFunc a_SetDropTargetwxDropTargetP, wxPanelExtSetExtraStylelongFunc a_SetExtraStylelong, wxPanelExtSetFocusFunc a_SetFocus, wxPanelExtSetFocusFromKbdFunc a_SetFocusFromKbd, wxPanelExtSetFontwxFontCRFunc a_SetFontwxFontCR, wxPanelExtSetForegroundColourwxColourCRFunc a_SetForegroundColourwxColourCR, wxPanelExtSetIdwxWindowIDFunc a_SetIdwxWindowID, wxPanelExtSetLabelwxStringCRFunc a_SetLabelwxStringCR, wxPanelExtSetLayoutDirectionwxLayoutDirectionFunc a_SetLayoutDirectionwxLayoutDirection, wxPanelExtSetMaxClientSizewxSizeCRFunc a_SetMaxClientSizewxSizeCR, wxPanelExtSetMaxSizewxSizeCRFunc a_SetMaxSizewxSizeCR, wxPanelExtSetMinClientSizewxSizeCRFunc a_SetMinClientSizewxSizeCR, wxPanelExtSetMinSizewxSizeCRFunc a_SetMinSizewxSizeCR, wxPanelExtSetNamewxStringCRFunc a_SetNamewxStringCR, wxPanelExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxPanelExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxPanelExtSetScrollPosintintboolFunc a_SetScrollPosintintbool, wxPanelExtSetScrollbarintintintintboolFunc a_SetScrollbarintintintintbool, wxPanelExtSetSizeConstraintintintintintFunc a_SetSizeConstraintintintintint, wxPanelExtSetSizeHintsintintintintintintFunc a_SetSizeHintsintintintintintint, wxPanelExtSetThemeEnabledboolFunc a_SetThemeEnabledbool, wxPanelExtSetTransparentwxByteFunc a_SetTransparentwxByte, wxPanelExtSetValidatorwxValidatorCRFunc a_SetValidatorwxValidatorCR, wxPanelExtSetWindowStyleFlaglongFunc a_SetWindowStyleFlaglong, wxPanelExtShouldInheritColoursFunc a_ShouldInheritColours, wxPanelExtShowboolFunc a_Showbool, wxPanelExtShowWithEffectwxShowEffectunsignedintFunc a_ShowWithEffectwxShowEffectunsignedint, wxPanelExtTransferDataFromWindowFunc a_TransferDataFromWindow, wxPanelExtTransferDataToWindowFunc a_TransferDataToWindow, wxPanelExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxPanelExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxPanelExtUnregisterHotKeyintFunc a_UnregisterHotKeyint, wxPanelExtUpdateFunc a_Update, wxPanelExtUpdateWindowUIlongFunc a_UpdateWindowUIlong, wxPanelExtValidateFunc a_Validate, wxPanelExtWXAdjustFontToOwnPPIwxFontRFunc a_WXAdjustFontToOwnPPIwxFontR, wxPanelExtWXGetTextEntryFunc a_WXGetTextEntry, wxPanelExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxPanelExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxPanelExtWXReservedWindow1voidPFunc a_WXReservedWindow1voidP, wxPanelExtWXReservedWindow2voidPFunc a_WXReservedWindow2voidP, wxPanelExtWXReservedWindow3voidPFunc a_WXReservedWindow3voidP, wxPanelExtWXSetInitialFittingClientSizeintwxSizerPFunc a_WXSetInitialFittingClientSizeintwxSizerP, wxPanelExtWarpPointerintintFunc a_WarpPointerintint, wxPanelExtWindowToClientSizewxSizeCRFunc a_WindowToClientSizewxSizeCR): wxPanel() {
    m_wxPanelExtAcceptsFocus = a_AcceptsFocus;
    m_wxPanelExtAcceptsFocusFromKeyboard = a_AcceptsFocusFromKeyboard;
    m_wxPanelExtAcceptsFocusRecursively = a_AcceptsFocusRecursively;
    m_wxPanelExtAddChildwxWindowBaseP = a_AddChildwxWindowBaseP;
    m_wxPanelExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxPanelExtAdjustForLayoutDirectionwxCoordwxCoordwxCoord = a_AdjustForLayoutDirectionwxCoordwxCoordwxCoord;
    m_wxPanelExtAdjustForParentClientOriginintRintRint = a_AdjustForParentClientOriginintRintRint;
    m_wxPanelExtAlwaysShowScrollbarsboolbool = a_AlwaysShowScrollbarsboolbool;
    m_wxPanelExtAssociateHandleWXWidget = a_AssociateHandleWXWidget;
    m_wxPanelExtBeginRepositioningChildren = a_BeginRepositioningChildren;
    m_wxPanelExtCanApplyThemeBorder = a_CanApplyThemeBorder;
    m_wxPanelExtCanBeFocused = a_CanBeFocused;
    m_wxPanelExtCanBeOutsideClientArea = a_CanBeOutsideClientArea;
    m_wxPanelExtCanScrollint = a_CanScrollint;
    m_wxPanelExtCanSetTransparent = a_CanSetTransparent;
    m_wxPanelExtClearBackground = a_ClearBackground;
    m_wxPanelExtClientToWindowSizewxSizeCR = a_ClientToWindowSizewxSizeCR;
    m_wxPanelExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxPanelExtCreateRefData = a_CreateRefData;
    m_wxPanelExtDestroy = a_Destroy;
    m_wxPanelExtDissociateHandle = a_DissociateHandle;
    m_wxPanelExtDoCaptureMouse = a_DoCaptureMouse;
    m_wxPanelExtDoCentreint = a_DoCentreint;
    m_wxPanelExtDoClientToScreenintPintP = a_DoClientToScreenintPintP;
    m_wxPanelExtDoEnablebool = a_DoEnablebool;
    m_wxPanelExtDoFreeze = a_DoFreeze;
    m_wxPanelExtDoGetBestClientHeightint = a_DoGetBestClientHeightint;
    m_wxPanelExtDoGetBestClientSize = a_DoGetBestClientSize;
    m_wxPanelExtDoGetBestClientWidthint = a_DoGetBestClientWidthint;
    m_wxPanelExtDoGetBestSize = a_DoGetBestSize;
    m_wxPanelExtDoGetClientData = a_DoGetClientData;
    m_wxPanelExtDoGetClientObject = a_DoGetClientObject;
    m_wxPanelExtDoGetClientSizeintPintP = a_DoGetClientSizeintPintP;
    m_wxPanelExtDoGetPositionintPintP = a_DoGetPositionintPintP;
    m_wxPanelExtDoGetScreenPositionintPintP = a_DoGetScreenPositionintPintP;
    m_wxPanelExtDoGetSizeintPintP = a_DoGetSizeintPintP;
    m_wxPanelExtDoGetTextExtentwxStringCRintPintPintPintPwxFontCP = a_DoGetTextExtentwxStringCRintPintPintPintPwxFontCP;
    m_wxPanelExtDoGetVirtualSize = a_DoGetVirtualSize;
    m_wxPanelExtDoHitTestwxCoordwxCoord = a_DoHitTestwxCoordwxCoord;
    m_wxPanelExtDoIsExposedintintintint = a_DoIsExposedintintintint;
    m_wxPanelExtDoIsExposedintint = a_DoIsExposedintint;
    m_wxPanelExtDoMoveWindowintintintint = a_DoMoveWindowintintintint;
    m_wxPanelExtDoNavigateInint = a_DoNavigateInint;
    m_wxPanelExtDoPhaseint = a_DoPhaseint;
    m_wxPanelExtDoPopupMenuwxMenuPintint = a_DoPopupMenuwxMenuPintint;
    m_wxPanelExtDoReleaseMouse = a_DoReleaseMouse;
    m_wxPanelExtDoScreenToClientintPintP = a_DoScreenToClientintPintP;
    m_wxPanelExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxPanelExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxPanelExtDoSetClientSizeintint = a_DoSetClientSizeintint;
    m_wxPanelExtDoSetSizeintintintintint = a_DoSetSizeintintintintint;
    m_wxPanelExtDoSetSizeHintsintintintintintint = a_DoSetSizeHintsintintintintintint;
    m_wxPanelExtDoSetToolTipwxToolTipP = a_DoSetToolTipwxToolTipP;
    m_wxPanelExtDoSetToolTipTextwxStringCR = a_DoSetToolTipTextwxStringCR;
    m_wxPanelExtDoSetVirtualSizeintint = a_DoSetVirtualSizeintint;
    m_wxPanelExtDoSetWindowVariantwxWindowVariant = a_DoSetWindowVariantwxWindowVariant;
    m_wxPanelExtDoThaw = a_DoThaw;
    m_wxPanelExtDoUpdateWindowUIwxUpdateUIEventR = a_DoUpdateWindowUIwxUpdateUIEventR;
    m_wxPanelExtDragAcceptFilesbool = a_DragAcceptFilesbool;
    m_wxPanelExtEnablebool = a_Enablebool;
    m_wxPanelExtEnableTouchEventsint = a_EnableTouchEventsint;
    m_wxPanelExtEnableVisibleFocusbool = a_EnableVisibleFocusbool;
    m_wxPanelExtEndRepositioningChildren = a_EndRepositioningChildren;
    m_wxPanelExtFit = a_Fit;
    m_wxPanelExtFitInside = a_FitInside;
    m_wxPanelExtGetBestVirtualSize = a_GetBestVirtualSize;
    m_wxPanelExtGetCharHeight = a_GetCharHeight;
    m_wxPanelExtGetCharWidth = a_GetCharWidth;
    m_wxPanelExtGetClassInfo = a_GetClassInfo;
    m_wxPanelExtGetClientAreaOrigin = a_GetClientAreaOrigin;
    m_wxPanelExtGetClientSizeConstraintintPintP = a_GetClientSizeConstraintintPintP;
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
    m_wxPanelExtGetHelpTextAtPointwxPointCRwxHelpEventNOrigin = a_GetHelpTextAtPointwxPointCRwxHelpEventNOrigin;
    m_wxPanelExtGetLabel = a_GetLabel;
    m_wxPanelExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxPanelExtGetMainWindowOfCompositeControl = a_GetMainWindowOfCompositeControl;
    m_wxPanelExtGetMaxClientSize = a_GetMaxClientSize;
    m_wxPanelExtGetMaxSize = a_GetMaxSize;
    m_wxPanelExtGetMinClientSize = a_GetMinClientSize;
    m_wxPanelExtGetMinSize = a_GetMinSize;
    m_wxPanelExtGetName = a_GetName;
    m_wxPanelExtGetPositionConstraintintPintP = a_GetPositionConstraintintPintP;
    m_wxPanelExtGetScrollPosint = a_GetScrollPosint;
    m_wxPanelExtGetScrollRangeint = a_GetScrollRangeint;
    m_wxPanelExtGetScrollThumbint = a_GetScrollThumbint;
    m_wxPanelExtGetSizeConstraintintPintP = a_GetSizeConstraintintPintP;
    m_wxPanelExtGetThemeEnabled = a_GetThemeEnabled;
    m_wxPanelExtGetValidator = a_GetValidator;
    m_wxPanelExtGetWindowBorderSize = a_GetWindowBorderSize;
    m_wxPanelExtGetWindowStyleFlag = a_GetWindowStyleFlag;
    m_wxPanelExtHasCapture = a_HasCapture;
    m_wxPanelExtHasFocus = a_HasFocus;
    m_wxPanelExtHasMultiplePages = a_HasMultiplePages;
    m_wxPanelExtHasTransparentBackground = a_HasTransparentBackground;
    m_wxPanelExtHideWithEffectwxShowEffectunsignedint = a_HideWithEffectwxShowEffectunsignedint;
    m_wxPanelExtInformFirstDirectionintintint = a_InformFirstDirectionintintint;
    m_wxPanelExtInheritAttributes = a_InheritAttributes;
    m_wxPanelExtInitDialog = a_InitDialog;
    m_wxPanelExtIsClientAreaChildwxWindowCP = a_IsClientAreaChildwxWindowCP;
    m_wxPanelExtIsDoubleBuffered = a_IsDoubleBuffered;
    m_wxPanelExtIsRetained = a_IsRetained;
    m_wxPanelExtIsScrollbarAlwaysShownint = a_IsScrollbarAlwaysShownint;
    m_wxPanelExtIsShown = a_IsShown;
    m_wxPanelExtIsShownOnScreen = a_IsShownOnScreen;
    m_wxPanelExtIsThisEnabled = a_IsThisEnabled;
    m_wxPanelExtIsTopLevel = a_IsTopLevel;
    m_wxPanelExtIsTopNavigationDomainwxWindowBaseNNavigationKind = a_IsTopNavigationDomainwxWindowBaseNNavigationKind;
    m_wxPanelExtIsTransparentBackgroundSupportedwxStringP = a_IsTransparentBackgroundSupportedwxStringP;
    m_wxPanelExtLayout = a_Layout;
    m_wxPanelExtLayoutPhase1intP = a_LayoutPhase1intP;
    m_wxPanelExtLayoutPhase2intP = a_LayoutPhase2intP;
    m_wxPanelExtLower = a_Lower;
    m_wxPanelExtMoveConstraintintint = a_MoveConstraintintint;
    m_wxPanelExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxPanelExtOnInternalIdle = a_OnInternalIdle;
    m_wxPanelExtPrepareDCwxDCR = a_PrepareDCwxDCR;
    m_wxPanelExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxPanelExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxPanelExtRaise = a_Raise;
    m_wxPanelExtRefreshboolwxRectCP = a_RefreshboolwxRectCP;
    m_wxPanelExtRegisterHotKeyintintint = a_RegisterHotKeyintintint;
    m_wxPanelExtRemoveChildwxWindowBaseP = a_RemoveChildwxWindowBaseP;
    m_wxPanelExtReparentwxWindowBaseP = a_ReparentwxWindowBaseP;
    m_wxPanelExtScrollLinesint = a_ScrollLinesint;
    m_wxPanelExtScrollPagesint = a_ScrollPagesint;
    m_wxPanelExtScrollWindowintintwxRectCP = a_ScrollWindowintintwxRectCP;
    m_wxPanelExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxPanelExtSendIdleEventswxIdleEventR = a_SendIdleEventswxIdleEventR;
    m_wxPanelExtSendSizeEventint = a_SendSizeEventint;
    m_wxPanelExtSetAcceleratorTablewxAcceleratorTableCR = a_SetAcceleratorTablewxAcceleratorTableCR;
    m_wxPanelExtSetBackgroundColourwxColourCR = a_SetBackgroundColourwxColourCR;
    m_wxPanelExtSetBackgroundStylewxBackgroundStyle = a_SetBackgroundStylewxBackgroundStyle;
    m_wxPanelExtSetCanFocusbool = a_SetCanFocusbool;
    m_wxPanelExtSetConstraintSizesbool = a_SetConstraintSizesbool;
    m_wxPanelExtSetCursorwxCursorCR = a_SetCursorwxCursorCR;
    m_wxPanelExtSetDoubleBufferedbool = a_SetDoubleBufferedbool;
    m_wxPanelExtSetDropTargetwxDropTargetP = a_SetDropTargetwxDropTargetP;
    m_wxPanelExtSetExtraStylelong = a_SetExtraStylelong;
    m_wxPanelExtSetFocus = a_SetFocus;
    m_wxPanelExtSetFocusFromKbd = a_SetFocusFromKbd;
    m_wxPanelExtSetFontwxFontCR = a_SetFontwxFontCR;
    m_wxPanelExtSetForegroundColourwxColourCR = a_SetForegroundColourwxColourCR;
    m_wxPanelExtSetIdwxWindowID = a_SetIdwxWindowID;
    m_wxPanelExtSetLabelwxStringCR = a_SetLabelwxStringCR;
    m_wxPanelExtSetLayoutDirectionwxLayoutDirection = a_SetLayoutDirectionwxLayoutDirection;
    m_wxPanelExtSetMaxClientSizewxSizeCR = a_SetMaxClientSizewxSizeCR;
    m_wxPanelExtSetMaxSizewxSizeCR = a_SetMaxSizewxSizeCR;
    m_wxPanelExtSetMinClientSizewxSizeCR = a_SetMinClientSizewxSizeCR;
    m_wxPanelExtSetMinSizewxSizeCR = a_SetMinSizewxSizeCR;
    m_wxPanelExtSetNamewxStringCR = a_SetNamewxStringCR;
    m_wxPanelExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxPanelExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxPanelExtSetScrollPosintintbool = a_SetScrollPosintintbool;
    m_wxPanelExtSetScrollbarintintintintbool = a_SetScrollbarintintintintbool;
    m_wxPanelExtSetSizeConstraintintintintint = a_SetSizeConstraintintintintint;
    m_wxPanelExtSetSizeHintsintintintintintint = a_SetSizeHintsintintintintintint;
    m_wxPanelExtSetThemeEnabledbool = a_SetThemeEnabledbool;
    m_wxPanelExtSetTransparentwxByte = a_SetTransparentwxByte;
    m_wxPanelExtSetValidatorwxValidatorCR = a_SetValidatorwxValidatorCR;
    m_wxPanelExtSetWindowStyleFlaglong = a_SetWindowStyleFlaglong;
    m_wxPanelExtShouldInheritColours = a_ShouldInheritColours;
    m_wxPanelExtShowbool = a_Showbool;
    m_wxPanelExtShowWithEffectwxShowEffectunsignedint = a_ShowWithEffectwxShowEffectunsignedint;
    m_wxPanelExtTransferDataFromWindow = a_TransferDataFromWindow;
    m_wxPanelExtTransferDataToWindow = a_TransferDataToWindow;
    m_wxPanelExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxPanelExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxPanelExtUnregisterHotKeyint = a_UnregisterHotKeyint;
    m_wxPanelExtUpdate = a_Update;
    m_wxPanelExtUpdateWindowUIlong = a_UpdateWindowUIlong;
    m_wxPanelExtValidate = a_Validate;
    m_wxPanelExtWXAdjustFontToOwnPPIwxFontR = a_WXAdjustFontToOwnPPIwxFontR;
    m_wxPanelExtWXGetTextEntry = a_WXGetTextEntry;
    m_wxPanelExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxPanelExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxPanelExtWXReservedWindow1voidP = a_WXReservedWindow1voidP;
    m_wxPanelExtWXReservedWindow2voidP = a_WXReservedWindow2voidP;
    m_wxPanelExtWXReservedWindow3voidP = a_WXReservedWindow3voidP;
    m_wxPanelExtWXSetInitialFittingClientSizeintwxSizerP = a_WXSetInitialFittingClientSizeintwxSizerP;
    m_wxPanelExtWarpPointerintint = a_WarpPointerintint;
    m_wxPanelExtWindowToClientSizewxSizeCR = a_WindowToClientSizewxSizeCR;
  }
};



#endif
