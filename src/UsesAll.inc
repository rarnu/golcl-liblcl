{$IFDEF WINDOWS}
  Windows,
  MultiMon,
  ShellAPI,
  ShlObj,
  ComObj,
  ActiveX,
  Win32Int,
  win32proc,
  CommCtrl,
  LazUTF8,
  InterfaceBase,
{$ELSE}
  Types,
{$ENDIF}
  LCLType,
  typinfo,
  LCLProc,
  LCLIntf,
  LMessages,
  DateUtils,
  IniFiles,
  Registry,
  Forms,
  StdCtrls,
  Dialogs,
  ExtCtrls,
  Graphics,
  Controls,
  Buttons,
  ComCtrls,
  ToolWin,
  ImgList,
  ExtDlgs,
  ActnList,
  ColorBox,
  PrintersDlgs,
  DateTimePicker,
  Calendar,
  Menus,
  Clipbrd,
  CheckLst,
  MaskEdit,
  Grids,
  ValEdit,
  Spin,
  Printers,
  ComboEx,
  EditBtn,
  LResources,
// custom
  uLinkLabel,
  uEventCallback,
  ImageButton,
  uMiniWebview,
  xButton,
  uGoForm,
  uRichEdit,
  uGauge,
  SynGutter,
  SynEdit,
  SynEditTypes,
  SynEditHighlighter,
  SynEditAutoComplete,
  SynCompletion,
  SynHighlighterPas,
  SynHighlighterCpp,
  SynHighlighterJava,
  SynHighlighterPython,
  SynHighlighterJScript,
  SynHighlighterPerl,
  SynHighlighterPHP,
  SynHighlighterSQL,
  SynHighlighterTeX,
  SynHighlighterVB,
  SynHighlighterCss,
  synhighlighterunixshellscript,
  SynHighlighterBat,
  SynHighlighterAny,
  SynHighlighterXML,
  SynHighlighterHTML,
  uCEFApplication,
  uCEFChromiumWindow,
  uCEFChromium,
  GlobalCefApplication,
  uCEFTypes,
  uCEFChromiumOptions,
  uCEFChromiumFontOptions,
  uCEFPDFPrintOptions,
  CefBrowser,
  //
  LCLStrConsts,
{$I UserDefineComponentUses.inc}
