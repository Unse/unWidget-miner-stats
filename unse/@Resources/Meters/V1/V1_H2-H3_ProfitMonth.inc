[MeterV1H2_MonthReward]
#�������� ����� � �����
Group=MonthProfit
Meter=String
X=50
Y=65
W=100
H=25
FontSize=10
FontColor=#valuefontcolor##valuefontsolid#
MeasureName=MeasureMinerRewardMonth
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterBottom
ClipString=1
Hidden=1
NumOfDecimals=3
LeftMouseUpAction=[!ToggleMeterGroup MonthProfit][!ToggleMeterGroup Currency]

[MeterV1H3_MonthReward]
#������� Per Month
Group=MonthProfit
Meter=String
X=50
Y=65
W=100
H=15
FontSize=7
FontColor=#labelfntcolor##labelfntsolid#
Text=#coin# / Month
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterTop
ClipString=1
Hidden=1
LeftMouseUpAction=[!ToggleMeterGroup MonthProfit][!ToggleMeterGroup Currency]

[MeterV1H2_MonthProfit]
#�������� ������� � �����
Group=MonthProfit
Meter=String
X=50
Y=105
W=100
H=25
FontSize=16
FontColor=#valuefontcolor##valuefontsolid#
MeasureName=MeasureMinerProfitMonth
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterBottom
ClipString=1
Hidden=1
NumOfDecimals=2
LeftMouseUpAction=[!ToggleMeterGroup MonthProfit][!ToggleMeterGroup Currency]

[MeterV1H3_MonthProfit]
#������� Per Month
Group=MonthProfit
Meter=String
X=50
Y=105
W=100
H=15
FontSize=10
FontColor=#labelfntcolor##labelfntsolid#
Text="$ / Month"
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterTop
ClipString=1
Hidden=1
LeftMouseUpAction=[!ToggleMeterGroup MonthProfit][!ToggleMeterGroup Currency]