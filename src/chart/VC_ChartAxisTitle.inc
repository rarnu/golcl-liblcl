function ChartAxisTitle_Create(AOwner: TCustomChart): TChartAxisTitle; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartAxisTitle.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartAxisTitle_Free(AObj: TChartAxisTitle); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartAxisTitle_StaticClassType: TClass; extdecl;
begin
  Result := TChartAxisTitle;
end;

function ChartAxisTitle_GetCaption(AObj: TChartAxisTitle): TCaption; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Caption;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetCaption(AObj: TChartAxisTitle; AValue: TCaption); extdecl;
begin
  handleExceptionBegin
  AObj.Caption := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetPositionOnMarks(AObj: TChartAxisTitle): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PositionOnMarks;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetPositionOnMarks(AObj: TChartAxisTitle; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.PositionOnMarks := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetWordwrap(AObj: TChartAxisTitle): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Wordwrap;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetWordwrap(AObj: TChartAxisTitle; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Wordwrap := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetArrow(AObj: TChartAxisTitle): TChartArrow; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Arrow;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetArrow(AObj: TChartAxisTitle; AValue: TChartArrow); extdecl;
begin
  handleExceptionBegin
  AObj.Arrow := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetAutoMargins(AObj: TChartAxisTitle): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoMargins;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetAutoMargins(AObj: TChartAxisTitle; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.AutoMargins := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetDistanceToCenter(AObj: TChartAxisTitle): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DistanceToCenter;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetDistanceToCenter(AObj: TChartAxisTitle; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.DistanceToCenter := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetFormat(AObj: TChartAxisTitle): String; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Format;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetFormat(AObj: TChartAxisTitle; AValue: String); extdecl;
begin
  handleExceptionBegin
  AObj.Format := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetFrame(AObj: TChartAxisTitle): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Frame;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetFrame(AObj: TChartAxisTitle; AValue: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.Frame := TChartAxisFramePen(AValue);
  handleExceptionEnd
end;

function ChartAxisTitle_GetLabelBrush(AObj: TChartAxisTitle): TBrush; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LabelBrush;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetLabelBrush(AObj: TChartAxisTitle; AValue: TBrush); extdecl;
begin
  handleExceptionBegin
  AObj.LabelBrush := TClearBrush(AValue);
  handleExceptionEnd
end;

function ChartAxisTitle_GetLinkDistance(AObj: TChartAxisTitle): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LinkDistance;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetLinkDistance(AObj: TChartAxisTitle; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.LinkDistance := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetLinkPen(AObj: TChartAxisTitle): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LinkPen;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetLinkPen(AObj: TChartAxisTitle; AValue: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.LinkPen := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetStyle(AObj: TChartAxisTitle): TSeriesMarksStyle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Style;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetStyle(AObj: TChartAxisTitle; AValue: TSeriesMarksStyle); extdecl;
begin
  handleExceptionBegin
  AObj.Style := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetYIndex(AObj: TChartAxisTitle): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.YIndex;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetYIndex(AObj: TChartAxisTitle; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.YIndex := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetAttachment(AObj: TChartAxisTitle): TChartMarkAttachment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Attachment;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetAttachment(AObj: TChartAxisTitle; AValue: TChartMarkAttachment); extdecl;
begin
  handleExceptionBegin
  AObj.Attachment := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetDistance(AObj: TChartAxisTitle): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Distance;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetDistance(AObj: TChartAxisTitle; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Distance := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetLabelFont(AObj: TChartAxisTitle): TFont; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LabelFont;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetLabelFont(AObj: TChartAxisTitle; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.LabelFont := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetCalloutAngle(AObj: TChartAxisTitle): Cardinal; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CalloutAngle;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetCalloutAngle(AObj: TChartAxisTitle; AValue: Cardinal); extdecl;
begin
  handleExceptionBegin
  AObj.CalloutAngle := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetClipped(AObj: TChartAxisTitle): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Clipped;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetClipped(AObj: TChartAxisTitle; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Clipped := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetOverlapPolicy(AObj: TChartAxisTitle): TChartMarksOverlapPolicy; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OverlapPolicy;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetOverlapPolicy(AObj: TChartAxisTitle; AValue: TChartMarksOverlapPolicy); extdecl;
begin
  handleExceptionBegin
  AObj.OverlapPolicy := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TChartGetShapeEvent
procedure ChartAxisTitle_SetOnGetShape(AObj: TChartAxisTitle; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartGetShapeEvent_OnGetShape}
  {$DEFINE EventName := OnGetShape}
  EventMethodCode
end;

function ChartAxisTitle_GetShape(AObj: TChartAxisTitle): TChartLabelShape; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Shape;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetShape(AObj: TChartAxisTitle; AValue: TChartLabelShape); extdecl;
begin
  handleExceptionBegin
  AObj.Shape := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetTextFormat(AObj: TChartAxisTitle): TChartTextFormat; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextFormat;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetTextFormat(AObj: TChartAxisTitle; AValue: TChartTextFormat); extdecl;
begin
  handleExceptionBegin
  AObj.TextFormat := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetAlignment(AObj: TChartAxisTitle): TAlignment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Alignment;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetAlignment(AObj: TChartAxisTitle; AValue: TAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function ChartAxisTitle_GetMargins(AObj: TChartAxisTitle): TChartLabelMargins; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Margins;
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetMargins(AObj: TChartAxisTitle; AValue: TChartLabelMargins); extdecl;
begin
  handleExceptionBegin
  AObj.Margins := AValue;
  handleExceptionEnd
end;

procedure ChartAxisTitle_CenterHeightOffset(AObj: TChartAxisTitle; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CenterHeightOffset(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartAxisTitle_CenterOffset(AObj: TChartAxisTitle; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CenterOffset(ADrawer,AText);
  handleExceptionEnd
end;

function ChartAxisTitle_IsMarkLabelsVisible(AObj: TChartAxisTitle): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsMarkLabelsVisible();
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetAdditionalAngle(AObj: TChartAxisTitle; AAngle: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetAdditionalAngle(AAngle);
  handleExceptionEnd
end;

procedure ChartAxisTitle_DrawLabel(AObj: TChartAxisTitle; ADrawer: IChartDrawer;ADataPoint, ALabelCenter: TPoint;AText: String;var APrevLabelPoly: TPointArray); extdecl;
begin
  handleExceptionBegin
  AObj.DrawLabel(ADrawer,ADataPoint, ALabelCenter,AText,APrevLabelPoly);
  handleExceptionEnd
end;

function ChartAxisTitle_GetLabelPolygon(AObj: TChartAxisTitle; ADrawer: IChartDrawer;ASize: TPoint): TPointArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLabelPolygon(ADrawer,ASize);
  handleExceptionEnd
end;

procedure ChartAxisTitle_GetTextRect(AObj: TChartAxisTitle; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextRect();
  handleExceptionEnd
end;

procedure ChartAxisTitle_MeasureLabel(AObj: TChartAxisTitle; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabel(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartAxisTitle_MeasureLabelHeight(AObj: TChartAxisTitle; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabelHeight(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartAxisTitle_SetInsideDir(AObj: TChartAxisTitle; dx, dy: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetInsideDir(dx, dy);
  handleExceptionEnd
end;


exports
  ChartAxisTitle_Create,
  ChartAxisTitle_Free,
  ChartAxisTitle_StaticClassType,
  ChartAxisTitle_GetCaption,
  ChartAxisTitle_SetCaption,
  ChartAxisTitle_GetPositionOnMarks,
  ChartAxisTitle_SetPositionOnMarks,
  ChartAxisTitle_GetWordwrap,
  ChartAxisTitle_SetWordwrap,
  ChartAxisTitle_GetArrow,
  ChartAxisTitle_SetArrow,
  ChartAxisTitle_GetAutoMargins,
  ChartAxisTitle_SetAutoMargins,
  ChartAxisTitle_GetDistanceToCenter,
  ChartAxisTitle_SetDistanceToCenter,
  ChartAxisTitle_GetFormat,
  ChartAxisTitle_SetFormat,
  ChartAxisTitle_GetFrame,
  ChartAxisTitle_SetFrame,
  ChartAxisTitle_GetLabelBrush,
  ChartAxisTitle_SetLabelBrush,
  ChartAxisTitle_GetLinkDistance,
  ChartAxisTitle_SetLinkDistance,
  ChartAxisTitle_GetLinkPen,
  ChartAxisTitle_SetLinkPen,
  ChartAxisTitle_GetStyle,
  ChartAxisTitle_SetStyle,
  ChartAxisTitle_GetYIndex,
  ChartAxisTitle_SetYIndex,
  ChartAxisTitle_GetAttachment,
  ChartAxisTitle_SetAttachment,
  ChartAxisTitle_GetDistance,
  ChartAxisTitle_SetDistance,
  ChartAxisTitle_GetLabelFont,
  ChartAxisTitle_SetLabelFont,
  ChartAxisTitle_GetCalloutAngle,
  ChartAxisTitle_SetCalloutAngle,
  ChartAxisTitle_GetClipped,
  ChartAxisTitle_SetClipped,
  ChartAxisTitle_GetOverlapPolicy,
  ChartAxisTitle_SetOverlapPolicy,
  ChartAxisTitle_SetOnGetShape,
  ChartAxisTitle_GetShape,
  ChartAxisTitle_SetShape,
  ChartAxisTitle_GetTextFormat,
  ChartAxisTitle_SetTextFormat,
  ChartAxisTitle_GetAlignment,
  ChartAxisTitle_SetAlignment,
  ChartAxisTitle_GetMargins,
  ChartAxisTitle_SetMargins,
  ChartAxisTitle_CenterHeightOffset,
  ChartAxisTitle_CenterOffset,
  ChartAxisTitle_IsMarkLabelsVisible,
  ChartAxisTitle_SetAdditionalAngle,
  ChartAxisTitle_DrawLabel,
  ChartAxisTitle_GetLabelPolygon,
  ChartAxisTitle_GetTextRect,
  ChartAxisTitle_MeasureLabel,
  ChartAxisTitle_MeasureLabelHeight,
  ChartAxisTitle_SetInsideDir;

