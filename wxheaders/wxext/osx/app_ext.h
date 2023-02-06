#ifndef _WX_OSX_APP_H_EXT_
#define _WX_OSX_APP_H_EXT_
#include <iostream>

class wxAppExt;
typedef void (*wxAppExtWakeUpIdleFunc)(const wxAppExt* self);
typedef bool (*wxAppExtCallOnInitFunc)(const wxAppExt* self);
typedef bool (*wxAppExtOnInitGuiFunc)(const wxAppExt* self);
typedef int (*wxAppExtOnRunFunc)(const wxAppExt* self);
typedef bool (*wxAppExtProcessIdleFunc)(const wxAppExt* self);
typedef bool (*wxAppExtInitializeFunc)(const wxAppExt* self, int& argc, wxChar** argv);
typedef void (*wxAppExtCleanUpFunc)(const wxAppExt* self);
typedef WX_NSObject (*wxAppExtOSXCreateAppControllerFunc)(const wxAppExt* self);
typedef void (*wxAppExtMacHandleUnhandledEventFunc)(const wxAppExt* self, WXEVENTREF ev);
typedef void (*wxAppExtMacOpenFilesFunc)(const wxAppExt* self, wxArrayString const& fileNames);
typedef void (*wxAppExtMacOpenFileFunc)(const wxAppExt* self, wxString const& fileName);
typedef void (*wxAppExtMacOpenURLFunc)(const wxAppExt* self, wxString const& url);
typedef void (*wxAppExtMacPrintFilesFunc)(const wxAppExt* self, wxArrayString const& fileNames);
typedef void (*wxAppExtMacPrintFileFunc)(const wxAppExt* self, wxString const& fileName);
typedef void (*wxAppExtMacNewFileFunc)(const wxAppExt* self);
typedef void (*wxAppExtMacReopenAppFunc)(const wxAppExt* self);
typedef void (*wxAppExtOSXOnWillFinishLaunchingFunc)(const wxAppExt* self);
typedef void (*wxAppExtOSXOnDidFinishLaunchingFunc)(const wxAppExt* self);
typedef bool (*wxAppExtOSXOnShouldTerminateFunc)(const wxAppExt* self);
typedef void (*wxAppExtOSXOnWillTerminateFunc)(const wxAppExt* self);


typedef bool (*wxAppBaseExtInitializeFunc)(const wxAppBaseExt* self, int& argc, wxChar** argv);
typedef bool (*wxAppBaseExtOnInitGuiFunc)(const wxAppBaseExt* self);
typedef int (*wxAppBaseExtOnRunFunc)(const wxAppBaseExt* self);
typedef int (*wxAppBaseExtOnExitFunc)(const wxAppBaseExt* self);
typedef void (*wxAppBaseExtCleanUpFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtSafeYieldFunc)(const wxAppBaseExt* self, wxWindow* win, bool onlyIfNeeded);
typedef bool (*wxAppBaseExtSafeYieldForFunc)(const wxAppBaseExt* self, wxWindow* win, long eventsToProcess);
typedef bool (*wxAppBaseExtProcessIdleFunc)(const wxAppBaseExt* self);
typedef wxWindow* (*wxAppBaseExtGetTopWindowFunc)(const wxAppBaseExt* self);
typedef wxVideoMode (*wxAppBaseExtGetDisplayModeFunc)(const wxAppBaseExt* self);
typedef wxLayoutDirection (*wxAppBaseExtGetLayoutDirectionFunc)(const wxAppBaseExt* self);
typedef bool (*wxAppBaseExtOnCmdLineParsedFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser);
typedef void (*wxAppBaseExtOnInitCmdLineFunc)(const wxAppBaseExt* self, wxCmdLineParser& parser);
typedef void (*wxAppBaseExtSetActiveFunc)(const wxAppBaseExt* self, bool isActive, wxWindow* lastFocus);
typedef wxAppTraits* (*wxAppBaseExtCreateTraitsFunc)(const wxAppBaseExt* self);

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

class wxAppExt: public wxApp
{
public:
  using wxApp::wxApp;
  wxAppExt(): wxApp()  {  }
  virtual ~wxAppExt()  {  }
  wxAppExtWakeUpIdleFunc m_wxAppExtWakeUpIdle = NULL;
  virtual void WakeUpIdle() override
  {
    wxApp::WakeUpIdle();
    if (*m_wxAppExtWakeUpIdle != NULL){
      return m_wxAppExtWakeUpIdle(this);
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
  wxAppExtInitializeFunc m_wxAppExtInitialize = NULL;
  virtual bool Initialize(int& argc, wxChar** argv) override
  {
    bool res = wxApp::Initialize(argc, argv);
    if (*m_wxAppExtInitialize != NULL){
      return m_wxAppExtInitialize(this, argc, argv);
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
  wxAppExtOSXCreateAppControllerFunc m_wxAppExtOSXCreateAppController = NULL;
  virtual WX_NSObject OSXCreateAppController() override
  {
    WX_NSObject res = wxApp::OSXCreateAppController();
    if (*m_wxAppExtOSXCreateAppController != NULL){
      return m_wxAppExtOSXCreateAppController(this);
    }
    else {
      return res;
    }
  }
  wxAppExtMacHandleUnhandledEventFunc m_wxAppExtMacHandleUnhandledEvent = NULL;
  virtual void MacHandleUnhandledEvent(WXEVENTREF ev) override
  {
    wxApp::MacHandleUnhandledEvent(ev);
    if (*m_wxAppExtMacHandleUnhandledEvent != NULL){
      return m_wxAppExtMacHandleUnhandledEvent(this, ev);
    }
  }
  wxAppExtMacOpenFilesFunc m_wxAppExtMacOpenFiles = NULL;
  virtual void MacOpenFiles(wxArrayString const& fileNames) override
  {
    wxApp::MacOpenFiles(fileNames);
    if (*m_wxAppExtMacOpenFiles != NULL){
      return m_wxAppExtMacOpenFiles(this, fileNames);
    }
  }
  wxAppExtMacOpenFileFunc m_wxAppExtMacOpenFile = NULL;
  virtual void MacOpenFile(wxString const& fileName) override
  {
    wxApp::MacOpenFile(fileName);
    if (*m_wxAppExtMacOpenFile != NULL){
      return m_wxAppExtMacOpenFile(this, fileName);
    }
  }
  wxAppExtMacOpenURLFunc m_wxAppExtMacOpenURL = NULL;
  virtual void MacOpenURL(wxString const& url) override
  {
    wxApp::MacOpenURL(url);
    if (*m_wxAppExtMacOpenURL != NULL){
      return m_wxAppExtMacOpenURL(this, url);
    }
  }
  wxAppExtMacPrintFilesFunc m_wxAppExtMacPrintFiles = NULL;
  virtual void MacPrintFiles(wxArrayString const& fileNames) override
  {
    wxApp::MacPrintFiles(fileNames);
    if (*m_wxAppExtMacPrintFiles != NULL){
      return m_wxAppExtMacPrintFiles(this, fileNames);
    }
  }
  wxAppExtMacPrintFileFunc m_wxAppExtMacPrintFile = NULL;
  virtual void MacPrintFile(wxString const& fileName) override
  {
    wxApp::MacPrintFile(fileName);
    if (*m_wxAppExtMacPrintFile != NULL){
      return m_wxAppExtMacPrintFile(this, fileName);
    }
  }
  wxAppExtMacNewFileFunc m_wxAppExtMacNewFile = NULL;
  virtual void MacNewFile() override
  {
    wxApp::MacNewFile();
    if (*m_wxAppExtMacNewFile != NULL){
      return m_wxAppExtMacNewFile(this);
    }
  }
  wxAppExtMacReopenAppFunc m_wxAppExtMacReopenApp = NULL;
  virtual void MacReopenApp() override
  {
    wxApp::MacReopenApp();
    if (*m_wxAppExtMacReopenApp != NULL){
      return m_wxAppExtMacReopenApp(this);
    }
  }
  wxAppExtOSXOnWillFinishLaunchingFunc m_wxAppExtOSXOnWillFinishLaunching = NULL;
  virtual void OSXOnWillFinishLaunching() override
  {
    wxApp::OSXOnWillFinishLaunching();
    if (*m_wxAppExtOSXOnWillFinishLaunching != NULL){
      return m_wxAppExtOSXOnWillFinishLaunching(this);
    }
  }
  wxAppExtOSXOnDidFinishLaunchingFunc m_wxAppExtOSXOnDidFinishLaunching = NULL;
  virtual void OSXOnDidFinishLaunching() override
  {
    wxApp::OSXOnDidFinishLaunching();
    if (*m_wxAppExtOSXOnDidFinishLaunching != NULL){
      return m_wxAppExtOSXOnDidFinishLaunching(this);
    }
  }
  wxAppExtOSXOnShouldTerminateFunc m_wxAppExtOSXOnShouldTerminate = NULL;
  virtual bool OSXOnShouldTerminate() override
  {
    bool res = wxApp::OSXOnShouldTerminate();
    if (*m_wxAppExtOSXOnShouldTerminate != NULL){
      return m_wxAppExtOSXOnShouldTerminate(this);
    }
    else {
      return res;
    }
  }
  wxAppExtOSXOnWillTerminateFunc m_wxAppExtOSXOnWillTerminate = NULL;
  virtual void OSXOnWillTerminate() override
  {
    wxApp::OSXOnWillTerminate();
    if (*m_wxAppExtOSXOnWillTerminate != NULL){
      return m_wxAppExtOSXOnWillTerminate(this);
    }
  }
  static void SetInitializerFunction(wxAppInitializerFunction fn)
        { ms_appInitFn = fn; }
  wxAppExt(wxAppExtWakeUpIdleFunc a_WakeUpIdle, wxAppExtCallOnInitFunc a_CallOnInit, wxAppExtOnInitGuiFunc a_OnInitGui, wxAppExtOnRunFunc a_OnRun, wxAppExtProcessIdleFunc a_ProcessIdle, wxAppExtInitializeFunc a_Initialize, wxAppExtCleanUpFunc a_CleanUp, wxAppExtOSXCreateAppControllerFunc a_OSXCreateAppController, wxAppExtMacHandleUnhandledEventFunc a_MacHandleUnhandledEvent, wxAppExtMacOpenFilesFunc a_MacOpenFiles, wxAppExtMacOpenFileFunc a_MacOpenFile, wxAppExtMacOpenURLFunc a_MacOpenURL, wxAppExtMacPrintFilesFunc a_MacPrintFiles, wxAppExtMacPrintFileFunc a_MacPrintFile, wxAppExtMacNewFileFunc a_MacNewFile, wxAppExtMacReopenAppFunc a_MacReopenApp, wxAppExtOSXOnWillFinishLaunchingFunc a_OSXOnWillFinishLaunching, wxAppExtOSXOnDidFinishLaunchingFunc a_OSXOnDidFinishLaunching, wxAppExtOSXOnShouldTerminateFunc a_OSXOnShouldTerminate, wxAppExtOSXOnWillTerminateFunc a_OSXOnWillTerminate): wxApp() {
    m_wxAppExtWakeUpIdle = a_WakeUpIdle;
    m_wxAppExtCallOnInit = a_CallOnInit;
    m_wxAppExtOnInitGui = a_OnInitGui;
    m_wxAppExtOnRun = a_OnRun;
    m_wxAppExtProcessIdle = a_ProcessIdle;
    m_wxAppExtInitialize = a_Initialize;
    m_wxAppExtCleanUp = a_CleanUp;
    m_wxAppExtOSXCreateAppController = a_OSXCreateAppController;
    m_wxAppExtMacHandleUnhandledEvent = a_MacHandleUnhandledEvent;
    m_wxAppExtMacOpenFiles = a_MacOpenFiles;
    m_wxAppExtMacOpenFile = a_MacOpenFile;
    m_wxAppExtMacOpenURL = a_MacOpenURL;
    m_wxAppExtMacPrintFiles = a_MacPrintFiles;
    m_wxAppExtMacPrintFile = a_MacPrintFile;
    m_wxAppExtMacNewFile = a_MacNewFile;
    m_wxAppExtMacReopenApp = a_MacReopenApp;
    m_wxAppExtOSXOnWillFinishLaunching = a_OSXOnWillFinishLaunching;
    m_wxAppExtOSXOnDidFinishLaunching = a_OSXOnDidFinishLaunching;
    m_wxAppExtOSXOnShouldTerminate = a_OSXOnShouldTerminate;
    m_wxAppExtOSXOnWillTerminate = a_OSXOnWillTerminate;
  }
  wxAppExt(wxAppConsoleBaseExtInitializeFunc a_Initialize, wxAppConsoleBaseExtCallOnInitFunc a_CallOnInit, wxAppConsoleBaseExtOnInitFunc a_OnInit, wxAppConsoleBaseExtOnRunFunc a_OnRun, wxAppConsoleBaseExtOnLaunchedFunc a_OnLaunched, wxAppConsoleBaseExtOnEventLoopEnterFunc a_OnEventLoopEnter, wxAppConsoleBaseExtOnExitFunc a_OnExit, wxAppConsoleBaseExtOnEventLoopExitFunc a_OnEventLoopExit, wxAppConsoleBaseExtCleanUpFunc a_CleanUp, wxAppConsoleBaseExtOnFatalExceptionFunc a_OnFatalException, wxAppConsoleBaseExtExitFunc a_Exit, wxAppConsoleBaseExtOnInitCmdLineFunc a_OnInitCmdLine, wxAppConsoleBaseExtOnCmdLineParsedFunc a_OnCmdLineParsed, wxAppConsoleBaseExtOnCmdLineHelpFunc a_OnCmdLineHelp, wxAppConsoleBaseExtOnCmdLineErrorFunc a_OnCmdLineError, wxAppConsoleBaseExtSetCLocaleFunc a_SetCLocale, wxAppConsoleBaseExtFilterEventFunc a_FilterEvent, wxAppConsoleBaseExtCallEventHandlerFunc a_CallEventHandler, wxAppConsoleBaseExtHandleEventFunc a_HandleEvent, wxAppConsoleBaseExtOnUnhandledExceptionFunc a_OnUnhandledException, wxAppConsoleBaseExtOnExceptionInMainLoopFunc a_OnExceptionInMainLoop, wxAppConsoleBaseExtStoreCurrentExceptionFunc a_StoreCurrentException, wxAppConsoleBaseExtRethrowStoredExceptionFunc a_RethrowStoredException, wxAppConsoleBaseExtProcessPendingEventsFunc a_ProcessPendingEvents, wxAppConsoleBaseExtPendingFunc a_Pending, wxAppConsoleBaseExtDispatchFunc a_Dispatch, wxAppConsoleBaseExtMainLoopFunc a_MainLoop, wxAppConsoleBaseExtExitMainLoopFunc a_ExitMainLoop, wxAppConsoleBaseExtWakeUpIdleFunc a_WakeUpIdle, wxAppConsoleBaseExtProcessIdleFunc a_ProcessIdle, wxAppConsoleBaseExtUsesEventLoopFunc a_UsesEventLoop, wxAppConsoleBaseExtOnAssertFailureFunc a_OnAssertFailure, wxAppConsoleBaseExtOnAssertFunc a_OnAssert, wxAppConsoleBaseExtIsGUIFunc a_IsGUI, wxAppConsoleBaseExtCreateTraitsFunc a_CreateTraits, wxAppConsoleBaseExtWXReservedApp1Func a_WXReservedApp1, wxAppConsoleBaseExtWXReservedApp2Func a_WXReservedApp2): wxApp() {
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
