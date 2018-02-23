[MeterV2H4_1_PAID]
#Надпись Your total paid:
Group=Paid
Meter=String
X=200
Y=110
W=100
H=20
Text="Your total paid:  "
FontSize=10
FontColor=#labelfntcolor##labelfntsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
LeftMouseUpAction=[!ToggleMeterGroup Paid][!ToggleMeterGroup Due]

[MeterV2H4_2_PAID]
#Значение Your total paid:
Group=Paid
Meter=String
X=300
Y=110
W=100
H=20
MeasureName=MeasureMinerTotalPaidDot
FontSize=10
FontColor=#valuefontcolor##valuefontsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
NumOfDecimals=5
LeftMouseUpAction=[!ToggleMeterGroup Paid][!ToggleMeterGroup Due]