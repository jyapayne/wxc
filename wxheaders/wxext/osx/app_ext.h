#ifndef _WX_OSX_APP_H_EXT_
#define _WX_OSX_APP_H_EXT_

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


class wxAppExt: public wxApp
{
public:
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
};



#endif
