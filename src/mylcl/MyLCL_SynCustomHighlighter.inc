function SynCustomHighlighter_GetDefaultFilter(AObj: TSynCustomHighlighter): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.DefaultFilter);
  handleExceptionEnd
end;

procedure SynCustomHighlighter_SetDefaultFilter(AObj: TSynCustomHighlighter; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DefaultFilter:= AValue;
  handleExceptionEnd
end;

function SynCustomHighlighter_GetEnabled(AObj: TSynCustomHighlighter): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure SynCustomHighlighter_SetEnabled(AObj: TSynCustomHighlighter; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled:= AValue;
  handleExceptionEnd
end;

function SynCustomHighlighter_StaticClassType: TClass; extdecl;
begin
  Result := TSynCustomHighlighter;
end;

exports
  SynCustomHighlighter_GetDefaultFilter,
  SynCustomHighlighter_SetDefaultFilter,
  SynCustomHighlighter_GetEnabled,
  SynCustomHighlighter_SetEnabled,
  SynCustomHighlighter_StaticClassType;

