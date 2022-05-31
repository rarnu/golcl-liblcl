function ChartMinorAxis_Create(AOwner: TCollection): TChartMinorAxis; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartMinorAxis.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartMinorAxis_Free(AObj: TChartMinorAxis); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartMinorAxis_StaticClassType: TClass; extdecl;
begin
  Result := TChartMinorAxis;
end;

function ChartMinorAxis_GetMarks(AObj: TChartMinorAxis): TChartMinorAxisMarks; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Marks;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetMarks(AObj: TChartMinorAxis; AValue: TChartMinorAxisMarks); extdecl;
begin
  handleExceptionBegin
  AObj.Marks := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_GetAlignment(AObj: TChartMinorAxis): TChartAxisAlignment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Alignment;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetAlignment(AObj: TChartMinorAxis; AValue: TChartAxisAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_GetArrow(AObj: TChartMinorAxis): TChartArrow; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Arrow;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetArrow(AObj: TChartMinorAxis; AValue: TChartArrow); extdecl;
begin
  handleExceptionBegin
  AObj.Arrow := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_GetGrid(AObj: TChartMinorAxis): TChartAxisGridPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Grid;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetGrid(AObj: TChartMinorAxis; AValue: TChartAxisGridPen); extdecl;
begin
  handleExceptionBegin
  AObj.Grid := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_GetIntervals(AObj: TChartMinorAxis): TChartAxisIntervalParams; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Intervals;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetIntervals(AObj: TChartMinorAxis; AValue: TChartAxisIntervalParams); extdecl;
begin
  handleExceptionBegin
  AObj.Intervals := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_GetTickColor(AObj: TChartMinorAxis): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TickColor;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetTickColor(AObj: TChartMinorAxis; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.TickColor := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_GetTickInnerLength(AObj: TChartMinorAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TickInnerLength;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetTickInnerLength(AObj: TChartMinorAxis; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.TickInnerLength := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_GetTickLength(AObj: TChartMinorAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TickLength;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetTickLength(AObj: TChartMinorAxis; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.TickLength := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_GetVisible(AObj: TChartMinorAxis): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetVisible(AObj: TChartMinorAxis; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_IsFlipped(AObj: TChartMinorAxis): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsFlipped();
  handleExceptionEnd
end;

function ChartMinorAxis_TryApplyStripes(AObj: TChartMinorAxis; ADrawer: IChartDrawer;var AIndex: Cardinal): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TryApplyStripes(ADrawer,AIndex);
  handleExceptionEnd
end;

function ChartMinorAxis_GetNamePath(AObj: TChartMinorAxis): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartMinorAxis_Assign(AObj: TChartMinorAxis; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxis_ClassType(AObj: TChartMinorAxis): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxis_ClassName(AObj: TChartMinorAxis): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxis_InstanceSize(AObj: TChartMinorAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxis_InheritsFrom(AObj: TChartMinorAxis; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxis_Equals(AObj: TChartMinorAxis; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxis_GetHashCode(AObj: TChartMinorAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartMinorAxis_ToString(AObj: TChartMinorAxis): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function ChartMinorAxis_GetCollection(AObj: TChartMinorAxis): TCollection; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Collection;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetCollection(AObj: TChartMinorAxis; AValue: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.Collection := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_GetIndex(AObj: TChartMinorAxis): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Index;
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetIndex(AObj: TChartMinorAxis; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Index := AValue;
  handleExceptionEnd
end;

function ChartMinorAxis_GetDisplayName(AObj: TChartMinorAxis): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.DisplayName);
  handleExceptionEnd
end;

procedure ChartMinorAxis_SetDisplayName(AObj: TChartMinorAxis; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DisplayName := AValue;
  handleExceptionEnd
end;


exports
  ChartMinorAxis_Create,
  ChartMinorAxis_Free,
  ChartMinorAxis_StaticClassType,
  ChartMinorAxis_GetMarks,
  ChartMinorAxis_SetMarks,
  ChartMinorAxis_GetAlignment,
  ChartMinorAxis_SetAlignment,
  ChartMinorAxis_GetArrow,
  ChartMinorAxis_SetArrow,
  ChartMinorAxis_GetGrid,
  ChartMinorAxis_SetGrid,
  ChartMinorAxis_GetIntervals,
  ChartMinorAxis_SetIntervals,
  ChartMinorAxis_GetTickColor,
  ChartMinorAxis_SetTickColor,
  ChartMinorAxis_GetTickInnerLength,
  ChartMinorAxis_SetTickInnerLength,
  ChartMinorAxis_GetTickLength,
  ChartMinorAxis_SetTickLength,
  ChartMinorAxis_GetVisible,
  ChartMinorAxis_SetVisible,
  ChartMinorAxis_IsFlipped,
  ChartMinorAxis_TryApplyStripes,
  ChartMinorAxis_GetNamePath,
  ChartMinorAxis_Assign,
  ChartMinorAxis_ClassType,
  ChartMinorAxis_ClassName,
  ChartMinorAxis_InstanceSize,
  ChartMinorAxis_InheritsFrom,
  ChartMinorAxis_Equals,
  ChartMinorAxis_GetHashCode,
  ChartMinorAxis_ToString,
  ChartMinorAxis_GetCollection,
  ChartMinorAxis_SetCollection,
  ChartMinorAxis_GetIndex,
  ChartMinorAxis_SetIndex,
  ChartMinorAxis_GetDisplayName,
  ChartMinorAxis_SetDisplayName;




