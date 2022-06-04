
function ChromiumWindow_Create(AOwner: TComponent): TChromiumWindow; extdecl;
begin
  handleExceptionBegin
  Result := TChromiumWindow.Create(AOwner);
  handleExceptionEnd
end;

procedure ChromiumWindow_Free(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  Aobj.Free;
  handleExceptionEnd
end;

function ChromiumWindow_StaticClassType: TClass; extdecl;
begin
  Result := TChromiumWindow;
end;

function ChromiumWindow_GetParent(AObj: TChromiumWindow): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Parent;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetParent(AObj: TChromiumWindow; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.Parent := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetAlign(AObj: TChromiumWindow): TAlign; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Align;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetAlign(AObj: TChromiumWindow; AValue: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.Align := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetAnchors(AObj: TChromiumWindow): TAnchors; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Anchors;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetAnchors(AObj: TChromiumWindow; AValue: TAnchors); extdecl;
begin
  handleExceptionBegin
  AObj.Anchors := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetConstraints(AObj: TChromiumWindow): TSizeConstraints; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Constraints;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetConstraints(AObj: TChromiumWindow; AValue: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.Constraints := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetDoubleBuffered(AObj: TChromiumWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DoubleBuffered;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetDoubleBuffered(AObj: TChromiumWindow; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DoubleBuffered := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetEnabled(AObj: TChromiumWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetEnabled(AObj: TChromiumWindow; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetShowHint(AObj: TChromiumWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShowHint;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetShowHint(AObj: TChromiumWindow; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHint := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetTabOrder(AObj: TChromiumWindow): TTabOrder; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabOrder;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetTabOrder(AObj: TChromiumWindow; AValue: TTabOrder); extdecl;
begin
  handleExceptionBegin
  AObj.TabOrder := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetTabStop(AObj: TChromiumWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabStop;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetTabStop(AObj: TChromiumWindow; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.TabStop := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetVisible(AObj: TChromiumWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetVisible(AObj: TChromiumWindow; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetLeft(AObj: TChromiumWindow): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetLeft(AObj: TChromiumWindow; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetTop(AObj: TChromiumWindow): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetTop(AObj: TChromiumWindow; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetWidth(AObj: TChromiumWindow): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetWidth(AObj: TChromiumWindow; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetHeight(AObj: TChromiumWindow): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetHeight(AObj: TChromiumWindow; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetTag(AObj: TChromiumWindow): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetTag(AObj: TChromiumWindow; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetName(AObj: TChromiumWindow): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure ChromiumWindow_SetName(AObj: TChromiumWindow; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetBorderSpacing(AObj: TChromiumWindow): TControlBorderSpacing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderSpacing;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetBorderSpacing(AObj: TChromiumWindow; AValue: TControlBorderSpacing); extdecl;
begin
  handleExceptionBegin
  AObj.BorderSpacing := AValue;
  handleExceptionEnd
end;

function ChromiumWindow_GetHandle(AObj: TChromiumWindow): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;


function ChromiumWindow_GetOwner(AObj: TChromiumWindow): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function ChromiumWindow_Focused(AObj: TChromiumWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Focused;
  handleExceptionEnd
end;

procedure ChromiumWindow_Invalidate(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate;
  handleExceptionEnd
end;

procedure ChromiumWindow_SetFocus(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  AObj.SetFocus;
  handleExceptionEnd
end;

procedure ChromiumWindow_Update(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

procedure ChromiumWindow_BringToFront(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront;
  handleExceptionEnd
end;

procedure ChromiumWindow_Hide(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Hide;
  handleExceptionEnd
end;

procedure ChromiumWindow_Refresh(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh;
  handleExceptionEnd
end;

procedure ChromiumWindow_SendToBack(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack;
  handleExceptionEnd
end;

procedure ChromiumWindow_Show(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Show;
  handleExceptionEnd
end;


//EVENT_TYPE:TNotifyEvent
procedure ChromiumWindow_SetOnAfterCreated(AObj: TChromiumWindow; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnAfterCreated}
  {$DEFINE EventName := OnAfterCreated}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ChromiumWindow_SetOnBeforeClose(AObj: TChromiumWindow; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnBeforeClose}
  {$DEFINE EventName := OnBeforeClose}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ChromiumWindow_SetOnClose(AObj: TChromiumWindow; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnClose}
  {$DEFINE EventName := OnClose}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ChromiumWindow_SetOnEnter(AObj: TChromiumWindow; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnEnter}
  {$DEFINE EventName := OnEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ChromiumWindow_SetOnExit(AObj: TChromiumWindow; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnExit}
  {$DEFINE EventName := OnExit}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ChromiumWindow_SetOnResize(AObj: TChromiumWindow; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnResize}
  {$DEFINE EventName := OnResize}
  EventMethodCode
end;

function ChromiumWindow_CreateBrowser(AObj: TChromiumWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateBrowser();
  handleExceptionEnd
end;

procedure ChromiumWindow_CloseBrowser(AObj: TChromiumWindow; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.CloseBrowser(AValue);
  handleExceptionEnd
end;

procedure ChromiumWindow_LoadURL(AObj: TChromiumWindow; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadURL(ustring(string(AValue)));
  handleExceptionEnd
end;

procedure ChromiumWindow_NotifyMoveOrResizeStarted(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  AObj.NotifyMoveOrResizeStarted();
  handleExceptionEnd
end;

function ChromiumWindow_GetChromiumBrowser(AObj: TChromiumWindow): TChromium; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChromiumBrowser;
  handleExceptionEnd
end;

function ChromiumWindow_GetInitialized(AObj: TChromiumWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

procedure ChromiumWindow_UpdateSize(AObj: TChromiumWindow); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateSize;
  handleExceptionEnd
end;

exports
  ChromiumWindow_Create,
  ChromiumWindow_Free,
  ChromiumWindow_StaticClassType,
  ChromiumWindow_GetParent,
  ChromiumWindow_SetParent,
  ChromiumWindow_GetAlign,
  ChromiumWindow_SetAlign,
  ChromiumWindow_GetAnchors,
  ChromiumWindow_SetAnchors,
  ChromiumWindow_GetConstraints,
  ChromiumWindow_SetConstraints,
  ChromiumWindow_GetDoubleBuffered,
  ChromiumWindow_SetDoubleBuffered,
  ChromiumWindow_GetEnabled,
  ChromiumWindow_SetEnabled,
  ChromiumWindow_GetShowHint,
  ChromiumWindow_SetShowHint,
  ChromiumWindow_GetTabOrder,
  ChromiumWindow_SetTabOrder,
  ChromiumWindow_GetTabStop,
  ChromiumWindow_SetTabStop,
  ChromiumWindow_GetVisible,
  ChromiumWindow_SetVisible,
  ChromiumWindow_GetLeft,
  ChromiumWindow_SetLeft,
  ChromiumWindow_GetTop,
  ChromiumWindow_SetTop,
  ChromiumWindow_GetWidth,
  ChromiumWindow_SetWidth,
  ChromiumWindow_GetHeight,
  ChromiumWindow_SetHeight,
  ChromiumWindow_GetTag,
  ChromiumWindow_SetTag,
  ChromiumWindow_GetName,
  ChromiumWindow_SetName,
  ChromiumWindow_GetBorderSpacing,
  ChromiumWindow_SetBorderSpacing,
  ChromiumWindow_GetHandle,
  ChromiumWindow_GetOwner,
  ChromiumWindow_Focused,
  ChromiumWindow_Invalidate,
  ChromiumWindow_SetFocus,
  ChromiumWindow_Update,
  ChromiumWindow_BringToFront,
  ChromiumWindow_Hide,
  ChromiumWindow_Refresh,
  ChromiumWindow_SendToBack,
  ChromiumWindow_Show,
  ChromiumWindow_SetOnAfterCreated,
  ChromiumWindow_SetOnBeforeClose,
  ChromiumWindow_SetOnClose,
  ChromiumWindow_SetOnEnter,
  ChromiumWindow_SetOnExit,
  ChromiumWindow_SetOnResize,
  ChromiumWindow_CreateBrowser,
  ChromiumWindow_CloseBrowser,
  ChromiumWindow_LoadURL,
  ChromiumWindow_NotifyMoveOrResizeStarted,
  ChromiumWindow_GetChromiumBrowser,
  ChromiumWindow_GetInitialized,
  ChromiumWindow_UpdateSize;
