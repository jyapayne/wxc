#ifndef _WX_APP_CONSOLE_H_EXT_
#define _WX_APP_CONSOLE_H_EXT_

class wxAppConsoleBaseExt;
typedef bool (*wxAppConsoleBaseExtInitializeFunc)(const wxAppConsoleBaseExt* self, int& argc, wxChar** argv);
typedef bool (*wxAppConsoleBaseExtCallOnInitFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtOnInitFunc)(const wxAppConsoleBaseExt* self);
typedef int (*wxAppConsoleBaseExtOnRunFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtOnLaunchedFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtOnEventLoopEnterFunc)(const wxAppConsoleBaseExt* self, wxEventLoopBase* param0);
typedef int (*wxAppConsoleBaseExtOnExitFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtOnEventLoopExitFunc)(const wxAppConsoleBaseExt* self, wxEventLoopBase* param0);
typedef void (*wxAppConsoleBaseExtCleanUpFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtOnFatalExceptionFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtExitFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtOnInitCmdLineFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppConsoleBaseExtOnCmdLineParsedFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppConsoleBaseExtOnCmdLineHelpFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser);
typedef bool (*wxAppConsoleBaseExtOnCmdLineErrorFunc)(const wxAppConsoleBaseExt* self, wxCmdLineParser& parser);
typedef void (*wxAppConsoleBaseExtSetCLocaleFunc)(const wxAppConsoleBaseExt* self);
typedef int (*wxAppConsoleBaseExtFilterEventFunc)(const wxAppConsoleBaseExt* self, wxEvent& event);
typedef void (*wxAppConsoleBaseExtCallEventHandlerFunc)(const wxAppConsoleBaseExt* self, wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event);
typedef void (*wxAppConsoleBaseExtHandleEventFunc)(const wxAppConsoleBaseExt* self, wxEvtHandler* handler, wxEventFunction func, wxEvent& event);
typedef void (*wxAppConsoleBaseExtOnUnhandledExceptionFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtOnExceptionInMainLoopFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtStoreCurrentExceptionFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtRethrowStoredExceptionFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtProcessPendingEventsFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtPendingFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtDispatchFunc)(const wxAppConsoleBaseExt* self);
typedef int (*wxAppConsoleBaseExtMainLoopFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtExitMainLoopFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtWakeUpIdleFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtProcessIdleFunc)(const wxAppConsoleBaseExt* self);
typedef bool (*wxAppConsoleBaseExtUsesEventLoopFunc)(const wxAppConsoleBaseExt* self);
typedef void (*wxAppConsoleBaseExtOnAssertFailureFunc)(const wxAppConsoleBaseExt* self, wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg);
typedef void (*wxAppConsoleBaseExtOnAssertFunc)(const wxAppConsoleBaseExt* self, wxChar const* file, int line, wxChar const* cond, wxChar const* msg);
typedef bool (*wxAppConsoleBaseExtIsGUIFunc)(const wxAppConsoleBaseExt* self);
typedef wxAppTraits* (*wxAppConsoleBaseExtCreateTraitsFunc)(const wxAppConsoleBaseExt* self);
typedef void* (*wxAppConsoleBaseExtWXReservedApp1Func)(const wxAppConsoleBaseExt* self, void* param0);
typedef void* (*wxAppConsoleBaseExtWXReservedApp2Func)(const wxAppConsoleBaseExt* self, void* param0);

class wxAppConsoleBaseExt: public wxAppConsoleBase
{
public:
  wxAppConsoleBaseExt(): wxAppConsoleBase()  {  }
  virtual ~wxAppConsoleBaseExt() override  {  }
  wxAppConsoleBaseExtInitializeFunc m_wxAppConsoleBaseExtInitialize = NULL;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxAppConsoleBase::Initialize(argc, argv);
    if (*m_wxAppConsoleBaseExtInitialize != NULL){
      return m_wxAppConsoleBaseExtInitialize(this, argc, argv);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtCallOnInitFunc m_wxAppConsoleBaseExtCallOnInit = NULL;
  virtual bool CallOnInit() override
  {
    bool res = wxAppConsoleBase::CallOnInit();
    if (*m_wxAppConsoleBaseExtCallOnInit != NULL){
      return m_wxAppConsoleBaseExtCallOnInit(this);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnInitFunc m_wxAppConsoleBaseExtOnInit = NULL;
  virtual bool OnInit() override
  {
    bool res = wxAppConsoleBase::OnInit();
    if (*m_wxAppConsoleBaseExtOnInit != NULL){
      return m_wxAppConsoleBaseExtOnInit(this);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnRunFunc m_wxAppConsoleBaseExtOnRun = NULL;
  virtual int OnRun() override
  {
    int res = wxAppConsoleBase::OnRun();
    if (*m_wxAppConsoleBaseExtOnRun != NULL){
      return m_wxAppConsoleBaseExtOnRun(this);
    }
    else {
      return res;
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
  wxAppConsoleBaseExtOnEventLoopEnterFunc m_wxAppConsoleBaseExtOnEventLoopEnter = NULL;
  virtual void OnEventLoopEnter(wxEventLoopBase* param0) override
  {
    wxAppConsoleBase::OnEventLoopEnter(param0);
    if (*m_wxAppConsoleBaseExtOnEventLoopEnter != NULL){
      return m_wxAppConsoleBaseExtOnEventLoopEnter(this, param0);
    }
  }
  wxAppConsoleBaseExtOnExitFunc m_wxAppConsoleBaseExtOnExit = NULL;
  virtual int OnExit() override
  {
    int res = wxAppConsoleBase::OnExit();
    if (*m_wxAppConsoleBaseExtOnExit != NULL){
      return m_wxAppConsoleBaseExtOnExit(this);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnEventLoopExitFunc m_wxAppConsoleBaseExtOnEventLoopExit = NULL;
  virtual void OnEventLoopExit(wxEventLoopBase* param0) override
  {
    wxAppConsoleBase::OnEventLoopExit(param0);
    if (*m_wxAppConsoleBaseExtOnEventLoopExit != NULL){
      return m_wxAppConsoleBaseExtOnEventLoopExit(this, param0);
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
  wxAppConsoleBaseExtOnFatalExceptionFunc m_wxAppConsoleBaseExtOnFatalException = NULL;
  virtual void OnFatalException() override
  {
    wxAppConsoleBase::OnFatalException();
    if (*m_wxAppConsoleBaseExtOnFatalException != NULL){
      return m_wxAppConsoleBaseExtOnFatalException(this);
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
  wxAppConsoleBaseExtOnInitCmdLineFunc m_wxAppConsoleBaseExtOnInitCmdLine = NULL;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxAppConsoleBase::OnInitCmdLine(parser);
    if (*m_wxAppConsoleBaseExtOnInitCmdLine != NULL){
      return m_wxAppConsoleBaseExtOnInitCmdLine(this, parser);
    }
  }
  wxAppConsoleBaseExtOnCmdLineParsedFunc m_wxAppConsoleBaseExtOnCmdLineParsed = NULL;
  virtual bool OnCmdLineParsed(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsoleBase::OnCmdLineParsed(parser);
    if (*m_wxAppConsoleBaseExtOnCmdLineParsed != NULL){
      return m_wxAppConsoleBaseExtOnCmdLineParsed(this, parser);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnCmdLineHelpFunc m_wxAppConsoleBaseExtOnCmdLineHelp = NULL;
  virtual bool OnCmdLineHelp(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsoleBase::OnCmdLineHelp(parser);
    if (*m_wxAppConsoleBaseExtOnCmdLineHelp != NULL){
      return m_wxAppConsoleBaseExtOnCmdLineHelp(this, parser);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnCmdLineErrorFunc m_wxAppConsoleBaseExtOnCmdLineError = NULL;
  virtual bool OnCmdLineError(wxCmdLineParser& parser) override
  {
    bool res = wxAppConsoleBase::OnCmdLineError(parser);
    if (*m_wxAppConsoleBaseExtOnCmdLineError != NULL){
      return m_wxAppConsoleBaseExtOnCmdLineError(this, parser);
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
  wxAppConsoleBaseExtFilterEventFunc m_wxAppConsoleBaseExtFilterEvent = NULL;
  virtual int FilterEvent(wxEvent& event) override
  {
    int res = wxAppConsoleBase::FilterEvent(event);
    if (*m_wxAppConsoleBaseExtFilterEvent != NULL){
      return m_wxAppConsoleBaseExtFilterEvent(this, event);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtCallEventHandlerFunc m_wxAppConsoleBaseExtCallEventHandler = NULL;
  virtual void CallEventHandler(wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event) const override
  {
    wxAppConsoleBase::CallEventHandler(handler, functor, event);
    if (*m_wxAppConsoleBaseExtCallEventHandler != NULL){
      return m_wxAppConsoleBaseExtCallEventHandler(this, handler, functor, event);
    }
  }
  wxAppConsoleBaseExtHandleEventFunc m_wxAppConsoleBaseExtHandleEvent = NULL;
  virtual void HandleEvent(wxEvtHandler* handler, wxEventFunction func, wxEvent& event) const override
  {
    wxAppConsoleBase::HandleEvent(handler, func, event);
    if (*m_wxAppConsoleBaseExtHandleEvent != NULL){
      return m_wxAppConsoleBaseExtHandleEvent(this, handler, func, event);
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
  wxAppConsoleBaseExtOnExceptionInMainLoopFunc m_wxAppConsoleBaseExtOnExceptionInMainLoop = NULL;
  virtual bool OnExceptionInMainLoop() override
  {
    bool res = wxAppConsoleBase::OnExceptionInMainLoop();
    if (*m_wxAppConsoleBaseExtOnExceptionInMainLoop != NULL){
      return m_wxAppConsoleBaseExtOnExceptionInMainLoop(this);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtStoreCurrentExceptionFunc m_wxAppConsoleBaseExtStoreCurrentException = NULL;
  virtual bool StoreCurrentException() override
  {
    bool res = wxAppConsoleBase::StoreCurrentException();
    if (*m_wxAppConsoleBaseExtStoreCurrentException != NULL){
      return m_wxAppConsoleBaseExtStoreCurrentException(this);
    }
    else {
      return res;
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
  wxAppConsoleBaseExtProcessPendingEventsFunc m_wxAppConsoleBaseExtProcessPendingEvents = NULL;
  virtual void ProcessPendingEvents() override
  {
    wxAppConsoleBase::ProcessPendingEvents();
    if (*m_wxAppConsoleBaseExtProcessPendingEvents != NULL){
      return m_wxAppConsoleBaseExtProcessPendingEvents(this);
    }
  }
  wxAppConsoleBaseExtPendingFunc m_wxAppConsoleBaseExtPending = NULL;
  virtual bool Pending() override
  {
    bool res = wxAppConsoleBase::Pending();
    if (*m_wxAppConsoleBaseExtPending != NULL){
      return m_wxAppConsoleBaseExtPending(this);
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
      return m_wxAppConsoleBaseExtDispatch(this);
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
      return m_wxAppConsoleBaseExtMainLoop(this);
    }
    else {
      return res;
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
  wxAppConsoleBaseExtWakeUpIdleFunc m_wxAppConsoleBaseExtWakeUpIdle = NULL;
  virtual void WakeUpIdle() override
  {
    wxAppConsoleBase::WakeUpIdle();
    if (*m_wxAppConsoleBaseExtWakeUpIdle != NULL){
      return m_wxAppConsoleBaseExtWakeUpIdle(this);
    }
  }
  wxAppConsoleBaseExtProcessIdleFunc m_wxAppConsoleBaseExtProcessIdle = NULL;
  virtual bool ProcessIdle() override
  {
    bool res = wxAppConsoleBase::ProcessIdle();
    if (*m_wxAppConsoleBaseExtProcessIdle != NULL){
      return m_wxAppConsoleBaseExtProcessIdle(this);
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
      return m_wxAppConsoleBaseExtUsesEventLoop(this);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtOnAssertFailureFunc m_wxAppConsoleBaseExtOnAssertFailure = NULL;
  virtual void OnAssertFailure(wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsoleBase::OnAssertFailure(file, line, func, cond, msg);
    if (*m_wxAppConsoleBaseExtOnAssertFailure != NULL){
      return m_wxAppConsoleBaseExtOnAssertFailure(this, file, line, func, cond, msg);
    }
  }
  wxAppConsoleBaseExtOnAssertFunc m_wxAppConsoleBaseExtOnAssert = NULL;
  virtual void OnAssert(wxChar const* file, int line, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsoleBase::OnAssert(file, line, cond, msg);
    if (*m_wxAppConsoleBaseExtOnAssert != NULL){
      return m_wxAppConsoleBaseExtOnAssert(this, file, line, cond, msg);
    }
  }
  wxAppConsoleBaseExtIsGUIFunc m_wxAppConsoleBaseExtIsGUI = NULL;
  virtual bool IsGUI() const override
  {
    bool res = wxAppConsoleBase::IsGUI();
    if (*m_wxAppConsoleBaseExtIsGUI != NULL){
      return m_wxAppConsoleBaseExtIsGUI(this);
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
      return m_wxAppConsoleBaseExtCreateTraits(this);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtWXReservedApp1Func m_wxAppConsoleBaseExtWXReservedApp1 = NULL;
  virtual void* WXReservedApp1(void* param0) override
  {
    void* res = wxAppConsoleBase::WXReservedApp1(param0);
    if (*m_wxAppConsoleBaseExtWXReservedApp1 != NULL){
      return m_wxAppConsoleBaseExtWXReservedApp1(this, param0);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExtWXReservedApp2Func m_wxAppConsoleBaseExtWXReservedApp2 = NULL;
  virtual void* WXReservedApp2(void* param0) override
  {
    void* res = wxAppConsoleBase::WXReservedApp2(param0);
    if (*m_wxAppConsoleBaseExtWXReservedApp2 != NULL){
      return m_wxAppConsoleBaseExtWXReservedApp2(this, param0);
    }
    else {
      return res;
    }
  }
  wxAppConsoleBaseExt(wxAppConsoleBaseExtInitializeFunc a_Initialize, wxAppConsoleBaseExtCallOnInitFunc a_CallOnInit, wxAppConsoleBaseExtOnInitFunc a_OnInit, wxAppConsoleBaseExtOnRunFunc a_OnRun, wxAppConsoleBaseExtOnLaunchedFunc a_OnLaunched, wxAppConsoleBaseExtOnEventLoopEnterFunc a_OnEventLoopEnter, wxAppConsoleBaseExtOnExitFunc a_OnExit, wxAppConsoleBaseExtOnEventLoopExitFunc a_OnEventLoopExit, wxAppConsoleBaseExtCleanUpFunc a_CleanUp, wxAppConsoleBaseExtOnFatalExceptionFunc a_OnFatalException, wxAppConsoleBaseExtExitFunc a_Exit, wxAppConsoleBaseExtOnInitCmdLineFunc a_OnInitCmdLine, wxAppConsoleBaseExtOnCmdLineParsedFunc a_OnCmdLineParsed, wxAppConsoleBaseExtOnCmdLineHelpFunc a_OnCmdLineHelp, wxAppConsoleBaseExtOnCmdLineErrorFunc a_OnCmdLineError, wxAppConsoleBaseExtSetCLocaleFunc a_SetCLocale, wxAppConsoleBaseExtFilterEventFunc a_FilterEvent, wxAppConsoleBaseExtCallEventHandlerFunc a_CallEventHandler, wxAppConsoleBaseExtHandleEventFunc a_HandleEvent, wxAppConsoleBaseExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppConsoleBaseExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppConsoleBaseExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppConsoleBaseExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppConsoleBaseExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppConsoleBaseExtPendingFunc a_Pending, wxAppConsoleBaseExtDispatchFunc a_Dispatch, wxAppConsoleBaseExtMainLoopFunc a_MainLoop, wxAppConsoleBaseExtExitMainLoopFunc a_ExitMainLoop, wxAppConsoleBaseExtWakeUpIdleFunc a_WakeUpIdle, wxAppConsoleBaseExtProcessIdleFunc a_ProcessIdle, wxAppConsoleBaseExtUsesEventLoopFunc a_UsesEventLoop, wxAppConsoleBaseExtOnAssertFailureFunc a_OnAssertFailure, wxAppConsoleBaseExtOnAssertFunc a_OnAssert, wxAppConsoleBaseExtIsGUIFunc a_IsGUI, wxAppConsoleBaseExtCreateTraitsFunc a_CreateTraits, wxAppConsoleBaseExtWXReservedApp1Func a_WXReservedApp1, wxAppConsoleBaseExtWXReservedApp2Func a_WXReservedApp2): wxAppConsoleBase() {
    m_wxAppConsoleBaseExtInitialize = a_Initialize;
    m_wxAppConsoleBaseExtCallOnInit = a_CallOnInit;
    m_wxAppConsoleBaseExtOnInit = a_OnInit;
    m_wxAppConsoleBaseExtOnRun = a_OnRun;
    m_wxAppConsoleBaseExtOnLaunched = a_OnLaunched;
    m_wxAppConsoleBaseExtOnEventLoopEnter = a_OnEventLoopEnter;
    m_wxAppConsoleBaseExtOnExit = a_OnExit;
    m_wxAppConsoleBaseExtOnEventLoopExit = a_OnEventLoopExit;
    m_wxAppConsoleBaseExtCleanUp = a_CleanUp;
    m_wxAppConsoleBaseExtOnFatalException = a_OnFatalException;
    m_wxAppConsoleBaseExtExit = a_Exit;
    m_wxAppConsoleBaseExtOnInitCmdLine = a_OnInitCmdLine;
    m_wxAppConsoleBaseExtOnCmdLineParsed = a_OnCmdLineParsed;
    m_wxAppConsoleBaseExtOnCmdLineHelp = a_OnCmdLineHelp;
    m_wxAppConsoleBaseExtOnCmdLineError = a_OnCmdLineError;
    m_wxAppConsoleBaseExtSetCLocale = a_SetCLocale;
    m_wxAppConsoleBaseExtFilterEvent = a_FilterEvent;
    m_wxAppConsoleBaseExtCallEventHandler = a_CallEventHandler;
    m_wxAppConsoleBaseExtHandleEvent = a_HandleEvent;
    m_wxAppConsoleBaseExtOnUnhandledException = a_OnUnhandledException;
    m_wxAppConsoleBaseExtOnExceptionInMainLoop = a_OnExceptionInMainLoop;
    m_wxAppConsoleBaseExtStoreCurrentException = a_StoreCurrentException;
    m_wxAppConsoleBaseExtRethrowStoredException = a_RethrowStoredException;
    m_wxAppConsoleBaseExtProcessPendingEvents = a_ProcessPendingEvents;
    m_wxAppConsoleBaseExtPending = a_Pending;
    m_wxAppConsoleBaseExtDispatch = a_Dispatch;
    m_wxAppConsoleBaseExtMainLoop = a_MainLoop;
    m_wxAppConsoleBaseExtExitMainLoop = a_ExitMainLoop;
    m_wxAppConsoleBaseExtWakeUpIdle = a_WakeUpIdle;
    m_wxAppConsoleBaseExtProcessIdle = a_ProcessIdle;
    m_wxAppConsoleBaseExtUsesEventLoop = a_UsesEventLoop;
    m_wxAppConsoleBaseExtOnAssertFailure = a_OnAssertFailure;
    m_wxAppConsoleBaseExtOnAssert = a_OnAssert;
    m_wxAppConsoleBaseExtIsGUI = a_IsGUI;
    m_wxAppConsoleBaseExtCreateTraits = a_CreateTraits;
    m_wxAppConsoleBaseExtWXReservedApp1 = a_WXReservedApp1;
    m_wxAppConsoleBaseExtWXReservedApp2 = a_WXReservedApp2;
  }
};


#endif
