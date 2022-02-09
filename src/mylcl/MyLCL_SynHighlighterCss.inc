// css
function SynCssSyn_Create(AOwner: TComponent): TSynCssSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynCssSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynCssSyn_Free(AObj: TSynCssSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynCssSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynCssSyn;
end;

function SynCssSyn_GetEnabled(AObj: TSynCssSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynCssSyn_SetEnabled(AObj: TSynCssSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynCssSyn_GetCommentAttri(AObj: TSynCssSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynCssSyn_GetIdentifierAttri(AObj: TSynCssSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynCssSyn_GetKeyAttri(AObj: TSynCssSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynCssSyn_GetNumberAttri(AObj: TSynCssSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynCssSyn_GetSpaceAttri(AObj: TSynCssSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynCssSyn_GetStringAttri(AObj: TSynCssSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynCssSyn_GetSymbolAttri(AObj: TSynCssSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function SynCssSyn_GetMeasurementUnitAttri(AObj: TSynCssSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasurementUnitAttri;
  handleExceptionEnd
end;

function SynCssSyn_GetSelectorAttri(AObj: TSynCssSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SelectorAttri;
  handleExceptionEnd
end;

exports
  SynCssSyn_Create,
  SynCssSyn_Free,
  SynCssSyn_StaticClassType,
  SynCssSyn_GetEnabled,
  SynCssSyn_SetEnabled,
  SynCssSyn_GetCommentAttri,
  SynCssSyn_GetIdentifierAttri,
  SynCssSyn_GetKeyAttri,
  SynCssSyn_GetNumberAttri,
  SynCssSyn_GetSpaceAttri,
  SynCssSyn_GetStringAttri,
  SynCssSyn_GetSymbolAttri,
  SynCssSyn_GetMeasurementUnitAttri,
  SynCssSyn_GetSelectorAttri;

