[Variables]
GA1=https://www.google-analytics.com/collect?v=1&t=screenview&tid=UA-108487740-1&cid=
GA2=&an=unWidget&av=
GA3=&cd=#sitename#


[MeasureRandomID]
UpdateDivider=-1
Measure=Calc
Formula=Random
[MeasureStats]
#Проверяем наличие id виджета
UpdateDivider=-1
Measure=String
String=#ID#
DynamicVariables=1
IfMatch="-"
IfMatchAction=[!SetVariable ID [MeasureRandomID]][!RainmeterWriteKeyValue Variables ID [MeasureRandomID]]
IfNotMatchAction=[!SetOption MeasureSendStat URL #GA1##ID##GA2##Version##GA3#][!UpdateMeter *][!UpdateMeasure *]
[MeasureSendStat]
# Сбор статистики по кол-ву онлайн пользователей виджета
UpdateDivider=120
UpdateRate=1
DynamicVariables=1
Measure=Plugin
Plugin=WebParser
ForceReload=1