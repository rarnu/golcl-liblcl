function SynHighlighterAttributes_StaticClassType: TClass; extdecl;
begin
  Result := TSynHighlighterAttributes;
end;

function SynHighlighterAttributes_GetBackground(AObj: TSynHighlighterAttributes): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Background;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetBackground(AObj: TSynHighlighterAttributes; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Background := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetForeground(AObj: TSynHighlighterAttributes): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Foreground;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetForeground(AObj: TSynHighlighterAttributes; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Foreground := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetFrameColor(AObj: TSynHighlighterAttributes): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FrameColor;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetFrameColor(AObj: TSynHighlighterAttributes; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.FrameColor := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetFrameStyle(AObj: TSynHighlighterAttributes): TSynLineStyle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FrameStyle;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetFrameStyle(AObj: TSynHighlighterAttributes; AValue: TSynLineStyle); extdecl;
begin
  handleExceptionBegin
  AObj.FrameStyle := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetFrameEdges(AObj: TSynHighlighterAttributes): TSynFrameEdges; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FrameEdges;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetFrameEdges(AObj: TSynHighlighterAttributes; AValue: TSynFrameEdges); extdecl;
begin
  handleExceptionBegin
  AObj.FrameEdges := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetStyle(AObj: TSynHighlighterAttributes): TFontStyles; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Style;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetStyle(AObj: TSynHighlighterAttributes; AValue: TFontStyles); extdecl;
begin
  handleExceptionBegin
  AObj.Style := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetStyleMask(AObj: TSynHighlighterAttributes): TFontStyles; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StyleMask;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetStyleMask(AObj: TSynHighlighterAttributes; AValue: TFontStyles); extdecl;
begin
  handleExceptionBegin
  AObj.StyleMask := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetBackPriority(AObj: TSynHighlighterAttributes): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BackPriority;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetBackPriority(AObj: TSynHighlighterAttributes; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.BackPriority := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetForePriority(AObj: TSynHighlighterAttributes): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ForePriority;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetForePriority(AObj: TSynHighlighterAttributes; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ForePriority := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetFramePriority(AObj: TSynHighlighterAttributes): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FramePriority;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetFramePriority(AObj: TSynHighlighterAttributes; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FramePriority := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetBoldPriority(AObj: TSynHighlighterAttributes): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BoldPriority;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetBoldPriority(AObj: TSynHighlighterAttributes; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.BoldPriority := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetItalicPriority(AObj: TSynHighlighterAttributes): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ItalicPriority;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetItalicPriority(AObj: TSynHighlighterAttributes; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ItalicPriority := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetUnderlinePriority(AObj: TSynHighlighterAttributes): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UnderlinePriority;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetUnderlinePriority(AObj: TSynHighlighterAttributes; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.UnderlinePriority := AValue;
  handleExceptionEnd
end;

function SynHighlighterAttributes_GetStrikeOutPriority(AObj: TSynHighlighterAttributes): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StrikeOutPriority;
  handleExceptionEnd
end;

procedure SynHighlighterAttributes_SetStrikeOutPriority(AObj: TSynHighlighterAttributes; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.StrikeOutPriority := AValue;
  handleExceptionEnd
end;

exports
  SynHighlighterAttributes_StaticClassType,
  SynHighlighterAttributes_GetBackground,
  SynHighlighterAttributes_SetBackground,
  SynHighlighterAttributes_GetForeground,
  SynHighlighterAttributes_SetForeground,
  SynHighlighterAttributes_GetFrameColor,
  SynHighlighterAttributes_SetFrameColor,
  SynHighlighterAttributes_GetFrameStyle,
  SynHighlighterAttributes_SetFrameStyle,
  SynHighlighterAttributes_GetFrameEdges,
  SynHighlighterAttributes_SetFrameEdges,
  SynHighlighterAttributes_GetStyle,
  SynHighlighterAttributes_SetStyle,
  SynHighlighterAttributes_GetStyleMask,
  SynHighlighterAttributes_SetStyleMask,
  SynHighlighterAttributes_GetBackPriority,
  SynHighlighterAttributes_SetBackPriority,
  SynHighlighterAttributes_GetForePriority,
  SynHighlighterAttributes_SetForePriority,
  SynHighlighterAttributes_GetFramePriority,
  SynHighlighterAttributes_SetFramePriority,
  SynHighlighterAttributes_GetBoldPriority,
  SynHighlighterAttributes_SetBoldPriority,
  SynHighlighterAttributes_GetItalicPriority,
  SynHighlighterAttributes_SetItalicPriority,
  SynHighlighterAttributes_GetUnderlinePriority,
  SynHighlighterAttributes_SetUnderlinePriority,
  SynHighlighterAttributes_GetStrikeOutPriority,
  SynHighlighterAttributes_SetStrikeOutPriority;

