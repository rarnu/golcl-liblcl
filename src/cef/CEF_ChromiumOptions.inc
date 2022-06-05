
function ChromiumOptions_Create(): TChromiumOptions; extdecl;
begin
  handleExceptionBegin
  Result := TChromiumOptions.Create();
  handleExceptionEnd
end;

procedure ChromiumOptions_Free(AObj: TChromiumOptions); extdecl;
begin
  handleExceptionBegin
  Aobj.Free;
  handleExceptionEnd
end;

function ChromiumOptions_StaticClassType: TClass; extdecl;
begin
  Result := TChromiumOptions;
end;

function ChromiumOptions_GetJavascript(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Javascript;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetJavascript(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.Javascript := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetJavascriptCloseWindows(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.JavascriptCloseWindows;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetJavascriptCloseWindows(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.JavascriptCloseWindows := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetJavascriptAccessClipboard(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.JavascriptAccessClipboard;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetJavascriptAccessClipboard(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.JavascriptAccessClipboard := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetJavascriptDomPaste(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.JavascriptDomPaste;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetJavascriptDomPaste(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.JavascriptDomPaste := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetImageLoading(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ImageLoading;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetImageLoading(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.ImageLoading := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetImageShrinkStandaloneToFit(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ImageShrinkStandaloneToFit;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetImageShrinkStandaloneToFit(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.ImageShrinkStandaloneToFit := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetTextAreaResize(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextAreaResize;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetTextAreaResize(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.TextAreaResize := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetTabToLinks(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TabToLinks;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetTabToLinks(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.TabToLinks := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetLocalStorage(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LocalStorage;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetLocalStorage(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.LocalStorage := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetDatabases(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Databases;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetDatabases(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.Databases := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetWebgl(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Webgl;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetWebgl(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.Webgl := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetBackgroundColor(AObj: TChromiumOptions): TCefColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetBackgroundColor(AObj: TChromiumOptions; Value: TCefColor); extdecl;
begin
  handleExceptionBegin
  AObj.BackgroundColor := Value;
  handleExceptionEnd
end;


function ChromiumOptions_GetAcceptLanguageList(AObj: TChromiumOptions): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(string(AObj.AcceptLanguageList));
  handleExceptionEnd
end;

procedure ChromiumOptions_SetAcceptLanguageList(AObj: TChromiumOptions; Value: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AcceptLanguageList := ustring(string(Value));
  handleExceptionEnd
end;

function ChromiumOptions_GetWindowlessFrameRate(AObj: TChromiumOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WindowlessFrameRate;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetWindowlessFrameRate(AObj: TChromiumOptions; Value: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.WindowlessFrameRate := Value;
  handleExceptionEnd
end;

function ChromiumOptions_GetChromeStatusBubble(AObj: TChromiumOptions): TCefState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChromeStatusBubble;
  handleExceptionEnd
end;

procedure ChromiumOptions_SetChromeStatusBubble(AObj: TChromiumOptions; Value: TCefState); extdecl;
begin
  handleExceptionBegin
  AObj.ChromeStatusBubble := Value;
  handleExceptionEnd
end;

exports
  ChromiumOptions_Create,
  ChromiumOptions_Free,
  ChromiumOptions_StaticClassType,
  ChromiumOptions_GetJavascript,
  ChromiumOptions_SetJavascript,
  ChromiumOptions_GetJavascriptCloseWindows,
  ChromiumOptions_SetJavascriptCloseWindows,
  ChromiumOptions_GetJavascriptAccessClipboard,
  ChromiumOptions_SetJavascriptAccessClipboard,
  ChromiumOptions_GetJavascriptDomPaste,
  ChromiumOptions_SetJavascriptDomPaste,
  ChromiumOptions_GetImageLoading,
  ChromiumOptions_SetImageLoading,
  ChromiumOptions_GetImageShrinkStandaloneToFit,
  ChromiumOptions_SetImageShrinkStandaloneToFit,
  ChromiumOptions_GetTextAreaResize,
  ChromiumOptions_SetTextAreaResize,
  ChromiumOptions_GetTabToLinks,
  ChromiumOptions_SetTabToLinks,
  ChromiumOptions_GetLocalStorage,
  ChromiumOptions_SetLocalStorage,
  ChromiumOptions_GetDatabases,
  ChromiumOptions_SetDatabases,
  ChromiumOptions_GetWebgl,
  ChromiumOptions_SetWebgl,
  ChromiumOptions_GetBackgroundColor,
  ChromiumOptions_SetBackgroundColor,
  ChromiumOptions_GetAcceptLanguageList,
  ChromiumOptions_SetAcceptLanguageList,
  ChromiumOptions_GetWindowlessFrameRate,
  ChromiumOptions_SetWindowlessFrameRate,
  ChromiumOptions_GetChromeStatusBubble,
  ChromiumOptions_SetChromeStatusBubble;



