function SynAnySyn_Create(AOwner: TComponent): TSynAnySyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynAnySyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynAnySyn_Free(AObj: TSynAnySyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynAnySyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynAnySyn;
end;

function SynAnySyn_GetActiveDot(AObj: TSynAnySyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ActiveDot;
  handleExceptionEnd
end;

procedure SynAnySyn_SetActiveDot(AObj: TSynAnySyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ActiveDot := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetCommentAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetComments(AObj: TSynAnySyn): CommentStyles; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Comments;
  handleExceptionEnd
end;

procedure SynAnySyn_SetComments(AObj: TSynAnySyn; AValue: CommentStyles); extdecl;
begin
  handleExceptionBegin
  AObj.Comments := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetConstantAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ConstantAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetConstants(AObj: TSynAnySyn): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Constants;
  handleExceptionEnd
end;

procedure SynAnySyn_SetConstants(AObj: TSynAnySyn; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.Constants := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetDetectPreprocessor(AObj: TSynAnySyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DetectPreprocessor;
  handleExceptionEnd
end;

procedure SynAnySyn_SetDetectPreprocessor(AObj: TSynAnySyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DetectPreprocessor := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetDollarVariables(AObj: TSynAnySyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DollarVariables;
  handleExceptionEnd
end;

procedure SynAnySyn_SetDollarVariables(AObj: TSynAnySyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DollarVariables := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetDotAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DotAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetEnabled(AObj: TSynAnySyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynAnySyn_SetEnabled(AObj: TSynAnySyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetEntity(AObj: TSynAnySyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Entity;
  handleExceptionEnd
end;

procedure SynAnySyn_SetEntity(AObj: TSynAnySyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Entity := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetEntityAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EntityAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetIdentifierAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetIdentifierChars(AObj: TSynAnySyn): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(AObj.IdentifierChars);
  handleExceptionEnd
end;

procedure SynAnySyn_SetIdentifierChars(AObj: TSynAnySyn; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.IdentifierChars := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetKeyAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetKeyWords(AObj: TSynAnySyn): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyWords;
  handleExceptionEnd
end;

procedure SynAnySyn_SetKeyWords(AObj: TSynAnySyn; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.KeyWords := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetMarkup(AObj: TSynAnySyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Markup;
  handleExceptionEnd
end;

procedure SynAnySyn_SetMarkup(AObj: TSynAnySyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Markup := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetName(AObj: TSynAnySyn): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(AObj.Name);
  handleExceptionEnd
end;

procedure SynAnySyn_SetName(AObj: TSynAnySyn; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetNumberAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetObjectAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ObjectAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetObjects(AObj: TSynAnySyn): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Objects;
  handleExceptionEnd
end;

procedure SynAnySyn_SetObjects(AObj: TSynAnySyn; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.Objects := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetPreprocessorAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PreprocessorAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetSpaceAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetStringAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetStringDelim(AObj: TSynAnySyn): TStringDelim; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringDelim;
  handleExceptionEnd
end;

procedure SynAnySyn_SetStringDelim(AObj: TSynAnySyn; AValue: TStringDelim); extdecl;
begin
  handleExceptionBegin
  AObj.StringDelim := AValue;
  handleExceptionEnd
end;

function SynAnySyn_GetSymbolAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function SynAnySyn_GetVariableAttri(AObj: TSynAnySyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VariableAttri;
  handleExceptionEnd
end;

exports
  SynAnySyn_Create,
  SynAnySyn_Free,
  SynAnySyn_StaticClassType,
  SynAnySyn_GetActiveDot,
  SynAnySyn_SetActiveDot,
  SynAnySyn_GetCommentAttri,
  SynAnySyn_GetComments,
  SynAnySyn_SetComments,
  SynAnySyn_GetConstantAttri,
  SynAnySyn_GetConstants,
  SynAnySyn_SetConstants,
  SynAnySyn_GetDetectPreprocessor,
  SynAnySyn_SetDetectPreprocessor,
  SynAnySyn_GetDollarVariables,
  SynAnySyn_SetDollarVariables,
  SynAnySyn_GetDotAttri,
  SynAnySyn_GetEnabled,
  SynAnySyn_SetEnabled,
  SynAnySyn_GetEntity,
  SynAnySyn_SetEntity,
  SynAnySyn_GetEntityAttri,
  SynAnySyn_GetIdentifierAttri,
  SynAnySyn_GetIdentifierChars,
  SynAnySyn_SetIdentifierChars,
  SynAnySyn_GetKeyAttri,
  SynAnySyn_GetKeyWords,
  SynAnySyn_SetKeyWords,
  SynAnySyn_GetMarkup,
  SynAnySyn_SetMarkup,
  SynAnySyn_GetName,
  SynAnySyn_SetName,
  SynAnySyn_GetNumberAttri,
  SynAnySyn_GetObjectAttri,
  SynAnySyn_GetObjects,
  SynAnySyn_SetObjects,
  SynAnySyn_GetPreprocessorAttri,
  SynAnySyn_GetSpaceAttri,
  SynAnySyn_GetStringAttri,
  SynAnySyn_GetStringDelim,
  SynAnySyn_SetStringDelim,
  SynAnySyn_GetSymbolAttri,
  SynAnySyn_GetVariableAttri;
