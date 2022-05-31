function ChartAxisList_Create(AOwner: TCustomChart): TChartAxisList; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartAxisList.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartAxisList_Free(AObj: TChartAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartAxisList_StaticClassType: TClass; extdecl;
begin
  Result := TChartAxisList;
end;

function ChartAxisList_GetAxes(AObj: TChartAxisList; AIndex: Integer): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Axes[AIndex];
  handleExceptionEnd
end;

function ChartAxisList_GetBottomAxis(AObj: TChartAxisList): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BottomAxis;
  handleExceptionEnd
end;

procedure ChartAxisList_SetBottomAxis(AObj: TChartAxisList; AValue: TChartAxis); extdecl;
begin
  handleExceptionBegin
  AObj.BottomAxis := AValue;
  handleExceptionEnd
end;

function ChartAxisList_GetLeftAxis(AObj: TChartAxisList): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LeftAxis;
  handleExceptionEnd
end;

procedure ChartAxisList_SetLeftAxis(AObj: TChartAxisList; AValue: TChartAxis); extdecl;
begin
  handleExceptionBegin
  AObj.LeftAxis := AValue;
  handleExceptionEnd
end;

function ChartAxisList_Add(AObj: TChartAxisList): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

procedure ChartAxisList_Draw(AObj: TChartAxisList; ACurrentZ: Integer;var AIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(ACurrentZ,AIndex);
  handleExceptionEnd
end;

function ChartAxisList_GetAxisByAlign(AObj: TChartAxisList; AAlign: TChartAxisAlignment): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAxisByAlign(AAlign);
  handleExceptionEnd
end;

function ChartAxisList_GetEnumerator(AObj: TChartAxisList): TChartAxisEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

function ChartAxisList_Measure(AObj: TChartAxisList; AExtent: TDoubleRect;AClipRect: TRect;ADepth: Integer): TChartAxisMargins; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Measure(AExtent,AClipRect,ADepth);
  handleExceptionEnd
end;

procedure ChartAxisList_Prepare(AObj: TChartAxisList; ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.Prepare(ARect);
  handleExceptionEnd
end;

procedure ChartAxisList_PrepareGroups(AObj: TChartAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.PrepareGroups();
  handleExceptionEnd
end;

procedure ChartAxisList_SetAxisByAlign(AObj: TChartAxisList; AAlign: TChartAxisAlignment;AValue: TChartAxis); extdecl;
begin
  handleExceptionBegin
  AObj.SetAxisByAlign(AAlign,AValue);
  handleExceptionEnd
end;

procedure ChartAxisList_UpdateBiDiMode(AObj: TChartAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateBiDiMode();
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartAxisList_BeginUpdate(AObj: TChartAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartAxisList_Clear(AObj: TChartAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.Clear;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartAxisList_Delete(AObj: TChartAxisList; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartAxisList_EndUpdate(AObj: TChartAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartAxisList_FindItemID(AObj: TChartAxisList; ID: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindItemID(ID);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartAxisList_GetNamePath(AObj: TChartAxisList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartAxisList_Insert(AObj: TChartAxisList; Index: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Insert(Index);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartAxisList_ClassType(AObj: TChartAxisList): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartAxisList_ClassName(AObj: TChartAxisList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartAxisList_InstanceSize(AObj: TChartAxisList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartAxisList_InheritsFrom(AObj: TChartAxisList; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartAxisList_Equals(AObj: TChartAxisList; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartAxisList_GetHashCode(AObj: TChartAxisList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartAxisList_ToString(AObj: TChartAxisList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function ChartAxisList_GetCount(AObj: TChartAxisList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Count;
  handleExceptionEnd
end;

function ChartAxisList_GetItems(AObj: TChartAxisList; Index: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Items[Index];
  handleExceptionEnd
end;

procedure ChartAxisList_SetItems(AObj: TChartAxisList; Index: Integer; AValue: TCollectionItem); extdecl;
begin
  handleExceptionBegin
  AObj.Items[Index] := AValue;
  handleExceptionEnd
end;


exports
  ChartAxisList_Create,
  ChartAxisList_Free,
  ChartAxisList_StaticClassType,
  ChartAxisList_GetAxes,
  ChartAxisList_GetBottomAxis,
  ChartAxisList_SetBottomAxis,
  ChartAxisList_GetLeftAxis,
  ChartAxisList_SetLeftAxis,
  ChartAxisList_Add,
  ChartAxisList_Draw,
  ChartAxisList_GetAxisByAlign,
  ChartAxisList_GetEnumerator,
  ChartAxisList_Measure,
  ChartAxisList_Prepare,
  ChartAxisList_PrepareGroups,
  ChartAxisList_SetAxisByAlign,
  ChartAxisList_UpdateBiDiMode,
  ChartAxisList_BeginUpdate,
  ChartAxisList_Clear,
  ChartAxisList_Delete,
  ChartAxisList_EndUpdate,
  ChartAxisList_FindItemID,
  ChartAxisList_GetNamePath,
  ChartAxisList_Insert,
  ChartAxisList_ClassType,
  ChartAxisList_ClassName,
  ChartAxisList_InstanceSize,
  ChartAxisList_InheritsFrom,
  ChartAxisList_Equals,
  ChartAxisList_GetHashCode,
  ChartAxisList_ToString,
  ChartAxisList_GetCount,
  ChartAxisList_GetItems,
  ChartAxisList_SetItems;

