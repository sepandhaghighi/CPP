object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Calculator'
  ClientHeight = 459
  ClientWidth = 508
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object MEMO: TMemo
    Left = 40
    Top = 8
    Width = 233
    Height = 113
    Lines.Strings = (
      'MEMO')
    ReadOnly = True
    TabOrder = 0
  end
  object Button1: TButton
    Left = 40
    Top = 192
    Width = 49
    Height = 49
    Caption = '1'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 104
    Top = 192
    Width = 49
    Height = 49
    Caption = '2'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 168
    Top = 192
    Width = 49
    Height = 49
    Caption = '3'
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 40
    Top = 264
    Width = 49
    Height = 49
    Caption = '4'
    TabOrder = 4
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 104
    Top = 264
    Width = 49
    Height = 49
    Caption = '5'
    TabOrder = 5
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 168
    Top = 264
    Width = 49
    Height = 49
    Caption = '6'
    TabOrder = 6
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 40
    Top = 336
    Width = 49
    Height = 49
    Caption = '7'
    TabOrder = 7
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 104
    Top = 336
    Width = 49
    Height = 49
    Caption = '8'
    TabOrder = 8
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 168
    Top = 336
    Width = 49
    Height = 49
    Caption = '9'
    TabOrder = 9
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 296
    Top = 209
    Width = 49
    Height = 49
    Caption = '+'
    TabOrder = 10
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 360
    Top = 209
    Width = 49
    Height = 49
    Caption = '-'
    TabOrder = 11
    OnClick = Button11Click
  end
  object Button13: TButton
    Left = 296
    Top = 264
    Width = 49
    Height = 49
    Caption = '*'
    TabOrder = 12
    OnClick = Button13Click
  end
  object Button14: TButton
    Left = 360
    Top = 264
    Width = 49
    Height = 49
    Caption = '/'
    TabOrder = 13
    OnClick = Button14Click
  end
  object Button12: TButton
    Left = 296
    Top = 319
    Width = 49
    Height = 49
    Caption = 'Clear'
    TabOrder = 14
    OnClick = Button12Click
  end
  object Button15: TButton
    Left = 360
    Top = 154
    Width = 49
    Height = 49
    Caption = '='
    TabOrder = 15
    OnClick = Button15Click
  end
  object Button16: TButton
    Left = 296
    Top = 154
    Width = 49
    Height = 49
    Caption = 'PI'
    TabOrder = 16
    OnClick = Button16Click
  end
  object Button17: TButton
    Left = 415
    Top = 154
    Width = 75
    Height = 49
    Caption = 'Sin'
    TabOrder = 17
    OnClick = Button17Click
  end
  object Button18: TButton
    Left = 415
    Top = 209
    Width = 75
    Height = 49
    Caption = 'Cos'
    TabOrder = 18
    OnClick = Button18Click
  end
  object Button19: TButton
    Left = 415
    Top = 264
    Width = 75
    Height = 49
    Caption = 'Tan'
    TabOrder = 19
    OnClick = Button19Click
  end
  object Button20: TButton
    Left = 104
    Top = 391
    Width = 49
    Height = 50
    Caption = '0'
    TabOrder = 20
    OnClick = Button20Click
  end
  object Button21: TButton
    Left = 360
    Top = 319
    Width = 49
    Height = 49
    Caption = 'Ln'
    TabOrder = 21
    OnClick = Button21Click
  end
  object Button22: TButton
    Left = 296
    Top = 374
    Width = 49
    Height = 49
    Caption = 'Log10'
    TabOrder = 22
    OnClick = Button22Click
  end
  object Button23: TButton
    Left = 360
    Top = 374
    Width = 49
    Height = 49
    Caption = 'Sqrt'
    TabOrder = 23
    OnClick = Button23Click
  end
  object RadioGroup1: TRadioGroup
    Left = 296
    Top = 8
    Width = 161
    Height = 121
    TabOrder = 24
  end
  object RadioButton1: TRadioButton
    Left = 312
    Top = 32
    Width = 137
    Height = 33
    Caption = 'Radian'
    Checked = True
    TabOrder = 25
    TabStop = True
  end
  object RadioButton2: TRadioButton
    Left = 312
    Top = 71
    Width = 129
    Height = 41
    Caption = 'Degree'
    TabOrder = 26
  end
  object Button24: TButton
    Left = 240
    Top = 374
    Width = 50
    Height = 49
    Caption = '1/x'
    TabOrder = 27
    OnClick = Button24Click
  end
  object Button25: TButton
    Left = 240
    Top = 319
    Width = 50
    Height = 49
    Caption = 'e^x'
    TabOrder = 28
    OnClick = Button24Click
  end
  object Button26: TButton
    Left = 240
    Top = 264
    Width = 50
    Height = 49
    Caption = 'x^2'
    TabOrder = 29
    OnClick = Button24Click
  end
  object Button27: TButton
    Left = 240
    Top = 209
    Width = 50
    Height = 49
    Caption = 'x^y'
    TabOrder = 30
    OnClick = Button24Click
  end
end
