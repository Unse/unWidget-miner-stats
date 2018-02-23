[MeasureGetBTCPrice]
#Получаем прайс sumo на btc 
UpdateDivider=60
UpdateRate=1
DynamicVariables=1
Measure=Plugin
Plugin=WebParser
URL=https://www.cryptopia.co.nz/api/GetMarket/ETN_BTC
RegExp=(?siU)"AskPrice":(.*),"BidPrice"
ForceReload=1
StringIndex=1

[MeasureBTCPrice]
# Забираем sumo to btc цену
Measure=Calc
Formula= MeasureGetBTCPrice

[MeasureUSDPrice]
# Забираем sumo to usd цену
Measure=Calc
Formula= MeasureGetBTC_USDPrice * MeasureBTCPrice