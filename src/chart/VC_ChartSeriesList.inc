
function ChartSeriesList_Create(): TChartSeriesList; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartSeriesList.Create();
  handleExceptionEnd
end;

procedure ChartSeriesList_Free(AObj: TChartSeriesList); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartSeriesList_StaticClassType: TClass; extdecl;
begin
  Result := TChartSeriesList;
end;

function ChartSeriesList_GetItems(AObj: TChartSeriesList; AIndex: Integer): TBasicChartSeries; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Items[AIndex];
  handleExceptionEnd
end;

function ChartSeriesList_GetList(AObj: TChartSeriesList): TIndexedComponentList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.List;
  handleExceptionEnd
end;

procedure ChartSeriesList_Clear(AObj: TChartSeriesList); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

function ChartSeriesList_Count(AObj: TChartSeriesList): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count();
  handleExceptionEnd
end;

function ChartSeriesList_GetEnumerator(AObj: TChartSeriesList): TBasicChartSeriesEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

procedure ChartSeriesList_UpdateBiDiMode(AObj: TChartSeriesList); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateBiDiMode();
  handleExceptionEnd
end;


exports
  ChartSeriesList_Create,
  ChartSeriesList_Free,
  ChartSeriesList_StaticClassType,
  ChartSeriesList_GetItems,
  ChartSeriesList_GetList,
  ChartSeriesList_Clear,
  ChartSeriesList_Count,
  ChartSeriesList_GetEnumerator,
  ChartSeriesList_UpdateBiDiMode;



