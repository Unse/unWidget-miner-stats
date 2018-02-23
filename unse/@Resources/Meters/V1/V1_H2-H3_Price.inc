[MeterV1H2]
#Надпись COIN to USD
Group=Currency
Meter=String
X=50
Y=50
W=100
H=20
FontSize=8
FontColor=#labelfntcolor##labelfntsolid#
Text=#coin# to USD:
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterCenter
ClipString=1
LeftMouseUpAction=[!ToggleMeterGroup Currency][!ToggleMeterGroup DayProfit]


[MeterV1H3]
#Значение COIN to USD
Group=Currency
Meter=String
X=50
Y=70
W=100
H=20
FontSize=12
FontColor=#valuefontcolor##valuefontsolid#
MeasureName=MeasureUSDPrice
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterCenter
ClipString=1
LeftMouseUpAction=[!ToggleMeterGroup Currency][!ToggleMeterGroup DayProfit]
NumOfDecimals=3

[MeterV1H4]
#Надпись COIN to BTC
Group=Currency
Meter=String
X=50
Y=90
W=100
H=20
FontSize=8
FontColor=#labelfntcolor##labelfntsolid#
Text=#coin# to BTC:
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterCenter
ClipString=1
LeftMouseUpAction=[!ToggleMeterGroup Currency][!ToggleMeterGroup DayProfit]

[MeterV1H5]
#Значение COIN to BTC
Group=Currency
Meter=String
X=50
Y=110
W=100
H=20
FontSize=12
FontColor=#valuefontcolor##valuefontsolid#
MeasureName=MeasureBTCPrice
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterCenter
ClipString=1
LeftMouseUpAction=[!ToggleMeterGroup Currency][!ToggleMeterGroup DayProfit]
NumOfDecimals=7