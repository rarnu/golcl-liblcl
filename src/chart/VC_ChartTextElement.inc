
function ChartTextElement_Create(AOwner: TCustomChart): TChartTextElement; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartTextElement.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartTextElement_Free(AObj: TChartTextElement); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartTextElement_StaticClassType: TClass; extdecl;
begin
  Result := TChartTextElement;
end;

function ChartTextElement_GetCalloutAngle(AObj: TChartTextElement): Cardinal; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CalloutAngle;
  handleExceptionEnd
end;

procedure ChartTextElement_SetCalloutAngle(AObj: TChartTextElement; AValue: Cardinal); extdecl;
begin
  handleExceptionBegin
  AObj.CalloutAngle := AValue;
  handleExceptionEnd
end;

function ChartTextElement_GetClipped(AObj: TChartTextElement): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Clipped;
  handleExceptionEnd
end;

procedure ChartTextElement_SetClipped(AObj: TChartTextElement; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Clipped := AValue;
  handleExceptionEnd
end;

function ChartTextElement_GetOverlapPolicy(AObj: TChartTextElement): TChartMarksOverlapPolicy; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OverlapPolicy;
  handleExceptionEnd
end;

procedure ChartTextElement_SetOverlapPolicy(AObj: TChartTextElement; AValue: TChartMarksOverlapPolicy); extdecl;
begin
  handleExceptionBegin
  AObj.OverlapPolicy := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TChartGetShapeEvent
procedure ChartTextElement_SetOnGetShape(AObj: TChartTextElement; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartGetShapeEvent_OnGetShape}
  {$DEFINE EventName := OnGetShape}
  EventMethodCode
end;

function ChartTextElement_GetShape(AObj: TChartTextElement): TChartLabelShape; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Shape;
  handleExceptionEnd
end;

procedure ChartTextElement_SetShape(AObj: TChartTextElement; AValue: TChartLabelShape); extdecl;
begin
  handleExceptionBegin
  AObj.Shape := AValue;
  handleExceptionEnd
end;

function ChartTextElement_GetTextFormat(AObj: TChartTextElement): TChartTextFormat; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextFormat;
  handleExceptionEnd
end;

procedure ChartTextElement_SetTextFormat(AObj: TChartTextElement; AValue: TChartTextFormat); extdecl;
begin
  handleExceptionBegin
  AObj.TextFormat := AValue;
  handleExceptionEnd
end;

function ChartTextElement_GetAlignment(AObj: TChartTextElement): TAlignment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Alignment;
  handleExceptionEnd
end;

procedure ChartTextElement_SetAlignment(AObj: TChartTextElement; AValue: TAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function ChartTextElement_GetMargins(AObj: TChartTextElement): TChartLabelMargins; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Margins;
  handleExceptionEnd
end;

procedure ChartTextElement_SetMargins(AObj: TChartTextElement; AValue: TChartLabelMargins); extdecl;
begin
  handleExceptionBegin
  AObj.Margins := AValue;
  handleExceptionEnd
end;

function ChartTextElement_GetVisible(AObj: TChartTextElement): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartTextElement_SetVisible(AObj: TChartTextElement; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

procedure ChartTextElement_Assign(AObj: TChartTextElement; ASource: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(ASource);
  handleExceptionEnd
end;

procedure ChartTextElement_DrawLabel(AObj: TChartTextElement; ADrawer: IChartDrawer;ADataPoint, ALabelCenter: TPoint;AText: String;var APrevLabelPoly: TPointArray); extdecl;
begin
  handleExceptionBegin
  AObj.DrawLabel(ADrawer,ADataPoint, ALabelCenter,AText,APrevLabelPoly);
  handleExceptionEnd
end;

function ChartTextElement_GetLabelPolygon(AObj: TChartTextElement; ADrawer: IChartDrawer;ASize: TPoint): TPointArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLabelPolygon(ADrawer,ASize);
  handleExceptionEnd
end;

procedure ChartTextElement_GetTextRect(AObj: TChartTextElement; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextRect();
  handleExceptionEnd
end;

procedure ChartTextElement_MeasureLabel(AObj: TChartTextElement; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabel(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartTextElement_MeasureLabelHeight(AObj: TChartTextElement; ADrawer: IChartDrawer;AText: String; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MeasureLabelHeight(ADrawer,AText);
  handleExceptionEnd
end;

procedure ChartTextElement_SetInsideDir(AObj: TChartTextElement; dx, dy: Double); extdecl;
begin
  handleExceptionBegin
  AObj.SetInsideDir(dx, dy);
  handleExceptionEnd
end;

function ChartTextElement_GetOwner(AObj: TChartTextElement): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner();
  handleExceptionEnd
end;

procedure ChartTextElement_SetOwner(AObj: TChartTextElement; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;

exports
  ChartTextElement_Create,
  ChartTextElement_Free,
  ChartTextElement_StaticClassType,
  ChartTextElement_GetCalloutAngle,
  ChartTextElement_SetCalloutAngle,
  ChartTextElement_GetClipped,
  ChartTextElement_SetClipped,
  ChartTextElement_GetOverlapPolicy,
  ChartTextElement_SetOverlapPolicy,
  ChartTextElement_SetOnGetShape,
  ChartTextElement_GetShape,
  ChartTextElement_SetShape,
  ChartTextElement_GetTextFormat,
  ChartTextElement_SetTextFormat,
  ChartTextElement_GetAlignment,
  ChartTextElement_SetAlignment,
  ChartTextElement_GetMargins,
  ChartTextElement_SetMargins,
  ChartTextElement_GetVisible,
  ChartTextElement_SetVisible,
  ChartTextElement_Assign,
  ChartTextElement_DrawLabel,
  ChartTextElement_GetLabelPolygon,
  ChartTextElement_GetTextRect,
  ChartTextElement_MeasureLabel,
  ChartTextElement_MeasureLabelHeight,
  ChartTextElement_SetInsideDir,
  ChartTextElement_GetOwner,
  ChartTextElement_SetOwner;
