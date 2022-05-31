
function ChartStyle_Create(AOwner: TCollection): TChartStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartStyle.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartStyle_Free(AObj: TChartStyle); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartStyle_StaticClassType: TClass; extdecl;
begin
  Result := TChartStyle;
end;

function ChartStyle_GetBrush(AObj: TChartStyle): TBrush; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Brush;
  handleExceptionEnd
end;

procedure ChartStyle_SetBrush(AObj: TChartStyle; AValue: TBrush); extdecl;
begin
  handleExceptionBegin
  AObj.Brush := AValue;
  handleExceptionEnd
end;

function ChartStyle_GetFont(AObj: TChartStyle): TFont; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Font;
  handleExceptionEnd
end;

procedure ChartStyle_SetFont(AObj: TChartStyle; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.Font := AValue;
  handleExceptionEnd
end;

function ChartStyle_GetPen(AObj: TChartStyle): TPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Pen;
  handleExceptionEnd
end;

procedure ChartStyle_SetPen(AObj: TChartStyle; AValue: TPen); extdecl;
begin
  handleExceptionBegin
  AObj.Pen := AValue;
  handleExceptionEnd
end;

function ChartStyle_GetRepeatCount(AObj: TChartStyle): Cardinal; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RepeatCount;
  handleExceptionEnd
end;

procedure ChartStyle_SetRepeatCount(AObj: TChartStyle; AValue: Cardinal); extdecl;
begin
  handleExceptionBegin
  AObj.RepeatCount := AValue;
  handleExceptionEnd
end;

function ChartStyle_GetText(AObj: TChartStyle): String; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Text;
  handleExceptionEnd
end;

procedure ChartStyle_SetText(AObj: TChartStyle; AValue: String); extdecl;
begin
  handleExceptionBegin
  AObj.Text := AValue;
  handleExceptionEnd
end;

function ChartStyle_GetUseBrush(AObj: TChartStyle): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseBrush;
  handleExceptionEnd
end;

procedure ChartStyle_SetUseBrush(AObj: TChartStyle; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.UseBrush := AValue;
  handleExceptionEnd
end;

function ChartStyle_GetUseFont(AObj: TChartStyle): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseFont;
  handleExceptionEnd
end;

procedure ChartStyle_SetUseFont(AObj: TChartStyle; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.UseFont := AValue;
  handleExceptionEnd
end;

function ChartStyle_GetUsePen(AObj: TChartStyle): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UsePen;
  handleExceptionEnd
end;

procedure ChartStyle_SetUsePen(AObj: TChartStyle; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.UsePen := AValue;
  handleExceptionEnd
end;

function ChartStyle_GetCollection(AObj: TChartStyle): TCollection; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Collection;
  handleExceptionEnd
end;

procedure ChartStyle_SetCollection(AObj: TChartStyle; AValue: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.Collection := AValue;
  handleExceptionEnd
end;

function ChartStyle_GetID(AObj: TChartStyle): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ID;
  handleExceptionEnd
end;

function ChartStyle_GetIndex(AObj: TChartStyle): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Index;
  handleExceptionEnd
end;

procedure ChartStyle_SetIndex(AObj: TChartStyle; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Index := AValue;
  handleExceptionEnd
end;

function ChartStyle_GetDisplayName(AObj: TChartStyle): string; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisplayName;
  handleExceptionEnd
end;

procedure ChartStyle_SetDisplayName(AObj: TChartStyle; AValue: string); extdecl;
begin
  handleExceptionBegin
  AObj.DisplayName := AValue;
  handleExceptionEnd
end;

procedure ChartStyle_Apply(AObj: TChartStyle; ADrawer: IChartDrawer;IgnoreBrush: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Apply(ADrawer,IgnoreBrush);
  handleExceptionEnd
end;

function ChartStyle_GetNamePath(AObj: TChartStyle): string; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNamePath();
  handleExceptionEnd
end;


exports
  ChartStyle_Create,
  ChartStyle_Free,
  ChartStyle_StaticClassType,
  ChartStyle_GetBrush,
  ChartStyle_SetBrush,
  ChartStyle_GetFont,
  ChartStyle_SetFont,
  ChartStyle_GetPen,
  ChartStyle_SetPen,
  ChartStyle_GetRepeatCount,
  ChartStyle_SetRepeatCount,
  ChartStyle_GetText,
  ChartStyle_SetText,
  ChartStyle_GetUseBrush,
  ChartStyle_SetUseBrush,
  ChartStyle_GetUseFont,
  ChartStyle_SetUseFont,
  ChartStyle_GetUsePen,
  ChartStyle_SetUsePen,
  ChartStyle_GetCollection,
  ChartStyle_SetCollection,
  ChartStyle_GetID,
  ChartStyle_GetIndex,
  ChartStyle_SetIndex,
  ChartStyle_GetDisplayName,
  ChartStyle_SetDisplayName,
  ChartStyle_Apply,
  ChartStyle_GetNamePath;



