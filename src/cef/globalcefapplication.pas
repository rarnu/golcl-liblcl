unit GlobalCefApplication;

{$mode ObjFPC}{$H+}
{$I cef.inc}

interface

uses
  uCEFLazarusCocoa,
  uCEFApplication, uCEFWorkScheduler;

procedure CreateGlobalCEFApp;
procedure InitGlobalCEFApp;
procedure FinalGlobalCEFApp;

implementation

procedure GlobalCEFApp_OnScheduleMessagePumpWork(const aDelayMS : int64);
begin
  if (GlobalCEFWorkScheduler <> nil) then GlobalCEFWorkScheduler.ScheduleMessagePumpWork(aDelayMS);
end;

procedure CreateGlobalCEFApp;
begin
  if GlobalCEFApp <> nil then
    exit;

  GlobalCEFWorkScheduler := TCEFWorkScheduler.Create(nil);

  GlobalCEFApp                           := TCefApplication.Create;
  GlobalCEFApp.ExternalMessagePump       := True;
  GlobalCEFApp.MultiThreadedMessageLoop  := False;
  GlobalCEFApp.OnScheduleMessagePumpWork := @GlobalCEFApp_OnScheduleMessagePumpWork;

end;

procedure InitGlobalCEFApp;
begin
  {$IFDEF DARWIN}
  AddCrDelegate;
  if GlobalCEFApp = nil then begin
    CreateGlobalCEFApp;
    if not GlobalCEFApp.StartMainProcess then begin
      DestroyGlobalCEFApp;
      DestroyGlobalCEFWorkScheduler;
      halt(0); // exit the subprocess
    end;
  end;
  {$ENDIF}
end;

procedure FinalGlobalCEFApp;
begin
  {$IFDEF DARWIN}
  if GlobalCEFWorkScheduler <> nil then
    GlobalCEFWorkScheduler.StopScheduler;
  DestroyGlobalCEFApp;
  DestroyGlobalCEFWorkScheduler;
  {$ENDIF}
end;

end.

