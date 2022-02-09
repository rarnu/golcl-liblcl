// bat
function SynBatSyn_Create(AOwner: TComponent): TSynBatSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynBatSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynBatSyn_Free(AObj: TSynBatSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynBatSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynBatSyn;
end;

function SynBatSyn_GetEnabled(AObj: TSynBatSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynBatSyn_SetEnabled(AObj: TSynBatSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynBatSyn_GetCommentAttri(AObj: TSynBatSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynBatSyn_GetIdentifierAttri(AObj: TSynBatSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynBatSyn_GetKeyAttri(AObj: TSynBatSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynBatSyn_GetNumberAttri(AObj: TSynBatSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynBatSyn_GetSpaceAttri(AObj: TSynBatSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynBatSyn_GetVariableAttri(AObj: TSynBatSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VariableAttri;
  handleExceptionEnd
end;

exports
  SynBatSyn_Create,
  SynBatSyn_Free,
  SynBatSyn_StaticClassType,
  SynBatSyn_GetEnabled,
  SynBatSyn_SetEnabled,
  SynBatSyn_GetCommentAttri,
  SynBatSyn_GetIdentifierAttri,
  SynBatSyn_GetKeyAttri,
  SynBatSyn_GetNumberAttri,
  SynBatSyn_GetSpaceAttri,
  SynBatSyn_GetVariableAttri;

