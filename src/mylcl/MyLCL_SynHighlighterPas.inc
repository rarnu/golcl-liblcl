// pas
function SynPasSyn_Create(AOwner: TComponent): TSynPasSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynPasSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynPasSyn_Free(AObj: TSynPasSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynPasSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynPasSyn;
end;

function SynPasSyn_GetEnabled(AObj: TSynPasSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynPasSyn_SetEnabled(AObj: TSynPasSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynPasSyn_GetAsmAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsmAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetCommentAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetIDEDirectiveAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IDEDirectiveAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetIdentifierAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetKeyAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetNumberAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetSpaceAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetStringAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetSymbolAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetProcedureHeaderName(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ProcedureHeaderName;
  handleExceptionEnd
end;

function SynPasSyn_GetCaseLabelAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CaseLabelAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetDirectiveAttri(AObj: TSynPasSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DirectiveAttri;
  handleExceptionEnd
end;

function SynPasSyn_GetCompilerMode(AObj: TSynPasSyn): TPascalCompilerMode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CompilerMode;
  handleExceptionEnd
end;

procedure SynPasSyn_SetCompilerMode(AObj: TSynPasSyn; AValue: TPascalCompilerMode); extdecl;
begin
  handleExceptionBegin
  AObj.CompilerMode := AValue;
  handleExceptionEnd
end;

function SynPasSyn_GetNestedComments(AObj: TSynPasSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NestedComments;
  handleExceptionEnd
end;

procedure SynPasSyn_SetNestedComments(AObj: TSynPasSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.NestedComments := AValue;
  handleExceptionEnd
end;

function SynPasSyn_GetTypeHelpers(AObj: TSynPasSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TypeHelpers;
  handleExceptionEnd
end;

procedure SynPasSyn_SetTypeHelpers(AObj: TSynPasSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.TypeHelpers := AValue;
  handleExceptionEnd
end;

function SynPasSyn_GetD4syntax(AObj: TSynPasSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.D4syntax;
  handleExceptionEnd
end;

procedure SynPasSyn_SetD4syntax(AObj: TSynPasSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.D4syntax := AValue;
  handleExceptionEnd
end;

function SynPasSyn_GetExtendedKeywordsMode(AObj: TSynPasSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExtendedKeywordsMode;
  handleExceptionEnd
end;

procedure SynPasSyn_SetExtendedKeywordsMode(AObj: TSynPasSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ExtendedKeywordsMode := AValue;
  handleExceptionEnd
end;

function SynPasSyn_GetStringKeywordMode(AObj: TSynPasSyn): TSynPasStringMode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringKeywordMode;
  handleExceptionEnd
end;

procedure SynPasSyn_SetStringKeywordMode(AObj: TSynPasSyn; AValue: TSynPasStringMode); extdecl;
begin
  handleExceptionBegin
  AObj.StringKeywordMode := AValue;
  handleExceptionEnd
end;

exports
  SynPasSyn_Create,
  SynPasSyn_Free,
  SynPasSyn_StaticClassType,
  SynPasSyn_GetEnabled,
  SynPasSyn_SetEnabled,
  SynPasSyn_GetAsmAttri,
  SynPasSyn_GetCommentAttri,
  SynPasSyn_GetIDEDirectiveAttri,
  SynPasSyn_GetIdentifierAttri,
  SynPasSyn_GetKeyAttri,
  SynPasSyn_GetNumberAttri,
  SynPasSyn_GetSpaceAttri,
  SynPasSyn_GetStringAttri,
  SynPasSyn_GetSymbolAttri,
  SynPasSyn_GetProcedureHeaderName,
  SynPasSyn_GetCaseLabelAttri,
  SynPasSyn_GetDirectiveAttri,
  SynPasSyn_GetCompilerMode,
  SynPasSyn_SetCompilerMode,
  SynPasSyn_GetNestedComments,
  SynPasSyn_SetNestedComments,
  SynPasSyn_GetTypeHelpers,
  SynPasSyn_SetTypeHelpers,
  SynPasSyn_GetD4syntax,
  SynPasSyn_SetD4syntax,
  SynPasSyn_GetExtendedKeywordsMode,
  SynPasSyn_SetExtendedKeywordsMode,
  SynPasSyn_GetStringKeywordMode,
  SynPasSyn_SetStringKeywordMode;

