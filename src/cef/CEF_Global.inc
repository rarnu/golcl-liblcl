
function CefApplication_GetGlobalCEFApp(): TCefApplication; extdecl;
begin
  handleExceptionBegin
  Result := GlobalCEFApp;
  handleExceptionEnd
end;

procedure CefApplication_SetGlobalCEFApp(App: TCefApplication); extdecl;
begin
  handleExceptionBegin
  GlobalCEFApp := App;
  handleExceptionEnd
end;

function CefApplication_Create(): TCefApplication; extdecl;
begin
  handleExceptionBegin
  Result :=  TCefApplication.Create();
  handleExceptionEnd
end;

procedure CefApplication_Free(AObj: TCefApplication); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function CefApplication_StartMainProcess(AObj: TCefApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StartMainProcess;
  handleExceptionEnd
end;

function CefApplication_StartSubProcess(AObj: TCefApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StartSubProcess;
  handleExceptionEnd
end;

function CefApplication_GetNoSandbox(AObj: TCefApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NoSandbox;
  handleExceptionEnd
end;

procedure CefApplication_SetNoSandbox(AObj: TCefApplication; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.NoSandbox := AValue;
  handleExceptionEnd
end;

function CefApplication_GetUserAgent(AObj: TCefApplication): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(string(AObj.UserAgent));
  handleExceptionEnd
end;

procedure CefApplication_SetUserAgent(AObj: TCefApplication; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.UserAgent := ustring(string(AValue));
  handleExceptionEnd
end;

function CefApplication_GetJavaScriptFlags(AObj: TCefApplication): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(string(AObj.JavaScriptFlags));
  handleExceptionEnd
end;

procedure CefApplication_SetJavaScriptFlags(AObj: TCefApplication; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.JavaScriptFlags := ustring(string(AValue));
  handleExceptionEnd
end;

function CefApplication_GetIgnoreCertificateErrors(AObj: TCefApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IgnoreCertificateErrors;
  handleExceptionEnd
end;

procedure CefApplication_SetIgnoreCertificateErrors(AObj: TCefApplication; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.IgnoreCertificateErrors := AValue;
  handleExceptionEnd
end;

function CefApplication_GetEnableGPU(AObj: TCefApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EnableGPU;
  handleExceptionEnd
end;

procedure CefApplication_SetEnableGPU(AObj: TCefApplication; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.EnableGPU := AValue;
  handleExceptionEnd
end;

function CefApplication_GetAllowFileAccessFromFiles(AObj: TCefApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowFileAccessFromFiles;
  handleExceptionEnd
end;

procedure CefApplication_SetAllowFileAccessFromFiles(AObj: TCefApplication; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AllowFileAccessFromFiles := AValue;
  handleExceptionEnd
end;

function CefApplication_GetAllowRunningInsecureContent(AObj: TCefApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowRunningInsecureContent;
  handleExceptionEnd
end;

procedure CefApplication_SetAllowRunningInsecureContent(AObj: TCefApplication; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AllowRunningInsecureContent := AValue;
  handleExceptionEnd
end;

function CefApplication_GetDisableJavascript(AObj: TCefApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisableJavascript;
  handleExceptionEnd
end;

procedure CefApplication_SetDisableJavascript(AObj: TCefApplication; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DisableJavascript := AValue;
  handleExceptionEnd
end;

function CefApplication_GetAllowUniversalAccessFromFileUrls(AObj: TCefApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowUniversalAccessFromFileUrls;
  handleExceptionEnd
end;

procedure CefApplication_SetAllowUniversalAccessFromFileUrls(AObj: TCefApplication; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AllowUniversalAccessFromFileUrls := AValue;
  handleExceptionEnd
end;

function CefApplication_GetAllowInsecureLocalhost(AObj: TCefApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowInsecureLocalhost;
  handleExceptionEnd
end;

procedure CefApplication_SetAllowInsecureLocalhost(AObj: TCefApplication; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AllowInsecureLocalhost := AValue;
  handleExceptionEnd
end;

function CefApplication_GetDefaultEncoding(AObj: TCefApplication): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(string(AObj.DefaultEncoding));
  handleExceptionEnd
end;

procedure CefApplication_SetDefaultEncoding(AObj: TCefApplication; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DefaultEncoding := ustring(string(AValue));
  handleExceptionEnd
end;

function CefApplication_GetChromeVersion(AObj: TCefApplication): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(string(AObj.ChromeVersion));
  handleExceptionEnd
end;

procedure CefApplication_InitGlobalCEFApp(); extdecl;
begin
  handleExceptionBegin
  InitGlobalCEFApp();
  handleExceptionEnd
end;

procedure CefApplication_FinalGlobalCEFApp(); extdecl;
begin
  handleExceptionBegin
  FinalGlobalCEFApp();
  handleExceptionEnd
end;

exports
  CefApplication_GetGlobalCEFApp,
  CefApplication_SetGlobalCEFApp,
  CefApplication_Create,
  CefApplication_Free,
  CefApplication_StartMainProcess,
  CefApplication_StartSubProcess,
  CefApplication_GetNoSandbox,
  CefApplication_SetNoSandbox,
  CefApplication_GetUserAgent,
  CefApplication_SetUserAgent,
  CefApplication_GetJavaScriptFlags,
  CefApplication_SetJavaScriptFlags,
  CefApplication_GetIgnoreCertificateErrors,
  CefApplication_SetIgnoreCertificateErrors,
  CefApplication_GetEnableGPU,
  CefApplication_SetEnableGPU,
  CefApplication_GetAllowFileAccessFromFiles,
  CefApplication_SetAllowFileAccessFromFiles,
  CefApplication_GetAllowRunningInsecureContent,
  CefApplication_SetAllowRunningInsecureContent,
  CefApplication_GetDisableJavascript,
  CefApplication_SetDisableJavascript,
  CefApplication_GetAllowUniversalAccessFromFileUrls,
  CefApplication_SetAllowUniversalAccessFromFileUrls,
  CefApplication_GetAllowInsecureLocalhost,
  CefApplication_SetAllowInsecureLocalhost,
  CefApplication_GetDefaultEncoding,
  CefApplication_SetDefaultEncoding,
  CefApplication_GetChromeVersion,
  CefApplication_InitGlobalCEFApp,
  CefApplication_FinalGlobalCEFApp;

