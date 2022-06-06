
function Browser_Create(AOwnerParent: TWinControl; AAlign: TAlign): TBrowser; extdecl;
begin
  handleExceptionBegin
  Result := TBrowser.Create(AOwnerParent, AAlign);
  handleExceptionEnd
end;

procedure Browser_Free(AObj: TBrowser); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function Browser_GetChromiumWindow(AObj: TBrowser): TChromiumWindow; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetChromiumWindow();
  handleExceptionEnd
end;

function Browser_GetChromium(AObj: TBrowser): TChromium; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetChromium();
  handleExceptionEnd
end;

function Browser_GetOpenLinkPopup(AObj: TBrowser): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OpenLinkPopup;
  handleExceptionEnd
end;

procedure Browser_SetOpenLinkPopup(AObj: TBrowser; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.OpenLinkPopup := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure Browser_SetOnInitComplete(AObj: TBrowser; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnInitComplete}
  {$DEFINE EventName := OnInitComplete}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure Browser_SetOnAfterCreated(AObj: TBrowser; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnAfterCreated}
  {$DEFINE EventName := OnAfterCreated}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure Browser_SetOnBeforeClose(AObj: TBrowser; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnBeforeClose}
  {$DEFINE EventName := OnBeforeClose}
  EventMethodCode
end;

exports
  Browser_Create,
  Browser_Free,
  Browser_GetChromiumWindow,
  Browser_GetChromium,
  Browser_GetOpenLinkPopup,
  Browser_SetOpenLinkPopup,
  Browser_SetOnInitComplete,
  Browser_SetOnAfterCreated,
  Browser_SetOnBeforeClose;


