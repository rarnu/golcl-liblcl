// python
function SynPythonSyn_Create(AOwner: TComponent): TSynPythonSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynPythonSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynPythonSyn_Free(AObj: TSynPythonSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynPythonSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynPythonSyn;
end;

function SynPythonSyn_GetEnabled(AObj: TSynPythonSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynPythonSyn_SetEnabled(AObj: TSynPythonSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynPythonSyn_GetCommentAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetIdentifierAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetKeyAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetNonKeyAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NonKeyAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetSystemAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SystemAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetNumberAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetHexAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HexAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetOctalAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OctalAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetFloatAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FloatAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetSpaceAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetStringAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetDocStringAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DocStringAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetSymbolAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function SynPythonSyn_GetErrorAttri(AObj: TSynPythonSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ErrorAttri;
  handleExceptionEnd
end;

exports
  SynPythonSyn_Create,
  SynPythonSyn_Free,
  SynPythonSyn_StaticClassType,
  SynPythonSyn_GetEnabled,
  SynPythonSyn_SetEnabled,
  SynPythonSyn_GetCommentAttri,
  SynPythonSyn_GetIdentifierAttri,
  SynPythonSyn_GetKeyAttri,
  SynPythonSyn_GetNonKeyAttri,
  SynPythonSyn_GetSystemAttri,
  SynPythonSyn_GetNumberAttri,
  SynPythonSyn_GetHexAttri,
  SynPythonSyn_GetOctalAttri,
  SynPythonSyn_GetFloatAttri,
  SynPythonSyn_GetSpaceAttri,
  SynPythonSyn_GetStringAttri,
  SynPythonSyn_GetDocStringAttri,
  SynPythonSyn_GetSymbolAttri,
  SynPythonSyn_GetErrorAttri;

