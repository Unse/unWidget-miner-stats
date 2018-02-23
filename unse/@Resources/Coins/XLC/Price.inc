[MeasureGetBTCPrice]
UpdateDivider=60
UpdateRate=1
DynamicVariables=1
Measure=Plugin
Plugin=WebParser
URL=https://www.cryptopia.co.nz/api/GetMarket/XLC_BTC
RegExp=(?siU)"AskPrice":(.*),"BidPrice"
ForceReload=1
StringIndex=1

[MeasureBTCPrice]
Measure=Calc
Formula= MeasureGetBTCPrice

[MeasureUSDPrice]
Measure=Calc
Formula= MeasureGetBTC_USDPrice * MeasureBTCPrice