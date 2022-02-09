// basic
function SynVBSyn_Create(AOwner: TComponent): TSynVBSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynVBSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynVBSyn_Free(AObj: TSynVBSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynVBSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynVBSyn;
end;

function SynVBSyn_GetEnabled(AObj: TSynVBSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynVBSyn_SetEnabled(AObj: TSynVBSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynVBSyn_GetCommentAttri(AObj: TSynVBSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynVBSyn_GetIdentifierAttri(AObj: TSynVBSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynVBSyn_GetKeyAttri(AObj: TSynVBSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynVBSyn_GetNumberAttri(AObj: TSynVBSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynVBSyn_GetSpaceAttri(AObj: TSynVBSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynVBSyn_GetStringAttri(AObj: TSynVBSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynVBSyn_GetSymbolAttri(AObj: TSynVBSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

exports
  SynVBSyn_Create,
  SynVBSyn_Free,
  SynVBSyn_StaticClassType,
  SynVBSyn_GetEnabled,
  SynVBSyn_SetEnabled,
  SynVBSyn_GetCommentAttri,
  SynVBSyn_GetIdentifierAttri,
  SynVBSyn_GetKeyAttri,
  SynVBSyn_GetNumberAttri,
  SynVBSyn_GetSpaceAttri,
  SynVBSyn_GetStringAttri,
  SynVBSyn_GetSymbolAttri;

