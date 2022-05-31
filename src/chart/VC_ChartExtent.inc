function ChartExtent_Create(AOwner: TCustomChart): TChartExtent; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartExtent.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartExtent_Free(AObj: TChartExtent); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartExtent_StaticClassType: TClass; extdecl;
begin
  Result := TChartExtent;
end;

function ChartExtent_GetUseXMax(AObj: TChartExtent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseXMax;
  handleExceptionEnd
end;

procedure ChartExtent_SetUseXMax(AObj: TChartExtent; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseXMax := AValue;
  handleExceptionEnd
end;

function ChartExtent_GetUseXMin(AObj: TChartExtent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseXMin;
  handleExceptionEnd
end;

procedure ChartExtent_SetUseXMin(AObj: TChartExtent; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseXMin := AValue;
  handleExceptionEnd
end;

function ChartExtent_GetUseYMax(AObj: TChartExtent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseYMax;
  handleExceptionEnd
end;

procedure ChartExtent_SetUseYMax(AObj: TChartExtent; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseYMax := AValue;
  handleExceptionEnd
end;

function ChartExtent_GetUseYMin(AObj: TChartExtent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseYMin;
  handleExceptionEnd
end;

procedure ChartExtent_SetUseYMin(AObj: TChartExtent; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseYMin := AValue;
  handleExceptionEnd
end;

procedure ChartExtent_GetXMax(AObj: TChartExtent; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.XMax;
  handleExceptionEnd
end;

procedure ChartExtent_SetXMax(AObj: TChartExtent; AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.XMax := AValue;
  handleExceptionEnd
end;

procedure ChartExtent_GetXMin(AObj: TChartExtent; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.XMin;
  handleExceptionEnd
end;

procedure ChartExtent_SetXMin(AObj: TChartExtent; AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.XMin := AValue;
  handleExceptionEnd
end;

procedure ChartExtent_GetYMax(AObj: TChartExtent; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.YMax;
  handleExceptionEnd
end;

procedure ChartExtent_SetYMax(AObj: TChartExtent; AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.YMax := AValue;
  handleExceptionEnd
end;

procedure ChartExtent_GetYMin(AObj: TChartExtent; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.YMin;
  handleExceptionEnd
end;

procedure ChartExtent_SetYMin(AObj: TChartExtent; AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.YMin := AValue;
  handleExceptionEnd
end;

function ChartExtent_GetVisible(AObj: TChartExtent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartExtent_SetVisible(AObj: TChartExtent; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

procedure ChartExtent_Assign(AObj: TChartExtent; ASource: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(ASource);
  handleExceptionEnd
end;

procedure ChartExtent_CheckBoundsOrder(AObj: TChartExtent); extdecl;
begin
  handleExceptionBegin
  AObj.CheckBoundsOrder();
  handleExceptionEnd
end;

procedure ChartExtent_FixTo(AObj: TChartExtent; ABounds: TDoubleRect); extdecl;
begin
  handleExceptionBegin
  AObj.FixTo(ABounds);
  handleExceptionEnd
end;

function ChartExtent_GetOwner(AObj: TChartExtent): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner();
  handleExceptionEnd
end;

procedure ChartExtent_SetOwner(AObj: TChartExtent; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;


exports
  ChartExtent_Create,
  ChartExtent_Free,
  ChartExtent_StaticClassType,
  ChartExtent_GetUseXMax,
  ChartExtent_SetUseXMax,
  ChartExtent_GetUseXMin,
  ChartExtent_SetUseXMin,
  ChartExtent_GetUseYMax,
  ChartExtent_SetUseYMax,
  ChartExtent_GetUseYMin,
  ChartExtent_SetUseYMin,
  ChartExtent_GetXMax,
  ChartExtent_SetXMax,
  ChartExtent_GetXMin,
  ChartExtent_SetXMin,
  ChartExtent_GetYMax,
  ChartExtent_SetYMax,
  ChartExtent_GetYMin,
  ChartExtent_SetYMin,
  ChartExtent_GetVisible,
  ChartExtent_SetVisible,
  ChartExtent_Assign,
  ChartExtent_CheckBoundsOrder,
  ChartExtent_FixTo,
  ChartExtent_GetOwner,
  ChartExtent_SetOwner;
