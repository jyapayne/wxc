#ifndef _WX_APP_H_EXT_
#define _WX_APP_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxAppConsoleBaseExt;
typedef void (*wxAppConsoleBaseExtAddPendingEvent__wxEventCRFunc)(const wxAppConsoleBaseExt* self, wxEvent const& event);
typedef void (*wxAppConsoleBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event);
typedef bool (*wxAppConsoleBaseExtCallOnInitFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef void (*wxAppConsoleBaseExtCleanUpFunc)(const wxAppConsoleBaseExt* self);
typedef wxObjectRefData* (*wxAppConsoleBaseExtCloneRefData__wxObjectRefDataCPFunc)(const wxAppConsoleBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxAppConsoleBaseExtCreateRefDataFunc)(const wxAppConsoleBaseExt* self, wxObjectRefData* res);
typedef wxAppTraits* (*wxAppConsoleBaseExtCreateTraitsFunc)(const wxAppConsoleBaseExt* self, wxAppTraits* res);
typedef bool (*wxAppConsoleBaseExtDispatchFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef void* (*wxAppConsoleBaseExtDoGetClientDataFunc)(const wxAppConsoleBaseExt* self, void* res);
typedef wxClientData* (*wxAppConsoleBaseExtDoGetClientObjectFunc)(const wxAppConsoleBaseExt* self, wxClientData* res);
typedef void (*wxAppConsoleBaseExtDoSetClientData__voidPFunc)(const wxAppConsoleBaseExt* self, void* data);
typedef void (*wxAppConsoleBaseExtDoSetClientObject__wxClientDataPFunc)(const wxAppConsoleBaseExt* self, wxClientData* data);
typedef void (*wxAppConsoleBaseExtExitFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtExitMainLoopFunc)(const wxAppConsoleBaseExt* self);
typedef int (*wxAppConsoleBaseExtFilterEvent__wxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvent& event);
typedef wxClassInfo* (*wxAppConsoleBaseExtGetClassInfoFunc)(const wxAppConsoleBaseExt* self, wxClassInfo* res);
typedef wxEventHashTable& (*wxAppConsoleBaseExtGetEventHashTableFunc)(const wxAppConsoleBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxAppConsoleBaseExtGetEventTableFunc)(const wxAppConsoleBaseExt* self, wxEventTable const* res);
typedef void (*wxAppConsoleBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvtHandler* handler, wxEventFunction func, wxEvent& event);
typedef bool (*wxAppConsoleBaseExtInitialize__intRwxCharPPFunc)(const wxAppConsoleBaseExt* self, int& argc, wxChar** argv, bool res);
typedef bool (*wxAppConsoleBaseExtIsGUIFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef int (*wxAppConsoleBaseExtMainLoopFunc)(const wxAppConsoleBaseExt* self, int res);
typedef void (*wxAppConsoleBaseExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc)(const wxAppConsoleBaseExt* self, wxChar const* file, int line, wxChar const* cond, wxChar const* msg);
typedef void (*wxAppConsoleBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc)(const wxAppConsoleBaseExt* self, wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg);
typedef bool (*wxAppConsoleBaseExtOnCmdLineError__wxCmdLineParserRFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleBaseExtOnCmdLineHelp__wxCmdLineParserRFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleBaseExtOnCmdLineParsed__wxCmdLineParserRFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxAppConsoleBaseExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxAppConsoleBaseExtOnEventLoopEnter__wxEventLoopBasePFunc)(const wxAppConsoleBaseExt* self, wxEventLoopBase* loop);
typedef void (*wxAppConsoleBaseExtOnEventLoopExit__wxEventLoopBasePFunc)(const wxAppConsoleBaseExt* self, wxEventLoopBase* loop);
typedef bool (*wxAppConsoleBaseExtOnExceptionInMainLoopFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef int (*wxAppConsoleBaseExtOnExitFunc)(const wxAppConsoleBaseExt* self, int res);
typedef void (*wxAppConsoleBaseExtOnFatalExceptionFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtOnInitFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef void (*wxAppConsoleBaseExtOnInitCmdLine__wxCmdLineParserRFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser);
typedef void (*wxAppConsoleBaseExtOnLaunchedFunc)(const wxAppConsoleBaseExt* self);
typedef int (*wxAppConsoleBaseExtOnRunFunc)(const wxAppConsoleBaseExt* self, int res);
typedef void (*wxAppConsoleBaseExtOnUnhandledExceptionFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtPendingFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef bool (*wxAppConsoleBaseExtProcessEvent__wxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleBaseExtProcessIdleFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef void (*wxAppConsoleBaseExtProcessPendingEventsFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtQueueEvent__wxEventPFunc)(const wxAppConsoleBaseExt* self, wxEvent* event);
typedef void (*wxAppConsoleBaseExtRethrowStoredExceptionFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxAppConsoleBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxAppConsoleBaseExtSetCLocaleFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtSetNextHandler__wxEvtHandlerPFunc)(const wxAppConsoleBaseExt* self, wxEvtHandler* handler);
typedef void (*wxAppConsoleBaseExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxAppConsoleBaseExt* self, wxEvtHandler* handler);
typedef bool (*wxAppConsoleBaseExtStoreCurrentExceptionFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef bool (*wxAppConsoleBaseExtTryAfter__wxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleBaseExtTryBefore__wxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleBaseExtUsesEventLoopFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef void* (*wxAppConsoleBaseExtWXReservedApp1__voidPFunc)(const wxAppConsoleBaseExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleBaseExtWXReservedApp2__voidPFunc)(const wxAppConsoleBaseExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleBaseExtWXReservedEvtHandler1__voidPFunc)(const wxAppConsoleBaseExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleBaseExtWXReservedEvtHandler2__voidPFunc)(const wxAppConsoleBaseExt* self, void* param0, void* res);
typedef void (*wxAppConsoleBaseExtWakeUpIdleFunc)(const wxAppConsoleBaseExt* self);
class wxAppConsoleExt;
typedef void (*wxAppConsoleExtAddPendingEvent__wxEventCRFunc)(const wxAppConsoleExt* self, wxEvent const& event);
typedef void (*wxAppConsoleExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc)(const wxAppConsoleExt* self, wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event);
typedef bool (*wxAppConsoleExtCallOnInitFunc)(const wxAppConsoleExt* self, bool res);
typedef void (*wxAppConsoleExtCleanUpFunc)(const wxAppConsoleExt* self);
typedef wxObjectRefData* (*wxAppConsoleExtCloneRefData__wxObjectRefDataCPFunc)(const wxAppConsoleExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxAppConsoleExtCreateRefDataFunc)(const wxAppConsoleExt* self, wxObjectRefData* res);
typedef wxAppTraits* (*wxAppConsoleExtCreateTraitsFunc)(const wxAppConsoleExt* self, wxAppTraits* res);
typedef bool (*wxAppConsoleExtDispatchFunc)(const wxAppConsoleExt* self, bool res);
typedef void* (*wxAppConsoleExtDoGetClientDataFunc)(const wxAppConsoleExt* self, void* res);
typedef wxClientData* (*wxAppConsoleExtDoGetClientObjectFunc)(const wxAppConsoleExt* self, wxClientData* res);
typedef void (*wxAppConsoleExtDoSetClientData__voidPFunc)(const wxAppConsoleExt* self, void* data);
typedef void (*wxAppConsoleExtDoSetClientObject__wxClientDataPFunc)(const wxAppConsoleExt* self, wxClientData* data);
typedef void (*wxAppConsoleExtExitFunc)(const wxAppConsoleExt* self);
typedef void (*wxAppConsoleExtExitMainLoopFunc)(const wxAppConsoleExt* self);
typedef int (*wxAppConsoleExtFilterEvent__wxEventRFunc)(const wxAppConsoleExt* self, wxEvent& event, int res);
typedef wxClassInfo* (*wxAppConsoleExtGetClassInfoFunc)(const wxAppConsoleExt* self, wxClassInfo* res);
typedef wxEventHashTable& (*wxAppConsoleExtGetEventHashTableFunc)(const wxAppConsoleExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxAppConsoleExtGetEventTableFunc)(const wxAppConsoleExt* self, wxEventTable const* res);
typedef void (*wxAppConsoleExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc)(const wxAppConsoleExt* self, wxEvtHandler* handler, wxEventFunction func, wxEvent& event);
typedef bool (*wxAppConsoleExtInitialize__intRwxCharPPFunc)(const wxAppConsoleExt* self, int& argc, wxChar** argv, bool res);
typedef bool (*wxAppConsoleExtIsGUIFunc)(const wxAppConsoleExt* self, bool res);
typedef int (*wxAppConsoleExtMainLoopFunc)(const wxAppConsoleExt* self, int res);
typedef void (*wxAppConsoleExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc)(const wxAppConsoleExt* self, wxChar const* file, int line, wxChar const* cond, wxChar const* msg);
typedef void (*wxAppConsoleExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc)(const wxAppConsoleExt* self, wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg);
typedef bool (*wxAppConsoleExtOnCmdLineError__wxCmdLineParserRFunc)(const wxAppConsoleExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleExtOnCmdLineHelp__wxCmdLineParserRFunc)(const wxAppConsoleExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleExtOnCmdLineParsed__wxCmdLineParserRFunc)(const wxAppConsoleExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxAppConsoleExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxAppConsoleExtOnEventLoopEnter__wxEventLoopBasePFunc)(const wxAppConsoleExt* self, wxEventLoopBase* loop);
typedef void (*wxAppConsoleExtOnEventLoopExit__wxEventLoopBasePFunc)(const wxAppConsoleExt* self, wxEventLoopBase* loop);
typedef bool (*wxAppConsoleExtOnExceptionInMainLoopFunc)(const wxAppConsoleExt* self, bool res);
typedef int (*wxAppConsoleExtOnExitFunc)(const wxAppConsoleExt* self, int res);
typedef void (*wxAppConsoleExtOnFatalExceptionFunc)(const wxAppConsoleExt* self);
typedef bool (*wxAppConsoleExtOnInitFunc)(const wxAppConsoleExt* self, bool res);
typedef void (*wxAppConsoleExtOnInitCmdLine__wxCmdLineParserRFunc)(const wxAppConsoleExt* self, wxCmdLineParser& parser);
typedef void (*wxAppConsoleExtOnLaunchedFunc)(const wxAppConsoleExt* self);
typedef int (*wxAppConsoleExtOnRunFunc)(const wxAppConsoleExt* self, int res);
typedef void (*wxAppConsoleExtOnUnhandledExceptionFunc)(const wxAppConsoleExt* self);
typedef bool (*wxAppConsoleExtPendingFunc)(const wxAppConsoleExt* self, bool res);
typedef bool (*wxAppConsoleExtProcessEvent__wxEventRFunc)(const wxAppConsoleExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleExtProcessIdleFunc)(const wxAppConsoleExt* self, bool res);
typedef void (*wxAppConsoleExtProcessPendingEventsFunc)(const wxAppConsoleExt* self);
typedef void (*wxAppConsoleExtQueueEvent__wxEventPFunc)(const wxAppConsoleExt* self, wxEvent* event);
typedef void (*wxAppConsoleExtRethrowStoredExceptionFunc)(const wxAppConsoleExt* self);
typedef bool (*wxAppConsoleExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxAppConsoleExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxAppConsoleExtSetCLocaleFunc)(const wxAppConsoleExt* self);
typedef void (*wxAppConsoleExtSetNextHandler__wxEvtHandlerPFunc)(const wxAppConsoleExt* self, wxEvtHandler* handler);
typedef void (*wxAppConsoleExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxAppConsoleExt* self, wxEvtHandler* handler);
typedef bool (*wxAppConsoleExtStoreCurrentExceptionFunc)(const wxAppConsoleExt* self, bool res);
typedef bool (*wxAppConsoleExtTryAfter__wxEventRFunc)(const wxAppConsoleExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleExtTryBefore__wxEventRFunc)(const wxAppConsoleExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleExtUsesEventLoopFunc)(const wxAppConsoleExt* self, bool res);
typedef void* (*wxAppConsoleExtWXReservedApp1__voidPFunc)(const wxAppConsoleExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleExtWXReservedApp2__voidPFunc)(const wxAppConsoleExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleExtWXReservedEvtHandler1__voidPFunc)(const wxAppConsoleExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleExtWXReservedEvtHandler2__voidPFunc)(const wxAppConsoleExt* self, void* param0, void* res);
typedef void (*wxAppConsoleExtWakeUpIdleFunc)(const wxAppConsoleExt* self);
class wxAppBaseExt;
typedef void (*wxAppBaseExtAddPendingEvent__wxEventCRFunc)(const wxAppBaseExt* self, wxEvent const& event);
typedef void (*wxAppBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc)(const wxAppBaseExt* self, wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event);
typedef bool (*wxAppBaseExtCallOnInitFunc)(const wxAppBaseExt* self, bool res);
typedef void (*wxAppBaseExtCleanUpFunc)(const wxAppBaseExt* self);
typedef wxObjectRefData* (*wxAppBaseExtCloneRefData__wxObjectRefDataCPFunc)(const wxAppBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxAppBaseExtCreateRefDataFunc)(const wxAppBaseExt* self, wxObjectRefData* res);
typedef wxAppTraits* (*wxAppBaseExtCreateTraitsFunc)(const wxAppBaseExt* self, wxAppTraits* res);
typedef bool (*wxAppBaseExtDispatchFunc)(const wxAppBaseExt* self, bool res);
typedef void* (*wxAppBaseExtDoGetClientDataFunc)(const wxAppBaseExt* self, void* res);
typedef wxClientData* (*wxAppBaseExtDoGetClientObjectFunc)(const wxAppBaseExt* self, wxClientData* res);
typedef void (*wxAppBaseExtDoSetClientData__voidPFunc)(const wxAppBaseExt* self, void* data);
typedef void (*wxAppBaseExtDoSetClientObject__wxClientDataPFunc)(const wxAppBaseExt* self, wxClientData* data);
typedef void (*wxAppBaseExtExitFunc)(const wxAppBaseExt* self);
typedef void (*wxAppBaseExtExitMainLoopFunc)(const wxAppBaseExt* self);
typedef int (*wxAppBaseExtFilterEvent__wxEventRFunc)(const wxAppBaseExt* self, wxEvent& event, int res);
typedef wxClassInfo* (*wxAppBaseExtGetClassInfoFunc)(const wxAppBaseExt* self, wxClassInfo* res);
typedef wxVideoMode (*wxAppBaseExtGetDisplayModeFunc)(const wxAppBaseExt* self, wxVideoMode res);
typedef wxEventHashTable& (*wxAppBaseExtGetEventHashTableFunc)(const wxAppBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxAppBaseExtGetEventTableFunc)(const wxAppBaseExt* self, wxEventTable const* res);
typedef wxLayoutDirection (*wxAppBaseExtGetLayoutDirectionFunc)(const wxAppBaseExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxAppBaseExtGetTopWindowFunc)(const wxAppBaseExt* self, wxWindow* res);
typedef void (*wxAppBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc)(const wxAppBaseExt* self, wxEvtHandler* handler, wxEventFunction func, wxEvent& event);
typedef bool (*wxAppBaseExtInitialize__intRwxCharPPFunc)(const wxAppBaseExt* self, int& argc, wxChar** argv, bool res);
typedef bool (*wxAppBaseExtIsActiveFunc)(const wxAppBaseExt* self, bool res);
typedef bool (*wxAppBaseExtIsGUIFunc)(const wxAppBaseExt* self, bool res);
typedef int (*wxAppBaseExtMainLoopFunc)(const wxAppBaseExt* self, int res);
typedef void (*wxAppBaseExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc)(const wxAppBaseExt* self, wxChar const* file, int line, wxChar const* cond, wxChar const* msg);
typedef void (*wxAppBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc)(const wxAppBaseExt* self, wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg);
typedef bool (*wxAppBaseExtOnCmdLineError__wxCmdLineParserRFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppBaseExtOnCmdLineHelp__wxCmdLineParserRFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppBaseExtOnCmdLineParsed__wxCmdLineParserRFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxAppBaseExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxAppBaseExtOnEventLoopEnter__wxEventLoopBasePFunc)(const wxAppBaseExt* self, wxEventLoopBase* loop);
typedef void (*wxAppBaseExtOnEventLoopExit__wxEventLoopBasePFunc)(const wxAppBaseExt* self, wxEventLoopBase* loop);
typedef bool (*wxAppBaseExtOnExceptionInMainLoopFunc)(const wxAppBaseExt* self, bool res);
typedef int (*wxAppBaseExtOnExitFunc)(const wxAppBaseExt* self, int res);
typedef void (*wxAppBaseExtOnFatalExceptionFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtOnInitFunc)(const wxAppBaseExt* self, bool res);
typedef void (*wxAppBaseExtOnInitCmdLine__wxCmdLineParserRFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppBaseExtOnInitGuiFunc)(const wxAppBaseExt* self, bool res);
typedef void (*wxAppBaseExtOnLaunchedFunc)(const wxAppBaseExt* self);
typedef int (*wxAppBaseExtOnRunFunc)(const wxAppBaseExt* self, int res);
typedef void (*wxAppBaseExtOnUnhandledExceptionFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtPendingFunc)(const wxAppBaseExt* self, bool res);
typedef bool (*wxAppBaseExtProcessEvent__wxEventRFunc)(const wxAppBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppBaseExtProcessIdleFunc)(const wxAppBaseExt* self, bool res);
typedef void (*wxAppBaseExtProcessPendingEventsFunc)(const wxAppBaseExt* self);
typedef void (*wxAppBaseExtQueueEvent__wxEventPFunc)(const wxAppBaseExt* self, wxEvent* event);
typedef void (*wxAppBaseExtRethrowStoredExceptionFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtSafeYield__wxWindowPboolFunc)(const wxAppBaseExt* self, wxWindow* win, bool onlyIfNeeded, bool res);
typedef bool (*wxAppBaseExtSafeYieldFor__wxWindowPlongFunc)(const wxAppBaseExt* self, wxWindow* win, long eventsToProcess, bool res);
typedef bool (*wxAppBaseExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxAppBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxAppBaseExtSetActive__boolwxWindowPFunc)(const wxAppBaseExt* self, bool isActive, wxWindow* lastFocus);
typedef void (*wxAppBaseExtSetCLocaleFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtSetDisplayMode__wxVideoModeCRFunc)(const wxAppBaseExt* self, wxVideoMode const& info, bool res);
typedef bool (*wxAppBaseExtSetNativeTheme__wxStringCRFunc)(const wxAppBaseExt* self, wxString const& theme, bool res);
typedef void (*wxAppBaseExtSetNextHandler__wxEvtHandlerPFunc)(const wxAppBaseExt* self, wxEvtHandler* handler);
typedef void (*wxAppBaseExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxAppBaseExt* self, wxEvtHandler* handler);
typedef void (*wxAppBaseExtSetPrintMode__intFunc)(const wxAppBaseExt* self, int mode);
typedef bool (*wxAppBaseExtStoreCurrentExceptionFunc)(const wxAppBaseExt* self, bool res);
typedef bool (*wxAppBaseExtTryAfter__wxEventRFunc)(const wxAppBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppBaseExtTryBefore__wxEventRFunc)(const wxAppBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppBaseExtUsesEventLoopFunc)(const wxAppBaseExt* self, bool res);
typedef void* (*wxAppBaseExtWXReservedApp1__voidPFunc)(const wxAppBaseExt* self, void* param0, void* res);
typedef void* (*wxAppBaseExtWXReservedApp2__voidPFunc)(const wxAppBaseExt* self, void* param0, void* res);
typedef void* (*wxAppBaseExtWXReservedEvtHandler1__voidPFunc)(const wxAppBaseExt* self, void* param0, void* res);
typedef void* (*wxAppBaseExtWXReservedEvtHandler2__voidPFunc)(const wxAppBaseExt* self, void* param0, void* res);
typedef void (*wxAppBaseExtWakeUpIdleFunc)(const wxAppBaseExt* self);
class wxAppExt;
typedef void (*wxAppExtAddPendingEvent__wxEventCRFunc)(const wxAppExt* self, wxEvent const& event);
typedef void (*wxAppExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc)(const wxAppExt* self, wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event);
typedef bool (*wxAppExtCallOnInitFunc)(const wxAppExt* self, bool res);
typedef void (*wxAppExtCleanUpFunc)(const wxAppExt* self);
typedef wxObjectRefData* (*wxAppExtCloneRefData__wxObjectRefDataCPFunc)(const wxAppExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxAppExtCreateRefDataFunc)(const wxAppExt* self, wxObjectRefData* res);
typedef wxAppTraits* (*wxAppExtCreateTraitsFunc)(const wxAppExt* self, wxAppTraits* res);
typedef bool (*wxAppExtDispatchFunc)(const wxAppExt* self, bool res);
typedef void* (*wxAppExtDoGetClientDataFunc)(const wxAppExt* self, void* res);
typedef wxClientData* (*wxAppExtDoGetClientObjectFunc)(const wxAppExt* self, wxClientData* res);
typedef void (*wxAppExtDoSetClientData__voidPFunc)(const wxAppExt* self, void* data);
typedef void (*wxAppExtDoSetClientObject__wxClientDataPFunc)(const wxAppExt* self, wxClientData* data);
typedef void (*wxAppExtExitFunc)(const wxAppExt* self);
typedef void (*wxAppExtExitMainLoopFunc)(const wxAppExt* self);
typedef int (*wxAppExtFilterEvent__wxEventRFunc)(const wxAppExt* self, wxEvent& event, int res);
typedef wxClassInfo* (*wxAppExtGetClassInfoFunc)(const wxAppExt* self, wxClassInfo* res);
typedef wxVideoMode (*wxAppExtGetDisplayModeFunc)(const wxAppExt* self, wxVideoMode res);
typedef wxEventHashTable& (*wxAppExtGetEventHashTableFunc)(const wxAppExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxAppExtGetEventTableFunc)(const wxAppExt* self, wxEventTable const* res);
typedef wxLayoutDirection (*wxAppExtGetLayoutDirectionFunc)(const wxAppExt* self, wxLayoutDirection res);
typedef int (*wxAppExtGetPrintModeFunc)(const wxAppExt* self, int res);
typedef wxWindow* (*wxAppExtGetTopWindowFunc)(const wxAppExt* self, wxWindow* res);
typedef void (*wxAppExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc)(const wxAppExt* self, wxEvtHandler* handler, wxEventFunction func, wxEvent& event);
typedef bool (*wxAppExtInitialize__intRwxCharPPFunc)(const wxAppExt* self, int& argc, wxChar** argv, bool res);
typedef bool (*wxAppExtIsActiveFunc)(const wxAppExt* self, bool res);
typedef bool (*wxAppExtIsGUIFunc)(const wxAppExt* self, bool res);
typedef int (*wxAppExtMainLoopFunc)(const wxAppExt* self, int res);
typedef void (*wxAppExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc)(const wxAppExt* self, wxChar const* file, int line, wxChar const* cond, wxChar const* msg);
typedef void (*wxAppExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc)(const wxAppExt* self, wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg);
typedef bool (*wxAppExtOnCmdLineError__wxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppExtOnCmdLineHelp__wxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppExtOnCmdLineParsed__wxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxAppExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef void (*wxAppExtOnEventLoopEnter__wxEventLoopBasePFunc)(const wxAppExt* self, wxEventLoopBase* loop);
typedef void (*wxAppExtOnEventLoopExit__wxEventLoopBasePFunc)(const wxAppExt* self, wxEventLoopBase* loop);
typedef bool (*wxAppExtOnExceptionInMainLoopFunc)(const wxAppExt* self, bool res);
typedef int (*wxAppExtOnExitFunc)(const wxAppExt* self, int res);
typedef void (*wxAppExtOnFatalExceptionFunc)(const wxAppExt* self);
typedef bool (*wxAppExtOnInitFunc)(const wxAppExt* self, bool res);
typedef void (*wxAppExtOnInitCmdLine__wxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppExtOnInitGuiFunc)(const wxAppExt* self, bool res);
typedef void (*wxAppExtOnLaunchedFunc)(const wxAppExt* self);
typedef int (*wxAppExtOnRunFunc)(const wxAppExt* self, int res);
typedef void (*wxAppExtOnUnhandledExceptionFunc)(const wxAppExt* self);
typedef bool (*wxAppExtPendingFunc)(const wxAppExt* self, bool res);
typedef bool (*wxAppExtProcessEvent__wxEventRFunc)(const wxAppExt* self, wxEvent& event, bool res);
typedef bool (*wxAppExtProcessIdleFunc)(const wxAppExt* self, bool res);
typedef void (*wxAppExtProcessPendingEventsFunc)(const wxAppExt* self);
typedef void (*wxAppExtQueueEvent__wxEventPFunc)(const wxAppExt* self, wxEvent* event);
typedef void (*wxAppExtRethrowStoredExceptionFunc)(const wxAppExt* self);
typedef bool (*wxAppExtSafeYield__wxWindowPboolFunc)(const wxAppExt* self, wxWindow* win, bool onlyIfNeeded, bool res);
typedef bool (*wxAppExtSafeYieldFor__wxWindowPlongFunc)(const wxAppExt* self, wxWindow* win, long eventsToProcess, bool res);
typedef bool (*wxAppExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxAppExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxAppExtSetActive__boolwxWindowPFunc)(const wxAppExt* self, bool isActive, wxWindow* lastFocus);
typedef void (*wxAppExtSetCLocaleFunc)(const wxAppExt* self);
typedef bool (*wxAppExtSetDisplayMode__wxVideoModeCRFunc)(const wxAppExt* self, wxVideoMode const& info, bool res);
typedef bool (*wxAppExtSetNativeTheme__wxStringCRFunc)(const wxAppExt* self, wxString const& theme, bool res);
typedef void (*wxAppExtSetNextHandler__wxEvtHandlerPFunc)(const wxAppExt* self, wxEvtHandler* handler);
typedef void (*wxAppExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxAppExt* self, wxEvtHandler* handler);
typedef void (*wxAppExtSetPrintMode__intFunc)(const wxAppExt* self, int mode);
typedef bool (*wxAppExtStoreCurrentExceptionFunc)(const wxAppExt* self, bool res);
typedef bool (*wxAppExtTryAfter__wxEventRFunc)(const wxAppExt* self, wxEvent& event, bool res);
typedef bool (*wxAppExtTryBefore__wxEventRFunc)(const wxAppExt* self, wxEvent& event, bool res);
typedef bool (*wxAppExtUsesEventLoopFunc)(const wxAppExt* self, bool res);
typedef void* (*wxAppExtWXReservedApp1__voidPFunc)(const wxAppExt* self, void* param0, void* res);
typedef void* (*wxAppExtWXReservedApp2__voidPFunc)(const wxAppExt* self, void* param0, void* res);
typedef void* (*wxAppExtWXReservedEvtHandler1__voidPFunc)(const wxAppExt* self, void* param0, void* res);
typedef void* (*wxAppExtWXReservedEvtHandler2__voidPFunc)(const wxAppExt* self, void* param0, void* res);
typedef void (*wxAppExtWakeUpIdleFunc)(const wxAppExt* self);

class wxAppConsoleBaseExt: public wxAppConsoleBase
{
public:
  wxAppConsoleBaseExt(): wxAppConsoleBase()  {  }
  virtual ~wxAppConsoleBaseExt() override  {  }
  wxAppConsoleBaseExtAddPendingEvent__wxEventCRFunc m_wxAppConsoleBaseExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxAppConsoleBase::AddPendingEvent(event);
    if (*m_wxAppConsoleBaseExtAddPendingEvent__wxEventCR != NULL){
      return m_wxAppConsoleBaseExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxAppConsoleBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc m_wxAppConsoleBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR = NULL;
  virtual void CallEventHandler(wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event) const override
  {
    wxAppConsoleBase::CallEventHandler(handler, functor, event);
    if (*m_wxAppConsoleBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR != NULL){
      return m_wxAppConsoleBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR(this, handler, functor, event);
    }
  }
  wxAppConsoleBaseExtCallOnInitFunc m_wxAppConsoleBaseExtCallOnInit = NULL;
  virtual bool CallOnInit() override
  {
    bool res = wxAppConsoleBase::CallOnInit();
    if (*m_wxAppConsoleBaseExtCallOnInit != NULL){
      return m_wxAppConsoleBaseExtCallOnInit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtCleanUpFunc m_wxAppConsoleBaseExtCleanUp = NULL;
  virtual void CleanUp() override
  {
    wxAppConsoleBase::CleanUp();
    if (*m_wxAppConsoleBaseExtCleanUp != NULL){
      return m_wxAppConsoleBaseExtCleanUp(this);
    }
  }
  wxAppConsoleBaseExtCloneRefData__wxObjectRefDataCPFunc m_wxAppConsoleBaseExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAppConsoleBase::CloneRefData(data);
    if (*m_wxAppConsoleBaseExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxAppConsoleBaseExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtCreateRefDataFunc m_wxAppConsoleBaseExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxAppConsoleBase::CreateRefData();
    if (*m_wxAppConsoleBaseExtCreateRefData != NULL){
      return m_wxAppConsoleBaseExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtCreateTraitsFunc m_wxAppConsoleBaseExtCreateTraits = NULL;
  virtual wxAppTraits* CreateTraits() override
  {
    wxAppTraits* res = wxAppConsoleBase::CreateTraits();
    if (*m_wxAppConsoleBaseExtCreateTraits != NULL){
      return m_wxAppConsoleBaseExtCreateTraits(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtDispatchFunc m_wxAppConsoleBaseExtDispatch = NULL;
  virtual bool Dispatch() override
  {
    bool res = wxAppConsoleBase::Dispatch();
    if (*m_wxAppConsoleBaseExtDispatch != NULL){
      return m_wxAppConsoleBaseExtDispatch(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtDoGetClientDataFunc m_wxAppConsoleBaseExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxAppConsoleBase::DoGetClientData();
    if (*m_wxAppConsoleBaseExtDoGetClientData != NULL){
      return m_wxAppConsoleBaseExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtDoGetClientObjectFunc m_wxAppConsoleBaseExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxAppConsoleBase::DoGetClientObject();
    if (*m_wxAppConsoleBaseExtDoGetClientObject != NULL){
      return m_wxAppConsoleBaseExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtDoSetClientData__voidPFunc m_wxAppConsoleBaseExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxAppConsoleBase::DoSetClientData(data);
    if (*m_wxAppConsoleBaseExtDoSetClientData__voidP != NULL){
      return m_wxAppConsoleBaseExtDoSetClientData__voidP(this, data);
    }
  }
  wxAppConsoleBaseExtDoSetClientObject__wxClientDataPFunc m_wxAppConsoleBaseExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxAppConsoleBase::DoSetClientObject(data);
    if (*m_wxAppConsoleBaseExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxAppConsoleBaseExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxAppConsoleBaseExtExitFunc m_wxAppConsoleBaseExtExit = NULL;
  virtual void Exit() override
  {
    wxAppConsoleBase::Exit();
    if (*m_wxAppConsoleBaseExtExit != NULL){
      return m_wxAppConsoleBaseExtExit(this);
    }
  }
  wxAppConsoleBaseExtExitMainLoopFunc m_wxAppConsoleBaseExtExitMainLoop = NULL;
  virtual void ExitMainLoop() override
  {
    wxAppConsoleBase::ExitMainLoop();
    if (*m_wxAppConsoleBaseExtExitMainLoop != NULL){
      return m_wxAppConsoleBaseExtExitMainLoop(this);
    }
  }
  wxAppConsoleBaseExtFilterEvent__wxEventRFunc m_wxAppConsoleBaseExtFilterEvent__wxEventR = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    if (*m_wxAppConsoleBaseExtFilterEvent__wxEventR != NULL){
      return m_wxAppConsoleBaseExtFilterEvent__wxEventR(this, event);
    }
    else {
      return 0;
    }
  }
  wxAppConsoleBaseExtGetClassInfoFunc m_wxAppConsoleBaseExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxAppConsoleBase::GetClassInfo();
    if (*m_wxAppConsoleBaseExtGetClassInfo != NULL){
      return m_wxAppConsoleBaseExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtGetEventHashTableFunc m_wxAppConsoleBaseExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxAppConsoleBase::GetEventHashTable();
    if (*m_wxAppConsoleBaseExtGetEventHashTable != NULL){
      return m_wxAppConsoleBaseExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtGetEventTableFunc m_wxAppConsoleBaseExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxAppConsoleBase::GetEventTable();
    if (*m_wxAppConsoleBaseExtGetEventTable != NULL){
      return m_wxAppConsoleBaseExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc m_wxAppConsoleBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR = NULL;
  virtual void HandleEvent(wxEvtHandler* handler, wxEventFunction func, wxEvent& event) const override
  {
    wxAppConsoleBase::HandleEvent(handler, func, event);
    if (*m_wxAppConsoleBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR != NULL){
      return m_wxAppConsoleBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR(this, handler, func, event);
    }
  }
  wxAppConsoleBaseExtInitialize__intRwxCharPPFunc m_wxAppConsoleBaseExtInitialize__intRwxCharPP = NULL;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxAppConsoleBase::Initialize(argc, argv);
    if (*m_wxAppConsoleBaseExtInitialize__intRwxCharPP != NULL){
      return m_wxAppConsoleBaseExtInitialize__intRwxCharPP(this, argc, argv, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtIsGUIFunc m_wxAppConsoleBaseExtIsGUI = NULL;
  virtual bool IsGUI() const override
  {
    bool res = wxAppConsoleBase::IsGUI();
    if (*m_wxAppConsoleBaseExtIsGUI != NULL){
      return m_wxAppConsoleBaseExtIsGUI(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtMainLoopFunc m_wxAppConsoleBaseExtMainLoop = NULL;
  virtual int MainLoop() override
  {
    int res = wxAppConsoleBase::MainLoop();
    if (*m_wxAppConsoleBaseExtMainLoop != NULL){
      return m_wxAppConsoleBaseExtMainLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc m_wxAppConsoleBaseExtOnAssert__wxCharCPintwxCharCPwxCharCP = NULL;
  virtual void OnAssert(wxChar const* file, int line, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsoleBase::OnAssert(file, line, cond, msg);
    if (*m_wxAppConsoleBaseExtOnAssert__wxCharCPintwxCharCPwxCharCP != NULL){
      return m_wxAppConsoleBaseExtOnAssert__wxCharCPintwxCharCPwxCharCP(this, file, line, cond, msg);
    }
  }
  wxAppConsoleBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc m_wxAppConsoleBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP = NULL;
  virtual void OnAssertFailure(wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsoleBase::OnAssertFailure(file, line, func, cond, msg);
    if (*m_wxAppConsoleBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP != NULL){
      return m_wxAppConsoleBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP(this, file, line, func, cond, msg);
    }
  }
  wxAppConsoleBaseExtOnCmdLineError__wxCmdLineParserRFunc m_wxAppConsoleBaseExtOnCmdLineError__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineError(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsoleBase::OnCmdLineError(parser);
    if (*m_wxAppConsoleBaseExtOnCmdLineError__wxCmdLineParserR != NULL){
      return m_wxAppConsoleBaseExtOnCmdLineError__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnCmdLineHelp__wxCmdLineParserRFunc m_wxAppConsoleBaseExtOnCmdLineHelp__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineHelp(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsoleBase::OnCmdLineHelp(parser);
    if (*m_wxAppConsoleBaseExtOnCmdLineHelp__wxCmdLineParserR != NULL){
      return m_wxAppConsoleBaseExtOnCmdLineHelp__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnCmdLineParsed__wxCmdLineParserRFunc m_wxAppConsoleBaseExtOnCmdLineParsed__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineParsed(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsoleBase::OnCmdLineParsed(parser);
    if (*m_wxAppConsoleBaseExtOnCmdLineParsed__wxCmdLineParserR != NULL){
      return m_wxAppConsoleBaseExtOnCmdLineParsed__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxAppConsoleBaseExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxAppConsoleBase::OnDynamicBind(entry);
    if (*m_wxAppConsoleBaseExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxAppConsoleBaseExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnEventLoopEnter__wxEventLoopBasePFunc m_wxAppConsoleBaseExtOnEventLoopEnter__wxEventLoopBaseP = NULL;
  virtual void OnEventLoopEnter(wxEventLoopBase* loop) override
  {
    wxAppConsoleBase::OnEventLoopEnter(loop);
    if (*m_wxAppConsoleBaseExtOnEventLoopEnter__wxEventLoopBaseP != NULL){
      return m_wxAppConsoleBaseExtOnEventLoopEnter__wxEventLoopBaseP(this, loop);
    }
  }
  wxAppConsoleBaseExtOnEventLoopExit__wxEventLoopBasePFunc m_wxAppConsoleBaseExtOnEventLoopExit__wxEventLoopBaseP = NULL;
  virtual void OnEventLoopExit(wxEventLoopBase* loop) override
  {
    wxAppConsoleBase::OnEventLoopExit(loop);
    if (*m_wxAppConsoleBaseExtOnEventLoopExit__wxEventLoopBaseP != NULL){
      return m_wxAppConsoleBaseExtOnEventLoopExit__wxEventLoopBaseP(this, loop);
    }
  }
  wxAppConsoleBaseExtOnExceptionInMainLoopFunc m_wxAppConsoleBaseExtOnExceptionInMainLoop = NULL;
  virtual bool OnExceptionInMainLoop() override
  {
    bool res = wxAppConsoleBase::OnExceptionInMainLoop();
    if (*m_wxAppConsoleBaseExtOnExceptionInMainLoop != NULL){
      return m_wxAppConsoleBaseExtOnExceptionInMainLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnExitFunc m_wxAppConsoleBaseExtOnExit = NULL;
  virtual int OnExit() override
  {
    int res = wxAppConsoleBase::OnExit();
    if (*m_wxAppConsoleBaseExtOnExit != NULL){
      return m_wxAppConsoleBaseExtOnExit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnFatalExceptionFunc m_wxAppConsoleBaseExtOnFatalException = NULL;
  virtual void OnFatalException() override
  {
    wxAppConsoleBase::OnFatalException();
    if (*m_wxAppConsoleBaseExtOnFatalException != NULL){
      return m_wxAppConsoleBaseExtOnFatalException(this);
    }
  }
  wxAppConsoleBaseExtOnInitFunc m_wxAppConsoleBaseExtOnInit = NULL;
  virtual bool OnInit() override
  {
    bool res = wxAppConsoleBase::OnInit();
    if (*m_wxAppConsoleBaseExtOnInit != NULL){
      return m_wxAppConsoleBaseExtOnInit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnInitCmdLine__wxCmdLineParserRFunc m_wxAppConsoleBaseExtOnInitCmdLine__wxCmdLineParserR = NULL;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxAppConsoleBase::OnInitCmdLine(parser);
    if (*m_wxAppConsoleBaseExtOnInitCmdLine__wxCmdLineParserR != NULL){
      return m_wxAppConsoleBaseExtOnInitCmdLine__wxCmdLineParserR(this, parser);
    }
  }
  wxAppConsoleBaseExtOnLaunchedFunc m_wxAppConsoleBaseExtOnLaunched = NULL;
  virtual void OnLaunched() override
  {
    wxAppConsoleBase::OnLaunched();
    if (*m_wxAppConsoleBaseExtOnLaunched != NULL){
      return m_wxAppConsoleBaseExtOnLaunched(this);
    }
  }
  wxAppConsoleBaseExtOnRunFunc m_wxAppConsoleBaseExtOnRun = NULL;
  virtual int OnRun() override
  {
    int res = wxAppConsoleBase::OnRun();
    if (*m_wxAppConsoleBaseExtOnRun != NULL){
      return m_wxAppConsoleBaseExtOnRun(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnUnhandledExceptionFunc m_wxAppConsoleBaseExtOnUnhandledException = NULL;
  virtual void OnUnhandledException() override
  {
    wxAppConsoleBase::OnUnhandledException();
    if (*m_wxAppConsoleBaseExtOnUnhandledException != NULL){
      return m_wxAppConsoleBaseExtOnUnhandledException(this);
    }
  }
  wxAppConsoleBaseExtPendingFunc m_wxAppConsoleBaseExtPending = NULL;
  virtual bool Pending() override
  {
    bool res = wxAppConsoleBase::Pending();
    if (*m_wxAppConsoleBaseExtPending != NULL){
      return m_wxAppConsoleBaseExtPending(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtProcessEvent__wxEventRFunc m_wxAppConsoleBaseExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxAppConsoleBase::ProcessEvent(event);
    if (*m_wxAppConsoleBaseExtProcessEvent__wxEventR != NULL){
      return m_wxAppConsoleBaseExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtProcessIdleFunc m_wxAppConsoleBaseExtProcessIdle = NULL;
  virtual bool ProcessIdle() override
  {
    bool res = wxAppConsoleBase::ProcessIdle();
    if (*m_wxAppConsoleBaseExtProcessIdle != NULL){
      return m_wxAppConsoleBaseExtProcessIdle(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtProcessPendingEventsFunc m_wxAppConsoleBaseExtProcessPendingEvents = NULL;
  virtual void ProcessPendingEvents() override
  {
    wxAppConsoleBase::ProcessPendingEvents();
    if (*m_wxAppConsoleBaseExtProcessPendingEvents != NULL){
      return m_wxAppConsoleBaseExtProcessPendingEvents(this);
    }
  }
  wxAppConsoleBaseExtQueueEvent__wxEventPFunc m_wxAppConsoleBaseExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxAppConsoleBase::QueueEvent(event);
    if (*m_wxAppConsoleBaseExtQueueEvent__wxEventP != NULL){
      return m_wxAppConsoleBaseExtQueueEvent__wxEventP(this, event);
    }
  }
  wxAppConsoleBaseExtRethrowStoredExceptionFunc m_wxAppConsoleBaseExtRethrowStoredException = NULL;
  virtual void RethrowStoredException() override
  {
    wxAppConsoleBase::RethrowStoredException();
    if (*m_wxAppConsoleBaseExtRethrowStoredException != NULL){
      return m_wxAppConsoleBaseExtRethrowStoredException(this);
    }
  }
  wxAppConsoleBaseExtSearchEventTable__wxEventTableRwxEventRFunc m_wxAppConsoleBaseExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxAppConsoleBase::SearchEventTable(table, event);
    if (*m_wxAppConsoleBaseExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxAppConsoleBaseExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtSetCLocaleFunc m_wxAppConsoleBaseExtSetCLocale = NULL;
  virtual void SetCLocale() override
  {
    wxAppConsoleBase::SetCLocale();
    if (*m_wxAppConsoleBaseExtSetCLocale != NULL){
      return m_wxAppConsoleBaseExtSetCLocale(this);
    }
  }
  wxAppConsoleBaseExtSetNextHandler__wxEvtHandlerPFunc m_wxAppConsoleBaseExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxAppConsoleBase::SetNextHandler(handler);
    if (*m_wxAppConsoleBaseExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxAppConsoleBaseExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAppConsoleBaseExtSetPreviousHandler__wxEvtHandlerPFunc m_wxAppConsoleBaseExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxAppConsoleBase::SetPreviousHandler(handler);
    if (*m_wxAppConsoleBaseExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxAppConsoleBaseExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAppConsoleBaseExtStoreCurrentExceptionFunc m_wxAppConsoleBaseExtStoreCurrentException = NULL;
  virtual bool StoreCurrentException() override
  {
    bool res = wxAppConsoleBase::StoreCurrentException();
    if (*m_wxAppConsoleBaseExtStoreCurrentException != NULL){
      return m_wxAppConsoleBaseExtStoreCurrentException(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtTryAfter__wxEventRFunc m_wxAppConsoleBaseExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxAppConsoleBase::TryAfter(event);
    if (*m_wxAppConsoleBaseExtTryAfter__wxEventR != NULL){
      return m_wxAppConsoleBaseExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtTryBefore__wxEventRFunc m_wxAppConsoleBaseExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxAppConsoleBase::TryBefore(event);
    if (*m_wxAppConsoleBaseExtTryBefore__wxEventR != NULL){
      return m_wxAppConsoleBaseExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtUsesEventLoopFunc m_wxAppConsoleBaseExtUsesEventLoop = NULL;
  virtual bool UsesEventLoop() const override
  {
    bool res = wxAppConsoleBase::UsesEventLoop();
    if (*m_wxAppConsoleBaseExtUsesEventLoop != NULL){
      return m_wxAppConsoleBaseExtUsesEventLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtWXReservedApp1__voidPFunc m_wxAppConsoleBaseExtWXReservedApp1__voidP = NULL;
  virtual void* WXReservedApp1(void* param0) override
  {
    void* res = wxAppConsoleBase::WXReservedApp1(param0);
    if (*m_wxAppConsoleBaseExtWXReservedApp1__voidP != NULL){
      return m_wxAppConsoleBaseExtWXReservedApp1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtWXReservedApp2__voidPFunc m_wxAppConsoleBaseExtWXReservedApp2__voidP = NULL;
  virtual void* WXReservedApp2(void* param0) override
  {
    void* res = wxAppConsoleBase::WXReservedApp2(param0);
    if (*m_wxAppConsoleBaseExtWXReservedApp2__voidP != NULL){
      return m_wxAppConsoleBaseExtWXReservedApp2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtWXReservedEvtHandler1__voidPFunc m_wxAppConsoleBaseExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxAppConsoleBase::WXReservedEvtHandler1(param0);
    if (*m_wxAppConsoleBaseExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxAppConsoleBaseExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtWXReservedEvtHandler2__voidPFunc m_wxAppConsoleBaseExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxAppConsoleBase::WXReservedEvtHandler2(param0);
    if (*m_wxAppConsoleBaseExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxAppConsoleBaseExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtWakeUpIdleFunc m_wxAppConsoleBaseExtWakeUpIdle = NULL;
  virtual void WakeUpIdle() override
  {
    wxAppConsoleBase::WakeUpIdle();
    if (*m_wxAppConsoleBaseExtWakeUpIdle != NULL){
      return m_wxAppConsoleBaseExtWakeUpIdle(this);
    }
  }
  wxAppConsoleBaseExt(wxAppConsoleBaseExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxAppConsoleBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc a_CallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR, wxAppConsoleBaseExtCallOnInitFunc a_CallOnInit, wxAppConsoleBaseExtCleanUpFunc a_CleanUp, wxAppConsoleBaseExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxAppConsoleBaseExtCreateRefDataFunc a_CreateRefData, wxAppConsoleBaseExtCreateTraitsFunc a_CreateTraits, wxAppConsoleBaseExtDispatchFunc a_Dispatch, wxAppConsoleBaseExtDoGetClientDataFunc a_DoGetClientData, wxAppConsoleBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxAppConsoleBaseExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxAppConsoleBaseExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxAppConsoleBaseExtExitFunc a_Exit, wxAppConsoleBaseExtExitMainLoopFunc a_ExitMainLoop, wxAppConsoleBaseExtFilterEvent__wxEventRFunc a_FilterEvent__wxEventR, wxAppConsoleBaseExtGetClassInfoFunc a_GetClassInfo, wxAppConsoleBaseExtGetEventHashTableFunc a_GetEventHashTable, wxAppConsoleBaseExtGetEventTableFunc a_GetEventTable, wxAppConsoleBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc a_HandleEvent__wxEvtHandlerPwxEventFunctionwxEventR, wxAppConsoleBaseExtInitialize__intRwxCharPPFunc a_Initialize__intRwxCharPP, wxAppConsoleBaseExtIsGUIFunc a_IsGUI, wxAppConsoleBaseExtMainLoopFunc a_MainLoop, wxAppConsoleBaseExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc a_OnAssert__wxCharCPintwxCharCPwxCharCP, wxAppConsoleBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc a_OnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP, wxAppConsoleBaseExtOnCmdLineError__wxCmdLineParserRFunc a_OnCmdLineError__wxCmdLineParserR, wxAppConsoleBaseExtOnCmdLineHelp__wxCmdLineParserRFunc a_OnCmdLineHelp__wxCmdLineParserR, wxAppConsoleBaseExtOnCmdLineParsed__wxCmdLineParserRFunc a_OnCmdLineParsed__wxCmdLineParserR, wxAppConsoleBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxAppConsoleBaseExtOnEventLoopEnter__wxEventLoopBasePFunc a_OnEventLoopEnter__wxEventLoopBaseP, wxAppConsoleBaseExtOnEventLoopExit__wxEventLoopBasePFunc a_OnEventLoopExit__wxEventLoopBaseP, wxAppConsoleBaseExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppConsoleBaseExtOnExitFunc a_OnExit, wxAppConsoleBaseExtOnFatalExceptionFunc a_OnFatalException, wxAppConsoleBaseExtOnInitFunc a_OnInit, wxAppConsoleBaseExtOnInitCmdLine__wxCmdLineParserRFunc a_OnInitCmdLine__wxCmdLineParserR, wxAppConsoleBaseExtOnLaunchedFunc a_OnLaunched, wxAppConsoleBaseExtOnRunFunc a_OnRun, wxAppConsoleBaseExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppConsoleBaseExtPendingFunc a_Pending, wxAppConsoleBaseExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxAppConsoleBaseExtProcessIdleFunc a_ProcessIdle, wxAppConsoleBaseExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppConsoleBaseExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxAppConsoleBaseExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppConsoleBaseExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxAppConsoleBaseExtSetCLocaleFunc a_SetCLocale, wxAppConsoleBaseExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxAppConsoleBaseExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxAppConsoleBaseExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppConsoleBaseExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxAppConsoleBaseExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxAppConsoleBaseExtUsesEventLoopFunc a_UsesEventLoop, wxAppConsoleBaseExtWXReservedApp1__voidPFunc a_WXReservedApp1__voidP, wxAppConsoleBaseExtWXReservedApp2__voidPFunc a_WXReservedApp2__voidP, wxAppConsoleBaseExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxAppConsoleBaseExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxAppConsoleBaseExtWakeUpIdleFunc a_WakeUpIdle): wxAppConsoleBase() {
    m_wxAppConsoleBaseExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxAppConsoleBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR = a_CallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR;
    m_wxAppConsoleBaseExtCallOnInit = a_CallOnInit;
    m_wxAppConsoleBaseExtCleanUp = a_CleanUp;
    m_wxAppConsoleBaseExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxAppConsoleBaseExtCreateRefData = a_CreateRefData;
    m_wxAppConsoleBaseExtCreateTraits = a_CreateTraits;
    m_wxAppConsoleBaseExtDispatch = a_Dispatch;
    m_wxAppConsoleBaseExtDoGetClientData = a_DoGetClientData;
    m_wxAppConsoleBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxAppConsoleBaseExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxAppConsoleBaseExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxAppConsoleBaseExtExit = a_Exit;
    m_wxAppConsoleBaseExtExitMainLoop = a_ExitMainLoop;
    m_wxAppConsoleBaseExtFilterEvent__wxEventR = a_FilterEvent__wxEventR;
    m_wxAppConsoleBaseExtGetClassInfo = a_GetClassInfo;
    m_wxAppConsoleBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxAppConsoleBaseExtGetEventTable = a_GetEventTable;
    m_wxAppConsoleBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR = a_HandleEvent__wxEvtHandlerPwxEventFunctionwxEventR;
    m_wxAppConsoleBaseExtInitialize__intRwxCharPP = a_Initialize__intRwxCharPP;
    m_wxAppConsoleBaseExtIsGUI = a_IsGUI;
    m_wxAppConsoleBaseExtMainLoop = a_MainLoop;
    m_wxAppConsoleBaseExtOnAssert__wxCharCPintwxCharCPwxCharCP = a_OnAssert__wxCharCPintwxCharCPwxCharCP;
    m_wxAppConsoleBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP = a_OnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP;
    m_wxAppConsoleBaseExtOnCmdLineError__wxCmdLineParserR = a_OnCmdLineError__wxCmdLineParserR;
    m_wxAppConsoleBaseExtOnCmdLineHelp__wxCmdLineParserR = a_OnCmdLineHelp__wxCmdLineParserR;
    m_wxAppConsoleBaseExtOnCmdLineParsed__wxCmdLineParserR = a_OnCmdLineParsed__wxCmdLineParserR;
    m_wxAppConsoleBaseExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxAppConsoleBaseExtOnEventLoopEnter__wxEventLoopBaseP = a_OnEventLoopEnter__wxEventLoopBaseP;
    m_wxAppConsoleBaseExtOnEventLoopExit__wxEventLoopBaseP = a_OnEventLoopExit__wxEventLoopBaseP;
    m_wxAppConsoleBaseExtOnExceptionInMainLoop = a_OnExceptionInMainLoop;
    m_wxAppConsoleBaseExtOnExit = a_OnExit;
    m_wxAppConsoleBaseExtOnFatalException = a_OnFatalException;
    m_wxAppConsoleBaseExtOnInit = a_OnInit;
    m_wxAppConsoleBaseExtOnInitCmdLine__wxCmdLineParserR = a_OnInitCmdLine__wxCmdLineParserR;
    m_wxAppConsoleBaseExtOnLaunched = a_OnLaunched;
    m_wxAppConsoleBaseExtOnRun = a_OnRun;
    m_wxAppConsoleBaseExtOnUnhandledException = a_OnUnhandledException;
    m_wxAppConsoleBaseExtPending = a_Pending;
    m_wxAppConsoleBaseExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxAppConsoleBaseExtProcessIdle = a_ProcessIdle;
    m_wxAppConsoleBaseExtProcessPendingEvents = a_ProcessPendingEvents;
    m_wxAppConsoleBaseExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxAppConsoleBaseExtRethrowStoredException = a_RethrowStoredException;
    m_wxAppConsoleBaseExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxAppConsoleBaseExtSetCLocale = a_SetCLocale;
    m_wxAppConsoleBaseExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxAppConsoleBaseExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxAppConsoleBaseExtStoreCurrentException = a_StoreCurrentException;
    m_wxAppConsoleBaseExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxAppConsoleBaseExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxAppConsoleBaseExtUsesEventLoop = a_UsesEventLoop;
    m_wxAppConsoleBaseExtWXReservedApp1__voidP = a_WXReservedApp1__voidP;
    m_wxAppConsoleBaseExtWXReservedApp2__voidP = a_WXReservedApp2__voidP;
    m_wxAppConsoleBaseExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxAppConsoleBaseExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxAppConsoleBaseExtWakeUpIdle = a_WakeUpIdle;
  }
};

class wxAppConsoleExt: public wxAppConsole
{
public:
  wxAppConsoleExt(): wxAppConsole()  {  }
  virtual ~wxAppConsoleExt() override  {  }
  wxAppConsoleExtAddPendingEvent__wxEventCRFunc m_wxAppConsoleExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxAppConsole::AddPendingEvent(event);
    if (*m_wxAppConsoleExtAddPendingEvent__wxEventCR != NULL){
      return m_wxAppConsoleExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxAppConsoleExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc m_wxAppConsoleExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR = NULL;
  virtual void CallEventHandler(wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event) const override
  {
    wxAppConsole::CallEventHandler(handler, functor, event);
    if (*m_wxAppConsoleExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR != NULL){
      return m_wxAppConsoleExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR(this, handler, functor, event);
    }
  }
  wxAppConsoleExtCallOnInitFunc m_wxAppConsoleExtCallOnInit = NULL;
  virtual bool CallOnInit() override
  {
    bool res = wxAppConsole::CallOnInit();
    if (*m_wxAppConsoleExtCallOnInit != NULL){
      return m_wxAppConsoleExtCallOnInit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtCleanUpFunc m_wxAppConsoleExtCleanUp = NULL;
  virtual void CleanUp() override
  {
    wxAppConsole::CleanUp();
    if (*m_wxAppConsoleExtCleanUp != NULL){
      return m_wxAppConsoleExtCleanUp(this);
    }
  }
  wxAppConsoleExtCloneRefData__wxObjectRefDataCPFunc m_wxAppConsoleExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAppConsole::CloneRefData(data);
    if (*m_wxAppConsoleExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxAppConsoleExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtCreateRefDataFunc m_wxAppConsoleExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxAppConsole::CreateRefData();
    if (*m_wxAppConsoleExtCreateRefData != NULL){
      return m_wxAppConsoleExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtCreateTraitsFunc m_wxAppConsoleExtCreateTraits = NULL;
  virtual wxAppTraits* CreateTraits() override
  {
    wxAppTraits* res = wxAppConsole::CreateTraits();
    if (*m_wxAppConsoleExtCreateTraits != NULL){
      return m_wxAppConsoleExtCreateTraits(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtDispatchFunc m_wxAppConsoleExtDispatch = NULL;
  virtual bool Dispatch() override
  {
    bool res = wxAppConsole::Dispatch();
    if (*m_wxAppConsoleExtDispatch != NULL){
      return m_wxAppConsoleExtDispatch(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtDoGetClientDataFunc m_wxAppConsoleExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxAppConsole::DoGetClientData();
    if (*m_wxAppConsoleExtDoGetClientData != NULL){
      return m_wxAppConsoleExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtDoGetClientObjectFunc m_wxAppConsoleExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxAppConsole::DoGetClientObject();
    if (*m_wxAppConsoleExtDoGetClientObject != NULL){
      return m_wxAppConsoleExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtDoSetClientData__voidPFunc m_wxAppConsoleExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxAppConsole::DoSetClientData(data);
    if (*m_wxAppConsoleExtDoSetClientData__voidP != NULL){
      return m_wxAppConsoleExtDoSetClientData__voidP(this, data);
    }
  }
  wxAppConsoleExtDoSetClientObject__wxClientDataPFunc m_wxAppConsoleExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxAppConsole::DoSetClientObject(data);
    if (*m_wxAppConsoleExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxAppConsoleExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxAppConsoleExtExitFunc m_wxAppConsoleExtExit = NULL;
  virtual void Exit() override
  {
    wxAppConsole::Exit();
    if (*m_wxAppConsoleExtExit != NULL){
      return m_wxAppConsoleExtExit(this);
    }
  }
  wxAppConsoleExtExitMainLoopFunc m_wxAppConsoleExtExitMainLoop = NULL;
  virtual void ExitMainLoop() override
  {
    wxAppConsole::ExitMainLoop();
    if (*m_wxAppConsoleExtExitMainLoop != NULL){
      return m_wxAppConsoleExtExitMainLoop(this);
    }
  }
  wxAppConsoleExtFilterEvent__wxEventRFunc m_wxAppConsoleExtFilterEvent__wxEventR = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    int res = wxAppConsole::FilterEvent(event);
    if (*m_wxAppConsoleExtFilterEvent__wxEventR != NULL){
      return m_wxAppConsoleExtFilterEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtGetClassInfoFunc m_wxAppConsoleExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxAppConsole::GetClassInfo();
    if (*m_wxAppConsoleExtGetClassInfo != NULL){
      return m_wxAppConsoleExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtGetEventHashTableFunc m_wxAppConsoleExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxAppConsole::GetEventHashTable();
    if (*m_wxAppConsoleExtGetEventHashTable != NULL){
      return m_wxAppConsoleExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtGetEventTableFunc m_wxAppConsoleExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxAppConsole::GetEventTable();
    if (*m_wxAppConsoleExtGetEventTable != NULL){
      return m_wxAppConsoleExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc m_wxAppConsoleExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR = NULL;
  virtual void HandleEvent(wxEvtHandler* handler, wxEventFunction func, wxEvent& event) const override
  {
    wxAppConsole::HandleEvent(handler, func, event);
    if (*m_wxAppConsoleExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR != NULL){
      return m_wxAppConsoleExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR(this, handler, func, event);
    }
  }
  wxAppConsoleExtInitialize__intRwxCharPPFunc m_wxAppConsoleExtInitialize__intRwxCharPP = NULL;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxAppConsole::Initialize(argc, argv);
    if (*m_wxAppConsoleExtInitialize__intRwxCharPP != NULL){
      return m_wxAppConsoleExtInitialize__intRwxCharPP(this, argc, argv, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtIsGUIFunc m_wxAppConsoleExtIsGUI = NULL;
  virtual bool IsGUI() const override
  {
    bool res = wxAppConsole::IsGUI();
    if (*m_wxAppConsoleExtIsGUI != NULL){
      return m_wxAppConsoleExtIsGUI(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtMainLoopFunc m_wxAppConsoleExtMainLoop = NULL;
  virtual int MainLoop() override
  {
    int res = wxAppConsole::MainLoop();
    if (*m_wxAppConsoleExtMainLoop != NULL){
      return m_wxAppConsoleExtMainLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc m_wxAppConsoleExtOnAssert__wxCharCPintwxCharCPwxCharCP = NULL;
  virtual void OnAssert(wxChar const* file, int line, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsole::OnAssert(file, line, cond, msg);
    if (*m_wxAppConsoleExtOnAssert__wxCharCPintwxCharCPwxCharCP != NULL){
      return m_wxAppConsoleExtOnAssert__wxCharCPintwxCharCPwxCharCP(this, file, line, cond, msg);
    }
  }
  wxAppConsoleExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc m_wxAppConsoleExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP = NULL;
  virtual void OnAssertFailure(wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsole::OnAssertFailure(file, line, func, cond, msg);
    if (*m_wxAppConsoleExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP != NULL){
      return m_wxAppConsoleExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP(this, file, line, func, cond, msg);
    }
  }
  wxAppConsoleExtOnCmdLineError__wxCmdLineParserRFunc m_wxAppConsoleExtOnCmdLineError__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineError(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsole::OnCmdLineError(parser);
    if (*m_wxAppConsoleExtOnCmdLineError__wxCmdLineParserR != NULL){
      return m_wxAppConsoleExtOnCmdLineError__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnCmdLineHelp__wxCmdLineParserRFunc m_wxAppConsoleExtOnCmdLineHelp__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineHelp(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsole::OnCmdLineHelp(parser);
    if (*m_wxAppConsoleExtOnCmdLineHelp__wxCmdLineParserR != NULL){
      return m_wxAppConsoleExtOnCmdLineHelp__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnCmdLineParsed__wxCmdLineParserRFunc m_wxAppConsoleExtOnCmdLineParsed__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineParsed(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsole::OnCmdLineParsed(parser);
    if (*m_wxAppConsoleExtOnCmdLineParsed__wxCmdLineParserR != NULL){
      return m_wxAppConsoleExtOnCmdLineParsed__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxAppConsoleExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxAppConsole::OnDynamicBind(entry);
    if (*m_wxAppConsoleExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxAppConsoleExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnEventLoopEnter__wxEventLoopBasePFunc m_wxAppConsoleExtOnEventLoopEnter__wxEventLoopBaseP = NULL;
  virtual void OnEventLoopEnter(wxEventLoopBase* loop) override
  {
    wxAppConsole::OnEventLoopEnter(loop);
    if (*m_wxAppConsoleExtOnEventLoopEnter__wxEventLoopBaseP != NULL){
      return m_wxAppConsoleExtOnEventLoopEnter__wxEventLoopBaseP(this, loop);
    }
  }
  wxAppConsoleExtOnEventLoopExit__wxEventLoopBasePFunc m_wxAppConsoleExtOnEventLoopExit__wxEventLoopBaseP = NULL;
  virtual void OnEventLoopExit(wxEventLoopBase* loop) override
  {
    wxAppConsole::OnEventLoopExit(loop);
    if (*m_wxAppConsoleExtOnEventLoopExit__wxEventLoopBaseP != NULL){
      return m_wxAppConsoleExtOnEventLoopExit__wxEventLoopBaseP(this, loop);
    }
  }
  wxAppConsoleExtOnExceptionInMainLoopFunc m_wxAppConsoleExtOnExceptionInMainLoop = NULL;
  virtual bool OnExceptionInMainLoop() override
  {
    bool res = wxAppConsole::OnExceptionInMainLoop();
    if (*m_wxAppConsoleExtOnExceptionInMainLoop != NULL){
      return m_wxAppConsoleExtOnExceptionInMainLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnExitFunc m_wxAppConsoleExtOnExit = NULL;
  virtual int OnExit() override
  {
    int res = wxAppConsole::OnExit();
    if (*m_wxAppConsoleExtOnExit != NULL){
      return m_wxAppConsoleExtOnExit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnFatalExceptionFunc m_wxAppConsoleExtOnFatalException = NULL;
  virtual void OnFatalException() override
  {
    wxAppConsole::OnFatalException();
    if (*m_wxAppConsoleExtOnFatalException != NULL){
      return m_wxAppConsoleExtOnFatalException(this);
    }
  }
  wxAppConsoleExtOnInitFunc m_wxAppConsoleExtOnInit = NULL;
  virtual bool OnInit() override
  {
    bool res = wxAppConsole::OnInit();
    if (*m_wxAppConsoleExtOnInit != NULL){
      return m_wxAppConsoleExtOnInit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnInitCmdLine__wxCmdLineParserRFunc m_wxAppConsoleExtOnInitCmdLine__wxCmdLineParserR = NULL;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxAppConsole::OnInitCmdLine(parser);
    if (*m_wxAppConsoleExtOnInitCmdLine__wxCmdLineParserR != NULL){
      return m_wxAppConsoleExtOnInitCmdLine__wxCmdLineParserR(this, parser);
    }
  }
  wxAppConsoleExtOnLaunchedFunc m_wxAppConsoleExtOnLaunched = NULL;
  virtual void OnLaunched() override
  {
    wxAppConsole::OnLaunched();
    if (*m_wxAppConsoleExtOnLaunched != NULL){
      return m_wxAppConsoleExtOnLaunched(this);
    }
  }
  wxAppConsoleExtOnRunFunc m_wxAppConsoleExtOnRun = NULL;
  virtual int OnRun() override
  {
    int res = wxAppConsole::OnRun();
    if (*m_wxAppConsoleExtOnRun != NULL){
      return m_wxAppConsoleExtOnRun(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnUnhandledExceptionFunc m_wxAppConsoleExtOnUnhandledException = NULL;
  virtual void OnUnhandledException() override
  {
    wxAppConsole::OnUnhandledException();
    if (*m_wxAppConsoleExtOnUnhandledException != NULL){
      return m_wxAppConsoleExtOnUnhandledException(this);
    }
  }
  wxAppConsoleExtPendingFunc m_wxAppConsoleExtPending = NULL;
  virtual bool Pending() override
  {
    bool res = wxAppConsole::Pending();
    if (*m_wxAppConsoleExtPending != NULL){
      return m_wxAppConsoleExtPending(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtProcessEvent__wxEventRFunc m_wxAppConsoleExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxAppConsole::ProcessEvent(event);
    if (*m_wxAppConsoleExtProcessEvent__wxEventR != NULL){
      return m_wxAppConsoleExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtProcessIdleFunc m_wxAppConsoleExtProcessIdle = NULL;
  virtual bool ProcessIdle() override
  {
    bool res = wxAppConsole::ProcessIdle();
    if (*m_wxAppConsoleExtProcessIdle != NULL){
      return m_wxAppConsoleExtProcessIdle(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtProcessPendingEventsFunc m_wxAppConsoleExtProcessPendingEvents = NULL;
  virtual void ProcessPendingEvents() override
  {
    wxAppConsole::ProcessPendingEvents();
    if (*m_wxAppConsoleExtProcessPendingEvents != NULL){
      return m_wxAppConsoleExtProcessPendingEvents(this);
    }
  }
  wxAppConsoleExtQueueEvent__wxEventPFunc m_wxAppConsoleExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxAppConsole::QueueEvent(event);
    if (*m_wxAppConsoleExtQueueEvent__wxEventP != NULL){
      return m_wxAppConsoleExtQueueEvent__wxEventP(this, event);
    }
  }
  wxAppConsoleExtRethrowStoredExceptionFunc m_wxAppConsoleExtRethrowStoredException = NULL;
  virtual void RethrowStoredException() override
  {
    wxAppConsole::RethrowStoredException();
    if (*m_wxAppConsoleExtRethrowStoredException != NULL){
      return m_wxAppConsoleExtRethrowStoredException(this);
    }
  }
  wxAppConsoleExtSearchEventTable__wxEventTableRwxEventRFunc m_wxAppConsoleExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxAppConsole::SearchEventTable(table, event);
    if (*m_wxAppConsoleExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxAppConsoleExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtSetCLocaleFunc m_wxAppConsoleExtSetCLocale = NULL;
  virtual void SetCLocale() override
  {
    wxAppConsole::SetCLocale();
    if (*m_wxAppConsoleExtSetCLocale != NULL){
      return m_wxAppConsoleExtSetCLocale(this);
    }
  }
  wxAppConsoleExtSetNextHandler__wxEvtHandlerPFunc m_wxAppConsoleExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxAppConsole::SetNextHandler(handler);
    if (*m_wxAppConsoleExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxAppConsoleExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAppConsoleExtSetPreviousHandler__wxEvtHandlerPFunc m_wxAppConsoleExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxAppConsole::SetPreviousHandler(handler);
    if (*m_wxAppConsoleExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxAppConsoleExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAppConsoleExtStoreCurrentExceptionFunc m_wxAppConsoleExtStoreCurrentException = NULL;
  virtual bool StoreCurrentException() override
  {
    bool res = wxAppConsole::StoreCurrentException();
    if (*m_wxAppConsoleExtStoreCurrentException != NULL){
      return m_wxAppConsoleExtStoreCurrentException(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtTryAfter__wxEventRFunc m_wxAppConsoleExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxAppConsole::TryAfter(event);
    if (*m_wxAppConsoleExtTryAfter__wxEventR != NULL){
      return m_wxAppConsoleExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtTryBefore__wxEventRFunc m_wxAppConsoleExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxAppConsole::TryBefore(event);
    if (*m_wxAppConsoleExtTryBefore__wxEventR != NULL){
      return m_wxAppConsoleExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtUsesEventLoopFunc m_wxAppConsoleExtUsesEventLoop = NULL;
  virtual bool UsesEventLoop() const override
  {
    bool res = wxAppConsole::UsesEventLoop();
    if (*m_wxAppConsoleExtUsesEventLoop != NULL){
      return m_wxAppConsoleExtUsesEventLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtWXReservedApp1__voidPFunc m_wxAppConsoleExtWXReservedApp1__voidP = NULL;
  virtual void* WXReservedApp1(void* param0) override
  {
    void* res = wxAppConsole::WXReservedApp1(param0);
    if (*m_wxAppConsoleExtWXReservedApp1__voidP != NULL){
      return m_wxAppConsoleExtWXReservedApp1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtWXReservedApp2__voidPFunc m_wxAppConsoleExtWXReservedApp2__voidP = NULL;
  virtual void* WXReservedApp2(void* param0) override
  {
    void* res = wxAppConsole::WXReservedApp2(param0);
    if (*m_wxAppConsoleExtWXReservedApp2__voidP != NULL){
      return m_wxAppConsoleExtWXReservedApp2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtWXReservedEvtHandler1__voidPFunc m_wxAppConsoleExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxAppConsole::WXReservedEvtHandler1(param0);
    if (*m_wxAppConsoleExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxAppConsoleExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtWXReservedEvtHandler2__voidPFunc m_wxAppConsoleExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxAppConsole::WXReservedEvtHandler2(param0);
    if (*m_wxAppConsoleExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxAppConsoleExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtWakeUpIdleFunc m_wxAppConsoleExtWakeUpIdle = NULL;
  virtual void WakeUpIdle() override
  {
    wxAppConsole::WakeUpIdle();
    if (*m_wxAppConsoleExtWakeUpIdle != NULL){
      return m_wxAppConsoleExtWakeUpIdle(this);
    }
  }
  wxAppConsoleExt(wxAppConsoleExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxAppConsoleExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc a_CallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR, wxAppConsoleExtCallOnInitFunc a_CallOnInit, wxAppConsoleExtCleanUpFunc a_CleanUp, wxAppConsoleExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxAppConsoleExtCreateRefDataFunc a_CreateRefData, wxAppConsoleExtCreateTraitsFunc a_CreateTraits, wxAppConsoleExtDispatchFunc a_Dispatch, wxAppConsoleExtDoGetClientDataFunc a_DoGetClientData, wxAppConsoleExtDoGetClientObjectFunc a_DoGetClientObject, wxAppConsoleExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxAppConsoleExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxAppConsoleExtExitFunc a_Exit, wxAppConsoleExtExitMainLoopFunc a_ExitMainLoop, wxAppConsoleExtFilterEvent__wxEventRFunc a_FilterEvent__wxEventR, wxAppConsoleExtGetClassInfoFunc a_GetClassInfo, wxAppConsoleExtGetEventHashTableFunc a_GetEventHashTable, wxAppConsoleExtGetEventTableFunc a_GetEventTable, wxAppConsoleExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc a_HandleEvent__wxEvtHandlerPwxEventFunctionwxEventR, wxAppConsoleExtInitialize__intRwxCharPPFunc a_Initialize__intRwxCharPP, wxAppConsoleExtIsGUIFunc a_IsGUI, wxAppConsoleExtMainLoopFunc a_MainLoop, wxAppConsoleExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc a_OnAssert__wxCharCPintwxCharCPwxCharCP, wxAppConsoleExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc a_OnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP, wxAppConsoleExtOnCmdLineError__wxCmdLineParserRFunc a_OnCmdLineError__wxCmdLineParserR, wxAppConsoleExtOnCmdLineHelp__wxCmdLineParserRFunc a_OnCmdLineHelp__wxCmdLineParserR, wxAppConsoleExtOnCmdLineParsed__wxCmdLineParserRFunc a_OnCmdLineParsed__wxCmdLineParserR, wxAppConsoleExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxAppConsoleExtOnEventLoopEnter__wxEventLoopBasePFunc a_OnEventLoopEnter__wxEventLoopBaseP, wxAppConsoleExtOnEventLoopExit__wxEventLoopBasePFunc a_OnEventLoopExit__wxEventLoopBaseP, wxAppConsoleExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppConsoleExtOnExitFunc a_OnExit, wxAppConsoleExtOnFatalExceptionFunc a_OnFatalException, wxAppConsoleExtOnInitFunc a_OnInit, wxAppConsoleExtOnInitCmdLine__wxCmdLineParserRFunc a_OnInitCmdLine__wxCmdLineParserR, wxAppConsoleExtOnLaunchedFunc a_OnLaunched, wxAppConsoleExtOnRunFunc a_OnRun, wxAppConsoleExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppConsoleExtPendingFunc a_Pending, wxAppConsoleExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxAppConsoleExtProcessIdleFunc a_ProcessIdle, wxAppConsoleExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppConsoleExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxAppConsoleExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppConsoleExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxAppConsoleExtSetCLocaleFunc a_SetCLocale, wxAppConsoleExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxAppConsoleExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxAppConsoleExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppConsoleExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxAppConsoleExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxAppConsoleExtUsesEventLoopFunc a_UsesEventLoop, wxAppConsoleExtWXReservedApp1__voidPFunc a_WXReservedApp1__voidP, wxAppConsoleExtWXReservedApp2__voidPFunc a_WXReservedApp2__voidP, wxAppConsoleExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxAppConsoleExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxAppConsoleExtWakeUpIdleFunc a_WakeUpIdle): wxAppConsole() {
    m_wxAppConsoleExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxAppConsoleExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR = a_CallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR;
    m_wxAppConsoleExtCallOnInit = a_CallOnInit;
    m_wxAppConsoleExtCleanUp = a_CleanUp;
    m_wxAppConsoleExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxAppConsoleExtCreateRefData = a_CreateRefData;
    m_wxAppConsoleExtCreateTraits = a_CreateTraits;
    m_wxAppConsoleExtDispatch = a_Dispatch;
    m_wxAppConsoleExtDoGetClientData = a_DoGetClientData;
    m_wxAppConsoleExtDoGetClientObject = a_DoGetClientObject;
    m_wxAppConsoleExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxAppConsoleExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxAppConsoleExtExit = a_Exit;
    m_wxAppConsoleExtExitMainLoop = a_ExitMainLoop;
    m_wxAppConsoleExtFilterEvent__wxEventR = a_FilterEvent__wxEventR;
    m_wxAppConsoleExtGetClassInfo = a_GetClassInfo;
    m_wxAppConsoleExtGetEventHashTable = a_GetEventHashTable;
    m_wxAppConsoleExtGetEventTable = a_GetEventTable;
    m_wxAppConsoleExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR = a_HandleEvent__wxEvtHandlerPwxEventFunctionwxEventR;
    m_wxAppConsoleExtInitialize__intRwxCharPP = a_Initialize__intRwxCharPP;
    m_wxAppConsoleExtIsGUI = a_IsGUI;
    m_wxAppConsoleExtMainLoop = a_MainLoop;
    m_wxAppConsoleExtOnAssert__wxCharCPintwxCharCPwxCharCP = a_OnAssert__wxCharCPintwxCharCPwxCharCP;
    m_wxAppConsoleExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP = a_OnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP;
    m_wxAppConsoleExtOnCmdLineError__wxCmdLineParserR = a_OnCmdLineError__wxCmdLineParserR;
    m_wxAppConsoleExtOnCmdLineHelp__wxCmdLineParserR = a_OnCmdLineHelp__wxCmdLineParserR;
    m_wxAppConsoleExtOnCmdLineParsed__wxCmdLineParserR = a_OnCmdLineParsed__wxCmdLineParserR;
    m_wxAppConsoleExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxAppConsoleExtOnEventLoopEnter__wxEventLoopBaseP = a_OnEventLoopEnter__wxEventLoopBaseP;
    m_wxAppConsoleExtOnEventLoopExit__wxEventLoopBaseP = a_OnEventLoopExit__wxEventLoopBaseP;
    m_wxAppConsoleExtOnExceptionInMainLoop = a_OnExceptionInMainLoop;
    m_wxAppConsoleExtOnExit = a_OnExit;
    m_wxAppConsoleExtOnFatalException = a_OnFatalException;
    m_wxAppConsoleExtOnInit = a_OnInit;
    m_wxAppConsoleExtOnInitCmdLine__wxCmdLineParserR = a_OnInitCmdLine__wxCmdLineParserR;
    m_wxAppConsoleExtOnLaunched = a_OnLaunched;
    m_wxAppConsoleExtOnRun = a_OnRun;
    m_wxAppConsoleExtOnUnhandledException = a_OnUnhandledException;
    m_wxAppConsoleExtPending = a_Pending;
    m_wxAppConsoleExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxAppConsoleExtProcessIdle = a_ProcessIdle;
    m_wxAppConsoleExtProcessPendingEvents = a_ProcessPendingEvents;
    m_wxAppConsoleExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxAppConsoleExtRethrowStoredException = a_RethrowStoredException;
    m_wxAppConsoleExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxAppConsoleExtSetCLocale = a_SetCLocale;
    m_wxAppConsoleExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxAppConsoleExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxAppConsoleExtStoreCurrentException = a_StoreCurrentException;
    m_wxAppConsoleExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxAppConsoleExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxAppConsoleExtUsesEventLoop = a_UsesEventLoop;
    m_wxAppConsoleExtWXReservedApp1__voidP = a_WXReservedApp1__voidP;
    m_wxAppConsoleExtWXReservedApp2__voidP = a_WXReservedApp2__voidP;
    m_wxAppConsoleExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxAppConsoleExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxAppConsoleExtWakeUpIdle = a_WakeUpIdle;
  }
};

class wxAppBaseExt: public wxAppBase
{
public:
  wxAppBaseExt(): wxAppBase()  {  }
  virtual ~wxAppBaseExt() override  {  }
  wxAppBaseExtAddPendingEvent__wxEventCRFunc m_wxAppBaseExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxAppBase::AddPendingEvent(event);
    if (*m_wxAppBaseExtAddPendingEvent__wxEventCR != NULL){
      return m_wxAppBaseExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxAppBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc m_wxAppBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR = NULL;
  virtual void CallEventHandler(wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event) const override
  {
    wxAppBase::CallEventHandler(handler, functor, event);
    if (*m_wxAppBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR != NULL){
      return m_wxAppBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR(this, handler, functor, event);
    }
  }
  wxAppBaseExtCallOnInitFunc m_wxAppBaseExtCallOnInit = NULL;
  virtual bool CallOnInit() override
  {
    bool res = wxAppBase::CallOnInit();
    if (*m_wxAppBaseExtCallOnInit != NULL){
      return m_wxAppBaseExtCallOnInit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtCleanUpFunc m_wxAppBaseExtCleanUp = NULL;
  virtual void CleanUp() override
  {
    wxAppBase::CleanUp();
    if (*m_wxAppBaseExtCleanUp != NULL){
      return m_wxAppBaseExtCleanUp(this);
    }
  }
  wxAppBaseExtCloneRefData__wxObjectRefDataCPFunc m_wxAppBaseExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAppBase::CloneRefData(data);
    if (*m_wxAppBaseExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxAppBaseExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtCreateRefDataFunc m_wxAppBaseExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxAppBase::CreateRefData();
    if (*m_wxAppBaseExtCreateRefData != NULL){
      return m_wxAppBaseExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtCreateTraitsFunc m_wxAppBaseExtCreateTraits = NULL;
  virtual wxAppTraits* CreateTraits() override
  {
    wxAppTraits* res = wxAppBase::CreateTraits();
    if (*m_wxAppBaseExtCreateTraits != NULL){
      return m_wxAppBaseExtCreateTraits(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtDispatchFunc m_wxAppBaseExtDispatch = NULL;
  virtual bool Dispatch() override
  {
    bool res = wxAppBase::Dispatch();
    if (*m_wxAppBaseExtDispatch != NULL){
      return m_wxAppBaseExtDispatch(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtDoGetClientDataFunc m_wxAppBaseExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxAppBase::DoGetClientData();
    if (*m_wxAppBaseExtDoGetClientData != NULL){
      return m_wxAppBaseExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtDoGetClientObjectFunc m_wxAppBaseExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxAppBase::DoGetClientObject();
    if (*m_wxAppBaseExtDoGetClientObject != NULL){
      return m_wxAppBaseExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtDoSetClientData__voidPFunc m_wxAppBaseExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxAppBase::DoSetClientData(data);
    if (*m_wxAppBaseExtDoSetClientData__voidP != NULL){
      return m_wxAppBaseExtDoSetClientData__voidP(this, data);
    }
  }
  wxAppBaseExtDoSetClientObject__wxClientDataPFunc m_wxAppBaseExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxAppBase::DoSetClientObject(data);
    if (*m_wxAppBaseExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxAppBaseExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxAppBaseExtExitFunc m_wxAppBaseExtExit = NULL;
  virtual void Exit() override
  {
    wxAppBase::Exit();
    if (*m_wxAppBaseExtExit != NULL){
      return m_wxAppBaseExtExit(this);
    }
  }
  wxAppBaseExtExitMainLoopFunc m_wxAppBaseExtExitMainLoop = NULL;
  virtual void ExitMainLoop() override
  {
    wxAppBase::ExitMainLoop();
    if (*m_wxAppBaseExtExitMainLoop != NULL){
      return m_wxAppBaseExtExitMainLoop(this);
    }
  }
  wxAppBaseExtFilterEvent__wxEventRFunc m_wxAppBaseExtFilterEvent__wxEventR = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    int res = wxAppBase::FilterEvent(event);
    if (*m_wxAppBaseExtFilterEvent__wxEventR != NULL){
      return m_wxAppBaseExtFilterEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtGetClassInfoFunc m_wxAppBaseExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxAppBase::GetClassInfo();
    if (*m_wxAppBaseExtGetClassInfo != NULL){
      return m_wxAppBaseExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtGetDisplayModeFunc m_wxAppBaseExtGetDisplayMode = NULL;
  virtual wxVideoMode GetDisplayMode() const override
  {
    wxVideoMode res = wxAppBase::GetDisplayMode();
    if (*m_wxAppBaseExtGetDisplayMode != NULL){
      return m_wxAppBaseExtGetDisplayMode(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtGetEventHashTableFunc m_wxAppBaseExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxAppBase::GetEventHashTable();
    if (*m_wxAppBaseExtGetEventHashTable != NULL){
      return m_wxAppBaseExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtGetEventTableFunc m_wxAppBaseExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxAppBase::GetEventTable();
    if (*m_wxAppBaseExtGetEventTable != NULL){
      return m_wxAppBaseExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtGetLayoutDirectionFunc m_wxAppBaseExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxAppBase::GetLayoutDirection();
    if (*m_wxAppBaseExtGetLayoutDirection != NULL){
      return m_wxAppBaseExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtGetTopWindowFunc m_wxAppBaseExtGetTopWindow = NULL;
  virtual wxWindow* GetTopWindow() const override
  {
    wxWindow* res = wxAppBase::GetTopWindow();
    if (*m_wxAppBaseExtGetTopWindow != NULL){
      return m_wxAppBaseExtGetTopWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc m_wxAppBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR = NULL;
  virtual void HandleEvent(wxEvtHandler* handler, wxEventFunction func, wxEvent& event) const override
  {
    wxAppBase::HandleEvent(handler, func, event);
    if (*m_wxAppBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR != NULL){
      return m_wxAppBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR(this, handler, func, event);
    }
  }
  wxAppBaseExtInitialize__intRwxCharPPFunc m_wxAppBaseExtInitialize__intRwxCharPP = NULL;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxAppBase::Initialize(argc, argv);
    if (*m_wxAppBaseExtInitialize__intRwxCharPP != NULL){
      return m_wxAppBaseExtInitialize__intRwxCharPP(this, argc, argv, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtIsActiveFunc m_wxAppBaseExtIsActive = NULL;
  virtual bool IsActive() const override
  {
    bool res = wxAppBase::IsActive();
    if (*m_wxAppBaseExtIsActive != NULL){
      return m_wxAppBaseExtIsActive(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtIsGUIFunc m_wxAppBaseExtIsGUI = NULL;
  virtual bool IsGUI() const override
  {
    bool res = wxAppBase::IsGUI();
    if (*m_wxAppBaseExtIsGUI != NULL){
      return m_wxAppBaseExtIsGUI(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtMainLoopFunc m_wxAppBaseExtMainLoop = NULL;
  virtual int MainLoop() override
  {
    int res = wxAppBase::MainLoop();
    if (*m_wxAppBaseExtMainLoop != NULL){
      return m_wxAppBaseExtMainLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc m_wxAppBaseExtOnAssert__wxCharCPintwxCharCPwxCharCP = NULL;
  virtual void OnAssert(wxChar const* file, int line, wxChar const* cond, wxChar const* msg) override
  {
    wxAppBase::OnAssert(file, line, cond, msg);
    if (*m_wxAppBaseExtOnAssert__wxCharCPintwxCharCPwxCharCP != NULL){
      return m_wxAppBaseExtOnAssert__wxCharCPintwxCharCPwxCharCP(this, file, line, cond, msg);
    }
  }
  wxAppBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc m_wxAppBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP = NULL;
  virtual void OnAssertFailure(wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg) override
  {
    wxAppBase::OnAssertFailure(file, line, func, cond, msg);
    if (*m_wxAppBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP != NULL){
      return m_wxAppBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP(this, file, line, func, cond, msg);
    }
  }
  wxAppBaseExtOnCmdLineError__wxCmdLineParserRFunc m_wxAppBaseExtOnCmdLineError__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineError(wxCmdLineParser& parser) override
  {
    bool res = wxAppBase::OnCmdLineError(parser);
    if (*m_wxAppBaseExtOnCmdLineError__wxCmdLineParserR != NULL){
      return m_wxAppBaseExtOnCmdLineError__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnCmdLineHelp__wxCmdLineParserRFunc m_wxAppBaseExtOnCmdLineHelp__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineHelp(wxCmdLineParser& parser) override
  {
    bool res = wxAppBase::OnCmdLineHelp(parser);
    if (*m_wxAppBaseExtOnCmdLineHelp__wxCmdLineParserR != NULL){
      return m_wxAppBaseExtOnCmdLineHelp__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnCmdLineParsed__wxCmdLineParserRFunc m_wxAppBaseExtOnCmdLineParsed__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineParsed(wxCmdLineParser& parser) override
  {
    bool res = wxAppBase::OnCmdLineParsed(parser);
    if (*m_wxAppBaseExtOnCmdLineParsed__wxCmdLineParserR != NULL){
      return m_wxAppBaseExtOnCmdLineParsed__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxAppBaseExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxAppBase::OnDynamicBind(entry);
    if (*m_wxAppBaseExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxAppBaseExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnEventLoopEnter__wxEventLoopBasePFunc m_wxAppBaseExtOnEventLoopEnter__wxEventLoopBaseP = NULL;
  virtual void OnEventLoopEnter(wxEventLoopBase* loop) override
  {
    wxAppBase::OnEventLoopEnter(loop);
    if (*m_wxAppBaseExtOnEventLoopEnter__wxEventLoopBaseP != NULL){
      return m_wxAppBaseExtOnEventLoopEnter__wxEventLoopBaseP(this, loop);
    }
  }
  wxAppBaseExtOnEventLoopExit__wxEventLoopBasePFunc m_wxAppBaseExtOnEventLoopExit__wxEventLoopBaseP = NULL;
  virtual void OnEventLoopExit(wxEventLoopBase* loop) override
  {
    wxAppBase::OnEventLoopExit(loop);
    if (*m_wxAppBaseExtOnEventLoopExit__wxEventLoopBaseP != NULL){
      return m_wxAppBaseExtOnEventLoopExit__wxEventLoopBaseP(this, loop);
    }
  }
  wxAppBaseExtOnExceptionInMainLoopFunc m_wxAppBaseExtOnExceptionInMainLoop = NULL;
  virtual bool OnExceptionInMainLoop() override
  {
    bool res = wxAppBase::OnExceptionInMainLoop();
    if (*m_wxAppBaseExtOnExceptionInMainLoop != NULL){
      return m_wxAppBaseExtOnExceptionInMainLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnExitFunc m_wxAppBaseExtOnExit = NULL;
  virtual int OnExit() override
  {
    int res = wxAppBase::OnExit();
    if (*m_wxAppBaseExtOnExit != NULL){
      return m_wxAppBaseExtOnExit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnFatalExceptionFunc m_wxAppBaseExtOnFatalException = NULL;
  virtual void OnFatalException() override
  {
    wxAppBase::OnFatalException();
    if (*m_wxAppBaseExtOnFatalException != NULL){
      return m_wxAppBaseExtOnFatalException(this);
    }
  }
  wxAppBaseExtOnInitFunc m_wxAppBaseExtOnInit = NULL;
  virtual bool OnInit() override
  {
    bool res = wxAppBase::OnInit();
    if (*m_wxAppBaseExtOnInit != NULL){
      return m_wxAppBaseExtOnInit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnInitCmdLine__wxCmdLineParserRFunc m_wxAppBaseExtOnInitCmdLine__wxCmdLineParserR = NULL;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxAppBase::OnInitCmdLine(parser);
    if (*m_wxAppBaseExtOnInitCmdLine__wxCmdLineParserR != NULL){
      return m_wxAppBaseExtOnInitCmdLine__wxCmdLineParserR(this, parser);
    }
  }
  wxAppBaseExtOnInitGuiFunc m_wxAppBaseExtOnInitGui = NULL;
  virtual bool OnInitGui() override
  {
    bool res = wxAppBase::OnInitGui();
    if (*m_wxAppBaseExtOnInitGui != NULL){
      return m_wxAppBaseExtOnInitGui(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnLaunchedFunc m_wxAppBaseExtOnLaunched = NULL;
  virtual void OnLaunched() override
  {
    wxAppBase::OnLaunched();
    if (*m_wxAppBaseExtOnLaunched != NULL){
      return m_wxAppBaseExtOnLaunched(this);
    }
  }
  wxAppBaseExtOnRunFunc m_wxAppBaseExtOnRun = NULL;
  virtual int OnRun() override
  {
    int res = wxAppBase::OnRun();
    if (*m_wxAppBaseExtOnRun != NULL){
      return m_wxAppBaseExtOnRun(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnUnhandledExceptionFunc m_wxAppBaseExtOnUnhandledException = NULL;
  virtual void OnUnhandledException() override
  {
    wxAppBase::OnUnhandledException();
    if (*m_wxAppBaseExtOnUnhandledException != NULL){
      return m_wxAppBaseExtOnUnhandledException(this);
    }
  }
  wxAppBaseExtPendingFunc m_wxAppBaseExtPending = NULL;
  virtual bool Pending() override
  {
    bool res = wxAppBase::Pending();
    if (*m_wxAppBaseExtPending != NULL){
      return m_wxAppBaseExtPending(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtProcessEvent__wxEventRFunc m_wxAppBaseExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxAppBase::ProcessEvent(event);
    if (*m_wxAppBaseExtProcessEvent__wxEventR != NULL){
      return m_wxAppBaseExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtProcessIdleFunc m_wxAppBaseExtProcessIdle = NULL;
  virtual bool ProcessIdle() override
  {
    bool res = wxAppBase::ProcessIdle();
    if (*m_wxAppBaseExtProcessIdle != NULL){
      return m_wxAppBaseExtProcessIdle(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtProcessPendingEventsFunc m_wxAppBaseExtProcessPendingEvents = NULL;
  virtual void ProcessPendingEvents() override
  {
    wxAppBase::ProcessPendingEvents();
    if (*m_wxAppBaseExtProcessPendingEvents != NULL){
      return m_wxAppBaseExtProcessPendingEvents(this);
    }
  }
  wxAppBaseExtQueueEvent__wxEventPFunc m_wxAppBaseExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxAppBase::QueueEvent(event);
    if (*m_wxAppBaseExtQueueEvent__wxEventP != NULL){
      return m_wxAppBaseExtQueueEvent__wxEventP(this, event);
    }
  }
  wxAppBaseExtRethrowStoredExceptionFunc m_wxAppBaseExtRethrowStoredException = NULL;
  virtual void RethrowStoredException() override
  {
    wxAppBase::RethrowStoredException();
    if (*m_wxAppBaseExtRethrowStoredException != NULL){
      return m_wxAppBaseExtRethrowStoredException(this);
    }
  }
  wxAppBaseExtSafeYield__wxWindowPboolFunc m_wxAppBaseExtSafeYield__wxWindowPbool = NULL;
  virtual bool SafeYield(wxWindow* win, bool onlyIfNeeded) override
  {
    bool res = wxAppBase::SafeYield(win, onlyIfNeeded);
    if (*m_wxAppBaseExtSafeYield__wxWindowPbool != NULL){
      return m_wxAppBaseExtSafeYield__wxWindowPbool(this, win, onlyIfNeeded, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSafeYieldFor__wxWindowPlongFunc m_wxAppBaseExtSafeYieldFor__wxWindowPlong = NULL;
  virtual bool SafeYieldFor(wxWindow* win, long eventsToProcess) override
  {
    bool res = wxAppBase::SafeYieldFor(win, eventsToProcess);
    if (*m_wxAppBaseExtSafeYieldFor__wxWindowPlong != NULL){
      return m_wxAppBaseExtSafeYieldFor__wxWindowPlong(this, win, eventsToProcess, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSearchEventTable__wxEventTableRwxEventRFunc m_wxAppBaseExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxAppBase::SearchEventTable(table, event);
    if (*m_wxAppBaseExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxAppBaseExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSetActive__boolwxWindowPFunc m_wxAppBaseExtSetActive__boolwxWindowP = NULL;
  virtual void SetActive(bool isActive, wxWindow* lastFocus) override
  {
    wxAppBase::SetActive(isActive, lastFocus);
    if (*m_wxAppBaseExtSetActive__boolwxWindowP != NULL){
      return m_wxAppBaseExtSetActive__boolwxWindowP(this, isActive, lastFocus);
    }
  }
  wxAppBaseExtSetCLocaleFunc m_wxAppBaseExtSetCLocale = NULL;
  virtual void SetCLocale() override
  {
    wxAppBase::SetCLocale();
    if (*m_wxAppBaseExtSetCLocale != NULL){
      return m_wxAppBaseExtSetCLocale(this);
    }
  }
  wxAppBaseExtSetDisplayMode__wxVideoModeCRFunc m_wxAppBaseExtSetDisplayMode__wxVideoModeCR = NULL;
  virtual bool SetDisplayMode(wxVideoMode const& info) override
  {
    bool res = wxAppBase::SetDisplayMode(info);
    if (*m_wxAppBaseExtSetDisplayMode__wxVideoModeCR != NULL){
      return m_wxAppBaseExtSetDisplayMode__wxVideoModeCR(this, info, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSetNativeTheme__wxStringCRFunc m_wxAppBaseExtSetNativeTheme__wxStringCR = NULL;
  virtual bool SetNativeTheme(wxString const& theme) override
  {
    bool res = wxAppBase::SetNativeTheme(theme);
    if (*m_wxAppBaseExtSetNativeTheme__wxStringCR != NULL){
      return m_wxAppBaseExtSetNativeTheme__wxStringCR(this, theme, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSetNextHandler__wxEvtHandlerPFunc m_wxAppBaseExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxAppBase::SetNextHandler(handler);
    if (*m_wxAppBaseExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxAppBaseExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAppBaseExtSetPreviousHandler__wxEvtHandlerPFunc m_wxAppBaseExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxAppBase::SetPreviousHandler(handler);
    if (*m_wxAppBaseExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxAppBaseExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAppBaseExtSetPrintMode__intFunc m_wxAppBaseExtSetPrintMode__int = NULL;
  virtual void SetPrintMode(int mode) override
  {
    wxAppBase::SetPrintMode(mode);
    if (*m_wxAppBaseExtSetPrintMode__int != NULL){
      return m_wxAppBaseExtSetPrintMode__int(this, mode);
    }
  }
  wxAppBaseExtStoreCurrentExceptionFunc m_wxAppBaseExtStoreCurrentException = NULL;
  virtual bool StoreCurrentException() override
  {
    bool res = wxAppBase::StoreCurrentException();
    if (*m_wxAppBaseExtStoreCurrentException != NULL){
      return m_wxAppBaseExtStoreCurrentException(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtTryAfter__wxEventRFunc m_wxAppBaseExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxAppBase::TryAfter(event);
    if (*m_wxAppBaseExtTryAfter__wxEventR != NULL){
      return m_wxAppBaseExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtTryBefore__wxEventRFunc m_wxAppBaseExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxAppBase::TryBefore(event);
    if (*m_wxAppBaseExtTryBefore__wxEventR != NULL){
      return m_wxAppBaseExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtUsesEventLoopFunc m_wxAppBaseExtUsesEventLoop = NULL;
  virtual bool UsesEventLoop() const override
  {
    bool res = wxAppBase::UsesEventLoop();
    if (*m_wxAppBaseExtUsesEventLoop != NULL){
      return m_wxAppBaseExtUsesEventLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtWXReservedApp1__voidPFunc m_wxAppBaseExtWXReservedApp1__voidP = NULL;
  virtual void* WXReservedApp1(void* param0) override
  {
    void* res = wxAppBase::WXReservedApp1(param0);
    if (*m_wxAppBaseExtWXReservedApp1__voidP != NULL){
      return m_wxAppBaseExtWXReservedApp1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtWXReservedApp2__voidPFunc m_wxAppBaseExtWXReservedApp2__voidP = NULL;
  virtual void* WXReservedApp2(void* param0) override
  {
    void* res = wxAppBase::WXReservedApp2(param0);
    if (*m_wxAppBaseExtWXReservedApp2__voidP != NULL){
      return m_wxAppBaseExtWXReservedApp2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtWXReservedEvtHandler1__voidPFunc m_wxAppBaseExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxAppBase::WXReservedEvtHandler1(param0);
    if (*m_wxAppBaseExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxAppBaseExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtWXReservedEvtHandler2__voidPFunc m_wxAppBaseExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxAppBase::WXReservedEvtHandler2(param0);
    if (*m_wxAppBaseExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxAppBaseExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtWakeUpIdleFunc m_wxAppBaseExtWakeUpIdle = NULL;
  virtual void WakeUpIdle() override
  {
    wxAppBase::WakeUpIdle();
    if (*m_wxAppBaseExtWakeUpIdle != NULL){
      return m_wxAppBaseExtWakeUpIdle(this);
    }
  }
  wxAppBaseExt(wxAppBaseExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxAppBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc a_CallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR, wxAppBaseExtCallOnInitFunc a_CallOnInit, wxAppBaseExtCleanUpFunc a_CleanUp, wxAppBaseExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxAppBaseExtCreateRefDataFunc a_CreateRefData, wxAppBaseExtCreateTraitsFunc a_CreateTraits, wxAppBaseExtDispatchFunc a_Dispatch, wxAppBaseExtDoGetClientDataFunc a_DoGetClientData, wxAppBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxAppBaseExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxAppBaseExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxAppBaseExtExitFunc a_Exit, wxAppBaseExtExitMainLoopFunc a_ExitMainLoop, wxAppBaseExtFilterEvent__wxEventRFunc a_FilterEvent__wxEventR, wxAppBaseExtGetClassInfoFunc a_GetClassInfo, wxAppBaseExtGetDisplayModeFunc a_GetDisplayMode, wxAppBaseExtGetEventHashTableFunc a_GetEventHashTable, wxAppBaseExtGetEventTableFunc a_GetEventTable, wxAppBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxAppBaseExtGetTopWindowFunc a_GetTopWindow, wxAppBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc a_HandleEvent__wxEvtHandlerPwxEventFunctionwxEventR, wxAppBaseExtInitialize__intRwxCharPPFunc a_Initialize__intRwxCharPP, wxAppBaseExtIsActiveFunc a_IsActive, wxAppBaseExtIsGUIFunc a_IsGUI, wxAppBaseExtMainLoopFunc a_MainLoop, wxAppBaseExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc a_OnAssert__wxCharCPintwxCharCPwxCharCP, wxAppBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc a_OnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP, wxAppBaseExtOnCmdLineError__wxCmdLineParserRFunc a_OnCmdLineError__wxCmdLineParserR, wxAppBaseExtOnCmdLineHelp__wxCmdLineParserRFunc a_OnCmdLineHelp__wxCmdLineParserR, wxAppBaseExtOnCmdLineParsed__wxCmdLineParserRFunc a_OnCmdLineParsed__wxCmdLineParserR, wxAppBaseExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxAppBaseExtOnEventLoopEnter__wxEventLoopBasePFunc a_OnEventLoopEnter__wxEventLoopBaseP, wxAppBaseExtOnEventLoopExit__wxEventLoopBasePFunc a_OnEventLoopExit__wxEventLoopBaseP, wxAppBaseExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppBaseExtOnExitFunc a_OnExit, wxAppBaseExtOnFatalExceptionFunc a_OnFatalException, wxAppBaseExtOnInitFunc a_OnInit, wxAppBaseExtOnInitCmdLine__wxCmdLineParserRFunc a_OnInitCmdLine__wxCmdLineParserR, wxAppBaseExtOnInitGuiFunc a_OnInitGui, wxAppBaseExtOnLaunchedFunc a_OnLaunched, wxAppBaseExtOnRunFunc a_OnRun, wxAppBaseExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppBaseExtPendingFunc a_Pending, wxAppBaseExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxAppBaseExtProcessIdleFunc a_ProcessIdle, wxAppBaseExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppBaseExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxAppBaseExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppBaseExtSafeYield__wxWindowPboolFunc a_SafeYield__wxWindowPbool, wxAppBaseExtSafeYieldFor__wxWindowPlongFunc a_SafeYieldFor__wxWindowPlong, wxAppBaseExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxAppBaseExtSetActive__boolwxWindowPFunc a_SetActive__boolwxWindowP, wxAppBaseExtSetCLocaleFunc a_SetCLocale, wxAppBaseExtSetDisplayMode__wxVideoModeCRFunc a_SetDisplayMode__wxVideoModeCR, wxAppBaseExtSetNativeTheme__wxStringCRFunc a_SetNativeTheme__wxStringCR, wxAppBaseExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxAppBaseExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxAppBaseExtSetPrintMode__intFunc a_SetPrintMode__int, wxAppBaseExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppBaseExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxAppBaseExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxAppBaseExtUsesEventLoopFunc a_UsesEventLoop, wxAppBaseExtWXReservedApp1__voidPFunc a_WXReservedApp1__voidP, wxAppBaseExtWXReservedApp2__voidPFunc a_WXReservedApp2__voidP, wxAppBaseExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxAppBaseExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxAppBaseExtWakeUpIdleFunc a_WakeUpIdle): wxAppBase() {
    m_wxAppBaseExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxAppBaseExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR = a_CallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR;
    m_wxAppBaseExtCallOnInit = a_CallOnInit;
    m_wxAppBaseExtCleanUp = a_CleanUp;
    m_wxAppBaseExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxAppBaseExtCreateRefData = a_CreateRefData;
    m_wxAppBaseExtCreateTraits = a_CreateTraits;
    m_wxAppBaseExtDispatch = a_Dispatch;
    m_wxAppBaseExtDoGetClientData = a_DoGetClientData;
    m_wxAppBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxAppBaseExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxAppBaseExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxAppBaseExtExit = a_Exit;
    m_wxAppBaseExtExitMainLoop = a_ExitMainLoop;
    m_wxAppBaseExtFilterEvent__wxEventR = a_FilterEvent__wxEventR;
    m_wxAppBaseExtGetClassInfo = a_GetClassInfo;
    m_wxAppBaseExtGetDisplayMode = a_GetDisplayMode;
    m_wxAppBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxAppBaseExtGetEventTable = a_GetEventTable;
    m_wxAppBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxAppBaseExtGetTopWindow = a_GetTopWindow;
    m_wxAppBaseExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR = a_HandleEvent__wxEvtHandlerPwxEventFunctionwxEventR;
    m_wxAppBaseExtInitialize__intRwxCharPP = a_Initialize__intRwxCharPP;
    m_wxAppBaseExtIsActive = a_IsActive;
    m_wxAppBaseExtIsGUI = a_IsGUI;
    m_wxAppBaseExtMainLoop = a_MainLoop;
    m_wxAppBaseExtOnAssert__wxCharCPintwxCharCPwxCharCP = a_OnAssert__wxCharCPintwxCharCPwxCharCP;
    m_wxAppBaseExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP = a_OnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP;
    m_wxAppBaseExtOnCmdLineError__wxCmdLineParserR = a_OnCmdLineError__wxCmdLineParserR;
    m_wxAppBaseExtOnCmdLineHelp__wxCmdLineParserR = a_OnCmdLineHelp__wxCmdLineParserR;
    m_wxAppBaseExtOnCmdLineParsed__wxCmdLineParserR = a_OnCmdLineParsed__wxCmdLineParserR;
    m_wxAppBaseExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxAppBaseExtOnEventLoopEnter__wxEventLoopBaseP = a_OnEventLoopEnter__wxEventLoopBaseP;
    m_wxAppBaseExtOnEventLoopExit__wxEventLoopBaseP = a_OnEventLoopExit__wxEventLoopBaseP;
    m_wxAppBaseExtOnExceptionInMainLoop = a_OnExceptionInMainLoop;
    m_wxAppBaseExtOnExit = a_OnExit;
    m_wxAppBaseExtOnFatalException = a_OnFatalException;
    m_wxAppBaseExtOnInit = a_OnInit;
    m_wxAppBaseExtOnInitCmdLine__wxCmdLineParserR = a_OnInitCmdLine__wxCmdLineParserR;
    m_wxAppBaseExtOnInitGui = a_OnInitGui;
    m_wxAppBaseExtOnLaunched = a_OnLaunched;
    m_wxAppBaseExtOnRun = a_OnRun;
    m_wxAppBaseExtOnUnhandledException = a_OnUnhandledException;
    m_wxAppBaseExtPending = a_Pending;
    m_wxAppBaseExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxAppBaseExtProcessIdle = a_ProcessIdle;
    m_wxAppBaseExtProcessPendingEvents = a_ProcessPendingEvents;
    m_wxAppBaseExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxAppBaseExtRethrowStoredException = a_RethrowStoredException;
    m_wxAppBaseExtSafeYield__wxWindowPbool = a_SafeYield__wxWindowPbool;
    m_wxAppBaseExtSafeYieldFor__wxWindowPlong = a_SafeYieldFor__wxWindowPlong;
    m_wxAppBaseExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxAppBaseExtSetActive__boolwxWindowP = a_SetActive__boolwxWindowP;
    m_wxAppBaseExtSetCLocale = a_SetCLocale;
    m_wxAppBaseExtSetDisplayMode__wxVideoModeCR = a_SetDisplayMode__wxVideoModeCR;
    m_wxAppBaseExtSetNativeTheme__wxStringCR = a_SetNativeTheme__wxStringCR;
    m_wxAppBaseExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxAppBaseExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxAppBaseExtSetPrintMode__int = a_SetPrintMode__int;
    m_wxAppBaseExtStoreCurrentException = a_StoreCurrentException;
    m_wxAppBaseExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxAppBaseExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxAppBaseExtUsesEventLoop = a_UsesEventLoop;
    m_wxAppBaseExtWXReservedApp1__voidP = a_WXReservedApp1__voidP;
    m_wxAppBaseExtWXReservedApp2__voidP = a_WXReservedApp2__voidP;
    m_wxAppBaseExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxAppBaseExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxAppBaseExtWakeUpIdle = a_WakeUpIdle;
  }
};

class wxAppExt: public wxApp
{
public:
  wxAppExt(): wxApp()  {  }
  virtual ~wxAppExt() override  {  }
  wxAppExtAddPendingEvent__wxEventCRFunc m_wxAppExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxApp::AddPendingEvent(event);
    if (*m_wxAppExtAddPendingEvent__wxEventCR != NULL){
      return m_wxAppExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxAppExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc m_wxAppExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR = NULL;
  virtual void CallEventHandler(wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event) const override
  {
    wxApp::CallEventHandler(handler, functor, event);
    if (*m_wxAppExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR != NULL){
      return m_wxAppExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR(this, handler, functor, event);
    }
  }
  wxAppExtCallOnInitFunc m_wxAppExtCallOnInit = NULL;
  virtual bool CallOnInit() override
  {
    bool res = wxApp::CallOnInit();
    if (*m_wxAppExtCallOnInit != NULL){
      return m_wxAppExtCallOnInit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtCleanUpFunc m_wxAppExtCleanUp = NULL;
  virtual void CleanUp() override
  {
    wxApp::CleanUp();
    if (*m_wxAppExtCleanUp != NULL){
      return m_wxAppExtCleanUp(this);
    }
  }
  wxAppExtCloneRefData__wxObjectRefDataCPFunc m_wxAppExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxApp::CloneRefData(data);
    if (*m_wxAppExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxAppExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxAppExtCreateRefDataFunc m_wxAppExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxApp::CreateRefData();
    if (*m_wxAppExtCreateRefData != NULL){
      return m_wxAppExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtCreateTraitsFunc m_wxAppExtCreateTraits = NULL;
  virtual wxAppTraits* CreateTraits() override
  {
    wxAppTraits* res = wxApp::CreateTraits();
    if (*m_wxAppExtCreateTraits != NULL){
      return m_wxAppExtCreateTraits(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtDispatchFunc m_wxAppExtDispatch = NULL;
  virtual bool Dispatch() override
  {
    bool res = wxApp::Dispatch();
    if (*m_wxAppExtDispatch != NULL){
      return m_wxAppExtDispatch(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtDoGetClientDataFunc m_wxAppExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxApp::DoGetClientData();
    if (*m_wxAppExtDoGetClientData != NULL){
      return m_wxAppExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtDoGetClientObjectFunc m_wxAppExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxApp::DoGetClientObject();
    if (*m_wxAppExtDoGetClientObject != NULL){
      return m_wxAppExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtDoSetClientData__voidPFunc m_wxAppExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxApp::DoSetClientData(data);
    if (*m_wxAppExtDoSetClientData__voidP != NULL){
      return m_wxAppExtDoSetClientData__voidP(this, data);
    }
  }
  wxAppExtDoSetClientObject__wxClientDataPFunc m_wxAppExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxApp::DoSetClientObject(data);
    if (*m_wxAppExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxAppExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxAppExtExitFunc m_wxAppExtExit = NULL;
  virtual void Exit() override
  {
    wxApp::Exit();
    if (*m_wxAppExtExit != NULL){
      return m_wxAppExtExit(this);
    }
  }
  wxAppExtExitMainLoopFunc m_wxAppExtExitMainLoop = NULL;
  virtual void ExitMainLoop() override
  {
    wxApp::ExitMainLoop();
    if (*m_wxAppExtExitMainLoop != NULL){
      return m_wxAppExtExitMainLoop(this);
    }
  }
  wxAppExtFilterEvent__wxEventRFunc m_wxAppExtFilterEvent__wxEventR = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    int res = wxApp::FilterEvent(event);
    if (*m_wxAppExtFilterEvent__wxEventR != NULL){
      return m_wxAppExtFilterEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppExtGetClassInfoFunc m_wxAppExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxApp::GetClassInfo();
    if (*m_wxAppExtGetClassInfo != NULL){
      return m_wxAppExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtGetDisplayModeFunc m_wxAppExtGetDisplayMode = NULL;
  virtual wxVideoMode GetDisplayMode() const override
  {
    wxVideoMode res = wxApp::GetDisplayMode();
    if (*m_wxAppExtGetDisplayMode != NULL){
      return m_wxAppExtGetDisplayMode(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtGetEventHashTableFunc m_wxAppExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxApp::GetEventHashTable();
    if (*m_wxAppExtGetEventHashTable != NULL){
      return m_wxAppExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtGetEventTableFunc m_wxAppExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxApp::GetEventTable();
    if (*m_wxAppExtGetEventTable != NULL){
      return m_wxAppExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtGetLayoutDirectionFunc m_wxAppExtGetLayoutDirection = NULL;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxApp::GetLayoutDirection();
    if (*m_wxAppExtGetLayoutDirection != NULL){
      return m_wxAppExtGetLayoutDirection(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtGetPrintModeFunc m_wxAppExtGetPrintMode = NULL;
  virtual int GetPrintMode() const override
  {
    int res = wxApp::GetPrintMode();
    if (*m_wxAppExtGetPrintMode != NULL){
      return m_wxAppExtGetPrintMode(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtGetTopWindowFunc m_wxAppExtGetTopWindow = NULL;
  virtual wxWindow* GetTopWindow() const override
  {
    wxWindow* res = wxApp::GetTopWindow();
    if (*m_wxAppExtGetTopWindow != NULL){
      return m_wxAppExtGetTopWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc m_wxAppExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR = NULL;
  virtual void HandleEvent(wxEvtHandler* handler, wxEventFunction func, wxEvent& event) const override
  {
    wxApp::HandleEvent(handler, func, event);
    if (*m_wxAppExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR != NULL){
      return m_wxAppExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR(this, handler, func, event);
    }
  }
  wxAppExtInitialize__intRwxCharPPFunc m_wxAppExtInitialize__intRwxCharPP = NULL;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxApp::Initialize(argc, argv);
    if (*m_wxAppExtInitialize__intRwxCharPP != NULL){
      return m_wxAppExtInitialize__intRwxCharPP(this, argc, argv, res);
    }
    else {
      return res;
    }
  }
  wxAppExtIsActiveFunc m_wxAppExtIsActive = NULL;
  virtual bool IsActive() const override
  {
    bool res = wxApp::IsActive();
    if (*m_wxAppExtIsActive != NULL){
      return m_wxAppExtIsActive(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtIsGUIFunc m_wxAppExtIsGUI = NULL;
  virtual bool IsGUI() const override
  {
    bool res = wxApp::IsGUI();
    if (*m_wxAppExtIsGUI != NULL){
      return m_wxAppExtIsGUI(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtMainLoopFunc m_wxAppExtMainLoop = NULL;
  virtual int MainLoop() override
  {
    int res = wxApp::MainLoop();
    if (*m_wxAppExtMainLoop != NULL){
      return m_wxAppExtMainLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc m_wxAppExtOnAssert__wxCharCPintwxCharCPwxCharCP = NULL;
  virtual void OnAssert(wxChar const* file, int line, wxChar const* cond, wxChar const* msg) override
  {
    wxApp::OnAssert(file, line, cond, msg);
    if (*m_wxAppExtOnAssert__wxCharCPintwxCharCPwxCharCP != NULL){
      return m_wxAppExtOnAssert__wxCharCPintwxCharCPwxCharCP(this, file, line, cond, msg);
    }
  }
  wxAppExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc m_wxAppExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP = NULL;
  virtual void OnAssertFailure(wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg) override
  {
    wxApp::OnAssertFailure(file, line, func, cond, msg);
    if (*m_wxAppExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP != NULL){
      return m_wxAppExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP(this, file, line, func, cond, msg);
    }
  }
  wxAppExtOnCmdLineError__wxCmdLineParserRFunc m_wxAppExtOnCmdLineError__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineError(wxCmdLineParser& parser) override
  {
    bool res = wxApp::OnCmdLineError(parser);
    if (*m_wxAppExtOnCmdLineError__wxCmdLineParserR != NULL){
      return m_wxAppExtOnCmdLineError__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnCmdLineHelp__wxCmdLineParserRFunc m_wxAppExtOnCmdLineHelp__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineHelp(wxCmdLineParser& parser) override
  {
    bool res = wxApp::OnCmdLineHelp(parser);
    if (*m_wxAppExtOnCmdLineHelp__wxCmdLineParserR != NULL){
      return m_wxAppExtOnCmdLineHelp__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnCmdLineParsed__wxCmdLineParserRFunc m_wxAppExtOnCmdLineParsed__wxCmdLineParserR = NULL;
  virtual bool OnCmdLineParsed(wxCmdLineParser& parser) override
  {
    bool res = wxApp::OnCmdLineParsed(parser);
    if (*m_wxAppExtOnCmdLineParsed__wxCmdLineParserR != NULL){
      return m_wxAppExtOnCmdLineParsed__wxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxAppExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxApp::OnDynamicBind(entry);
    if (*m_wxAppExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxAppExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnEventLoopEnter__wxEventLoopBasePFunc m_wxAppExtOnEventLoopEnter__wxEventLoopBaseP = NULL;
  virtual void OnEventLoopEnter(wxEventLoopBase* loop) override
  {
    wxApp::OnEventLoopEnter(loop);
    if (*m_wxAppExtOnEventLoopEnter__wxEventLoopBaseP != NULL){
      return m_wxAppExtOnEventLoopEnter__wxEventLoopBaseP(this, loop);
    }
  }
  wxAppExtOnEventLoopExit__wxEventLoopBasePFunc m_wxAppExtOnEventLoopExit__wxEventLoopBaseP = NULL;
  virtual void OnEventLoopExit(wxEventLoopBase* loop) override
  {
    wxApp::OnEventLoopExit(loop);
    if (*m_wxAppExtOnEventLoopExit__wxEventLoopBaseP != NULL){
      return m_wxAppExtOnEventLoopExit__wxEventLoopBaseP(this, loop);
    }
  }
  wxAppExtOnExceptionInMainLoopFunc m_wxAppExtOnExceptionInMainLoop = NULL;
  virtual bool OnExceptionInMainLoop() override
  {
    bool res = wxApp::OnExceptionInMainLoop();
    if (*m_wxAppExtOnExceptionInMainLoop != NULL){
      return m_wxAppExtOnExceptionInMainLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnExitFunc m_wxAppExtOnExit = NULL;
  virtual int OnExit() override
  {
    int res = wxApp::OnExit();
    if (*m_wxAppExtOnExit != NULL){
      return m_wxAppExtOnExit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnFatalExceptionFunc m_wxAppExtOnFatalException = NULL;
  virtual void OnFatalException() override
  {
    wxApp::OnFatalException();
    if (*m_wxAppExtOnFatalException != NULL){
      return m_wxAppExtOnFatalException(this);
    }
  }
  wxAppExtOnInitFunc m_wxAppExtOnInit = NULL;
  virtual bool OnInit() override
  {
    bool res = wxApp::OnInit();
    if (*m_wxAppExtOnInit != NULL){
      return m_wxAppExtOnInit(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnInitCmdLine__wxCmdLineParserRFunc m_wxAppExtOnInitCmdLine__wxCmdLineParserR = NULL;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxApp::OnInitCmdLine(parser);
    if (*m_wxAppExtOnInitCmdLine__wxCmdLineParserR != NULL){
      return m_wxAppExtOnInitCmdLine__wxCmdLineParserR(this, parser);
    }
  }
  wxAppExtOnInitGuiFunc m_wxAppExtOnInitGui = NULL;
  virtual bool OnInitGui() override
  {
    bool res = wxApp::OnInitGui();
    if (*m_wxAppExtOnInitGui != NULL){
      return m_wxAppExtOnInitGui(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnLaunchedFunc m_wxAppExtOnLaunched = NULL;
  virtual void OnLaunched() override
  {
    wxApp::OnLaunched();
    if (*m_wxAppExtOnLaunched != NULL){
      return m_wxAppExtOnLaunched(this);
    }
  }
  wxAppExtOnRunFunc m_wxAppExtOnRun = NULL;
  virtual int OnRun() override
  {
    int res = wxApp::OnRun();
    if (*m_wxAppExtOnRun != NULL){
      return m_wxAppExtOnRun(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnUnhandledExceptionFunc m_wxAppExtOnUnhandledException = NULL;
  virtual void OnUnhandledException() override
  {
    wxApp::OnUnhandledException();
    if (*m_wxAppExtOnUnhandledException != NULL){
      return m_wxAppExtOnUnhandledException(this);
    }
  }
  wxAppExtPendingFunc m_wxAppExtPending = NULL;
  virtual bool Pending() override
  {
    bool res = wxApp::Pending();
    if (*m_wxAppExtPending != NULL){
      return m_wxAppExtPending(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtProcessEvent__wxEventRFunc m_wxAppExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxApp::ProcessEvent(event);
    if (*m_wxAppExtProcessEvent__wxEventR != NULL){
      return m_wxAppExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppExtProcessIdleFunc m_wxAppExtProcessIdle = NULL;
  virtual bool ProcessIdle() override
  {
    bool res = wxApp::ProcessIdle();
    if (*m_wxAppExtProcessIdle != NULL){
      return m_wxAppExtProcessIdle(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtProcessPendingEventsFunc m_wxAppExtProcessPendingEvents = NULL;
  virtual void ProcessPendingEvents() override
  {
    wxApp::ProcessPendingEvents();
    if (*m_wxAppExtProcessPendingEvents != NULL){
      return m_wxAppExtProcessPendingEvents(this);
    }
  }
  wxAppExtQueueEvent__wxEventPFunc m_wxAppExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxApp::QueueEvent(event);
    if (*m_wxAppExtQueueEvent__wxEventP != NULL){
      return m_wxAppExtQueueEvent__wxEventP(this, event);
    }
  }
  wxAppExtRethrowStoredExceptionFunc m_wxAppExtRethrowStoredException = NULL;
  virtual void RethrowStoredException() override
  {
    wxApp::RethrowStoredException();
    if (*m_wxAppExtRethrowStoredException != NULL){
      return m_wxAppExtRethrowStoredException(this);
    }
  }
  wxAppExtSafeYield__wxWindowPboolFunc m_wxAppExtSafeYield__wxWindowPbool = NULL;
  virtual bool SafeYield(wxWindow* win, bool onlyIfNeeded) override
  {
    bool res = wxApp::SafeYield(win, onlyIfNeeded);
    if (*m_wxAppExtSafeYield__wxWindowPbool != NULL){
      return m_wxAppExtSafeYield__wxWindowPbool(this, win, onlyIfNeeded, res);
    }
    else {
      return res;
    }
  }
  wxAppExtSafeYieldFor__wxWindowPlongFunc m_wxAppExtSafeYieldFor__wxWindowPlong = NULL;
  virtual bool SafeYieldFor(wxWindow* win, long eventsToProcess) override
  {
    bool res = wxApp::SafeYieldFor(win, eventsToProcess);
    if (*m_wxAppExtSafeYieldFor__wxWindowPlong != NULL){
      return m_wxAppExtSafeYieldFor__wxWindowPlong(this, win, eventsToProcess, res);
    }
    else {
      return res;
    }
  }
  wxAppExtSearchEventTable__wxEventTableRwxEventRFunc m_wxAppExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxApp::SearchEventTable(table, event);
    if (*m_wxAppExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxAppExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxAppExtSetActive__boolwxWindowPFunc m_wxAppExtSetActive__boolwxWindowP = NULL;
  virtual void SetActive(bool isActive, wxWindow* lastFocus) override
  {
    wxApp::SetActive(isActive, lastFocus);
    if (*m_wxAppExtSetActive__boolwxWindowP != NULL){
      return m_wxAppExtSetActive__boolwxWindowP(this, isActive, lastFocus);
    }
  }
  wxAppExtSetCLocaleFunc m_wxAppExtSetCLocale = NULL;
  virtual void SetCLocale() override
  {
    wxApp::SetCLocale();
    if (*m_wxAppExtSetCLocale != NULL){
      return m_wxAppExtSetCLocale(this);
    }
  }
  wxAppExtSetDisplayMode__wxVideoModeCRFunc m_wxAppExtSetDisplayMode__wxVideoModeCR = NULL;
  virtual bool SetDisplayMode(wxVideoMode const& info) override
  {
    bool res = wxApp::SetDisplayMode(info);
    if (*m_wxAppExtSetDisplayMode__wxVideoModeCR != NULL){
      return m_wxAppExtSetDisplayMode__wxVideoModeCR(this, info, res);
    }
    else {
      return res;
    }
  }
  wxAppExtSetNativeTheme__wxStringCRFunc m_wxAppExtSetNativeTheme__wxStringCR = NULL;
  virtual bool SetNativeTheme(wxString const& theme) override
  {
    bool res = wxApp::SetNativeTheme(theme);
    if (*m_wxAppExtSetNativeTheme__wxStringCR != NULL){
      return m_wxAppExtSetNativeTheme__wxStringCR(this, theme, res);
    }
    else {
      return res;
    }
  }
  wxAppExtSetNextHandler__wxEvtHandlerPFunc m_wxAppExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxApp::SetNextHandler(handler);
    if (*m_wxAppExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxAppExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAppExtSetPreviousHandler__wxEvtHandlerPFunc m_wxAppExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxApp::SetPreviousHandler(handler);
    if (*m_wxAppExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxAppExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxAppExtSetPrintMode__intFunc m_wxAppExtSetPrintMode__int = NULL;
  virtual void SetPrintMode(int mode) override
  {
    wxApp::SetPrintMode(mode);
    if (*m_wxAppExtSetPrintMode__int != NULL){
      return m_wxAppExtSetPrintMode__int(this, mode);
    }
  }
  wxAppExtStoreCurrentExceptionFunc m_wxAppExtStoreCurrentException = NULL;
  virtual bool StoreCurrentException() override
  {
    bool res = wxApp::StoreCurrentException();
    if (*m_wxAppExtStoreCurrentException != NULL){
      return m_wxAppExtStoreCurrentException(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtTryAfter__wxEventRFunc m_wxAppExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxApp::TryAfter(event);
    if (*m_wxAppExtTryAfter__wxEventR != NULL){
      return m_wxAppExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppExtTryBefore__wxEventRFunc m_wxAppExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxApp::TryBefore(event);
    if (*m_wxAppExtTryBefore__wxEventR != NULL){
      return m_wxAppExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppExtUsesEventLoopFunc m_wxAppExtUsesEventLoop = NULL;
  virtual bool UsesEventLoop() const override
  {
    bool res = wxApp::UsesEventLoop();
    if (*m_wxAppExtUsesEventLoop != NULL){
      return m_wxAppExtUsesEventLoop(this, res);
    }
    else {
      return res;
    }
  }
  wxAppExtWXReservedApp1__voidPFunc m_wxAppExtWXReservedApp1__voidP = NULL;
  virtual void* WXReservedApp1(void* param0) override
  {
    void* res = wxApp::WXReservedApp1(param0);
    if (*m_wxAppExtWXReservedApp1__voidP != NULL){
      return m_wxAppExtWXReservedApp1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppExtWXReservedApp2__voidPFunc m_wxAppExtWXReservedApp2__voidP = NULL;
  virtual void* WXReservedApp2(void* param0) override
  {
    void* res = wxApp::WXReservedApp2(param0);
    if (*m_wxAppExtWXReservedApp2__voidP != NULL){
      return m_wxAppExtWXReservedApp2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppExtWXReservedEvtHandler1__voidPFunc m_wxAppExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxApp::WXReservedEvtHandler1(param0);
    if (*m_wxAppExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxAppExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppExtWXReservedEvtHandler2__voidPFunc m_wxAppExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxApp::WXReservedEvtHandler2(param0);
    if (*m_wxAppExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxAppExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppExtWakeUpIdleFunc m_wxAppExtWakeUpIdle = NULL;
  virtual void WakeUpIdle() override
  {
    wxApp::WakeUpIdle();
    if (*m_wxAppExtWakeUpIdle != NULL){
      return m_wxAppExtWakeUpIdle(this);
    }
  }
  wxAppExt(wxAppExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxAppExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventRFunc a_CallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR, wxAppExtCallOnInitFunc a_CallOnInit, wxAppExtCleanUpFunc a_CleanUp, wxAppExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxAppExtCreateRefDataFunc a_CreateRefData, wxAppExtCreateTraitsFunc a_CreateTraits, wxAppExtDispatchFunc a_Dispatch, wxAppExtDoGetClientDataFunc a_DoGetClientData, wxAppExtDoGetClientObjectFunc a_DoGetClientObject, wxAppExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxAppExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxAppExtExitFunc a_Exit, wxAppExtExitMainLoopFunc a_ExitMainLoop, wxAppExtFilterEvent__wxEventRFunc a_FilterEvent__wxEventR, wxAppExtGetClassInfoFunc a_GetClassInfo, wxAppExtGetDisplayModeFunc a_GetDisplayMode, wxAppExtGetEventHashTableFunc a_GetEventHashTable, wxAppExtGetEventTableFunc a_GetEventTable, wxAppExtGetLayoutDirectionFunc a_GetLayoutDirection, wxAppExtGetPrintModeFunc a_GetPrintMode, wxAppExtGetTopWindowFunc a_GetTopWindow, wxAppExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventRFunc a_HandleEvent__wxEvtHandlerPwxEventFunctionwxEventR, wxAppExtInitialize__intRwxCharPPFunc a_Initialize__intRwxCharPP, wxAppExtIsActiveFunc a_IsActive, wxAppExtIsGUIFunc a_IsGUI, wxAppExtMainLoopFunc a_MainLoop, wxAppExtOnAssert__wxCharCPintwxCharCPwxCharCPFunc a_OnAssert__wxCharCPintwxCharCPwxCharCP, wxAppExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCPFunc a_OnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP, wxAppExtOnCmdLineError__wxCmdLineParserRFunc a_OnCmdLineError__wxCmdLineParserR, wxAppExtOnCmdLineHelp__wxCmdLineParserRFunc a_OnCmdLineHelp__wxCmdLineParserR, wxAppExtOnCmdLineParsed__wxCmdLineParserRFunc a_OnCmdLineParsed__wxCmdLineParserR, wxAppExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxAppExtOnEventLoopEnter__wxEventLoopBasePFunc a_OnEventLoopEnter__wxEventLoopBaseP, wxAppExtOnEventLoopExit__wxEventLoopBasePFunc a_OnEventLoopExit__wxEventLoopBaseP, wxAppExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppExtOnExitFunc a_OnExit, wxAppExtOnFatalExceptionFunc a_OnFatalException, wxAppExtOnInitFunc a_OnInit, wxAppExtOnInitCmdLine__wxCmdLineParserRFunc a_OnInitCmdLine__wxCmdLineParserR, wxAppExtOnInitGuiFunc a_OnInitGui, wxAppExtOnLaunchedFunc a_OnLaunched, wxAppExtOnRunFunc a_OnRun, wxAppExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppExtPendingFunc a_Pending, wxAppExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxAppExtProcessIdleFunc a_ProcessIdle, wxAppExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxAppExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppExtSafeYield__wxWindowPboolFunc a_SafeYield__wxWindowPbool, wxAppExtSafeYieldFor__wxWindowPlongFunc a_SafeYieldFor__wxWindowPlong, wxAppExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxAppExtSetActive__boolwxWindowPFunc a_SetActive__boolwxWindowP, wxAppExtSetCLocaleFunc a_SetCLocale, wxAppExtSetDisplayMode__wxVideoModeCRFunc a_SetDisplayMode__wxVideoModeCR, wxAppExtSetNativeTheme__wxStringCRFunc a_SetNativeTheme__wxStringCR, wxAppExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxAppExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxAppExtSetPrintMode__intFunc a_SetPrintMode__int, wxAppExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxAppExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxAppExtUsesEventLoopFunc a_UsesEventLoop, wxAppExtWXReservedApp1__voidPFunc a_WXReservedApp1__voidP, wxAppExtWXReservedApp2__voidPFunc a_WXReservedApp2__voidP, wxAppExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxAppExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP, wxAppExtWakeUpIdleFunc a_WakeUpIdle): wxApp() {
    m_wxAppExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxAppExtCallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR = a_CallEventHandler__wxEvtHandlerPwxEventFunctorRwxEventR;
    m_wxAppExtCallOnInit = a_CallOnInit;
    m_wxAppExtCleanUp = a_CleanUp;
    m_wxAppExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxAppExtCreateRefData = a_CreateRefData;
    m_wxAppExtCreateTraits = a_CreateTraits;
    m_wxAppExtDispatch = a_Dispatch;
    m_wxAppExtDoGetClientData = a_DoGetClientData;
    m_wxAppExtDoGetClientObject = a_DoGetClientObject;
    m_wxAppExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxAppExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxAppExtExit = a_Exit;
    m_wxAppExtExitMainLoop = a_ExitMainLoop;
    m_wxAppExtFilterEvent__wxEventR = a_FilterEvent__wxEventR;
    m_wxAppExtGetClassInfo = a_GetClassInfo;
    m_wxAppExtGetDisplayMode = a_GetDisplayMode;
    m_wxAppExtGetEventHashTable = a_GetEventHashTable;
    m_wxAppExtGetEventTable = a_GetEventTable;
    m_wxAppExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxAppExtGetPrintMode = a_GetPrintMode;
    m_wxAppExtGetTopWindow = a_GetTopWindow;
    m_wxAppExtHandleEvent__wxEvtHandlerPwxEventFunctionwxEventR = a_HandleEvent__wxEvtHandlerPwxEventFunctionwxEventR;
    m_wxAppExtInitialize__intRwxCharPP = a_Initialize__intRwxCharPP;
    m_wxAppExtIsActive = a_IsActive;
    m_wxAppExtIsGUI = a_IsGUI;
    m_wxAppExtMainLoop = a_MainLoop;
    m_wxAppExtOnAssert__wxCharCPintwxCharCPwxCharCP = a_OnAssert__wxCharCPintwxCharCPwxCharCP;
    m_wxAppExtOnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP = a_OnAssertFailure__wxCharCPintwxCharCPwxCharCPwxCharCP;
    m_wxAppExtOnCmdLineError__wxCmdLineParserR = a_OnCmdLineError__wxCmdLineParserR;
    m_wxAppExtOnCmdLineHelp__wxCmdLineParserR = a_OnCmdLineHelp__wxCmdLineParserR;
    m_wxAppExtOnCmdLineParsed__wxCmdLineParserR = a_OnCmdLineParsed__wxCmdLineParserR;
    m_wxAppExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxAppExtOnEventLoopEnter__wxEventLoopBaseP = a_OnEventLoopEnter__wxEventLoopBaseP;
    m_wxAppExtOnEventLoopExit__wxEventLoopBaseP = a_OnEventLoopExit__wxEventLoopBaseP;
    m_wxAppExtOnExceptionInMainLoop = a_OnExceptionInMainLoop;
    m_wxAppExtOnExit = a_OnExit;
    m_wxAppExtOnFatalException = a_OnFatalException;
    m_wxAppExtOnInit = a_OnInit;
    m_wxAppExtOnInitCmdLine__wxCmdLineParserR = a_OnInitCmdLine__wxCmdLineParserR;
    m_wxAppExtOnInitGui = a_OnInitGui;
    m_wxAppExtOnLaunched = a_OnLaunched;
    m_wxAppExtOnRun = a_OnRun;
    m_wxAppExtOnUnhandledException = a_OnUnhandledException;
    m_wxAppExtPending = a_Pending;
    m_wxAppExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxAppExtProcessIdle = a_ProcessIdle;
    m_wxAppExtProcessPendingEvents = a_ProcessPendingEvents;
    m_wxAppExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxAppExtRethrowStoredException = a_RethrowStoredException;
    m_wxAppExtSafeYield__wxWindowPbool = a_SafeYield__wxWindowPbool;
    m_wxAppExtSafeYieldFor__wxWindowPlong = a_SafeYieldFor__wxWindowPlong;
    m_wxAppExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxAppExtSetActive__boolwxWindowP = a_SetActive__boolwxWindowP;
    m_wxAppExtSetCLocale = a_SetCLocale;
    m_wxAppExtSetDisplayMode__wxVideoModeCR = a_SetDisplayMode__wxVideoModeCR;
    m_wxAppExtSetNativeTheme__wxStringCR = a_SetNativeTheme__wxStringCR;
    m_wxAppExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxAppExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxAppExtSetPrintMode__int = a_SetPrintMode__int;
    m_wxAppExtStoreCurrentException = a_StoreCurrentException;
    m_wxAppExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxAppExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxAppExtUsesEventLoop = a_UsesEventLoop;
    m_wxAppExtWXReservedApp1__voidP = a_WXReservedApp1__voidP;
    m_wxAppExtWXReservedApp2__voidP = a_WXReservedApp2__voidP;
    m_wxAppExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxAppExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
    m_wxAppExtWakeUpIdle = a_WakeUpIdle;
  }
};



#endif
