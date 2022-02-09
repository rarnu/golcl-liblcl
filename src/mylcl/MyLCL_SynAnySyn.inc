// TODO: synanysyn

function SynAnySyn_Create(AOwner: TComponent): TSynAnySyn; extdecl;
begin
  handleExceptionBegin
  Result := TSynAnySyn.Create(AOwner);
  handleExceptionEnd
end;

procedure SynAnySyn_Free(AObj: TSynAnySyn); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function SynAnySyn_StaticClassType: TClass; extdecl;
begin
  Result := TSynAnySyn;
end;

exports
  SynAnySyn_Create,
  SynAnySyn_Free,
  SynAnySyn_StaticClassType;
