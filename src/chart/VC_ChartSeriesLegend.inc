
function ChartSeriesLegend_Create(AOwner: TCustomChart): TChartSeriesLegend; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartSeriesLegend.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartSeriesLegend_Free(AObj: TChartSeriesLegend); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartSeriesLegend_StaticClassType: TClass; extdecl;
begin
  Result := TChartSeriesLegend;
end;

function ChartSeriesLegend_GetFormat(AObj: TChartSeriesLegend): String; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Format;
  handleExceptionEnd
end;

procedure ChartSeriesLegend_SetFormat(AObj: TChartSeriesLegend; AValue: String); extdecl;
begin
  handleExceptionBegin
  AObj.Format := AValue;
  handleExceptionEnd
end;

function ChartSeriesLegend_GetGroupIndex(AObj: TChartSeriesLegend): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GroupIndex;
  handleExceptionEnd
end;

procedure ChartSeriesLegend_SetGroupIndex(AObj: TChartSeriesLegend; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.GroupIndex := AValue;
  handleExceptionEnd
end;

function ChartSeriesLegend_GetMultiplicity(AObj: TChartSeriesLegend): TLegendMultiplicity; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Multiplicity;
  handleExceptionEnd
end;

procedure ChartSeriesLegend_SetMultiplicity(AObj: TChartSeriesLegend; AValue: TLegendMultiplicity); extdecl;
begin
  handleExceptionBegin
  AObj.Multiplicity := AValue;
  handleExceptionEnd
end;

function ChartSeriesLegend_GetOrder(AObj: TChartSeriesLegend): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Order;
  handleExceptionEnd
end;

procedure ChartSeriesLegend_SetOrder(AObj: TChartSeriesLegend; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Order := AValue;
  handleExceptionEnd
end;

function ChartSeriesLegend_GetTextFormat(AObj: TChartSeriesLegend): TChartTextFormat; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextFormat;
  handleExceptionEnd
end;

procedure ChartSeriesLegend_SetTextFormat(AObj: TChartSeriesLegend; AValue: TChartTextFormat); extdecl;
begin
  handleExceptionBegin
  AObj.TextFormat := AValue;
  handleExceptionEnd
end;

function ChartSeriesLegend_GetUserItemsCount(AObj: TChartSeriesLegend): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UserItemsCount;
  handleExceptionEnd
end;

procedure ChartSeriesLegend_SetUserItemsCount(AObj: TChartSeriesLegend; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.UserItemsCount := AValue;
  handleExceptionEnd
end;

function ChartSeriesLegend_GetVisible(AObj: TChartSeriesLegend): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartSeriesLegend_SetVisible(AObj: TChartSeriesLegend; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function ChartSeriesLegend_GetOwner(AObj: TChartSeriesLegend): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner();
  handleExceptionEnd
end;

procedure ChartSeriesLegend_SetOwner(AObj: TChartSeriesLegend; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;


exports
  ChartSeriesLegend_Create,
  ChartSeriesLegend_Free,
  ChartSeriesLegend_StaticClassType,
  ChartSeriesLegend_GetFormat,
  ChartSeriesLegend_SetFormat,
  ChartSeriesLegend_GetGroupIndex,
  ChartSeriesLegend_SetGroupIndex,
  ChartSeriesLegend_GetMultiplicity,
  ChartSeriesLegend_SetMultiplicity,
  ChartSeriesLegend_GetOrder,
  ChartSeriesLegend_SetOrder,
  ChartSeriesLegend_GetTextFormat,
  ChartSeriesLegend_SetTextFormat,
  ChartSeriesLegend_GetUserItemsCount,
  ChartSeriesLegend_SetUserItemsCount,
  ChartSeriesLegend_GetVisible,
  ChartSeriesLegend_SetVisible,
  ChartSeriesLegend_GetOwner,
  ChartSeriesLegend_SetOwner;



