
function ChartAxis_Create(AOwner: TCollection): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartAxis.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartAxis_Free(AObj: TChartAxis); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartAxis_StaticClassType: TClass; extdecl;
begin
  Result := TChartAxis;
end;

function ChartAxis_GetDisplayName(AObj: TChartAxis): String; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisplayName;
  handleExceptionEnd
end;

function ChartAxis_GetValue(AObj: TChartAxis; AIndex: Integer): TChartValueText; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Value[AIndex];
  handleExceptionEnd
end;

function ChartAxis_GetValueCount(AObj: TChartAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ValueCount;
  handleExceptionEnd
end;

function ChartAxis_GetAtDataOnly(AObj: TChartAxis): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AtDataOnly;
  handleExceptionEnd
end;

procedure ChartAxis_SetAtDataOnly(AObj: TChartAxis; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.AtDataOnly := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetAxisPen(AObj: TChartAxis): TChartAxisPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AxisPen;
  handleExceptionEnd
end;

procedure ChartAxis_SetAxisPen(AObj: TChartAxis; AValue: TChartAxisPen); extdecl;
begin
  handleExceptionBegin
  AObj.AxisPen := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetGroup(AObj: TChartAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Group;
  handleExceptionEnd
end;

procedure ChartAxis_SetGroup(AObj: TChartAxis; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Group := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetInverted(AObj: TChartAxis): boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Inverted;
  handleExceptionEnd
end;

procedure ChartAxis_SetInverted(AObj: TChartAxis; AValue: boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Inverted := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetLabelSize(AObj: TChartAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LabelSize;
  handleExceptionEnd
end;

procedure ChartAxis_SetLabelSize(AObj: TChartAxis; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.LabelSize := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetMargin(AObj: TChartAxis): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Margin;
  handleExceptionEnd
end;

procedure ChartAxis_SetMargin(AObj: TChartAxis; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Margin := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetMarginsForMarks(AObj: TChartAxis): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MarginsForMarks;
  handleExceptionEnd
end;

procedure ChartAxis_SetMarginsForMarks(AObj: TChartAxis; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.MarginsForMarks := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetMarks(AObj: TChartAxis): TChartAxisMarks; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Marks;
  handleExceptionEnd
end;

procedure ChartAxis_SetMarks(AObj: TChartAxis; AValue: TChartAxisMarks); extdecl;
begin
  handleExceptionBegin
  AObj.Marks := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetMinors(AObj: TChartAxis): TChartMinorAxisList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Minors;
  handleExceptionEnd
end;

procedure ChartAxis_SetMinors(AObj: TChartAxis; AValue: TChartMinorAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.Minors := AValue;
  handleExceptionEnd
end;

procedure ChartAxis_GetPosition(AObj: TChartAxis; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Position;
  handleExceptionEnd
end;

procedure ChartAxis_SetPosition(AObj: TChartAxis; AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.Position := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetPositionUnits(AObj: TChartAxis): TChartUnits; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PositionUnits;
  handleExceptionEnd
end;

procedure ChartAxis_SetPositionUnits(AObj: TChartAxis; AValue: TChartUnits); extdecl;
begin
  handleExceptionBegin
  AObj.PositionUnits := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetRange(AObj: TChartAxis): TChartRange; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Range;
  handleExceptionEnd
end;

procedure ChartAxis_SetRange(AObj: TChartAxis; AValue: TChartRange); extdecl;
begin
  handleExceptionBegin
  AObj.Range := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetTitle(AObj: TChartAxis): TChartAxisTitle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Title;
  handleExceptionEnd
end;

procedure ChartAxis_SetTitle(AObj: TChartAxis; AValue: TChartAxisTitle); extdecl;
begin
  handleExceptionBegin
  AObj.Title := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetTransformations(AObj: TChartAxis): TChartAxisTransformations; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Transformations;
  handleExceptionEnd
end;

procedure ChartAxis_SetTransformations(AObj: TChartAxis; AValue: TChartAxisTransformations); extdecl;
begin
  handleExceptionBegin
  AObj.Transformations := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetZPosition(AObj: TChartAxis): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ZPosition;
  handleExceptionEnd
end;

procedure ChartAxis_SetZPosition(AObj: TChartAxis; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.ZPosition := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TChartGetAxisMarkTextEvent
procedure ChartAxis_SetOnGetMarkText(AObj: TChartAxis; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartGetAxisMarkTextEvent_OnGetMarkText}
  {$DEFINE EventName := OnGetMarkText}
  EventMethodCode
end;

function ChartAxis_GetAlignment(AObj: TChartAxis): TChartAxisAlignment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Alignment;
  handleExceptionEnd
end;

procedure ChartAxis_SetAlignment(AObj: TChartAxis; AValue: TChartAxisAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetArrow(AObj: TChartAxis): TChartArrow; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Arrow;
  handleExceptionEnd
end;

procedure ChartAxis_SetArrow(AObj: TChartAxis; AValue: TChartArrow); extdecl;
begin
  handleExceptionBegin
  AObj.Arrow := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetGrid(AObj: TChartAxis): TChartAxisGridPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Grid;
  handleExceptionEnd
end;

procedure ChartAxis_SetGrid(AObj: TChartAxis; AValue: TChartAxisGridPen); extdecl;
begin
  handleExceptionBegin
  AObj.Grid := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetIntervals(AObj: TChartAxis): TChartAxisIntervalParams; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Intervals;
  handleExceptionEnd
end;

procedure ChartAxis_SetIntervals(AObj: TChartAxis; AValue: TChartAxisIntervalParams); extdecl;
begin
  handleExceptionBegin
  AObj.Intervals := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetTickColor(AObj: TChartAxis): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TickColor;
  handleExceptionEnd
end;

procedure ChartAxis_SetTickColor(AObj: TChartAxis; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.TickColor := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetTickInnerLength(AObj: TChartAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TickInnerLength;
  handleExceptionEnd
end;

procedure ChartAxis_SetTickInnerLength(AObj: TChartAxis; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.TickInnerLength := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetTickLength(AObj: TChartAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TickLength;
  handleExceptionEnd
end;

procedure ChartAxis_SetTickLength(AObj: TChartAxis; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.TickLength := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetVisible(AObj: TChartAxis): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartAxis_SetVisible(AObj: TChartAxis; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetCollection(AObj: TChartAxis): TCollection; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Collection;
  handleExceptionEnd
end;

procedure ChartAxis_SetCollection(AObj: TChartAxis; AValue: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.Collection := AValue;
  handleExceptionEnd
end;

function ChartAxis_GetID(AObj: TChartAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ID;
  handleExceptionEnd
end;

function ChartAxis_GetIndex(AObj: TChartAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Index;
  handleExceptionEnd
end;

procedure ChartAxis_SetIndex(AObj: TChartAxis; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Index := AValue;
  handleExceptionEnd
end;

procedure ChartAxis_Assign(AObj: TChartAxis; ASource: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(ASource);
  handleExceptionEnd
end;

function ChartAxis_GetHitTestInfoAt(AObj: TChartAxis; APoint: TPoint;ADelta: Integer): TChartAxisHitTests; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHitTestInfoAt(APoint,ADelta);
  handleExceptionEnd
end;

procedure ChartAxis_Draw(AObj: TChartAxis); extdecl;
begin
  handleExceptionBegin
  AObj.Draw();
  handleExceptionEnd
end;

procedure ChartAxis_DrawTitle(AObj: TChartAxis; ASize: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DrawTitle(ASize);
  handleExceptionEnd
end;

function ChartAxis_GetChart(AObj: TChartAxis): TCustomChart; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetChart();
  handleExceptionEnd
end;

function ChartAxis_GetTransform(AObj: TChartAxis): TChartAxisTransformations; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTransform();
  handleExceptionEnd
end;

function ChartAxis_IsDefaultPosition(AObj: TChartAxis): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDefaultPosition();
  handleExceptionEnd
end;

function ChartAxis_IsFlipped(AObj: TChartAxis): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsFlipped();
  handleExceptionEnd
end;

function ChartAxis_IsPointInside(AObj: TChartAxis; APoint: TPoint): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsPointInside(APoint);
  handleExceptionEnd
end;

function ChartAxis_IsVertical(AObj: TChartAxis): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsVertical();
  handleExceptionEnd
end;

procedure ChartAxis_Measure(AObj: TChartAxis; AExtent: TDoubleRect;AClipRect: TRect;var AMeasureData: TChartAxisGroup); extdecl;
begin
  handleExceptionBegin
  AObj.Measure(AExtent,AClipRect,AMeasureData);
  handleExceptionEnd
end;

function ChartAxis_MeasureLabelSize(AObj: TChartAxis; ADrawer: IChartDrawer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabelSize(ADrawer);
  handleExceptionEnd
end;

function ChartAxis_MeasureTitleSize(AObj: TChartAxis; ADrawer: IChartDrawer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureTitleSize(ADrawer);
  handleExceptionEnd
end;

function ChartAxis_PositionToCoord(AObj: TChartAxis; ARect: TRect): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PositionToCoord(ARect);
  handleExceptionEnd
end;

procedure ChartAxis_UpdateBidiMode(AObj: TChartAxis); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateBidiMode();
  handleExceptionEnd
end;

procedure ChartAxis_UpdateBounds(AObj: TChartAxis; var AMin, AMax: Double); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateBounds(AMin, AMax);
  handleExceptionEnd
end;

function ChartAxis_TryApplyStripes(AObj: TChartAxis; ADrawer: IChartDrawer;var AIndex: Cardinal): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TryApplyStripes(ADrawer,AIndex);
  handleExceptionEnd
end;

function ChartAxis_GetNamePath(AObj: TChartAxis): string; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNamePath();
  handleExceptionEnd
end;


exports
  ChartAxis_Create,
  ChartAxis_Free,
  ChartAxis_StaticClassType,
  ChartAxis_GetDisplayName,
  ChartAxis_GetValue,
  ChartAxis_GetValueCount,
  ChartAxis_GetAtDataOnly,
  ChartAxis_SetAtDataOnly,
  ChartAxis_GetAxisPen,
  ChartAxis_SetAxisPen,
  ChartAxis_GetGroup,
  ChartAxis_SetGroup,
  ChartAxis_GetInverted,
  ChartAxis_SetInverted,
  ChartAxis_GetLabelSize,
  ChartAxis_SetLabelSize,
  ChartAxis_GetMargin,
  ChartAxis_SetMargin,
  ChartAxis_GetMarginsForMarks,
  ChartAxis_SetMarginsForMarks,
  ChartAxis_GetMarks,
  ChartAxis_SetMarks,
  ChartAxis_GetMinors,
  ChartAxis_SetMinors,
  ChartAxis_GetPosition,
  ChartAxis_SetPosition,
  ChartAxis_GetPositionUnits,
  ChartAxis_SetPositionUnits,
  ChartAxis_GetRange,
  ChartAxis_SetRange,
  ChartAxis_GetTitle,
  ChartAxis_SetTitle,
  ChartAxis_GetTransformations,
  ChartAxis_SetTransformations,
  ChartAxis_GetZPosition,
  ChartAxis_SetZPosition,
  ChartAxis_SetOnGetMarkText,
  ChartAxis_GetAlignment,
  ChartAxis_SetAlignment,
  ChartAxis_GetArrow,
  ChartAxis_SetArrow,
  ChartAxis_GetGrid,
  ChartAxis_SetGrid,
  ChartAxis_GetIntervals,
  ChartAxis_SetIntervals,
  ChartAxis_GetTickColor,
  ChartAxis_SetTickColor,
  ChartAxis_GetTickInnerLength,
  ChartAxis_SetTickInnerLength,
  ChartAxis_GetTickLength,
  ChartAxis_SetTickLength,
  ChartAxis_GetVisible,
  ChartAxis_SetVisible,
  ChartAxis_GetCollection,
  ChartAxis_SetCollection,
  ChartAxis_GetID,
  ChartAxis_GetIndex,
  ChartAxis_SetIndex,
  ChartAxis_Assign,
  ChartAxis_GetHitTestInfoAt,
  ChartAxis_Draw,
  ChartAxis_DrawTitle,
  ChartAxis_GetChart,
  ChartAxis_GetTransform,
  ChartAxis_IsDefaultPosition,
  ChartAxis_IsFlipped,
  ChartAxis_IsPointInside,
  ChartAxis_IsVertical,
  ChartAxis_Measure,
  ChartAxis_MeasureLabelSize,
  ChartAxis_MeasureTitleSize,
  ChartAxis_PositionToCoord,
  ChartAxis_UpdateBidiMode,
  ChartAxis_UpdateBounds,
  ChartAxis_TryApplyStripes,
  ChartAxis_GetNamePath;



