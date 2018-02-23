[MeterV2H1_0]
Meter=String
X=100
Y=10
W=80
H=20
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=LeftCenter

[MeterV2H1_Donate]
#Help icon
Meter=Image
ImageName=#@#\Icons\donate.png
PreserveAspectRatio=1
X=105
Y=00
W=20
H=20
Greyscale=1
ImageTint=#valuefontcolor##labelfntsolid#
AntiAlias=1
LeftMouseUpAction=["#DonateLink#"]


[MeterV2H1]
#—сылка на пул:
Meter=String
X=300
Y=10
W=120
H=20
Text=#sitename#
FontSize=8
FontColor=#labelfntcolor##labelfntsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=RightCenter
ClipString=1
LeftMouseUpAction=["http://#sitename#"]
