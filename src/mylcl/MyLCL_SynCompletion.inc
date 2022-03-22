function SynCompletion_Create(AOwner: TComponent): TSynCompletion; extdecl;
begin
  handleExceptionBegin
  Result := TSynCompletion.Create(AOwner);
  handleExceptionEnd
end;

procedure SynCompletion_Free(AObj: TSynCompletion); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynCompletion_GetAutoUseSingleIdent(AObj: TSynCompletion): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoUseSingleIdent;
  handleExceptionEnd
end;

procedure SynCompletion_SetAutoUseSingleIdent(AObj: TSynCompletion; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AutoUseSingleIdent := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetCaseSensitive(AObj: TSynCompletion): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CaseSensitive;
  handleExceptionEnd
end;

procedure SynCompletion_SetCaseSensitive(AObj: TSynCompletion; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.CaseSensitive := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetDoubleClickSelects(AObj: TSynCompletion): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DoubleClickSelects;
  handleExceptionEnd
end;

procedure SynCompletion_SetDoubleClickSelects(AObj: TSynCompletion; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DoubleClickSelects := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetEditor(AObj: TSynCompletion): TSynEdit; extdecl;
begin
  handleExceptionBegin
  Result := TSynEdit(AObj.Editor);
  handleExceptionEnd
end;

procedure SynCompletion_SetEditor(AObj: TSynCompletion; AValue: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Editor := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetEndOfTokenChr(AObj: TSynCompletion): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(AObj.EndOfTokenChr);
  handleExceptionEnd
end;

procedure SynCompletion_SetEndOfTokenChr(AObj: TSynCompletion; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.EndOfTokenChr := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetExecCommandID(AObj: TSynCompletion): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExecCommandID;
  handleExceptionEnd
end;

procedure SynCompletion_SetExecCommandID(AObj: TSynCompletion; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ExecCommandID := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetItemList(AObj: TSynCompletion): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ItemList;
  handleExceptionEnd
end;

procedure SynCompletion_SetItemList(AObj: TSynCompletion; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.ItemList := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetLinesInWindow(AObj: TSynCompletion): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LinesInWindow;
  handleExceptionEnd
end;

procedure SynCompletion_SetLinesInWindow(AObj: TSynCompletion; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.LinesInWindow := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetLongLineHintTime(AObj: TSynCompletion): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LongLineHintTime;
  handleExceptionEnd
end;

procedure SynCompletion_SetLongLineHintTime(AObj: TSynCompletion; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.LongLineHintTime := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetLongLineHintType(AObj: TSynCompletion): TSynCompletionLongHintType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LongLineHintType;
  handleExceptionEnd
end;

procedure SynCompletion_SetLongLineHintType(AObj: TSynCompletion; AValue: TSynCompletionLongHintType); extdecl;
begin
  handleExceptionBegin
  AObj.LongLineHintType := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetName(AObj: TSynCompletion): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(AObj.Name);
  handleExceptionEnd
end;

procedure SynCompletion_SetName(AObj: TSynCompletion; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetPosition(AObj: TSynCompletion): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Position;
  handleExceptionEnd
end;

procedure SynCompletion_SetPosition(AObj: TSynCompletion; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Position := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetSelectedColor(AObj: TSynCompletion): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SelectedColor;
  handleExceptionEnd
end;

procedure SynCompletion_SetSelectedColor(AObj: TSynCompletion; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.SelectedColor := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetShortCut(AObj: TSynCompletion): TShortCut; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ShortCut;
  handleExceptionEnd
end;

procedure SynCompletion_SetShortCut(AObj: TSynCompletion; AValue: TShortCut); extdecl;
begin
  handleExceptionBegin
  AObj.ShortCut := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetShowSizeDrag(AObj: TSynCompletion): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ShowSizeDrag;
  handleExceptionEnd
end;

procedure SynCompletion_SetShowSizeDrag(AObj: TSynCompletion; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowSizeDrag := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetTag(AObj: TSynCompletion): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Tag;
  handleExceptionEnd
end;

procedure SynCompletion_SetTag(AObj: TSynCompletion; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetToggleReplaceWhole(AObj: TSynCompletion): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ToggleReplaceWhole;
  handleExceptionEnd
end;

procedure SynCompletion_SetToggleReplaceWhole(AObj: TSynCompletion; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ToggleReplaceWhole := AValue;
  handleExceptionEnd
end;

function SynCompletion_GetWidth(AObj: TSynCompletion): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

procedure SynCompletion_SetWidth(AObj: TSynCompletion; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

procedure SynCompletion_SetOnCodeCompletion(AObj: TSynCompletion; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTCodeCompletionEvent_OnCodeCompletion}
  {$DEFINE EventName := OnCodeCompletion}
  EventMethodCode
end;

procedure SynCompletion_SetOnExecute(AObj: TSynCompletion; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnExecute}
  {$DEFINE EventName := OnExecute}
  EventMethodCode
end;

procedure SynCompletion_SetOnKeyCompletePrefix(AObj: TSynCompletion; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnKeyCompletePrefix}
  {$DEFINE EventName := OnKeyCompletePrefix}
  EventMethodCode
end;

procedure SynCompletion_SetOnKeyNextChar(AObj: TSynCompletion; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnKeyNextChar}
  {$DEFINE EventName := OnKeyNextChar}
  EventMethodCode
end;

procedure SynCompletion_SetOnKeyPrevChar(AObj: TSynCompletion; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnKeyPrevChar}
  {$DEFINE EventName := OnKeyPrevChar}
  EventMethodCode
end;

procedure SynCompletion_SetOnPositionChanged(AObj: TSynCompletion; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnPositionChanged}
  {$DEFINE EventName := OnPositionChanged}
  EventMethodCode
end;

procedure SynCompletion_SetOnSearchPosition(AObj: TSynCompletion; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseCompletionSearchPosition_OnSearchPosition}
  {$DEFINE EventName := OnSearchPosition}
  EventMethodCode
end;

procedure SynCompletion_Deactivate(AObj: TSynCompletion); extdecl;
begin
  handleExceptionBegin
  AObj.Deactivate;
  handleExceptionEnd
end;

procedure SynCompletion_Execute(AObj: TSynCompletion; s: string; x: Integer; y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Execute(s, x, y);
  handleExceptionEnd
end;

function SynCompletion_IsActive(AObj: TSynCompletion): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsActive;
  handleExceptionEnd
end;

function SynCompletion_StaticClassType: TClass; extdecl;
begin
  Result := TSynCompletion;
end;

function SynCompletion_ClassName(AObj: TSynCompletion): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function SynCompletion_GetHashCode(AObj: TSynCompletion): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHashCode;
  handleExceptionEnd
end;

function SynCompletion_Equals(AObj: TSynCompletion; AOther: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Equals(AOther);
  handleExceptionEnd
end;

function SynCompletion_ClassType(AObj: TSynCompletion): TClass; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClassType;
  handleExceptionEnd
end;

function SynCompletion_InstanceSize(AObj: TSynCompletion): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InstanceSize;
  handleExceptionEnd
end;

function SynCompletion_InheritsFrom(AObj: TSynCompletion; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function SynCompletion_FindComponent(AObj: TSynCompletion; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindComponent(AName);
  handleExceptionEnd
end;

function SynCompletion_GetNamePath(AObj: TSynCompletion): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPchar(AObj.GetNamePath());
  handleExceptionEnd
end;

function SynCompletion_HasParent(AObj: TSynCompletion): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasParent;
  handleExceptionEnd
end;

procedure SynCompletion_Assign(AObj: TSynCompletion; AOther: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(AOther);
  handleExceptionEnd
end;

function SynCompletion_GetComponentCount(AObj: TSynCompletion): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ComponentCount;
  handleExceptionEnd
end;

function SynCompletion_GetComponentIndex(AObj: TSynCompletion): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure SynCompletion_SetComponentIndex(AObj: TSynCompletion; AIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex:= AIndex;
  handleExceptionEnd
end;

function SynCompletion_GetComponents(AObj: TSynCompletion; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Components[AIndex];
  handleExceptionEnd
end;

function SynCompletion_GetOwner(AObj: TSynCompletion): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

exports
  SynCompletion_Create,
  SynCompletion_Free,
  SynCompletion_GetAutoUseSingleIdent,
  SynCompletion_SetAutoUseSingleIdent,
  SynCompletion_GetCaseSensitive,
  SynCompletion_SetCaseSensitive,
  SynCompletion_GetDoubleClickSelects,
  SynCompletion_SetDoubleClickSelects,
  SynCompletion_GetEditor,
  SynCompletion_SetEditor,
  SynCompletion_GetEndOfTokenChr,
  SynCompletion_SetEndOfTokenChr,
  SynCompletion_GetExecCommandID,
  SynCompletion_SetExecCommandID,
  SynCompletion_GetItemList,
  SynCompletion_SetItemList,
  SynCompletion_GetLinesInWindow,
  SynCompletion_SetLinesInWindow,
  SynCompletion_GetLongLineHintTime,
  SynCompletion_SetLongLineHintTime,
  SynCompletion_GetLongLineHintType,
  SynCompletion_SetLongLineHintType,
  SynCompletion_GetName,
  SynCompletion_SetName,
  SynCompletion_GetPosition,
  SynCompletion_SetPosition,
  SynCompletion_GetSelectedColor,
  SynCompletion_SetSelectedColor,
  SynCompletion_GetShortCut,
  SynCompletion_SetShortCut,
  SynCompletion_GetShowSizeDrag,
  SynCompletion_SetShowSizeDrag,
  SynCompletion_GetTag,
  SynCompletion_SetTag,
  SynCompletion_GetToggleReplaceWhole,
  SynCompletion_SetToggleReplaceWhole,
  SynCompletion_GetWidth,
  SynCompletion_SetWidth,
  SynCompletion_SetOnCodeCompletion,
  SynCompletion_SetOnExecute,
  SynCompletion_SetOnKeyCompletePrefix,
  SynCompletion_SetOnKeyNextChar,
  SynCompletion_SetOnKeyPrevChar,
  SynCompletion_SetOnPositionChanged,
  SynCompletion_SetOnSearchPosition,
  SynCompletion_Deactivate,
  SynCompletion_Execute,
  SynCompletion_IsActive,
  SynCompletion_StaticClassType,
  SynCompletion_ClassName,
  SynCompletion_GetHashCode,
  SynCompletion_Equals,
  SynCompletion_ClassType,
  SynCompletion_InstanceSize,
  SynCompletion_InheritsFrom,
  SynCompletion_FindComponent,
  SynCompletion_GetNamePath,
  SynCompletion_HasParent,
  SynCompletion_Assign,
  SynCompletion_GetComponentCount,
  SynCompletion_GetComponentIndex,
  SynCompletion_SetComponentIndex,
  SynCompletion_GetComponents,
  SynCompletion_GetOwner;

