[MeterV2H4_1_DUE]
#Надпись Your total Due:
Group=Due
Meter=String
X=200
Y=110
W=100
H=20
Text="Your total due:  "
FontSize=10
FontColor=#labelfntcolor##labelfntsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
LeftMouseUpAction=[!ToggleMeterGroup Paid][!ToggleMeterGroup Due]
Hidden=1

[MeterV2H4_2_DUE]
#Значение Your total Due:
Group=Due
Meter=String
X=300
Y=110
W=100
H=20
MeasureName=MeasureMinerTotalDueDot
FontSize=10
FontColor=#valuefontcolor##valuefontsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
NumOfDecimals=5
LeftMouseUpAction=[!ToggleMeterGroup Paid][!ToggleMeterGroup Due]
Hidden=1