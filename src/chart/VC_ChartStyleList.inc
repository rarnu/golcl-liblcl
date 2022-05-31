
function ChartStyleList_Create(AOwner: TChartStyles): TChartStyleList; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartStyleList.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartStyleList_Free(AObj: TChartStyleList); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_Owner(AObj: TChartStyleList): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_Add(AObj: TChartStyleList): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Add;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartStyleList_Assign(AObj: TChartStyleList; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartStyleList_BeginUpdate(AObj: TChartStyleList); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartStyleList_Clear(AObj: TChartStyleList); extdecl;
begin
  handleExceptionBegin
  AObj.Clear;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartStyleList_Delete(AObj: TChartStyleList; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartStyleList_EndUpdate(AObj: TChartStyleList); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_FindItemID(AObj: TChartStyleList; ID: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindItemID(ID);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_GetNamePath(AObj: TChartStyleList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_Insert(AObj: TChartStyleList; Index: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Insert(Index);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_ClassType(AObj: TChartStyleList): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_ClassName(AObj: TChartStyleList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_InstanceSize(AObj: TChartStyleList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_InheritsFrom(AObj: TChartStyleList; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_Equals(AObj: TChartStyleList; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_GetHashCode(AObj: TChartStyleList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartStyleList_ToString(AObj: TChartStyleList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function ChartStyleList_GetCount(AObj: TChartStyleList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Count;
  handleExceptionEnd
end;

function ChartStyleList_GetItems(AObj: TChartStyleList; Index: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Items[Index];
  handleExceptionEnd
end;

procedure ChartStyleList_SetItems(AObj: TChartStyleList; Index: Integer; AValue: TChartStyle); extdecl;
begin
  handleExceptionBegin
  AObj.Items[Index] := AValue;
  handleExceptionEnd
end;

function ChartStyleList_StaticClassType: TClass; extdecl;
begin
  Result := TChartStyleList;
end;

function ChartStyleList_GetEnumerator(AObj: TChartStyleList): TChartStyleEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator;
  handleExceptionEnd
end;

function ChartStyleList_GetStyle(AObj: TChartStyleList; AIndex: Integer): TChartStyle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Style[AIndex];
  handleExceptionEnd
end;

exports
  ChartStyleList_Create,
  ChartStyleList_Free,
  ChartStyleList_Owner,
  ChartStyleList_Add,
  ChartStyleList_Assign,
  ChartStyleList_BeginUpdate,
  ChartStyleList_Clear,
  ChartStyleList_Delete,
  ChartStyleList_EndUpdate,
  ChartStyleList_FindItemID,
  ChartStyleList_GetNamePath,
  ChartStyleList_Insert,
  ChartStyleList_ClassType,
  ChartStyleList_ClassName,
  ChartStyleList_InstanceSize,
  ChartStyleList_InheritsFrom,
  ChartStyleList_Equals,
  ChartStyleList_GetHashCode,
  ChartStyleList_ToString,
  ChartStyleList_GetCount,
  ChartStyleList_GetItems,
  ChartStyleList_SetItems,
  ChartStyleList_StaticClassType,
  ChartStyleList_GetEnumerator,
  ChartStyleList_GetStyle;


