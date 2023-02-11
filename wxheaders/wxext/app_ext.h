#ifndef _WX_APP_H_EXT_
#define _WX_APP_H_EXT_

#include <wx/vidmode.h>

class wxAppExt;
typedef void (*wxAppExtAddPendingEventwxEventCRFunc)(const wxAppExt* self, wxEvent const& event);
typedef void (*wxAppExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc)(const wxAppExt* self, wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event);
typedef bool (*wxAppExtCallOnInitFunc)(const wxAppExt* self);
typedef void (*wxAppExtCleanUpFunc)(const wxAppExt* self);
typedef wxObjectRefData* (*wxAppExtCloneRefDatawxObjectRefDataCPFunc)(const wxAppExt* self, wxObjectRefData const* data);
typedef wxObjectRefData* (*wxAppExtCreateRefDataFunc)(const wxAppExt* self);
typedef wxAppTraits* (*wxAppExtCreateTraitsFunc)(const wxAppExt* self);
typedef bool (*wxAppExtDispatchFunc)(const wxAppExt* self);
typedef void* (*wxAppExtDoGetClientDataFunc)(const wxAppExt* self);
typedef wxClientData* (*wxAppExtDoGetClientObjectFunc)(const wxAppExt* self);
typedef void (*wxAppExtDoSetClientDatavoidPFunc)(const wxAppExt* self, void* data);
typedef void (*wxAppExtDoSetClientObjectwxClientDataPFunc)(const wxAppExt* self, wxClientData* data);
typedef void (*wxAppExtExitFunc)(const wxAppExt* self);
typedef void (*wxAppExtExitMainLoopFunc)(const wxAppExt* self);
typedef int (*wxAppExtFilterEventwxEventRFunc)(const wxAppExt* self, wxEvent& event);
typedef wxClassInfo* (*wxAppExtGetClassInfoFunc)(const wxAppExt* self);
typedef wxVideoMode (*wxAppExtGetDisplayModeFunc)(const wxAppExt* self);
typedef wxEventHashTable& (*wxAppExtGetEventHashTableFunc)(const wxAppExt* self);
typedef wxEventTable const* (*wxAppExtGetEventTableFunc)(const wxAppExt* self);
typedef wxLayoutDirection (*wxAppExtGetLayoutDirectionFunc)(const wxAppExt* self);
typedef wxWindow* (*wxAppExtGetTopWindowFunc)(const wxAppExt* self);
typedef void (*wxAppExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc)(const wxAppExt* self, wxEvtHandler* handler, wxEventFunction func, wxEvent& event);
typedef bool (*wxAppExtInitializeintRwxCharPPFunc)(const wxAppExt* self, int& argc, wxChar** argv);
typedef bool (*wxAppExtIsActiveFunc)(const wxAppExt* self);
typedef bool (*wxAppExtIsGUIFunc)(const wxAppExt* self);
typedef int (*wxAppExtMainLoopFunc)(const wxAppExt* self);
typedef void (*wxAppExtOnAssertwxCharCPintwxCharCPwxCharCPFunc)(const wxAppExt* self, wxChar const* file, int line, wxChar const* cond, wxChar const* msg);
typedef void (*wxAppExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc)(const wxAppExt* self, wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg);
typedef bool (*wxAppExtOnCmdLineErrorwxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppExtOnCmdLineHelpwxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppExtOnCmdLineParsedwxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxAppExt* self, wxDynamicEventTableEntry& param0);
typedef void (*wxAppExtOnEventLoopEnterwxEventLoopBasePFunc)(const wxAppExt* self, wxEventLoopBase* param0);
typedef void (*wxAppExtOnEventLoopExitwxEventLoopBasePFunc)(const wxAppExt* self, wxEventLoopBase* param0);
typedef bool (*wxAppExtOnExceptionInMainLoopFunc)(const wxAppExt* self);
typedef int (*wxAppExtOnExitFunc)(const wxAppExt* self);
typedef void (*wxAppExtOnFatalExceptionFunc)(const wxAppExt* self);
typedef bool (*wxAppExtOnInitFunc)(const wxAppExt* self);
typedef void (*wxAppExtOnInitCmdLinewxCmdLineParserRFunc)(const wxAppExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppExtOnInitGuiFunc)(const wxAppExt* self);
typedef void (*wxAppExtOnLaunchedFunc)(const wxAppExt* self);
typedef int (*wxAppExtOnRunFunc)(const wxAppExt* self);
typedef void (*wxAppExtOnUnhandledExceptionFunc)(const wxAppExt* self);
typedef bool (*wxAppExtPendingFunc)(const wxAppExt* self);
typedef bool (*wxAppExtProcessEventwxEventRFunc)(const wxAppExt* self, wxEvent& event);
typedef bool (*wxAppExtProcessIdleFunc)(const wxAppExt* self);
typedef void (*wxAppExtProcessPendingEventsFunc)(const wxAppExt* self);
typedef void (*wxAppExtQueueEventwxEventPFunc)(const wxAppExt* self, wxEvent* event);
typedef void (*wxAppExtRethrowStoredExceptionFunc)(const wxAppExt* self);
typedef bool (*wxAppExtSafeYieldwxWindowPboolFunc)(const wxAppExt* self, wxWindow* win, bool onlyIfNeeded);
typedef bool (*wxAppExtSafeYieldForwxWindowPlongFunc)(const wxAppExt* self, wxWindow* win, long eventsToProcess);
typedef bool (*wxAppExtSearchEventTablewxEventTableRwxEventRFunc)(const wxAppExt* self, wxEventTable& table, wxEvent& event);
typedef void (*wxAppExtSetActiveboolwxWindowPFunc)(const wxAppExt* self, bool isActive, wxWindow* lastFocus);
typedef void (*wxAppExtSetCLocaleFunc)(const wxAppExt* self);
typedef bool (*wxAppExtSetDisplayModewxVideoModeCRFunc)(const wxAppExt* self, wxVideoMode const& param0);
typedef bool (*wxAppExtSetNativeThemewxStringCRFunc)(const wxAppExt* self, wxString const& param0);
typedef void (*wxAppExtSetNextHandlerwxEvtHandlerPFunc)(const wxAppExt* self, wxEvtHandler* handler);
typedef void (*wxAppExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxAppExt* self, wxEvtHandler* handler);
typedef void (*wxAppExtSetPrintModeintFunc)(const wxAppExt* self, int param0);
typedef bool (*wxAppExtStoreCurrentExceptionFunc)(const wxAppExt* self);
typedef bool (*wxAppExtTryAfterwxEventRFunc)(const wxAppExt* self, wxEvent& event);
typedef bool (*wxAppExtTryBeforewxEventRFunc)(const wxAppExt* self, wxEvent& event);
typedef bool (*wxAppExtUsesEventLoopFunc)(const wxAppExt* self);
typedef void* (*wxAppExtWXReservedApp1voidPFunc)(const wxAppExt* self, void* param0);
typedef void* (*wxAppExtWXReservedApp2voidPFunc)(const wxAppExt* self, void* param0);
typedef void* (*wxAppExtWXReservedEvtHandler1voidPFunc)(const wxAppExt* self, void* param0);
typedef void* (*wxAppExtWXReservedEvtHandler2voidPFunc)(const wxAppExt* self, void* param0);
typedef void (*wxAppExtWakeUpIdleFunc)(const wxAppExt* self);

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
      return m_wxAppExtCallOnInit(this);
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
      return m_wxAppExtCloneRefDatawxObjectRefDataCP(this, data);
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
      return m_wxAppExtCreateRefData(this);
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
      return m_wxAppExtCreateTraits(this);
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
      return m_wxAppExtDispatch(this);
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
      return m_wxAppExtDoGetClientData(this);
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
      return m_wxAppExtDoGetClientObject(this);
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
      return m_wxAppExtFilterEventwxEventR(this, event);
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
      return m_wxAppExtGetClassInfo(this);
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
      return m_wxAppExtGetDisplayMode(this);
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
      return m_wxAppExtGetEventHashTable(this);
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
      return m_wxAppExtGetEventTable(this);
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
      return m_wxAppExtGetLayoutDirection(this);
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
      return m_wxAppExtGetTopWindow(this);
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
      return m_wxAppExtInitializeintRwxCharPP(this, argc, argv);
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
      return m_wxAppExtIsActive(this);
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
      return m_wxAppExtIsGUI(this);
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
      return m_wxAppExtMainLoop(this);
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
      return m_wxAppExtOnCmdLineErrorwxCmdLineParserR(this, parser);
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
      return m_wxAppExtOnCmdLineHelpwxCmdLineParserR(this, parser);
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
      return m_wxAppExtOnCmdLineParsedwxCmdLineParserR(this, parser);
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
      return m_wxAppExtOnDynamicBindwxDynamicEventTableEntryR(this, param0);
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
      return m_wxAppExtOnExceptionInMainLoop(this);
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
      return m_wxAppExtOnExit(this);
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
      return m_wxAppExtOnInit(this);
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
      return m_wxAppExtOnInitGui(this);
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
      return m_wxAppExtOnRun(this);
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
      return m_wxAppExtPending(this);
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
      return m_wxAppExtProcessEventwxEventR(this, event);
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
      return m_wxAppExtProcessIdle(this);
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
      return m_wxAppExtSafeYieldwxWindowPbool(this, win, onlyIfNeeded);
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
      return m_wxAppExtSafeYieldForwxWindowPlong(this, win, eventsToProcess);
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
      return m_wxAppExtSearchEventTablewxEventTableRwxEventR(this, table, event);
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
      return m_wxAppExtSetDisplayModewxVideoModeCR(this, param0);
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
      return m_wxAppExtSetNativeThemewxStringCR(this, param0);
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
      return m_wxAppExtStoreCurrentException(this);
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
      return m_wxAppExtTryAfterwxEventR(this, event);
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
      return m_wxAppExtTryBeforewxEventR(this, event);
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
      return m_wxAppExtUsesEventLoop(this);
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
      return m_wxAppExtWXReservedApp1voidP(this, param0);
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
      return m_wxAppExtWXReservedApp2voidP(this, param0);
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
      return m_wxAppExtWXReservedEvtHandler1voidP(this, param0);
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
      return m_wxAppExtWXReservedEvtHandler2voidP(this, param0);
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
  wxAppExt(wxAppExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxAppExtCallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventRFunc a_CallEventHandlerwxEvtHandlerPwxEventFunctorRwxEventR, wxAppExtCallOnInitFunc a_CallOnInit, wxAppExtCleanUpFunc a_CleanUp, wxAppExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxAppExtCreateRefDataFunc a_CreateRefData, wxAppExtCreateTraitsFunc a_CreateTraits, wxAppExtDispatchFunc a_Dispatch, wxAppExtDoGetClientDataFunc a_DoGetClientData, wxAppExtDoGetClientObjectFunc a_DoGetClientObject, wxAppExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxAppExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxAppExtExitFunc a_Exit, wxAppExtExitMainLoopFunc a_ExitMainLoop, wxAppExtFilterEventwxEventRFunc a_FilterEventwxEventR, wxAppExtGetClassInfoFunc a_GetClassInfo, wxAppExtGetDisplayModeFunc a_GetDisplayMode, wxAppExtGetEventHashTableFunc a_GetEventHashTable, wxAppExtGetEventTableFunc a_GetEventTable, wxAppExtGetLayoutDirectionFunc a_GetLayoutDirection, wxAppExtGetTopWindowFunc a_GetTopWindow, wxAppExtHandleEventwxEvtHandlerPwxEventFunctionwxEventRFunc a_HandleEventwxEvtHandlerPwxEventFunctionwxEventR, wxAppExtInitializeintRwxCharPPFunc a_InitializeintRwxCharPP, wxAppExtIsActiveFunc a_IsActive, wxAppExtIsGUIFunc a_IsGUI, wxAppExtMainLoopFunc a_MainLoop, wxAppExtOnAssertwxCharCPintwxCharCPwxCharCPFunc a_OnAssertwxCharCPintwxCharCPwxCharCP, wxAppExtOnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCPFunc a_OnAssertFailurewxCharCPintwxCharCPwxCharCPwxCharCP, wxAppExtOnCmdLineErrorwxCmdLineParserRFunc a_OnCmdLineErrorwxCmdLineParserR, wxAppExtOnCmdLineHelpwxCmdLineParserRFunc a_OnCmdLineHelpwxCmdLineParserR, wxAppExtOnCmdLineParsedwxCmdLineParserRFunc a_OnCmdLineParsedwxCmdLineParserR, wxAppExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxAppExtOnEventLoopEnterwxEventLoopBasePFunc a_OnEventLoopEnterwxEventLoopBaseP, wxAppExtOnEventLoopExitwxEventLoopBasePFunc a_OnEventLoopExitwxEventLoopBaseP, wxAppExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppExtOnExitFunc a_OnExit, wxAppExtOnFatalExceptionFunc a_OnFatalException, wxAppExtOnInitFunc a_OnInit, wxAppExtOnInitCmdLinewxCmdLineParserRFunc a_OnInitCmdLinewxCmdLineParserR, wxAppExtOnInitGuiFunc a_OnInitGui, wxAppExtOnLaunchedFunc a_OnLaunched, wxAppExtOnRunFunc a_OnRun, wxAppExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppExtPendingFunc a_Pending, wxAppExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxAppExtProcessIdleFunc a_ProcessIdle, wxAppExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxAppExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppExtSafeYieldwxWindowPboolFunc a_SafeYieldwxWindowPbool, wxAppExtSafeYieldForwxWindowPlongFunc a_SafeYieldForwxWindowPlong, wxAppExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxAppExtSetActiveboolwxWindowPFunc a_SetActiveboolwxWindowP, wxAppExtSetCLocaleFunc a_SetCLocale, wxAppExtSetDisplayModewxVideoModeCRFunc a_SetDisplayModewxVideoModeCR, wxAppExtSetNativeThemewxStringCRFunc a_SetNativeThemewxStringCR, wxAppExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxAppExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxAppExtSetPrintModeintFunc a_SetPrintModeint, wxAppExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxAppExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxAppExtUsesEventLoopFunc a_UsesEventLoop, wxAppExtWXReservedApp1voidPFunc a_WXReservedApp1voidP, wxAppExtWXReservedApp2voidPFunc a_WXReservedApp2voidP, wxAppExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxAppExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP, wxAppExtWakeUpIdleFunc a_WakeUpIdle): wxApp() {
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

class wxAppInitializerExt: public wxAppInitializer
{
public:
  wxAppInitializerExt(wxAppInitializerFunction fn): wxAppInitializer(fn)  {  }
};


#endif
