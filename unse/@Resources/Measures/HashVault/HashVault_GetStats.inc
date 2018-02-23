[Variables]
LeftURL=http://#sitename#/api/miner/
RightURL="/stats"


[MeasureIsIHavePayID]
#Проверяем сохранен ли PayID
UpdateDivider=-1
Measure=String
String=#PayID#
DynamicVariables=1
IfMatch="-"
IfNotMatchAction=[!CommandMeasure MeasurePayIdInput "ExecuteBatch 2"]

[MeasurePayIdInput]
# Панель ввода SUMO Pay Id После клика
DynamicVariables=1
Measure=Plugin
Plugin=InputText
X=100
Y=30
W=260
H=90
FontSize=13
FontColor=#valuefontcolor#255
SolidColor=0,0,0,255
AntiAlias=1
FocusDismiss=1
DefaultValue=#PayID#
#Меняем переменную на то что введено
Command1=[!SetVariable PayID "$UserInput$"]
#Задаем полный URL c Pay ID для парсера
Command2=[!SetOption MeasureGetMinerStats URL "#LeftURL##*PayID*##RightURL#"][!UpdateMeter *][!UpdateMeasure *][!Redraw]

[MeasureGetMinerStats]
# Парсим всю (по майнеру! не по воркерам!) стату по sumo Pay id
UpdateDivider=30
UpdateRate=1
DynamicVariables=1
Measure=Plugin
Plugin=WebParser
# URL даем через MeasurePayIdInput из #*PayID*#
RegExp=(?siU)(?(?=.*"hash").*"hash":(.*),"identifier").*"amtPaid":(.*),"amtDue":(.*),"txnCount"
ForceReload=1

[MeasureMinerHashrate]
# Хешрейт майнера
Measure=Plugin
Plugin=WebParser
URL=[MeasureGetMinerStats]
StringIndex=1

