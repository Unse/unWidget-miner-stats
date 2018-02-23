[MeterV2H3_1_LastBlockTime]
#Надпись Last Block Found:
Meter=String
Group=LastBlockTime
X=220
Y=90
W=120
H=20
Text="Last block time ago:"
FontSize=10
FontColor=#labelfntcolor##labelfntsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
Hidden=1
LeftMouseUpAction=[!ToggleMeterGroup Diff][!ToggleMeterGroup LastBlockTime]

[MeterV2H3_2_LastBlockTime]
#Значение Last Block Found:
Meter=String
Group=LastBlockTime
X=300
Y=90
W=80
H=20
MeasureName=MeasureLastBlockTimeAgo
FontSize=10
FontColor=#valuefontcolor##valuefontsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
Hidden=1
LeftMouseUpAction=[!ToggleMeterGroup Diff][!ToggleMeterGroup LastBlockTime]