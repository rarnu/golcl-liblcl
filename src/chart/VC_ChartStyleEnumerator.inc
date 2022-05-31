function ChartStyleEnumerator_Create(AOwner: TCollection): TChartStyleEnumerator; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartStyleEnumerator.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartStyleEnumerator_Free(AObj: TChartStyleEnumerator); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartStyleEnumerator_StaticClassType: TClass; extdecl;
begin
  Result := TChartStyleEnumerator;
end;

function ChartStyleEnumerator_GetCurrent(AObj: TChartStyleEnumerator): TChartStyle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

function ChartStyleEnumerator_MoveNext(AObj: TChartStyleEnumerator): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;


exports
  ChartStyleEnumerator_Create,
  ChartStyleEnumerator_Free,
  ChartStyleEnumerator_StaticClassType,
  ChartStyleEnumerator_GetCurrent,
  ChartStyleEnumerator_MoveNext;






