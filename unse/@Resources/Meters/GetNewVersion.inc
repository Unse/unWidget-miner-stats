[MeterH1_GetNewVer]
Meter=String
X=180
Y=60
W=360
H=120
SolidColor=0,0,0,200
FontColor=#valuefontcolor#200
FontSize=15
StringAlign=CenterCenter
Hidden=1
Text= "# # # # New Version Available # # # # # Click me to read changes"
ClipString=1
LeftMouseUpAction=[!HideMeter MeterH1_GetNewVer][!ShowMeterGroup Changelog]


[MeterH1_GetNewVerSmall]
Meter=String
X=100
Y=20
W=80
H=25
SolidColor=0,0,0,1
FontColor=#Red##labelfntsolid#
FontSize=8
StringAlign=LeftCenter
Hidden=1
Text="New  Version Available"
ClipString=1
LeftMouseUpAction=[!ShowMeterGroup Changelog]

[MeterH1_DownloadLink]
Group=Changelog
Meter=String
X=180
Y=15
W=360
H=30
SolidColor=1,1,1,225
FontColor=#valuefontcolor#200
FontSize=25
StringAlign=CenterCenter
Hidden=1
Text="Download link"
ClipString=1
LeftMouseUpAction=["https://github.com/Unse/unWidget-miner-stats/releases"]

[MeterH1_HideAll_left]
Group=Changelog
Meter=String
X=40
Y=15
W=60
H=30
SolidColor=1,1,1,1
FontColor=#valuefontcolor#230
FontSize=10
StringAlign=CenterCenter
InlineSetting=Weight | 700
Hidden=1
Text="[Hide All]"
ClipString=1
LeftMouseUpAction=[!HideMeterGroup Changelog]
MouseOverAction=[!SetOption MeterH1_HideAll_left FontColor "#Red#200"][!SetOption MeterH1_HideAll_right FontColor "#Red#200"][!Redraw]
MouseLeaveAction=[!SetOption MeterH1_HideAll_left FontColor "#valuefontcolor#200"][!SetOption MeterH1_HideAll_right FontColor "#valuefontcolor#200"][!Redraw]
[MeterH1_HideAll_right]
Group=Changelog
Meter=String
X=320
Y=15
W=60
H=30
SolidColor=1,1,1,1
FontColor=#valuefontcolor#230
FontSize=10
StringAlign=CenterCenter
InlineSetting=Weight | 700
Hidden=1
Text="[Hide All]"
ClipString=1
LeftMouseUpAction=[!HideMeterGroup Changelog]
MouseOverAction=[!SetOption MeterH1_HideAll_left FontColor "#Red#200"][!SetOption MeterH1_HideAll_right FontColor "#Red#200"][!Redraw]
MouseLeaveAction=[!SetOption MeterH1_HideAll_left FontColor "#valuefontcolor#200"][!SetOption MeterH1_HideAll_right FontColor "#valuefontcolor#200"][!Redraw]

[MeterH1_ChangelogLabel]
Group=Changelog
Meter=String
X=180
Y=40
W=360
H=20
SolidColor=1,1,1,225
FontColor=#valuefontcolor#200
FontSize=15
StringAlign=CenterCenter
Hidden=1
Padding=0,1,0,0
Text="What's New:"
ClipString=1

[MeterH1_ChangelogFull]
Group=Changelog
Meter=String
X=0
Y=51
W=240
SolidColor=1,1,1,225
FontColor=#valuefontcolor#230
FontSize=10
StringAlign=LeftTop
Padding=60,0,60,10
Hidden=1
MeasureName=MeasureChangelog
ClipString=2