[MeterV2H3_1_Diff]
#Надпись Difficulty:
Meter=String
Group=Diff
X=170
Y=90
W=70
H=20
Text="Difficulty:"
FontSize=10
FontColor=#labelfntcolor##labelfntsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
LeftMouseUpAction=[!ToggleMeterGroup Diff][!ToggleMeterGroup LastBlockTime]

[MeterV2H3_2_Diff]
#Значение Difficulty:
Meter=String
Group=Diff
X=300
Y=90
W=130
H=20
MeasureName=MeasureDiffSplitted
FontSize=10
FontColor=#valuefontcolor##valuefontsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
LeftMouseUpAction=[!ToggleMeterGroup Diff][!ToggleMeterGroup LastBlockTime]