function SynGutter_GetAutoSize(AObj: TSynGutter): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoSize;
  handleExceptionEnd
end;

procedure SynGutter_SetAutoSize(AObj: TSynGutter; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AutoSize := AValue;
  handleExceptionEnd
end;

function SynGutter_StaticClassType: TClass; extdecl;
begin
  Result := TSynGutter;
end;

function SynGutter_GetColor(AObj: TSynGutter): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Color;
  handleExceptionEnd
end;

procedure SynGutter_SetColor(AObj: TSynGutter; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Color := AValue;
  handleExceptionEnd
end;

function SynGutter_GetVisible(AObj: TSynGutter): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure SynGutter_SetVisible(AObj: TSynGutter; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function SynGutter_GetWidth(AObj: TSynGutter): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

procedure SynGutter_SetWidth(AObj: TSynGutter; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

exports
  SynGutter_GetAutoSize,
  SynGutter_SetAutoSize,
  SynGutter_StaticClassType,
  SynGutter_GetColor,
  SynGutter_SetColor,
  SynGutter_GetVisible,
  SynGutter_SetVisible,
  SynGutter_GetWidth,
  SynGutter_SetWidth;


