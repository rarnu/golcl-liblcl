
function SeriesPointer_Create(AOwner: TCustomChart): TSeriesPointer; extdecl;
begin
  handleExceptionBegin
  Result :=  TSeriesPointer.Create(AOwner);
  handleExceptionEnd
end;

procedure SeriesPointer_Free(AObj: TSeriesPointer); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SeriesPointer_StaticClassType: TClass; extdecl;
begin
  Result := TSeriesPointer;
end;

function SeriesPointer_GetBrush(AObj: TSeriesPointer): TBrush; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Brush;
  handleExceptionEnd
end;

procedure SeriesPointer_SetBrush(AObj: TSeriesPointer; AValue: TBrush); extdecl;
begin
  handleExceptionBegin
  AObj.Brush := AValue;
  handleExceptionEnd
end;

function SeriesPointer_GetHorizSize(AObj: TSeriesPointer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HorizSize;
  handleExceptionEnd
end;

procedure SeriesPointer_SetHorizSize(AObj: TSeriesPointer; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.HorizSize := AValue;
  handleExceptionEnd
end;

function SeriesPointer_GetOverrideColor(AObj: TSeriesPointer): TOverrideColors; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OverrideColor;
  handleExceptionEnd
end;

procedure SeriesPointer_SetOverrideColor(AObj: TSeriesPointer; AValue: TOverrideColors); extdecl;
begin
  handleExceptionBegin
  AObj.OverrideColor := AValue;
  handleExceptionEnd
end;

function SeriesPointer_GetPen(AObj: TSeriesPointer): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Pen;
  handleExceptionEnd
end;

procedure SeriesPointer_SetPen(AObj: TSeriesPointer; AValue: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.Pen := AValue;
  handleExceptionEnd
end;

function SeriesPointer_GetStyle(AObj: TSeriesPointer): TSeriesPointerStyle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Style;
  handleExceptionEnd
end;

procedure SeriesPointer_SetStyle(AObj: TSeriesPointer; AValue: TSeriesPointerStyle); extdecl;
begin
  handleExceptionBegin
  AObj.Style := AValue;
  handleExceptionEnd
end;

function SeriesPointer_GetVertSize(AObj: TSeriesPointer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VertSize;
  handleExceptionEnd
end;

procedure SeriesPointer_SetVertSize(AObj: TSeriesPointer; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.VertSize := AValue;
  handleExceptionEnd
end;

function SeriesPointer_GetVisible(AObj: TSeriesPointer): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure SeriesPointer_SetVisible(AObj: TSeriesPointer; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function SeriesPointer_GetOwner(AObj: TSeriesPointer): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner();
  handleExceptionEnd
end;

procedure SeriesPointer_SetOwner(AObj: TSeriesPointer; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;


exports
  SeriesPointer_Create,
  SeriesPointer_Free,
  SeriesPointer_StaticClassType,
  SeriesPointer_GetBrush,
  SeriesPointer_SetBrush,
  SeriesPointer_GetHorizSize,
  SeriesPointer_SetHorizSize,
  SeriesPointer_GetOverrideColor,
  SeriesPointer_SetOverrideColor,
  SeriesPointer_GetPen,
  SeriesPointer_SetPen,
  SeriesPointer_GetStyle,
  SeriesPointer_SetStyle,
  SeriesPointer_GetVertSize,
  SeriesPointer_SetVertSize,
  SeriesPointer_GetVisible,
  SeriesPointer_SetVisible,
  SeriesPointer_GetOwner,
  SeriesPointer_SetOwner;



