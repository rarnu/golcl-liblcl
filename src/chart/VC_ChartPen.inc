function ChartPen_Create(): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartPen.Create;
  handleExceptionEnd
end;

procedure ChartPen_Free(AObj: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartPen_StaticClassType: TClass; extdecl;
begin
  Result := TChartPen;
end;

function ChartPen_GetVisible(AObj: TChartPen): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

procedure ChartPen_SetVisible(AObj: TChartPen; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

procedure ChartPen_Assign(AObj: TChartPen; ASource: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(ASource);
  handleExceptionEnd
end;

function ChartPen_EffVisible(AObj: TChartPen): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EffVisible();
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartPen_GetNamePath(AObj: TChartPen): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartPen_ClassType(AObj: TChartPen): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartPen_ClassName(AObj: TChartPen): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartPen_InstanceSize(AObj: TChartPen): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartPen_InheritsFrom(AObj: TChartPen; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartPen_Equals(AObj: TChartPen; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartPen_GetHashCode(AObj: TChartPen): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartPen_ToString(AObj: TChartPen): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function ChartPen_GetHandle(AObj: TChartPen): HPEN; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

procedure ChartPen_SetHandle(AObj: TChartPen; AValue: HPEN); extdecl;
begin
  handleExceptionBegin
  AObj.Handle := AValue;
  handleExceptionEnd
end;

function ChartPen_GetColor(AObj: TChartPen): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Color;
  handleExceptionEnd
end;

procedure ChartPen_SetColor(AObj: TChartPen; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Color := AValue;
  handleExceptionEnd
end;

function ChartPen_GetMode(AObj: TChartPen): TPenMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Mode;
  handleExceptionEnd
end;

procedure ChartPen_SetMode(AObj: TChartPen; AValue: TPenMode); extdecl;
begin
  handleExceptionBegin
  AObj.Mode := AValue;
  handleExceptionEnd
end;

function ChartPen_GetStyle(AObj: TChartPen): TPenStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Style;
  handleExceptionEnd
end;

procedure ChartPen_SetStyle(AObj: TChartPen; AValue: TPenStyle); extdecl;
begin
  handleExceptionBegin
  AObj.Style := AValue;
  handleExceptionEnd
end;

function ChartPen_GetWidth(AObj: TChartPen): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure ChartPen_SetWidth(AObj: TChartPen; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure ChartPen_SetOnChange(AObj: TChartPen; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnChange}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  ChartPen_Create,
  ChartPen_Free,
  ChartPen_StaticClassType,
  ChartPen_GetVisible,
  ChartPen_SetVisible,
  ChartPen_Assign,
  ChartPen_EffVisible,
  ChartPen_GetNamePath,
  ChartPen_ClassType,
  ChartPen_ClassName,
  ChartPen_InstanceSize,
  ChartPen_InheritsFrom,
  ChartPen_Equals,
  ChartPen_GetHashCode,
  ChartPen_ToString,
  ChartPen_GetHandle,
  ChartPen_SetHandle,
  ChartPen_GetColor,
  ChartPen_SetColor,
  ChartPen_GetMode,
  ChartPen_SetMode,
  ChartPen_GetStyle,
  ChartPen_SetStyle,
  ChartPen_GetWidth,
  ChartPen_SetWidth,
  ChartPen_SetOnChange;
