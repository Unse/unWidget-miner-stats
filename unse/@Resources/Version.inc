[Metadata]
Version=1.5
[Variables]
Version=1.5

[MeasureCheckVersion]
# Парсим страницу записей последних версий скина и забираем номер
UpdateDivider=600
UpdateRate=1
DynamicVariables=1
Measure=Plugin
Plugin=WebParser
URL="https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/unse/CheckVer.txt"
RegExp=(?siU)Latest Version: "(.*)". This 
ForceReload=1
StringIndex=1

[MeasureCalcVer]
#Ебанный костыль!
Measure=Calc
Formula=#Version#-MeasureCheckVersion
#Сравниваем последнюю версию с текущей. Если не совпадают - то показываем окно с линком на скачивание
IfCondition=MeasureCalcVer <0
IfTrueAction=[!ShowMeter MeterH1_GetNewVer][!Delay 2500][!HideMeter MeterH1_GetNewVer][!ShowMeter MeterH1_GetNewVerSmall][!SetOption MeasureCheckVersion UpdateDivider "-1"][!ShowMeter MeterH1_ChangelogSmall][!SetOption MeasureGetChangelog UpdateDivider "-1"]

[MeasureGetChangelog]
# Парсим страницу записей последних версий скина и забираем номер
UpdateDivider=600
UpdateRate=1
DynamicVariables=1
Measure=Plugin
Plugin=WebParser
URL="https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/unse/Changelog.txt"
RegExp=(?siU)\[\[Version\:[MeasureCheckVersion](.*)\]\]
ForceReload=1
[MeasureChangelog]
Measure=Plugin
Plugin=WebParser
URL=[MeasureGetChangelog]
StringIndex=1