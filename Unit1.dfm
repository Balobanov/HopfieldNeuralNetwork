object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'NeuroSETb'
  ClientHeight = 634
  ClientWidth = 871
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 23
  object Label1: TLabel
    Left = 156
    Top = 31
    Width = 203
    Height = 23
    Caption = #1057#1080#1084#1074#1086#1083#1099' '#1076#1083#1103' '#1086#1073#1091#1095#1077#1085#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 561
    Top = 31
    Width = 192
    Height = 23
    Caption = #1047#1072#1096#1091#1084#1083#1077#1085#1085#1099#1081' '#1089#1080#1084#1074#1086#1083
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 553
    Top = 371
    Width = 214
    Height = 23
    Caption = #1042#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1099#1081' '#1089#1080#1084#1074#1086#1083
  end
  object StringGrid1: TStringGrid
    Left = 178
    Top = 60
    Width = 164
    Height = 164
    ColCount = 10
    DefaultColWidth = 15
    DefaultRowHeight = 15
    FixedCols = 0
    RowCount = 10
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnDrawCell = StringGrid1DrawCell
    OnSelectCell = StringGrid1SelectCell
  end
  object StringGrid2: TStringGrid
    Left = 90
    Top = 230
    Width = 164
    Height = 164
    ColCount = 10
    DefaultColWidth = 15
    DefaultRowHeight = 15
    FixedCols = 0
    RowCount = 10
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnDrawCell = StringGrid2DrawCell
    OnSelectCell = StringGrid2SelectCell
  end
  object StringGrid3: TStringGrid
    Left = 260
    Top = 230
    Width = 164
    Height = 164
    ColCount = 10
    DefaultColWidth = 15
    DefaultRowHeight = 15
    FixedCols = 0
    RowCount = 10
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnDrawCell = StringGrid3DrawCell
    OnSelectCell = StringGrid3SelectCell
  end
  object StringGrid4: TStringGrid
    Left = 8
    Top = 400
    Width = 164
    Height = 164
    ColCount = 10
    DefaultColWidth = 15
    DefaultRowHeight = 15
    FixedCols = 0
    RowCount = 10
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnDrawCell = StringGrid4DrawCell
    OnSelectCell = StringGrid4SelectCell
  end
  object StringGrid5: TStringGrid
    Left = 178
    Top = 400
    Width = 164
    Height = 164
    ColCount = 10
    DefaultColWidth = 15
    DefaultRowHeight = 15
    FixedCols = 0
    RowCount = 10
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnDrawCell = StringGrid5DrawCell
    OnSelectCell = StringGrid5SelectCell
  end
  object StringGrid6: TStringGrid
    Left = 348
    Top = 400
    Width = 164
    Height = 164
    ColCount = 10
    DefaultColWidth = 15
    DefaultRowHeight = 15
    FixedCols = 0
    RowCount = 10
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnDrawCell = StringGrid6DrawCell
    OnSelectCell = StringGrid6SelectCell
  end
  object StringGrid7: TStringGrid
    Left = 577
    Top = 60
    Width = 164
    Height = 164
    ColCount = 10
    DefaultColWidth = 15
    DefaultRowHeight = 15
    FixedCols = 0
    RowCount = 10
    FixedRows = 0
    TabOrder = 6
    OnDrawCell = StringGrid7DrawCell
    OnSelectCell = StringGrid7SelectCell
  end
  object Button1: TButton
    Left = 178
    Top = 570
    Width = 164
    Height = 39
    Caption = #1054#1073#1091#1095#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 577
    Top = 230
    Width = 164
    Height = 35
    Caption = #1042#1086#1089#1089#1090#1072#1085#1086#1074#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = Button2Click
  end
  object StringGrid8: TStringGrid
    Left = 577
    Top = 400
    Width = 164
    Height = 164
    ColCount = 10
    DefaultColWidth = 15
    DefaultRowHeight = 15
    FixedCols = 0
    RowCount = 10
    FixedRows = 0
    TabOrder = 9
    OnDrawCell = StringGrid8DrawCell
    OnSelectCell = StringGrid8SelectCell
  end
  object Button3: TButton
    Left = 747
    Top = 400
    Width = 110
    Height = 25
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100
    TabOrder = 10
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 747
    Top = 60
    Width = 110
    Height = 25
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100
    TabOrder = 11
    OnClick = Button4Click
  end
  object MainMenu1: TMainMenu
    Left = 48
    Top = 80
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N3: TMenuItem
        Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100' '#1086#1073#1088#1072#1079
        Enabled = False
      end
      object N6: TMenuItem
        Caption = '-'
      end
      object N4: TMenuItem
        Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
        Enabled = False
      end
      object N5: TMenuItem
        Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1082#1072#1082'...'
        Enabled = False
      end
      object N7: TMenuItem
        Caption = '-'
      end
      object N8: TMenuItem
        Caption = #1042#1099#1093#1086#1076
      end
    end
    object N10: TMenuItem
      Caption = #1054#1073#1091#1095#1077#1085#1080#1077' '#1085#1077#1081#1088#1086#1089#1077#1090#1080
      Enabled = False
      OnClick = N10Click
    end
    object N2: TMenuItem
      Caption = #1054' '#1055#1088#1086#1075#1088#1072#1084#1084#1077
      OnClick = N2Click
      object N9: TMenuItem
        Caption = #1040#1074#1090#1086#1088
      end
    end
  end
end
