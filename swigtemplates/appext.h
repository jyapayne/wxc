#include <wx/wx.h>
#include <wx/vidmode.h>

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
class wxAppBaseExt;
typedef bool (*wxAppBaseExtInitializeFunc)(const wxAppBaseExt* self, int& argc, wxChar** argv);
typedef bool (*wxAppBaseExtOnInitGuiFunc)(const wxAppBaseExt* self);
typedef int (*wxAppBaseExtOnRunFunc)(const wxAppBaseExt* self);
typedef int (*wxAppBaseExtOnExitFunc)(const wxAppBaseExt* self);
typedef void (*wxAppBaseExtCleanUpFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtSafeYieldFunc)(const wxAppBaseExt* self, wxWindow* win, bool onlyIfNeeded);
typedef bool (*wxAppBaseExtSafeYieldForFunc)(const wxAppBaseExt* self, wxWindow* win, long eventsToProcess);
typedef bool (*wxAppBaseExtProcessIdleFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtUsesEventLoopFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtIsActiveFunc)(const wxAppBaseExt* self);
typedef wxWindow* (*wxAppBaseExtGetTopWindowFunc)(const wxAppBaseExt* self);
typedef wxVideoMode (*wxAppBaseExtGetDisplayModeFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtSetDisplayModeFunc)(const wxAppBaseExt* self, wxVideoMode const& param0);
typedef void (*wxAppBaseExtSetPrintModeFunc)(const wxAppBaseExt* self, int param0);
typedef wxLayoutDirection (*wxAppBaseExtGetLayoutDirectionFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtSetNativeThemeFunc)(const wxAppBaseExt* self, wxString const& param0);
typedef bool (*wxAppBaseExtOnCmdLineParsedFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser);
typedef void (*wxAppBaseExtOnInitCmdLineFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser);
typedef void (*wxAppBaseExtSetActiveFunc)(const wxAppBaseExt* self, bool isActive, wxWindow* lastFocus);
typedef bool (*wxAppBaseExtIsGUIFunc)(const wxAppBaseExt* self);
typedef wxAppTraits* (*wxAppBaseExtCreateTraitsFunc)(const wxAppBaseExt* self);
class wxAppInitializerExt;

class wxAppConsoleBaseExt: public wxAppConsoleBase
{
public:
  wxAppConsoleBaseExt(): wxAppConsoleBase()  {  }
  virtual ~wxAppConsoleBaseExt() override  {  }
  wxAppConsoleBaseExtInitializeFunc m_wxAppConsoleBaseExtInitialize;
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
  wxAppConsoleBaseExtCallOnInitFunc m_wxAppConsoleBaseExtCallOnInit;
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
  wxAppConsoleBaseExtOnInitFunc m_wxAppConsoleBaseExtOnInit;
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
  wxAppConsoleBaseExtOnRunFunc m_wxAppConsoleBaseExtOnRun;
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
  wxAppConsoleBaseExtOnLaunchedFunc m_wxAppConsoleBaseExtOnLaunched;
  virtual void OnLaunched() override
  {
    wxAppConsoleBase::OnLaunched();
    if (*m_wxAppConsoleBaseExtOnLaunched != NULL){
      return m_wxAppConsoleBaseExtOnLaunched(this);
    }
  }
  wxAppConsoleBaseExtOnEventLoopEnterFunc m_wxAppConsoleBaseExtOnEventLoopEnter;
  virtual void OnEventLoopEnter(wxEventLoopBase* param0) override
  {
    wxAppConsoleBase::OnEventLoopEnter(param0);
    if (*m_wxAppConsoleBaseExtOnEventLoopEnter != NULL){
      return m_wxAppConsoleBaseExtOnEventLoopEnter(this, param0);
    }
  }
  wxAppConsoleBaseExtOnExitFunc m_wxAppConsoleBaseExtOnExit;
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
  wxAppConsoleBaseExtOnEventLoopExitFunc m_wxAppConsoleBaseExtOnEventLoopExit;
  virtual void OnEventLoopExit(wxEventLoopBase* param0) override
  {
    wxAppConsoleBase::OnEventLoopExit(param0);
    if (*m_wxAppConsoleBaseExtOnEventLoopExit != NULL){
      return m_wxAppConsoleBaseExtOnEventLoopExit(this, param0);
    }
  }
  wxAppConsoleBaseExtCleanUpFunc m_wxAppConsoleBaseExtCleanUp;
  virtual void CleanUp() override
  {
    wxAppConsoleBase::CleanUp();
    if (*m_wxAppConsoleBaseExtCleanUp != NULL){
      return m_wxAppConsoleBaseExtCleanUp(this);
    }
  }
  wxAppConsoleBaseExtOnFatalExceptionFunc m_wxAppConsoleBaseExtOnFatalException;
  virtual void OnFatalException() override
  {
    wxAppConsoleBase::OnFatalException();
    if (*m_wxAppConsoleBaseExtOnFatalException != NULL){
      return m_wxAppConsoleBaseExtOnFatalException(this);
    }
  }
  wxAppConsoleBaseExtExitFunc m_wxAppConsoleBaseExtExit;
  virtual void Exit() override
  {
    wxAppConsoleBase::Exit();
    if (*m_wxAppConsoleBaseExtExit != NULL){
      return m_wxAppConsoleBaseExtExit(this);
    }
  }
  wxAppConsoleBaseExtOnInitCmdLineFunc m_wxAppConsoleBaseExtOnInitCmdLine;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxAppConsoleBase::OnInitCmdLine(parser);
    if (*m_wxAppConsoleBaseExtOnInitCmdLine != NULL){
      return m_wxAppConsoleBaseExtOnInitCmdLine(this, parser);
    }
  }
  wxAppConsoleBaseExtOnCmdLineParsedFunc m_wxAppConsoleBaseExtOnCmdLineParsed;
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
  wxAppConsoleBaseExtOnCmdLineHelpFunc m_wxAppConsoleBaseExtOnCmdLineHelp;
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
  wxAppConsoleBaseExtOnCmdLineErrorFunc m_wxAppConsoleBaseExtOnCmdLineError;
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
  wxAppConsoleBaseExtSetCLocaleFunc m_wxAppConsoleBaseExtSetCLocale;
  virtual void SetCLocale() override
  {
    wxAppConsoleBase::SetCLocale();
    if (*m_wxAppConsoleBaseExtSetCLocale != NULL){
      return m_wxAppConsoleBaseExtSetCLocale(this);
    }
  }
  wxAppConsoleBaseExtFilterEventFunc m_wxAppConsoleBaseExtFilterEvent;
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
  wxAppConsoleBaseExtCallEventHandlerFunc m_wxAppConsoleBaseExtCallEventHandler;
  virtual void CallEventHandler(wxEvtHandler* handler, wxEventFunctor& functor, wxEvent& event) const override
  {
    wxAppConsoleBase::CallEventHandler(handler, functor, event);
    if (*m_wxAppConsoleBaseExtCallEventHandler != NULL){
      return m_wxAppConsoleBaseExtCallEventHandler(this, handler, functor, event);
    }
  }
  wxAppConsoleBaseExtHandleEventFunc m_wxAppConsoleBaseExtHandleEvent;
  virtual void HandleEvent(wxEvtHandler* handler, wxEventFunction func, wxEvent& event) const override
  {
    wxAppConsoleBase::HandleEvent(handler, func, event);
    if (*m_wxAppConsoleBaseExtHandleEvent != NULL){
      return m_wxAppConsoleBaseExtHandleEvent(this, handler, func, event);
    }
  }
  wxAppConsoleBaseExtOnUnhandledExceptionFunc m_wxAppConsoleBaseExtOnUnhandledException;
  virtual void OnUnhandledException() override
  {
    wxAppConsoleBase::OnUnhandledException();
    if (*m_wxAppConsoleBaseExtOnUnhandledException != NULL){
      return m_wxAppConsoleBaseExtOnUnhandledException(this);
    }
  }
  wxAppConsoleBaseExtOnExceptionInMainLoopFunc m_wxAppConsoleBaseExtOnExceptionInMainLoop;
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
  wxAppConsoleBaseExtStoreCurrentExceptionFunc m_wxAppConsoleBaseExtStoreCurrentException;
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
  wxAppConsoleBaseExtRethrowStoredExceptionFunc m_wxAppConsoleBaseExtRethrowStoredException;
  virtual void RethrowStoredException() override
  {
    wxAppConsoleBase::RethrowStoredException();
    if (*m_wxAppConsoleBaseExtRethrowStoredException != NULL){
      return m_wxAppConsoleBaseExtRethrowStoredException(this);
    }
  }
  wxAppConsoleBaseExtProcessPendingEventsFunc m_wxAppConsoleBaseExtProcessPendingEvents;
  virtual void ProcessPendingEvents() override
  {
    wxAppConsoleBase::ProcessPendingEvents();
    if (*m_wxAppConsoleBaseExtProcessPendingEvents != NULL){
      return m_wxAppConsoleBaseExtProcessPendingEvents(this);
    }
  }
  wxAppConsoleBaseExtPendingFunc m_wxAppConsoleBaseExtPending;
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
  wxAppConsoleBaseExtDispatchFunc m_wxAppConsoleBaseExtDispatch;
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
  wxAppConsoleBaseExtMainLoopFunc m_wxAppConsoleBaseExtMainLoop;
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
  wxAppConsoleBaseExtExitMainLoopFunc m_wxAppConsoleBaseExtExitMainLoop;
  virtual void ExitMainLoop() override
  {
    wxAppConsoleBase::ExitMainLoop();
    if (*m_wxAppConsoleBaseExtExitMainLoop != NULL){
      return m_wxAppConsoleBaseExtExitMainLoop(this);
    }
  }
  wxAppConsoleBaseExtWakeUpIdleFunc m_wxAppConsoleBaseExtWakeUpIdle;
  virtual void WakeUpIdle() override
  {
    wxAppConsoleBase::WakeUpIdle();
    if (*m_wxAppConsoleBaseExtWakeUpIdle != NULL){
      return m_wxAppConsoleBaseExtWakeUpIdle(this);
    }
  }
  wxAppConsoleBaseExtProcessIdleFunc m_wxAppConsoleBaseExtProcessIdle;
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
  wxAppConsoleBaseExtUsesEventLoopFunc m_wxAppConsoleBaseExtUsesEventLoop;
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
  wxAppConsoleBaseExtOnAssertFailureFunc m_wxAppConsoleBaseExtOnAssertFailure;
  virtual void OnAssertFailure(wxChar const* file, int line, wxChar const* func, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsoleBase::OnAssertFailure(file, line, func, cond, msg);
    if (*m_wxAppConsoleBaseExtOnAssertFailure != NULL){
      return m_wxAppConsoleBaseExtOnAssertFailure(this, file, line, func, cond, msg);
    }
  }
  wxAppConsoleBaseExtOnAssertFunc m_wxAppConsoleBaseExtOnAssert;
  virtual void OnAssert(wxChar const* file, int line, wxChar const* cond, wxChar const* msg) override
  {
    wxAppConsoleBase::OnAssert(file, line, cond, msg);
    if (*m_wxAppConsoleBaseExtOnAssert != NULL){
      return m_wxAppConsoleBaseExtOnAssert(this, file, line, cond, msg);
    }
  }
  wxAppConsoleBaseExtIsGUIFunc m_wxAppConsoleBaseExtIsGUI;
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
  wxAppConsoleBaseExtCreateTraitsFunc m_wxAppConsoleBaseExtCreateTraits;
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
  wxAppConsoleBaseExtWXReservedApp1Func m_wxAppConsoleBaseExtWXReservedApp1;
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
  wxAppConsoleBaseExtWXReservedApp2Func m_wxAppConsoleBaseExtWXReservedApp2;
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

class wxAppBaseExt: public wxAppBase
{
public:
  wxAppBaseExt(): wxAppBase()  {  }
  virtual ~wxAppBaseExt() override  {  }
  wxAppBaseExtInitializeFunc m_wxAppBaseExtInitialize;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxAppBase::Initialize(argc, argv);
    if (*m_wxAppBaseExtInitialize != NULL){
      return m_wxAppBaseExtInitialize(this, argc, argv);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnInitGuiFunc m_wxAppBaseExtOnInitGui;
  virtual bool OnInitGui() override
  {
    bool res = wxAppBase::OnInitGui();
    if (*m_wxAppBaseExtOnInitGui != NULL){
      return m_wxAppBaseExtOnInitGui(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnRunFunc m_wxAppBaseExtOnRun;
  virtual int OnRun() override
  {
    int res = wxAppBase::OnRun();
    if (*m_wxAppBaseExtOnRun != NULL){
      return m_wxAppBaseExtOnRun(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnExitFunc m_wxAppBaseExtOnExit;
  virtual int OnExit() override
  {
    int res = wxAppBase::OnExit();
    if (*m_wxAppBaseExtOnExit != NULL){
      return m_wxAppBaseExtOnExit(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtCleanUpFunc m_wxAppBaseExtCleanUp;
  virtual void CleanUp() override
  {
    wxAppBase::CleanUp();
    if (*m_wxAppBaseExtCleanUp != NULL){
      return m_wxAppBaseExtCleanUp(this);
    }
  }
  wxAppBaseExtSafeYieldFunc m_wxAppBaseExtSafeYield;
  virtual bool SafeYield(wxWindow* win, bool onlyIfNeeded) override
  {
    bool res = wxAppBase::SafeYield(win, onlyIfNeeded);
    if (*m_wxAppBaseExtSafeYield != NULL){
      return m_wxAppBaseExtSafeYield(this, win, onlyIfNeeded);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSafeYieldForFunc m_wxAppBaseExtSafeYieldFor;
  virtual bool SafeYieldFor(wxWindow* win, long eventsToProcess) override
  {
    bool res = wxAppBase::SafeYieldFor(win, eventsToProcess);
    if (*m_wxAppBaseExtSafeYieldFor != NULL){
      return m_wxAppBaseExtSafeYieldFor(this, win, eventsToProcess);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtProcessIdleFunc m_wxAppBaseExtProcessIdle;
  virtual bool ProcessIdle() override
  {
    bool res = wxAppBase::ProcessIdle();
    if (*m_wxAppBaseExtProcessIdle != NULL){
      return m_wxAppBaseExtProcessIdle(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtUsesEventLoopFunc m_wxAppBaseExtUsesEventLoop;
  virtual bool UsesEventLoop() const override
  {
    bool res = wxAppBase::UsesEventLoop();
    if (*m_wxAppBaseExtUsesEventLoop != NULL){
      return m_wxAppBaseExtUsesEventLoop(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtIsActiveFunc m_wxAppBaseExtIsActive;
  virtual bool IsActive() const override
  {
    bool res = wxAppBase::IsActive();
    if (*m_wxAppBaseExtIsActive != NULL){
      return m_wxAppBaseExtIsActive(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtGetTopWindowFunc m_wxAppBaseExtGetTopWindow;
  virtual wxWindow* GetTopWindow() const override
  {
    wxWindow* res = wxAppBase::GetTopWindow();
    if (*m_wxAppBaseExtGetTopWindow != NULL){
      return m_wxAppBaseExtGetTopWindow(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtGetDisplayModeFunc m_wxAppBaseExtGetDisplayMode;
  virtual wxVideoMode GetDisplayMode() const override
  {
    wxVideoMode res = wxAppBase::GetDisplayMode();
    if (*m_wxAppBaseExtGetDisplayMode != NULL){
      return m_wxAppBaseExtGetDisplayMode(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSetDisplayModeFunc m_wxAppBaseExtSetDisplayMode;
  virtual bool SetDisplayMode(wxVideoMode const& param0) override
  {
    bool res = wxAppBase::SetDisplayMode(param0);
    if (*m_wxAppBaseExtSetDisplayMode != NULL){
      return m_wxAppBaseExtSetDisplayMode(this, param0);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSetPrintModeFunc m_wxAppBaseExtSetPrintMode;
  virtual void SetPrintMode(int param0) override
  {
    wxAppBase::SetPrintMode(param0);
    if (*m_wxAppBaseExtSetPrintMode != NULL){
      return m_wxAppBaseExtSetPrintMode(this, param0);
    }
  }
  wxAppBaseExtGetLayoutDirectionFunc m_wxAppBaseExtGetLayoutDirection;
  virtual wxLayoutDirection GetLayoutDirection() const override
  {
    wxLayoutDirection res = wxAppBase::GetLayoutDirection();
    if (*m_wxAppBaseExtGetLayoutDirection != NULL){
      return m_wxAppBaseExtGetLayoutDirection(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtSetNativeThemeFunc m_wxAppBaseExtSetNativeTheme;
  virtual bool SetNativeTheme(wxString const& param0) override
  {
    bool res = wxAppBase::SetNativeTheme(param0);
    if (*m_wxAppBaseExtSetNativeTheme != NULL){
      return m_wxAppBaseExtSetNativeTheme(this, param0);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnCmdLineParsedFunc m_wxAppBaseExtOnCmdLineParsed;
  virtual bool OnCmdLineParsed(wxCmdLineParser& parser) override
  {
    bool res = wxAppBase::OnCmdLineParsed(parser);
    if (*m_wxAppBaseExtOnCmdLineParsed != NULL){
      return m_wxAppBaseExtOnCmdLineParsed(this, parser);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtOnInitCmdLineFunc m_wxAppBaseExtOnInitCmdLine;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxAppBase::OnInitCmdLine(parser);
    if (*m_wxAppBaseExtOnInitCmdLine != NULL){
      return m_wxAppBaseExtOnInitCmdLine(this, parser);
    }
  }
  wxAppBaseExtSetActiveFunc m_wxAppBaseExtSetActive;
  virtual void SetActive(bool isActive, wxWindow* lastFocus) override
  {
    wxAppBase::SetActive(isActive, lastFocus);
    if (*m_wxAppBaseExtSetActive != NULL){
      return m_wxAppBaseExtSetActive(this, isActive, lastFocus);
    }
  }
  wxAppBaseExtIsGUIFunc m_wxAppBaseExtIsGUI;
  virtual bool IsGUI() const override
  {
    bool res = wxAppBase::IsGUI();
    if (*m_wxAppBaseExtIsGUI != NULL){
      return m_wxAppBaseExtIsGUI(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExtCreateTraitsFunc m_wxAppBaseExtCreateTraits;
  virtual wxAppTraits* CreateTraits() override
  {
    wxAppTraits* res = wxAppBase::CreateTraits();
    if (*m_wxAppBaseExtCreateTraits != NULL){
      return m_wxAppBaseExtCreateTraits(this);
    }
    else {
      return res;
    }
  }
  wxAppBaseExt(wxAppBaseExtInitializeFunc a_Initialize, wxAppBaseExtOnInitGuiFunc a_OnInitGui, wxAppBaseExtOnRunFunc a_OnRun, wxAppBaseExtOnExitFunc a_OnExit, wxAppBaseExtCleanUpFunc a_CleanUp, wxAppBaseExtSafeYieldFunc a_SafeYield, wxAppBaseExtSafeYieldForFunc a_SafeYieldFor, wxAppBaseExtProcessIdleFunc a_ProcessIdle, wxAppBaseExtUsesEventLoopFunc a_UsesEventLoop, wxAppBaseExtIsActiveFunc a_IsActive, wxAppBaseExtGetTopWindowFunc a_GetTopWindow, wxAppBaseExtGetDisplayModeFunc a_GetDisplayMode, wxAppBaseExtSetDisplayModeFunc a_SetDisplayMode, wxAppBaseExtSetPrintModeFunc a_SetPrintMode, wxAppBaseExtGetLayoutDirectionFunc a_GetLayoutDirection, wxAppBaseExtSetNativeThemeFunc a_SetNativeTheme, wxAppBaseExtOnCmdLineParsedFunc a_OnCmdLineParsed, wxAppBaseExtOnInitCmdLineFunc a_OnInitCmdLine, wxAppBaseExtSetActiveFunc a_SetActive, wxAppBaseExtIsGUIFunc a_IsGUI, wxAppBaseExtCreateTraitsFunc a_CreateTraits): wxAppBase() {
    m_wxAppBaseExtInitialize = a_Initialize;
    m_wxAppBaseExtOnInitGui = a_OnInitGui;
    m_wxAppBaseExtOnRun = a_OnRun;
    m_wxAppBaseExtOnExit = a_OnExit;
    m_wxAppBaseExtCleanUp = a_CleanUp;
    m_wxAppBaseExtSafeYield = a_SafeYield;
    m_wxAppBaseExtSafeYieldFor = a_SafeYieldFor;
    m_wxAppBaseExtProcessIdle = a_ProcessIdle;
    m_wxAppBaseExtUsesEventLoop = a_UsesEventLoop;
    m_wxAppBaseExtIsActive = a_IsActive;
    m_wxAppBaseExtGetTopWindow = a_GetTopWindow;
    m_wxAppBaseExtGetDisplayMode = a_GetDisplayMode;
    m_wxAppBaseExtSetDisplayMode = a_SetDisplayMode;
    m_wxAppBaseExtSetPrintMode = a_SetPrintMode;
    m_wxAppBaseExtGetLayoutDirection = a_GetLayoutDirection;
    m_wxAppBaseExtSetNativeTheme = a_SetNativeTheme;
    m_wxAppBaseExtOnCmdLineParsed = a_OnCmdLineParsed;
    m_wxAppBaseExtOnInitCmdLine = a_OnInitCmdLine;
    m_wxAppBaseExtSetActive = a_SetActive;
    m_wxAppBaseExtIsGUI = a_IsGUI;
    m_wxAppBaseExtCreateTraits = a_CreateTraits;
  }
};

class wxAppInitializerExt: public wxAppInitializer
{
public:
  wxAppInitializerExt(wxAppInitializerFunction fn): wxAppInitializer(fn)  {  }
};

