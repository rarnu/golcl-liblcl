function SynCustomHighlighter_GetDefaultFilter(AObj: TSynCustomHighlighter): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.DefaultFilter);
  handleExceptionEnd
end;

procedure SynCustomHighlighter_SetDefaultFilter(AObj: TSynCustomHighlighter; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DefaultFilter:= AValue;
  handleExceptionEnd
end;

function SynCustomHighlighter_GetEnabled(AObj: TSynCustomHighlighter): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure SynCustomHighlighter_SetEnabled(AObj: TSynCustomHighlighter; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled:= AValue;
  handleExceptionEnd
end;

function SynCustomHighlighter_StaticClassType: TClass; extdecl;
begin
  Result := TSynCustomHighlighter;
end;

function SynCustomHighlighter_ClassName(AObj: TSynCustomHighlighter): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function SynCustomHighlighter_GetHashCode(AObj: TSynCustomHighlighter): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHashCode;
  handleExceptionEnd
end;

function SynCustomHighlighter_Equals(AObj: TSynCustomHighlighter; AOther: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Equals(AOther);
  handleExceptionEnd
end;

function SynCustomHighlighter_ClassType(AObj: TSynCustomHighlighter): TClass; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClassType;
  handleExceptionEnd
end;

function SynCustomHighlighter_InstanceSize(AObj: TSynCustomHighlighter): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InstanceSize;
  handleExceptionEnd
end;

function SynCustomHighlighter_InheritsFrom(AObj: TSynCustomHighlighter; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function SynCustomHighlighter_FindComponent(AObj: TSynCustomHighlighter; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindComponent(AName);
  handleExceptionEnd
end;

function SynCustomHighlighter_GetNamePath(AObj: TSynCustomHighlighter): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPchar(AObj.GetNamePath());
  handleExceptionEnd
end;

function SynCustomHighlighter_HasParent(AObj: TSynCustomHighlighter): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasParent;
  handleExceptionEnd
end;

procedure SynCustomHighlighter_Assign(AObj: TSynCustomHighlighter; AOther: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(AOther);
  handleExceptionEnd
end;

function SynCustomHighlighter_GetComponentCount(AObj: TSynCustomHighlighter): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ComponentCount;
  handleExceptionEnd
end;

function SynCustomHighlighter_GetComponentIndex(AObj: TSynCustomHighlighter): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure SynCustomHighlighter_SetComponentIndex(AObj: TSynCustomHighlighter; AIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex:= AIndex;
  handleExceptionEnd
end;

function SynCustomHighlighter_GetComponents(AObj: TSynCustomHighlighter; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Components[AIndex];
  handleExceptionEnd
end;

function SynCustomHighlighter_GetOwner(AObj: TSynCustomHighlighter): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

function SynCustomHighlighter_GetName(AObj: TSynCustomHighlighter): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

procedure SynCustomHighlighter_SetName(AObj: TSynCustomHighlighter; AName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name:= AName;
  handleExceptionEnd
end;

function SynCustomHighlighter_GetTag(AObj: TSynCustomHighlighter): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Tag;
  handleExceptionEnd
end;

procedure SynCustomHighlighter_SetTag(AObj: TSynCustomHighlighter; ATag: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Tag:= ATag;
  handleExceptionEnd
end;

exports
  SynCustomHighlighter_GetDefaultFilter,
  SynCustomHighlighter_SetDefaultFilter,
  SynCustomHighlighter_GetEnabled,
  SynCustomHighlighter_SetEnabled,
  SynCustomHighlighter_StaticClassType,
  SynCustomHighlighter_ClassName,
  SynCustomHighlighter_GetHashCode,
  SynCustomHighlighter_Equals,
  SynCustomHighlighter_ClassType,
  SynCustomHighlighter_InstanceSize,
  SynCustomHighlighter_InheritsFrom,
  SynCustomHighlighter_FindComponent,
  SynCustomHighlighter_GetNamePath,
  SynCustomHighlighter_HasParent,
  SynCustomHighlighter_Assign,
  SynCustomHighlighter_GetComponentCount,
  SynCustomHighlighter_GetComponentIndex,
  SynCustomHighlighter_SetComponentIndex,
  SynCustomHighlighter_GetComponents,
  SynCustomHighlighter_GetOwner,
  SynCustomHighlighter_GetName,
  SynCustomHighlighter_SetName,
  SynCustomHighlighter_GetTag,
  SynCustomHighlighter_SetTag;

