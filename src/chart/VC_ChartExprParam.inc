

function ChartExprParam_Create(AOwner: TCollection): TChartExprParam; extdecl;
begin
  handleExceptionBegin
  Result :=  TChartExprParam.Create(AOwner);
  handleExceptionEnd
end;

procedure ChartExprParam_Free(AObj: TChartExprParam); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartExprParam_GetNamePath(AObj: TChartExprParam): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ChartExprParam_Assign(AObj: TChartExprParam; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartExprParam_ClassType(AObj: TChartExprParam): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartExprParam_ClassName(AObj: TChartExprParam): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartExprParam_InstanceSize(AObj: TChartExprParam): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartExprParam_InheritsFrom(AObj: TChartExprParam; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartExprParam_Equals(AObj: TChartExprParam; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartExprParam_GetHashCode(AObj: TChartExprParam): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ChartExprParam_ToString(AObj: TChartExprParam): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function ChartExprParam_GetCollection(AObj: TChartExprParam): TCollection; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Collection;
  handleExceptionEnd
end;

procedure ChartExprParam_SetCollection(AObj: TChartExprParam; AValue: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.Collection := AValue;
  handleExceptionEnd
end;

function ChartExprParam_GetIndex(AObj: TChartExprParam): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Index;
  handleExceptionEnd
end;

procedure ChartExprParam_SetIndex(AObj: TChartExprParam; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Index := AValue;
  handleExceptionEnd
end;

function ChartExprParam_GetDisplayName(AObj: TChartExprParam): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.DisplayName);
  handleExceptionEnd
end;

procedure ChartExprParam_SetDisplayName(AObj: TChartExprParam; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DisplayName := AValue;
  handleExceptionEnd
end;

function ChartExprParam_StaticClassType: TClass; extdecl;
begin
  Result := TChartExprParam;
end;

function ChartExprParam_GetName(AObj: TChartExprParam): String; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Name;
  handleExceptionEnd
end;

procedure ChartExprParam_SetName(AObj: TChartExprParam; AValue: String); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

procedure ChartExprParam_GetValue(AObj: TChartExprParam; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Value;
  handleExceptionEnd
end;

procedure ChartExprParam_SetValue(AObj: TChartExprParam; AValue: Double); extdecl;
begin
  handleExceptionBegin
  AObj.Value := AValue;
  handleExceptionEnd
end;

exports
  ChartExprParam_Create,
  ChartExprParam_Free,
  ChartExprParam_GetNamePath,
  ChartExprParam_Assign,
  ChartExprParam_ClassType,
  ChartExprParam_ClassName,
  ChartExprParam_InstanceSize,
  ChartExprParam_InheritsFrom,
  ChartExprParam_Equals,
  ChartExprParam_GetHashCode,
  ChartExprParam_ToString,
  ChartExprParam_GetCollection,
  ChartExprParam_SetCollection,
  ChartExprParam_GetIndex,
  ChartExprParam_SetIndex,
  ChartExprParam_GetDisplayName,
  ChartExprParam_SetDisplayName,
  ChartExprParam_StaticClassType,
  ChartExprParam_GetName,
  ChartExprParam_SetName,
  ChartExprParam_GetValue,
  ChartExprParam_SetValue;
