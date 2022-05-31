
function ChartMargins_Create(AOwner: TCustomChart): TChartMargins; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartMargins.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartMargins_Free(AObj: TChartMargins); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartMargins_GetValue(AObj: TChartMargins; AIndex: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetValue(AIndex);
  handleExceptionEnd
end;

procedure ChartMargins_SetValue(AObj: TChartMargins; AIndex: Integer; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.SetValue(AIndex, AValue);
  handleExceptionEnd
end;

procedure ChartMargins_Assign(AObj: TChartMargins; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

procedure ChartMargins_ExpandRectScaled(AObj: TChartMargins; ADrawer: IChartDrawer; var ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.ExpandRectScaled(ADrawer, ARect);
  handleExceptionEnd
end;

procedure ChartMargins_GetData(AObj: TChartMargins; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data;
  handleExceptionEnd
end;

function ChartMargins_GetLeft(AObj: TChartMargins): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

procedure ChartMargins_SetLeft(AObj: TChartMargins; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function ChartMargins_GetTop(AObj: TChartMargins): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

procedure ChartMargins_SetTop(AObj: TChartMargins; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function ChartMargins_GetRight(AObj: TChartMargins): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Right;
  handleExceptionEnd
end;

procedure ChartMargins_SetRight(AObj: TChartMargins; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Right := AValue;
  handleExceptionEnd
end;

function ChartMargins_GetBottom(AObj: TChartMargins): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Bottom;
  handleExceptionEnd
end;

procedure ChartMargins_SetBottom(AObj: TChartMargins; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Bottom := AValue;
  handleExceptionEnd
end;

function ChartMargins_StaticClassType: TClass; extdecl;
begin
  Result := TChartMargins;
end;

function ChartMargins_GetOwner(AObj: TChartMargins): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner;
  handleExceptionEnd
end;

procedure ChartMargins_SetOwner(AObj: TChartMargins; AValue: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AValue);
  handleExceptionEnd
end;

function ChartMargins_GetVisible(AObj: TChartMargins): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartMargins_SetVisible(AObj: TChartMargins; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

exports
  ChartMargins_Create,
  ChartMargins_Free,
  ChartMargins_GetValue,
  ChartMargins_SetValue,
  ChartMargins_Assign,
  ChartMargins_ExpandRectScaled,
  ChartMargins_GetData,
  ChartMargins_GetLeft,
  ChartMargins_SetLeft,
  ChartMargins_GetTop,
  ChartMargins_SetTop,
  ChartMargins_GetRight,
  ChartMargins_SetRight,
  ChartMargins_GetBottom,
  ChartMargins_SetBottom,
  ChartMargins_StaticClassType,
  ChartMargins_GetOwner,
  ChartMargins_SetOwner,
  ChartMargins_GetVisible,
  ChartMargins_SetVisible;
