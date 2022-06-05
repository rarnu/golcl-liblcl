
function ChromiumFontOptions_Create(): TChromiumFontOptions; extdecl;
begin
  handleExceptionBegin
  Result := TChromiumFontOptions.Create();
  handleExceptionEnd
end;

procedure ChromiumFontOptions_Free(AObj: TChromiumFontOptions); extdecl;
begin
  handleExceptionBegin
  Aobj.Free;
  handleExceptionEnd
end;

function ChromiumFontOptions_StaticClassType: TClass; extdecl;
begin
  Result := TChromiumFontOptions;
end;

function ChromiumFontOptions_GetStandardFontFamily(AObj: TChromiumFontOptions): PChar; extdecl;
begin
  handleExceptionBegin
  Result := Pchar(string(AObj.StandardFontFamily));
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetStandardFontFamily(AObj: TChromiumFontOptions; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.StandardFontFamily := ustring(string(AValue));
  handleExceptionEnd
end;

function ChromiumFontOptions_GetFixedFontFamily(AObj: TChromiumFontOptions): PChar; extdecl;
begin
  handleExceptionBegin
  Result := Pchar(string(AObj.FixedFontFamily));
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetFixedFontFamily(AObj: TChromiumFontOptions; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.FixedFontFamily := ustring(string(AValue));
  handleExceptionEnd
end;

function ChromiumFontOptions_GetSerifFontFamily(AObj: TChromiumFontOptions): PChar; extdecl;
begin
  handleExceptionBegin
  Result := Pchar(string(AObj.SerifFontFamily));
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetSerifFontFamily(AObj: TChromiumFontOptions; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SerifFontFamily := ustring(string(AValue));
  handleExceptionEnd
end;

function ChromiumFontOptions_GetSansSerifFontFamily(AObj: TChromiumFontOptions): PChar; extdecl;
begin
  handleExceptionBegin
  Result := Pchar(string(AObj.SansSerifFontFamily));
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetSansSerifFontFamily(AObj: TChromiumFontOptions; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SansSerifFontFamily := ustring(string(AValue));
  handleExceptionEnd
end;

function ChromiumFontOptions_GetCursiveFontFamily(AObj: TChromiumFontOptions): PChar; extdecl;
begin
  handleExceptionBegin
  Result := Pchar(string(AObj.CursiveFontFamily));
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetCursiveFontFamily(AObj: TChromiumFontOptions; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.CursiveFontFamily := ustring(string(AValue));
  handleExceptionEnd
end;

function ChromiumFontOptions_GetFantasyFontFamily(AObj: TChromiumFontOptions): PChar; extdecl;
begin
  handleExceptionBegin
  Result := Pchar(string(AObj.FantasyFontFamily));
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetFantasyFontFamily(AObj: TChromiumFontOptions; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.FantasyFontFamily := ustring(string(AValue));
  handleExceptionEnd
end;

function ChromiumFontOptions_GetDefaultFontSize(AObj: TChromiumFontOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DefaultFontSize;
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetDefaultFontSize(AObj: TChromiumFontOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DefaultFontSize := AValue;
  handleExceptionEnd
end;

function ChromiumFontOptions_GetDefaultFixedFontSize(AObj: TChromiumFontOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DefaultFixedFontSize;
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetDefaultFixedFontSize(AObj: TChromiumFontOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DefaultFixedFontSize := AValue;
  handleExceptionEnd
end;

function ChromiumFontOptions_GetMinimumFontSize(AObj: TChromiumFontOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MinimumFontSize;
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetMinimumFontSize(AObj: TChromiumFontOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MinimumFontSize := AValue;
  handleExceptionEnd
end;

function ChromiumFontOptions_GetMinimumLogicalFontSize(AObj: TChromiumFontOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MinimumLogicalFontSize;
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetMinimumLogicalFontSize(AObj: TChromiumFontOptions; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MinimumLogicalFontSize := AValue;
  handleExceptionEnd
end;

function ChromiumFontOptions_GetRemoteFonts(AObj: TChromiumFontOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RemoteFonts;
  handleExceptionEnd
end;

procedure ChromiumFontOptions_SetRemoteFonts(AObj: TChromiumFontOptions; AValue: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.RemoteFonts := AValue;
  handleExceptionEnd
end;

exports
  ChromiumFontOptions_Create,
  ChromiumFontOptions_Free,
  ChromiumFontOptions_StaticClassType,
  ChromiumFontOptions_GetStandardFontFamily,
  ChromiumFontOptions_SetStandardFontFamily,
  ChromiumFontOptions_GetFixedFontFamily,
  ChromiumFontOptions_SetFixedFontFamily,
  ChromiumFontOptions_GetSerifFontFamily,
  ChromiumFontOptions_SetSerifFontFamily,
  ChromiumFontOptions_GetSansSerifFontFamily,
  ChromiumFontOptions_SetSansSerifFontFamily,
  ChromiumFontOptions_GetCursiveFontFamily,
  ChromiumFontOptions_SetCursiveFontFamily,
  ChromiumFontOptions_GetFantasyFontFamily,
  ChromiumFontOptions_SetFantasyFontFamily,
  ChromiumFontOptions_GetDefaultFontSize,
  ChromiumFontOptions_SetDefaultFontSize,
  ChromiumFontOptions_GetDefaultFixedFontSize,
  ChromiumFontOptions_SetDefaultFixedFontSize,
  ChromiumFontOptions_GetMinimumFontSize,
  ChromiumFontOptions_SetMinimumFontSize,
  ChromiumFontOptions_GetMinimumLogicalFontSize,
  ChromiumFontOptions_SetMinimumLogicalFontSize,
  ChromiumFontOptions_GetRemoteFonts,
  ChromiumFontOptions_SetRemoteFonts;

