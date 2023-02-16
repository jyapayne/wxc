#ifndef _WX_VALIDATE_H_EXT_
#define _WX_VALIDATE_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxValidatorExt;
typedef void (*wxValidatorExtAddPendingEvent__wxEventCRFunc)(const wxValidatorExt* self, wxEvent const& event);
typedef wxObject* (*wxValidatorExtCloneFunc)(const wxValidatorExt* self, wxObject* res);
typedef wxObjectRefData* (*wxValidatorExtCloneRefData__wxObjectRefDataCPFunc)(const wxValidatorExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxValidatorExtCreateRefDataFunc)(const wxValidatorExt* self, wxObjectRefData* res);
typedef void* (*wxValidatorExtDoGetClientDataFunc)(const wxValidatorExt* self, void* res);
typedef wxClientData* (*wxValidatorExtDoGetClientObjectFunc)(const wxValidatorExt* self, wxClientData* res);
typedef void (*wxValidatorExtDoSetClientData__voidPFunc)(const wxValidatorExt* self, void* data);
typedef void (*wxValidatorExtDoSetClientObject__wxClientDataPFunc)(const wxValidatorExt* self, wxClientData* data);
typedef wxClassInfo* (*wxValidatorExtGetClassInfoFunc)(const wxValidatorExt* self, wxClassInfo* res);
typedef wxEventHashTable& (*wxValidatorExtGetEventHashTableFunc)(const wxValidatorExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxValidatorExtGetEventTableFunc)(const wxValidatorExt* self, wxEventTable const* res);
typedef bool (*wxValidatorExtOnDynamicBind__wxDynamicEventTableEntryRFunc)(const wxValidatorExt* self, wxDynamicEventTableEntry& entry, bool res);
typedef bool (*wxValidatorExtProcessEvent__wxEventRFunc)(const wxValidatorExt* self, wxEvent& event, bool res);
typedef void (*wxValidatorExtQueueEvent__wxEventPFunc)(const wxValidatorExt* self, wxEvent* event);
typedef bool (*wxValidatorExtSearchEventTable__wxEventTableRwxEventRFunc)(const wxValidatorExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxValidatorExtSetNextHandler__wxEvtHandlerPFunc)(const wxValidatorExt* self, wxEvtHandler* handler);
typedef void (*wxValidatorExtSetPreviousHandler__wxEvtHandlerPFunc)(const wxValidatorExt* self, wxEvtHandler* handler);
typedef void (*wxValidatorExtSetWindow__wxWindowPFunc)(const wxValidatorExt* self, wxWindow* win);
typedef bool (*wxValidatorExtTransferFromWindowFunc)(const wxValidatorExt* self, bool res);
typedef bool (*wxValidatorExtTransferToWindowFunc)(const wxValidatorExt* self, bool res);
typedef bool (*wxValidatorExtTryAfter__wxEventRFunc)(const wxValidatorExt* self, wxEvent& event, bool res);
typedef bool (*wxValidatorExtTryBefore__wxEventRFunc)(const wxValidatorExt* self, wxEvent& event, bool res);
typedef bool (*wxValidatorExtValidate__wxWindowPFunc)(const wxValidatorExt* self, wxWindow* parent, bool res);
typedef void* (*wxValidatorExtWXReservedEvtHandler1__voidPFunc)(const wxValidatorExt* self, void* param0, void* res);
typedef void* (*wxValidatorExtWXReservedEvtHandler2__voidPFunc)(const wxValidatorExt* self, void* param0, void* res);

class wxValidatorExt: public wxValidator
{
public:
  wxValidatorExt(): wxValidator()  {  }
  wxValidatorExt(wxValidator const& other): wxValidator(other)  {  }
  virtual ~wxValidatorExt() override  {  }
  wxValidatorExtAddPendingEvent__wxEventCRFunc m_wxValidatorExtAddPendingEvent__wxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxValidator::AddPendingEvent(event);
    if (*m_wxValidatorExtAddPendingEvent__wxEventCR != NULL){
      return m_wxValidatorExtAddPendingEvent__wxEventCR(this, event);
    }
  }
  wxValidatorExtCloneFunc m_wxValidatorExtClone = NULL;
  virtual wxObject* Clone() const override
  {
    wxObject* res = wxValidator::Clone();
    if (*m_wxValidatorExtClone != NULL){
      return m_wxValidatorExtClone(this, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtCloneRefData__wxObjectRefDataCPFunc m_wxValidatorExtCloneRefData__wxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxValidator::CloneRefData(data);
    if (*m_wxValidatorExtCloneRefData__wxObjectRefDataCP != NULL){
      return m_wxValidatorExtCloneRefData__wxObjectRefDataCP(this, data, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtCreateRefDataFunc m_wxValidatorExtCreateRefData = NULL;
  virtual wxObjectRefData* CreateRefData() const override
  {
    wxObjectRefData* res = wxValidator::CreateRefData();
    if (*m_wxValidatorExtCreateRefData != NULL){
      return m_wxValidatorExtCreateRefData(this, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtDoGetClientDataFunc m_wxValidatorExtDoGetClientData = NULL;
  virtual void* DoGetClientData() const override
  {
    void* res = wxValidator::DoGetClientData();
    if (*m_wxValidatorExtDoGetClientData != NULL){
      return m_wxValidatorExtDoGetClientData(this, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtDoGetClientObjectFunc m_wxValidatorExtDoGetClientObject = NULL;
  virtual wxClientData* DoGetClientObject() const override
  {
    wxClientData* res = wxValidator::DoGetClientObject();
    if (*m_wxValidatorExtDoGetClientObject != NULL){
      return m_wxValidatorExtDoGetClientObject(this, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtDoSetClientData__voidPFunc m_wxValidatorExtDoSetClientData__voidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxValidator::DoSetClientData(data);
    if (*m_wxValidatorExtDoSetClientData__voidP != NULL){
      return m_wxValidatorExtDoSetClientData__voidP(this, data);
    }
  }
  wxValidatorExtDoSetClientObject__wxClientDataPFunc m_wxValidatorExtDoSetClientObject__wxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxValidator::DoSetClientObject(data);
    if (*m_wxValidatorExtDoSetClientObject__wxClientDataP != NULL){
      return m_wxValidatorExtDoSetClientObject__wxClientDataP(this, data);
    }
  }
  wxValidatorExtGetClassInfoFunc m_wxValidatorExtGetClassInfo = NULL;
  virtual wxClassInfo* GetClassInfo() const override
  {
    wxClassInfo* res = wxValidator::GetClassInfo();
    if (*m_wxValidatorExtGetClassInfo != NULL){
      return m_wxValidatorExtGetClassInfo(this, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtGetEventHashTableFunc m_wxValidatorExtGetEventHashTable = NULL;
  virtual wxEventHashTable& GetEventHashTable() const override
  {
    wxEventHashTable& res = wxValidator::GetEventHashTable();
    if (*m_wxValidatorExtGetEventHashTable != NULL){
      return m_wxValidatorExtGetEventHashTable(this, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtGetEventTableFunc m_wxValidatorExtGetEventTable = NULL;
  virtual wxEventTable const* GetEventTable() const override
  {
    wxEventTable const* res = wxValidator::GetEventTable();
    if (*m_wxValidatorExtGetEventTable != NULL){
      return m_wxValidatorExtGetEventTable(this, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtOnDynamicBind__wxDynamicEventTableEntryRFunc m_wxValidatorExtOnDynamicBind__wxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& entry) override
  {
    bool res = wxValidator::OnDynamicBind(entry);
    if (*m_wxValidatorExtOnDynamicBind__wxDynamicEventTableEntryR != NULL){
      return m_wxValidatorExtOnDynamicBind__wxDynamicEventTableEntryR(this, entry, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtProcessEvent__wxEventRFunc m_wxValidatorExtProcessEvent__wxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxValidator::ProcessEvent(event);
    if (*m_wxValidatorExtProcessEvent__wxEventR != NULL){
      return m_wxValidatorExtProcessEvent__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtQueueEvent__wxEventPFunc m_wxValidatorExtQueueEvent__wxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxValidator::QueueEvent(event);
    if (*m_wxValidatorExtQueueEvent__wxEventP != NULL){
      return m_wxValidatorExtQueueEvent__wxEventP(this, event);
    }
  }
  wxValidatorExtSearchEventTable__wxEventTableRwxEventRFunc m_wxValidatorExtSearchEventTable__wxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxValidator::SearchEventTable(table, event);
    if (*m_wxValidatorExtSearchEventTable__wxEventTableRwxEventR != NULL){
      return m_wxValidatorExtSearchEventTable__wxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtSetNextHandler__wxEvtHandlerPFunc m_wxValidatorExtSetNextHandler__wxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxValidator::SetNextHandler(handler);
    if (*m_wxValidatorExtSetNextHandler__wxEvtHandlerP != NULL){
      return m_wxValidatorExtSetNextHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxValidatorExtSetPreviousHandler__wxEvtHandlerPFunc m_wxValidatorExtSetPreviousHandler__wxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxValidator::SetPreviousHandler(handler);
    if (*m_wxValidatorExtSetPreviousHandler__wxEvtHandlerP != NULL){
      return m_wxValidatorExtSetPreviousHandler__wxEvtHandlerP(this, handler);
    }
  }
  wxValidatorExtSetWindow__wxWindowPFunc m_wxValidatorExtSetWindow__wxWindowP = NULL;
  virtual void SetWindow(wxWindow* win) override
  {
    wxValidator::SetWindow(win);
    if (*m_wxValidatorExtSetWindow__wxWindowP != NULL){
      return m_wxValidatorExtSetWindow__wxWindowP(this, win);
    }
  }
  wxValidatorExtTransferFromWindowFunc m_wxValidatorExtTransferFromWindow = NULL;
  virtual bool TransferFromWindow() override
  {
    bool res = wxValidator::TransferFromWindow();
    if (*m_wxValidatorExtTransferFromWindow != NULL){
      return m_wxValidatorExtTransferFromWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtTransferToWindowFunc m_wxValidatorExtTransferToWindow = NULL;
  virtual bool TransferToWindow() override
  {
    bool res = wxValidator::TransferToWindow();
    if (*m_wxValidatorExtTransferToWindow != NULL){
      return m_wxValidatorExtTransferToWindow(this, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtTryAfter__wxEventRFunc m_wxValidatorExtTryAfter__wxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxValidator::TryAfter(event);
    if (*m_wxValidatorExtTryAfter__wxEventR != NULL){
      return m_wxValidatorExtTryAfter__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtTryBefore__wxEventRFunc m_wxValidatorExtTryBefore__wxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxValidator::TryBefore(event);
    if (*m_wxValidatorExtTryBefore__wxEventR != NULL){
      return m_wxValidatorExtTryBefore__wxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtValidate__wxWindowPFunc m_wxValidatorExtValidate__wxWindowP = NULL;
  virtual bool Validate(wxWindow* parent) override
  {
    bool res = wxValidator::Validate(parent);
    if (*m_wxValidatorExtValidate__wxWindowP != NULL){
      return m_wxValidatorExtValidate__wxWindowP(this, parent, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtWXReservedEvtHandler1__voidPFunc m_wxValidatorExtWXReservedEvtHandler1__voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxValidator::WXReservedEvtHandler1(param0);
    if (*m_wxValidatorExtWXReservedEvtHandler1__voidP != NULL){
      return m_wxValidatorExtWXReservedEvtHandler1__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtWXReservedEvtHandler2__voidPFunc m_wxValidatorExtWXReservedEvtHandler2__voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxValidator::WXReservedEvtHandler2(param0);
    if (*m_wxValidatorExtWXReservedEvtHandler2__voidP != NULL){
      return m_wxValidatorExtWXReservedEvtHandler2__voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExt(wxValidatorExtAddPendingEvent__wxEventCRFunc a_AddPendingEvent__wxEventCR, wxValidatorExtCloneFunc a_Clone, wxValidatorExtCloneRefData__wxObjectRefDataCPFunc a_CloneRefData__wxObjectRefDataCP, wxValidatorExtCreateRefDataFunc a_CreateRefData, wxValidatorExtDoGetClientDataFunc a_DoGetClientData, wxValidatorExtDoGetClientObjectFunc a_DoGetClientObject, wxValidatorExtDoSetClientData__voidPFunc a_DoSetClientData__voidP, wxValidatorExtDoSetClientObject__wxClientDataPFunc a_DoSetClientObject__wxClientDataP, wxValidatorExtGetClassInfoFunc a_GetClassInfo, wxValidatorExtGetEventHashTableFunc a_GetEventHashTable, wxValidatorExtGetEventTableFunc a_GetEventTable, wxValidatorExtOnDynamicBind__wxDynamicEventTableEntryRFunc a_OnDynamicBind__wxDynamicEventTableEntryR, wxValidatorExtProcessEvent__wxEventRFunc a_ProcessEvent__wxEventR, wxValidatorExtQueueEvent__wxEventPFunc a_QueueEvent__wxEventP, wxValidatorExtSearchEventTable__wxEventTableRwxEventRFunc a_SearchEventTable__wxEventTableRwxEventR, wxValidatorExtSetNextHandler__wxEvtHandlerPFunc a_SetNextHandler__wxEvtHandlerP, wxValidatorExtSetPreviousHandler__wxEvtHandlerPFunc a_SetPreviousHandler__wxEvtHandlerP, wxValidatorExtSetWindow__wxWindowPFunc a_SetWindow__wxWindowP, wxValidatorExtTransferFromWindowFunc a_TransferFromWindow, wxValidatorExtTransferToWindowFunc a_TransferToWindow, wxValidatorExtTryAfter__wxEventRFunc a_TryAfter__wxEventR, wxValidatorExtTryBefore__wxEventRFunc a_TryBefore__wxEventR, wxValidatorExtValidate__wxWindowPFunc a_Validate__wxWindowP, wxValidatorExtWXReservedEvtHandler1__voidPFunc a_WXReservedEvtHandler1__voidP, wxValidatorExtWXReservedEvtHandler2__voidPFunc a_WXReservedEvtHandler2__voidP): wxValidator() {
    m_wxValidatorExtAddPendingEvent__wxEventCR = a_AddPendingEvent__wxEventCR;
    m_wxValidatorExtClone = a_Clone;
    m_wxValidatorExtCloneRefData__wxObjectRefDataCP = a_CloneRefData__wxObjectRefDataCP;
    m_wxValidatorExtCreateRefData = a_CreateRefData;
    m_wxValidatorExtDoGetClientData = a_DoGetClientData;
    m_wxValidatorExtDoGetClientObject = a_DoGetClientObject;
    m_wxValidatorExtDoSetClientData__voidP = a_DoSetClientData__voidP;
    m_wxValidatorExtDoSetClientObject__wxClientDataP = a_DoSetClientObject__wxClientDataP;
    m_wxValidatorExtGetClassInfo = a_GetClassInfo;
    m_wxValidatorExtGetEventHashTable = a_GetEventHashTable;
    m_wxValidatorExtGetEventTable = a_GetEventTable;
    m_wxValidatorExtOnDynamicBind__wxDynamicEventTableEntryR = a_OnDynamicBind__wxDynamicEventTableEntryR;
    m_wxValidatorExtProcessEvent__wxEventR = a_ProcessEvent__wxEventR;
    m_wxValidatorExtQueueEvent__wxEventP = a_QueueEvent__wxEventP;
    m_wxValidatorExtSearchEventTable__wxEventTableRwxEventR = a_SearchEventTable__wxEventTableRwxEventR;
    m_wxValidatorExtSetNextHandler__wxEvtHandlerP = a_SetNextHandler__wxEvtHandlerP;
    m_wxValidatorExtSetPreviousHandler__wxEvtHandlerP = a_SetPreviousHandler__wxEvtHandlerP;
    m_wxValidatorExtSetWindow__wxWindowP = a_SetWindow__wxWindowP;
    m_wxValidatorExtTransferFromWindow = a_TransferFromWindow;
    m_wxValidatorExtTransferToWindow = a_TransferToWindow;
    m_wxValidatorExtTryAfter__wxEventR = a_TryAfter__wxEventR;
    m_wxValidatorExtTryBefore__wxEventR = a_TryBefore__wxEventR;
    m_wxValidatorExtValidate__wxWindowP = a_Validate__wxWindowP;
    m_wxValidatorExtWXReservedEvtHandler1__voidP = a_WXReservedEvtHandler1__voidP;
    m_wxValidatorExtWXReservedEvtHandler2__voidP = a_WXReservedEvtHandler2__voidP;
  }
};



#endif
