// java script
function SynJScriptSyn_Create(AOwner: TComponent): TSynJScriptSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynJScriptSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynJScriptSyn_Free(AObj: TSynJScriptSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynJScriptSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynJScriptSyn;
end;

function SynJScriptSyn_GetEnabled(AObj: TSynJScriptSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynJScriptSyn_SetEnabled(AObj: TSynJScriptSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynJScriptSyn_GetBracketAttri(AObj: TSynJScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BracketAttri;
  handleExceptionEnd
end;

function SynJScriptSyn_GetCommentAttri(AObj: TSynJScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynJScriptSyn_GetIdentifierAttri(AObj: TSynJScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynJScriptSyn_GetKeyAttri(AObj: TSynJScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynJScriptSyn_GetNonReservedKeyAttri(AObj: TSynJScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NonReservedKeyAttri;
  handleExceptionEnd
end;

function SynJScriptSyn_GetEventAttri(AObj: TSynJScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EventAttri;
  handleExceptionEnd
end;

function SynJScriptSyn_GetNumberAttri(AObj: TSynJScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynJScriptSyn_GetSpaceAttri(AObj: TSynJScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynJScriptSyn_GetStringAttri(AObj: TSynJScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynJScriptSyn_GetSymbolAttri(AObj: TSynJScriptSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

exports
  SynJScriptSyn_Create,
  SynJScriptSyn_Free,
  SynJScriptSyn_StaticClassType,
  SynJScriptSyn_GetEnabled,
  SynJScriptSyn_SetEnabled,
  SynJScriptSyn_GetBracketAttri,
  SynJScriptSyn_GetCommentAttri,
  SynJScriptSyn_GetIdentifierAttri,
  SynJScriptSyn_GetKeyAttri,
  SynJScriptSyn_GetNonReservedKeyAttri,
  SynJScriptSyn_GetEventAttri,
  SynJScriptSyn_GetNumberAttri,
  SynJScriptSyn_GetSpaceAttri,
  SynJScriptSyn_GetStringAttri,
  SynJScriptSyn_GetSymbolAttri;

