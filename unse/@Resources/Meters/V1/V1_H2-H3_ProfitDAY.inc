[MeterV1H2_DayReward]
#Значение Монет в ДЕНЬ
Group=DayProfit
Meter=String
X=50
Y=65
W=100
H=25
FontSize=10
FontColor=#valuefontcolor##valuefontsolid#
MeasureName=MeasureMinerRewardDay
SolidColor=#bgcolor##bgsolid#

AntiAlias=1
StringAlign=CenterBottom
ClipString=1
Hidden=1
NumOfDecimals=3
LeftMouseUpAction=[!ToggleMeterGroup DayProfit][!ToggleMeterGroup MonthProfit]

[MeterV1H3_DayReward]
#Надпись Per Day
Group=DayProfit
Meter=String
X=50
Y=65
W=100
H=15
FontSize=7
FontColor=#labelfntcolor##labelfntsolid#
Text=#coin# / Day
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterTop
ClipString=1
Hidden=1
LeftMouseUpAction=[!ToggleMeterGroup DayProfit][!ToggleMeterGroup MonthProfit]

[MeterV1H2_DayProfit]
#Значение Профита в ДЕНЬ
Group=DayProfit
Meter=String
X=50
Y=105
W=100
H=25
FontSize=16
FontColor=#valuefontcolor##valuefontsolid#
MeasureName=MeasureMinerProfitDay
SolidColor=#bgcolor##bgsolid#

AntiAlias=1
StringAlign=CenterBottom
ClipString=1
Hidden=1
NumOfDecimals=2
LeftMouseUpAction=[!ToggleMeterGroup DayProfit][!ToggleMeterGroup MonthProfit]

[MeterV1H3_DayProfit]
#Надпись Per Day
Group=DayProfit
Meter=String
X=50
Y=105
W=100
H=15
FontSize=10
FontColor=#labelfntcolor##labelfntsolid#
Text="$ / Day"
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterTop
ClipString=1
Hidden=1
LeftMouseUpAction=[!ToggleMeterGroup DayProfit][!ToggleMeterGroup MonthProfit]