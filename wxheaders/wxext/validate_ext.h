#ifndef _WX_VALIDATE_H_EXT_
#define _WX_VALIDATE_H_EXT_

#include <wx/wx.h>
#include <wx/vidmode.h>

class wxValidatorExt;
typedef void (*wxValidatorExtAddPendingEventwxEventCRFunc)(const wxValidatorExt* self, wxEvent const& event);
typedef wxObject* (*wxValidatorExtCloneFunc)(const wxValidatorExt* self, wxObject* res);
typedef wxObjectRefData* (*wxValidatorExtCloneRefDatawxObjectRefDataCPFunc)(const wxValidatorExt* self, wxObjectRefData const* data, wxObjectRefData* res);
typedef wxObjectRefData* (*wxValidatorExtCreateRefDataFunc)(const wxValidatorExt* self, wxObjectRefData* res);
typedef void* (*wxValidatorExtDoGetClientDataFunc)(const wxValidatorExt* self, void* res);
typedef wxClientData* (*wxValidatorExtDoGetClientObjectFunc)(const wxValidatorExt* self, wxClientData* res);
typedef void (*wxValidatorExtDoSetClientDatavoidPFunc)(const wxValidatorExt* self, void* data);
typedef void (*wxValidatorExtDoSetClientObjectwxClientDataPFunc)(const wxValidatorExt* self, wxClientData* data);
typedef wxClassInfo* (*wxValidatorExtGetClassInfoFunc)(const wxValidatorExt* self, wxClassInfo* res);
typedef wxEventHashTable& (*wxValidatorExtGetEventHashTableFunc)(const wxValidatorExt* self, wxEventHashTable& res);
typedef wxEventTable const* (*wxValidatorExtGetEventTableFunc)(const wxValidatorExt* self, wxEventTable const* res);
typedef bool (*wxValidatorExtOnDynamicBindwxDynamicEventTableEntryRFunc)(const wxValidatorExt* self, wxDynamicEventTableEntry& param0, bool res);
typedef bool (*wxValidatorExtProcessEventwxEventRFunc)(const wxValidatorExt* self, wxEvent& event, bool res);
typedef void (*wxValidatorExtQueueEventwxEventPFunc)(const wxValidatorExt* self, wxEvent* event);
typedef bool (*wxValidatorExtSearchEventTablewxEventTableRwxEventRFunc)(const wxValidatorExt* self, wxEventTable& table, wxEvent& event, bool res);
typedef void (*wxValidatorExtSetNextHandlerwxEvtHandlerPFunc)(const wxValidatorExt* self, wxEvtHandler* handler);
typedef void (*wxValidatorExtSetPreviousHandlerwxEvtHandlerPFunc)(const wxValidatorExt* self, wxEvtHandler* handler);
typedef void (*wxValidatorExtSetWindowwxWindowPFunc)(const wxValidatorExt* self, wxWindow* win);
typedef bool (*wxValidatorExtTransferFromWindowFunc)(const wxValidatorExt* self, bool res);
typedef bool (*wxValidatorExtTransferToWindowFunc)(const wxValidatorExt* self, bool res);
typedef bool (*wxValidatorExtTryAfterwxEventRFunc)(const wxValidatorExt* self, wxEvent& event, bool res);
typedef bool (*wxValidatorExtTryBeforewxEventRFunc)(const wxValidatorExt* self, wxEvent& event, bool res);
typedef bool (*wxValidatorExtValidatewxWindowPFunc)(const wxValidatorExt* self, wxWindow* param0, bool res);
typedef void* (*wxValidatorExtWXReservedEvtHandler1voidPFunc)(const wxValidatorExt* self, void* param0, void* res);
typedef void* (*wxValidatorExtWXReservedEvtHandler2voidPFunc)(const wxValidatorExt* self, void* param0, void* res);

class wxValidatorExt: public wxValidator
{
public:
  wxValidatorExt(): wxValidator()  {  }
  wxValidatorExt(wxValidator const& other): wxValidator(other)  {  }
  virtual ~wxValidatorExt() override  {  }
  wxValidatorExtAddPendingEventwxEventCRFunc m_wxValidatorExtAddPendingEventwxEventCR = NULL;
  virtual void AddPendingEvent(wxEvent const& event) override
  {
    wxValidator::AddPendingEvent(event);
    if (*m_wxValidatorExtAddPendingEventwxEventCR != NULL){
      return m_wxValidatorExtAddPendingEventwxEventCR(this, event);
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
  wxValidatorExtCloneRefDatawxObjectRefDataCPFunc m_wxValidatorExtCloneRefDatawxObjectRefDataCP = NULL;
  virtual wxObjectRefData* CloneRefData(wxObjectRefData const* data) const override
  {
    wxObjectRefData* res = wxValidator::CloneRefData(data);
    if (*m_wxValidatorExtCloneRefDatawxObjectRefDataCP != NULL){
      return m_wxValidatorExtCloneRefDatawxObjectRefDataCP(this, data, res);
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
  wxValidatorExtDoSetClientDatavoidPFunc m_wxValidatorExtDoSetClientDatavoidP = NULL;
  virtual void DoSetClientData(void* data) override
  {
    wxValidator::DoSetClientData(data);
    if (*m_wxValidatorExtDoSetClientDatavoidP != NULL){
      return m_wxValidatorExtDoSetClientDatavoidP(this, data);
    }
  }
  wxValidatorExtDoSetClientObjectwxClientDataPFunc m_wxValidatorExtDoSetClientObjectwxClientDataP = NULL;
  virtual void DoSetClientObject(wxClientData* data) override
  {
    wxValidator::DoSetClientObject(data);
    if (*m_wxValidatorExtDoSetClientObjectwxClientDataP != NULL){
      return m_wxValidatorExtDoSetClientObjectwxClientDataP(this, data);
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
  wxValidatorExtOnDynamicBindwxDynamicEventTableEntryRFunc m_wxValidatorExtOnDynamicBindwxDynamicEventTableEntryR = NULL;
  virtual bool OnDynamicBind(wxDynamicEventTableEntry& param0) override
  {
    bool res = wxValidator::OnDynamicBind(param0);
    if (*m_wxValidatorExtOnDynamicBindwxDynamicEventTableEntryR != NULL){
      return m_wxValidatorExtOnDynamicBindwxDynamicEventTableEntryR(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtProcessEventwxEventRFunc m_wxValidatorExtProcessEventwxEventR = NULL;
  virtual bool ProcessEvent(wxEvent& event) override
  {
    bool res = wxValidator::ProcessEvent(event);
    if (*m_wxValidatorExtProcessEventwxEventR != NULL){
      return m_wxValidatorExtProcessEventwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtQueueEventwxEventPFunc m_wxValidatorExtQueueEventwxEventP = NULL;
  virtual void QueueEvent(wxEvent* event) override
  {
    wxValidator::QueueEvent(event);
    if (*m_wxValidatorExtQueueEventwxEventP != NULL){
      return m_wxValidatorExtQueueEventwxEventP(this, event);
    }
  }
  wxValidatorExtSearchEventTablewxEventTableRwxEventRFunc m_wxValidatorExtSearchEventTablewxEventTableRwxEventR = NULL;
  virtual bool SearchEventTable(wxEventTable& table, wxEvent& event) override
  {
    bool res = wxValidator::SearchEventTable(table, event);
    if (*m_wxValidatorExtSearchEventTablewxEventTableRwxEventR != NULL){
      return m_wxValidatorExtSearchEventTablewxEventTableRwxEventR(this, table, event, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtSetNextHandlerwxEvtHandlerPFunc m_wxValidatorExtSetNextHandlerwxEvtHandlerP = NULL;
  virtual void SetNextHandler(wxEvtHandler* handler) override
  {
    wxValidator::SetNextHandler(handler);
    if (*m_wxValidatorExtSetNextHandlerwxEvtHandlerP != NULL){
      return m_wxValidatorExtSetNextHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxValidatorExtSetPreviousHandlerwxEvtHandlerPFunc m_wxValidatorExtSetPreviousHandlerwxEvtHandlerP = NULL;
  virtual void SetPreviousHandler(wxEvtHandler* handler) override
  {
    wxValidator::SetPreviousHandler(handler);
    if (*m_wxValidatorExtSetPreviousHandlerwxEvtHandlerP != NULL){
      return m_wxValidatorExtSetPreviousHandlerwxEvtHandlerP(this, handler);
    }
  }
  wxValidatorExtSetWindowwxWindowPFunc m_wxValidatorExtSetWindowwxWindowP = NULL;
  virtual void SetWindow(wxWindow* win) override
  {
    wxValidator::SetWindow(win);
    if (*m_wxValidatorExtSetWindowwxWindowP != NULL){
      return m_wxValidatorExtSetWindowwxWindowP(this, win);
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
  wxValidatorExtTryAfterwxEventRFunc m_wxValidatorExtTryAfterwxEventR = NULL;
  virtual bool TryAfter(wxEvent& event) override
  {
    bool res = wxValidator::TryAfter(event);
    if (*m_wxValidatorExtTryAfterwxEventR != NULL){
      return m_wxValidatorExtTryAfterwxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtTryBeforewxEventRFunc m_wxValidatorExtTryBeforewxEventR = NULL;
  virtual bool TryBefore(wxEvent& event) override
  {
    bool res = wxValidator::TryBefore(event);
    if (*m_wxValidatorExtTryBeforewxEventR != NULL){
      return m_wxValidatorExtTryBeforewxEventR(this, event, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtValidatewxWindowPFunc m_wxValidatorExtValidatewxWindowP = NULL;
  virtual bool Validate(wxWindow* param0) override
  {
    bool res = wxValidator::Validate(param0);
    if (*m_wxValidatorExtValidatewxWindowP != NULL){
      return m_wxValidatorExtValidatewxWindowP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtWXReservedEvtHandler1voidPFunc m_wxValidatorExtWXReservedEvtHandler1voidP = NULL;
  virtual void* WXReservedEvtHandler1(void* param0) override
  {
    void* res = wxValidator::WXReservedEvtHandler1(param0);
    if (*m_wxValidatorExtWXReservedEvtHandler1voidP != NULL){
      return m_wxValidatorExtWXReservedEvtHandler1voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExtWXReservedEvtHandler2voidPFunc m_wxValidatorExtWXReservedEvtHandler2voidP = NULL;
  virtual void* WXReservedEvtHandler2(void* param0) override
  {
    void* res = wxValidator::WXReservedEvtHandler2(param0);
    if (*m_wxValidatorExtWXReservedEvtHandler2voidP != NULL){
      return m_wxValidatorExtWXReservedEvtHandler2voidP(this, param0, res);
    }
    else {
      return res;
    }
  }
  wxValidatorExt(wxValidatorExtAddPendingEventwxEventCRFunc a_AddPendingEventwxEventCR, wxValidatorExtCloneFunc a_Clone, wxValidatorExtCloneRefDatawxObjectRefDataCPFunc a_CloneRefDatawxObjectRefDataCP, wxValidatorExtCreateRefDataFunc a_CreateRefData, wxValidatorExtDoGetClientDataFunc a_DoGetClientData, wxValidatorExtDoGetClientObjectFunc a_DoGetClientObject, wxValidatorExtDoSetClientDatavoidPFunc a_DoSetClientDatavoidP, wxValidatorExtDoSetClientObjectwxClientDataPFunc a_DoSetClientObjectwxClientDataP, wxValidatorExtGetClassInfoFunc a_GetClassInfo, wxValidatorExtGetEventHashTableFunc a_GetEventHashTable, wxValidatorExtGetEventTableFunc a_GetEventTable, wxValidatorExtOnDynamicBindwxDynamicEventTableEntryRFunc a_OnDynamicBindwxDynamicEventTableEntryR, wxValidatorExtProcessEventwxEventRFunc a_ProcessEventwxEventR, wxValidatorExtQueueEventwxEventPFunc a_QueueEventwxEventP, wxValidatorExtSearchEventTablewxEventTableRwxEventRFunc a_SearchEventTablewxEventTableRwxEventR, wxValidatorExtSetNextHandlerwxEvtHandlerPFunc a_SetNextHandlerwxEvtHandlerP, wxValidatorExtSetPreviousHandlerwxEvtHandlerPFunc a_SetPreviousHandlerwxEvtHandlerP, wxValidatorExtSetWindowwxWindowPFunc a_SetWindowwxWindowP, wxValidatorExtTransferFromWindowFunc a_TransferFromWindow, wxValidatorExtTransferToWindowFunc a_TransferToWindow, wxValidatorExtTryAfterwxEventRFunc a_TryAfterwxEventR, wxValidatorExtTryBeforewxEventRFunc a_TryBeforewxEventR, wxValidatorExtValidatewxWindowPFunc a_ValidatewxWindowP, wxValidatorExtWXReservedEvtHandler1voidPFunc a_WXReservedEvtHandler1voidP, wxValidatorExtWXReservedEvtHandler2voidPFunc a_WXReservedEvtHandler2voidP): wxValidator() {
    m_wxValidatorExtAddPendingEventwxEventCR = a_AddPendingEventwxEventCR;
    m_wxValidatorExtClone = a_Clone;
    m_wxValidatorExtCloneRefDatawxObjectRefDataCP = a_CloneRefDatawxObjectRefDataCP;
    m_wxValidatorExtCreateRefData = a_CreateRefData;
    m_wxValidatorExtDoGetClientData = a_DoGetClientData;
    m_wxValidatorExtDoGetClientObject = a_DoGetClientObject;
    m_wxValidatorExtDoSetClientDatavoidP = a_DoSetClientDatavoidP;
    m_wxValidatorExtDoSetClientObjectwxClientDataP = a_DoSetClientObjectwxClientDataP;
    m_wxValidatorExtGetClassInfo = a_GetClassInfo;
    m_wxValidatorExtGetEventHashTable = a_GetEventHashTable;
    m_wxValidatorExtGetEventTable = a_GetEventTable;
    m_wxValidatorExtOnDynamicBindwxDynamicEventTableEntryR = a_OnDynamicBindwxDynamicEventTableEntryR;
    m_wxValidatorExtProcessEventwxEventR = a_ProcessEventwxEventR;
    m_wxValidatorExtQueueEventwxEventP = a_QueueEventwxEventP;
    m_wxValidatorExtSearchEventTablewxEventTableRwxEventR = a_SearchEventTablewxEventTableRwxEventR;
    m_wxValidatorExtSetNextHandlerwxEvtHandlerP = a_SetNextHandlerwxEvtHandlerP;
    m_wxValidatorExtSetPreviousHandlerwxEvtHandlerP = a_SetPreviousHandlerwxEvtHandlerP;
    m_wxValidatorExtSetWindowwxWindowP = a_SetWindowwxWindowP;
    m_wxValidatorExtTransferFromWindow = a_TransferFromWindow;
    m_wxValidatorExtTransferToWindow = a_TransferToWindow;
    m_wxValidatorExtTryAfterwxEventR = a_TryAfterwxEventR;
    m_wxValidatorExtTryBeforewxEventR = a_TryBeforewxEventR;
    m_wxValidatorExtValidatewxWindowP = a_ValidatewxWindowP;
    m_wxValidatorExtWXReservedEvtHandler1voidP = a_WXReservedEvtHandler1voidP;
    m_wxValidatorExtWXReservedEvtHandler2voidP = a_WXReservedEvtHandler2voidP;
  }
};



#endif
