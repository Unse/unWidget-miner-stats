[MeterV3H1]
#Текст Your Address
Meter=String
X=330
Y=15
W=60
H=30
Text="Your Address"
FontSize=10
FontColor=#labelfntcolor##labelfntsolid#
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterCenter
ClipString=1

[MeterV3H2]
#Кнопка Редактировать адрес
Meter=String
X=330
Y=45
W=60
H=30
Text="Edit"
FontSize=10
FontColor=#EditColor#120
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterCenter
ClipString=1
LeftMouseUpAction=[!CommandMeasure MeasurePayIdInput "ExecuteBatch 1-2"][!SetVariable SaveColor #Gray#][!SetVariable DeleteColor #Gray#]
MouseOverAction=[!SetOption MeterV3H2 FontColor "#Red#200"]
MouseLeaveAction=[!SetOption MeterV3H2 FontColor "#EditColor#120"]

[MeterV3H3]
#Кнопка Сохранить адрес
Meter=String
X=330
Y=75
W=60
H=30
Text="Save"
FontSize=10
FontColor=#SaveColor#120
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterCenter
ClipString=1
DynamicVariables=1
LeftMouseUpAction=[!RainmeterWriteKeyValue Variables PayID #PayID#][!SetVariable SaveColor #Green#][!SetVariable DeleteColor #Gray#]
MouseOverAction=[!SetOption MeterV3H3 FontColor "#Red#200"]
MouseLeaveAction=[!SetOption MeterV3H3 FontColor "#SaveColor#120"]

[MeterV3H4]
#Кнопка удалить адрес
Meter=String
X=330
Y=105
W=60
H=30
Text="Delete"
FontSize=10
FontColor=#DeleteColor#120
SolidColor=#bgcolor##bgsolid#
AntiAlias=1
StringAlign=CenterCenter
ClipString=1
DynamicVariables=1
LeftMouseUpAction=[!RainmeterWriteKeyValue Variables PayID "-"][!SetVariable DeleteColor #Green#][!SetVariable SaveColor #Gray#]
MouseOverAction=[!SetOption MeterV3H4 FontColor "#Red#200"]
MouseLeaveAction=[!SetOption MeterV3H4 FontColor "#DeleteColor#120"]