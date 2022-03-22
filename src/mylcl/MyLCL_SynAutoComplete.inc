function SynAutoComplete_Create(AOwner: TComponent): TSynAutoComplete; extdecl;
begin
  handleExceptionBegin
  Result := TSynAutoComplete.Create(AOwner);
  handleExceptionEnd
end;

procedure SynAutoComplete_Free(AObj: TSynAutoComplete); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynAutoComplete_GetAutoCompleteList(AObj: TSynAutoComplete): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoCompleteList;
  handleExceptionEnd
end;

procedure SynAutoComplete_SetAutoCompleteList(AObj: TSynAutoComplete; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.AutoCompleteList := AValue;
  handleExceptionEnd
end;

function SynAutoComplete_StaticClassType: TClass; extdecl;
begin
  Result := TSynAutoComplete;
end;

function SynAutoComplete_GetEditor(AObj: TSynAutoComplete): TSynEdit; extdecl;
begin
  handleExceptionBegin
  Result := TSynEdit(AObj.Editor);
  handleExceptionEnd
end;

procedure SynAutoComplete_SetEditor(AObj: TSynAutoComplete; AValue: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Editor := AValue;
  handleExceptionEnd
end;

function SynAutoComplete_GetEndOfTokenChr(AObj: TSynAutoComplete): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(AObj.EndOfTokenChr);
  handleExceptionEnd
end;

procedure SynAutoComplete_SetEndOfTokenChr(AObj: TSynAutoComplete; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.EndOfTokenChr := AValue;
  handleExceptionEnd
end;

function SynAutoComplete_GetExecCommandID(AObj: TSynAutoComplete): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExecCommandID;
  handleExceptionEnd
end;

procedure SynAutoComplete_SetExecCommandID(AObj: TSynAutoComplete; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ExecCommandID := AValue;
  handleExceptionEnd
end;

function SynAutoComplete_GetName(AObj: TSynAutoComplete): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(AObj.Name);
  handleExceptionEnd
end;

procedure SynAutoComplete_SetName(AObj: TSynAutoComplete; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function SynAutoComplete_GetShortCut(AObj: TSynAutoComplete): TShortCut; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ShortCut;
  handleExceptionEnd
end;

procedure SynAutoComplete_SetShortCut(AObj: TSynAutoComplete; AValue: TShortCut); extdecl;
begin
  handleExceptionBegin
  AObj.ShortCut := AValue;
  handleExceptionEnd
end;

function SynAutoComplete_GetTag(AObj: TSynAutoComplete): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Tag;
  handleExceptionEnd
end;

procedure SynAutoComplete_SetTag(AObj: TSynAutoComplete; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function SynAutoComplete_ClassName(AObj: TSynAutoComplete): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function SynAutoComplete_GetHashCode(AObj: TSynAutoComplete): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHashCode;
  handleExceptionEnd
end;

function SynAutoComplete_Equals(AObj: TSynAutoComplete; AOther: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Equals(AOther);
  handleExceptionEnd
end;

function SynAutoComplete_ClassType(AObj: TSynAutoComplete): TClass; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClassType;
  handleExceptionEnd
end;

function SynAutoComplete_InstanceSize(AObj: TSynAutoComplete): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InstanceSize;
  handleExceptionEnd
end;

function SynAutoComplete_InheritsFrom(AObj: TSynAutoComplete; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function SynAutoComplete_FindComponent(AObj: TSynAutoComplete; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindComponent(AName);
  handleExceptionEnd
end;

function SynAutoComplete_GetNamePath(AObj: TSynAutoComplete): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPchar(AObj.GetNamePath());
  handleExceptionEnd
end;

function SynAutoComplete_HasParent(AObj: TSynAutoComplete): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasParent;
  handleExceptionEnd
end;

procedure SynAutoComplete_Assign(AObj: TSynAutoComplete; AOther: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(AOther);
  handleExceptionEnd
end;

function SynAutoComplete_GetComponentCount(AObj: TSynAutoComplete): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ComponentCount;
  handleExceptionEnd
end;

function SynAutoComplete_GetComponentIndex(AObj: TSynAutoComplete): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure SynAutoComplete_SetComponentIndex(AObj: TSynAutoComplete; AIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex:= AIndex;
  handleExceptionEnd
end;

function SynAutoComplete_GetComponents(AObj: TSynAutoComplete; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Components[AIndex];
  handleExceptionEnd
end;

function SynAutoComplete_GetOwner(AObj: TSynAutoComplete): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

exports
  SynAutoComplete_Create,
  SynAutoComplete_Free,
  SynAutoComplete_GetAutoCompleteList,
  SynAutoComplete_SetAutoCompleteList,
  SynAutoComplete_StaticClassType,
  SynAutoComplete_GetEditor,
  SynAutoComplete_SetEditor,
  SynAutoComplete_GetEndOfTokenChr,
  SynAutoComplete_SetEndOfTokenChr,
  SynAutoComplete_GetExecCommandID,
  SynAutoComplete_SetExecCommandID,
  SynAutoComplete_GetName,
  SynAutoComplete_SetName,
  SynAutoComplete_GetShortCut,
  SynAutoComplete_SetShortCut,
  SynAutoComplete_GetTag,
  SynAutoComplete_SetTag,
  SynAutoComplete_ClassName,
  SynAutoComplete_GetHashCode,
  SynAutoComplete_Equals,
  SynAutoComplete_ClassType,
  SynAutoComplete_InstanceSize,
  SynAutoComplete_InheritsFrom,
  SynAutoComplete_FindComponent,
  SynAutoComplete_GetNamePath,
  SynAutoComplete_HasParent,
  SynAutoComplete_Assign,
  SynAutoComplete_GetComponentCount,
  SynAutoComplete_GetComponentIndex,
  SynAutoComplete_SetComponentIndex,
  SynAutoComplete_GetComponents,
  SynAutoComplete_GetOwner;



