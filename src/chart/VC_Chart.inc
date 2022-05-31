
function Chart_Create(AOwner: TComponent): TChart; extdecl;
begin
  handleExceptionBegin
  Result :=  TChart.Create(AOwner);
  handleExceptionEnd
end;

procedure Chart_Free(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_CanFocus(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.CanFocus;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ContainsControl(AObj: TChart; Control: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ContainsControl(Control);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:2=nonPtr
function Chart_ControlAtPos(AObj: TChart; var Pos: TPoint; AllowDisabled: LongBool; AllowCharts: LongBool): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowCharts);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_DisableAlign(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.DisableAlign;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_EnableAlign(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.EnableAlign;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_FindChildControl(AObj: TChart; ControlName: PChar): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindChildControl(ControlName);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_FlipChildren(AObj: TChart; AllLevels: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.FlipChildren(AllLevels);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_Focused(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Focused;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_HandleAllocated(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HandleAllocated;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_InsertControl(AObj: TChart; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.InsertControl(AControl);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_Invalidate(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_PaintTo(AObj: TChart; DC: HDC; X: Integer; Y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PaintTo(DC, X, Y);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_RemoveControl(AObj: TChart; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveControl(AControl);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_Realign(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.Realign;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_Repaint(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.Repaint;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_ScaleBy(AObj: TChart; M: Integer; D: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleBy(M, D);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_ScrollBy(AObj: TChart; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScrollBy(DeltaX, DeltaY);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_SetBounds(AObj: TChart; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_SetFocus(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.SetFocus;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_Update(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_BringToFront(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure Chart_ClientToScreen(AObj: TChart; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToScreen(Point);
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure Chart_ClientToParent(AObj: TChart; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_Dragging(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Dragging;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_HasParent(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_Hide(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.Hide;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_Perform(AObj: TChart; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_Refresh(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure Chart_ScreenToClient(AObj: TChart; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScreenToClient(Point);
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure Chart_ParentToClient(AObj: TChart; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_SendToBack(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_Show(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.Show;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_GetTextBuf(AObj: TChart; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_GetTextLen(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  {$ifdef darwin}Length(AObj.Caption){$else}AObj.GetTextLen{$endif};
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_SetTextBuf(AObj: TChart; Buffer: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_FindComponent(AObj: TChart; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_GetNamePath(AObj: TChart): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_Assign(AObj: TChart; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ClassType(AObj: TChart): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ClassName(AObj: TChart): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_InstanceSize(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_InheritsFrom(AObj: TChart; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_Equals(AObj: TChart; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_GetHashCode(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ToString(AObj: TChart): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_AnchorToNeighbour(AObj: TChart; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToNeighbour(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_AnchorParallel(AObj: TChart; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorParallel(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_AnchorHorizontalCenterTo(AObj: TChart; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_AnchorVerticalCenterTo(AObj: TChart; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_AnchorSame(AObj: TChart; ASide: TAnchorKind; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSame(ASide, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_AnchorAsAlign(AObj: TChart; ATheAlign: TAlign; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorAsAlign(ATheAlign, ASpace);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_AnchorClient(AObj: TChart; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorClient(ASpace);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ScaleDesignToForm(AObj: TChart; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleDesignToForm(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ScaleFormToDesign(AObj: TChart; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFormToDesign(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_Scale96ToForm(AObj: TChart; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToForm(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ScaleFormTo96(AObj: TChart; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFormTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_Scale96ToFont(AObj: TChart; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToFont(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ScaleFontTo96(AObj: TChart; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFontTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ScaleScreenToFont(AObj: TChart; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleScreenToFont(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ScaleFontToScreen(AObj: TChart; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFontToScreen(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_Scale96ToScreen(AObj: TChart; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToScreen(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Chart_ScaleScreenTo96(AObj: TChart; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleScreenTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_AutoAdjustLayout(AObj: TChart; AMode: TLayoutAdjustmentPolicy; AFromPPI: Integer; AToPPI: Integer; AOldFormWidth: Integer; ANewFormWidth: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AutoAdjustLayout(AMode, AFromPPI, AToPPI, AOldFormWidth, ANewFormWidth);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Chart_FixDesignFontsPPI(AObj: TChart; ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:3=nonPtr
procedure Chart_ScaleFontsPPI(AObj: TChart; AToPPI: Integer; var AProportion: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

function Chart_GetDockClientCount(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClientCount;
  handleExceptionEnd
end;

function Chart_GetDockSite(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockSite;
  handleExceptionEnd
end;

procedure Chart_SetDockSite(AObj: TChart; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DockSite := AValue;
  handleExceptionEnd
end;

function Chart_GetDoubleBuffered(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DoubleBuffered;
  handleExceptionEnd
end;

procedure Chart_SetDoubleBuffered(AObj: TChart; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DoubleBuffered := AValue;
  handleExceptionEnd
end;

function Chart_GetMouseInClient(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.MouseInClient;
  handleExceptionEnd
end;

function Chart_GetVisibleDockClientCount(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.VisibleDockClientCount;
  handleExceptionEnd
end;

function Chart_GetBrush(AObj: TChart): TBrush; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Brush;
  handleExceptionEnd
end;

function Chart_GetControlCount(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlCount;
  handleExceptionEnd
end;

function Chart_GetHandle(AObj: TChart): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

function Chart_GetParentDoubleBuffered(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentDoubleBuffered;
  handleExceptionEnd
end;

procedure Chart_SetParentDoubleBuffered(AObj: TChart; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentDoubleBuffered := AValue;
  handleExceptionEnd
end;

function Chart_GetParentWindow(AObj: TChart): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentWindow;
  handleExceptionEnd
end;

procedure Chart_SetParentWindow(AObj: TChart; AValue: HWND); extdecl;
begin
  handleExceptionBegin
  AObj.ParentWindow := AValue;
  handleExceptionEnd
end;

function Chart_GetShowing(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Showing;
  handleExceptionEnd
end;

function Chart_GetTabOrder(AObj: TChart): TTabOrder; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabOrder;
  handleExceptionEnd
end;

procedure Chart_SetTabOrder(AObj: TChart; AValue: TTabOrder); extdecl;
begin
  handleExceptionBegin
  AObj.TabOrder := AValue;
  handleExceptionEnd
end;

function Chart_GetTabStop(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabStop;
  handleExceptionEnd
end;

procedure Chart_SetTabStop(AObj: TChart; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.TabStop := AValue;
  handleExceptionEnd
end;

function Chart_GetUseDockManager(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.UseDockManager;
  handleExceptionEnd
end;

procedure Chart_SetUseDockManager(AObj: TChart; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseDockManager := AValue;
  handleExceptionEnd
end;

function Chart_GetEnabled(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure Chart_SetEnabled(AObj: TChart; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function Chart_GetAction(AObj: TChart): TBasicAction; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Action;
  handleExceptionEnd
end;

procedure Chart_SetAction(AObj: TChart; AValue: TBasicAction); extdecl;
begin
  handleExceptionBegin
  AObj.Action := AValue;
  handleExceptionEnd
end;

function Chart_GetAlign(AObj: TChart): TAlign; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Align;
  handleExceptionEnd
end;

procedure Chart_SetAlign(AObj: TChart; AValue: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.Align := AValue;
  handleExceptionEnd
end;

function Chart_GetAnchors(AObj: TChart): TAnchors; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Anchors;
  handleExceptionEnd
end;

procedure Chart_SetAnchors(AObj: TChart; AValue: TAnchors); extdecl;
begin
  handleExceptionBegin
  AObj.Anchors := AValue;
  handleExceptionEnd
end;

function Chart_GetBiDiMode(AObj: TChart): TBiDiMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BiDiMode;
  handleExceptionEnd
end;

procedure Chart_SetBiDiMode(AObj: TChart; AValue: TBiDiMode); extdecl;
begin
  handleExceptionBegin
  AObj.BiDiMode := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure Chart_GetBoundsRect(AObj: TChart; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BoundsRect;
  handleExceptionEnd
end;

//PARAMS:2=nonPtr
procedure Chart_SetBoundsRect(AObj: TChart; var AValue: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.BoundsRect := AValue;
  handleExceptionEnd
end;

function Chart_GetClientHeight(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientHeight;
  handleExceptionEnd
end;

procedure Chart_SetClientHeight(AObj: TChart; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientHeight := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure Chart_GetClientOrigin(AObj: TChart; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientOrigin;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure Chart_GetClientRect(AObj: TChart; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientRect;
  handleExceptionEnd
end;

function Chart_GetClientWidth(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientWidth;
  handleExceptionEnd
end;

procedure Chart_SetClientWidth(AObj: TChart; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientWidth := AValue;
  handleExceptionEnd
end;

function Chart_GetConstraints(AObj: TChart): TSizeConstraints; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Constraints;
  handleExceptionEnd
end;

procedure Chart_SetConstraints(AObj: TChart; AValue: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.Constraints := AValue;
  handleExceptionEnd
end;

function Chart_GetControlState(AObj: TChart): TControlState; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlState;
  handleExceptionEnd
end;

procedure Chart_SetControlState(AObj: TChart; AValue: TControlState); extdecl;
begin
  handleExceptionBegin
  AObj.ControlState := AValue;
  handleExceptionEnd
end;

function Chart_GetControlStyle(AObj: TChart): TControlStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlStyle;
  handleExceptionEnd
end;

procedure Chart_SetControlStyle(AObj: TChart; AValue: TControlStyle); extdecl;
begin
  handleExceptionBegin
  AObj.ControlStyle := AValue;
  handleExceptionEnd
end;

function Chart_GetFloating(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Floating;
  handleExceptionEnd
end;

function Chart_GetShowHint(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShowHint;
  handleExceptionEnd
end;

procedure Chart_SetShowHint(AObj: TChart; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHint := AValue;
  handleExceptionEnd
end;

function Chart_GetVisible(AObj: TChart): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure Chart_SetVisible(AObj: TChart; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function Chart_GetParent(AObj: TChart): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Parent;
  handleExceptionEnd
end;

procedure Chart_SetParent(AObj: TChart; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.Parent := AValue;
  handleExceptionEnd
end;

function Chart_GetLeft(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

procedure Chart_SetLeft(AObj: TChart; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function Chart_GetTop(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

procedure Chart_SetTop(AObj: TChart; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function Chart_GetWidth(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure Chart_SetWidth(AObj: TChart; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function Chart_GetHeight(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure Chart_SetHeight(AObj: TChart; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function Chart_GetCursor(AObj: TChart): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Cursor;
  handleExceptionEnd
end;

procedure Chart_SetCursor(AObj: TChart; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.Cursor := AValue;
  handleExceptionEnd
end;

function Chart_GetHint(AObj: TChart): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Hint);
  handleExceptionEnd
end;

procedure Chart_SetHint(AObj: TChart; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Hint := AValue;
  handleExceptionEnd
end;

function Chart_GetComponentCount(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function Chart_GetComponentIndex(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure Chart_SetComponentIndex(AObj: TChart; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function Chart_GetOwner(AObj: TChart): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function Chart_GetName(AObj: TChart): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure Chart_SetName(AObj: TChart; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function Chart_GetTag(AObj: TChart): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure Chart_SetTag(AObj: TChart; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function Chart_GetAnchorSideLeft(AObj: TChart): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideLeft;
  handleExceptionEnd
end;

procedure Chart_SetAnchorSideLeft(AObj: TChart; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideLeft := AValue;
  handleExceptionEnd
end;

function Chart_GetAnchorSideTop(AObj: TChart): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideTop;
  handleExceptionEnd
end;

procedure Chart_SetAnchorSideTop(AObj: TChart; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideTop := AValue;
  handleExceptionEnd
end;

function Chart_GetAnchorSideRight(AObj: TChart): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideRight;
  handleExceptionEnd
end;

procedure Chart_SetAnchorSideRight(AObj: TChart; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideRight := AValue;
  handleExceptionEnd
end;

function Chart_GetAnchorSideBottom(AObj: TChart): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideBottom;
  handleExceptionEnd
end;

procedure Chart_SetAnchorSideBottom(AObj: TChart; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideBottom := AValue;
  handleExceptionEnd
end;

function Chart_GetChildSizing(AObj: TChart): TControlChildSizing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ChildSizing;
  handleExceptionEnd
end;

procedure Chart_SetChildSizing(AObj: TChart; AValue: TControlChildSizing); extdecl;
begin
  handleExceptionBegin
  AObj.ChildSizing := AValue;
  handleExceptionEnd
end;

function Chart_GetBorderSpacing(AObj: TChart): TControlBorderSpacing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderSpacing;
  handleExceptionEnd
end;

procedure Chart_SetBorderSpacing(AObj: TChart; AValue: TControlBorderSpacing); extdecl;
begin
  handleExceptionBegin
  AObj.BorderSpacing := AValue;
  handleExceptionEnd
end;

function Chart_GetDockClients(AObj: TChart; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClients[Index];
  handleExceptionEnd
end;

function Chart_GetControls(AObj: TChart; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Controls[Index];
  handleExceptionEnd
end;

function Chart_GetComponents(AObj: TChart; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function Chart_GetAnchorSide(AObj: TChart; AKind: TAnchorKind): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSide[AKind];
  handleExceptionEnd
end;

function Chart_StaticClassType: TClass; extdecl;
begin
  Result := TChart;
end;

function Chart_GetCanvas(AObj: TChart): TCanvas; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

procedure Chart_SetCanvas(AObj: TChart; ACanvas: TCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.Canvas := ACanvas;
  handleExceptionEnd
end;

function Chart_GetBorderStyle(AObj: TChart): TBorderStyle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BorderStyle;
  handleExceptionEnd
end;

procedure Chart_SetBorderStyle(AObj: TChart; AStyle: TBorderStyle); extdecl;
begin
  handleExceptionBegin
  AObj.BorderStyle := AStyle;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure Chart_SetOnPaint(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnPaint}
  {$DEFINE EventName := OnPaint}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure Chart_SetOnClick(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnClick}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

//EVENT_TYPE:TContextPopupEvent
procedure Chart_SetOnContextPopup(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent_OnContextPopup}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure Chart_SetOnDblClick(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnDblClick}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

//EVENT_TYPE:TDragDropEvent
procedure Chart_SetOnDragDrop(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent_OnDragDrop}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//EVENT_TYPE:TDragOverEvent
procedure Chart_SetOnDragOver(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent_OnDragOver}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//EVENT_TYPE:TEndDragEvent
procedure Chart_SetOnEndDrag(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent_OnEndDrag}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure Chart_SetOnMouseDown(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent_OnMouseDown}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure Chart_SetOnMouseEnter(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnMouseEnter}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure Chart_SetOnMouseLeave(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnMouseLeave}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//EVENT_TYPE:TMouseMoveEvent
procedure Chart_SetOnMouseMove(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent_OnMouseMove}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure Chart_SetOnMouseUp(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent_OnMouseUp}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure Chart_SetOnResize(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnResize}
  {$DEFINE EventName := OnResize}
  EventMethodCode
end;

function Chart_GetAutoFocus(AObj: TChart): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoFocus;
  handleExceptionEnd
end;

procedure Chart_SetAutoFocus(AObj: TChart; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.AutoFocus := AValue;
  handleExceptionEnd
end;

function Chart_GetAllowPanning(AObj: TChart): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowPanning;
  handleExceptionEnd
end;

procedure Chart_SetAllowPanning(AObj: TChart; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.AllowPanning := AValue;
  handleExceptionEnd
end;

function Chart_GetAllowZoom(AObj: TChart): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowZoom;
  handleExceptionEnd
end;

procedure Chart_SetAllowZoom(AObj: TChart; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.AllowZoom := AValue;
  handleExceptionEnd
end;

function Chart_GetAntialiasingMode(AObj: TChart): TChartAntialiasingMode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AntialiasingMode;
  handleExceptionEnd
end;

procedure Chart_SetAntialiasingMode(AObj: TChart; AValue: TChartAntialiasingMode); extdecl;
begin
  handleExceptionBegin
  AObj.AntialiasingMode := AValue;
  handleExceptionEnd
end;

function Chart_GetAxisList(AObj: TChart): TChartAxisList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AxisList;
  handleExceptionEnd
end;

procedure Chart_SetAxisList(AObj: TChart; AValue: TChartAxisList); extdecl;
begin
  handleExceptionBegin
  AObj.AxisList := AValue;
  handleExceptionEnd
end;

function Chart_GetAxisVisible(AObj: TChart): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AxisVisible;
  handleExceptionEnd
end;

procedure Chart_SetAxisVisible(AObj: TChart; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.AxisVisible := AValue;
  handleExceptionEnd
end;

function Chart_GetBackColor(AObj: TChart): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BackColor;
  handleExceptionEnd
end;

procedure Chart_SetBackColor(AObj: TChart; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.BackColor := AValue;
  handleExceptionEnd
end;

function Chart_GetBottomAxis(AObj: TChart): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BottomAxis;
  handleExceptionEnd
end;

procedure Chart_SetBottomAxis(AObj: TChart; AValue: TChartAxis); extdecl;
begin
  handleExceptionBegin
  AObj.BottomAxis := AValue;
  handleExceptionEnd
end;

function Chart_GetDepth(AObj: TChart): TChartDistance; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Depth;
  handleExceptionEnd
end;

procedure Chart_SetDepth(AObj: TChart; AValue: TChartDistance); extdecl;
begin
  handleExceptionBegin
  AObj.Depth := AValue;
  handleExceptionEnd
end;

function Chart_GetExpandPercentage(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExpandPercentage;
  handleExceptionEnd
end;

procedure Chart_SetExpandPercentage(AObj: TChart; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ExpandPercentage := AValue;
  handleExceptionEnd
end;

function Chart_GetExtent(AObj: TChart): TChartExtent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Extent;
  handleExceptionEnd
end;

procedure Chart_SetExtent(AObj: TChart; AValue: TChartExtent); extdecl;
begin
  handleExceptionBegin
  AObj.Extent := AValue;
  handleExceptionEnd
end;

function Chart_GetExtentSizeLimit(AObj: TChart): TChartExtent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExtentSizeLimit;
  handleExceptionEnd
end;

procedure Chart_SetExtentSizeLimit(AObj: TChart; AValue: TChartExtent); extdecl;
begin
  handleExceptionBegin
  AObj.ExtentSizeLimit := AValue;
  handleExceptionEnd
end;

function Chart_GetFoot(AObj: TChart): TChartTitle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Foot;
  handleExceptionEnd
end;

procedure Chart_SetFoot(AObj: TChart; AValue: TChartTitle); extdecl;
begin
  handleExceptionBegin
  AObj.Foot := AValue;
  handleExceptionEnd
end;

function Chart_GetFrame(AObj: TChart): TChartPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Frame;
  handleExceptionEnd
end;

procedure Chart_SetFrame(AObj: TChart; AValue: TChartPen); extdecl;
begin
  handleExceptionBegin
  AObj.Frame := AValue;
  handleExceptionEnd
end;

function Chart_GetGUIConnector(AObj: TChart): TChartGUIConnector; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GUIConnector;
  handleExceptionEnd
end;

procedure Chart_SetGUIConnector(AObj: TChart; AValue: TChartGUIConnector); extdecl;
begin
  handleExceptionBegin
  AObj.GUIConnector := AValue;
  handleExceptionEnd
end;

function Chart_GetLeftAxis(AObj: TChart): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LeftAxis;
  handleExceptionEnd
end;

procedure Chart_SetLeftAxis(AObj: TChart; AValue: TChartAxis); extdecl;
begin
  handleExceptionBegin
  AObj.LeftAxis := AValue;
  handleExceptionEnd
end;

function Chart_GetLegend(AObj: TChart): TChartLegend; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Legend;
  handleExceptionEnd
end;

procedure Chart_SetLegend(AObj: TChart; AValue: TChartLegend); extdecl;
begin
  handleExceptionBegin
  AObj.Legend := AValue;
  handleExceptionEnd
end;

function Chart_GetMargins(AObj: TChart): TChartMargins; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Margins;
  handleExceptionEnd
end;

procedure Chart_SetMargins(AObj: TChart; AValue: TChartMargins); extdecl;
begin
  handleExceptionBegin
  AObj.Margins := AValue;
  handleExceptionEnd
end;

function Chart_GetMarginsExternal(AObj: TChart): TChartMargins; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MarginsExternal;
  handleExceptionEnd
end;

procedure Chart_SetMarginsExternal(AObj: TChart; AValue: TChartMargins); extdecl;
begin
  handleExceptionBegin
  AObj.MarginsExternal := AValue;
  handleExceptionEnd
end;

function Chart_GetProportional(AObj: TChart): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Proportional;
  handleExceptionEnd
end;

procedure Chart_SetProportional(AObj: TChart; AValue: Boolean); extdecl;
begin
  handleExceptionBegin
  AObj.Proportional := AValue;
  handleExceptionEnd
end;

function Chart_GetSeries(AObj: TChart): TChartSeriesList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Series;
  handleExceptionEnd
end;

function Chart_GetTitle(AObj: TChart): TChartTitle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Title;
  handleExceptionEnd
end;

procedure Chart_SetTitle(AObj: TChart; AValue: TChartTitle); extdecl;
begin
  handleExceptionBegin
  AObj.Title := AValue;
  handleExceptionEnd
end;

function Chart_GetToolset(AObj: TChart): TBasicChartToolset; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Toolset;
  handleExceptionEnd
end;

procedure Chart_SetToolset(AObj: TChart; AValue: TBasicChartToolset); extdecl;
begin
  handleExceptionBegin
  AObj.Toolset := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TChartAfterCustomDrawEvent
procedure Chart_SetOnAfterCustomDrawBackground(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartAfterCustomDrawEvent_OnAfterCustomDrawBackground}
  {$DEFINE EventName := OnAfterCustomDrawBackground}
  EventMethodCode
end;

//EVENT_TYPE:TChartAfterCustomDrawEvent
procedure Chart_SetOnAfterCustomDrawBackWall(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartAfterCustomDrawEvent_OnAfterCustomDrawBackWall}
  {$DEFINE EventName := OnAfterCustomDrawBackWall}
  EventMethodCode
end;

//EVENT_TYPE:TChartDrawEvent
procedure Chart_SetOnAfterDraw(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartDrawEvent_OnAfterDraw}
  {$DEFINE EventName := OnAfterDraw}
  EventMethodCode
end;

//EVENT_TYPE:TChartAfterDrawEvent
procedure Chart_SetOnAfterDrawBackground(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartAfterDrawEvent_OnAfterDrawBackground}
  {$DEFINE EventName := OnAfterDrawBackground}
  EventMethodCode
end;

//EVENT_TYPE:TChartAfterDrawEvent
procedure Chart_SetOnAfterDrawBackWall(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartAfterDrawEvent_OnAfterDrawBackWall}
  {$DEFINE EventName := OnAfterDrawBackWall}
  EventMethodCode
end;

//EVENT_TYPE:TChartEvent
procedure Chart_SetOnAfterPaint(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartEvent_OnAfterPaint}
  {$DEFINE EventName := OnAfterPaint}
  EventMethodCode
end;

//EVENT_TYPE:TChartBeforeCustomDrawEvent
procedure Chart_SetOnBeforeCustomDrawBackground(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartBeforeCustomDrawEvent_OnBeforeCustomDrawBackground}
  {$DEFINE EventName := OnBeforeCustomDrawBackground}
  EventMethodCode
end;

//EVENT_TYPE:TChartBeforeDrawEvent
procedure Chart_SetOnBeforeDrawBackground(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartBeforeDrawEvent_OnBeforeDrawBackground}
  {$DEFINE EventName := OnBeforeDrawBackground}
  EventMethodCode
end;

//EVENT_TYPE:TChartBeforeCustomDrawEvent
procedure Chart_SetOnBeforeCustomDrawBackWall(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartBeforeCustomDrawEvent_OnBeforeCustomDrawBackWall}
  {$DEFINE EventName := OnBeforeCustomDrawBackWall}
  EventMethodCode
end;

//EVENT_TYPE:TChartBeforeDrawEvent
procedure Chart_SetOnBeforeDrawBackWall(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartBeforeDrawEvent_OnBeforeDrawBackWall}
  {$DEFINE EventName := OnBeforeDrawBackWall}
  EventMethodCode
end;

//EVENT_TYPE:TChartDrawLegendEvent
procedure Chart_SetOnDrawLegend(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartDrawLegendEvent_OnDrawLegend}
  {$DEFINE EventName := OnDrawLegend}
  EventMethodCode
end;

//EVENT_TYPE:TChartEvent
procedure Chart_SetOnExtentChanged(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartEvent_OnExtentChanged}
  {$DEFINE EventName := OnExtentChanged}
  EventMethodCode
end;

//EVENT_TYPE:TChartEvent
procedure Chart_SetOnExtentChanging(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartEvent_OnExtentChanging}
  {$DEFINE EventName := OnExtentChanging}
  EventMethodCode
end;

//EVENT_TYPE:TChartExtentValidateEvent
procedure Chart_SetOnExtentValidate(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartExtentValidateEvent_OnExtentValidate}
  {$DEFINE EventName := OnExtentValidate}
  EventMethodCode
end;

//EVENT_TYPE:TChartEvent
procedure Chart_SetOnFullExtentChanged(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartEvent_OnFullExtentChanged}
  {$DEFINE EventName := OnFullExtentChanged}
  EventMethodCode
end;

function Chart_GetActiveToolIndex(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ActiveToolIndex;
  handleExceptionEnd
end;

function Chart_GetBroadcaster(AObj: TChart): TBroadcaster; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Broadcaster;
  handleExceptionEnd
end;

function Chart_GetChartHeight(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChartHeight;
  handleExceptionEnd
end;

function Chart_GetChartWidth(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChartWidth;
  handleExceptionEnd
end;

function Chart_GetClipRect(AObj: TChart): TRect; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClipRect;
  handleExceptionEnd
end;

function Chart_GetClipRectBroadcaster(AObj: TChart): TBroadcaster; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClipRectBroadcaster;
  handleExceptionEnd
end;

function Chart_GetCurrentExtent(AObj: TChart): TDoubleRect; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CurrentExtent;
  handleExceptionEnd
end;

function Chart_GetExtentBroadcaster(AObj: TChart): TBroadcaster; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExtentBroadcaster;
  handleExceptionEnd
end;

function Chart_GetFullExtentBroadcaster(AObj: TChart): TBroadcaster; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FullExtentBroadcaster;
  handleExceptionEnd
end;

function Chart_GetHorAxis(AObj: TChart): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HorAxis;
  handleExceptionEnd
end;

function Chart_GetIsZoomed(AObj: TChart): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsZoomed;
  handleExceptionEnd
end;

function Chart_GetLogicalExtent(AObj: TChart): TDoubleRect; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LogicalExtent;
  handleExceptionEnd
end;

procedure Chart_SetLogicalExtent(AObj: TChart; AValue: TDoubleRect); extdecl;
begin
  handleExceptionBegin
  AObj.LogicalExtent := AValue;
  handleExceptionEnd
end;

function Chart_GetMinDataSpace(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MinDataSpace;
  handleExceptionEnd
end;

procedure Chart_SetMinDataSpace(AObj: TChart; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MinDataSpace := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TChartPaintEvent
procedure Chart_SetOnChartPaint(AObj: TChart; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTChartPaintEvent_OnChartPaint}
  {$DEFINE EventName := OnChartPaint}
  EventMethodCode
end;

function Chart_GetPrevLogicalExtent(AObj: TChart): TDoubleRect; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PrevLogicalExtent;
  handleExceptionEnd
end;

function Chart_GetRenderingParams(AObj: TChart): TChartRenderingParams; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RenderingParams;
  handleExceptionEnd
end;

procedure Chart_SetRenderingParams(AObj: TChart; AValue: TChartRenderingParams); extdecl;
begin
  handleExceptionBegin
  AObj.RenderingParams := AValue;
  handleExceptionEnd
end;

function Chart_GetSeriesCount(AObj: TChart): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SeriesCount;
  handleExceptionEnd
end;

function Chart_GetVertAxis(AObj: TChart): TChartAxis; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VertAxis;
  handleExceptionEnd
end;

function Chart_GetXGraphMax(AObj: TChart): Double; extdecl;
begin
  handleExceptionBegin
  Result := AObj.XGraphMax;
  handleExceptionEnd
end;

function Chart_GetXGraphMin(AObj: TChart): Double; extdecl;
begin
  handleExceptionBegin
  Result := AObj.XGraphMin;
  handleExceptionEnd
end;

function Chart_GetYGraphMax(AObj: TChart): Double; extdecl;
begin
  handleExceptionBegin
  Result := AObj.YGraphMax;
  handleExceptionEnd
end;

function Chart_GetYGraphMin(AObj: TChart): Double; extdecl;
begin
  handleExceptionBegin
  Result := AObj.YGraphMin;
  handleExceptionEnd
end;

function Chart_GetDrawer(AObj: TChart): IChartDrawer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Drawer;
  handleExceptionEnd
end;

function Chart_GetScalingValid(AObj: TChart): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScalingValid;
  handleExceptionEnd
end;

procedure Chart_LockClipRect(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.LockClipRect();
  handleExceptionEnd
end;

procedure Chart_UnlockClipRect(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.UnlockClipRect();
  handleExceptionEnd
end;

procedure Chart_EraseBackground(AObj: TChart; DC: HDC); extdecl;
begin
  handleExceptionBegin
  AObj.EraseBackground(DC);
  handleExceptionEnd
end;

procedure Chart_GetChildren(AObj: TChart; AProc: TGetChildProc;ARoot: TComponent); extdecl;
begin
  handleExceptionBegin
  AObj.GetChildren(AProc,ARoot);
  handleExceptionEnd
end;

procedure Chart_Paint(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;

procedure Chart_SetChildOrder(AObj: TChart; Child: TComponent;Order: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetChildOrder(Child,Order);
  handleExceptionEnd
end;

procedure Chart_DrawLineHoriz(AObj: TChart; ADrawer: IChartDrawer;AY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DrawLineHoriz(ADrawer,AY);
  handleExceptionEnd
end;

procedure Chart_DrawLineVert(AObj: TChart; ADrawer: IChartDrawer;AX: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DrawLineVert(ADrawer,AX);
  handleExceptionEnd
end;

function Chart_IsPointInViewPort(AObj: TChart; AP: TDoublePoint): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsPointInViewPort(AP);
  handleExceptionEnd
end;

procedure Chart_AddSeries(AObj: TChart; ASeries: TBasicChartSeries); extdecl;
begin
  handleExceptionBegin
  AObj.AddSeries(ASeries);
  handleExceptionEnd
end;

procedure Chart_ClearSeries(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.ClearSeries();
  handleExceptionEnd
end;

function Chart_Clone(AObj: TChart): TChart; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Clone();
  handleExceptionEnd
end;

procedure Chart_CopyToClipboard(AObj: TChart; AClass: TRasterImageClass); extdecl;
begin
  handleExceptionBegin
  AObj.CopyToClipboard(AClass);
  handleExceptionEnd
end;

procedure Chart_CopyToClipboardBitmap(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.CopyToClipboardBitmap();
  handleExceptionEnd
end;

procedure Chart_DeleteSeries(AObj: TChart; ASeries: TBasicChartSeries); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteSeries(ASeries);
  handleExceptionEnd
end;

procedure Chart_DisableRedrawing(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.DisableRedrawing();
  handleExceptionEnd
end;

procedure Chart_Draw(AObj: TChart; ADrawer: IChartDrawer;ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(ADrawer,ARect);
  handleExceptionEnd
end;

procedure Chart_DrawLegendOn(AObj: TChart; ACanvas: TCanvas;var ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.DrawLegendOn(ACanvas,ARect);
  handleExceptionEnd
end;

procedure Chart_EnableRedrawing(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.EnableRedrawing();
  handleExceptionEnd
end;

procedure Chart_GetAllSeriesAxisLimits(AObj: TChart; AAxis: TChartAxis;var AMin, AMax: Double); extdecl;
begin
  handleExceptionBegin
  AObj.GetAllSeriesAxisLimits(AAxis,AMin, AMax);
  handleExceptionEnd
end;

function Chart_GetFullExtent(AObj: TChart): TDoubleRect; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFullExtent();
  handleExceptionEnd
end;

function Chart_GetLegendItems(AObj: TChart; AIncludeHidden: Boolean = false): TChartLegendItems; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLegendItems(AIncludeHidden);
  handleExceptionEnd
end;

procedure Chart_PaintOnAuxCanvas(AObj: TChart; ACanvas: TCanvas;ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.PaintOnAuxCanvas(ACanvas,ARect);
  handleExceptionEnd
end;

procedure Chart_PaintOnCanvas(AObj: TChart; ACanvas: TCanvas;ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.PaintOnCanvas(ACanvas,ARect);
  handleExceptionEnd
end;

procedure Chart_Prepare(AObj: TChart); extdecl;
begin
  handleExceptionBegin
  AObj.Prepare();
  handleExceptionEnd
end;

procedure Chart_RemoveSeries(AObj: TChart; ASeries: TBasicChartSeries); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveSeries(ASeries);
  handleExceptionEnd
end;

procedure Chart_SaveToBitmapFile(AObj: TChart; AFileName: String); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToBitmapFile(AFileName);
  handleExceptionEnd
end;

procedure Chart_SaveToFile(AObj: TChart; AClass: TRasterImageClass;AFileName: String); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToFile(AClass,AFileName);
  handleExceptionEnd
end;

function Chart_SaveToImage(AObj: TChart; AClass: TRasterImageClass): TRasterImage; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SaveToImage(AClass);
  handleExceptionEnd
end;

procedure Chart_StyleChanged(AObj: TChart; Sender: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.StyleChanged(Sender);
  handleExceptionEnd
end;

function Chart_UsesBuiltinToolset(AObj: TChart): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UsesBuiltinToolset();
  handleExceptionEnd
end;

procedure Chart_ZoomFull(AObj: TChart; AImmediateRecalc: Boolean = false); extdecl;
begin
  handleExceptionBegin
  AObj.ZoomFull(AImmediateRecalc);
  handleExceptionEnd
end;

function Chart_GraphToImage(AObj: TChart; AGraphPoint: TDoublePoint): TPoint; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GraphToImage(AGraphPoint);
  handleExceptionEnd
end;

function Chart_ImageToGraph(AObj: TChart; APoint: TPoint): TDoublePoint; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ImageToGraph(APoint);
  handleExceptionEnd
end;

function Chart_XGraphToImage(AObj: TChart; AX: Double): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.XGraphToImage(AX);
  handleExceptionEnd
end;

procedure Chart_XImageToGraph(AObj: TChart; AX: Integer; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.XImageToGraph(AX);
  handleExceptionEnd
end;

function Chart_YGraphToImage(AObj: TChart; AY: Double): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.YGraphToImage(AY);
  handleExceptionEnd
end;

procedure Chart_YImageToGraph(AObj: TChart; AY: Integer; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.YImageToGraph(AY);
  handleExceptionEnd
end;


exports
  Chart_Create,
  Chart_Free,
  Chart_CanFocus,
  Chart_ContainsControl,
  Chart_ControlAtPos,
  Chart_DisableAlign,
  Chart_EnableAlign,
  Chart_FindChildControl,
  Chart_FlipChildren,
  Chart_Focused,
  Chart_HandleAllocated,
  Chart_InsertControl,
  Chart_Invalidate,
  Chart_PaintTo,
  Chart_RemoveControl,
  Chart_Realign,
  Chart_Repaint,
  Chart_ScaleBy,
  Chart_ScrollBy,
  Chart_SetBounds,
  Chart_SetFocus,
  Chart_Update,
  Chart_BringToFront,
  Chart_ClientToScreen,
  Chart_ClientToParent,
  Chart_Dragging,
  Chart_HasParent,
  Chart_Hide,
  Chart_Perform,
  Chart_Refresh,
  Chart_ScreenToClient,
  Chart_ParentToClient,
  Chart_SendToBack,
  Chart_Show,
  Chart_GetTextBuf,
  Chart_GetTextLen,
  Chart_SetTextBuf,
  Chart_FindComponent,
  Chart_GetNamePath,
  Chart_Assign,
  Chart_ClassType,
  Chart_ClassName,
  Chart_InstanceSize,
  Chart_InheritsFrom,
  Chart_Equals,
  Chart_GetHashCode,
  Chart_ToString,
  Chart_AnchorToNeighbour,
  Chart_AnchorParallel,
  Chart_AnchorHorizontalCenterTo,
  Chart_AnchorVerticalCenterTo,
  Chart_AnchorSame,
  Chart_AnchorAsAlign,
  Chart_AnchorClient,
  Chart_ScaleDesignToForm,
  Chart_ScaleFormToDesign,
  Chart_Scale96ToForm,
  Chart_ScaleFormTo96,
  Chart_Scale96ToFont,
  Chart_ScaleFontTo96,
  Chart_ScaleScreenToFont,
  Chart_ScaleFontToScreen,
  Chart_Scale96ToScreen,
  Chart_ScaleScreenTo96,
  Chart_AutoAdjustLayout,
  Chart_FixDesignFontsPPI,
  Chart_ScaleFontsPPI,
  Chart_GetDockClientCount,
  Chart_GetDockSite,
  Chart_SetDockSite,
  Chart_GetDoubleBuffered,
  Chart_SetDoubleBuffered,
  Chart_GetMouseInClient,
  Chart_GetVisibleDockClientCount,
  Chart_GetBrush,
  Chart_GetControlCount,
  Chart_GetHandle,
  Chart_GetParentDoubleBuffered,
  Chart_SetParentDoubleBuffered,
  Chart_GetParentWindow,
  Chart_SetParentWindow,
  Chart_GetShowing,
  Chart_GetTabOrder,
  Chart_SetTabOrder,
  Chart_GetTabStop,
  Chart_SetTabStop,
  Chart_GetUseDockManager,
  Chart_SetUseDockManager,
  Chart_GetEnabled,
  Chart_SetEnabled,
  Chart_GetAction,
  Chart_SetAction,
  Chart_GetAlign,
  Chart_SetAlign,
  Chart_GetAnchors,
  Chart_SetAnchors,
  Chart_GetBiDiMode,
  Chart_SetBiDiMode,
  Chart_GetBoundsRect,
  Chart_SetBoundsRect,
  Chart_GetClientHeight,
  Chart_SetClientHeight,
  Chart_GetClientOrigin,
  Chart_GetClientRect,
  Chart_GetClientWidth,
  Chart_SetClientWidth,
  Chart_GetConstraints,
  Chart_SetConstraints,
  Chart_GetControlState,
  Chart_SetControlState,
  Chart_GetControlStyle,
  Chart_SetControlStyle,
  Chart_GetFloating,
  Chart_GetShowHint,
  Chart_SetShowHint,
  Chart_GetVisible,
  Chart_SetVisible,
  Chart_GetParent,
  Chart_SetParent,
  Chart_GetLeft,
  Chart_SetLeft,
  Chart_GetTop,
  Chart_SetTop,
  Chart_GetWidth,
  Chart_SetWidth,
  Chart_GetHeight,
  Chart_SetHeight,
  Chart_GetCursor,
  Chart_SetCursor,
  Chart_GetHint,
  Chart_SetHint,
  Chart_GetComponentCount,
  Chart_GetComponentIndex,
  Chart_SetComponentIndex,
  Chart_GetOwner,
  Chart_GetName,
  Chart_SetName,
  Chart_GetTag,
  Chart_SetTag,
  Chart_GetAnchorSideLeft,
  Chart_SetAnchorSideLeft,
  Chart_GetAnchorSideTop,
  Chart_SetAnchorSideTop,
  Chart_GetAnchorSideRight,
  Chart_SetAnchorSideRight,
  Chart_GetAnchorSideBottom,
  Chart_SetAnchorSideBottom,
  Chart_GetChildSizing,
  Chart_SetChildSizing,
  Chart_GetBorderSpacing,
  Chart_SetBorderSpacing,
  Chart_GetDockClients,
  Chart_GetControls,
  Chart_GetComponents,
  Chart_GetAnchorSide,
  Chart_StaticClassType,
  Chart_GetCanvas,
  Chart_SetCanvas,
  Chart_GetBorderStyle,
  Chart_SetBorderStyle,
  Chart_SetOnPaint,
  Chart_SetOnClick,
  Chart_SetOnContextPopup,
  Chart_SetOnDblClick,
  Chart_SetOnDragDrop,
  Chart_SetOnDragOver,
  Chart_SetOnEndDrag,
  Chart_SetOnMouseDown,
  Chart_SetOnMouseEnter,
  Chart_SetOnMouseLeave,
  Chart_SetOnMouseMove,
  Chart_SetOnMouseUp,
  Chart_SetOnResize,
  Chart_GetAutoFocus,
  Chart_SetAutoFocus,
  Chart_GetAllowPanning,
  Chart_SetAllowPanning,
  Chart_GetAllowZoom,
  Chart_SetAllowZoom,
  Chart_GetAntialiasingMode,
  Chart_SetAntialiasingMode,
  Chart_GetAxisList,
  Chart_SetAxisList,
  Chart_GetAxisVisible,
  Chart_SetAxisVisible,
  Chart_GetBackColor,
  Chart_SetBackColor,
  Chart_GetBottomAxis,
  Chart_SetBottomAxis,
  Chart_GetDepth,
  Chart_SetDepth,
  Chart_GetExpandPercentage,
  Chart_SetExpandPercentage,
  Chart_GetExtent,
  Chart_SetExtent,
  Chart_GetExtentSizeLimit,
  Chart_SetExtentSizeLimit,
  Chart_GetFoot,
  Chart_SetFoot,
  Chart_GetFrame,
  Chart_SetFrame,
  Chart_GetGUIConnector,
  Chart_SetGUIConnector,
  Chart_GetLeftAxis,
  Chart_SetLeftAxis,
  Chart_GetLegend,
  Chart_SetLegend,
  Chart_GetMargins,
  Chart_SetMargins,
  Chart_GetMarginsExternal,
  Chart_SetMarginsExternal,
  Chart_GetProportional,
  Chart_SetProportional,
  Chart_GetSeries,
  Chart_GetTitle,
  Chart_SetTitle,
  Chart_GetToolset,
  Chart_SetToolset,
  Chart_SetOnAfterCustomDrawBackground,
  Chart_SetOnAfterCustomDrawBackWall,
  Chart_SetOnAfterDraw,
  Chart_SetOnAfterDrawBackground,
  Chart_SetOnAfterDrawBackWall,
  Chart_SetOnAfterPaint,
  Chart_SetOnBeforeCustomDrawBackground,
  Chart_SetOnBeforeDrawBackground,
  Chart_SetOnBeforeCustomDrawBackWall,
  Chart_SetOnBeforeDrawBackWall,
  Chart_SetOnDrawLegend,
  Chart_SetOnExtentChanged,
  Chart_SetOnExtentChanging,
  Chart_SetOnExtentValidate,
  Chart_SetOnFullExtentChanged,
  Chart_GetActiveToolIndex,
  Chart_GetBroadcaster,
  Chart_GetChartHeight,
  Chart_GetChartWidth,
  Chart_GetClipRect,
  Chart_GetClipRectBroadcaster,
  Chart_GetCurrentExtent,
  Chart_GetExtentBroadcaster,
  Chart_GetFullExtentBroadcaster,
  Chart_GetHorAxis,
  Chart_GetIsZoomed,
  Chart_GetLogicalExtent,
  Chart_SetLogicalExtent,
  Chart_GetMinDataSpace,
  Chart_SetMinDataSpace,
  Chart_SetOnChartPaint,
  Chart_GetPrevLogicalExtent,
  Chart_GetRenderingParams,
  Chart_SetRenderingParams,
  Chart_GetSeriesCount,
  Chart_GetVertAxis,
  Chart_GetXGraphMax,
  Chart_GetXGraphMin,
  Chart_GetYGraphMax,
  Chart_GetYGraphMin,
  Chart_GetDrawer,
  Chart_GetScalingValid,
  Chart_LockClipRect,
  Chart_UnlockClipRect,
  Chart_EraseBackground,
  Chart_GetChildren,
  Chart_Paint,
  Chart_SetChildOrder,
  Chart_DrawLineHoriz,
  Chart_DrawLineVert,
  Chart_IsPointInViewPort,
  Chart_AddSeries,
  Chart_ClearSeries,
  Chart_Clone,
  Chart_CopyToClipboard,
  Chart_CopyToClipboardBitmap,
  Chart_DeleteSeries,
  Chart_DisableRedrawing,
  Chart_Draw,
  Chart_DrawLegendOn,
  Chart_EnableRedrawing,
  Chart_GetAllSeriesAxisLimits,
  Chart_GetFullExtent,
  Chart_GetLegendItems,
  Chart_PaintOnAuxCanvas,
  Chart_PaintOnCanvas,
  Chart_Prepare,
  Chart_RemoveSeries,
  Chart_SaveToBitmapFile,
  Chart_SaveToFile,
  Chart_SaveToImage,
  Chart_StyleChanged,
  Chart_UsesBuiltinToolset,
  Chart_ZoomFull,
  Chart_GraphToImage,
  Chart_ImageToGraph,
  Chart_XGraphToImage,
  Chart_XImageToGraph,
  Chart_YGraphToImage,
  Chart_YImageToGraph;

