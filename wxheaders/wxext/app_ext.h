#ifndef _WX_APP_H_EXT_
#define _WX_APP_H_EXT_

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

class wxAppBaseExt: public wxAppBase
{
public:
  using wxAppBase::wxAppBase;
  wxAppBaseExt(): wxAppBase()  {  }
  virtual ~wxAppBaseExt() override  {  }
  wxAppBaseExtInitializeFunc m_wxAppBaseExtInitialize = NULL;
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
  wxAppBaseExtOnInitGuiFunc m_wxAppBaseExtOnInitGui = NULL;
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
  wxAppBaseExtOnRunFunc m_wxAppBaseExtOnRun = NULL;
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
  wxAppBaseExtOnExitFunc m_wxAppBaseExtOnExit = NULL;
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
  wxAppBaseExtCleanUpFunc m_wxAppBaseExtCleanUp = NULL;
  virtual void CleanUp() override
  {
    wxAppBase::CleanUp();
    if (*m_wxAppBaseExtCleanUp != NULL){
      return m_wxAppBaseExtCleanUp(this);
    }
  }
  wxAppBaseExtSafeYieldFunc m_wxAppBaseExtSafeYield = NULL;
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
  wxAppBaseExtSafeYieldForFunc m_wxAppBaseExtSafeYieldFor = NULL;
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
  wxAppBaseExtProcessIdleFunc m_wxAppBaseExtProcessIdle = NULL;
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
  wxAppBaseExtUsesEventLoopFunc m_wxAppBaseExtUsesEventLoop = NULL;
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
  wxAppBaseExtIsActiveFunc m_wxAppBaseExtIsActive = NULL;
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
  wxAppBaseExtGetTopWindowFunc m_wxAppBaseExtGetTopWindow = NULL;
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
  wxAppBaseExtGetDisplayModeFunc m_wxAppBaseExtGetDisplayMode = NULL;
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
  wxAppBaseExtSetDisplayModeFunc m_wxAppBaseExtSetDisplayMode = NULL;
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
  wxAppBaseExtSetPrintModeFunc m_wxAppBaseExtSetPrintMode = NULL;
  virtual void SetPrintMode(int param0) override
  {
    wxAppBase::SetPrintMode(param0);
    if (*m_wxAppBaseExtSetPrintMode != NULL){
      return m_wxAppBaseExtSetPrintMode(this, param0);
    }
  }
  wxAppBaseExtGetLayoutDirectionFunc m_wxAppBaseExtGetLayoutDirection = NULL;
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
  wxAppBaseExtSetNativeThemeFunc m_wxAppBaseExtSetNativeTheme = NULL;
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
  wxAppBaseExtOnCmdLineParsedFunc m_wxAppBaseExtOnCmdLineParsed = NULL;
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
  wxAppBaseExtOnInitCmdLineFunc m_wxAppBaseExtOnInitCmdLine = NULL;
  virtual void OnInitCmdLine(wxCmdLineParser& parser) override
  {
    wxAppBase::OnInitCmdLine(parser);
    if (*m_wxAppBaseExtOnInitCmdLine != NULL){
      return m_wxAppBaseExtOnInitCmdLine(this, parser);
    }
  }
  wxAppBaseExtSetActiveFunc m_wxAppBaseExtSetActive = NULL;
  virtual void SetActive(bool isActive, wxWindow* lastFocus) override
  {
    wxAppBase::SetActive(isActive, lastFocus);
    if (*m_wxAppBaseExtSetActive != NULL){
      return m_wxAppBaseExtSetActive(this, isActive, lastFocus);
    }
  }
  wxAppBaseExtIsGUIFunc m_wxAppBaseExtIsGUI = NULL;
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
  wxAppBaseExtCreateTraitsFunc m_wxAppBaseExtCreateTraits = NULL;
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

/* class wxAppInitializerExt: public wxAppInitializer */
/* { */
/* public: */
/*   wxAppInitializerExt(wxAppInitializerFunction fn): wxAppInitializer(fn)  {  } */
/* }; */



#endif
