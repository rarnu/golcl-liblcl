// sql
function SynSQLSyn_Create(AOwner: TComponent): TSynSQLSyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynSQLSyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynSQLSyn_Free(AObj: TSynSQLSyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynSQLSyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynSQLSyn;
end;

function SynSQLSyn_GetEnabled(AObj: TSynSQLSyn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

procedure SynSQLSyn_SetEnabled(AObj: TSynSQLSyn; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynSQLSyn_GetCommentAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommentAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetDataTypeAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DataTypeAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetDefaultPackageAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DefaultPackageAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetExceptionAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExceptionAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetFunctionAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FunctionAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetIdentifierAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetKeyAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetNumberAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetPLSQLAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PLSQLAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetSpaceAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetSQLPlusAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SQLPlusAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetStringAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetSymbolAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetTableNameAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TableNameAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetVariableAttri(AObj: TSynSQLSyn): TSynHighlighterAttributes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VariableAttri;
  handleExceptionEnd
end;

function SynSQLSyn_GetTableNames(AObj: TSynSQLSyn): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TableNames;
  handleExceptionEnd
end;

procedure SynSQLSyn_SetTableNames(AObj: TSynSQLSyn; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.TableNames := AValue;
  handleExceptionEnd
end;

function SynSQLSyn_GetSQLDialect(AObj: TSynSQLSyn): TSQLDialect; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SQLDialect;
  handleExceptionEnd
end;

procedure SynSQLSyn_SetSQLDialect(AObj: TSynSQLSyn; AValue: TSQLDialect); extdecl;
begin
  handleExceptionBegin
  AObj.SQLDialect := AValue;
  handleExceptionEnd
end;

exports
  SynSQLSyn_Create,
  SynSQLSyn_Free,
  SynSQLSyn_StaticClassType,
  SynSQLSyn_GetEnabled,
  SynSQLSyn_SetEnabled,
  SynSQLSyn_GetCommentAttri,
  SynSQLSyn_GetDataTypeAttri,
  SynSQLSyn_GetDefaultPackageAttri,
  SynSQLSyn_GetExceptionAttri,
  SynSQLSyn_GetFunctionAttri,
  SynSQLSyn_GetIdentifierAttri,
  SynSQLSyn_GetKeyAttri,
  SynSQLSyn_GetNumberAttri,
  SynSQLSyn_GetPLSQLAttri,
  SynSQLSyn_GetSpaceAttri,
  SynSQLSyn_GetSQLPlusAttri,
  SynSQLSyn_GetStringAttri,
  SynSQLSyn_GetSymbolAttri,
  SynSQLSyn_GetTableNameAttri,
  SynSQLSyn_GetVariableAttri,
  SynSQLSyn_GetTableNames,
  SynSQLSyn_SetTableNames,
  SynSQLSyn_GetSQLDialect,
  SynSQLSyn_SetSQLDialect;

