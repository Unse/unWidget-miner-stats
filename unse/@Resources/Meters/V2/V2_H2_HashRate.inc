[MeterV2H2_1_hs]
#Отображение самого хешрейта:
Meter=String
Group=HashRate
X=255
Y=50
W=155
H=60
MeasureName=MeasureMinerHashrate
FontSize=25
FontColor=#valuefontcolor#200
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
LeftMouseUpAction=[!ToggleMeterGroup HashRate][!ToggleMeterGroup KiloHashRate]


[MeterV2H2_2_hs]
#Надпись "h\s":
Meter=String
Group=HashRate
X=255
Y=50
W=45
H=60
Text="  H\s"
FontSize=15
FontColor=#valuefontcolor##valuefontsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=LeftCenter
ClipString=1
LeftMouseUpAction=[!ToggleMeterGroup HashRate][!ToggleMeterGroup KiloHashRate]