// shell
function SynUNIXShellScriptSyn_Create(AOwner: TComponent): TSynUNIXShellScriptSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynUNIXShellScriptSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynUNIXShellScriptSyn_Free(AObj: TSynUNIXShellScriptSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynUNIXShellScriptSyn;
end;

function SynUNIXShellScriptSyn_GetEnabled(AObj: TSynUNIXShellScriptSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynUNIXShellScriptSyn_SetEnabled(AObj: TSynUNIXShellScriptSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_GetCommentAttri(AObj: TSynUNIXShellScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_GetIdentifierAttri(AObj: TSynUNIXShellScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_GetKeyAttri(AObj: TSynUNIXShellScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_GetSecondKeyAttri(AObj: TSynUNIXShellScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SecondKeyAttri;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_GetNumberAttri(AObj: TSynUNIXShellScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_GetSpaceAttri(AObj: TSynUNIXShellScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_GetStringAttri(AObj: TSynUNIXShellScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_GetSymbolAttri(AObj: TSynUNIXShellScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_GetVarAttri(AObj: TSynUNIXShellScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VarAttri;
  handleExceptionEnd
end;

function SynUNIXShellScriptSyn_GetSecondKeyWords(AObj: TSynUNIXShellScriptSyn): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SecondKeyWords;
  handleExceptionEnd
end;

procedure SynUNIXShellScriptSyn_SetSecondKeyWords(AObj: TSynUNIXShellScriptSyn; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.SecondKeyWords := AValue;
  handleExceptionEnd
end;

exports
  SynUNIXShellScriptSyn_Create,
  SynUNIXShellScriptSyn_Free,
  SynUNIXShellScriptSyn_StaticClassType,
  SynUNIXShellScriptSyn_GetEnabled,
  SynUNIXShellScriptSyn_SetEnabled,
  SynUNIXShellScriptSyn_GetCommentAttri,
  SynUNIXShellScriptSyn_GetIdentifierAttri,
  SynUNIXShellScriptSyn_GetKeyAttri,
  SynUNIXShellScriptSyn_GetSecondKeyAttri,
  SynUNIXShellScriptSyn_GetNumberAttri,
  SynUNIXShellScriptSyn_GetSpaceAttri,
  SynUNIXShellScriptSyn_GetStringAttri,
  SynUNIXShellScriptSyn_GetSymbolAttri,
  SynUNIXShellScriptSyn_GetVarAttri,
  SynUNIXShellScriptSyn_GetSecondKeyWords,
  SynUNIXShellScriptSyn_SetSecondKeyWords;

