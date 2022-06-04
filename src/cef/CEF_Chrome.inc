
function Chromium_Create(AOwner: TComponent): TChromium; extdecl;
begin
  handleExceptionBegin
  Result := TChromium.Create(AOwner);
  handleExceptionEnd
end;

procedure Chromium_Free(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  Aobj.Free;
  handleExceptionEnd
end;

function Chromium_StaticClassType: TClass; extdecl;
begin
  Result := TChromium;
end;

procedure Chromium_ShowDevTools(AObj: TChromium; inspectElementAt: TPoint); extdecl;
begin
  handleExceptionBegin
  Aobj.ShowDevTools(inspectElementAt);
  handleExceptionEnd
end;

procedure Chromium_CloseDevTools(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  Aobj.CloseDevTools();
  handleExceptionEnd
end;

procedure Chromium_MoveFormTo(AObj: TChromium; X, Y: Integer); extdecl;
begin
  handleExceptionBegin
  Aobj.MoveFormTo(X, Y);
  handleExceptionEnd
end;

procedure Chromium_MoveFormBy(AObj: TChromium; X, Y: Integer); extdecl;
begin
  handleExceptionBegin
  Aobj.MoveFormBy(X, Y);
  handleExceptionEnd
end;

procedure Chromium_ResizeFormWidthTo(AObj: TChromium; X: Integer); extdecl;
begin
  handleExceptionBegin
  Aobj.ResizeFormWidthTo(X);
  handleExceptionEnd
end;

procedure Chromium_ResizeFormHeightTo(AObj: TChromium; Y: Integer); extdecl;
begin
  handleExceptionBegin
  Aobj.ResizeFormHeightTo(Y);
  handleExceptionEnd
end;

procedure Chromium_SetFormLeftTo(AObj: TChromium; X: Integer); extdecl;
begin
  handleExceptionBegin
  Aobj.SetFormLeftTo(X);
  handleExceptionEnd
end;

procedure Chromium_SetFormTopTo(AObj: TChromium; Y: Integer); extdecl;
begin
  handleExceptionBegin
  Aobj.SetFormTopTo(Y);
  handleExceptionEnd
end;

function Chromium_SaveAsBitmapStream(AObj: TChromium; AStream: TStream): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SaveAsBitmapStream(AStream);
  handleExceptionEnd
end;

function Chromium_TakeSnapshot(AObj: TChromium; var ABitmap: TBitmap): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TakeSnapshot(ABitmap);
  handleExceptionEnd
end;

procedure Chromium_CloseBrowser(AObj: TChromium; AForce: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.CloseBrowser(AForce);
  handleExceptionEnd
end;

procedure Chromium_CloseAllBrowsers(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.CloseAllBrowsers();
  handleExceptionEnd
end;

function Chromium_TryCloseBrowser(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TryCloseBrowser();
  handleExceptionEnd
end;

procedure Chromium_LoadURL(AObj: TChromium; AUrl: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadURL(ustring(string(AUrl)));
  handleExceptionEnd
end;

procedure Chromium_LoadString(AObj: TChromium; AHtml: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadString(ustring(string(AHtml)));
  handleExceptionEnd
end;

procedure Chromium_GoBack(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.GoBack();
  handleExceptionEnd
end;

procedure Chromium_GoForward(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.GoForward();
  handleExceptionEnd
end;

procedure Chromium_Reload(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.Reload();
  handleExceptionEnd
end;

procedure Chromium_ReloadIgnoreCache(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ReloadIgnoreCache();
  handleExceptionEnd
end;

procedure Chromium_StopLoad(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.StopLoad();
  handleExceptionEnd
end;

procedure Chromium_StartDownload(AObj: TChromium; AUrl: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.StartDownload(ustring(string(AUrl)));
  handleExceptionEnd
end;

procedure Chromium_DownloadImage(AObj: TChromium; AImageUrl: PChar; isFavicon: LongBool; maxImageSize: Cardinal; bypassCache: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DownloadImage(ustring(string(AImageUrl)), isFavicon, maxImageSize, bypassCache);
  handleExceptionEnd
end;

function Chromium_ClearCertificateExceptions(AObj: TChromium; aClearImmediately: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClearCertificateExceptions(aClearImmediately);
  handleExceptionEnd
end;

function Chromium_ClearHttpAuthCredentials(AObj: TChromium; aClearImmediately: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClearHttpAuthCredentials(aClearImmediately);
  handleExceptionEnd
end;

function Chromium_CloseAllConnections(AObj: TChromium; aCloseImmediately: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CloseAllConnections(aCloseImmediately);
  handleExceptionEnd
end;

procedure Chromium_ExecuteJavaScript(AObj: TChromium; ACode: PChar; AScriptUrl: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.ExecuteJavaScript(ustring(string(ACode)), ustring(string(AScriptUrl)));
  handleExceptionEnd
end;

procedure Chromium_UpdatePreferences(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.UpdatePreferences();
  handleExceptionEnd
end;

procedure Chromium_SavePreferences(AObj: TChromium; AFileName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SavePreferences(string(AFileName));
  handleExceptionEnd
end;

procedure Chromium_ResolveHost(AObj: TChromium; AUrl: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.ResolveHost(ustring(string(AUrl)));
  handleExceptionEnd
end;

procedure Chromium_ClearCache(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ClearCache();
  handleExceptionEnd
end;

function Chromium_DeleteCookies(AObj: TChromium; AUrl: PChar; ACookieName: PChar; aDeleteImmediately: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteCookies(AUrl, ACookieName, aDeleteImmediately);
  handleExceptionEnd
end;

function Chromium_SetCookie(AObj: TChromium; AUrl, AName, AValue, ADomain, APath: PChar; 
  ASecure, AHttpOnly, AHasExpires: LongBool; 
  ACreation, ALastAccess, AExpires: TUnixDateTime; 
  ASameSite: TCefCookieSameSite; APriority: TCefCookiePriority; ASetImmediately: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetCookie(AUrl, AName, AValue, ADomain, APath, 
    ASecure, AHttpOnly, AHasExpires, 
    UnixToTime(ACreation), UnixToTime(ALastAccess), UnixToTime(AExpires), 
    ASameSite, APriority, ASetImmediately);
  handleExceptionEnd
end;

function Chromium_FlushCookieStore(AObj: TChromium; aFlushImmediately: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FlushCookieStore(aFlushImmediately);
  handleExceptionEnd
end;

function Chromium_SendDevToolsMessage(AObj: TChromium; AMessage: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SendDevToolsMessage(ustring(string(AMessage)));
  handleExceptionEnd
end;

procedure Chromium_Find(AObj: TChromium; AText: PChar; AForward, AMatchCase, AFindNext: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Find(ustring(string(AText)), AForward, AMatchCase, AFindNext);
  handleExceptionEnd
end;

procedure Chromium_StopFinding(AObj: TChromium; aClearSelection: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.StopFinding(aClearSelection);
  handleExceptionEnd
end;

procedure Chromium_Print(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.Print();
  handleExceptionEnd
end;

procedure Chromium_PrintToPDF(AObj: TChromium; AFilePath, ATitle, AUrl: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.PrintToPDF(ustring(string(AFilePath)), ustring(string(ATitle)), ustring(string(AUrl)));
  handleExceptionEnd
end;

procedure Chromium_ClipboardCopy(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ClipboardCopy();
  handleExceptionEnd
end;

procedure Chromium_ClipboardPaste(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ClipboardPaste();
  handleExceptionEnd
end;

procedure Chromium_ClipboardCut(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ClipboardCut();
  handleExceptionEnd
end;

procedure Chromium_ClipboardUndo(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ClipboardUndo();
  handleExceptionEnd
end;

procedure Chromium_ClipboardRedo(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ClipboardRedo();
  handleExceptionEnd
end;

procedure Chromium_ClipboardDel(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ClipboardDel();
  handleExceptionEnd
end;

procedure Chromium_SelectAll(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;


procedure Chromium_IncZoomStep(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.IncZoomStep();
  handleExceptionEnd
end;

procedure Chromium_DecZoomStep(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.DecZoomStep();
  handleExceptionEnd
end;

procedure Chromium_IncZoomPct(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.IncZoomPct();
  handleExceptionEnd
end;

procedure Chromium_DecZoomPct(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.DecZoomPct();
  handleExceptionEnd
end;

procedure Chromium_ResetZoomStep(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ResetZoomStep();
  handleExceptionEnd
end;

procedure Chromium_ResetZoomLevel(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ResetZoomLevel();
  handleExceptionEnd
end;

procedure Chromium_ResetZoomPct(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ResetZoomPct();
  handleExceptionEnd
end;

procedure Chromium_ReadZoom(AObj: TChromium); extdecl;
begin
  handleExceptionBegin
  AObj.ReadZoom();
  handleExceptionEnd
end;

function Chromium_GetMultithreadApp(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MultithreadApp;
  handleExceptionEnd
end;

function Chromium_GetIsLoading(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsLoading;
  handleExceptionEnd
end;

function Chromium_GetHasDocument(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasDocument;
  handleExceptionEnd
end;

function Chromium_GetHasView(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasView;
  handleExceptionEnd
end;

function Chromium_GetHasDevTools(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasDevTools;
  handleExceptionEnd
end;

function Chromium_GetCanGoBack(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanGoBack;
  handleExceptionEnd
end;

function Chromium_GetCanGoForward(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanGoForward;
  handleExceptionEnd
end;

function Chromium_GetIsPopUp(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsPopUp;
  handleExceptionEnd
end;

function Chromium_GetInitialized(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

function Chromium_GetDocumentURL(AObj: TChromium): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(string(AObj.DocumentURL));
  handleExceptionEnd
end;

function Chromium_GetDoNotTrack(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DoNotTrack;
  handleExceptionEnd
end;

procedure Chromium_SetDoNotTrack(AObj: TChromium; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DoNotTrack := AValue;
  handleExceptionEnd
end;

function Chromium_GetBlock3rdPartyCookies(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Block3rdPartyCookies;
  handleExceptionEnd
end;

procedure Chromium_SetBlock3rdPartyCookies(AObj: TChromium; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Block3rdPartyCookies := AValue;
  handleExceptionEnd
end;

function Chromium_GetJavascriptEnabled(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.JavascriptEnabled;
  handleExceptionEnd
end;

procedure Chromium_SetJavascriptEnabled(AObj: TChromium; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.JavascriptEnabled := AValue;
  handleExceptionEnd
end;

function Chromium_GetLoadImagesAutomatically(AObj: TChromium): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LoadImagesAutomatically;
  handleExceptionEnd
end;

procedure Chromium_SetLoadImagesAutomatically(AObj: TChromium; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.LoadImagesAutomatically := AValue;
  handleExceptionEnd
end;

function Chromium_GetDefaultUrl(AObj: TChromium): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(string(AObj.DefaultUrl));
  handleExceptionEnd
end;

procedure Chromium_SetDefaultUrl(AObj: TChromium; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DefaultUrl := ustring(string(AValue));
  handleExceptionEnd
end;

function Chromium_GetDefaultEncoding(AObj: TChromium): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(string(AObj.DefaultEncoding));
  handleExceptionEnd
end;

procedure Chromium_SetDefaultEncoding(AObj: TChromium; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DefaultEncoding := ustring(string(AValue));
  handleExceptionEnd
end;

function Chromium_GetAcceptLanguageList(AObj: TChromium): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(string(AObj.AcceptLanguageList));
  handleExceptionEnd
end;

procedure Chromium_SetAcceptLanguageList(AObj: TChromium; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AcceptLanguageList := ustring(string(AValue));
  handleExceptionEnd
end;

procedure Chromium_GetZoomLevel(AObj: TChromium; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ZoomLevel;
  handleExceptionEnd
end;

procedure Chromium_SetZoomLevel(AObj: TChromium; AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ZoomLevel := AValue;
  handleExceptionEnd
end;

procedure Chromium_GetZoomPct(AObj: TChromium; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ZoomPct;
  handleExceptionEnd
end;

procedure Chromium_SetZoomPct(AObj: TChromium; AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ZoomPct := AValue;
  handleExceptionEnd
end;

function Chromium_GetZoomStep(AObj: TChromium): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ZoomStep;
  handleExceptionEnd
end;

procedure Chromium_SetZoomStep(AObj: TChromium; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ZoomStep := Byte(AValue);
  handleExceptionEnd
end;

function Chromium_GetOptions(AObj: TChromium): TChromiumOptions; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Options;
  handleExceptionEnd
end;

procedure Chromium_SetOptions(AObj: TChromium; AValue: TChromiumOptions); extdecl;
begin
  handleExceptionBegin
  AObj.Options := AValue;
  handleExceptionEnd
end;

function Chromium_GetFontOptions(AObj: TChromium): TChromiumFontOptions; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FontOptions;
  handleExceptionEnd
end;

procedure Chromium_SetFontOptions(AObj: TChromium; AValue: TChromiumFontOptions); extdecl;
begin
  handleExceptionBegin
  AObj.FontOptions := AValue;
  handleExceptionEnd
end;

function Chromium_GetPDFPrintOptions(AObj: TChromium): TPDFPrintOptions; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PDFPrintOptions;
  handleExceptionEnd
end;

procedure Chromium_SetPDFPrintOptions(AObj: TChromium; AValue: TPDFPrintOptions); extdecl;
begin
  handleExceptionBegin
  AObj.PDFPrintOptions := AValue;
  handleExceptionEnd
end;

function Chromium_GetAcceptCookies(AObj: TChromium): TCefCookiePref; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AcceptCookies;
  handleExceptionEnd
end;

procedure Chromium_SetAcceptCookies(AObj: TChromium; AValue: TCefCookiePref); extdecl;
begin
  handleExceptionBegin
  AObj.AcceptCookies := AValue;
  handleExceptionEnd
end;

procedure Chromium_SetOnPrefsUpdated(AObj: TChromium; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnPrefsUpdated}
  {$DEFINE EventName := OnPrefsUpdated}
  EventMethodCode
end;

procedure Chromium_SetOnCookiesFlushed(AObj: TChromium; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnCookiesFlushed}
  {$DEFINE EventName := OnCookiesFlushed}
  EventMethodCode
end;

procedure Chromium_SetOnCertificateExceptionsCleared(AObj: TChromium; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnCertificateExceptionsCleared}
  {$DEFINE EventName := OnCertificateExceptionsCleared}
  EventMethodCode
end;

procedure Chromium_SetOnHttpAuthCredentialsCleared(AObj: TChromium; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnHttpAuthCredentialsCleared}
  {$DEFINE EventName := OnHttpAuthCredentialsCleared}
  EventMethodCode
end;

procedure Chromium_SetOnAllConnectionsClosed(AObj: TChromium; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnAllConnectionsClosed}
  {$DEFINE EventName := OnAllConnectionsClosed}
  EventMethodCode
end;

procedure Chromium_SetOnCookieSet(AObj: TChromium; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := TOnCookieSet_OnCookieSet}
  {$DEFINE EventName := OnCookieSet}
  EventMethodCode
end;

procedure Chromium_SetOnPdfPrintFinished(AObj: TChromium; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnPdfPrintFinishedEvent_OnPdfPrintFinished}
  {$DEFINE EventName := OnPdfPrintFinished}
  EventMethodCode
end;

procedure Chromium_SetOnPrefsAvailable(AObj: TChromium; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnPrefsAvailableEvent_OnPrefsAvailable}
  {$DEFINE EventName := OnPrefsAvailable}
  EventMethodCode
end;

procedure Chromium_SetOnCookiesDeleted(AObj: TChromium; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCookiesDeletedEvent_OnCookiesDeleted}
  {$DEFINE EventName := OnCookiesDeleted}
  EventMethodCode
end;


exports
  Chromium_Create,
  Chromium_Free,
  Chromium_StaticClassType,
  Chromium_ShowDevTools,
  Chromium_CloseDevTools,
  Chromium_MoveFormTo,
  Chromium_MoveFormBy,
  Chromium_ResizeFormWidthTo,
  Chromium_ResizeFormHeightTo,
  Chromium_SetFormLeftTo,
  Chromium_SetFormTopTo,
  Chromium_SaveAsBitmapStream,
  Chromium_TakeSnapshot,
  Chromium_CloseBrowser,
  Chromium_CloseAllBrowsers,
  Chromium_TryCloseBrowser,
  Chromium_LoadURL,
  Chromium_LoadString,
  Chromium_GoBack,
  Chromium_GoForward,
  Chromium_Reload,
  Chromium_ReloadIgnoreCache,
  Chromium_StopLoad,
  Chromium_StartDownload,
  Chromium_DownloadImage,
  Chromium_ClearCertificateExceptions,
  Chromium_ClearHttpAuthCredentials,
  Chromium_CloseAllConnections,
  Chromium_ExecuteJavaScript,
  Chromium_UpdatePreferences,
  Chromium_SavePreferences,
  Chromium_ResolveHost,
  Chromium_ClearCache,
  Chromium_DeleteCookies,
  Chromium_SetCookie,
  Chromium_FlushCookieStore,
  Chromium_SendDevToolsMessage,
  Chromium_Find,
  Chromium_StopFinding,
  Chromium_Print,
  Chromium_PrintToPDF,
  Chromium_ClipboardCopy,
  Chromium_ClipboardPaste,
  Chromium_ClipboardCut,
  Chromium_ClipboardUndo,
  Chromium_ClipboardRedo,
  Chromium_ClipboardDel,
  Chromium_SelectAll,
  Chromium_IncZoomStep,
  Chromium_DecZoomStep,
  Chromium_IncZoomPct,
  Chromium_DecZoomPct,
  Chromium_ResetZoomStep,
  Chromium_ResetZoomLevel,
  Chromium_ResetZoomPct,
  Chromium_ReadZoom,
  Chromium_GetMultithreadApp,
  Chromium_GetIsLoading,
  Chromium_GetHasDocument,
  Chromium_GetHasView,
  Chromium_GetHasDevTools,
  Chromium_GetCanGoBack,
  Chromium_GetCanGoForward,
  Chromium_GetIsPopUp,
  Chromium_GetInitialized,
  Chromium_GetDocumentURL,
  Chromium_GetDoNotTrack,
  Chromium_SetDoNotTrack,
  Chromium_GetBlock3rdPartyCookies,
  Chromium_SetBlock3rdPartyCookies,
  Chromium_GetJavascriptEnabled,
  Chromium_SetJavascriptEnabled,
  Chromium_GetLoadImagesAutomatically,
  Chromium_SetLoadImagesAutomatically,
  Chromium_GetDefaultUrl,
  Chromium_SetDefaultUrl,
  Chromium_GetDefaultEncoding,
  Chromium_SetDefaultEncoding,
  Chromium_GetAcceptLanguageList,
  Chromium_SetAcceptLanguageList,
  Chromium_GetZoomLevel,
  Chromium_SetZoomLevel,
  Chromium_GetZoomPct,
  Chromium_SetZoomPct,
  Chromium_GetZoomStep,
  Chromium_SetZoomStep,
  Chromium_GetOptions,
  Chromium_SetOptions,
  Chromium_GetFontOptions,
  Chromium_SetFontOptions,
  Chromium_GetPDFPrintOptions,
  Chromium_SetPDFPrintOptions,
  Chromium_GetAcceptCookies,
  Chromium_SetAcceptCookies,
  Chromium_SetOnPrefsUpdated,
  Chromium_SetOnCookiesFlushed,
  Chromium_SetOnCertificateExceptionsCleared,
  Chromium_SetOnHttpAuthCredentialsCleared,
  Chromium_SetOnAllConnectionsClosed,
  Chromium_SetOnCookieSet,
  Chromium_SetOnPdfPrintFinished,
  Chromium_SetOnPrefsAvailable,
  Chromium_SetOnCookiesDeleted;


