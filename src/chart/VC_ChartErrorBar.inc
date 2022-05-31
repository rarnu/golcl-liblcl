function ChartErrorBar_Create(AOwner: TCustomChart): TChartErrorBar; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartErrorBar.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartErrorBar_Free(AObj: TChartErrorBar); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartErrorBar_StaticClassType: TClass; extdecl;
begin
  Result := TChartErrorBar;
end;

function ChartErrorBar_GetPen(AObj: TChartErrorBar): TPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Pen;
  handleExceptionEnd
end;

procedure ChartErrorBar_SetPen(AObj: TChartErrorBar; AValue: TPen); extdecl;
begin
  handleExceptionBegin
  AObj.Pen := AValue;
  handleExceptionEnd
end;

function ChartErrorBar_GetWidth(AObj: TChartErrorBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

procedure ChartErrorBar_SetWidth(AObj: TChartErrorBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function ChartErrorBar_GetVisible(AObj: TChartErrorBar): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartErrorBar_SetVisible(AObj: TChartErrorBar; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

procedure ChartErrorBar_SetOwner(AObj: TChartErrorBar; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;


exports
  ChartErrorBar_Create,
  ChartErrorBar_Free,
  ChartErrorBar_StaticClassType,
  ChartErrorBar_GetPen,
  ChartErrorBar_SetPen,
  ChartErrorBar_GetWidth,
  ChartErrorBar_SetWidth,
  ChartErrorBar_GetVisible,
  ChartErrorBar_SetVisible,
  ChartErrorBar_SetOwner;

