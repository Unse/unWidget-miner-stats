[MeasureGetLastBlockTimeUnix]
#ѕолучаем врем€ последнего блока
UpdateDivider=120
UpdateRate=1
DynamicVariables=1
Measure=Plugin
Plugin=WebParser
URL=https://#sitename#/api/pool/stats
RegExp=(?siU)"lastBlockFoundTime":(.*),"lastBlockFound"
ForceReload=1

[MeasureLastBlockTimeUnix]
# «абираем врем€ когда нашли последний блок в unix time stamp 
Measure=Plugin
Plugin=WebParser
URL=[MeasureGetLastBlockTimeUnix]
StringIndex=1