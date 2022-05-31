library liblcl;

{$mode delphi}{$H+}

uses
  {$IFNDEF WINDOWS} cthreads, {$ENDIF}
  interfaces, Classes, SysUtils,
  {$I UsesAll.inc}
  LCLVersion, uFormDesignerFile,
  {$IFDEF DARWIN}
  uMacOSPatchs,
  {$ENDIF}
  {$IFDEF LINUX}
  uLinuxPatchs,
  {$ENDIF}
  uExceptionHandle,
  uComponents,
  uControlPatchs;

{$IFDEF WINDOWS}
  {$R *.res}
{$ENDIF}

{$I ExtDecl.inc}
{$I LazarusDef.inc}

{$I uExport.inc}

// 用户自己定义的组件
{$I UserDefineComponents.inc}


begin
  RequireDerivedFormResource := False;
  IsMultiThread := True;
  InitLazarusDef;
end.

