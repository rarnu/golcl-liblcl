// java
function SynJavaSyn_Create(AOwner: TComponent): TSynJavaSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynJavaSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynJavaSyn_Free(AObj: TSynJavaSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynJavaSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynJavaSyn;
end;

function SynJavaSyn_GetEnabled(AObj: TSynJavaSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynJavaSyn_SetEnabled(AObj: TSynJavaSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynJavaSyn_GetAnnotationAttri(AObj: TSynJavaSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AnnotationAttri;
  handleExceptionEnd
end;

function SynJavaSyn_GetCommentAttri(AObj: TSynJavaSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynJavaSyn_GetDocumentAttri(AObj: TSynJavaSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DocumentAttri;
  handleExceptionEnd
end;

function SynJavaSyn_GetIdentifierAttri(AObj: TSynJavaSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynJavaSyn_GetInvalidAttri(AObj: TSynJavaSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InvalidAttri;
  handleExceptionEnd
end;

function SynJavaSyn_GetKeyAttri(AObj: TSynJavaSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynJavaSyn_GetNumberAttri(AObj: TSynJavaSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynJavaSyn_GetSpaceAttri(AObj: TSynJavaSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynJavaSyn_GetStringAttri(AObj: TSynJavaSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynJavaSyn_GetSymbolAttri(AObj: TSynJavaSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

exports
  SynJavaSyn_Create,
  SynJavaSyn_Free,
  SynJavaSyn_StaticClassType,
  SynJavaSyn_GetEnabled,
  SynJavaSyn_SetEnabled,
  SynJavaSyn_GetAnnotationAttri,
  SynJavaSyn_GetCommentAttri,
  SynJavaSyn_GetDocumentAttri,
  SynJavaSyn_GetIdentifierAttri,
  SynJavaSyn_GetInvalidAttri,
  SynJavaSyn_GetKeyAttri,
  SynJavaSyn_GetNumberAttri,
  SynJavaSyn_GetSpaceAttri,
  SynJavaSyn_GetStringAttri,
  SynJavaSyn_GetSymbolAttri;

