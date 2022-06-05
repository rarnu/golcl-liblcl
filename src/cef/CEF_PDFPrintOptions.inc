
function PDFPrintOptions_Create(): TPDFPrintOptions; extdecl;
begin
  handleExceptionBegin
  Result := TPDFPrintOptions.Create();
  handleExceptionEnd
end;

procedure PDFPrintOptions_Free(AObj: TPDFPrintOptions); extdecl;
begin
  handleExceptionBegin
  Aobj.Free;
  handleExceptionEnd
end;

function PDFPrintOptions_StaticClassType: TClass; extdecl;
begin
  Result := TPDFPrintOptions;
end;

function PDFPrintOptions_GetPageWidth(AObj: TPDFPrintOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.page_width;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetPageWidth(AObj: TPDFPrintOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.page_width := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetPageHeight(AObj: TPDFPrintOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.page_height;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetPageHeight(AObj: TPDFPrintOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.page_height := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetScaleFactor(AObj: TPDFPrintOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.scale_factor;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetScaleFactor(AObj: TPDFPrintOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.scale_factor := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetMarginTop(AObj: TPDFPrintOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.margin_top;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetMarginTop(AObj: TPDFPrintOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.margin_top := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetMarginBottom(AObj: TPDFPrintOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.margin_bottom;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetMarginBottom(AObj: TPDFPrintOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.margin_bottom := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetMarginLeft(AObj: TPDFPrintOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.margin_left;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetMarginLeft(AObj: TPDFPrintOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.margin_left := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetMarginRight(AObj: TPDFPrintOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.margin_right;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetMarginRight(AObj: TPDFPrintOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.margin_right := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetMarginType(AObj: TPDFPrintOptions): TCefPdfPrintMarginType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.margin_type;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetMarginType(AObj: TPDFPrintOptions; AValue: TCefPdfPrintMarginType); extdecl;
begin
  handleExceptionBegin
  AObj.margin_type := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetHeaderFooterEnabled(AObj: TPDFPrintOptions): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.header_footer_enabled;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetHeaderFooterEnabled(AObj: TPDFPrintOptions; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.header_footer_enabled := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetSelectionOnly(AObj: TPDFPrintOptions): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.selection_only;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetSelectionOnly(AObj: TPDFPrintOptions; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.selection_only := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetLandscape(AObj: TPDFPrintOptions): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.landscape;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetLandscape(AObj: TPDFPrintOptions; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.landscape := AValue;
  handleExceptionEnd
end;

function PDFPrintOptions_GetBackgroundsEnabled(AObj: TPDFPrintOptions): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.backgrounds_enabled;
  handleExceptionEnd
end;

procedure PDFPrintOptions_SetBackgroundsEnabled(AObj: TPDFPrintOptions; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.backgrounds_enabled := AValue;
  handleExceptionEnd
end;

exports
  PDFPrintOptions_Create,
  PDFPrintOptions_Free,
  PDFPrintOptions_StaticClassType,
  PDFPrintOptions_GetPageWidth,
  PDFPrintOptions_SetPageWidth,
  PDFPrintOptions_GetPageHeight,
  PDFPrintOptions_SetPageHeight,
  PDFPrintOptions_GetScaleFactor,
  PDFPrintOptions_SetScaleFactor,
  PDFPrintOptions_GetMarginTop,
  PDFPrintOptions_SetMarginTop,
  PDFPrintOptions_GetMarginBottom,
  PDFPrintOptions_SetMarginBottom,
  PDFPrintOptions_GetMarginLeft,
  PDFPrintOptions_SetMarginLeft,
  PDFPrintOptions_GetMarginRight,
  PDFPrintOptions_SetMarginRight,
  PDFPrintOptions_GetMarginType,
  PDFPrintOptions_SetMarginType,
  PDFPrintOptions_GetHeaderFooterEnabled,
  PDFPrintOptions_SetHeaderFooterEnabled,
  PDFPrintOptions_GetSelectionOnly,
  PDFPrintOptions_SetSelectionOnly,
  PDFPrintOptions_GetLandscape,
  PDFPrintOptions_SetLandscape,
  PDFPrintOptions_GetBackgroundsEnabled,
  PDFPrintOptions_SetBackgroundsEnabled;
