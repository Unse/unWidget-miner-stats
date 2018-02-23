[MeterV2H2_1_ksh]
#Отображение самого хешрейта:
Meter=String
Group=KiloHashRate
X=255
Y=50
W=155
H=60
MeasureName=MeasureMinerKiloHashrate
FontSize=25
FontColor=#valuefontcolor#200
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
NumOfDecimals=2
Hidden=1
LeftMouseUpAction=[!ToggleMeterGroup HashRate][!ToggleMeterGroup KiloHashRate]

[MeterV2H2_2_khs]
#Надпись "kH\s":
Meter=String
Group=KiloHashRate
X=255
Y=50
W=45
H=60
Text="kH\s"
FontSize=15
FontColor=#valuefontcolor##valuefontsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=LeftCenter
ClipString=1
Hidden=1
LeftMouseUpAction=[!ToggleMeterGroup HashRate][!ToggleMeterGroup KiloHashRate]