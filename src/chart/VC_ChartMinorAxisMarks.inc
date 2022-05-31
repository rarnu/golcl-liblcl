
function ChartMinorAxisMarks_Create(AOwner: TCustomChart): TChartMinorAxisMarks; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartMinorAxisMarks.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_Free(AObj: TChartMinorAxisMarks); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_StaticClassType: TClass; extdecl;
begin
  Result := TChartMinorAxisMarks;
end;

function ChartMinorAxisMarks_GetDefaultSource(AObj: TChartMinorAxisMarks): TIntervalChartSource; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DefaultSource;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetSourceExchangeXY(AObj: TChartMinorAxisMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SourceExchangeXY;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetSourceExchangeXY(AObj: TChartMinorAxisMarks; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.SourceExchangeXY := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetStripes(AObj: TChartMinorAxisMarks): TChartStyles; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Stripes;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetStripes(AObj: TChartMinorAxisMarks; AValue: TChartStyles); extdecl;
begin
  handleExceptionBegin
  AObj.Stripes := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetArrow(AObj: TChartMinorAxisMarks): TChartArrow; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Arrow;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetArrow(AObj: TChartMinorAxisMarks; AValue: TChartArrow); extdecl;
begin
  handleExceptionBegin
  AObj.Arrow := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetAutoMargins(AObj: TChartMinorAxisMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoMargins;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetAutoMargins(AObj: TChartMinorAxisMarks; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.AutoMargins := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetDistanceToCenter(AObj: TChartMinorAxisMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DistanceToCenter;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetDistanceToCenter(AObj: TChartMinorAxisMarks; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.DistanceToCenter := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetFormat(AObj: TChartMinorAxisMarks): String; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Format;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetFormat(AObj: TChartMinorAxisMarks; AValue: String); extdecl;
begin
  handleExceptionBegin
  AObj.Format := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetFrame(AObj: TChartMinorAxisMarks): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Frame;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetFrame(AObj: TChartMinorAxisMarks; AValue: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.Frame := TChartAxisFramePen(AValue);
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetLabelBrush(AObj: TChartMinorAxisMarks): TChartAxisBrush; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LabelBrush;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetLabelBrush(AObj: TChartMinorAxisMarks; AValue: TChartAxisBrush); extdecl;
begin
  handleExceptionBegin
  AObj.LabelBrush := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetLinkDistance(AObj: TChartMinorAxisMarks): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LinkDistance;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetLinkDistance(AObj: TChartMinorAxisMarks; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.LinkDistance := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetLinkPen(AObj: TChartMinorAxisMarks): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LinkPen;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetLinkPen(AObj: TChartMinorAxisMarks; AValue: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.LinkPen := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetStyle(AObj: TChartMinorAxisMarks): TSeriesMarksStyle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Style;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetStyle(AObj: TChartMinorAxisMarks; AValue: TSeriesMarksStyle); extdecl;
begin
  handleExceptionBegin
  AObj.Style := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetYIndex(AObj: TChartMinorAxisMarks): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.YIndex;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetYIndex(AObj: TChartMinorAxisMarks; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.YIndex := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetAttachment(AObj: TChartMinorAxisMarks): TChartMarkAttachment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Attachment;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetAttachment(AObj: TChartMinorAxisMarks; AValue: TChartMarkAttachment); extdecl;
begin
  handleExceptionBegin
  AObj.Attachment := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetDistance(AObj: TChartMinorAxisMarks): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Distance;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetDistance(AObj: TChartMinorAxisMarks; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Distance := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetLabelFont(AObj: TChartMinorAxisMarks): TFont; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LabelFont;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetLabelFont(AObj: TChartMinorAxisMarks; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.LabelFont := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetCalloutAngle(AObj: TChartMinorAxisMarks): Cardinal; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CalloutAngle;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetCalloutAngle(AObj: TChartMinorAxisMarks; AValue: Cardinal); extdecl;
begin
  handleExceptionBegin
  AObj.CalloutAngle := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetClipped(AObj: TChartMinorAxisMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Clipped;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetClipped(AObj: TChartMinorAxisMarks; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Clipped := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetOverlapPolicy(AObj: TChartMinorAxisMarks): TChartMarksOverlapPolicy; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OverlapPolicy;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetOverlapPolicy(AObj: TChartMinorAxisMarks; AValue: TChartMarksOverlapPolicy); extdecl;
begin
  handleExceptionBegin
  AObj.OverlapPolicy := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TChartGetShapeEvent
procedure ChartMinorAxisMarks_SetOnGetShape(AObj: TChartMinorAxisMarks; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartGetShapeEvent_OnGetShape}
  {$DEFINE EventName := OnGetShape}
  EventMethodCode
end;

function ChartMinorAxisMarks_GetShape(AObj: TChartMinorAxisMarks): TChartLabelShape; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Shape;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetShape(AObj: TChartMinorAxisMarks; AValue: TChartLabelShape); extdecl;
begin
  handleExceptionBegin
  AObj.Shape := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetTextFormat(AObj: TChartMinorAxisMarks): TChartTextFormat; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextFormat;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetTextFormat(AObj: TChartMinorAxisMarks; AValue: TChartTextFormat); extdecl;
begin
  handleExceptionBegin
  AObj.TextFormat := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetAlignment(AObj: TChartMinorAxisMarks): TAlignment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Alignment;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetAlignment(AObj: TChartMinorAxisMarks; AValue: TAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetMargins(AObj: TChartMinorAxisMarks): TChartLabelMargins; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Margins;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetMargins(AObj: TChartMinorAxisMarks; AValue: TChartLabelMargins); extdecl;
begin
  handleExceptionBegin
  AObj.Margins := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetVisible(AObj: TChartMinorAxisMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetVisible(AObj: TChartMinorAxisMarks; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function ChartMinorAxisMarks_Measure(AObj: TChartMinorAxisMarks; ADrawer: IChartDrawer;AIsVertical: Boolean;ATickLength: Integer;AValues: TChartValueTextArray): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Measure(ADrawer,AIsVertical,ATickLength,AValues);
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_Assign(AObj: TChartMinorAxisMarks; ASource: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(ASource);
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_CenterHeightOffset(AObj: TChartMinorAxisMarks; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CenterHeightOffset(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_CenterOffset(AObj: TChartMinorAxisMarks; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CenterOffset(ADrawer,AText);
  handleExceptionEnd
end;

function ChartMinorAxisMarks_IsMarkLabelsVisible(AObj: TChartMinorAxisMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsMarkLabelsVisible();
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetAdditionalAngle(AObj: TChartMinorAxisMarks; AAngle: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetAdditionalAngle(AAngle);
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_DrawLabel(AObj: TChartMinorAxisMarks; ADrawer: IChartDrawer;ADataPoint, ALabelCenter: TPoint;AText: String;var APrevLabelPoly: TPointArray); extdecl;
begin
  handleExceptionBegin
  AObj.DrawLabel(ADrawer,ADataPoint, ALabelCenter,AText,APrevLabelPoly);
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetLabelPolygon(AObj: TChartMinorAxisMarks; ADrawer: IChartDrawer;ASize: TPoint): TPointArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLabelPolygon(ADrawer,ASize);
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_GetTextRect(AObj: TChartMinorAxisMarks; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextRect();
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_MeasureLabel(AObj: TChartMinorAxisMarks; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabel(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_MeasureLabelHeight(AObj: TChartMinorAxisMarks; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabelHeight(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetInsideDir(AObj: TChartMinorAxisMarks; dx, dy: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetInsideDir(dx, dy);
  handleExceptionEnd
end;

function ChartMinorAxisMarks_GetOwner(AObj: TChartMinorAxisMarks): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner();
  handleExceptionEnd
end;

procedure ChartMinorAxisMarks_SetOwner(AObj: TChartMinorAxisMarks; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;


exports
  ChartMinorAxisMarks_Create,
  ChartMinorAxisMarks_Free,
  ChartMinorAxisMarks_StaticClassType,
  ChartMinorAxisMarks_GetDefaultSource,
  ChartMinorAxisMarks_GetSourceExchangeXY,
  ChartMinorAxisMarks_SetSourceExchangeXY,
  ChartMinorAxisMarks_GetStripes,
  ChartMinorAxisMarks_SetStripes,
  ChartMinorAxisMarks_GetArrow,
  ChartMinorAxisMarks_SetArrow,
  ChartMinorAxisMarks_GetAutoMargins,
  ChartMinorAxisMarks_SetAutoMargins,
  ChartMinorAxisMarks_GetDistanceToCenter,
  ChartMinorAxisMarks_SetDistanceToCenter,
  ChartMinorAxisMarks_GetFormat,
  ChartMinorAxisMarks_SetFormat,
  ChartMinorAxisMarks_GetFrame,
  ChartMinorAxisMarks_SetFrame,
  ChartMinorAxisMarks_GetLabelBrush,
  ChartMinorAxisMarks_SetLabelBrush,
  ChartMinorAxisMarks_GetLinkDistance,
  ChartMinorAxisMarks_SetLinkDistance,
  ChartMinorAxisMarks_GetLinkPen,
  ChartMinorAxisMarks_SetLinkPen,
  ChartMinorAxisMarks_GetStyle,
  ChartMinorAxisMarks_SetStyle,
  ChartMinorAxisMarks_GetYIndex,
  ChartMinorAxisMarks_SetYIndex,
  ChartMinorAxisMarks_GetAttachment,
  ChartMinorAxisMarks_SetAttachment,
  ChartMinorAxisMarks_GetDistance,
  ChartMinorAxisMarks_SetDistance,
  ChartMinorAxisMarks_GetLabelFont,
  ChartMinorAxisMarks_SetLabelFont,
  ChartMinorAxisMarks_GetCalloutAngle,
  ChartMinorAxisMarks_SetCalloutAngle,
  ChartMinorAxisMarks_GetClipped,
  ChartMinorAxisMarks_SetClipped,
  ChartMinorAxisMarks_GetOverlapPolicy,
  ChartMinorAxisMarks_SetOverlapPolicy,
  ChartMinorAxisMarks_SetOnGetShape,
  ChartMinorAxisMarks_GetShape,
  ChartMinorAxisMarks_SetShape,
  ChartMinorAxisMarks_GetTextFormat,
  ChartMinorAxisMarks_SetTextFormat,
  ChartMinorAxisMarks_GetAlignment,
  ChartMinorAxisMarks_SetAlignment,
  ChartMinorAxisMarks_GetMargins,
  ChartMinorAxisMarks_SetMargins,
  ChartMinorAxisMarks_GetVisible,
  ChartMinorAxisMarks_SetVisible,
  ChartMinorAxisMarks_Measure,
  ChartMinorAxisMarks_Assign,
  ChartMinorAxisMarks_CenterHeightOffset,
  ChartMinorAxisMarks_CenterOffset,
  ChartMinorAxisMarks_IsMarkLabelsVisible,
  ChartMinorAxisMarks_SetAdditionalAngle,
  ChartMinorAxisMarks_DrawLabel,
  ChartMinorAxisMarks_GetLabelPolygon,
  ChartMinorAxisMarks_GetTextRect,
  ChartMinorAxisMarks_MeasureLabel,
  ChartMinorAxisMarks_MeasureLabelHeight,
  ChartMinorAxisMarks_SetInsideDir,
  ChartMinorAxisMarks_GetOwner,
  ChartMinorAxisMarks_SetOwner;
