object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 614
  ClientWidth = 872
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 8
    Width = 17
    Height = 13
    Caption = 'n ='
  end
  object Label2: TLabel
    Left = 40
    Top = 44
    Width = 39
    Height = 13
    Caption = 'range ='
  end
  object Label3: TLabel
    Left = 40
    Top = 80
    Width = 39
    Height = 13
    Caption = 'search :'
  end
  object Label4: TLabel
    Left = 40
    Top = 112
    Width = 53
    Height = 13
    Caption = 'repetition :'
  end
  object Label5: TLabel
    Left = 40
    Top = 144
    Width = 28
    Height = 13
    Caption = 'step :'
  end
  object Memo1: TMemo
    Left = 40
    Top = 255
    Width = 177
    Height = 337
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 256
    Top = 256
    Width = 177
    Height = 337
    Lines.Strings = (
      'Memo1')
    TabOrder = 1
  end
  object Memo3: TMemo
    Left = 472
    Top = 255
    Width = 177
    Height = 337
    Lines.Strings = (
      'Memo1')
    TabOrder = 2
  end
  object Memo4: TMemo
    Left = 687
    Top = 255
    Width = 177
    Height = 337
    Lines.Strings = (
      'Memo1')
    TabOrder = 3
  end
  object Button1: TButton
    Left = 40
    Top = 208
    Width = 177
    Height = 33
    Caption = 'Random Number'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 256
    Top = 208
    Width = 177
    Height = 33
    Caption = 'Selection Sort'
    TabOrder = 5
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 472
    Top = 208
    Width = 177
    Height = 33
    Caption = 'Bubble Sort'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 687
    Top = 208
    Width = 177
    Height = 33
    Caption = 'Binary Search'
    TabOrder = 7
    OnClick = Button4Click
  end
  object Edit1: TEdit
    Left = 120
    Top = 5
    Width = 65
    Height = 21
    TabOrder = 8
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 120
    Top = 41
    Width = 65
    Height = 21
    TabOrder = 9
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 120
    Top = 77
    Width = 65
    Height = 21
    TabOrder = 10
    Text = 'Edit3'
  end
  object Edit4: TEdit
    Left = 120
    Top = 109
    Width = 65
    Height = 21
    TabOrder = 11
    Text = 'Edit4'
  end
  object Edit5: TEdit
    Left = 120
    Top = 141
    Width = 65
    Height = 21
    TabOrder = 12
    Text = 'Edit5'
  end
  object Button5: TButton
    Left = 296
    Top = 131
    Width = 99
    Height = 41
    Caption = 'close'
    TabOrder = 13
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 454
    Top = 131
    Width = 99
    Height = 41
    Caption = 'clean all'
    TabOrder = 14
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 622
    Top = 131
    Width = 99
    Height = 41
    Caption = 'chart'
    TabOrder = 15
    OnClick = Button7Click
  end
  object Chart1: TChart
    Left = 296
    Top = 8
    Width = 409
    Height = 117
    Title.Text.Strings = (
      'TChart')
    TabOrder = 16
    DefaultCanvas = 'TGDIPlusCanvas'
    ColorPaletteIndex = 13
    object Series1: TFastLineSeries
      LinePen.Color = 10708548
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
    object Series2: TFastLineSeries
      LinePen.Color = 3513587
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
  end
  object CheckBox1: TCheckBox
    Left = 752
    Top = 96
    Width = 97
    Height = 17
    Caption = 'Echo Print'
    TabOrder = 17
  end
  object CheckBox2: TCheckBox
    Left = 752
    Top = 119
    Width = 97
    Height = 17
    Caption = 'self-check'
    TabOrder = 18
  end
end
