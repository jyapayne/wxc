#include <wx/wx.h>
#include <wx/vidmode.h>

class wxAppExt;
typedef wxClassInfo* (*wxAppExtGetClassInfoFunc)(const wxAppExt* self);
typedef void (*wxAppExtWakeUpIdleFunc)(const wxAppExt* self);
typedef void (*wxAppExtSetPrintModeFunc)(const wxAppExt* self, int mode);
typedef int (*wxAppExtGetPrintModeFunc)(const wxAppExt* self);
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
typedef bool (*wxAppExtOSXIsGUIApplicationFunc)(const wxAppExt* self);
typedef void (*wxAppExtOSXOnWillFinishLaunchingFunc)(const wxAppExt* self);
typedef void (*wxAppExtOSXOnDidFinishLaunchingFunc)(const wxAppExt* self);
typedef bool (*wxAppExtOSXOnShouldTerminateFunc)(const wxAppExt* self);
typedef void (*wxAppExtOSXOnWillTerminateFunc)(const wxAppExt* self);

class wxAppExt: public wxApp
{
public:
  wxAppExtGetClassInfoFunc m_wxAppExtGetClassInfo;
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
  wxAppExt(): wxApp()  {  }
  virtual ~wxAppExt()  {  }
  wxAppExtWakeUpIdleFunc m_wxAppExtWakeUpIdle;
  virtual void WakeUpIdle() override
  {
    wxApp::WakeUpIdle();
    if (*m_wxAppExtWakeUpIdle != NULL){
      return m_wxAppExtWakeUpIdle(this);
    }
  }
  wxAppExtSetPrintModeFunc m_wxAppExtSetPrintMode;
  virtual void SetPrintMode(int mode) override
  {
    wxApp::SetPrintMode(mode);
    if (*m_wxAppExtSetPrintMode != NULL){
      return m_wxAppExtSetPrintMode(this, mode);
    }
  }
  wxAppExtGetPrintModeFunc m_wxAppExtGetPrintMode;
  virtual int GetPrintMode() const override
  {
    int res = wxApp::GetPrintMode();
    if (*m_wxAppExtGetPrintMode != NULL){
      return m_wxAppExtGetPrintMode(this);
    }
    else {
      return res;
    }
  }
  wxAppExtCallOnInitFunc m_wxAppExtCallOnInit;
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
  wxAppExtOnInitGuiFunc m_wxAppExtOnInitGui;
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
  wxAppExtOnRunFunc m_wxAppExtOnRun;
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
  wxAppExtProcessIdleFunc m_wxAppExtProcessIdle;
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
  wxAppExtInitializeFunc m_wxAppExtInitialize;
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
  wxAppExtCleanUpFunc m_wxAppExtCleanUp;
  virtual void CleanUp() override
  {
    wxApp::CleanUp();
    if (*m_wxAppExtCleanUp != NULL){
      return m_wxAppExtCleanUp(this);
    }
  }
  wxAppExtOSXCreateAppControllerFunc m_wxAppExtOSXCreateAppController;
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
  wxAppExtMacHandleUnhandledEventFunc m_wxAppExtMacHandleUnhandledEvent;
  virtual void MacHandleUnhandledEvent(WXEVENTREF ev) override
  {
    wxApp::MacHandleUnhandledEvent(ev);
    if (*m_wxAppExtMacHandleUnhandledEvent != NULL){
      return m_wxAppExtMacHandleUnhandledEvent(this, ev);
    }
  }
  wxAppExtMacOpenFilesFunc m_wxAppExtMacOpenFiles;
  virtual void MacOpenFiles(wxArrayString const& fileNames) override
  {
    wxApp::MacOpenFiles(fileNames);
    if (*m_wxAppExtMacOpenFiles != NULL){
      return m_wxAppExtMacOpenFiles(this, fileNames);
    }
  }
  wxAppExtMacOpenFileFunc m_wxAppExtMacOpenFile;
  virtual void MacOpenFile(wxString const& fileName) override
  {
    wxApp::MacOpenFile(fileName);
    if (*m_wxAppExtMacOpenFile != NULL){
      return m_wxAppExtMacOpenFile(this, fileName);
    }
  }
  wxAppExtMacOpenURLFunc m_wxAppExtMacOpenURL;
  virtual void MacOpenURL(wxString const& url) override
  {
    wxApp::MacOpenURL(url);
    if (*m_wxAppExtMacOpenURL != NULL){
      return m_wxAppExtMacOpenURL(this, url);
    }
  }
  wxAppExtMacPrintFilesFunc m_wxAppExtMacPrintFiles;
  virtual void MacPrintFiles(wxArrayString const& fileNames) override
  {
    wxApp::MacPrintFiles(fileNames);
    if (*m_wxAppExtMacPrintFiles != NULL){
      return m_wxAppExtMacPrintFiles(this, fileNames);
    }
  }
  wxAppExtMacPrintFileFunc m_wxAppExtMacPrintFile;
  virtual void MacPrintFile(wxString const& fileName) override
  {
    wxApp::MacPrintFile(fileName);
    if (*m_wxAppExtMacPrintFile != NULL){
      return m_wxAppExtMacPrintFile(this, fileName);
    }
  }
  wxAppExtMacNewFileFunc m_wxAppExtMacNewFile;
  virtual void MacNewFile() override
  {
    wxApp::MacNewFile();
    if (*m_wxAppExtMacNewFile != NULL){
      return m_wxAppExtMacNewFile(this);
    }
  }
  wxAppExtMacReopenAppFunc m_wxAppExtMacReopenApp;
  virtual void MacReopenApp() override
  {
    wxApp::MacReopenApp();
    if (*m_wxAppExtMacReopenApp != NULL){
      return m_wxAppExtMacReopenApp(this);
    }
  }
  wxAppExtOSXIsGUIApplicationFunc m_wxAppExtOSXIsGUIApplication;
  virtual bool OSXIsGUIApplication() override
  {
    bool res = wxApp::OSXIsGUIApplication();
    if (*m_wxAppExtOSXIsGUIApplication != NULL){
      return m_wxAppExtOSXIsGUIApplication(this);
    }
    else {
      return res;
    }
  }
  wxAppExtOSXOnWillFinishLaunchingFunc m_wxAppExtOSXOnWillFinishLaunching;
  virtual void OSXOnWillFinishLaunching() override
  {
    wxApp::OSXOnWillFinishLaunching();
    if (*m_wxAppExtOSXOnWillFinishLaunching != NULL){
      return m_wxAppExtOSXOnWillFinishLaunching(this);
    }
  }
  wxAppExtOSXOnDidFinishLaunchingFunc m_wxAppExtOSXOnDidFinishLaunching;
  virtual void OSXOnDidFinishLaunching() override
  {
    wxApp::OSXOnDidFinishLaunching();
    if (*m_wxAppExtOSXOnDidFinishLaunching != NULL){
      return m_wxAppExtOSXOnDidFinishLaunching(this);
    }
  }
  wxAppExtOSXOnShouldTerminateFunc m_wxAppExtOSXOnShouldTerminate;
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
  wxAppExtOSXOnWillTerminateFunc m_wxAppExtOSXOnWillTerminate;
  virtual void OSXOnWillTerminate() override
  {
    wxApp::OSXOnWillTerminate();
    if (*m_wxAppExtOSXOnWillTerminate != NULL){
      return m_wxAppExtOSXOnWillTerminate(this);
    }
  }
  wxAppExt(wxAppExtGetClassInfoFunc a_GetClassInfo, wxAppExtWakeUpIdleFunc a_WakeUpIdle, wxAppExtSetPrintModeFunc a_SetPrintMode, wxAppExtGetPrintModeFunc a_GetPrintMode, wxAppExtCallOnInitFunc a_CallOnInit, wxAppExtOnInitGuiFunc a_OnInitGui, wxAppExtOnRunFunc a_OnRun, wxAppExtProcessIdleFunc a_ProcessIdle, wxAppExtInitializeFunc a_Initialize, wxAppExtCleanUpFunc a_CleanUp, wxAppExtOSXCreateAppControllerFunc a_OSXCreateAppController, wxAppExtMacHandleUnhandledEventFunc a_MacHandleUnhandledEvent, wxAppExtMacOpenFilesFunc a_MacOpenFiles, wxAppExtMacOpenFileFunc a_MacOpenFile, wxAppExtMacOpenURLFunc a_MacOpenURL, wxAppExtMacPrintFilesFunc a_MacPrintFiles, wxAppExtMacPrintFileFunc a_MacPrintFile, wxAppExtMacNewFileFunc a_MacNewFile, wxAppExtMacReopenAppFunc a_MacReopenApp, wxAppExtOSXIsGUIApplicationFunc a_OSXIsGUIApplication, wxAppExtOSXOnWillFinishLaunchingFunc a_OSXOnWillFinishLaunching, wxAppExtOSXOnDidFinishLaunchingFunc a_OSXOnDidFinishLaunching, wxAppExtOSXOnShouldTerminateFunc a_OSXOnShouldTerminate, wxAppExtOSXOnWillTerminateFunc a_OSXOnWillTerminate): wxApp() {
    m_wxAppExtGetClassInfo = a_GetClassInfo;
    m_wxAppExtWakeUpIdle = a_WakeUpIdle;
    m_wxAppExtSetPrintMode = a_SetPrintMode;
    m_wxAppExtGetPrintMode = a_GetPrintMode;
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
    m_wxAppExtOSXIsGUIApplication = a_OSXIsGUIApplication;
    m_wxAppExtOSXOnWillFinishLaunching = a_OSXOnWillFinishLaunching;
    m_wxAppExtOSXOnDidFinishLaunching = a_OSXOnDidFinishLaunching;
    m_wxAppExtOSXOnShouldTerminate = a_OSXOnShouldTerminate;
    m_wxAppExtOSXOnWillTerminate = a_OSXOnWillTerminate;
  }
};

