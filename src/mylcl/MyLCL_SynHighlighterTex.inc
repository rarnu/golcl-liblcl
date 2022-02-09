// tex
function SynTeXSyn_Create(AOwner: TComponent): TSynTeXSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynTeXSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynTeXSyn_Free(AObj: TSynTeXSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynTeXSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynTeXSyn;
end;

function SynTeXSyn_GetEnabled(AObj: TSynTeXSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynTeXSyn_SetEnabled(AObj: TSynTeXSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynTeXSyn_GetCommentAttri(AObj: TSynTeXSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynTeXSyn_GetTextAttri(AObj: TSynTeXSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextAttri;
  handleExceptionEnd
end;

function SynTeXSyn_GetControlSequenceAttri(AObj: TSynTeXSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ControlSequenceAttri;
  handleExceptionEnd
end;

function SynTeXSyn_GetMathmodeAttri(AObj: TSynTeXSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MathmodeAttri;
  handleExceptionEnd
end;

function SynTeXSyn_GetSpaceAttri(AObj: TSynTeXSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynTeXSyn_GetBraceAttri(AObj: TSynTeXSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BraceAttri;
  handleExceptionEnd
end;

function SynTeXSyn_GetBracketAttri(AObj: TSynTeXSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BracketAttri;
  handleExceptionEnd
end;

exports
  SynTeXSyn_Create,
  SynTeXSyn_Free,
  SynTeXSyn_StaticClassType,
  SynTeXSyn_GetEnabled,
  SynTeXSyn_SetEnabled,
  SynTeXSyn_GetCommentAttri,
  SynTeXSyn_GetTextAttri,
  SynTeXSyn_GetControlSequenceAttri,
  SynTeXSyn_GetMathmodeAttri,
  SynTeXSyn_GetSpaceAttri,
  SynTeXSyn_GetBraceAttri,
  SynTeXSyn_GetBracketAttri;

