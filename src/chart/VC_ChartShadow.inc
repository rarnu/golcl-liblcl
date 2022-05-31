
function ChartShadow_Create(AOwner: TCustomChart): TChartShadow; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartShadow.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartShadow_Free(AObj: TChartShadow); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartShadow_StaticClassType: TClass; extdecl;
begin
  Result := TChartShadow;
end;

function ChartShadow_GetColor(AObj: TChartShadow): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Color;
  handleExceptionEnd
end;

procedure ChartShadow_SetColor(AObj: TChartShadow; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Color := AValue;
  handleExceptionEnd
end;

function ChartShadow_GetOffsetX(AObj: TChartShadow): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OffsetX;
  handleExceptionEnd
end;

procedure ChartShadow_SetOffsetX(AObj: TChartShadow; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.OffsetX := AValue;
  handleExceptionEnd
end;

function ChartShadow_GetOffsetY(AObj: TChartShadow): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OffsetY;
  handleExceptionEnd
end;

procedure ChartShadow_SetOffsetY(AObj: TChartShadow; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.OffsetY := AValue;
  handleExceptionEnd
end;

function ChartShadow_GetTransparency(AObj: TChartShadow): TChartTransparency; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Transparency;
  handleExceptionEnd
end;

procedure ChartShadow_SetTransparency(AObj: TChartShadow; AValue: TChartTransparency); extdecl;
begin
  handleExceptionBegin
  AObj.Transparency := AValue;
  handleExceptionEnd
end;

function ChartShadow_GetVisible(AObj: TChartShadow): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartShadow_SetVisible(AObj: TChartShadow; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function ChartShadow_GetOwner(AObj: TChartShadow): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner();
  handleExceptionEnd
end;

procedure ChartShadow_SetOwner(AObj: TChartShadow; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;


exports
  ChartShadow_Create,
  ChartShadow_Free,
  ChartShadow_StaticClassType,
  ChartShadow_GetColor,
  ChartShadow_SetColor,
  ChartShadow_GetOffsetX,
  ChartShadow_SetOffsetX,
  ChartShadow_GetOffsetY,
  ChartShadow_SetOffsetY,
  ChartShadow_GetTransparency,
  ChartShadow_SetTransparency,
  ChartShadow_GetVisible,
  ChartShadow_SetVisible,
  ChartShadow_GetOwner,
  ChartShadow_SetOwner;



