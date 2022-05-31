function ChartMarks_Create(AOwner: TCustomChart): TChartMarks; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartMarks.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartMarks_Free(AObj: TChartMarks); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartMarks_StaticClassType: TClass; extdecl;
begin
  Result := TChartMarks;
end;

function ChartMarks_GetArrow(AObj: TChartMarks): TChartArrow; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Arrow;
  handleExceptionEnd
end;

procedure ChartMarks_SetArrow(AObj: TChartMarks; AValue: TChartArrow); extdecl;
begin
  handleExceptionBegin
  AObj.Arrow := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetAutoMargins(AObj: TChartMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoMargins;
  handleExceptionEnd
end;

procedure ChartMarks_SetAutoMargins(AObj: TChartMarks; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.AutoMargins := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetDistanceToCenter(AObj: TChartMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DistanceToCenter;
  handleExceptionEnd
end;

procedure ChartMarks_SetDistanceToCenter(AObj: TChartMarks; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.DistanceToCenter := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetFormat(AObj: TChartMarks): String; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Format;
  handleExceptionEnd
end;

procedure ChartMarks_SetFormat(AObj: TChartMarks; AValue: String); extdecl;
begin
  handleExceptionBegin
  AObj.Format := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetFrame(AObj: TChartMarks): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Frame;
  handleExceptionEnd
end;

procedure ChartMarks_SetFrame(AObj: TChartMarks; AValue: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.Frame := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetLabelBrush(AObj: TChartMarks): TBrush; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LabelBrush;
  handleExceptionEnd
end;

procedure ChartMarks_SetLabelBrush(AObj: TChartMarks; AValue: TBrush); extdecl;
begin
  handleExceptionBegin
  AObj.LabelBrush := TChartLabelBrush(AValue);
  handleExceptionEnd
end;

function ChartMarks_GetLinkDistance(AObj: TChartMarks): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LinkDistance;
  handleExceptionEnd
end;

procedure ChartMarks_SetLinkDistance(AObj: TChartMarks; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.LinkDistance := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetLinkPen(AObj: TChartMarks): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LinkPen;
  handleExceptionEnd
end;

procedure ChartMarks_SetLinkPen(AObj: TChartMarks; AValue: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.LinkPen := TChartLinkPen(AValue);
  handleExceptionEnd
end;

function ChartMarks_GetStyle(AObj: TChartMarks): TSeriesMarksStyle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Style;
  handleExceptionEnd
end;

procedure ChartMarks_SetStyle(AObj: TChartMarks; AValue: TSeriesMarksStyle); extdecl;
begin
  handleExceptionBegin
  AObj.Style := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetYIndex(AObj: TChartMarks): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.YIndex;
  handleExceptionEnd
end;

procedure ChartMarks_SetYIndex(AObj: TChartMarks; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.YIndex := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetAttachment(AObj: TChartMarks): TChartMarkAttachment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Attachment;
  handleExceptionEnd
end;

procedure ChartMarks_SetAttachment(AObj: TChartMarks; AValue: TChartMarkAttachment); extdecl;
begin
  handleExceptionBegin
  AObj.Attachment := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetDistance(AObj: TChartMarks): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Distance;
  handleExceptionEnd
end;

procedure ChartMarks_SetDistance(AObj: TChartMarks; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Distance := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetLabelFont(AObj: TChartMarks): TFont; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LabelFont;
  handleExceptionEnd
end;

procedure ChartMarks_SetLabelFont(AObj: TChartMarks; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.LabelFont := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetCalloutAngle(AObj: TChartMarks): Cardinal; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CalloutAngle;
  handleExceptionEnd
end;

procedure ChartMarks_SetCalloutAngle(AObj: TChartMarks; AValue: Cardinal); extdecl;
begin
  handleExceptionBegin
  AObj.CalloutAngle := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetClipped(AObj: TChartMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Clipped;
  handleExceptionEnd
end;

procedure ChartMarks_SetClipped(AObj: TChartMarks; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Clipped := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetOverlapPolicy(AObj: TChartMarks): TChartMarksOverlapPolicy; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OverlapPolicy;
  handleExceptionEnd
end;

procedure ChartMarks_SetOverlapPolicy(AObj: TChartMarks; AValue: TChartMarksOverlapPolicy); extdecl;
begin
  handleExceptionBegin
  AObj.OverlapPolicy := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TChartGetShapeEvent
procedure ChartMarks_SetOnGetShape(AObj: TChartMarks; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartGetShapeEvent_OnGetShape}
  {$DEFINE EventName := OnGetShape}
  EventMethodCode
end;

function ChartMarks_GetShape(AObj: TChartMarks): TChartLabelShape; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Shape;
  handleExceptionEnd
end;

procedure ChartMarks_SetShape(AObj: TChartMarks; AValue: TChartLabelShape); extdecl;
begin
  handleExceptionBegin
  AObj.Shape := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetTextFormat(AObj: TChartMarks): TChartTextFormat; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextFormat;
  handleExceptionEnd
end;

procedure ChartMarks_SetTextFormat(AObj: TChartMarks; AValue: TChartTextFormat); extdecl;
begin
  handleExceptionBegin
  AObj.TextFormat := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetAlignment(AObj: TChartMarks): TAlignment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Alignment;
  handleExceptionEnd
end;

procedure ChartMarks_SetAlignment(AObj: TChartMarks; AValue: TAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetMargins(AObj: TChartMarks): TChartLabelMargins; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Margins;
  handleExceptionEnd
end;

procedure ChartMarks_SetMargins(AObj: TChartMarks; AValue: TChartLabelMargins); extdecl;
begin
  handleExceptionBegin
  AObj.Margins := AValue;
  handleExceptionEnd
end;

function ChartMarks_GetVisible(AObj: TChartMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartMarks_SetVisible(AObj: TChartMarks; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

procedure ChartMarks_Assign(AObj: TChartMarks; ASource: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(ASource);
  handleExceptionEnd
end;

procedure ChartMarks_CenterHeightOffset(AObj: TChartMarks; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CenterHeightOffset(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartMarks_CenterOffset(AObj: TChartMarks; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CenterOffset(ADrawer,AText);
  handleExceptionEnd
end;

function ChartMarks_IsMarkLabelsVisible(AObj: TChartMarks): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsMarkLabelsVisible();
  handleExceptionEnd
end;

procedure ChartMarks_SetAdditionalAngle(AObj: TChartMarks; AAngle: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetAdditionalAngle(AAngle);
  handleExceptionEnd
end;

procedure ChartMarks_DrawLabel(AObj: TChartMarks; ADrawer: IChartDrawer;ADataPoint, ALabelCenter: TPoint;AText: String;var APrevLabelPoly: TPointArray); extdecl;
begin
  handleExceptionBegin
  AObj.DrawLabel(ADrawer,ADataPoint, ALabelCenter,AText,APrevLabelPoly);
  handleExceptionEnd
end;

function ChartMarks_GetLabelPolygon(AObj: TChartMarks; ADrawer: IChartDrawer;ASize: TPoint): TPointArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLabelPolygon(ADrawer,ASize);
  handleExceptionEnd
end;

procedure ChartMarks_GetTextRect(AObj: TChartMarks; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextRect();
  handleExceptionEnd
end;

procedure ChartMarks_MeasureLabel(AObj: TChartMarks; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabel(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartMarks_MeasureLabelHeight(AObj: TChartMarks; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabelHeight(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartMarks_SetInsideDir(AObj: TChartMarks; dx, dy: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetInsideDir(dx, dy);
  handleExceptionEnd
end;

function ChartMarks_GetOwner(AObj: TChartMarks): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner();
  handleExceptionEnd
end;

procedure ChartMarks_SetOwner(AObj: TChartMarks; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;


exports
  ChartMarks_Create,
  ChartMarks_Free,
  ChartMarks_StaticClassType,
  ChartMarks_GetArrow,
  ChartMarks_SetArrow,
  ChartMarks_GetAutoMargins,
  ChartMarks_SetAutoMargins,
  ChartMarks_GetDistanceToCenter,
  ChartMarks_SetDistanceToCenter,
  ChartMarks_GetFormat,
  ChartMarks_SetFormat,
  ChartMarks_GetFrame,
  ChartMarks_SetFrame,
  ChartMarks_GetLabelBrush,
  ChartMarks_SetLabelBrush,
  ChartMarks_GetLinkDistance,
  ChartMarks_SetLinkDistance,
  ChartMarks_GetLinkPen,
  ChartMarks_SetLinkPen,
  ChartMarks_GetStyle,
  ChartMarks_SetStyle,
  ChartMarks_GetYIndex,
  ChartMarks_SetYIndex,
  ChartMarks_GetAttachment,
  ChartMarks_SetAttachment,
  ChartMarks_GetDistance,
  ChartMarks_SetDistance,
  ChartMarks_GetLabelFont,
  ChartMarks_SetLabelFont,
  ChartMarks_GetCalloutAngle,
  ChartMarks_SetCalloutAngle,
  ChartMarks_GetClipped,
  ChartMarks_SetClipped,
  ChartMarks_GetOverlapPolicy,
  ChartMarks_SetOverlapPolicy,
  ChartMarks_SetOnGetShape,
  ChartMarks_GetShape,
  ChartMarks_SetShape,
  ChartMarks_GetTextFormat,
  ChartMarks_SetTextFormat,
  ChartMarks_GetAlignment,
  ChartMarks_SetAlignment,
  ChartMarks_GetMargins,
  ChartMarks_SetMargins,
  ChartMarks_GetVisible,
  ChartMarks_SetVisible,
  ChartMarks_Assign,
  ChartMarks_CenterHeightOffset,
  ChartMarks_CenterOffset,
  ChartMarks_IsMarkLabelsVisible,
  ChartMarks_SetAdditionalAngle,
  ChartMarks_DrawLabel,
  ChartMarks_GetLabelPolygon,
  ChartMarks_GetTextRect,
  ChartMarks_MeasureLabel,
  ChartMarks_MeasureLabelHeight,
  ChartMarks_SetInsideDir,
  ChartMarks_GetOwner,
  ChartMarks_SetOwner;


