
function ChartLegend_Create(AOwner: TCustomChart): TChartLegend; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartLegend.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartLegend_Free(AObj: TChartLegend); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartLegend_StaticClassType: TClass; extdecl;
begin
  Result := TChartLegend;
end;

function ChartLegend_GetAlignment(AObj: TChartLegend): TLegendAlignment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Alignment;
  handleExceptionEnd
end;

procedure ChartLegend_SetAlignment(AObj: TChartLegend; AValue: TLegendAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetBackgroundBrush(AObj: TChartLegend): TChartLegendBrush; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BackgroundBrush;
  handleExceptionEnd
end;

procedure ChartLegend_SetBackgroundBrush(AObj: TChartLegend; AValue: TChartLegendBrush); extdecl;
begin
  handleExceptionBegin
  AObj.BackgroundBrush := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetColumnCount(AObj: TChartLegend): TLegendColumnCount; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ColumnCount;
  handleExceptionEnd
end;

procedure ChartLegend_SetColumnCount(AObj: TChartLegend; AValue: TLegendColumnCount); extdecl;
begin
  handleExceptionBegin
  AObj.ColumnCount := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetFixedItemWidth(AObj: TChartLegend): Cardinal; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FixedItemWidth;
  handleExceptionEnd
end;

procedure ChartLegend_SetFixedItemWidth(AObj: TChartLegend; AValue: Cardinal); extdecl;
begin
  handleExceptionBegin
  AObj.FixedItemWidth := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetFixedItemHeight(AObj: TChartLegend): Cardinal; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FixedItemHeight;
  handleExceptionEnd
end;

procedure ChartLegend_SetFixedItemHeight(AObj: TChartLegend; AValue: Cardinal); extdecl;
begin
  handleExceptionBegin
  AObj.FixedItemHeight := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetFont(AObj: TChartLegend): TFont; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Font;
  handleExceptionEnd
end;

procedure ChartLegend_SetFont(AObj: TChartLegend; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.Font := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetFrame(AObj: TChartLegend): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Frame;
  handleExceptionEnd
end;

procedure ChartLegend_SetFrame(AObj: TChartLegend; AValue: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.Frame := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetGridHorizontal(AObj: TChartLegend): TChartLegendGridPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GridHorizontal;
  handleExceptionEnd
end;

procedure ChartLegend_SetGridHorizontal(AObj: TChartLegend; AValue: TChartLegendGridPen); extdecl;
begin
  handleExceptionBegin
  AObj.GridHorizontal := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetGridVertical(AObj: TChartLegend): TChartLegendGridPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GridVertical;
  handleExceptionEnd
end;

procedure ChartLegend_SetGridVertical(AObj: TChartLegend; AValue: TChartLegendGridPen); extdecl;
begin
  handleExceptionBegin
  AObj.GridVertical := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetGroupFont(AObj: TChartLegend): TFont; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GroupFont;
  handleExceptionEnd
end;

procedure ChartLegend_SetGroupFont(AObj: TChartLegend; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.GroupFont := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetGroupTitles(AObj: TChartLegend): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GroupTitles;
  handleExceptionEnd
end;

procedure ChartLegend_SetGroupTitles(AObj: TChartLegend; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.GroupTitles := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetInverted(AObj: TChartLegend): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Inverted;
  handleExceptionEnd
end;

procedure ChartLegend_SetInverted(AObj: TChartLegend; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Inverted := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetItemFillOrder(AObj: TChartLegend): TLegendItemFillOrder; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ItemFillOrder;
  handleExceptionEnd
end;

procedure ChartLegend_SetItemFillOrder(AObj: TChartLegend; AValue: TLegendItemFillOrder); extdecl;
begin
  handleExceptionBegin
  AObj.ItemFillOrder := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetMarginX(AObj: TChartLegend): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MarginX;
  handleExceptionEnd
end;

procedure ChartLegend_SetMarginX(AObj: TChartLegend; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.MarginX := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetMarginY(AObj: TChartLegend): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MarginY;
  handleExceptionEnd
end;

procedure ChartLegend_SetMarginY(AObj: TChartLegend; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.MarginY := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetSpacing(AObj: TChartLegend): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Spacing;
  handleExceptionEnd
end;

procedure ChartLegend_SetSpacing(AObj: TChartLegend; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Spacing := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetSymbolFrame(AObj: TChartLegend): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolFrame;
  handleExceptionEnd
end;

procedure ChartLegend_SetSymbolFrame(AObj: TChartLegend; AValue: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.SymbolFrame := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetSymbolWidth(AObj: TChartLegend): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SymbolWidth;
  handleExceptionEnd
end;

procedure ChartLegend_SetSymbolWidth(AObj: TChartLegend; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.SymbolWidth := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetTextFormat(AObj: TChartLegend): TChartTextFormat; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextFormat;
  handleExceptionEnd
end;

procedure ChartLegend_SetTextFormat(AObj: TChartLegend; AValue: TChartTextFormat); extdecl;
begin
  handleExceptionBegin
  AObj.TextFormat := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetTransparency(AObj: TChartLegend): TChartTransparency; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Transparency;
  handleExceptionEnd
end;

procedure ChartLegend_SetTransparency(AObj: TChartLegend; AValue: TChartTransparency); extdecl;
begin
  handleExceptionBegin
  AObj.Transparency := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetUseSidebar(AObj: TChartLegend): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseSidebar;
  handleExceptionEnd
end;

procedure ChartLegend_SetUseSidebar(AObj: TChartLegend; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.UseSidebar := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetVisible(AObj: TChartLegend): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartLegend_SetVisible(AObj: TChartLegend; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function ChartLegend_GetOwner(AObj: TChartLegend): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOwner();
  handleExceptionEnd
end;

procedure ChartLegend_SetOwner(AObj: TChartLegend; AOwner: TCustomChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetOwner(AOwner);
  handleExceptionEnd
end;


exports
  ChartLegend_Create,
  ChartLegend_Free,
  ChartLegend_StaticClassType,
  ChartLegend_GetAlignment,
  ChartLegend_SetAlignment,
  ChartLegend_GetBackgroundBrush,
  ChartLegend_SetBackgroundBrush,
  ChartLegend_GetColumnCount,
  ChartLegend_SetColumnCount,
  ChartLegend_GetFixedItemWidth,
  ChartLegend_SetFixedItemWidth,
  ChartLegend_GetFixedItemHeight,
  ChartLegend_SetFixedItemHeight,
  ChartLegend_GetFont,
  ChartLegend_SetFont,
  ChartLegend_GetFrame,
  ChartLegend_SetFrame,
  ChartLegend_GetGridHorizontal,
  ChartLegend_SetGridHorizontal,
  ChartLegend_GetGridVertical,
  ChartLegend_SetGridVertical,
  ChartLegend_GetGroupFont,
  ChartLegend_SetGroupFont,
  ChartLegend_GetGroupTitles,
  ChartLegend_SetGroupTitles,
  ChartLegend_GetInverted,
  ChartLegend_SetInverted,
  ChartLegend_GetItemFillOrder,
  ChartLegend_SetItemFillOrder,
  ChartLegend_GetMarginX,
  ChartLegend_SetMarginX,
  ChartLegend_GetMarginY,
  ChartLegend_SetMarginY,
  ChartLegend_GetSpacing,
  ChartLegend_SetSpacing,
  ChartLegend_GetSymbolFrame,
  ChartLegend_SetSymbolFrame,
  ChartLegend_GetSymbolWidth,
  ChartLegend_SetSymbolWidth,
  ChartLegend_GetTextFormat,
  ChartLegend_SetTextFormat,
  ChartLegend_GetTransparency,
  ChartLegend_SetTransparency,
  ChartLegend_GetUseSidebar,
  ChartLegend_SetUseSidebar,
  ChartLegend_GetVisible,
  ChartLegend_SetVisible,
  ChartLegend_GetOwner,
  ChartLegend_SetOwner;



