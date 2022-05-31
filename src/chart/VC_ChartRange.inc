
function ChartRange_Create(AOwner: TCustomChart): TChartRange; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartRange.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartRange_Free(AObj: TChartRange); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

procedure ChartRange_Assign(AObj: TChartRange; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

procedure ChartRange_CheckBoundsOrder(AObj: TChartRange); extdecl;
begin
  handleExceptionBegin
  AObj.CheckBoundsOrder;
  handleExceptionEnd
end;

procedure ChartRange_Intersect(AObj: TChartRange; var AMin, AMax: Double); extdecl;
begin
  handleExceptionBegin
  AObj.Intersect(AMin, AMax);
  handleExceptionEnd
end;

procedure ChartRange_GetMax(AObj: TChartRange; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Max;
  handleExceptionEnd
end;

procedure ChartRange_SetMax(AObj: TChartRange; AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.Max := AValue;
  handleExceptionEnd
end;

procedure ChartRange_GetMin(AObj: TChartRange; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Min;
  handleExceptionEnd
end;

procedure ChartRange_SetMin(AObj: TChartRange; AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.Min := AValue;
  handleExceptionEnd
end;

function ChartRange_GetUseMax(AObj: TChartRange): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseMax;
  handleExceptionEnd
end;

procedure ChartRange_SetUseMax(AObj: TChartRange; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseMax := AValue;
  handleExceptionEnd
end;

function ChartRange_GetUseMin(AObj: TChartRange): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseMin;
  handleExceptionEnd
end;

procedure ChartRange_SetUseMin(AObj: TChartRange; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseMin := AValue;
  handleExceptionEnd
end;

function ChartRange_StaticClassType: TClass; extdecl;
begin
  Result := TChartRange;
end;

function ChartRange_GetOwner(AObj: TChartRange): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner;
  handleExceptionEnd
end;

procedure ChartRange_SetOwner(AObj: TChartRange; AValue: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AValue);
  handleExceptionEnd
end;

function ChartRange_GetVisible(AObj: TChartRange): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartRange_SetVisible(AObj: TChartRange; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

exports
  ChartRange_Create,
  ChartRange_Free,
  ChartRange_Assign,
  ChartRange_CheckBoundsOrder,
  ChartRange_Intersect,
  ChartRange_GetMax,
  ChartRange_SetMax,
  ChartRange_GetMin,
  ChartRange_SetMin,
  ChartRange_GetUseMax,
  ChartRange_SetUseMax,
  ChartRange_GetUseMin,
  ChartRange_SetUseMin,
  ChartRange_StaticClassType,
  ChartRange_GetOwner,
  ChartRange_SetOwner,
  ChartRange_GetVisible,
  ChartRange_SetVisible;
