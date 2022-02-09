// php
function SynPHPSyn_Create(AOwner: TComponent): TSynPHPSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynPHPSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynPHPSyn_Free(AObj: TSynPHPSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynPHPSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynPHPSyn;
end;

function SynPHPSyn_GetEnabled(AObj: TSynPHPSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynPHPSyn_SetEnabled(AObj: TSynPHPSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynPHPSyn_GetCommentAttri(AObj: TSynPHPSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynPHPSyn_GetIdentifierAttri(AObj: TSynPHPSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynPHPSyn_GetInvalidSymbolAttri(AObj: TSynPHPSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InvalidSymbolAttri;
  handleExceptionEnd
end;

function SynPHPSyn_GetKeyAttri(AObj: TSynPHPSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynPHPSyn_GetNumberAttri(AObj: TSynPHPSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynPHPSyn_GetSpaceAttri(AObj: TSynPHPSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynPHPSyn_GetStringAttri(AObj: TSynPHPSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynPHPSyn_GetSymbolAttri(AObj: TSynPHPSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function SynPHPSyn_GetVariableAttri(AObj: TSynPHPSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VariableAttri;
  handleExceptionEnd
end;

exports
  SynPHPSyn_Create,
  SynPHPSyn_Free,
  SynPHPSyn_StaticClassType,
  SynPHPSyn_GetEnabled,
  SynPHPSyn_SetEnabled,
  SynPHPSyn_GetCommentAttri,
  SynPHPSyn_GetIdentifierAttri,
  SynPHPSyn_GetInvalidSymbolAttri,
  SynPHPSyn_GetKeyAttri,
  SynPHPSyn_GetNumberAttri,
  SynPHPSyn_GetSpaceAttri,
  SynPHPSyn_GetStringAttri,
  SynPHPSyn_GetSymbolAttri,
  SynPHPSyn_GetVariableAttri;

