#ifndef _WX_APP_H_EXT_
#define _WX_APP_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxAppConsoleBaseExt;
typedef void (*wxAppConsoleBaseExtAddPendingEventwxEventCRFunc)(const wxAppConsoleBaseExt* self, wxEvent const& event);
typedef void (*wxAppConsoleBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event);
typedef bool (*wxAppConsoleBaseExtCallOnInitFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef void (*wxAppConsoleBaseExtCleanUpFunc)(const wxAppConsoleBaseExt* self);
typedef wxObjectRefData* (*wxAppConsoleBaseExtCloneRefDatawxObjectRefDataCPFunc)(const wxAppConsoleBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxAppConsoleBaseExtCreateRefDataFunc)(const wxAppConsoleBaseExt* self, wxObjectRefData* res);
typedef wxAppTraits* (*wxAppConsoleBaseExtCreateTraitsFunc)(const wxAppConsoleBaseExt* self, wxAppTraits* res);
typedef bool (*wxAppConsoleBaseExtDispatchFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef void* (*wxAppConsoleBaseExtDoGetClientDataFunc)(const wxAppConsoleBaseExt* self, void* res);
typedef wxClientData* (*wxAppConsoleBaseExtDoGetClientObjectFunc)(const wxAppConsoleBaseExt* self, wxClientData* res);
typedef void (*wxAppConsoleBaseExtDoSetClientDatavoidPFunc)(const wxAppConsoleBaseExt* self, void* data);
typedef void (*wxAppConsoleBaseExtDoSetClientObjectwxClientDataPFunc)(const wxAppConsoleBaseExt* self, wxClientData* data);
typedef void (*wxAppConsoleBaseExtExitFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtExitMainLoopFunc)(const wxAppConsoleBaseExt* self);
typedef int (*wxAppConsoleBaseExtFilterEventwxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvent& event);
typedef wxClassInfo* (*wxAppConsoleBaseExtGetClassInfoFunc)(const wxAppConsoleBaseExt* self, wxClassInfo* res);
typedef wxEventHashTable& (*wxAppConsoleBaseExtGetEventHashTableFunc)(const wxAppConsoleBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxAppConsoleBaseExtGetEventTableFunc)(const wxAppConsoleBaseExt* self, wxEventTable const* res);
typedef void (*wxAppConsoleBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvtHandler* handler, wxEventFunction func, wxEvent& event);
typedef bool (*wxAppConsoleBaseExtInitializeintRwxCharPPFunc)(const wxAppConsoleBaseExt* self, int& argc, wxChar** argv, bool res);
typedef bool (*wxAppConsoleBaseExtIsGUIFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef int (*wxAppConsoleBaseExtMainLoopFunc)(const wxAppConsoleBaseExt* self, int res);
typedef void (*wxAppConsoleBaseExtOnAssertwxCharCPintwxCharCPwxCharCPFunc)(const wxAppConsoleBaseExt* self, wxChar const* file, int line, wxChar const* cond, wxChar const* msg);
typedef void (*wxAppConsoleBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc)(const wxAppConsoleBaseExt* self, wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg);
typedef bool (*wxAppConsoleBaseExtOnCmdLineErrorwxCmdLineParserRFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleBaseExtOnCmdLineHelpwxCmdLineParserRFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleBaseExtOnCmdLineParsedwxCmdLineParserRFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxAppConsoleBaseExt* self, wxDynamicEventTableEntry& param0, bool res);
typedef void (*wxAppConsoleBaseExtOnEventLoopEnterwxEventLoopBasePFunc)(const wxAppConsoleBaseExt* self, wxEventLoopBase* param0);
typedef void (*wxAppConsoleBaseExtOnEventLoopExitwxEventLoopBasePFunc)(const wxAppConsoleBaseExt* self, wxEventLoopBase* param0);
typedef bool (*wxAppConsoleBaseExtOnExceptionInMainLoopFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef int (*wxAppConsoleBaseExtOnExitFunc)(const wxAppConsoleBaseExt* self, int res);
typedef void (*wxAppConsoleBaseExtOnFatalExceptionFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtOnInitFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef void (*wxAppConsoleBaseExtOnInitCmdLinewxCmdLineParserRFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser);
typedef void (*wxAppConsoleBaseExtOnLaunchedFunc)(const wxAppConsoleBaseExt* self);
typedef int (*wxAppConsoleBaseExtOnRunFunc)(const wxAppConsoleBaseExt* self, int res);
typedef void (*wxAppConsoleBaseExtOnUnhandledExceptionFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtPendingFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef bool (*wxAppConsoleBaseExtProcessEventwxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleBaseExtProcessIdleFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef void (*wxAppConsoleBaseExtProcessPendingEventsFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtQueueEventwxEventPFunc)(const wxAppConsoleBaseExt* self, wxEvent* event);
typedef void (*wxAppConsoleBaseExtRethrowStoredExceptionFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtSearchEventTablewxEventTableRwxEventRFunc)(const wxAppConsoleBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxAppConsoleBaseExtSetCLocaleFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtSetNextHandlerwxEvtHandlerPFunc)(const wxAppConsoleBaseExt* self, wxEvtHandler* handler);
typedef void (*wxAppConsoleBaseExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxAppConsoleBaseExt* self, wxEvtHandler* handler);
typedef bool (*wxAppConsoleBaseExtStoreCurrentExceptionFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef bool (*wxAppConsoleBaseExtTryAfterwxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleBaseExtTryBeforewxEventRFunc)(const wxAppConsoleBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleBaseExtUsesEventLoopFunc)(const wxAppConsoleBaseExt* self, bool res);
typedef void* (*wxAppConsoleBaseExtWXReservedApp1voidPFunc)(const wxAppConsoleBaseExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleBaseExtWXReservedApp2voidPFunc)(const wxAppConsoleBaseExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleBaseExtWXReservedEvtHandler1voidPFunc)(const wxAppConsoleBaseExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleBaseExtWXReservedEvtHandler2voidPFunc)(const wxAppConsoleBaseExt* self, void* param0, void* res);
typedef void (*wxAppConsoleBaseExtWakeUpIdleFunc)(const wxAppConsoleBaseExt* self);
class wxAppConsoleExt;
typedef void (*wxAppConsoleExtAddPendingEventwxEventCRFunc)(const wxAppConsoleExt* self, wxEvent const& event);
typedef void (*wxAppConsoleExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc)(const wxAppConsoleExt* self, wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event);
typedef bool (*wxAppConsoleExtCallOnInitFunc)(const wxAppConsoleExt* self, bool res);
typedef void (*wxAppConsoleExtCleanUpFunc)(const wxAppConsoleExt* self);
typedef wxObjectRefData* (*wxAppConsoleExtCloneRefDatawxObjectRefDataCPFunc)(const wxAppConsoleExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxAppConsoleExtCreateRefDataFunc)(const wxAppConsoleExt* self, wxObjectRefData* res);
typedef wxAppTraits* (*wxAppConsoleExtCreateTraitsFunc)(const wxAppConsoleExt* self, wxAppTraits* res);
typedef bool (*wxAppConsoleExtDispatchFunc)(const wxAppConsoleExt* self, bool res);
typedef void* (*wxAppConsoleExtDoGetClientDataFunc)(const wxAppConsoleExt* self, void* res);
typedef wxClientData* (*wxAppConsoleExtDoGetClientObjectFunc)(const wxAppConsoleExt* self, wxClientData* res);
typedef void (*wxAppConsoleExtDoSetClientDatavoidPFunc)(const wxAppConsoleExt* self, void* data);
typedef void (*wxAppConsoleExtDoSetClientObjectwxClientDataPFunc)(const wxAppConsoleExt* self, wxClientData* data);
typedef void (*wxAppConsoleExtExitFunc)(const wxAppConsoleExt* self);
typedef void (*wxAppConsoleExtExitMainLoopFunc)(const wxAppConsoleExt* self);
typedef int (*wxAppConsoleExtFilterEventwxEventRFunc)(const wxAppConsoleExt* self, wxEvent& event, int res);
typedef wxClassInfo* (*wxAppConsoleExtGetClassInfoFunc)(const wxAppConsoleExt* self, wxClassInfo* res);
typedef wxEventHashTable& (*wxAppConsoleExtGetEventHashTableFunc)(const wxAppConsoleExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxAppConsoleExtGetEventTableFunc)(const wxAppConsoleExt* self, wxEventTable const* res);
typedef void (*wxAppConsoleExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc)(const wxAppConsoleExt* self, wxEvtHandler* handler, wxEventFunction func, wxEvent& event);
typedef bool (*wxAppConsoleExtInitializeintRwxCharPPFunc)(const wxAppConsoleExt* self, int& argc, wxChar** argv, bool res);
typedef bool (*wxAppConsoleExtIsGUIFunc)(const wxAppConsoleExt* self, bool res);
typedef int (*wxAppConsoleExtMainLoopFunc)(const wxAppConsoleExt* self, int res);
typedef void (*wxAppConsoleExtOnAssertwxCharCPintwxCharCPwxCharCPFunc)(const wxAppConsoleExt* self, wxChar const* file, int line, wxChar const* cond, wxChar const* msg);
typedef void (*wxAppConsoleExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc)(const wxAppConsoleExt* self, wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg);
typedef bool (*wxAppConsoleExtOnCmdLineErrorwxCmdLineParserRFunc)(const wxAppConsoleExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleExtOnCmdLineHelpwxCmdLineParserRFunc)(const wxAppConsoleExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleExtOnCmdLineParsedwxCmdLineParserRFunc)(const wxAppConsoleExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppConsoleExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxAppConsoleExt* self, wxDynamicEventTableEntry& param0, bool res);
typedef void (*wxAppConsoleExtOnEventLoopEnterwxEventLoopBasePFunc)(const wxAppConsoleExt* self, wxEventLoopBase* param0);
typedef void (*wxAppConsoleExtOnEventLoopExitwxEventLoopBasePFunc)(const wxAppConsoleExt* self, wxEventLoopBase* param0);
typedef bool (*wxAppConsoleExtOnExceptionInMainLoopFunc)(const wxAppConsoleExt* self, bool res);
typedef int (*wxAppConsoleExtOnExitFunc)(const wxAppConsoleExt* self, int res);
typedef void (*wxAppConsoleExtOnFatalExceptionFunc)(const wxAppConsoleExt* self);
typedef bool (*wxAppConsoleExtOnInitFunc)(const wxAppConsoleExt* self, bool res);
typedef void (*wxAppConsoleExtOnInitCmdLinewxCmdLineParserRFunc)(const wxAppConsoleExt* self, wxCmdLineParser& parser);
typedef void (*wxAppConsoleExtOnLaunchedFunc)(const wxAppConsoleExt* self);
typedef int (*wxAppConsoleExtOnRunFunc)(const wxAppConsoleExt* self, int res);
typedef void (*wxAppConsoleExtOnUnhandledExceptionFunc)(const wxAppConsoleExt* self);
typedef bool (*wxAppConsoleExtPendingFunc)(const wxAppConsoleExt* self, bool res);
typedef bool (*wxAppConsoleExtProcessEventwxEventRFunc)(const wxAppConsoleExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleExtProcessIdleFunc)(const wxAppConsoleExt* self, bool res);
typedef void (*wxAppConsoleExtProcessPendingEventsFunc)(const wxAppConsoleExt* self);
typedef void (*wxAppConsoleExtQueueEventwxEventPFunc)(const wxAppConsoleExt* self, wxEvent* event);
typedef void (*wxAppConsoleExtRethrowStoredExceptionFunc)(const wxAppConsoleExt* self);
typedef bool (*wxAppConsoleExtSearchEventTablewxEventTableRwxEventRFunc)(const wxAppConsoleExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxAppConsoleExtSetCLocaleFunc)(const wxAppConsoleExt* self);
typedef void (*wxAppConsoleExtSetNextHandlerwxEvtHandlerPFunc)(const wxAppConsoleExt* self, wxEvtHandler* handler);
typedef void (*wxAppConsoleExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxAppConsoleExt* self, wxEvtHandler* handler);
typedef bool (*wxAppConsoleExtStoreCurrentExceptionFunc)(const wxAppConsoleExt* self, bool res);
typedef bool (*wxAppConsoleExtTryAfterwxEventRFunc)(const wxAppConsoleExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleExtTryBeforewxEventRFunc)(const wxAppConsoleExt* self, wxEvent& event, bool res);
typedef bool (*wxAppConsoleExtUsesEventLoopFunc)(const wxAppConsoleExt* self, bool res);
typedef void* (*wxAppConsoleExtWXReservedApp1voidPFunc)(const wxAppConsoleExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleExtWXReservedApp2voidPFunc)(const wxAppConsoleExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleExtWXReservedEvtHandler1voidPFunc)(const wxAppConsoleExt* self, void* param0, void* res);
typedef void* (*wxAppConsoleExtWXReservedEvtHandler2voidPFunc)(const wxAppConsoleExt* self, void* param0, void* res);
typedef void (*wxAppConsoleExtWakeUpIdleFunc)(const wxAppConsoleExt* self);
class wxAppBaseExt;
typedef void (*wxAppBaseExtAddPendingEventwxEventCRFunc)(const wxAppBaseExt* self, wxEvent const& event);
typedef void (*wxAppBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc)(const wxAppBaseExt* self, wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event);
typedef bool (*wxAppBaseExtCallOnInitFunc)(const wxAppBaseExt* self, bool res);
typedef void (*wxAppBaseExtCleanUpFunc)(const wxAppBaseExt* self);
typedef wxObjectRefData* (*wxAppBaseExtCloneRefDatawxObjectRefDataCPFunc)(const wxAppBaseExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxAppBaseExtCreateRefDataFunc)(const wxAppBaseExt* self, wxObjectRefData* res);
typedef wxAppTraits* (*wxAppBaseExtCreateTraitsFunc)(const wxAppBaseExt* self, wxAppTraits* res);
typedef bool (*wxAppBaseExtDispatchFunc)(const wxAppBaseExt* self, bool res);
typedef void* (*wxAppBaseExtDoGetClientDataFunc)(const wxAppBaseExt* self, void* res);
typedef wxClientData* (*wxAppBaseExtDoGetClientObjectFunc)(const wxAppBaseExt* self, wxClientData* res);
typedef void (*wxAppBaseExtDoSetClientDatavoidPFunc)(const wxAppBaseExt* self, void* data);
typedef void (*wxAppBaseExtDoSetClientObjectwxClientDataPFunc)(const wxAppBaseExt* self, wxClientData* data);
typedef void (*wxAppBaseExtExitFunc)(const wxAppBaseExt* self);
typedef void (*wxAppBaseExtExitMainLoopFunc)(const wxAppBaseExt* self);
typedef int (*wxAppBaseExtFilterEventwxEventRFunc)(const wxAppBaseExt* self, wxEvent& event, int res);
typedef wxClassInfo* (*wxAppBaseExtGetClassInfoFunc)(const wxAppBaseExt* self, wxClassInfo* res);
typedef wxVideoMode (*wxAppBaseExtGetDisplayModeFunc)(const wxAppBaseExt* self, wxVideoMode res);
typedef wxEventHashTable& (*wxAppBaseExtGetEventHashTableFunc)(const wxAppBaseExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxAppBaseExtGetEventTableFunc)(const wxAppBaseExt* self, wxEventTable const* res);
typedef wxLayoutDirection (*wxAppBaseExtGetLayoutDirectionFunc)(const wxAppBaseExt* self, wxLayoutDirection res);
typedef wxWindow* (*wxAppBaseExtGetTopWindowFunc)(const wxAppBaseExt* self, wxWindow* res);
typedef void (*wxAppBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc)(const wxAppBaseExt* self, wxEvtHandler* handler, wxEventFunction func, wxEvent& event);
typedef bool (*wxAppBaseExtInitializeintRwxCharPPFunc)(const wxAppBaseExt* self, int& argc, wxChar** argv, bool res);
typedef bool (*wxAppBaseExtIsActiveFunc)(const wxAppBaseExt* self, bool res);
typedef bool (*wxAppBaseExtIsGUIFunc)(const wxAppBaseExt* self, bool res);
typedef int (*wxAppBaseExtMainLoopFunc)(const wxAppBaseExt* self, int res);
typedef void (*wxAppBaseExtOnAssertwxCharCPintwxCharCPwxCharCPFunc)(const wxAppBaseExt* self, wxChar const* file, int line, wxChar const* cond, wxChar const* msg);
typedef void (*wxAppBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc)(const wxAppBaseExt* self, wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg);
typedef bool (*wxAppBaseExtOnCmdLineErrorwxCmdLineParserRFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppBaseExtOnCmdLineHelpwxCmdLineParserRFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppBaseExtOnCmdLineParsedwxCmdLineParserRFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxAppBaseExt* self, wxDynamicEventTableEntry& param0, bool res);
typedef void (*wxAppBaseExtOnEventLoopEnterwxEventLoopBasePFunc)(const wxAppBaseExt* self, wxEventLoopBase* param0);
typedef void (*wxAppBaseExtOnEventLoopExitwxEventLoopBasePFunc)(const wxAppBaseExt* self, wxEventLoopBase* param0);
typedef bool (*wxAppBaseExtOnExceptionInMainLoopFunc)(const wxAppBaseExt* self, bool res);
typedef int (*wxAppBaseExtOnExitFunc)(const wxAppBaseExt* self, int res);
typedef void (*wxAppBaseExtOnFatalExceptionFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtOnInitFunc)(const wxAppBaseExt* self, bool res);
typedef void (*wxAppBaseExtOnInitCmdLinewxCmdLineParserRFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppBaseExtOnInitGuiFunc)(const wxAppBaseExt* self, bool res);
typedef void (*wxAppBaseExtOnLaunchedFunc)(const wxAppBaseExt* self);
typedef int (*wxAppBaseExtOnRunFunc)(const wxAppBaseExt* self, int res);
typedef void (*wxAppBaseExtOnUnhandledExceptionFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtPendingFunc)(const wxAppBaseExt* self, bool res);
typedef bool (*wxAppBaseExtProcessEventwxEventRFunc)(const wxAppBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppBaseExtProcessIdleFunc)(const wxAppBaseExt* self, bool res);
typedef void (*wxAppBaseExtProcessPendingEventsFunc)(const wxAppBaseExt* self);
typedef void (*wxAppBaseExtQueueEventwxEventPFunc)(const wxAppBaseExt* self, wxEvent* event);
typedef void (*wxAppBaseExtRethrowStoredExceptionFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtSafeYieldwxWindowPboolFunc)(const wxAppBaseExt* self, wxWindow* win, bool onlyIfNeeded, bool res);
typedef bool (*wxAppBaseExtSafeYieldForwxWindowPlongFunc)(const wxAppBaseExt* self, wxWindow* win, long eventsToProcess, bool res);
typedef bool (*wxAppBaseExtSearchEventTablewxEventTableRwxEventRFunc)(const wxAppBaseExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxAppBaseExtSetActiveboolwxWindowPFunc)(const wxAppBaseExt* self, bool isActive, wxWindow* lastFocus);
typedef void (*wxAppBaseExtSetCLocaleFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtSetDisplayModewxVideoModeCRFunc)(const wxAppBaseExt* self, wxVideoMode const& param0, bool res);
typedef bool (*wxAppBaseExtSetNativeThemewxStringCRFunc)(const wxAppBaseExt* self, wxString const& param0, bool res);
typedef void (*wxAppBaseExtSetNextHandlerwxEvtHandlerPFunc)(const wxAppBaseExt* self, wxEvtHandler* handler);
typedef void (*wxAppBaseExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxAppBaseExt* self, wxEvtHandler* handler);
typedef void (*wxAppBaseExtSetPrintModeintFunc)(const wxAppBaseExt* self, int param0);
typedef bool (*wxAppBaseExtStoreCurrentExceptionFunc)(const wxAppBaseExt* self, bool res);
typedef bool (*wxAppBaseExtTryAfterwxEventRFunc)(const wxAppBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppBaseExtTryBeforewxEventRFunc)(const wxAppBaseExt* self, wxEvent& event, bool res);
typedef bool (*wxAppBaseExtUsesEventLoopFunc)(const wxAppBaseExt* self, bool res);
typedef void* (*wxAppBaseExtWXReservedApp1voidPFunc)(const wxAppBaseExt* self, void* param0, void* res);
typedef void* (*wxAppBaseExtWXReservedApp2voidPFunc)(const wxAppBaseExt* self, void* param0, void* res);
typedef void* (*wxAppBaseExtWXReservedEvtHandler1voidPFunc)(const wxAppBaseExt* self, void* param0, void* res);
typedef void* (*wxAppBaseExtWXReservedEvtHandler2voidPFunc)(const wxAppBaseExt* self, void* param0, void* res);
typedef void (*wxAppBaseExtWakeUpIdleFunc)(const wxAppBaseExt* self);
class wxAppExt;
typedef void (*wxAppExtAddPendingEventwxEventCRFunc)(const wxAppExt* self, wxEvent const& event);
typedef void (*wxAppExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc)(const wxAppExt* self, wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event);
typedef bool (*wxAppExtCallOnInitFunc)(const wxAppExt* self, bool res);
typedef void (*wxAppExtCleanUpFunc)(const wxAppExt* self);
typedef wxObjectRefData* (*wxAppExtCloneRefDatawxObjectRefDataCPFunc)(const wxAppExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxAppExtCreateRefDataFunc)(const wxAppExt* self, wxObjectRefData* res);
typedef wxAppTraits* (*wxAppExtCreateTraitsFunc)(const wxAppExt* self, wxAppTraits* res);
typedef bool (*wxAppExtDispatchFunc)(const wxAppExt* self, bool res);
typedef void* (*wxAppExtDoGetClientDataFunc)(const wxAppExt* self, void* res);
typedef wxClientData* (*wxAppExtDoGetClientObjectFunc)(const wxAppExt* self, wxClientData* res);
typedef void (*wxAppExtDoSetClientDatavoidPFunc)(const wxAppExt* self, void* data);
typedef void (*wxAppExtDoSetClientObjectwxClientDataPFunc)(const wxAppExt* self, wxClientData* data);
typedef void (*wxAppExtExitFunc)(const wxAppExt* self);
typedef void (*wxAppExtExitMainLoopFunc)(const wxAppExt* self);
typedef int (*wxAppExtFilterEventwxEventRFunc)(const wxAppExt* self, wxEvent& event, int res);
typedef wxClassInfo* (*wxAppExtGetClassInfoFunc)(const wxAppExt* self, wxClassInfo* res);
typedef wxVideoMode (*wxAppExtGetDisplayModeFunc)(const wxAppExt* self, wxVideoMode res);
typedef wxEventHashTable& (*wxAppExtGetEventHashTableFunc)(const wxAppExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxAppExtGetEventTableFunc)(const wxAppExt* self, wxEventTable const* res);
typedef wxLayoutDirection (*wxAppExtGetLayoutDirectionFunc)(const wxAppExt* self, wxLayoutDirection res);
typedef int (*wxAppExtGetPrintModeFunc)(const wxAppExt* self, int res);
typedef wxWindow* (*wxAppExtGetTopWindowFunc)(const wxAppExt* self, wxWindow* res);
typedef void (*wxAppExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc)(const wxAppExt* self, wxEvtHandler* handler, wxEventFunction func, wxEvent& event);
typedef bool (*wxAppExtInitializeintRwxCharPPFunc)(const wxAppExt* self, int& argc, wxChar** argv, bool res);
typedef bool (*wxAppExtIsActiveFunc)(const wxAppExt* self, bool res);
typedef bool (*wxAppExtIsGUIFunc)(const wxAppExt* self, bool res);
typedef int (*wxAppExtMainLoopFunc)(const wxAppExt* self, int res);
typedef void (*wxAppExtOnAssertwxCharCPintwxCharCPwxCharCPFunc)(const wxAppExt* self, wxChar const* file, int line, wxChar const* cond, wxChar const* msg);
typedef void (*wxAppExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc)(const wxAppExt* self, wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg);
typedef bool (*wxAppExtOnCmdLineErrorwxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppExtOnCmdLineHelpwxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppExtOnCmdLineParsedwxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser, bool res);
typedef bool (*wxAppExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxAppExt* self, wxDynamicEventTableEntry& param0, bool res);
typedef void (*wxAppExtOnEventLoopEnterwxEventLoopBasePFunc)(const wxAppExt* self, wxEventLoopBase* param0);
typedef void (*wxAppExtOnEventLoopExitwxEventLoopBasePFunc)(const wxAppExt* self, wxEventLoopBase* param0);
typedef bool (*wxAppExtOnExceptionInMainLoopFunc)(const wxAppExt* self, bool res);
typedef int (*wxAppExtOnExitFunc)(const wxAppExt* self, int res);
typedef void (*wxAppExtOnFatalExceptionFunc)(const wxAppExt* self);
typedef bool (*wxAppExtOnInitFunc)(const wxAppExt* self, bool res);
typedef void (*wxAppExtOnInitCmdLinewxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppExtOnInitGuiFunc)(const wxAppExt* self, bool res);
typedef void (*wxAppExtOnLaunchedFunc)(const wxAppExt* self);
typedef int (*wxAppExtOnRunFunc)(const wxAppExt* self, int res);
typedef void (*wxAppExtOnUnhandledExceptionFunc)(const wxAppExt* self);
typedef bool (*wxAppExtPendingFunc)(const wxAppExt* self, bool res);
typedef bool (*wxAppExtProcessEventwxEventRFunc)(const wxAppExt* self, wxEvent& event, bool res);
typedef bool (*wxAppExtProcessIdleFunc)(const wxAppExt* self, bool res);
typedef void (*wxAppExtProcessPendingEventsFunc)(const wxAppExt* self);
typedef void (*wxAppExtQueueEventwxEventPFunc)(const wxAppExt* self, wxEvent* event);
typedef void (*wxAppExtRethrowStoredExceptionFunc)(const wxAppExt* self);
typedef bool (*wxAppExtSafeYieldwxWindowPboolFunc)(const wxAppExt* self, wxWindow* win, bool onlyIfNeeded, bool res);
typedef bool (*wxAppExtSafeYieldForwxWindowPlongFunc)(const wxAppExt* self, wxWindow* win, long eventsToProcess, bool res);
typedef bool (*wxAppExtSearchEventTablewxEventTableRwxEventRFunc)(const wxAppExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxAppExtSetActiveboolwxWindowPFunc)(const wxAppExt* self, bool isActive, wxWindow* lastFocus);
typedef void (*wxAppExtSetCLocaleFunc)(const wxAppExt* self);
typedef bool (*wxAppExtSetDisplayModewxVideoModeCRFunc)(const wxAppExt* self, wxVideoMode const& param0, bool res);
typedef bool (*wxAppExtSetNativeThemewxStringCRFunc)(const wxAppExt* self, wxString const& param0, bool res);
typedef void (*wxAppExtSetNextHandlerwxEvtHandlerPFunc)(const wxAppExt* self, wxEvtHandler* handler);
typedef void (*wxAppExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxAppExt* self, wxEvtHandler* handler);
typedef void (*wxAppExtSetPrintModeintFunc)(const wxAppExt* self, int param0);
typedef bool (*wxAppExtStoreCurrentExceptionFunc)(const wxAppExt* self, bool res);
typedef bool (*wxAppExtTryAfterwxEventRFunc)(const wxAppExt* self, wxEvent& event, bool res);
typedef bool (*wxAppExtTryBeforewxEventRFunc)(const wxAppExt* self, wxEvent& event, bool res);
typedef bool (*wxAppExtUsesEventLoopFunc)(const wxAppExt* self, bool res);
typedef void* (*wxAppExtWXReservedApp1voidPFunc)(const wxAppExt* self, void* param0, void* res);
typedef void* (*wxAppExtWXReservedApp2voidPFunc)(const wxAppExt* self, void* param0, void* res);
typedef void* (*wxAppExtWXReservedEvtHandler1voidPFunc)(const wxAppExt* self, void* param0, void* res);
typedef void* (*wxAppExtWXReservedEvtHandler2voidPFunc)(const wxAppExt* self, void* param0, void* res);
typedef void (*wxAppExtWakeUpIdleFunc)(const wxAppExt* self);

class wxAppConsoleBaseExt: public wxAppConsoleBase
{
public:
  wxAppConsoleBaseExt(): wxAppConsoleBase()  {  }
  virtual ~wxAppConsoleBaseExt() override  {  }
  wxAppConsoleBaseExtAddPendingEventwxEventCRFunc m_wxAppConsoleBaseExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxAppConsoleBase::AddPendingEvent(event);
    if (*m_wxAppConsoleBaseExtAddPendingEventwxEventCR != NULL){
      return m_wxAppConsoleBaseExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxAppConsoleBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc m_wxAppConsoleBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR = NULL;
  virtual void CallEventHandler(wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event) const override
  {
    wxAppConsoleBase::CallEventHandler(handler, functor, event);
    if (*m_wxAppConsoleBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR != NULL){
      return m_wxAppConsoleBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR(this, handler, functor, event);
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
  wxAppConsoleBaseExtCloneRefDatawxObjectRefDataCPFunc m_wxAppConsoleBaseExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAppConsoleBase::CloneRefData(data);
    if (*m_wxAppConsoleBaseExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxAppConsoleBaseExtCloneRefDatawxObjectRefDataCP(this, data, res);
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
  wxAppConsoleBaseExtDoSetClientDatavoidPFunc m_wxAppConsoleBaseExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxAppConsoleBase::DoSetClientData(data);
    if (*m_wxAppConsoleBaseExtDoSetClientDatavoidP != NULL){
      return m_wxAppConsoleBaseExtDoSetClientDatavoidP(this, data);
    }
  }
  wxAppConsoleBaseExtDoSetClientObjectwxClientDataPFunc m_wxAppConsoleBaseExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxAppConsoleBase::DoSetClientObject(data);
    if (*m_wxAppConsoleBaseExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxAppConsoleBaseExtDoSetClientObjectwxClientDataP(this, data);
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
  wxAppConsoleBaseExtFilterEventwxEventRFunc m_wxAppConsoleBaseExtFilterEventwxEventR = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    if (*m_wxAppConsoleBaseExtFilterEventwxEventR != NULL){
      return m_wxAppConsoleBaseExtFilterEventwxEventR(this, event);
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
  wxAppConsoleBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc m_wxAppConsoleBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR = NULL;
  virtual void HandleEvent(wxEvtHandler* handler, wxEventFunction func, wxEvent& event) const override
  {
    wxAppConsoleBase::HandleEvent(handler, func, event);
    if (*m_wxAppConsoleBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR != NULL){
      return m_wxAppConsoleBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR(this, handler, func, event);
    }
  }
  wxAppConsoleBaseExtInitializeintRwxCharPPFunc m_wxAppConsoleBaseExtInitializeintRwxCharPP = NULL;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxAppConsoleBase::Initialize(argc, argv);
    if (*m_wxAppConsoleBaseExtInitializeintRwxCharPP != NULL){
      return m_wxAppConsoleBaseExtInitializeintRwxCharPP(this, argc, argv, res);
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
  wxAppConsoleBaseExtOnAssertwxCharCPintwxCharCPwxCharCPFunc m_wxAppConsoleBaseExtOnAssertwxCharCPintwxCharCPwxCharCP = NULL;
  virtual void OnAssert(wxChar const* file, int line, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsoleBase::OnAssert(file, line, cond, msg);
    if (*m_wxAppConsoleBaseExtOnAssertwxCharCPintwxCharCPwxCharCP != NULL){
      return m_wxAppConsoleBaseExtOnAssertwxCharCPintwxCharCPwxCharCP(this, file, line, cond, msg);
    }
  }
  wxAppConsoleBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc m_wxAppConsoleBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP = NULL;
  virtual void OnAssertFailure(wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsoleBase::OnAssertFailure(file, line, func, cond, msg);
    if (*m_wxAppConsoleBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP != NULL){
      return m_wxAppConsoleBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP(this, file, line, func, cond, msg);
    }
  }
  wxAppConsoleBaseExtOnCmdLineErrorwxCmdLineParserRFunc m_wxAppConsoleBaseExtOnCmdLineErrorwxCmdLineParserR = NULL;
  virtual bool OnCmdLineError(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsoleBase::OnCmdLineError(parser);
    if (*m_wxAppConsoleBaseExtOnCmdLineErrorwxCmdLineParserR != NULL){
      return m_wxAppConsoleBaseExtOnCmdLineErrorwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnCmdLineHelpwxCmdLineParserRFunc m_wxAppConsoleBaseExtOnCmdLineHelpwxCmdLineParserR = NULL;
  virtual bool OnCmdLineHelp(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsoleBase::OnCmdLineHelp(parser);
    if (*m_wxAppConsoleBaseExtOnCmdLineHelpwxCmdLineParserR != NULL){
      return m_wxAppConsoleBaseExtOnCmdLineHelpwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnCmdLineParsedwxCmdLineParserRFunc m_wxAppConsoleBaseExtOnCmdLineParsedwxCmdLineParserR = NULL;
  virtual bool OnCmdLineParsed(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsoleBase::OnCmdLineParsed(parser);
    if (*m_wxAppConsoleBaseExtOnCmdLineParsedwxCmdLineParserR != NULL){
      return m_wxAppConsoleBaseExtOnCmdLineParsedwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxAppConsoleBaseExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxAppConsoleBase::OnDynamicBind(param0);
    if (*m_wxAppConsoleBaseExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxAppConsoleBaseExtOnDynamicBindwxDynamicEventTableEntryR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnEventLoopEnterwxEventLoopBasePFunc m_wxAppConsoleBaseExtOnEventLoopEnterwxEventLoopBaseP = NULL;
  virtual void OnEventLoopEnter(wxEventLoopBase* param0) override
  {
    wxAppConsoleBase::OnEventLoopEnter(param0);
    if (*m_wxAppConsoleBaseExtOnEventLoopEnterwxEventLoopBaseP != NULL){
      return m_wxAppConsoleBaseExtOnEventLoopEnterwxEventLoopBaseP(this, param0);
    }
  }
  wxAppConsoleBaseExtOnEventLoopExitwxEventLoopBasePFunc m_wxAppConsoleBaseExtOnEventLoopExitwxEventLoopBaseP = NULL;
  virtual void OnEventLoopExit(wxEventLoopBase* param0) override
  {
    wxAppConsoleBase::OnEventLoopExit(param0);
    if (*m_wxAppConsoleBaseExtOnEventLoopExitwxEventLoopBaseP != NULL){
      return m_wxAppConsoleBaseExtOnEventLoopExitwxEventLoopBaseP(this, param0);
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
  wxAppConsoleBaseExtOnInitCmdLinewxCmdLineParserRFunc m_wxAppConsoleBaseExtOnInitCmdLinewxCmdLineParserR = NULL;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxAppConsoleBase::OnInitCmdLine(parser);
    if (*m_wxAppConsoleBaseExtOnInitCmdLinewxCmdLineParserR != NULL){
      return m_wxAppConsoleBaseExtOnInitCmdLinewxCmdLineParserR(this, parser);
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
  wxAppConsoleBaseExtProcessEventwxEventRFunc m_wxAppConsoleBaseExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxAppConsoleBase::ProcessEvent(event);
    if (*m_wxAppConsoleBaseExtProcessEventwxEventR != NULL){
      return m_wxAppConsoleBaseExtProcessEventwxEventR(this, event, res);
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
  wxAppConsoleBaseExtQueueEventwxEventPFunc m_wxAppConsoleBaseExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxAppConsoleBase::QueueEvent(event);
    if (*m_wxAppConsoleBaseExtQueueEventwxEventP != NULL){
      return m_wxAppConsoleBaseExtQueueEventwxEventP(this, event);
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
  wxAppConsoleBaseExtSearchEventTablewxEventTableRwxEventRFunc m_wxAppConsoleBaseExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxAppConsoleBase::SearchEventTable(table, event);
    if (*m_wxAppConsoleBaseExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxAppConsoleBaseExtSearchEventTablewxEventTableRwxEventR(this, table, event, res);
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
  wxAppConsoleBaseExtSetNextHandlerwxEvtHandlerPFunc m_wxAppConsoleBaseExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxAppConsoleBase::SetNextHandler(handler);
    if (*m_wxAppConsoleBaseExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxAppConsoleBaseExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxAppConsoleBaseExtSetPreviousHandlerwxEvtHandlerPFunc m_wxAppConsoleBaseExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxAppConsoleBase::SetPreviousHandler(handler);
    if (*m_wxAppConsoleBaseExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxAppConsoleBaseExtSetPreviousHandlerwxEvtHandlerP(this, handler);
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
  wxAppConsoleBaseExtTryAfterwxEventRFunc m_wxAppConsoleBaseExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxAppConsoleBase::TryAfter(event);
    if (*m_wxAppConsoleBaseExtTryAfterwxEventR != NULL){
      return m_wxAppConsoleBaseExtTryAfterwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtTryBeforewxEventRFunc m_wxAppConsoleBaseExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxAppConsoleBase::TryBefore(event);
    if (*m_wxAppConsoleBaseExtTryBeforewxEventR != NULL){
      return m_wxAppConsoleBaseExtTryBeforewxEventR(this, event, res);
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
  wxAppConsoleBaseExtWXReservedApp1voidPFunc m_wxAppConsoleBaseExtWXReservedApp1voidP = NULL;
  virtual void* WXReservedApp1(void* param0) override
  {
    void* res = wxAppConsoleBase::WXReservedApp1(param0);
    if (*m_wxAppConsoleBaseExtWXReservedApp1voidP != NULL){
      return m_wxAppConsoleBaseExtWXReservedApp1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtWXReservedApp2voidPFunc m_wxAppConsoleBaseExtWXReservedApp2voidP = NULL;
  virtual void* WXReservedApp2(void* param0) override
  {
    void* res = wxAppConsoleBase::WXReservedApp2(param0);
    if (*m_wxAppConsoleBaseExtWXReservedApp2voidP != NULL){
      return m_wxAppConsoleBaseExtWXReservedApp2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtWXReservedEvtHandler1voidPFunc m_wxAppConsoleBaseExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxAppConsoleBase::WXReservedEvtHandler1(param0);
    if (*m_wxAppConsoleBaseExtWXReservedEvtHandler1voidP != NULL){
      return m_wxAppConsoleBaseExtWXReservedEvtHandler1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtWXReservedEvtHandler2voidPFunc m_wxAppConsoleBaseExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxAppConsoleBase::WXReservedEvtHandler2(param0);
    if (*m_wxAppConsoleBaseExtWXReservedEvtHandler2voidP != NULL){
      return m_wxAppConsoleBaseExtWXReservedEvtHandler2voidP(this, param0, res);
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
  wxAppConsoleBaseExt(wxAppConsoleBaseExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxAppConsoleBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc a_CallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR, wxAppConsoleBaseExtCallOnInitFunc a_CallOnInit, wxAppConsoleBaseExtCleanUpFunc a_CleanUp, wxAppConsoleBaseExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxAppConsoleBaseExtCreateRefDataFunc a_CreateRefData, wxAppConsoleBaseExtCreateTraitsFunc a_CreateTraits, wxAppConsoleBaseExtDispatchFunc a_Dispatch, wxAppConsoleBaseExtDoGetClientDataFunc a_DoGetClientData, wxAppConsoleBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxAppConsoleBaseExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxAppConsoleBaseExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxAppConsoleBaseExtExitFunc a_Exit, wxAppConsoleBaseExtExitMainLoopFunc a_ExitMainLoop, wxAppConsoleBaseExtFilterEventwxEventRFunc a_FilterEventwxEventR, wxAppConsoleBaseExtGetClassInfoFunc a_GetClassInfo, wxAppConsoleBaseExtGetEventHashTableFunc a_GetEventHashTable, wxAppConsoleBaseExtGetEventTableFunc a_GetEventTable, wxAppConsoleBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc a_HandleEventwxEvtHandlerPwxEventFunctionwxEventR, wxAppConsoleBaseExtInitializeintRwxCharPPFunc a_InitializeintRwxCharPP, wxAppConsoleBaseExtIsGUIFunc a_IsGUI, wxAppConsoleBaseExtMainLoopFunc a_MainLoop, wxAppConsoleBaseExtOnAssertwxCharCPintwxCharCPwxCharCPFunc a_OnAssertwxCharCPintwxCharCPwxCharCP, wxAppConsoleBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc a_OnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP, wxAppConsoleBaseExtOnCmdLineErrorwxCmdLineParserRFunc a_OnCmdLineErrorwxCmdLineParserR, wxAppConsoleBaseExtOnCmdLineHelpwxCmdLineParserRFunc a_OnCmdLineHelpwxCmdLineParserR, wxAppConsoleBaseExtOnCmdLineParsedwxCmdLineParserRFunc a_OnCmdLineParsedwxCmdLineParserR, wxAppConsoleBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxAppConsoleBaseExtOnEventLoopEnterwxEventLoopBasePFunc a_OnEventLoopEnterwxEventLoopBaseP, wxAppConsoleBaseExtOnEventLoopExitwxEventLoopBasePFunc a_OnEventLoopExitwxEventLoopBaseP, wxAppConsoleBaseExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppConsoleBaseExtOnExitFunc a_OnExit, wxAppConsoleBaseExtOnFatalExceptionFunc a_OnFatalException, wxAppConsoleBaseExtOnInitFunc a_OnInit, wxAppConsoleBaseExtOnInitCmdLinewxCmdLineParserRFunc a_OnInitCmdLinewxCmdLineParserR, wxAppConsoleBaseExtOnLaunchedFunc a_OnLaunched, wxAppConsoleBaseExtOnRunFunc a_OnRun, wxAppConsoleBaseExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppConsoleBaseExtPendingFunc a_Pending, wxAppConsoleBaseExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxAppConsoleBaseExtProcessIdleFunc a_ProcessIdle, wxAppConsoleBaseExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppConsoleBaseExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxAppConsoleBaseExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppConsoleBaseExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxAppConsoleBaseExtSetCLocaleFunc a_SetCLocale, wxAppConsoleBaseExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxAppConsoleBaseExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxAppConsoleBaseExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppConsoleBaseExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxAppConsoleBaseExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxAppConsoleBaseExtUsesEventLoopFunc a_UsesEventLoop, wxAppConsoleBaseExtWXReservedApp1voidPFunc a_WXReservedApp1voidP, wxAppConsoleBaseExtWXReservedApp2voidPFunc a_WXReservedApp2voidP, wxAppConsoleBaseExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxAppConsoleBaseExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxAppConsoleBaseExtWakeUpIdleFunc a_WakeUpIdle): wxAppConsoleBase() {
    m_wxAppConsoleBaseExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxAppConsoleBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR = a_CallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR;
    m_wxAppConsoleBaseExtCallOnInit = a_CallOnInit;
    m_wxAppConsoleBaseExtCleanUp = a_CleanUp;
    m_wxAppConsoleBaseExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxAppConsoleBaseExtCreateRefData = a_CreateRefData;
    m_wxAppConsoleBaseExtCreateTraits = a_CreateTraits;
    m_wxAppConsoleBaseExtDispatch = a_Dispatch;
    m_wxAppConsoleBaseExtDoGetClientData = a_DoGetClientData;
    m_wxAppConsoleBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxAppConsoleBaseExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxAppConsoleBaseExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxAppConsoleBaseExtExit = a_Exit;
    m_wxAppConsoleBaseExtExitMainLoop = a_ExitMainLoop;
    m_wxAppConsoleBaseExtFilterEventwxEventR = a_FilterEventwxEventR;
    m_wxAppConsoleBaseExtGetClassInfo = a_GetClassInfo;
    m_wxAppConsoleBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxAppConsoleBaseExtGetEventTable = a_GetEventTable;
    m_wxAppConsoleBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR = a_HandleEventwxEvtHandlerPwxEventFunctionwxEventR;
    m_wxAppConsoleBaseExtInitializeintRwxCharPP = a_InitializeintRwxCharPP;
    m_wxAppConsoleBaseExtIsGUI = a_IsGUI;
    m_wxAppConsoleBaseExtMainLoop = a_MainLoop;
    m_wxAppConsoleBaseExtOnAssertwxCharCPintwxCharCPwxCharCP = a_OnAssertwxCharCPintwxCharCPwxCharCP;
    m_wxAppConsoleBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP = a_OnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP;
    m_wxAppConsoleBaseExtOnCmdLineErrorwxCmdLineParserR = a_OnCmdLineErrorwxCmdLineParserR;
    m_wxAppConsoleBaseExtOnCmdLineHelpwxCmdLineParserR = a_OnCmdLineHelpwxCmdLineParserR;
    m_wxAppConsoleBaseExtOnCmdLineParsedwxCmdLineParserR = a_OnCmdLineParsedwxCmdLineParserR;
    m_wxAppConsoleBaseExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxAppConsoleBaseExtOnEventLoopEnterwxEventLoopBaseP = a_OnEventLoopEnterwxEventLoopBaseP;
    m_wxAppConsoleBaseExtOnEventLoopExitwxEventLoopBaseP = a_OnEventLoopExitwxEventLoopBaseP;
    m_wxAppConsoleBaseExtOnExceptionInMainLoop = a_OnExceptionInMainLoop;
    m_wxAppConsoleBaseExtOnExit = a_OnExit;
    m_wxAppConsoleBaseExtOnFatalException = a_OnFatalException;
    m_wxAppConsoleBaseExtOnInit = a_OnInit;
    m_wxAppConsoleBaseExtOnInitCmdLinewxCmdLineParserR = a_OnInitCmdLinewxCmdLineParserR;
    m_wxAppConsoleBaseExtOnLaunched = a_OnLaunched;
    m_wxAppConsoleBaseExtOnRun = a_OnRun;
    m_wxAppConsoleBaseExtOnUnhandledException = a_OnUnhandledException;
    m_wxAppConsoleBaseExtPending = a_Pending;
    m_wxAppConsoleBaseExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxAppConsoleBaseExtProcessIdle = a_ProcessIdle;
    m_wxAppConsoleBaseExtProcessPendingEvents = a_ProcessPendingEvents;
    m_wxAppConsoleBaseExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxAppConsoleBaseExtRethrowStoredException = a_RethrowStoredException;
    m_wxAppConsoleBaseExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxAppConsoleBaseExtSetCLocale = a_SetCLocale;
    m_wxAppConsoleBaseExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxAppConsoleBaseExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxAppConsoleBaseExtStoreCurrentException = a_StoreCurrentException;
    m_wxAppConsoleBaseExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxAppConsoleBaseExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxAppConsoleBaseExtUsesEventLoop = a_UsesEventLoop;
    m_wxAppConsoleBaseExtWXReservedApp1voidP = a_WXReservedApp1voidP;
    m_wxAppConsoleBaseExtWXReservedApp2voidP = a_WXReservedApp2voidP;
    m_wxAppConsoleBaseExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxAppConsoleBaseExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxAppConsoleBaseExtWakeUpIdle = a_WakeUpIdle;
  }
};

class wxAppConsoleExt: public wxAppConsole
{
public:
  wxAppConsoleExt(): wxAppConsole()  {  }
  virtual ~wxAppConsoleExt() override  {  }
  wxAppConsoleExtAddPendingEventwxEventCRFunc m_wxAppConsoleExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxAppConsole::AddPendingEvent(event);
    if (*m_wxAppConsoleExtAddPendingEventwxEventCR != NULL){
      return m_wxAppConsoleExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxAppConsoleExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc m_wxAppConsoleExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR = NULL;
  virtual void CallEventHandler(wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event) const override
  {
    wxAppConsole::CallEventHandler(handler, functor, event);
    if (*m_wxAppConsoleExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR != NULL){
      return m_wxAppConsoleExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR(this, handler, functor, event);
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
  wxAppConsoleExtCloneRefDatawxObjectRefDataCPFunc m_wxAppConsoleExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAppConsole::CloneRefData(data);
    if (*m_wxAppConsoleExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxAppConsoleExtCloneRefDatawxObjectRefDataCP(this, data, res);
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
  wxAppConsoleExtDoSetClientDatavoidPFunc m_wxAppConsoleExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxAppConsole::DoSetClientData(data);
    if (*m_wxAppConsoleExtDoSetClientDatavoidP != NULL){
      return m_wxAppConsoleExtDoSetClientDatavoidP(this, data);
    }
  }
  wxAppConsoleExtDoSetClientObjectwxClientDataPFunc m_wxAppConsoleExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxAppConsole::DoSetClientObject(data);
    if (*m_wxAppConsoleExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxAppConsoleExtDoSetClientObjectwxClientDataP(this, data);
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
  wxAppConsoleExtFilterEventwxEventRFunc m_wxAppConsoleExtFilterEventwxEventR = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    int res = wxAppConsole::FilterEvent(event);
    if (*m_wxAppConsoleExtFilterEventwxEventR != NULL){
      return m_wxAppConsoleExtFilterEventwxEventR(this, event, res);
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
  wxAppConsoleExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc m_wxAppConsoleExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR = NULL;
  virtual void HandleEvent(wxEvtHandler* handler, wxEventFunction func, wxEvent& event) const override
  {
    wxAppConsole::HandleEvent(handler, func, event);
    if (*m_wxAppConsoleExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR != NULL){
      return m_wxAppConsoleExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR(this, handler, func, event);
    }
  }
  wxAppConsoleExtInitializeintRwxCharPPFunc m_wxAppConsoleExtInitializeintRwxCharPP = NULL;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxAppConsole::Initialize(argc, argv);
    if (*m_wxAppConsoleExtInitializeintRwxCharPP != NULL){
      return m_wxAppConsoleExtInitializeintRwxCharPP(this, argc, argv, res);
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
  wxAppConsoleExtOnAssertwxCharCPintwxCharCPwxCharCPFunc m_wxAppConsoleExtOnAssertwxCharCPintwxCharCPwxCharCP = NULL;
  virtual void OnAssert(wxChar const* file, int line, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsole::OnAssert(file, line, cond, msg);
    if (*m_wxAppConsoleExtOnAssertwxCharCPintwxCharCPwxCharCP != NULL){
      return m_wxAppConsoleExtOnAssertwxCharCPintwxCharCPwxCharCP(this, file, line, cond, msg);
    }
  }
  wxAppConsoleExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc m_wxAppConsoleExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP = NULL;
  virtual void OnAssertFailure(wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsole::OnAssertFailure(file, line, func, cond, msg);
    if (*m_wxAppConsoleExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP != NULL){
      return m_wxAppConsoleExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP(this, file, line, func, cond, msg);
    }
  }
  wxAppConsoleExtOnCmdLineErrorwxCmdLineParserRFunc m_wxAppConsoleExtOnCmdLineErrorwxCmdLineParserR = NULL;
  virtual bool OnCmdLineError(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsole::OnCmdLineError(parser);
    if (*m_wxAppConsoleExtOnCmdLineErrorwxCmdLineParserR != NULL){
      return m_wxAppConsoleExtOnCmdLineErrorwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnCmdLineHelpwxCmdLineParserRFunc m_wxAppConsoleExtOnCmdLineHelpwxCmdLineParserR = NULL;
  virtual bool OnCmdLineHelp(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsole::OnCmdLineHelp(parser);
    if (*m_wxAppConsoleExtOnCmdLineHelpwxCmdLineParserR != NULL){
      return m_wxAppConsoleExtOnCmdLineHelpwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnCmdLineParsedwxCmdLineParserRFunc m_wxAppConsoleExtOnCmdLineParsedwxCmdLineParserR = NULL;
  virtual bool OnCmdLineParsed(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsole::OnCmdLineParsed(parser);
    if (*m_wxAppConsoleExtOnCmdLineParsedwxCmdLineParserR != NULL){
      return m_wxAppConsoleExtOnCmdLineParsedwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxAppConsoleExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxAppConsole::OnDynamicBind(param0);
    if (*m_wxAppConsoleExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxAppConsoleExtOnDynamicBindwxDynamicEventTableEntryR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtOnEventLoopEnterwxEventLoopBasePFunc m_wxAppConsoleExtOnEventLoopEnterwxEventLoopBaseP = NULL;
  virtual void OnEventLoopEnter(wxEventLoopBase* param0) override
  {
    wxAppConsole::OnEventLoopEnter(param0);
    if (*m_wxAppConsoleExtOnEventLoopEnterwxEventLoopBaseP != NULL){
      return m_wxAppConsoleExtOnEventLoopEnterwxEventLoopBaseP(this, param0);
    }
  }
  wxAppConsoleExtOnEventLoopExitwxEventLoopBasePFunc m_wxAppConsoleExtOnEventLoopExitwxEventLoopBaseP = NULL;
  virtual void OnEventLoopExit(wxEventLoopBase* param0) override
  {
    wxAppConsole::OnEventLoopExit(param0);
    if (*m_wxAppConsoleExtOnEventLoopExitwxEventLoopBaseP != NULL){
      return m_wxAppConsoleExtOnEventLoopExitwxEventLoopBaseP(this, param0);
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
  wxAppConsoleExtOnInitCmdLinewxCmdLineParserRFunc m_wxAppConsoleExtOnInitCmdLinewxCmdLineParserR = NULL;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxAppConsole::OnInitCmdLine(parser);
    if (*m_wxAppConsoleExtOnInitCmdLinewxCmdLineParserR != NULL){
      return m_wxAppConsoleExtOnInitCmdLinewxCmdLineParserR(this, parser);
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
  wxAppConsoleExtProcessEventwxEventRFunc m_wxAppConsoleExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxAppConsole::ProcessEvent(event);
    if (*m_wxAppConsoleExtProcessEventwxEventR != NULL){
      return m_wxAppConsoleExtProcessEventwxEventR(this, event, res);
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
  wxAppConsoleExtQueueEventwxEventPFunc m_wxAppConsoleExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxAppConsole::QueueEvent(event);
    if (*m_wxAppConsoleExtQueueEventwxEventP != NULL){
      return m_wxAppConsoleExtQueueEventwxEventP(this, event);
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
  wxAppConsoleExtSearchEventTablewxEventTableRwxEventRFunc m_wxAppConsoleExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxAppConsole::SearchEventTable(table, event);
    if (*m_wxAppConsoleExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxAppConsoleExtSearchEventTablewxEventTableRwxEventR(this, table, event, res);
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
  wxAppConsoleExtSetNextHandlerwxEvtHandlerPFunc m_wxAppConsoleExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxAppConsole::SetNextHandler(handler);
    if (*m_wxAppConsoleExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxAppConsoleExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxAppConsoleExtSetPreviousHandlerwxEvtHandlerPFunc m_wxAppConsoleExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxAppConsole::SetPreviousHandler(handler);
    if (*m_wxAppConsoleExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxAppConsoleExtSetPreviousHandlerwxEvtHandlerP(this, handler);
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
  wxAppConsoleExtTryAfterwxEventRFunc m_wxAppConsoleExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxAppConsole::TryAfter(event);
    if (*m_wxAppConsoleExtTryAfterwxEventR != NULL){
      return m_wxAppConsoleExtTryAfterwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtTryBeforewxEventRFunc m_wxAppConsoleExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxAppConsole::TryBefore(event);
    if (*m_wxAppConsoleExtTryBeforewxEventR != NULL){
      return m_wxAppConsoleExtTryBeforewxEventR(this, event, res);
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
  wxAppConsoleExtWXReservedApp1voidPFunc m_wxAppConsoleExtWXReservedApp1voidP = NULL;
  virtual void* WXReservedApp1(void* param0) override
  {
    void* res = wxAppConsole::WXReservedApp1(param0);
    if (*m_wxAppConsoleExtWXReservedApp1voidP != NULL){
      return m_wxAppConsoleExtWXReservedApp1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtWXReservedApp2voidPFunc m_wxAppConsoleExtWXReservedApp2voidP = NULL;
  virtual void* WXReservedApp2(void* param0) override
  {
    void* res = wxAppConsole::WXReservedApp2(param0);
    if (*m_wxAppConsoleExtWXReservedApp2voidP != NULL){
      return m_wxAppConsoleExtWXReservedApp2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtWXReservedEvtHandler1voidPFunc m_wxAppConsoleExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxAppConsole::WXReservedEvtHandler1(param0);
    if (*m_wxAppConsoleExtWXReservedEvtHandler1voidP != NULL){
      return m_wxAppConsoleExtWXReservedEvtHandler1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppConsoleExtWXReservedEvtHandler2voidPFunc m_wxAppConsoleExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxAppConsole::WXReservedEvtHandler2(param0);
    if (*m_wxAppConsoleExtWXReservedEvtHandler2voidP != NULL){
      return m_wxAppConsoleExtWXReservedEvtHandler2voidP(this, param0, res);
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
  wxAppConsoleExt(wxAppConsoleExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxAppConsoleExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc a_CallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR, wxAppConsoleExtCallOnInitFunc a_CallOnInit, wxAppConsoleExtCleanUpFunc a_CleanUp, wxAppConsoleExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxAppConsoleExtCreateRefDataFunc a_CreateRefData, wxAppConsoleExtCreateTraitsFunc a_CreateTraits, wxAppConsoleExtDispatchFunc a_Dispatch, wxAppConsoleExtDoGetClientDataFunc a_DoGetClientData, wxAppConsoleExtDoGetClientObjectFunc a_DoGetClientObject, wxAppConsoleExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxAppConsoleExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxAppConsoleExtExitFunc a_Exit, wxAppConsoleExtExitMainLoopFunc a_ExitMainLoop, wxAppConsoleExtFilterEventwxEventRFunc a_FilterEventwxEventR, wxAppConsoleExtGetClassInfoFunc a_GetClassInfo, wxAppConsoleExtGetEventHashTableFunc a_GetEventHashTable, wxAppConsoleExtGetEventTableFunc a_GetEventTable, wxAppConsoleExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc a_HandleEventwxEvtHandlerPwxEventFunctionwxEventR, wxAppConsoleExtInitializeintRwxCharPPFunc a_InitializeintRwxCharPP, wxAppConsoleExtIsGUIFunc a_IsGUI, wxAppConsoleExtMainLoopFunc a_MainLoop, wxAppConsoleExtOnAssertwxCharCPintwxCharCPwxCharCPFunc a_OnAssertwxCharCPintwxCharCPwxCharCP, wxAppConsoleExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc a_OnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP, wxAppConsoleExtOnCmdLineErrorwxCmdLineParserRFunc a_OnCmdLineErrorwxCmdLineParserR, wxAppConsoleExtOnCmdLineHelpwxCmdLineParserRFunc a_OnCmdLineHelpwxCmdLineParserR, wxAppConsoleExtOnCmdLineParsedwxCmdLineParserRFunc a_OnCmdLineParsedwxCmdLineParserR, wxAppConsoleExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxAppConsoleExtOnEventLoopEnterwxEventLoopBasePFunc a_OnEventLoopEnterwxEventLoopBaseP, wxAppConsoleExtOnEventLoopExitwxEventLoopBasePFunc a_OnEventLoopExitwxEventLoopBaseP, wxAppConsoleExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppConsoleExtOnExitFunc a_OnExit, wxAppConsoleExtOnFatalExceptionFunc a_OnFatalException, wxAppConsoleExtOnInitFunc a_OnInit, wxAppConsoleExtOnInitCmdLinewxCmdLineParserRFunc a_OnInitCmdLinewxCmdLineParserR, wxAppConsoleExtOnLaunchedFunc a_OnLaunched, wxAppConsoleExtOnRunFunc a_OnRun, wxAppConsoleExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppConsoleExtPendingFunc a_Pending, wxAppConsoleExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxAppConsoleExtProcessIdleFunc a_ProcessIdle, wxAppConsoleExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppConsoleExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxAppConsoleExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppConsoleExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxAppConsoleExtSetCLocaleFunc a_SetCLocale, wxAppConsoleExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxAppConsoleExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxAppConsoleExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppConsoleExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxAppConsoleExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxAppConsoleExtUsesEventLoopFunc a_UsesEventLoop, wxAppConsoleExtWXReservedApp1voidPFunc a_WXReservedApp1voidP, wxAppConsoleExtWXReservedApp2voidPFunc a_WXReservedApp2voidP, wxAppConsoleExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxAppConsoleExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxAppConsoleExtWakeUpIdleFunc a_WakeUpIdle): wxAppConsole() {
    m_wxAppConsoleExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxAppConsoleExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR = a_CallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR;
    m_wxAppConsoleExtCallOnInit = a_CallOnInit;
    m_wxAppConsoleExtCleanUp = a_CleanUp;
    m_wxAppConsoleExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxAppConsoleExtCreateRefData = a_CreateRefData;
    m_wxAppConsoleExtCreateTraits = a_CreateTraits;
    m_wxAppConsoleExtDispatch = a_Dispatch;
    m_wxAppConsoleExtDoGetClientData = a_DoGetClientData;
    m_wxAppConsoleExtDoGetClientObject = a_DoGetClientObject;
    m_wxAppConsoleExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxAppConsoleExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxAppConsoleExtExit = a_Exit;
    m_wxAppConsoleExtExitMainLoop = a_ExitMainLoop;
    m_wxAppConsoleExtFilterEventwxEventR = a_FilterEventwxEventR;
    m_wxAppConsoleExtGetClassInfo = a_GetClassInfo;
    m_wxAppConsoleExtGetEventHashTable = a_GetEventHashTable;
    m_wxAppConsoleExtGetEventTable = a_GetEventTable;
    m_wxAppConsoleExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR = a_HandleEventwxEvtHandlerPwxEventFunctionwxEventR;
    m_wxAppConsoleExtInitializeintRwxCharPP = a_InitializeintRwxCharPP;
    m_wxAppConsoleExtIsGUI = a_IsGUI;
    m_wxAppConsoleExtMainLoop = a_MainLoop;
    m_wxAppConsoleExtOnAssertwxCharCPintwxCharCPwxCharCP = a_OnAssertwxCharCPintwxCharCPwxCharCP;
    m_wxAppConsoleExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP = a_OnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP;
    m_wxAppConsoleExtOnCmdLineErrorwxCmdLineParserR = a_OnCmdLineErrorwxCmdLineParserR;
    m_wxAppConsoleExtOnCmdLineHelpwxCmdLineParserR = a_OnCmdLineHelpwxCmdLineParserR;
    m_wxAppConsoleExtOnCmdLineParsedwxCmdLineParserR = a_OnCmdLineParsedwxCmdLineParserR;
    m_wxAppConsoleExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxAppConsoleExtOnEventLoopEnterwxEventLoopBaseP = a_OnEventLoopEnterwxEventLoopBaseP;
    m_wxAppConsoleExtOnEventLoopExitwxEventLoopBaseP = a_OnEventLoopExitwxEventLoopBaseP;
    m_wxAppConsoleExtOnExceptionInMainLoop = a_OnExceptionInMainLoop;
    m_wxAppConsoleExtOnExit = a_OnExit;
    m_wxAppConsoleExtOnFatalException = a_OnFatalException;
    m_wxAppConsoleExtOnInit = a_OnInit;
    m_wxAppConsoleExtOnInitCmdLinewxCmdLineParserR = a_OnInitCmdLinewxCmdLineParserR;
    m_wxAppConsoleExtOnLaunched = a_OnLaunched;
    m_wxAppConsoleExtOnRun = a_OnRun;
    m_wxAppConsoleExtOnUnhandledException = a_OnUnhandledException;
    m_wxAppConsoleExtPending = a_Pending;
    m_wxAppConsoleExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxAppConsoleExtProcessIdle = a_ProcessIdle;
    m_wxAppConsoleExtProcessPendingEvents = a_ProcessPendingEvents;
    m_wxAppConsoleExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxAppConsoleExtRethrowStoredException = a_RethrowStoredException;
    m_wxAppConsoleExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxAppConsoleExtSetCLocale = a_SetCLocale;
    m_wxAppConsoleExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxAppConsoleExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxAppConsoleExtStoreCurrentException = a_StoreCurrentException;
    m_wxAppConsoleExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxAppConsoleExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxAppConsoleExtUsesEventLoop = a_UsesEventLoop;
    m_wxAppConsoleExtWXReservedApp1voidP = a_WXReservedApp1voidP;
    m_wxAppConsoleExtWXReservedApp2voidP = a_WXReservedApp2voidP;
    m_wxAppConsoleExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxAppConsoleExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxAppConsoleExtWakeUpIdle = a_WakeUpIdle;
  }
};

class wxAppBaseExt: public wxAppBase
{
public:
  wxAppBaseExt(): wxAppBase()  {  }
  virtual ~wxAppBaseExt() override  {  }
  wxAppBaseExtAddPendingEventwxEventCRFunc m_wxAppBaseExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxAppBase::AddPendingEvent(event);
    if (*m_wxAppBaseExtAddPendingEventwxEventCR != NULL){
      return m_wxAppBaseExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxAppBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc m_wxAppBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR = NULL;
  virtual void CallEventHandler(wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event) const override
  {
    wxAppBase::CallEventHandler(handler, functor, event);
    if (*m_wxAppBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR != NULL){
      return m_wxAppBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR(this, handler, functor, event);
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
  wxAppBaseExtCloneRefDatawxObjectRefDataCPFunc m_wxAppBaseExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxAppBase::CloneRefData(data);
    if (*m_wxAppBaseExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxAppBaseExtCloneRefDatawxObjectRefDataCP(this, data, res);
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
  wxAppBaseExtDoSetClientDatavoidPFunc m_wxAppBaseExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxAppBase::DoSetClientData(data);
    if (*m_wxAppBaseExtDoSetClientDatavoidP != NULL){
      return m_wxAppBaseExtDoSetClientDatavoidP(this, data);
    }
  }
  wxAppBaseExtDoSetClientObjectwxClientDataPFunc m_wxAppBaseExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxAppBase::DoSetClientObject(data);
    if (*m_wxAppBaseExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxAppBaseExtDoSetClientObjectwxClientDataP(this, data);
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
  wxAppBaseExtFilterEventwxEventRFunc m_wxAppBaseExtFilterEventwxEventR = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    int res = wxAppBase::FilterEvent(event);
    if (*m_wxAppBaseExtFilterEventwxEventR != NULL){
      return m_wxAppBaseExtFilterEventwxEventR(this, event, res);
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
  wxAppBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc m_wxAppBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR = NULL;
  virtual void HandleEvent(wxEvtHandler* handler, wxEventFunction func, wxEvent& event) const override
  {
    wxAppBase::HandleEvent(handler, func, event);
    if (*m_wxAppBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR != NULL){
      return m_wxAppBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR(this, handler, func, event);
    }
  }
  wxAppBaseExtInitializeintRwxCharPPFunc m_wxAppBaseExtInitializeintRwxCharPP = NULL;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxAppBase::Initialize(argc, argv);
    if (*m_wxAppBaseExtInitializeintRwxCharPP != NULL){
      return m_wxAppBaseExtInitializeintRwxCharPP(this, argc, argv, res);
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
  wxAppBaseExtOnAssertwxCharCPintwxCharCPwxCharCPFunc m_wxAppBaseExtOnAssertwxCharCPintwxCharCPwxCharCP = NULL;
  virtual void OnAssert(wxChar const* file, int line, wxChar const* cond, wxChar const* msg) override
  {
    wxAppBase::OnAssert(file, line, cond, msg);
    if (*m_wxAppBaseExtOnAssertwxCharCPintwxCharCPwxCharCP != NULL){
      return m_wxAppBaseExtOnAssertwxCharCPintwxCharCPwxCharCP(this, file, line, cond, msg);
    }
  }
  wxAppBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc m_wxAppBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP = NULL;
  virtual void OnAssertFailure(wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg) override
  {
    wxAppBase::OnAssertFailure(file, line, func, cond, msg);
    if (*m_wxAppBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP != NULL){
      return m_wxAppBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP(this, file, line, func, cond, msg);
    }
  }
  wxAppBaseExtOnCmdLineErrorwxCmdLineParserRFunc m_wxAppBaseExtOnCmdLineErrorwxCmdLineParserR = NULL;
  virtual bool OnCmdLineError(wxCmdLineParser& parser) override
  {
    bool res = wxAppBase::OnCmdLineError(parser);
    if (*m_wxAppBaseExtOnCmdLineErrorwxCmdLineParserR != NULL){
      return m_wxAppBaseExtOnCmdLineErrorwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnCmdLineHelpwxCmdLineParserRFunc m_wxAppBaseExtOnCmdLineHelpwxCmdLineParserR = NULL;
  virtual bool OnCmdLineHelp(wxCmdLineParser& parser) override
  {
    bool res = wxAppBase::OnCmdLineHelp(parser);
    if (*m_wxAppBaseExtOnCmdLineHelpwxCmdLineParserR != NULL){
      return m_wxAppBaseExtOnCmdLineHelpwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnCmdLineParsedwxCmdLineParserRFunc m_wxAppBaseExtOnCmdLineParsedwxCmdLineParserR = NULL;
  virtual bool OnCmdLineParsed(wxCmdLineParser& parser) override
  {
    bool res = wxAppBase::OnCmdLineParsed(parser);
    if (*m_wxAppBaseExtOnCmdLineParsedwxCmdLineParserR != NULL){
      return m_wxAppBaseExtOnCmdLineParsedwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxAppBaseExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxAppBase::OnDynamicBind(param0);
    if (*m_wxAppBaseExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxAppBaseExtOnDynamicBindwxDynamicEventTableEntryR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnEventLoopEnterwxEventLoopBasePFunc m_wxAppBaseExtOnEventLoopEnterwxEventLoopBaseP = NULL;
  virtual void OnEventLoopEnter(wxEventLoopBase* param0) override
  {
    wxAppBase::OnEventLoopEnter(param0);
    if (*m_wxAppBaseExtOnEventLoopEnterwxEventLoopBaseP != NULL){
      return m_wxAppBaseExtOnEventLoopEnterwxEventLoopBaseP(this, param0);
    }
  }
  wxAppBaseExtOnEventLoopExitwxEventLoopBasePFunc m_wxAppBaseExtOnEventLoopExitwxEventLoopBaseP = NULL;
  virtual void OnEventLoopExit(wxEventLoopBase* param0) override
  {
    wxAppBase::OnEventLoopExit(param0);
    if (*m_wxAppBaseExtOnEventLoopExitwxEventLoopBaseP != NULL){
      return m_wxAppBaseExtOnEventLoopExitwxEventLoopBaseP(this, param0);
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
  wxAppBaseExtOnInitCmdLinewxCmdLineParserRFunc m_wxAppBaseExtOnInitCmdLinewxCmdLineParserR = NULL;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxAppBase::OnInitCmdLine(parser);
    if (*m_wxAppBaseExtOnInitCmdLinewxCmdLineParserR != NULL){
      return m_wxAppBaseExtOnInitCmdLinewxCmdLineParserR(this, parser);
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
  wxAppBaseExtProcessEventwxEventRFunc m_wxAppBaseExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxAppBase::ProcessEvent(event);
    if (*m_wxAppBaseExtProcessEventwxEventR != NULL){
      return m_wxAppBaseExtProcessEventwxEventR(this, event, res);
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
  wxAppBaseExtQueueEventwxEventPFunc m_wxAppBaseExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxAppBase::QueueEvent(event);
    if (*m_wxAppBaseExtQueueEventwxEventP != NULL){
      return m_wxAppBaseExtQueueEventwxEventP(this, event);
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
  wxAppBaseExtSafeYieldwxWindowPboolFunc m_wxAppBaseExtSafeYieldwxWindowPbool = NULL;
  virtual bool SafeYield(wxWindow* win, bool onlyIfNeeded) override
  {
    bool res = wxAppBase::SafeYield(win, onlyIfNeeded);
    if (*m_wxAppBaseExtSafeYieldwxWindowPbool != NULL){
      return m_wxAppBaseExtSafeYieldwxWindowPbool(this, win, onlyIfNeeded, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSafeYieldForwxWindowPlongFunc m_wxAppBaseExtSafeYieldForwxWindowPlong = NULL;
  virtual bool SafeYieldFor(wxWindow* win, long eventsToProcess) override
  {
    bool res = wxAppBase::SafeYieldFor(win, eventsToProcess);
    if (*m_wxAppBaseExtSafeYieldForwxWindowPlong != NULL){
      return m_wxAppBaseExtSafeYieldForwxWindowPlong(this, win, eventsToProcess, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSearchEventTablewxEventTableRwxEventRFunc m_wxAppBaseExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxAppBase::SearchEventTable(table, event);
    if (*m_wxAppBaseExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxAppBaseExtSearchEventTablewxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSetActiveboolwxWindowPFunc m_wxAppBaseExtSetActiveboolwxWindowP = NULL;
  virtual void SetActive(bool isActive, wxWindow* lastFocus) override
  {
    wxAppBase::SetActive(isActive, lastFocus);
    if (*m_wxAppBaseExtSetActiveboolwxWindowP != NULL){
      return m_wxAppBaseExtSetActiveboolwxWindowP(this, isActive, lastFocus);
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
  wxAppBaseExtSetDisplayModewxVideoModeCRFunc m_wxAppBaseExtSetDisplayModewxVideoModeCR = NULL;
  virtual bool SetDisplayMode(wxVideoMode const& param0) override
  {
    bool res = wxAppBase::SetDisplayMode(param0);
    if (*m_wxAppBaseExtSetDisplayModewxVideoModeCR != NULL){
      return m_wxAppBaseExtSetDisplayModewxVideoModeCR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSetNativeThemewxStringCRFunc m_wxAppBaseExtSetNativeThemewxStringCR = NULL;
  virtual bool SetNativeTheme(wxString const& param0) override
  {
    bool res = wxAppBase::SetNativeTheme(param0);
    if (*m_wxAppBaseExtSetNativeThemewxStringCR != NULL){
      return m_wxAppBaseExtSetNativeThemewxStringCR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSetNextHandlerwxEvtHandlerPFunc m_wxAppBaseExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxAppBase::SetNextHandler(handler);
    if (*m_wxAppBaseExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxAppBaseExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxAppBaseExtSetPreviousHandlerwxEvtHandlerPFunc m_wxAppBaseExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxAppBase::SetPreviousHandler(handler);
    if (*m_wxAppBaseExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxAppBaseExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxAppBaseExtSetPrintModeintFunc m_wxAppBaseExtSetPrintModeint = NULL;
  virtual void SetPrintMode(int param0) override
  {
    wxAppBase::SetPrintMode(param0);
    if (*m_wxAppBaseExtSetPrintModeint != NULL){
      return m_wxAppBaseExtSetPrintModeint(this, param0);
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
  wxAppBaseExtTryAfterwxEventRFunc m_wxAppBaseExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxAppBase::TryAfter(event);
    if (*m_wxAppBaseExtTryAfterwxEventR != NULL){
      return m_wxAppBaseExtTryAfterwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtTryBeforewxEventRFunc m_wxAppBaseExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxAppBase::TryBefore(event);
    if (*m_wxAppBaseExtTryBeforewxEventR != NULL){
      return m_wxAppBaseExtTryBeforewxEventR(this, event, res);
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
  wxAppBaseExtWXReservedApp1voidPFunc m_wxAppBaseExtWXReservedApp1voidP = NULL;
  virtual void* WXReservedApp1(void* param0) override
  {
    void* res = wxAppBase::WXReservedApp1(param0);
    if (*m_wxAppBaseExtWXReservedApp1voidP != NULL){
      return m_wxAppBaseExtWXReservedApp1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtWXReservedApp2voidPFunc m_wxAppBaseExtWXReservedApp2voidP = NULL;
  virtual void* WXReservedApp2(void* param0) override
  {
    void* res = wxAppBase::WXReservedApp2(param0);
    if (*m_wxAppBaseExtWXReservedApp2voidP != NULL){
      return m_wxAppBaseExtWXReservedApp2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtWXReservedEvtHandler1voidPFunc m_wxAppBaseExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxAppBase::WXReservedEvtHandler1(param0);
    if (*m_wxAppBaseExtWXReservedEvtHandler1voidP != NULL){
      return m_wxAppBaseExtWXReservedEvtHandler1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtWXReservedEvtHandler2voidPFunc m_wxAppBaseExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxAppBase::WXReservedEvtHandler2(param0);
    if (*m_wxAppBaseExtWXReservedEvtHandler2voidP != NULL){
      return m_wxAppBaseExtWXReservedEvtHandler2voidP(this, param0, res);
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
  wxAppBaseExt(wxAppBaseExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxAppBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc a_CallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR, wxAppBaseExtCallOnInitFunc a_CallOnInit, wxAppBaseExtCleanUpFunc a_CleanUp, wxAppBaseExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxAppBaseExtCreateRefDataFunc a_CreateRefData, wxAppBaseExtCreateTraitsFunc a_CreateTraits, wxAppBaseExtDispatchFunc a_Dispatch, wxAppBaseExtDoGetClientDataFunc a_DoGetClientData, wxAppBaseExtDoGetClientObjectFunc a_DoGetClientObject, wxAppBaseExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxAppBaseExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxAppBaseExtExitFunc a_Exit, wxAppBaseExtExitMainLoopFunc a_ExitMainLoop, wxAppBaseExtFilterEventwxEventRFunc a_FilterEventwxEventR, wxAppBaseExtGetClassInfoFunc a_GetClassInfo, wxAppBaseExtGetDisplayModeFunc a_GetDisplayMode, wxAppBaseExtGetEventHashTableFunc a_GetEventHashTable, wxAppBaseExtGetEventTableFunc a_GetEventTable, wxAppBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxAppBaseExtGetTopWindowFunc a_GetTopWindow, wxAppBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc a_HandleEventwxEvtHandlerPwxEventFunctionwxEventR, wxAppBaseExtInitializeintRwxCharPPFunc a_InitializeintRwxCharPP, wxAppBaseExtIsActiveFunc a_IsActive, wxAppBaseExtIsGUIFunc a_IsGUI, wxAppBaseExtMainLoopFunc a_MainLoop, wxAppBaseExtOnAssertwxCharCPintwxCharCPwxCharCPFunc a_OnAssertwxCharCPintwxCharCPwxCharCP, wxAppBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc a_OnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP, wxAppBaseExtOnCmdLineErrorwxCmdLineParserRFunc a_OnCmdLineErrorwxCmdLineParserR, wxAppBaseExtOnCmdLineHelpwxCmdLineParserRFunc a_OnCmdLineHelpwxCmdLineParserR, wxAppBaseExtOnCmdLineParsedwxCmdLineParserRFunc a_OnCmdLineParsedwxCmdLineParserR, wxAppBaseExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxAppBaseExtOnEventLoopEnterwxEventLoopBasePFunc a_OnEventLoopEnterwxEventLoopBaseP, wxAppBaseExtOnEventLoopExitwxEventLoopBasePFunc a_OnEventLoopExitwxEventLoopBaseP, wxAppBaseExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppBaseExtOnExitFunc a_OnExit, wxAppBaseExtOnFatalExceptionFunc a_OnFatalException, wxAppBaseExtOnInitFunc a_OnInit, wxAppBaseExtOnInitCmdLinewxCmdLineParserRFunc a_OnInitCmdLinewxCmdLineParserR, wxAppBaseExtOnInitGuiFunc a_OnInitGui, wxAppBaseExtOnLaunchedFunc a_OnLaunched, wxAppBaseExtOnRunFunc a_OnRun, wxAppBaseExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppBaseExtPendingFunc a_Pending, wxAppBaseExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxAppBaseExtProcessIdleFunc a_ProcessIdle, wxAppBaseExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppBaseExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxAppBaseExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppBaseExtSafeYieldwxWindowPboolFunc a_SafeYieldwxWindowPbool, wxAppBaseExtSafeYieldForwxWindowPlongFunc a_SafeYieldForwxWindowPlong, wxAppBaseExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxAppBaseExtSetActiveboolwxWindowPFunc a_SetActiveboolwxWindowP, wxAppBaseExtSetCLocaleFunc a_SetCLocale, wxAppBaseExtSetDisplayModewxVideoModeCRFunc a_SetDisplayModewxVideoModeCR, wxAppBaseExtSetNativeThemewxStringCRFunc a_SetNativeThemewxStringCR, wxAppBaseExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxAppBaseExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxAppBaseExtSetPrintModeintFunc a_SetPrintModeint, wxAppBaseExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppBaseExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxAppBaseExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxAppBaseExtUsesEventLoopFunc a_UsesEventLoop, wxAppBaseExtWXReservedApp1voidPFunc a_WXReservedApp1voidP, wxAppBaseExtWXReservedApp2voidPFunc a_WXReservedApp2voidP, wxAppBaseExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxAppBaseExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxAppBaseExtWakeUpIdleFunc a_WakeUpIdle): wxAppBase() {
    m_wxAppBaseExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxAppBaseExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR = a_CallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR;
    m_wxAppBaseExtCallOnInit = a_CallOnInit;
    m_wxAppBaseExtCleanUp = a_CleanUp;
    m_wxAppBaseExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxAppBaseExtCreateRefData = a_CreateRefData;
    m_wxAppBaseExtCreateTraits = a_CreateTraits;
    m_wxAppBaseExtDispatch = a_Dispatch;
    m_wxAppBaseExtDoGetClientData = a_DoGetClientData;
    m_wxAppBaseExtDoGetClientObject = a_DoGetClientObject;
    m_wxAppBaseExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxAppBaseExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxAppBaseExtExit = a_Exit;
    m_wxAppBaseExtExitMainLoop = a_ExitMainLoop;
    m_wxAppBaseExtFilterEventwxEventR = a_FilterEventwxEventR;
    m_wxAppBaseExtGetClassInfo = a_GetClassInfo;
    m_wxAppBaseExtGetDisplayMode = a_GetDisplayMode;
    m_wxAppBaseExtGetEventHashTable = a_GetEventHashTable;
    m_wxAppBaseExtGetEventTable = a_GetEventTable;
    m_wxAppBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxAppBaseExtGetTopWindow = a_GetTopWindow;
    m_wxAppBaseExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR = a_HandleEventwxEvtHandlerPwxEventFunctionwxEventR;
    m_wxAppBaseExtInitializeintRwxCharPP = a_InitializeintRwxCharPP;
    m_wxAppBaseExtIsActive = a_IsActive;
    m_wxAppBaseExtIsGUI = a_IsGUI;
    m_wxAppBaseExtMainLoop = a_MainLoop;
    m_wxAppBaseExtOnAssertwxCharCPintwxCharCPwxCharCP = a_OnAssertwxCharCPintwxCharCPwxCharCP;
    m_wxAppBaseExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP = a_OnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP;
    m_wxAppBaseExtOnCmdLineErrorwxCmdLineParserR = a_OnCmdLineErrorwxCmdLineParserR;
    m_wxAppBaseExtOnCmdLineHelpwxCmdLineParserR = a_OnCmdLineHelpwxCmdLineParserR;
    m_wxAppBaseExtOnCmdLineParsedwxCmdLineParserR = a_OnCmdLineParsedwxCmdLineParserR;
    m_wxAppBaseExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxAppBaseExtOnEventLoopEnterwxEventLoopBaseP = a_OnEventLoopEnterwxEventLoopBaseP;
    m_wxAppBaseExtOnEventLoopExitwxEventLoopBaseP = a_OnEventLoopExitwxEventLoopBaseP;
    m_wxAppBaseExtOnExceptionInMainLoop = a_OnExceptionInMainLoop;
    m_wxAppBaseExtOnExit = a_OnExit;
    m_wxAppBaseExtOnFatalException = a_OnFatalException;
    m_wxAppBaseExtOnInit = a_OnInit;
    m_wxAppBaseExtOnInitCmdLinewxCmdLineParserR = a_OnInitCmdLinewxCmdLineParserR;
    m_wxAppBaseExtOnInitGui = a_OnInitGui;
    m_wxAppBaseExtOnLaunched = a_OnLaunched;
    m_wxAppBaseExtOnRun = a_OnRun;
    m_wxAppBaseExtOnUnhandledException = a_OnUnhandledException;
    m_wxAppBaseExtPending = a_Pending;
    m_wxAppBaseExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxAppBaseExtProcessIdle = a_ProcessIdle;
    m_wxAppBaseExtProcessPendingEvents = a_ProcessPendingEvents;
    m_wxAppBaseExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxAppBaseExtRethrowStoredException = a_RethrowStoredException;
    m_wxAppBaseExtSafeYieldwxWindowPbool = a_SafeYieldwxWindowPbool;
    m_wxAppBaseExtSafeYieldForwxWindowPlong = a_SafeYieldForwxWindowPlong;
    m_wxAppBaseExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxAppBaseExtSetActiveboolwxWindowP = a_SetActiveboolwxWindowP;
    m_wxAppBaseExtSetCLocale = a_SetCLocale;
    m_wxAppBaseExtSetDisplayModewxVideoModeCR = a_SetDisplayModewxVideoModeCR;
    m_wxAppBaseExtSetNativeThemewxStringCR = a_SetNativeThemewxStringCR;
    m_wxAppBaseExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxAppBaseExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxAppBaseExtSetPrintModeint = a_SetPrintModeint;
    m_wxAppBaseExtStoreCurrentException = a_StoreCurrentException;
    m_wxAppBaseExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxAppBaseExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxAppBaseExtUsesEventLoop = a_UsesEventLoop;
    m_wxAppBaseExtWXReservedApp1voidP = a_WXReservedApp1voidP;
    m_wxAppBaseExtWXReservedApp2voidP = a_WXReservedApp2voidP;
    m_wxAppBaseExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxAppBaseExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxAppBaseExtWakeUpIdle = a_WakeUpIdle;
  }
};

class wxAppExt: public wxApp
{
public:
  wxAppExt(): wxApp()  {  }
  virtual ~wxAppExt() override  {  }
  wxAppExtAddPendingEventwxEventCRFunc m_wxAppExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxApp::AddPendingEvent(event);
    if (*m_wxAppExtAddPendingEventwxEventCR != NULL){
      return m_wxAppExtAddPendingEventwxEventCR(this, event);
    }
  }
  wxAppExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc m_wxAppExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR = NULL;
  virtual void CallEventHandler(wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event) const override
  {
    wxApp::CallEventHandler(handler, functor, event);
    if (*m_wxAppExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR != NULL){
      return m_wxAppExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR(this, handler, functor, event);
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
  wxAppExtCloneRefDatawxObjectRefDataCPFunc m_wxAppExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxApp::CloneRefData(data);
    if (*m_wxAppExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxAppExtCloneRefDatawxObjectRefDataCP(this, data, res);
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
  wxAppExtDoSetClientDatavoidPFunc m_wxAppExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxApp::DoSetClientData(data);
    if (*m_wxAppExtDoSetClientDatavoidP != NULL){
      return m_wxAppExtDoSetClientDatavoidP(this, data);
    }
  }
  wxAppExtDoSetClientObjectwxClientDataPFunc m_wxAppExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxApp::DoSetClientObject(data);
    if (*m_wxAppExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxAppExtDoSetClientObjectwxClientDataP(this, data);
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
  wxAppExtFilterEventwxEventRFunc m_wxAppExtFilterEventwxEventR = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    int res = wxApp::FilterEvent(event);
    if (*m_wxAppExtFilterEventwxEventR != NULL){
      return m_wxAppExtFilterEventwxEventR(this, event, res);
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
  wxAppExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc m_wxAppExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR = NULL;
  virtual void HandleEvent(wxEvtHandler* handler, wxEventFunction func, wxEvent& event) const override
  {
    wxApp::HandleEvent(handler, func, event);
    if (*m_wxAppExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR != NULL){
      return m_wxAppExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR(this, handler, func, event);
    }
  }
  wxAppExtInitializeintRwxCharPPFunc m_wxAppExtInitializeintRwxCharPP = NULL;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxApp::Initialize(argc, argv);
    if (*m_wxAppExtInitializeintRwxCharPP != NULL){
      return m_wxAppExtInitializeintRwxCharPP(this, argc, argv, res);
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
  wxAppExtOnAssertwxCharCPintwxCharCPwxCharCPFunc m_wxAppExtOnAssertwxCharCPintwxCharCPwxCharCP = NULL;
  virtual void OnAssert(wxChar const* file, int line, wxChar const* cond, wxChar const* msg) override
  {
    wxApp::OnAssert(file, line, cond, msg);
    if (*m_wxAppExtOnAssertwxCharCPintwxCharCPwxCharCP != NULL){
      return m_wxAppExtOnAssertwxCharCPintwxCharCPwxCharCP(this, file, line, cond, msg);
    }
  }
  wxAppExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc m_wxAppExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP = NULL;
  virtual void OnAssertFailure(wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg) override
  {
    wxApp::OnAssertFailure(file, line, func, cond, msg);
    if (*m_wxAppExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP != NULL){
      return m_wxAppExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP(this, file, line, func, cond, msg);
    }
  }
  wxAppExtOnCmdLineErrorwxCmdLineParserRFunc m_wxAppExtOnCmdLineErrorwxCmdLineParserR = NULL;
  virtual bool OnCmdLineError(wxCmdLineParser& parser) override
  {
    bool res = wxApp::OnCmdLineError(parser);
    if (*m_wxAppExtOnCmdLineErrorwxCmdLineParserR != NULL){
      return m_wxAppExtOnCmdLineErrorwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnCmdLineHelpwxCmdLineParserRFunc m_wxAppExtOnCmdLineHelpwxCmdLineParserR = NULL;
  virtual bool OnCmdLineHelp(wxCmdLineParser& parser) override
  {
    bool res = wxApp::OnCmdLineHelp(parser);
    if (*m_wxAppExtOnCmdLineHelpwxCmdLineParserR != NULL){
      return m_wxAppExtOnCmdLineHelpwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnCmdLineParsedwxCmdLineParserRFunc m_wxAppExtOnCmdLineParsedwxCmdLineParserR = NULL;
  virtual bool OnCmdLineParsed(wxCmdLineParser& parser) override
  {
    bool res = wxApp::OnCmdLineParsed(parser);
    if (*m_wxAppExtOnCmdLineParsedwxCmdLineParserR != NULL){
      return m_wxAppExtOnCmdLineParsedwxCmdLineParserR(this, parser, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxAppExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxApp::OnDynamicBind(param0);
    if (*m_wxAppExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxAppExtOnDynamicBindwxDynamicEventTableEntryR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppExtOnEventLoopEnterwxEventLoopBasePFunc m_wxAppExtOnEventLoopEnterwxEventLoopBaseP = NULL;
  virtual void OnEventLoopEnter(wxEventLoopBase* param0) override
  {
    wxApp::OnEventLoopEnter(param0);
    if (*m_wxAppExtOnEventLoopEnterwxEventLoopBaseP != NULL){
      return m_wxAppExtOnEventLoopEnterwxEventLoopBaseP(this, param0);
    }
  }
  wxAppExtOnEventLoopExitwxEventLoopBasePFunc m_wxAppExtOnEventLoopExitwxEventLoopBaseP = NULL;
  virtual void OnEventLoopExit(wxEventLoopBase* param0) override
  {
    wxApp::OnEventLoopExit(param0);
    if (*m_wxAppExtOnEventLoopExitwxEventLoopBaseP != NULL){
      return m_wxAppExtOnEventLoopExitwxEventLoopBaseP(this, param0);
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
  wxAppExtOnInitCmdLinewxCmdLineParserRFunc m_wxAppExtOnInitCmdLinewxCmdLineParserR = NULL;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxApp::OnInitCmdLine(parser);
    if (*m_wxAppExtOnInitCmdLinewxCmdLineParserR != NULL){
      return m_wxAppExtOnInitCmdLinewxCmdLineParserR(this, parser);
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
  wxAppExtProcessEventwxEventRFunc m_wxAppExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxApp::ProcessEvent(event);
    if (*m_wxAppExtProcessEventwxEventR != NULL){
      return m_wxAppExtProcessEventwxEventR(this, event, res);
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
  wxAppExtQueueEventwxEventPFunc m_wxAppExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxApp::QueueEvent(event);
    if (*m_wxAppExtQueueEventwxEventP != NULL){
      return m_wxAppExtQueueEventwxEventP(this, event);
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
  wxAppExtSafeYieldwxWindowPboolFunc m_wxAppExtSafeYieldwxWindowPbool = NULL;
  virtual bool SafeYield(wxWindow* win, bool onlyIfNeeded) override
  {
    bool res = wxApp::SafeYield(win, onlyIfNeeded);
    if (*m_wxAppExtSafeYieldwxWindowPbool != NULL){
      return m_wxAppExtSafeYieldwxWindowPbool(this, win, onlyIfNeeded, res);
    }
    else {
      return res;
    }
  }
  wxAppExtSafeYieldForwxWindowPlongFunc m_wxAppExtSafeYieldForwxWindowPlong = NULL;
  virtual bool SafeYieldFor(wxWindow* win, long eventsToProcess) override
  {
    bool res = wxApp::SafeYieldFor(win, eventsToProcess);
    if (*m_wxAppExtSafeYieldForwxWindowPlong != NULL){
      return m_wxAppExtSafeYieldForwxWindowPlong(this, win, eventsToProcess, res);
    }
    else {
      return res;
    }
  }
  wxAppExtSearchEventTablewxEventTableRwxEventRFunc m_wxAppExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxApp::SearchEventTable(table, event);
    if (*m_wxAppExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxAppExtSearchEventTablewxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxAppExtSetActiveboolwxWindowPFunc m_wxAppExtSetActiveboolwxWindowP = NULL;
  virtual void SetActive(bool isActive, wxWindow* lastFocus) override
  {
    wxApp::SetActive(isActive, lastFocus);
    if (*m_wxAppExtSetActiveboolwxWindowP != NULL){
      return m_wxAppExtSetActiveboolwxWindowP(this, isActive, lastFocus);
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
  wxAppExtSetDisplayModewxVideoModeCRFunc m_wxAppExtSetDisplayModewxVideoModeCR = NULL;
  virtual bool SetDisplayMode(wxVideoMode const& param0) override
  {
    bool res = wxApp::SetDisplayMode(param0);
    if (*m_wxAppExtSetDisplayModewxVideoModeCR != NULL){
      return m_wxAppExtSetDisplayModewxVideoModeCR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppExtSetNativeThemewxStringCRFunc m_wxAppExtSetNativeThemewxStringCR = NULL;
  virtual bool SetNativeTheme(wxString const& param0) override
  {
    bool res = wxApp::SetNativeTheme(param0);
    if (*m_wxAppExtSetNativeThemewxStringCR != NULL){
      return m_wxAppExtSetNativeThemewxStringCR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppExtSetNextHandlerwxEvtHandlerPFunc m_wxAppExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxApp::SetNextHandler(handler);
    if (*m_wxAppExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxAppExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxAppExtSetPreviousHandlerwxEvtHandlerPFunc m_wxAppExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxApp::SetPreviousHandler(handler);
    if (*m_wxAppExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxAppExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxAppExtSetPrintModeintFunc m_wxAppExtSetPrintModeint = NULL;
  virtual void SetPrintMode(int param0) override
  {
    wxApp::SetPrintMode(param0);
    if (*m_wxAppExtSetPrintModeint != NULL){
      return m_wxAppExtSetPrintModeint(this, param0);
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
  wxAppExtTryAfterwxEventRFunc m_wxAppExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxApp::TryAfter(event);
    if (*m_wxAppExtTryAfterwxEventR != NULL){
      return m_wxAppExtTryAfterwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxAppExtTryBeforewxEventRFunc m_wxAppExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxApp::TryBefore(event);
    if (*m_wxAppExtTryBeforewxEventR != NULL){
      return m_wxAppExtTryBeforewxEventR(this, event, res);
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
  wxAppExtWXReservedApp1voidPFunc m_wxAppExtWXReservedApp1voidP = NULL;
  virtual void* WXReservedApp1(void* param0) override
  {
    void* res = wxApp::WXReservedApp1(param0);
    if (*m_wxAppExtWXReservedApp1voidP != NULL){
      return m_wxAppExtWXReservedApp1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppExtWXReservedApp2voidPFunc m_wxAppExtWXReservedApp2voidP = NULL;
  virtual void* WXReservedApp2(void* param0) override
  {
    void* res = wxApp::WXReservedApp2(param0);
    if (*m_wxAppExtWXReservedApp2voidP != NULL){
      return m_wxAppExtWXReservedApp2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppExtWXReservedEvtHandler1voidPFunc m_wxAppExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxApp::WXReservedEvtHandler1(param0);
    if (*m_wxAppExtWXReservedEvtHandler1voidP != NULL){
      return m_wxAppExtWXReservedEvtHandler1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxAppExtWXReservedEvtHandler2voidPFunc m_wxAppExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxApp::WXReservedEvtHandler2(param0);
    if (*m_wxAppExtWXReservedEvtHandler2voidP != NULL){
      return m_wxAppExtWXReservedEvtHandler2voidP(this, param0, res);
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
  wxAppExt(wxAppExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxAppExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc a_CallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR, wxAppExtCallOnInitFunc a_CallOnInit, wxAppExtCleanUpFunc a_CleanUp, wxAppExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxAppExtCreateRefDataFunc a_CreateRefData, wxAppExtCreateTraitsFunc a_CreateTraits, wxAppExtDispatchFunc a_Dispatch, wxAppExtDoGetClientDataFunc a_DoGetClientData, wxAppExtDoGetClientObjectFunc a_DoGetClientObject, wxAppExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxAppExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxAppExtExitFunc a_Exit, wxAppExtExitMainLoopFunc a_ExitMainLoop, wxAppExtFilterEventwxEventRFunc a_FilterEventwxEventR, wxAppExtGetClassInfoFunc a_GetClassInfo, wxAppExtGetDisplayModeFunc a_GetDisplayMode, wxAppExtGetEventHashTableFunc a_GetEventHashTable, wxAppExtGetEventTableFunc a_GetEventTable, wxAppExtGetLayoutDirectionFunc a_GetLayoutDirection, wxAppExtGetPrintModeFunc a_GetPrintMode, wxAppExtGetTopWindowFunc a_GetTopWindow, wxAppExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc a_HandleEventwxEvtHandlerPwxEventFunctionwxEventR, wxAppExtInitializeintRwxCharPPFunc a_InitializeintRwxCharPP, wxAppExtIsActiveFunc a_IsActive, wxAppExtIsGUIFunc a_IsGUI, wxAppExtMainLoopFunc a_MainLoop, wxAppExtOnAssertwxCharCPintwxCharCPwxCharCPFunc a_OnAssertwxCharCPintwxCharCPwxCharCP, wxAppExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc a_OnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP, wxAppExtOnCmdLineErrorwxCmdLineParserRFunc a_OnCmdLineErrorwxCmdLineParserR, wxAppExtOnCmdLineHelpwxCmdLineParserRFunc a_OnCmdLineHelpwxCmdLineParserR, wxAppExtOnCmdLineParsedwxCmdLineParserRFunc a_OnCmdLineParsedwxCmdLineParserR, wxAppExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxAppExtOnEventLoopEnterwxEventLoopBasePFunc a_OnEventLoopEnterwxEventLoopBaseP, wxAppExtOnEventLoopExitwxEventLoopBasePFunc a_OnEventLoopExitwxEventLoopBaseP, wxAppExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppExtOnExitFunc a_OnExit, wxAppExtOnFatalExceptionFunc a_OnFatalException, wxAppExtOnInitFunc a_OnInit, wxAppExtOnInitCmdLinewxCmdLineParserRFunc a_OnInitCmdLinewxCmdLineParserR, wxAppExtOnInitGuiFunc a_OnInitGui, wxAppExtOnLaunchedFunc a_OnLaunched, wxAppExtOnRunFunc a_OnRun, wxAppExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppExtPendingFunc a_Pending, wxAppExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxAppExtProcessIdleFunc a_ProcessIdle, wxAppExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxAppExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppExtSafeYieldwxWindowPboolFunc a_SafeYieldwxWindowPbool, wxAppExtSafeYieldForwxWindowPlongFunc a_SafeYieldForwxWindowPlong, wxAppExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxAppExtSetActiveboolwxWindowPFunc a_SetActiveboolwxWindowP, wxAppExtSetCLocaleFunc a_SetCLocale, wxAppExtSetDisplayModewxVideoModeCRFunc a_SetDisplayModewxVideoModeCR, wxAppExtSetNativeThemewxStringCRFunc a_SetNativeThemewxStringCR, wxAppExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxAppExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxAppExtSetPrintModeintFunc a_SetPrintModeint, wxAppExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxAppExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxAppExtUsesEventLoopFunc a_UsesEventLoop, wxAppExtWXReservedApp1voidPFunc a_WXReservedApp1voidP, wxAppExtWXReservedApp2voidPFunc a_WXReservedApp2voidP, wxAppExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxAppExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxAppExtWakeUpIdleFunc a_WakeUpIdle): wxApp() {
    m_wxAppExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxAppExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR = a_CallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR;
    m_wxAppExtCallOnInit = a_CallOnInit;
    m_wxAppExtCleanUp = a_CleanUp;
    m_wxAppExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxAppExtCreateRefData = a_CreateRefData;
    m_wxAppExtCreateTraits = a_CreateTraits;
    m_wxAppExtDispatch = a_Dispatch;
    m_wxAppExtDoGetClientData = a_DoGetClientData;
    m_wxAppExtDoGetClientObject = a_DoGetClientObject;
    m_wxAppExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxAppExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxAppExtExit = a_Exit;
    m_wxAppExtExitMainLoop = a_ExitMainLoop;
    m_wxAppExtFilterEventwxEventR = a_FilterEventwxEventR;
    m_wxAppExtGetClassInfo = a_GetClassInfo;
    m_wxAppExtGetDisplayMode = a_GetDisplayMode;
    m_wxAppExtGetEventHashTable = a_GetEventHashTable;
    m_wxAppExtGetEventTable = a_GetEventTable;
    m_wxAppExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxAppExtGetPrintMode = a_GetPrintMode;
    m_wxAppExtGetTopWindow = a_GetTopWindow;
    m_wxAppExtHandleEventwxEvtHandlerPwxEventFunctionwxEventR = a_HandleEventwxEvtHandlerPwxEventFunctionwxEventR;
    m_wxAppExtInitializeintRwxCharPP = a_InitializeintRwxCharPP;
    m_wxAppExtIsActive = a_IsActive;
    m_wxAppExtIsGUI = a_IsGUI;
    m_wxAppExtMainLoop = a_MainLoop;
    m_wxAppExtOnAssertwxCharCPintwxCharCPwxCharCP = a_OnAssertwxCharCPintwxCharCPwxCharCP;
    m_wxAppExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP = a_OnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP;
    m_wxAppExtOnCmdLineErrorwxCmdLineParserR = a_OnCmdLineErrorwxCmdLineParserR;
    m_wxAppExtOnCmdLineHelpwxCmdLineParserR = a_OnCmdLineHelpwxCmdLineParserR;
    m_wxAppExtOnCmdLineParsedwxCmdLineParserR = a_OnCmdLineParsedwxCmdLineParserR;
    m_wxAppExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxAppExtOnEventLoopEnterwxEventLoopBaseP = a_OnEventLoopEnterwxEventLoopBaseP;
    m_wxAppExtOnEventLoopExitwxEventLoopBaseP = a_OnEventLoopExitwxEventLoopBaseP;
    m_wxAppExtOnExceptionInMainLoop = a_OnExceptionInMainLoop;
    m_wxAppExtOnExit = a_OnExit;
    m_wxAppExtOnFatalException = a_OnFatalException;
    m_wxAppExtOnInit = a_OnInit;
    m_wxAppExtOnInitCmdLinewxCmdLineParserR = a_OnInitCmdLinewxCmdLineParserR;
    m_wxAppExtOnInitGui = a_OnInitGui;
    m_wxAppExtOnLaunched = a_OnLaunched;
    m_wxAppExtOnRun = a_OnRun;
    m_wxAppExtOnUnhandledException = a_OnUnhandledException;
    m_wxAppExtPending = a_Pending;
    m_wxAppExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxAppExtProcessIdle = a_ProcessIdle;
    m_wxAppExtProcessPendingEvents = a_ProcessPendingEvents;
    m_wxAppExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxAppExtRethrowStoredException = a_RethrowStoredException;
    m_wxAppExtSafeYieldwxWindowPbool = a_SafeYieldwxWindowPbool;
    m_wxAppExtSafeYieldForwxWindowPlong = a_SafeYieldForwxWindowPlong;
    m_wxAppExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxAppExtSetActiveboolwxWindowP = a_SetActiveboolwxWindowP;
    m_wxAppExtSetCLocale = a_SetCLocale;
    m_wxAppExtSetDisplayModewxVideoModeCR = a_SetDisplayModewxVideoModeCR;
    m_wxAppExtSetNativeThemewxStringCR = a_SetNativeThemewxStringCR;
    m_wxAppExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxAppExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxAppExtSetPrintModeint = a_SetPrintModeint;
    m_wxAppExtStoreCurrentException = a_StoreCurrentException;
    m_wxAppExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxAppExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxAppExtUsesEventLoop = a_UsesEventLoop;
    m_wxAppExtWXReservedApp1voidP = a_WXReservedApp1voidP;
    m_wxAppExtWXReservedApp2voidP = a_WXReservedApp2voidP;
    m_wxAppExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxAppExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
    m_wxAppExtWakeUpIdle = a_WakeUpIdle;
  }
};



#endif
