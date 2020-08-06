object FormSzukaj: TFormSzukaj
  Left = 375
  Top = 403
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'DTE'
  ClientHeight = 126
  ClientWidth = 484
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnActivate = FormActivate
  OnClose = FormClose
  DesignSize = (
    484
    126)
  PixelsPerInch = 96
  TextHeight = 13
  object Label: TLMDSimpleLabel
    Left = 0
    Top = 8
    Width = 500
    Height = 26
    Alignment = agCenter
    AutoSize = False
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    Anchors = [akLeft, akTop, akRight]
    Caption = 'Wpisz poszukiwany ci'#261'g znak'#243'w'
    Options = []
  end
  object B_Ok: TLMDButton
    Left = 192
    Top = 88
    Width = 90
    Height = 25
    Caption = 'OK'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Visible = True
    OnClick = B_OkClick
    Color = clGradientActiveCaption
    ParentColor = False
  end
  object E_Szukaj: TEdit
    Left = 12
    Top = 48
    Width = 460
    Height = 26
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnChange = E_SzukajChange
    OnKeyDown = E_SzukajKeyDown
  end
  object GlobalHotKey: TLMDGlobalHotKey
    Active = False
    HotKey = 0
    OnKeyDown = GlobalHotKeyKeyDown
    Left = 16
    Top = 96
  end
end
