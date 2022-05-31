
function BasicChartSeries_Create(AOwner: TComponent): TBasicChartSeries; extdecl;
begin
  handleExceptionBegin
  Result :=  TBasicChartSeries.Create(AOwner);
  handleExceptionEnd
end;

procedure BasicChartSeries_Free(AObj: TBasicChartSeries); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function BasicChartSeries_StaticClassType: TClass; extdecl;
begin
  Result := TBasicChartSeries;
end;

function BasicChartSeries_GetActive(AObj: TBasicChartSeries): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Active;
  handleExceptionEnd
end;

procedure BasicChartSeries_SetActive(AObj: TBasicChartSeries; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Active := AValue;
  handleExceptionEnd
end;

function BasicChartSeries_GetDepth(AObj: TBasicChartSeries): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Depth;
  handleExceptionEnd
end;

procedure BasicChartSeries_SetDepth(AObj: TBasicChartSeries; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Depth := AValue;
  handleExceptionEnd
end;

procedure BasicChartSeries_GetDragOrigin(AObj: TBasicChartSeries; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.DragOrigin;
  handleExceptionEnd
end;

procedure BasicChartSeries_SetDragOrigin(AObj: TBasicChartSeries; AValue: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.DragOrigin := AValue;
  handleExceptionEnd
end;

function BasicChartSeries_GetParentChart(AObj: TBasicChartSeries): TChart; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ParentChart;
  handleExceptionEnd
end;

function BasicChartSeries_GetShadow(AObj: TBasicChartSeries): TChartShadow; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Shadow;
  handleExceptionEnd
end;

procedure BasicChartSeries_SetShadow(AObj: TBasicChartSeries; AValue: TChartShadow); extdecl;
begin
  handleExceptionBegin
  AObj.Shadow := AValue;
  handleExceptionEnd
end;

function BasicChartSeries_GetSpecialPointPos(AObj: TBasicChartSeries): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpecialPointPos;
  handleExceptionEnd
end;

function BasicChartSeries_GetTransparency(AObj: TBasicChartSeries): TChartTransparency; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Transparency;
  handleExceptionEnd
end;

procedure BasicChartSeries_SetTransparency(AObj: TBasicChartSeries; AValue: TChartTransparency); extdecl;
begin
  handleExceptionBegin
  AObj.Transparency := AValue;
  handleExceptionEnd
end;

function BasicChartSeries_GetZPosition(AObj: TBasicChartSeries): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ZPosition;
  handleExceptionEnd
end;

procedure BasicChartSeries_SetZPosition(AObj: TBasicChartSeries; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.ZPosition := AValue;
  handleExceptionEnd
end;

procedure BasicChartSeries_AxisToGraphX(AObj: TBasicChartSeries; AX: Double; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AxisToGraphX(AX);
  handleExceptionEnd
end;

procedure BasicChartSeries_AxisToGraphY(AObj: TBasicChartSeries; AY: Double; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AxisToGraphY(AY);
  handleExceptionEnd
end;

procedure BasicChartSeries_GraphToAxisX(AObj: TBasicChartSeries; AX: Double; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GraphToAxisX(AX);
  handleExceptionEnd
end;

procedure BasicChartSeries_GraphToAxisY(AObj: TBasicChartSeries; AY: Double; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GraphToAxisY(AY);
  handleExceptionEnd
end;

procedure BasicChartSeries_Draw(AObj: TBasicChartSeries; ADrawer: IChartDrawer); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(ADrawer);
  handleExceptionEnd
end;

function BasicChartSeries_GetAxisBounds(AObj: TBasicChartSeries; AAxis: TChartAxis;var AMin, AMax: Double): boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAxisBounds(AAxis,AMin, AMax);
  handleExceptionEnd
end;

procedure BasicChartSeries_GetGraphBounds(AObj: TBasicChartSeries; var Result: TDoubleRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetGraphBounds();
  handleExceptionEnd
end;

function BasicChartSeries_IsEmpty(AObj: TBasicChartSeries): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEmpty();
  handleExceptionEnd
end;

procedure BasicChartSeries_MovePoint(AObj: TBasicChartSeries; var AIndex: Integer;ANewPos: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.MovePoint(AIndex,ANewPos);
  handleExceptionEnd
end;

procedure BasicChartSeries_MovePointEx(AObj: TBasicChartSeries; var AIndex: Integer;AXIndex, AYIndex: Integer;ANewPos: TDoublePoint); extdecl;
begin
  handleExceptionBegin
  AObj.MovePointEx(AIndex,AXIndex, AYIndex,ANewPos);
  handleExceptionEnd
end;

procedure BasicChartSeries_UpdateBiDiMode(AObj: TBasicChartSeries); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateBiDiMode();
  handleExceptionEnd
end;


exports
  BasicChartSeries_Create,
  BasicChartSeries_Free,
  BasicChartSeries_StaticClassType,
  BasicChartSeries_GetActive,
  BasicChartSeries_SetActive,
  BasicChartSeries_GetDepth,
  BasicChartSeries_SetDepth,
  BasicChartSeries_GetDragOrigin,
  BasicChartSeries_SetDragOrigin,
  BasicChartSeries_GetParentChart,
  BasicChartSeries_GetShadow,
  BasicChartSeries_SetShadow,
  BasicChartSeries_GetSpecialPointPos,
  BasicChartSeries_GetTransparency,
  BasicChartSeries_SetTransparency,
  BasicChartSeries_GetZPosition,
  BasicChartSeries_SetZPosition,
  BasicChartSeries_AxisToGraphX,
  BasicChartSeries_AxisToGraphY,
  BasicChartSeries_GraphToAxisX,
  BasicChartSeries_GraphToAxisY,
  BasicChartSeries_Draw,
  BasicChartSeries_GetAxisBounds,
  BasicChartSeries_GetGraphBounds,
  BasicChartSeries_IsEmpty,
  BasicChartSeries_MovePoint,
  BasicChartSeries_MovePointEx,
  BasicChartSeries_UpdateBiDiMode;

