// html
function SynHTMLSyn_Create(AOwner: TComponent): TSynHTMLSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynHTMLSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynHTMLSyn_Free(AObj: TSynHTMLSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynHTMLSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynHTMLSyn;
end;

function SynHTMLSyn_GetEnabled(AObj: TSynHTMLSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynHTMLSyn_SetEnabled(AObj: TSynHTMLSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynHTMLSyn_GetAndAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AndAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetASPAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ASPAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetCDATAAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CDATAAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetDOCTYPEAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DOCTYPEAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetCommentAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetIdentifierAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetKeyAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetSpaceAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetSymbolAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetTextAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetUndefKeyAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UndefKeyAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetValueAttri(AObj: TSynHTMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ValueAttri;
  handleExceptionEnd
end;

function SynHTMLSyn_GetMode(AObj: TSynHTMLSyn): TSynHTMLSynMode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Mode;
  handleExceptionEnd
end;

procedure SynHTMLSyn_SetMode(AObj: TSynHTMLSyn; AValue: TSynHTMLSynMode); extdecl;
begin
  handleExceptionBegin
  AObj.Mode := AValue;
  handleExceptionEnd
end;

exports
  SynHTMLSyn_Create,
  SynHTMLSyn_Free,
  SynHTMLSyn_StaticClassType,
  SynHTMLSyn_GetEnabled,
  SynHTMLSyn_SetEnabled,
  SynHTMLSyn_GetAndAttri,
  SynHTMLSyn_GetASPAttri,
  SynHTMLSyn_GetCDATAAttri,
  SynHTMLSyn_GetDOCTYPEAttri,
  SynHTMLSyn_GetCommentAttri,
  SynHTMLSyn_GetIdentifierAttri,
  SynHTMLSyn_GetKeyAttri,
  SynHTMLSyn_GetSpaceAttri,
  SynHTMLSyn_GetSymbolAttri,
  SynHTMLSyn_GetTextAttri,
  SynHTMLSyn_GetUndefKeyAttri,
  SynHTMLSyn_GetValueAttri,
  SynHTMLSyn_GetMode,
  SynHTMLSyn_SetMode;

