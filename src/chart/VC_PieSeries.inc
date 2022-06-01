function PieSeries_Create(AOwner: TComponent): TPieSeries; extdecl;
begin
  handleExceptionBegin
  Result :=  TPieSeries.Create(AOwner);
  handleExceptionEnd
end;

procedure PieSeries_Free(AObj: TPieSeries); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function PieSeries_StaticClassType: TClass; extdecl;
begin
  Result := TPieSeries;
end;

function PieSeries_GetEdgePen(AObj: TPieSeries): TPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EdgePen;
  handleExceptionEnd
end;

procedure PieSeries_SetEdgePen(AObj: TPieSeries; AValue: TPen); extdecl;
begin
  handleExceptionBegin
  AObj.EdgePen := AValue;
  handleExceptionEnd
end;

function PieSeries_GetExploded(AObj: TPieSeries): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Exploded;
  handleExceptionEnd
end;

procedure PieSeries_SetExploded(AObj: TPieSeries; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Exploded := AValue;
  handleExceptionEnd
end;

function PieSeries_GetFixedRadius(AObj: TPieSeries): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FixedRadius;
  handleExceptionEnd
end;

procedure PieSeries_SetFixedRadius(AObj: TPieSeries; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.FixedRadius := AValue;
  handleExceptionEnd
end;

function PieSeries_GetMarkDistancePercent(AObj: TPieSeries): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MarkDistancePercent;
  handleExceptionEnd
end;

procedure PieSeries_SetMarkDistancePercent(AObj: TPieSeries; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.MarkDistancePercent := AValue;
  handleExceptionEnd
end;

function PieSeries_GetMarkPositions(AObj: TPieSeries): TPieMarkPositions; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MarkPositions;
  handleExceptionEnd
end;

procedure PieSeries_SetMarkPositions(AObj: TPieSeries; AValue: TPieMarkPositions); extdecl;
begin
  handleExceptionBegin
  AObj.MarkPositions := AValue;
  handleExceptionEnd
end;

function PieSeries_GetRotateLabels(AObj: TPieSeries): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RotateLabels;
  handleExceptionEnd
end;

procedure PieSeries_SetRotateLabels(AObj: TPieSeries; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.RotateLabels := AValue;
  handleExceptionEnd
end;

function PieSeries_GetMarks(AObj: TPieSeries): TChartMarks; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Marks;
  handleExceptionEnd
end;

procedure PieSeries_SetMarks(AObj: TPieSeries; AValue: TChartMarks); extdecl;
begin
  handleExceptionBegin
  AObj.Marks := AValue;
  handleExceptionEnd
end;

function PieSeries_GetTitle(AObj: TPieSeries): String; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Title;
  handleExceptionEnd
end;

procedure PieSeries_SetTitle(AObj: TPieSeries; AValue: String); extdecl;
begin
  handleExceptionBegin
  AObj.Title := AValue;
  handleExceptionEnd
end;

function PieSeries_GetLegend(AObj: TPieSeries): TChartSeriesLegend; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Legend;
  handleExceptionEnd
end;

procedure PieSeries_SetLegend(AObj: TPieSeries; AValue: TChartSeriesLegend); extdecl;
begin
  handleExceptionBegin
  AObj.Legend := AValue;
  handleExceptionEnd
end;

function PieSeries_GetActive(AObj: TPieSeries): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Active;
  handleExceptionEnd
end;

procedure PieSeries_SetActive(AObj: TPieSeries; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Active := AValue;
  handleExceptionEnd
end;

function PieSeries_GetDepth(AObj: TPieSeries): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Depth;
  handleExceptionEnd
end;

procedure PieSeries_SetDepth(AObj: TPieSeries; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Depth := AValue;
  handleExceptionEnd
end;

procedure PieSeries_GetDragOrigin(AObj: TPieSeries; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.DragOrigin;
  handleExceptionEnd
end;

procedure PieSeries_SetDragOrigin(AObj: TPieSeries; AValue: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.DragOrigin := AValue;
  handleExceptionEnd
end;

function PieSeries_GetParentChart(AObj: TPieSeries): TChart; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ParentChart;
  handleExceptionEnd
end;

function PieSeries_GetShadow(AObj: TPieSeries): TChartShadow; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Shadow;
  handleExceptionEnd
end;

procedure PieSeries_SetShadow(AObj: TPieSeries; AValue: TChartShadow); extdecl;
begin
  handleExceptionBegin
  AObj.Shadow := AValue;
  handleExceptionEnd
end;

function PieSeries_GetSpecialPointPos(AObj: TPieSeries): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SpecialPointPos;
  handleExceptionEnd
end;

function PieSeries_GetTransparency(AObj: TPieSeries): TChartTransparency; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Transparency;
  handleExceptionEnd
end;

procedure PieSeries_SetTransparency(AObj: TPieSeries; AValue: TChartTransparency); extdecl;
begin
  handleExceptionBegin
  AObj.Transparency := AValue;
  handleExceptionEnd
end;

function PieSeries_GetZPosition(AObj: TPieSeries): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ZPosition;
  handleExceptionEnd
end;

procedure PieSeries_SetZPosition(AObj: TPieSeries; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.ZPosition := AValue;
  handleExceptionEnd
end;

function PieSeries_AddPie(AObj: TPieSeries; AValue: Double;AText: PChar;AColor: TColor): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddPie(AValue, string(AText),AColor);
  handleExceptionEnd
end;

procedure PieSeries_Assign(AObj: TPieSeries; ASource: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(ASource);
  handleExceptionEnd
end;

procedure PieSeries_CalcBorderPoint(AObj: TPieSeries; ASlice: TPieSlice;ARadius, AAngle: Double; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CalcBorderPoint(ASlice,ARadius, AAngle);
  handleExceptionEnd
end;

function PieSeries_CalcInnerRadius(AObj: TPieSeries): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CalcInnerRadius();
  handleExceptionEnd
end;

procedure PieSeries_Draw(AObj: TPieSeries; ADrawer: IChartDrawer); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(ADrawer);
  handleExceptionEnd
end;

function PieSeries_FindContainingSlice(AObj: TPieSeries; APoint: TPoint): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindContainingSlice(APoint);
  handleExceptionEnd
end;

procedure PieSeries_MovePointEx(AObj: TPieSeries; var AIndex: Integer;AXIndex, AYIndex: Integer;ANewPos: TDoublePoint); extdecl;
begin
  handleExceptionBegin
  AObj.MovePointEx(AIndex,AXIndex, AYIndex,ANewPos);
  handleExceptionEnd
end;

function PieSeries_SliceColor(AObj: TPieSeries; AIndex: Integer): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SliceColor(AIndex);
  handleExceptionEnd
end;

function PieSeries_GetColor(AObj: TPieSeries; AIndex: Integer): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetColor(AIndex);
  handleExceptionEnd
end;

procedure PieSeries_GetMax(AObj: TPieSeries; var X, Y: Double); extdecl;
begin
  handleExceptionBegin
  AObj.GetMax(X, Y);
  handleExceptionEnd
end;

procedure PieSeries_GetMin(AObj: TPieSeries; var X, Y: Double); extdecl;
begin
  handleExceptionBegin
  AObj.GetMin(X, Y);
  handleExceptionEnd
end;

function PieSeries_GetXImgValue(AObj: TPieSeries; AIndex: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetXImgValue(AIndex);
  handleExceptionEnd
end;

procedure PieSeries_GetXMax(AObj: TPieSeries; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetXMax();
  handleExceptionEnd
end;

procedure PieSeries_GetXMin(AObj: TPieSeries; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetXMin();
  handleExceptionEnd
end;

procedure PieSeries_GetXValue(AObj: TPieSeries; AIndex: Integer; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetXValue(AIndex);
  handleExceptionEnd
end;

procedure PieSeries_GetXValues(AObj: TPieSeries; AIndex, AXIndex: Integer; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetXValues(AIndex, AXIndex);
  handleExceptionEnd
end;

function PieSeries_GetYImgValue(AObj: TPieSeries; AIndex: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetYImgValue(AIndex);
  handleExceptionEnd
end;

procedure PieSeries_GetYMax(AObj: TPieSeries; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetYMax();
  handleExceptionEnd
end;

procedure PieSeries_GetYMin(AObj: TPieSeries; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetYMin();
  handleExceptionEnd
end;

procedure PieSeries_GetYValue(AObj: TPieSeries; AIndex: Integer; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetYValue(AIndex);
  handleExceptionEnd
end;

procedure PieSeries_GetYValues(AObj: TPieSeries; AIndex, AYIndex: Integer; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetYValues(AIndex, AYIndex);
  handleExceptionEnd
end;

procedure PieSeries_SetColor(AObj: TPieSeries; AIndex: Integer;AColor: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetColor(AIndex,AColor);
  handleExceptionEnd
end;

procedure PieSeries_SetText(AObj: TPieSeries; AIndex: Integer;AValue: String); extdecl;
begin
  handleExceptionBegin
  AObj.SetText(AIndex,AValue);
  handleExceptionEnd
end;

procedure PieSeries_SetXValue(AObj: TPieSeries; AIndex: Integer;AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetXValue(AIndex,AValue);
  handleExceptionEnd
end;

procedure PieSeries_SetXValues(AObj: TPieSeries; AIndex, AXIndex: Integer;AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetXValues(AIndex, AXIndex,AValue);
  handleExceptionEnd
end;

procedure PieSeries_SetYValue(AObj: TPieSeries; AIndex: Integer;AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetYValue(AIndex,AValue);
  handleExceptionEnd
end;

procedure PieSeries_SetYValues(AObj: TPieSeries; AIndex, AYIndex: Integer;AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetYValues(AIndex, AYIndex,AValue);
  handleExceptionEnd
end;

function PieSeries_Add(AObj: TPieSeries; AValue: Double;AXLabel: String;AColor: TColor): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add(AValue,AXLabel,AColor);
  handleExceptionEnd
end;

function PieSeries_AddNull(AObj: TPieSeries; ALabel: String;AColor: TColor): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddNull(ALabel,AColor);
  handleExceptionEnd
end;

function PieSeries_AddX(AObj: TPieSeries; AX: Double;ALabel: String;AColor: TColor): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddX(AX,ALabel,AColor);
  handleExceptionEnd
end;

function PieSeries_AddXY(AObj: TPieSeries; AX, AY: Double;AXLabel: String;AColor: TColor): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddXY(AX, AY,AXLabel,AColor);
  handleExceptionEnd
end;

function PieSeries_AddY(AObj: TPieSeries; AY: Double;ALabel: String;AColor: TColor): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddY(AY,ALabel,AColor);
  handleExceptionEnd
end;

procedure PieSeries_BeginUpdate(AObj: TPieSeries); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

procedure PieSeries_Clear(AObj: TPieSeries); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

function PieSeries_Count(AObj: TPieSeries): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count();
  handleExceptionEnd
end;

procedure PieSeries_Delete(AObj: TPieSeries; AIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(AIndex);
  handleExceptionEnd
end;

procedure PieSeries_EndUpdate(AObj: TPieSeries); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

procedure PieSeries_Extent(AObj: TPieSeries; var Result: TDoubleRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Extent();
  handleExceptionEnd
end;

procedure PieSeries_FindYRange(AObj: TPieSeries; AXMin, AXMax: Double;var AYMin, AYMax: Double); extdecl;
begin
  handleExceptionBegin
  AObj.FindYRange(AXMin, AXMax,AYMin, AYMax);
  handleExceptionEnd
end;

function PieSeries_FormattedMark(AObj: TPieSeries; AIndex: Integer;AFormat: String;AYIndex: Integer): String; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FormattedMark(AIndex,AFormat,AYIndex);
  handleExceptionEnd
end;

function PieSeries_IsEmpty(AObj: TPieSeries): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEmpty();
  handleExceptionEnd
end;

procedure PieSeries_AxisToGraph(AObj: TPieSeries; APoint: TDoublePoint; var Result: TDoublePoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AxisToGraph(APoint);
  handleExceptionEnd
end;

procedure PieSeries_AxisToGraphX(AObj: TPieSeries; AX: Double; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AxisToGraphX(AX);
  handleExceptionEnd
end;

procedure PieSeries_AxisToGraphY(AObj: TPieSeries; AY: Double; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AxisToGraphY(AY);
  handleExceptionEnd
end;

function PieSeries_GetAxisX(AObj: TPieSeries): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAxisX();
  handleExceptionEnd
end;

function PieSeries_GetAxisY(AObj: TPieSeries): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAxisY();
  handleExceptionEnd
end;

function PieSeries_GetAxisBounds(AObj: TPieSeries; AAxis: TChartAxis;var AMin, AMax: Double): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAxisBounds(AAxis,AMin, AMax);
  handleExceptionEnd
end;

function PieSeries_GetDepthColor(AObj: TPieSeries; AColor: Integer;Opposite: boolean = false): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDepthColor(AColor,Opposite);
  handleExceptionEnd
end;

procedure PieSeries_GetGraphBounds(AObj: TPieSeries; var Result: TDoubleRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetGraphBounds();
  handleExceptionEnd
end;

procedure PieSeries_GraphToAxis(AObj: TPieSeries; APoint: TDoublePoint; var Result: TDoublePoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GraphToAxis(APoint);
  handleExceptionEnd
end;

procedure PieSeries_GraphToAxisX(AObj: TPieSeries; AX: Double; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GraphToAxisX(AX);
  handleExceptionEnd
end;

procedure PieSeries_GraphToAxisY(AObj: TPieSeries; AY: Double; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GraphToAxisY(AY);
  handleExceptionEnd
end;

function PieSeries_IsRotated(AObj: TPieSeries): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsRotated();
  handleExceptionEnd
end;


procedure PieSeries_MovePoint(AObj: TPieSeries; var AIndex: Integer;ANewPos: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.MovePoint(AIndex,ANewPos);
  handleExceptionEnd
end;

procedure PieSeries_UpdateBiDiMode(AObj: TPieSeries); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateBiDiMode();
  handleExceptionEnd
end;


exports
  PieSeries_Create,
  PieSeries_Free,
  PieSeries_StaticClassType,
  PieSeries_GetEdgePen,
  PieSeries_SetEdgePen,
  PieSeries_GetExploded,
  PieSeries_SetExploded,
  PieSeries_GetFixedRadius,
  PieSeries_SetFixedRadius,
  PieSeries_GetMarkDistancePercent,
  PieSeries_SetMarkDistancePercent,
  PieSeries_GetMarkPositions,
  PieSeries_SetMarkPositions,
  PieSeries_GetRotateLabels,
  PieSeries_SetRotateLabels,
  PieSeries_GetMarks,
  PieSeries_SetMarks,
  PieSeries_GetTitle,
  PieSeries_SetTitle,
  PieSeries_GetLegend,
  PieSeries_SetLegend,
  PieSeries_GetActive,
  PieSeries_SetActive,
  PieSeries_GetDepth,
  PieSeries_SetDepth,
  PieSeries_GetDragOrigin,
  PieSeries_SetDragOrigin,
  PieSeries_GetParentChart,
  PieSeries_GetShadow,
  PieSeries_SetShadow,
  PieSeries_GetSpecialPointPos,
  PieSeries_GetTransparency,
  PieSeries_SetTransparency,
  PieSeries_GetZPosition,
  PieSeries_SetZPosition,
  PieSeries_AddPie,
  PieSeries_Assign,
  PieSeries_CalcBorderPoint,
  PieSeries_CalcInnerRadius,
  PieSeries_Draw,
  PieSeries_FindContainingSlice,
  PieSeries_MovePointEx,
  PieSeries_SliceColor,
  PieSeries_GetColor,
  PieSeries_GetMax,
  PieSeries_GetMin,
  PieSeries_GetXImgValue,
  PieSeries_GetXMax,
  PieSeries_GetXMin,
  PieSeries_GetXValue,
  PieSeries_GetXValues,
  PieSeries_GetYImgValue,
  PieSeries_GetYMax,
  PieSeries_GetYMin,
  PieSeries_GetYValue,
  PieSeries_GetYValues,
  PieSeries_SetColor,
  PieSeries_SetText,
  PieSeries_SetXValue,
  PieSeries_SetXValues,
  PieSeries_SetYValue,
  PieSeries_SetYValues,
  PieSeries_Add,
  PieSeries_AddNull,
  PieSeries_AddX,
  PieSeries_AddXY,
  PieSeries_AddY,
  PieSeries_BeginUpdate,
  PieSeries_Clear,
  PieSeries_Count,
  PieSeries_Delete,
  PieSeries_EndUpdate,
  PieSeries_Extent,
  PieSeries_FindYRange,
  PieSeries_FormattedMark,
  PieSeries_IsEmpty,
  PieSeries_AxisToGraph,
  PieSeries_AxisToGraphX,
  PieSeries_AxisToGraphY,
  PieSeries_GetAxisX,
  PieSeries_GetAxisY,
  PieSeries_GetAxisBounds,
  PieSeries_GetDepthColor,
  PieSeries_GetGraphBounds,
  PieSeries_GraphToAxis,
  PieSeries_GraphToAxisX,
  PieSeries_GraphToAxisY,
  PieSeries_IsRotated,
  PieSeries_MovePoint,
  PieSeries_UpdateBiDiMode;

