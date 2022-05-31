
function ChartArrow_Create(AOwner: TCustomChart): TChartArrow; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartArrow.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartArrow_Free(AObj: TChartArrow); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartArrow_StaticClassType: TClass; extdecl;
begin
  Result := TChartArrow;
end;


function ChartArrow_GetBaseLength(AObj: TChartArrow): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseLength;
  handleExceptionEnd
end;

procedure ChartArrow_SetBaseLength(AObj: TChartArrow; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.BaseLength := AValue;
  handleExceptionEnd
end;

function ChartArrow_GetInverted(AObj: TChartArrow): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Inverted;
  handleExceptionEnd
end;

procedure ChartArrow_SetInverted(AObj: TChartArrow; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Inverted := AValue;
  handleExceptionEnd
end;

function ChartArrow_GetLength(AObj: TChartArrow): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Length;
  handleExceptionEnd
end;

procedure ChartArrow_SetLength(AObj: TChartArrow; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Length := AValue;
  handleExceptionEnd
end;

function ChartArrow_GetWidth(AObj: TChartArrow): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

procedure ChartArrow_SetWidth(AObj: TChartArrow; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function ChartArrow_GetVisible(AObj: TChartArrow): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartArrow_SetVisible(AObj: TChartArrow; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

procedure ChartArrow_Draw(AObj: TChartArrow; ADrawer: IChartDrawer;AEndPos: TPoint;AAngle: Double;APen: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(ADrawer,AEndPos,AAngle,TFPCustomPen(APen));
  handleExceptionEnd
end;

function ChartArrow_GetOwner(AObj: TChartArrow): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner();
  handleExceptionEnd
end;

procedure ChartArrow_SetOwner(AObj: TChartArrow; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;

exports
  ChartArrow_Create,
  ChartArrow_Free,
  ChartArrow_StaticClassType,
  ChartArrow_GetBaseLength,
  ChartArrow_SetBaseLength,
  ChartArrow_GetInverted,
  ChartArrow_SetInverted,
  ChartArrow_GetLength,
  ChartArrow_SetLength,
  ChartArrow_GetWidth,
  ChartArrow_SetWidth,
  ChartArrow_GetVisible,
  ChartArrow_SetVisible,
  ChartArrow_Draw,
  ChartArrow_GetOwner,
  ChartArrow_SetOwner;

