// xml
function SynXMLSyn_Create(AOwner: TComponent): TSynXMLSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynXMLSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynXMLSyn_Free(AObj: TSynXMLSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynXMLSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynXMLSyn;
end;

function SynXMLSyn_GetEnabled(AObj: TSynXMLSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynXMLSyn_SetEnabled(AObj: TSynXMLSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynXMLSyn_GetElementAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ElementAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetAttributeAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AttributeAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetNamespaceAttributeAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NamespaceAttributeAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetAttributeValueAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AttributeValueAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetNamespaceAttributeValueAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NamespaceAttributeValueAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetTextAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetCDATAAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CDATAAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetEntityRefAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EntityRefAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetProcessingInstructionAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ProcessingInstructionAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetCommentAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetDocTypeAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DocTypeAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetSpaceAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetSymbolAttri(AObj: TSynXMLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function SynXMLSyn_GetWantBracesParsed(AObj: TSynXMLSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WantBracesParsed;
  handleExceptionEnd
end;

procedure SynXMLSyn_SetWantBracesParsed(AObj: TSynXMLSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.WantBracesParsed := AValue;
  handleExceptionEnd
end;

exports
  SynXMLSyn_Create,
  SynXMLSyn_Free,
  SynXMLSyn_StaticClassType,
  SynXMLSyn_GetEnabled,
  SynXMLSyn_SetEnabled,
  SynXMLSyn_GetElementAttri,
  SynXMLSyn_GetAttributeAttri,
  SynXMLSyn_GetNamespaceAttributeAttri,
  SynXMLSyn_GetAttributeValueAttri,
  SynXMLSyn_GetNamespaceAttributeValueAttri,
  SynXMLSyn_GetTextAttri,
  SynXMLSyn_GetCDATAAttri,
  SynXMLSyn_GetEntityRefAttri,
  SynXMLSyn_GetProcessingInstructionAttri,
  SynXMLSyn_GetCommentAttri,
  SynXMLSyn_GetDocTypeAttri,
  SynXMLSyn_GetSpaceAttri,
  SynXMLSyn_GetSymbolAttri,
  SynXMLSyn_GetWantBracesParsed,
  SynXMLSyn_SetWantBracesParsed;

