
function ChartAxisIntervalParams_Create(AOwner: TPersistent): TChartAxisIntervalParams; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartAxisIntervalParams.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartAxisIntervalParams_Free(AObj: TChartAxisIntervalParams); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function ChartAxisIntervalParams_StaticClassType: TClass; extdecl;
begin
  Result := TChartAxisIntervalParams;
end;

function ChartAxisIntervalParams_GetCount(AObj: TChartAxisIntervalParams): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

procedure ChartAxisIntervalParams_SetCount(AObj: TChartAxisIntervalParams; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Count := AValue;
  handleExceptionEnd
end;

function ChartAxisIntervalParams_GetMaxLength(AObj: TChartAxisIntervalParams): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MaxLength;
  handleExceptionEnd
end;

procedure ChartAxisIntervalParams_SetMaxLength(AObj: TChartAxisIntervalParams; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MaxLength := AValue;
  handleExceptionEnd
end;

function ChartAxisIntervalParams_GetMinLength(AObj: TChartAxisIntervalParams): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MinLength;
  handleExceptionEnd
end;

procedure ChartAxisIntervalParams_SetMinLength(AObj: TChartAxisIntervalParams; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MinLength := AValue;
  handleExceptionEnd
end;

function ChartAxisIntervalParams_GetNiceSteps(AObj: TChartAxisIntervalParams): String; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NiceSteps;
  handleExceptionEnd
end;

procedure ChartAxisIntervalParams_SetNiceSteps(AObj: TChartAxisIntervalParams; AValue: String); extdecl;
begin
  handleExceptionBegin
  AObj.NiceSteps := AValue;
  handleExceptionEnd
end;

function ChartAxisIntervalParams_GetOptions(AObj: TChartAxisIntervalParams): TAxisIntervalParamOptions; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Options;
  handleExceptionEnd
end;

procedure ChartAxisIntervalParams_SetOptions(AObj: TChartAxisIntervalParams; AValue: TAxisIntervalParamOptions); extdecl;
begin
  handleExceptionBegin
  AObj.Options := AValue;
  handleExceptionEnd
end;

function ChartAxisIntervalParams_GetTolerance(AObj: TChartAxisIntervalParams): Cardinal; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Tolerance;
  handleExceptionEnd
end;

procedure ChartAxisIntervalParams_SetTolerance(AObj: TChartAxisIntervalParams; AValue: Cardinal); extdecl;
begin
  handleExceptionBegin
  AObj.Tolerance := AValue;
  handleExceptionEnd
end;


exports
  ChartAxisIntervalParams_Create,
  ChartAxisIntervalParams_Free,
  ChartAxisIntervalParams_StaticClassType,
  ChartAxisIntervalParams_GetCount,
  ChartAxisIntervalParams_SetCount,
  ChartAxisIntervalParams_GetMaxLength,
  ChartAxisIntervalParams_SetMaxLength,
  ChartAxisIntervalParams_GetMinLength,
  ChartAxisIntervalParams_SetMinLength,
  ChartAxisIntervalParams_GetNiceSteps,
  ChartAxisIntervalParams_SetNiceSteps,
  ChartAxisIntervalParams_GetOptions,
  ChartAxisIntervalParams_SetOptions,
  ChartAxisIntervalParams_GetTolerance,
  ChartAxisIntervalParams_SetTolerance;



