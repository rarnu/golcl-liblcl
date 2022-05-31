function ChartTitle_Create(AOwner: TCustomChart): TChartTitle; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartTitle.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartTitle_Free(AObj: TChartTitle); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartTitle_StaticClassType: TClass; extdecl;
begin
  Result := TChartTitle;
end;


function ChartTitle_GetBrush(AObj: TChartTitle): TBrush; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Brush;
  handleExceptionEnd
end;

procedure ChartTitle_SetBrush(AObj: TChartTitle; AValue: TBrush); extdecl;
begin
  handleExceptionBegin
  AObj.Brush := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetFont(AObj: TChartTitle): TFont; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Font;
  handleExceptionEnd
end;

procedure ChartTitle_SetFont(AObj: TChartTitle; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.Font := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetFrame(AObj: TChartTitle): TChartTitleFramePen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Frame;
  handleExceptionEnd
end;

procedure ChartTitle_SetFrame(AObj: TChartTitle; AValue: TChartTitleFramePen); extdecl;
begin
  handleExceptionBegin
  AObj.Frame := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetMargin(AObj: TChartTitle): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Margin;
  handleExceptionEnd
end;

procedure ChartTitle_SetMargin(AObj: TChartTitle; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Margin := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetText(AObj: TChartTitle): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Text;
  handleExceptionEnd
end;

procedure ChartTitle_SetText(AObj: TChartTitle; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.Text := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetWordwrap(AObj: TChartTitle): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Wordwrap;
  handleExceptionEnd
end;

procedure ChartTitle_SetWordwrap(AObj: TChartTitle; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Wordwrap := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetCalloutAngle(AObj: TChartTitle): Cardinal; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CalloutAngle;
  handleExceptionEnd
end;

procedure ChartTitle_SetCalloutAngle(AObj: TChartTitle; AValue: Cardinal); extdecl;
begin
  handleExceptionBegin
  AObj.CalloutAngle := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetClipped(AObj: TChartTitle): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Clipped;
  handleExceptionEnd
end;

procedure ChartTitle_SetClipped(AObj: TChartTitle; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Clipped := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetOverlapPolicy(AObj: TChartTitle): TChartMarksOverlapPolicy; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OverlapPolicy;
  handleExceptionEnd
end;

procedure ChartTitle_SetOverlapPolicy(AObj: TChartTitle; AValue: TChartMarksOverlapPolicy); extdecl;
begin
  handleExceptionBegin
  AObj.OverlapPolicy := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TChartGetShapeEvent
procedure ChartTitle_SetOnGetShape(AObj: TChartTitle; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartGetShapeEvent_OnGetShape}
  {$DEFINE EventName := OnGetShape}
  EventMethodCode
end;

function ChartTitle_GetShape(AObj: TChartTitle): TChartLabelShape; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Shape;
  handleExceptionEnd
end;

procedure ChartTitle_SetShape(AObj: TChartTitle; AValue: TChartLabelShape); extdecl;
begin
  handleExceptionBegin
  AObj.Shape := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetTextFormat(AObj: TChartTitle): TChartTextFormat; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextFormat;
  handleExceptionEnd
end;

procedure ChartTitle_SetTextFormat(AObj: TChartTitle; AValue: TChartTextFormat); extdecl;
begin
  handleExceptionBegin
  AObj.TextFormat := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetAlignment(AObj: TChartTitle): TAlignment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Alignment;
  handleExceptionEnd
end;

procedure ChartTitle_SetAlignment(AObj: TChartTitle; AValue: TAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetMargins(AObj: TChartTitle): TChartLabelMargins; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Margins;
  handleExceptionEnd
end;

procedure ChartTitle_SetMargins(AObj: TChartTitle; AValue: TChartLabelMargins); extdecl;
begin
  handleExceptionBegin
  AObj.Margins := AValue;
  handleExceptionEnd
end;

function ChartTitle_GetVisible(AObj: TChartTitle): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartTitle_SetVisible(AObj: TChartTitle; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

procedure ChartTitle_Assign(AObj: TChartTitle; ASource: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(ASource);
  handleExceptionEnd
end;

procedure ChartTitle_Draw(AObj: TChartTitle; ADrawer: IChartDrawer); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(ADrawer);
  handleExceptionEnd
end;

function ChartTitle_IsPointInBounds(AObj: TChartTitle; APoint: TPoint): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsPointInBounds(APoint);
  handleExceptionEnd
end;

procedure ChartTitle_Measure(AObj: TChartTitle; ADrawer: IChartDrawer;ADir, ALeft, ARight: Integer;var AY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Measure(ADrawer,ADir, ALeft, ARight,AY);
  handleExceptionEnd
end;

procedure ChartTitle_UpdateBidiMode(AObj: TChartTitle); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateBidiMode();
  handleExceptionEnd
end;

procedure ChartTitle_DrawLabel(AObj: TChartTitle; ADrawer: IChartDrawer;ADataPoint, ALabelCenter: TPoint;AText: String;var APrevLabelPoly: TPointArray); extdecl;
begin
  handleExceptionBegin
  AObj.DrawLabel(ADrawer,ADataPoint, ALabelCenter,AText,APrevLabelPoly);
  handleExceptionEnd
end;

function ChartTitle_GetLabelPolygon(AObj: TChartTitle; ADrawer: IChartDrawer;ASize: TPoint): TPointArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLabelPolygon(ADrawer,ASize);
  handleExceptionEnd
end;

procedure ChartTitle_GetTextRect(AObj: TChartTitle; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextRect();
  handleExceptionEnd
end;

procedure ChartTitle_MeasureLabel(AObj: TChartTitle; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabel(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartTitle_MeasureLabelHeight(AObj: TChartTitle; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabelHeight(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartTitle_SetInsideDir(AObj: TChartTitle; dx, dy: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetInsideDir(dx, dy);
  handleExceptionEnd
end;

function ChartTitle_GetOwner(AObj: TChartTitle): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner();
  handleExceptionEnd
end;

procedure ChartTitle_SetOwner(AObj: TChartTitle; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;

exports
  ChartTitle_Create,
  ChartTitle_Free,
  ChartTitle_StaticClassType,
  ChartTitle_GetBrush,
  ChartTitle_SetBrush,
  ChartTitle_GetFont,
  ChartTitle_SetFont,
  ChartTitle_GetFrame,
  ChartTitle_SetFrame,
  ChartTitle_GetMargin,
  ChartTitle_SetMargin,
  ChartTitle_GetText,
  ChartTitle_SetText,
  ChartTitle_GetWordwrap,
  ChartTitle_SetWordwrap,
  ChartTitle_GetCalloutAngle,
  ChartTitle_SetCalloutAngle,
  ChartTitle_GetClipped,
  ChartTitle_SetClipped,
  ChartTitle_GetOverlapPolicy,
  ChartTitle_SetOverlapPolicy,
  ChartTitle_SetOnGetShape,
  ChartTitle_GetShape,
  ChartTitle_SetShape,
  ChartTitle_GetTextFormat,
  ChartTitle_SetTextFormat,
  ChartTitle_GetAlignment,
  ChartTitle_SetAlignment,
  ChartTitle_GetMargins,
  ChartTitle_SetMargins,
  ChartTitle_GetVisible,
  ChartTitle_SetVisible,
  ChartTitle_Assign,
  ChartTitle_Draw,
  ChartTitle_IsPointInBounds,
  ChartTitle_Measure,
  ChartTitle_UpdateBidiMode,
  ChartTitle_DrawLabel,
  ChartTitle_GetLabelPolygon,
  ChartTitle_GetTextRect,
  ChartTitle_MeasureLabel,
  ChartTitle_MeasureLabelHeight,
  ChartTitle_SetInsideDir,
  ChartTitle_GetOwner,
  ChartTitle_SetOwner;
