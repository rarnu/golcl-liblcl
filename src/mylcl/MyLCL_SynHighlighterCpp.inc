// cpp
function SynCppSyn_Create(AOwner: TComponent): TSynCppSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynCppSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynCppSyn_Free(AObj: TSynCppSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynCppSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynCppSyn;
end;

function SynCppSyn_GetEnabled(AObj: TSynCppSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynCppSyn_SetEnabled(AObj: TSynCppSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynCppSyn_GetAsmAttri(AObj: TSynCppSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsmAttri;
  handleExceptionEnd
end;

function SynCppSyn_GetCommentAttri(AObj: TSynCppSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynCppSyn_GetDirecAttri(AObj: TSynCppSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DirecAttri;
  handleExceptionEnd
end;

function SynCppSyn_GetIdentifierAttri(AObj: TSynCppSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynCppSyn_GetInvalidAttri(AObj: TSynCppSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InvalidAttri;
  handleExceptionEnd
end;

function SynCppSyn_GetKeyAttri(AObj: TSynCppSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynCppSyn_GetNumberAttri(AObj: TSynCppSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynCppSyn_GetSpaceAttri(AObj: TSynCppSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynCppSyn_GetStringAttri(AObj: TSynCppSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynCppSyn_GetSymbolAttri(AObj: TSynCppSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

exports
  SynCppSyn_Create,
  SynCppSyn_Free,
  SynCppSyn_StaticClassType,
  SynCppSyn_GetEnabled,
  SynCppSyn_SetEnabled,
  SynCppSyn_GetAsmAttri,
  SynCppSyn_GetCommentAttri,
  SynCppSyn_GetDirecAttri,
  SynCppSyn_GetIdentifierAttri,
  SynCppSyn_GetInvalidAttri,
  SynCppSyn_GetKeyAttri,
  SynCppSyn_GetNumberAttri,
  SynCppSyn_GetSpaceAttri,
  SynCppSyn_GetStringAttri,
  SynCppSyn_GetSymbolAttri;

