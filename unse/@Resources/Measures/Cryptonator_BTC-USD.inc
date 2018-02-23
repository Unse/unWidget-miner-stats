[MeasureGetBTC_USDPrice]
#Получаем прайс btc на usd
UpdateDivider=60
UpdateRate=1
DynamicVariables=1
Measure=Plugin
Plugin=WebParser
URL=https://api.cryptonator.com/api/ticker/btc-usd
RegExp=(?siU)"price":"(.*)","volume"
ForceReload=1
StringIndex=1