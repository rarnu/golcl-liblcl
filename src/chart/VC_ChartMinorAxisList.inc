
function ChartMinorAxisList_Create(AOwner: TChartAxis): TCollection; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartMinorAxisList.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartMinorAxisList_Free(AObj: TChartMinorAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_Owner(AObj: TChartMinorAxisList): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_Add(AObj: TChartMinorAxisList): TChartMinorAxis; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartMinorAxis(AObj.Add);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartMinorAxisList_Assign(AObj: TChartMinorAxisList; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartMinorAxisList_BeginUpdate(AObj: TChartMinorAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartMinorAxisList_Clear(AObj: TChartMinorAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.Clear;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartMinorAxisList_Delete(AObj: TChartMinorAxisList; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartMinorAxisList_EndUpdate(AObj: TChartMinorAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_FindItemID(AObj: TChartMinorAxisList; ID: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindItemID(ID);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_GetNamePath(AObj: TChartMinorAxisList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_Insert(AObj: TChartMinorAxisList; Index: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Insert(Index);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_ClassType(AObj: TChartMinorAxisList): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_ClassName(AObj: TChartMinorAxisList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_InstanceSize(AObj: TChartMinorAxisList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_InheritsFrom(AObj: TChartMinorAxisList; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_Equals(AObj: TChartMinorAxisList; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_GetHashCode(AObj: TChartMinorAxisList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxisList_ToString(AObj: TChartMinorAxisList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function ChartMinorAxisList_GetCount(AObj: TChartMinorAxisList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Count;
  handleExceptionEnd
end;

function ChartMinorAxisList_GetItems(AObj: TChartMinorAxisList; Index: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Items[Index];
  handleExceptionEnd
end;

procedure ChartMinorAxisList_SetItems(AObj: TChartMinorAxisList; Index: Integer; AValue: TCollectionItem); extdecl;
begin
  handleExceptionBegin
  AObj.Items[Index] := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisList_StaticClassType: TClass; extdecl;
begin
  Result := TChartMinorAxisList;
end;

function ChartMinorAxisList_GetChart(AObj: TChartMinorAxisList): TCustomChart; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetChart;
  handleExceptionEnd
end;

function ChartMinorAxisList_GetAxes(AObj: TChartMinorAxisList; AIndex: Integer): TChartMinorAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Axes[AIndex];
  handleExceptionEnd
end;

function ChartMinorAxisList_GetParentAxis(AObj: TChartMinorAxisList): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ParentAxis;
  handleExceptionEnd
end;


exports
  ChartMinorAxisList_Create,
  ChartMinorAxisList_Free,
  ChartMinorAxisList_Owner,
  ChartMinorAxisList_Add,
  ChartMinorAxisList_Assign,
  ChartMinorAxisList_BeginUpdate,
  ChartMinorAxisList_Clear,
  ChartMinorAxisList_Delete,
  ChartMinorAxisList_EndUpdate,
  ChartMinorAxisList_FindItemID,
  ChartMinorAxisList_GetNamePath,
  ChartMinorAxisList_Insert,
  ChartMinorAxisList_ClassType,
  ChartMinorAxisList_ClassName,
  ChartMinorAxisList_InstanceSize,
  ChartMinorAxisList_InheritsFrom,
  ChartMinorAxisList_Equals,
  ChartMinorAxisList_GetHashCode,
  ChartMinorAxisList_ToString,
  ChartMinorAxisList_GetCount,
  ChartMinorAxisList_GetItems,
  ChartMinorAxisList_SetItems,
  ChartMinorAxisList_StaticClassType,
  ChartMinorAxisList_GetChart,
  ChartMinorAxisList_GetAxes,
  ChartMinorAxisList_GetParentAxis;


