function SynEdit_Create(AOwner: TComponent): TSynEdit; extdecl;
begin
  handleExceptionBegin
  Result := TSynEdit.Create(AOwner);
  handleExceptionEnd
end;

procedure SynEdit_Free(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

procedure SynEdit_Clear(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Clear;
  handleExceptionEnd
end;

procedure SynEdit_ClearSelection(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.ClearSelection;
  handleExceptionEnd
end;

procedure SynEdit_CopyToClipboard(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.CopyToClipboard;
  handleExceptionEnd
end;

procedure SynEdit_CutToClipboard(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.CutToClipboard;
  handleExceptionEnd
end;

procedure SynEdit_PasteFromClipboard(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.PasteFromClipboard;
  handleExceptionEnd
end;

procedure SynEdit_Undo(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Undo;
  handleExceptionEnd
end;

procedure SynEdit_Redo(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Redo;
  handleExceptionEnd
end;

procedure SynEdit_SelectAll(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.SelectAll;
  handleExceptionEnd
end;

function SynEdit_CanFocus(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.CanFocus;
  handleExceptionEnd
end;

function SynEdit_ContainsControl(AObj: TSynEdit; Control: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ContainsControl(Control);
  handleExceptionEnd
end;

function SynEdit_ControlAtPos(AObj: TSynEdit; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
  handleExceptionEnd
end;

procedure SynEdit_DisableAlign(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.DisableAlign;
  handleExceptionEnd
end;

procedure SynEdit_EnableAlign(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.EnableAlign;
  handleExceptionEnd
end;

function SynEdit_FindChildControl(AObj: TSynEdit; ControlName: PChar): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindChildControl(ControlName);
  handleExceptionEnd
end;

procedure SynEdit_FlipChildren(AObj: TSynEdit; AllLevels: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.FlipChildren(AllLevels);
  handleExceptionEnd
end;

function SynEdit_Focused(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Focused;
  handleExceptionEnd
end;

function SynEdit_HandleAllocated(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HandleAllocated;
  handleExceptionEnd
end;

procedure SynEdit_InsertControl(AObj: TSynEdit; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.InsertControl(AControl);
  handleExceptionEnd
end;

procedure SynEdit_Invalidate(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate;
  handleExceptionEnd
end;

procedure SynEdit_PaintTo(AObj: TSynEdit; DC: HDC; X: Integer; Y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PaintTo(DC, X, Y);
  handleExceptionEnd
end;

procedure SynEdit_RemoveControl(AObj: TSynEdit; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveControl(AControl);
  handleExceptionEnd
end;

procedure SynEdit_Realign(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Realign;
  handleExceptionEnd
end;

procedure SynEdit_Repaint(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Repaint;
  handleExceptionEnd
end;

procedure SynEdit_ScaleBy(AObj: TSynEdit; M: Integer; D: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleBy(M, D);
  handleExceptionEnd
end;

procedure SynEdit_ScrollBy(AObj: TSynEdit; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScrollBy(DeltaX, DeltaY);
  handleExceptionEnd
end;

procedure SynEdit_SetBounds(AObj: TSynEdit; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
  handleExceptionEnd
end;

procedure SynEdit_SetFocus(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.SetFocus;
  handleExceptionEnd
end;

procedure SynEdit_Update(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

procedure SynEdit_BringToFront(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront;
  handleExceptionEnd
end;

procedure SynEdit_ClientToScreen(AObj: TSynEdit; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToScreen(Point);
  handleExceptionEnd
end;

procedure SynEdit_ClientToParent(AObj: TSynEdit; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

function SynEdit_Dragging(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Dragging;
  handleExceptionEnd
end;

function SynEdit_HasParent(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

procedure SynEdit_Hide(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Hide;
  handleExceptionEnd
end;

function SynEdit_Perform(AObj: TSynEdit; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

procedure SynEdit_Refresh(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh;
  handleExceptionEnd
end;

procedure SynEdit_ScreenToClient(AObj: TSynEdit; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScreenToClient(Point);
  handleExceptionEnd
end;

procedure SynEdit_ParentToClient(AObj: TSynEdit; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

procedure SynEdit_SendToBack(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack;
  handleExceptionEnd
end;

procedure SynEdit_Show(AObj: TSynEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Show;
  handleExceptionEnd
end;

function SynEdit_GetTextBuf(AObj: TSynEdit; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

function SynEdit_GetTextLen(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  {$ifdef darwin}Length(AObj.Caption){$else}AObj.GetTextLen{$endif};
  handleExceptionEnd
end;

procedure SynEdit_SetTextBuf(AObj: TSynEdit; Buffer: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

function SynEdit_FindComponent(AObj: TSynEdit; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

function SynEdit_GetNamePath(AObj: TSynEdit): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

procedure SynEdit_Assign(AObj: TSynEdit; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

function SynEdit_ClassType(AObj: TSynEdit): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

function SynEdit_ClassName(AObj: TSynEdit): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function SynEdit_InstanceSize(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

function SynEdit_InheritsFrom(AObj: TSynEdit; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function SynEdit_Equals(AObj: TSynEdit; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

function SynEdit_GetHashCode(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

function SynEdit_ToString(AObj: TSynEdit): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

procedure SynEdit_AnchorToNeighbour(AObj: TSynEdit; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToNeighbour(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

procedure SynEdit_AnchorParallel(AObj: TSynEdit; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorParallel(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

procedure SynEdit_AnchorHorizontalCenterTo(AObj: TSynEdit; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(ASibling);
  handleExceptionEnd
end;

procedure SynEdit_AnchorVerticalCenterTo(AObj: TSynEdit; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(ASibling);
  handleExceptionEnd
end;

procedure SynEdit_AnchorSame(AObj: TSynEdit; ASide: TAnchorKind; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSame(ASide, ASibling);
  handleExceptionEnd
end;

procedure SynEdit_AnchorAsAlign(AObj: TSynEdit; ATheAlign: TAlign; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorAsAlign(ATheAlign, ASpace);
  handleExceptionEnd
end;

procedure SynEdit_AnchorClient(AObj: TSynEdit; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorClient(ASpace);
  handleExceptionEnd
end;

function SynEdit_ScaleDesignToForm(AObj: TSynEdit; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleDesignToForm(ASize);
  handleExceptionEnd
end;

function SynEdit_ScaleFormToDesign(AObj: TSynEdit; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFormToDesign(ASize);
  handleExceptionEnd
end;

function SynEdit_Scale96ToForm(AObj: TSynEdit; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToForm(ASize);
  handleExceptionEnd
end;

function SynEdit_ScaleFormTo96(AObj: TSynEdit; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFormTo96(ASize);
  handleExceptionEnd
end;

function SynEdit_Scale96ToFont(AObj: TSynEdit; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToFont(ASize);
  handleExceptionEnd
end;

function SynEdit_ScaleFontTo96(AObj: TSynEdit; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFontTo96(ASize);
  handleExceptionEnd
end;

function SynEdit_ScaleScreenToFont(AObj: TSynEdit; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleScreenToFont(ASize);
  handleExceptionEnd
end;

function SynEdit_ScaleFontToScreen(AObj: TSynEdit; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFontToScreen(ASize);
  handleExceptionEnd
end;

function SynEdit_Scale96ToScreen(AObj: TSynEdit; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToScreen(ASize);
  handleExceptionEnd
end;

function SynEdit_ScaleScreenTo96(AObj: TSynEdit; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleScreenTo96(ASize);
  handleExceptionEnd
end;

procedure SynEdit_AutoAdjustLayout(AObj: TSynEdit; AMode: TLayoutAdjustmentPolicy; AFromPPI: Integer; AToPPI: Integer; AOldFormWidth: Integer; ANewFormWidth: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AutoAdjustLayout(AMode, AFromPPI, AToPPI, AOldFormWidth, ANewFormWidth);
  handleExceptionEnd
end;

procedure SynEdit_FixDesignFontsPPI(AObj: TSynEdit; ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

procedure SynEdit_ScaleFontsPPI(AObj: TSynEdit; AToPPI: Integer; var AProportion: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

function SynEdit_GetAlign(AObj: TSynEdit): TAlign; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Align;
  handleExceptionEnd
end;

procedure SynEdit_SetAlign(AObj: TSynEdit; AValue: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.Align := AValue;
  handleExceptionEnd
end;

function SynEdit_GetAnchors(AObj: TSynEdit): TAnchors; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Anchors;
  handleExceptionEnd
end;

procedure SynEdit_SetAnchors(AObj: TSynEdit; AValue: TAnchors); extdecl;
begin
  handleExceptionBegin
  AObj.Anchors := AValue;
  handleExceptionEnd
end;

function SynEdit_GetAutoSize(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AutoSize;
  handleExceptionEnd
end;

procedure SynEdit_SetAutoSize(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AutoSize := AValue;
  handleExceptionEnd
end;

function SynEdit_GetBiDiMode(AObj: TSynEdit): TBiDiMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BiDiMode;
  handleExceptionEnd
end;

procedure SynEdit_SetBiDiMode(AObj: TSynEdit; AValue: TBiDiMode); extdecl;
begin
  handleExceptionBegin
  AObj.BiDiMode := AValue;
  handleExceptionEnd
end;

function SynEdit_GetBorderStyle(AObj: TSynEdit): TBorderStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderStyle;
  handleExceptionEnd
end;

procedure SynEdit_SetBorderStyle(AObj: TSynEdit; AValue: TBorderStyle); extdecl;
begin
  handleExceptionBegin
  AObj.BorderStyle := AValue;
  handleExceptionEnd
end;

function SynEdit_GetColor(AObj: TSynEdit): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Color;
  handleExceptionEnd
end;

procedure SynEdit_SetColor(AObj: TSynEdit; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Color := AValue;
  handleExceptionEnd
end;

function SynEdit_GetConstraints(AObj: TSynEdit): TSizeConstraints; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Constraints;
  handleExceptionEnd
end;

procedure SynEdit_SetConstraints(AObj: TSynEdit; AValue: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.Constraints := AValue;
  handleExceptionEnd
end;

function SynEdit_GetDoubleBuffered(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DoubleBuffered;
  handleExceptionEnd
end;

procedure SynEdit_SetDoubleBuffered(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DoubleBuffered := AValue;
  handleExceptionEnd
end;

function SynEdit_GetEnabled(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure SynEdit_SetEnabled(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function SynEdit_GetFont(AObj: TSynEdit): TFont; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Font;
  handleExceptionEnd
end;

procedure SynEdit_SetFont(AObj: TSynEdit; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.Font := AValue;
  handleExceptionEnd
end;

function SynEdit_GetHideSelection(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HideSelection;
  handleExceptionEnd
end;

procedure SynEdit_SetHideSelection(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.HideSelection := AValue;
  handleExceptionEnd
end;

function SynEdit_GetLines(AObj: TSynEdit): TStrings; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Lines;
  handleExceptionEnd
end;

procedure SynEdit_SetLines(AObj: TSynEdit; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.Lines := AValue;
  handleExceptionEnd
end;

function SynEdit_GetParentColor(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentColor;
  handleExceptionEnd
end;

procedure SynEdit_SetParentColor(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentColor := AValue;
  handleExceptionEnd
end;

function SynEdit_GetParentDoubleBuffered(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentDoubleBuffered;
  handleExceptionEnd
end;

procedure SynEdit_SetParentDoubleBuffered(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentDoubleBuffered := AValue;
  handleExceptionEnd
end;

function SynEdit_GetParentFont(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentFont;
  handleExceptionEnd
end;

procedure SynEdit_SetParentFont(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentFont := AValue;
  handleExceptionEnd
end;

function SynEdit_GetParentShowHint(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentShowHint;
  handleExceptionEnd
end;

procedure SynEdit_SetParentShowHint(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentShowHint := AValue;
  handleExceptionEnd
end;

function SynEdit_GetPopupMenu(AObj: TSynEdit): TPopupMenu; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PopupMenu;
  handleExceptionEnd
end;

procedure SynEdit_SetPopupMenu(AObj: TSynEdit; AValue: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.PopupMenu := AValue;
  handleExceptionEnd
end;

function SynEdit_GetReadOnly(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ReadOnly;
  handleExceptionEnd
end;

procedure SynEdit_SetReadOnly(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ReadOnly := AValue;
  handleExceptionEnd
end;

function SynEdit_GetScrollBars(AObj: TSynEdit): TScrollStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScrollBars;
  handleExceptionEnd
end;

procedure SynEdit_SetScrollBars(AObj: TSynEdit; AValue: TScrollStyle); extdecl;
begin
  handleExceptionBegin
  AObj.ScrollBars := AValue;
  handleExceptionEnd
end;

function SynEdit_GetShowHint(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShowHint;
  handleExceptionEnd
end;

procedure SynEdit_SetShowHint(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHint := AValue;
  handleExceptionEnd
end;

function SynEdit_GetTabOrder(AObj: TSynEdit): TTabOrder; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabOrder;
  handleExceptionEnd
end;

procedure SynEdit_SetTabOrder(AObj: TSynEdit; AValue: TTabOrder); extdecl;
begin
  handleExceptionBegin
  AObj.TabOrder := AValue;
  handleExceptionEnd
end;

function SynEdit_GetTabStop(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabStop;
  handleExceptionEnd
end;

procedure SynEdit_SetTabStop(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.TabStop := AValue;
  handleExceptionEnd
end;

function SynEdit_GetText(AObj: TSynEdit): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Text);
  handleExceptionEnd
end;

procedure SynEdit_SetText(AObj: TSynEdit; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Text := AValue;
  handleExceptionEnd
end;

function SynEdit_GetVisible(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure SynEdit_SetVisible(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

procedure SynEdit_SetOnChange(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnChange}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

procedure SynEdit_SetOnClick(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnClick}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

procedure SynEdit_SetOnContextPopup(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent_OnContextPopup}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

procedure SynEdit_SetOnDblClick(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnDblClick}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

procedure SynEdit_SetOnDragDrop(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent_OnDragDrop}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

procedure SynEdit_SetOnDragOver(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent_OnDragOver}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

procedure SynEdit_SetOnEndDrag(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent_OnEndDrag}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

procedure SynEdit_SetOnEnter(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnEnter}
  {$DEFINE EventName := OnEnter}
  EventMethodCode
end;

procedure SynEdit_SetOnExit(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnExit}
  {$DEFINE EventName := OnExit}
  EventMethodCode
end;

procedure SynEdit_SetOnKeyDown(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyEvent_OnKeyDown}
  {$DEFINE EventName := OnKeyDown}
  EventMethodCode
end;

procedure SynEdit_SetOnKeyPress(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyPressEvent_OnKeyPress}
  {$DEFINE EventName := OnKeyPress}
  EventMethodCode
end;

procedure SynEdit_SetOnKeyUp(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyEvent_OnKeyUp}
  {$DEFINE EventName := OnKeyUp}
  EventMethodCode
end;

procedure SynEdit_SetOnMouseDown(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent_OnMouseDown}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

procedure SynEdit_SetOnMouseEnter(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnMouseEnter}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

procedure SynEdit_SetOnMouseLeave(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnMouseLeave}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

procedure SynEdit_SetOnMouseMove(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent_OnMouseMove}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

procedure SynEdit_SetOnMouseUp(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent_OnMouseUp}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

function SynEdit_GetCanUndo(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.CanUndo;
  handleExceptionEnd
end;

function SynEdit_GetCanRedo(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.CanRedo;
  handleExceptionEnd
end;

function SynEdit_GetModified(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Modified;
  handleExceptionEnd
end;

procedure SynEdit_SetModified(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Modified := AValue;
  handleExceptionEnd
end;

function SynEdit_GetSelStart(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.SelStart;
  handleExceptionEnd
end;

procedure SynEdit_SetSelStart(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SelStart := AValue;
  handleExceptionEnd
end;

function SynEdit_GetSelText(AObj: TSynEdit): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.SelText);
  handleExceptionEnd
end;

procedure SynEdit_SetSelText(AObj: TSynEdit; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SelText := AValue;
  handleExceptionEnd
end;

function SynEdit_GetDockClientCount(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClientCount;
  handleExceptionEnd
end;

function SynEdit_GetDockSite(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockSite;
  handleExceptionEnd
end;

procedure SynEdit_SetDockSite(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DockSite := AValue;
  handleExceptionEnd
end;

function SynEdit_GetMouseInClient(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.MouseInClient;
  handleExceptionEnd
end;

function SynEdit_GetVisibleDockClientCount(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.VisibleDockClientCount;
  handleExceptionEnd
end;

function SynEdit_GetBrush(AObj: TSynEdit): TBrush; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Brush;
  handleExceptionEnd
end;

function SynEdit_GetControlCount(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlCount;
  handleExceptionEnd
end;

function SynEdit_GetHandle(AObj: TSynEdit): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

function SynEdit_GetParentWindow(AObj: TSynEdit): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentWindow;
  handleExceptionEnd
end;

procedure SynEdit_SetParentWindow(AObj: TSynEdit; AValue: HWND); extdecl;
begin
  handleExceptionBegin
  AObj.ParentWindow := AValue;
  handleExceptionEnd
end;

function SynEdit_GetShowing(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Showing;
  handleExceptionEnd
end;

function SynEdit_GetUseDockManager(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.UseDockManager;
  handleExceptionEnd
end;

procedure SynEdit_SetUseDockManager(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseDockManager := AValue;
  handleExceptionEnd
end;

function SynEdit_GetAction(AObj: TSynEdit): TBasicAction; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Action;
  handleExceptionEnd
end;

procedure SynEdit_SetAction(AObj: TSynEdit; AValue: TBasicAction); extdecl;
begin
  handleExceptionBegin
  AObj.Action := AValue;
  handleExceptionEnd
end;

procedure SynEdit_GetBoundsRect(AObj: TSynEdit; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BoundsRect;
  handleExceptionEnd
end;

procedure SynEdit_SetBoundsRect(AObj: TSynEdit; var AValue: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.BoundsRect := AValue;
  handleExceptionEnd
end;

function SynEdit_GetClientHeight(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientHeight;
  handleExceptionEnd
end;

procedure SynEdit_SetClientHeight(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientHeight := AValue;
  handleExceptionEnd
end;

procedure SynEdit_GetClientOrigin(AObj: TSynEdit; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientOrigin;
  handleExceptionEnd
end;

procedure SynEdit_GetClientRect(AObj: TSynEdit; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientRect;
  handleExceptionEnd
end;

function SynEdit_GetClientWidth(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientWidth;
  handleExceptionEnd
end;

procedure SynEdit_SetClientWidth(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientWidth := AValue;
  handleExceptionEnd
end;

function SynEdit_GetControlState(AObj: TSynEdit): TControlState; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlState;
  handleExceptionEnd
end;

procedure SynEdit_SetControlState(AObj: TSynEdit; AValue: TControlState); extdecl;
begin
  handleExceptionBegin
  AObj.ControlState := AValue;
  handleExceptionEnd
end;

function SynEdit_GetControlStyle(AObj: TSynEdit): TControlStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlStyle;
  handleExceptionEnd
end;

procedure SynEdit_SetControlStyle(AObj: TSynEdit; AValue: TControlStyle); extdecl;
begin
  handleExceptionBegin
  AObj.ControlStyle := AValue;
  handleExceptionEnd
end;

function SynEdit_GetFloating(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Floating;
  handleExceptionEnd
end;

function SynEdit_GetParent(AObj: TSynEdit): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Parent;
  handleExceptionEnd
end;

procedure SynEdit_SetParent(AObj: TSynEdit; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.Parent := AValue;
  handleExceptionEnd
end;

function SynEdit_GetLeft(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

procedure SynEdit_SetLeft(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function SynEdit_GetTop(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

procedure SynEdit_SetTop(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function SynEdit_GetWidth(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure SynEdit_SetWidth(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function SynEdit_GetHeight(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure SynEdit_SetHeight(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function SynEdit_GetCursor(AObj: TSynEdit): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Cursor;
  handleExceptionEnd
end;

procedure SynEdit_SetCursor(AObj: TSynEdit; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.Cursor := AValue;
  handleExceptionEnd
end;

function SynEdit_GetHint(AObj: TSynEdit): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Hint);
  handleExceptionEnd
end;

procedure SynEdit_SetHint(AObj: TSynEdit; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Hint := AValue;
  handleExceptionEnd
end;

function SynEdit_GetComponentCount(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function SynEdit_GetComponentIndex(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure SynEdit_SetComponentIndex(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function SynEdit_GetOwner(AObj: TSynEdit): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function SynEdit_GetName(AObj: TSynEdit): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure SynEdit_SetName(AObj: TSynEdit; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function SynEdit_GetTag(AObj: TSynEdit): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure SynEdit_SetTag(AObj: TSynEdit; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function SynEdit_GetAnchorSideLeft(AObj: TSynEdit): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideLeft;
  handleExceptionEnd
end;

procedure SynEdit_SetAnchorSideLeft(AObj: TSynEdit; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideLeft := AValue;
  handleExceptionEnd
end;

function SynEdit_GetAnchorSideTop(AObj: TSynEdit): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideTop;
  handleExceptionEnd
end;

procedure SynEdit_SetAnchorSideTop(AObj: TSynEdit; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideTop := AValue;
  handleExceptionEnd
end;

function SynEdit_GetAnchorSideRight(AObj: TSynEdit): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideRight;
  handleExceptionEnd
end;

procedure SynEdit_SetAnchorSideRight(AObj: TSynEdit; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideRight := AValue;
  handleExceptionEnd
end;

function SynEdit_GetAnchorSideBottom(AObj: TSynEdit): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideBottom;
  handleExceptionEnd
end;

procedure SynEdit_SetAnchorSideBottom(AObj: TSynEdit; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideBottom := AValue;
  handleExceptionEnd
end;

function SynEdit_GetChildSizing(AObj: TSynEdit): TControlChildSizing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ChildSizing;
  handleExceptionEnd
end;

procedure SynEdit_SetChildSizing(AObj: TSynEdit; AValue: TControlChildSizing); extdecl;
begin
  handleExceptionBegin
  AObj.ChildSizing := AValue;
  handleExceptionEnd
end;

function SynEdit_GetBorderSpacing(AObj: TSynEdit): TControlBorderSpacing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderSpacing;
  handleExceptionEnd
end;

procedure SynEdit_SetBorderSpacing(AObj: TSynEdit; AValue: TControlBorderSpacing); extdecl;
begin
  handleExceptionBegin
  AObj.BorderSpacing := AValue;
  handleExceptionEnd
end;

function SynEdit_GetDockClients(AObj: TSynEdit; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClients[Index];
  handleExceptionEnd
end;

function SynEdit_GetControls(AObj: TSynEdit; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Controls[Index];
  handleExceptionEnd
end;

function SynEdit_GetComponents(AObj: TSynEdit; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function SynEdit_GetAnchorSide(AObj: TSynEdit; AKind: TAnchorKind): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSide[AKind];
  handleExceptionEnd
end;

function SynEdit_StaticClassType: TClass; extdecl;
begin
  Result := TSynEdit;
end;

function SynEdit_GetBlockIndent(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BlockIndent;
  handleExceptionEnd
end;

procedure SynEdit_SetBlockIndent(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.BlockIndent := AValue;
  handleExceptionEnd
end;

procedure SynEdit_SetOnMouseLink(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynMouseLinkEvent_OnMouseLink}
  {$DEFINE EventName := OnMouseLink}
  EventMethodCode
end;

procedure SynEdit_SetOnClickLink(AObj: TSynEdit; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent_OnClickLink}
  {$DEFINE EventName := OnClickLink}
  EventMethodCode
end;

function SynEdit_GetBlockTabIndent(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BlockTabIndent;
  handleExceptionEnd
end;

procedure SynEdit_SetBlockTabIndent(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.BlockTabIndent := AValue;
  handleExceptionEnd
end;

function SynEdit_GetRightEdge(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RightEdge;
  handleExceptionEnd
end;

procedure SynEdit_SetRightEdge(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.RightEdge := AValue;
  handleExceptionEnd
end;

function SynEdit_GetRightEdgeColor(AObj: TSynEdit): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RightEdgeColor;
  handleExceptionEnd
end;

procedure SynEdit_SetRightEdgeColor(AObj: TSynEdit; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.RightEdgeColor := AValue;
  handleExceptionEnd
end;

function SynEdit_GetTabWidth(AObj: TSynEdit): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TabWidth;
  handleExceptionEnd
end;

procedure SynEdit_SetTabWidth(AObj: TSynEdit; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.TabWidth := AValue;
  handleExceptionEnd
end;

function SynEdit_GetWantTabs(AObj: TSynEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WantTabs;
  handleExceptionEnd
end;

procedure SynEdit_SetWantTabs(AObj: TSynEdit; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.WantTabs := AValue;
  handleExceptionEnd
end;

function SynEdit_GetOptions(AObj: TSynEdit): TSynEditorOptions; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Options;
  handleExceptionEnd
end;

procedure SynEdit_SetOptions(AObj: TSynEdit; AValue: TSynEditorOptions); extdecl;
begin
  handleExceptionBegin
  AObj.Options := AValue;
  handleExceptionEnd
end;

function SynEdit_GetOptions2(AObj: TSynEdit): TSynEditorOptions2; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Options2;
  handleExceptionEnd
end;

procedure SynEdit_SetOptions2(AObj: TSynEdit; AValue: TSynEditorOptions2); extdecl;
begin
  handleExceptionBegin
  AObj.Options2 := AValue;
  handleExceptionEnd
end;

function SynEdit_GetMouseOptions(AObj: TSynEdit): TSynEditorMouseOptions; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MouseOptions;
  handleExceptionEnd
end;

procedure SynEdit_SetMouseOptions(AObj: TSynEdit; AValue: TSynEditorMouseOptions); extdecl;
begin
  handleExceptionBegin
  AObj.MouseOptions := AValue;
  handleExceptionEnd
end;

function SynEdit_GetVisibleSpecialChars(AObj: TSynEdit): TSynVisibleSpecialChars; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VisibleSpecialChars;
  handleExceptionEnd
end;

procedure SynEdit_SetVisibleSpecialChars(AObj: TSynEdit; AValue: TSynVisibleSpecialChars); extdecl;
begin
  handleExceptionBegin
  AObj.VisibleSpecialChars := AValue;
  handleExceptionEnd
end;

function SynEdit_GetGutter(AObj: TSynEdit): TSynGutter; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Gutter;
  handleExceptionEnd
end;

function SynEdit_GetRightGutter(AObj: TSynEdit): TSynGutter; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RightGutter;
  handleExceptionEnd
end;

function SynEdit_GetHighlighter(AObj: TSynEdit): TSynCustomHighlighter; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Highlighter;
  handleExceptionEnd
end;

procedure SynEdit_SetHighlighter(AObj: TSynEdit; AValue: TSynCustomHighlighter); extdecl;
begin
  handleExceptionBegin
  AObj.Highlighter := AValue;
  handleExceptionEnd
end;

exports

  SynEdit_Create,
  SynEdit_Free,
  SynEdit_Clear,
  SynEdit_ClearSelection,
  SynEdit_CopyToClipboard,
  SynEdit_CutToClipboard,
  SynEdit_PasteFromClipboard,
  SynEdit_Undo,
  SynEdit_Redo,
  SynEdit_SelectAll,
  SynEdit_CanFocus,
  SynEdit_ContainsControl,
  SynEdit_ControlAtPos,
  SynEdit_DisableAlign,
  SynEdit_EnableAlign,
  SynEdit_FindChildControl,
  SynEdit_FlipChildren,
  SynEdit_Focused,
  SynEdit_HandleAllocated,
  SynEdit_InsertControl,
  SynEdit_Invalidate,
  SynEdit_PaintTo,
  SynEdit_RemoveControl,
  SynEdit_Realign,
  SynEdit_Repaint,
  SynEdit_ScaleBy,
  SynEdit_ScrollBy,
  SynEdit_SetBounds,
  SynEdit_SetFocus,
  SynEdit_Update,
  SynEdit_BringToFront,
  SynEdit_ClientToScreen,
  SynEdit_ClientToParent,
  SynEdit_Dragging,
  SynEdit_HasParent,
  SynEdit_Hide,
  SynEdit_Perform,
  SynEdit_Refresh,
  SynEdit_ScreenToClient,
  SynEdit_ParentToClient,
  SynEdit_SendToBack,
  SynEdit_Show,
  SynEdit_GetTextBuf,
  SynEdit_GetTextLen,
  SynEdit_SetTextBuf,
  SynEdit_FindComponent,
  SynEdit_GetNamePath,
  SynEdit_Assign,
  SynEdit_ClassType,
  SynEdit_ClassName,
  SynEdit_InstanceSize,
  SynEdit_InheritsFrom,
  SynEdit_Equals,
  SynEdit_GetHashCode,
  SynEdit_ToString,
  SynEdit_AnchorToNeighbour,
  SynEdit_AnchorParallel,
  SynEdit_AnchorHorizontalCenterTo,
  SynEdit_AnchorVerticalCenterTo,
  SynEdit_AnchorSame,
  SynEdit_AnchorAsAlign,
  SynEdit_AnchorClient,
  SynEdit_ScaleDesignToForm,
  SynEdit_ScaleFormToDesign,
  SynEdit_Scale96ToForm,
  SynEdit_ScaleFormTo96,
  SynEdit_Scale96ToFont,
  SynEdit_ScaleFontTo96,
  SynEdit_ScaleScreenToFont,
  SynEdit_ScaleFontToScreen,
  SynEdit_Scale96ToScreen,
  SynEdit_ScaleScreenTo96,
  SynEdit_AutoAdjustLayout,
  SynEdit_FixDesignFontsPPI,
  SynEdit_ScaleFontsPPI,
  SynEdit_GetAlign,
  SynEdit_SetAlign,
  SynEdit_GetAnchors,
  SynEdit_SetAnchors,
  SynEdit_GetAutoSize,
  SynEdit_SetAutoSize,
  SynEdit_GetBiDiMode,
  SynEdit_SetBiDiMode,
  SynEdit_GetBorderStyle,
  SynEdit_SetBorderStyle,
  SynEdit_GetColor,
  SynEdit_SetColor,
  SynEdit_GetConstraints,
  SynEdit_SetConstraints,
  SynEdit_GetDoubleBuffered,
  SynEdit_SetDoubleBuffered,
  SynEdit_GetEnabled,
  SynEdit_SetEnabled,
  SynEdit_GetFont,
  SynEdit_SetFont,
  SynEdit_GetHideSelection,
  SynEdit_SetHideSelection,
  SynEdit_GetLines,
  SynEdit_SetLines,
  SynEdit_GetParentColor,
  SynEdit_SetParentColor,
  SynEdit_GetParentDoubleBuffered,
  SynEdit_SetParentDoubleBuffered,
  SynEdit_GetParentFont,
  SynEdit_SetParentFont,
  SynEdit_GetParentShowHint,
  SynEdit_SetParentShowHint,
  SynEdit_GetPopupMenu,
  SynEdit_SetPopupMenu,
  SynEdit_GetReadOnly,
  SynEdit_SetReadOnly,
  SynEdit_GetScrollBars,
  SynEdit_SetScrollBars,
  SynEdit_GetShowHint,
  SynEdit_SetShowHint,
  SynEdit_GetTabOrder,
  SynEdit_SetTabOrder,
  SynEdit_GetTabStop,
  SynEdit_SetTabStop,
  SynEdit_GetText,
  SynEdit_SetText,
  SynEdit_GetVisible,
  SynEdit_SetVisible,
  SynEdit_SetOnChange,
  SynEdit_SetOnClick,
  SynEdit_SetOnContextPopup,
  SynEdit_SetOnDblClick,
  SynEdit_SetOnDragDrop,
  SynEdit_SetOnDragOver,
  SynEdit_SetOnEndDrag,
  SynEdit_SetOnEnter,
  SynEdit_SetOnExit,
  SynEdit_SetOnKeyDown,
  SynEdit_SetOnKeyPress,
  SynEdit_SetOnKeyUp,
  SynEdit_SetOnMouseDown,
  SynEdit_SetOnMouseEnter,
  SynEdit_SetOnMouseLeave,
  SynEdit_SetOnMouseMove,
  SynEdit_SetOnMouseUp,
  SynEdit_GetCanUndo,
  SynEdit_GetCanRedo,
  SynEdit_GetModified,
  SynEdit_SetModified,
  SynEdit_GetSelStart,
  SynEdit_SetSelStart,
  SynEdit_GetSelText,
  SynEdit_SetSelText,
  SynEdit_GetDockClientCount,
  SynEdit_GetDockSite,
  SynEdit_SetDockSite,
  SynEdit_GetMouseInClient,
  SynEdit_GetVisibleDockClientCount,
  SynEdit_GetBrush,
  SynEdit_GetControlCount,
  SynEdit_GetHandle,
  SynEdit_GetParentWindow,
  SynEdit_SetParentWindow,
  SynEdit_GetShowing,
  SynEdit_GetUseDockManager,
  SynEdit_SetUseDockManager,
  SynEdit_GetAction,
  SynEdit_SetAction,
  SynEdit_GetBoundsRect,
  SynEdit_SetBoundsRect,
  SynEdit_GetClientHeight,
  SynEdit_SetClientHeight,
  SynEdit_GetClientOrigin,
  SynEdit_GetClientRect,
  SynEdit_GetClientWidth,
  SynEdit_SetClientWidth,
  SynEdit_GetControlState,
  SynEdit_SetControlState,
  SynEdit_GetControlStyle,
  SynEdit_SetControlStyle,
  SynEdit_GetFloating,
  SynEdit_GetParent,
  SynEdit_SetParent,
  SynEdit_GetLeft,
  SynEdit_SetLeft,
  SynEdit_GetTop,
  SynEdit_SetTop,
  SynEdit_GetWidth,
  SynEdit_SetWidth,
  SynEdit_GetHeight,
  SynEdit_SetHeight,
  SynEdit_GetCursor,
  SynEdit_SetCursor,
  SynEdit_GetHint,
  SynEdit_SetHint,
  SynEdit_GetComponentCount,
  SynEdit_GetComponentIndex,
  SynEdit_SetComponentIndex,
  SynEdit_GetOwner,
  SynEdit_GetName,
  SynEdit_SetName,
  SynEdit_GetTag,
  SynEdit_SetTag,
  SynEdit_GetAnchorSideLeft,
  SynEdit_SetAnchorSideLeft,
  SynEdit_GetAnchorSideTop,
  SynEdit_SetAnchorSideTop,
  SynEdit_GetAnchorSideRight,
  SynEdit_SetAnchorSideRight,
  SynEdit_GetAnchorSideBottom,
  SynEdit_SetAnchorSideBottom,
  SynEdit_GetChildSizing,
  SynEdit_SetChildSizing,
  SynEdit_GetBorderSpacing,
  SynEdit_SetBorderSpacing,
  SynEdit_GetDockClients,
  SynEdit_GetControls,
  SynEdit_GetComponents,
  SynEdit_GetAnchorSide,
  SynEdit_StaticClassType,
  SynEdit_GetBlockIndent,
  SynEdit_SetBlockIndent,
  SynEdit_SetOnMouseLink,
  SynEdit_SetOnClickLink,
  SynEdit_GetBlockTabIndent,
  SynEdit_SetBlockTabIndent,
  SynEdit_GetRightEdge,
  SynEdit_SetRightEdge,
  SynEdit_GetRightEdgeColor,
  SynEdit_SetRightEdgeColor,
  SynEdit_GetTabWidth,
  SynEdit_SetTabWidth,
  SynEdit_GetWantTabs,
  SynEdit_SetWantTabs,
  SynEdit_GetOptions,
  SynEdit_SetOptions,
  SynEdit_GetOptions2,
  SynEdit_SetOptions2,
  SynEdit_GetMouseOptions,
  SynEdit_SetMouseOptions,
  SynEdit_GetVisibleSpecialChars,
  SynEdit_SetVisibleSpecialChars,
  SynEdit_GetGutter,
  SynEdit_GetRightGutter,
  SynEdit_GetHighlighter,
  SynEdit_SetHighlighter;
















