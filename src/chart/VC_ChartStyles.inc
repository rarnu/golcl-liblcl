
function ChartStyles_Create(AOwner: TCustomChart): TChartStyles; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartStyles.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartStyles_Free(AObj: TChartStyles); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartStyles_StaticClassType: TClass; extdecl;
begin
  Result := TChartStyles;
end;

function ChartStyles_GetBroadcaster(AObj: TChartStyles): TBroadcaster; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Broadcaster;
  handleExceptionEnd
end;

function ChartStyles_GetStyles(AObj: TChartStyles): TChartStyleList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Styles;
  handleExceptionEnd
end;

procedure ChartStyles_SetStyles(AObj: TChartStyles; AValue: TChartStyleList); extdecl;
begin
  handleExceptionBegin
  AObj.Styles := AValue;
  handleExceptionEnd
end;

function ChartStyles_Add(AObj: TChartStyles): TChartStyle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

procedure ChartStyles_Apply(AObj: TChartStyles; ADrawer: IChartDrawer;AIndex: Cardinal;IgnoreBrush: Boolean = false); extdecl;
begin
  handleExceptionBegin
  AObj.Apply(ADrawer,AIndex,IgnoreBrush);
  handleExceptionEnd
end;

function ChartStyles_StyleByIndex(AObj: TChartStyles; AIndex: Cardinal): TChartStyle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StyleByIndex(AIndex);
  handleExceptionEnd
end;


exports
  ChartStyles_Create,
  ChartStyles_Free,
  ChartStyles_StaticClassType,
  ChartStyles_GetBroadcaster,
  ChartStyles_GetStyles,
  ChartStyles_SetStyles,
  ChartStyles_Add,
  ChartStyles_Apply,
  ChartStyles_StyleByIndex;


