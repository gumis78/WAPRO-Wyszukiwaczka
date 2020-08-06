object Form1: TForm1
  Left = 192
  Top = 124
  Width = 963
  Height = 653
  Caption = 'WAPRO - wyszukiwanie'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnActivate = FormActivate
  OnShow = FormShow
  DesignSize = (
    947
    595)
  PixelsPerInch = 96
  TextHeight = 13
  object L_Wyniki1: TLabel
    Left = 248
    Top = 11
    Width = 134
    Height = 16
    Caption = 'wyniki wyszukiwania'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clRed
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    Transparent = True
  end
  object B_Szukaj1: TButton
    Left = 9
    Top = 7
    Width = 75
    Height = 25
    Caption = 'Szukaj'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = B_Szukaj1Click
  end
  object CB_Szukaj1: TComboBox
    Left = 90
    Top = 8
    Width = 143
    Height = 24
    Style = csDropDownList
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    ItemHeight = 16
    ParentFont = False
    TabOrder = 1
    Items.Strings = (
      'Nazwa'
      'Nazwa i Nazwa c.d.'
      'Indeks katalogowy')
  end
  object DBGrid: TDBGrid
    Left = 8
    Top = 40
    Width = 929
    Height = 543
    Anchors = [akLeft, akTop, akRight, akBottom]
    DataSource = DataSource
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit]
    ParentFont = False
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    OnKeyDown = DBGridKeyDown
    Columns = <
      item
        Expanded = False
        FieldName = 'ID_ARTYKULU'
        Title.Caption = 'Id'
        Title.Font.Charset = EASTEUROPE_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Arial'
        Title.Font.Style = []
        Width = 43
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'NAZWA'
        Title.Caption = 'Nazwa'
        Title.Font.Charset = EASTEUROPE_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Arial'
        Title.Font.Style = []
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'NAZWA2'
        Title.Caption = 'Nazwa c.d.'
        Title.Font.Charset = EASTEUROPE_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Arial'
        Title.Font.Style = []
        Width = 460
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'STAN'
        Title.Caption = 'Stan'
        Title.Font.Charset = EASTEUROPE_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Arial'
        Title.Font.Style = []
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'SKROT'
        Title.Caption = 'Jedn.'
        Title.Font.Charset = EASTEUROPE_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Arial'
        Title.Font.Style = []
        Width = 45
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'MAGAZYN'
        Title.Caption = 'Magazyn'
        Title.Font.Charset = EASTEUROPE_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Arial'
        Title.Font.Style = []
        Width = 180
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'INDEKS_KATALOGOWY'
        Title.Caption = 'Indeks katalogowy'
        Title.Font.Charset = EASTEUROPE_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Arial'
        Title.Font.Style = []
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'UWAGI'
        Title.Caption = 'Uwagi'
        Title.Font.Charset = EASTEUROPE_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Arial'
        Title.Font.Style = []
        Width = 250
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'OSTRZEZENIE'
        Title.Caption = 'Ostrzezenie'
        Title.Font.Charset = EASTEUROPE_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Arial'
        Title.Font.Style = []
        Width = 250
        Visible = True
      end>
  end
  object MainMenu1: TMainMenu
    Left = 152
    Top = 56
    object Koniec1: TMenuItem
      Caption = 'Koniec'
      OnClick = Koniec1Click
    end
    object Pokawszystko1: TMenuItem
      Caption = 'Poka'#380' wszystko'
      OnClick = Pokawszystko1Click
    end
  end
  object ADOConnection: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Password=Wapro3000;Persist Security Info=Tru' +
      'e;User ID=sa;Initial Catalog=WAPRO;Data Source=192.168.15.200'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 16
    Top = 104
  end
  object DataSource: TDataSource
    DataSet = Query
    Left = 48
    Top = 104
  end
  object Query: TADOQuery
    Connection = ADOConnection
    Parameters = <>
    Left = 80
    Top = 104
  end
  object GlobalHotKey: TLMDGlobalHotKey
    HotKey = 0
    Left = 128
    Top = 104
  end
end
