unit CefBrowser;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, sysutils, Controls, uCEFChromiumWindow, uCEFChromium, uCEFInterfaces, ExtCtrls,
  uCEFTypes;

type

  { TBrowser }

  TBrowser = class(TObject)
  private
    FChromeWindow: TChromiumWindow;
    FOnAfterCreated: TNotifyEvent;
    FOnBeforeClose: TNotifyEvent;
    FOnInitComplete: TNotifyEvent;
    FOpenLinkPopup: Boolean;
    FTimer: TTimer;
    procedure AfterCreatedFired(Sender: TObject);
    procedure BeforeCloseFired(Sender: TObject);
    procedure BeforePopup(Sender: TObject; const browser: ICefBrowser;
      const frame: ICefFrame; const targetUrl, targetFrameName: ustring;
      targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean;
      const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo;
      var client: ICefClient; var settings: TCefBrowserSettings;
      var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean;
      var Result: Boolean);
    procedure SetOpenLinkPopup(AValue: Boolean);
    procedure TimerFired(Sender: TObject);
  public
    constructor Create(AOwnerParent: TWinControl; AAlign: TAlign);
    destructor Destroy; override;
    function GetChromiumWindow(): TChromiumWindow;
    function GetChromium(): TChromium;
  public
    property OpenLinkPopup: Boolean read FOpenLinkPopup write SetOpenLinkPopup;
    property OnInitComplete: TNotifyEvent read FOnInitComplete write FOnInitComplete;
    property OnAfterCreated: TNotifyEvent read FOnAfterCreated write FOnAfterCreated;
    property OnBeforeClose: TNotifyEvent read FOnBeforeClose write FOnBeforeClose;
  end;

implementation

{ TBrowser }

procedure TBrowser.TimerFired(Sender: TObject);
begin
  FTimer.Enabled:= False;
  if (not FChromeWindow.CreateBrowser) or (not FChromeWindow.Initialized) then begin
    FTimer.Enabled:= True;
  end else begin
    if Assigned(FOnInitComplete) then begin
      FOnInitComplete(FChromeWindow);
    end;
  end;
end;

procedure TBrowser.SetOpenLinkPopup(AValue: Boolean);
begin
  FOpenLinkPopup:=AValue;
  if FOpenLinkPopup then begin
    FChromeWindow.ChromiumBrowser.OnBeforePopup:= nil;
  end else begin
    FChromeWindow.ChromiumBrowser.OnBeforePopup:=@BeforePopup;
  end;
end;

procedure TBrowser.BeforePopup(Sender: TObject; const browser: ICefBrowser;
  const frame: ICefFrame; const targetUrl, targetFrameName: ustring;
  targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean;
  const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo;
  var client: ICefClient; var settings: TCefBrowserSettings;
  var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean;
  var Result: Boolean);
begin
  Result := (targetDisposition in [WOD_NEW_FOREGROUND_TAB, WOD_NEW_BACKGROUND_TAB, WOD_NEW_POPUP, WOD_NEW_WINDOW]);
  FChromeWindow.LoadURL(targetUrl);
end;

procedure TBrowser.AfterCreatedFired(Sender: TObject);
begin
  if Assigned(FOnAfterCreated) then begin
    FOnAfterCreated(FChromeWindow);
  end;
end;

procedure TBrowser.BeforeCloseFired(Sender: TObject);
begin
  if Assigned(FOnBeforeClose) then begin
    FOnBeforeClose(FChromeWindow);
  end;
end;

constructor TBrowser.Create(AOwnerParent: TWinControl; AAlign: TAlign);
begin
  FChromeWindow := TChromiumWindow.Create(AOwnerParent);
  FChromeWindow.Parent := AOwnerParent;
  FChromeWindow.Align:= AAlign;
  FChromeWindow.OnAfterCreated:=@AfterCreatedFired;
  FChromeWindow.OnBeforeClose:=@BeforeCloseFired;
  SetOpenLinkPopup(False);
  FTimer := TTimer.Create(AOwnerParent);
  FTimer.Enabled:= False;
  FTimer.OnTimer:=@TimerFired;
end;

destructor TBrowser.Destroy;
begin
  FTimer.Free;
  FChromeWindow.CloseBrowser(True);
  FChromeWindow.Free;
  inherited Destroy;
end;

function TBrowser.GetChromiumWindow: TChromiumWindow;
begin
  Result := FChromeWindow;
end;

function TBrowser.GetChromium: TChromium;
begin
  Result := FChromeWindow.ChromiumBrowser;
end;

end.
