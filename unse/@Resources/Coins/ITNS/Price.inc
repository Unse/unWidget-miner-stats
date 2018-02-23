[MeasureGetBTCPrice]
UpdateDivider=360
UpdateRate=1
DynamicVariables=1
Measure=Plugin
Plugin=WebParser
URL=https://stocks.exchange/api2/prices
RegExp=(?siU)"buy":"([0-9\.]+)","sell":"[0-9\.]+","market_name":"ITNS_BTC"
ForceReload=1
StringIndex=1

[MeasureBTCPrice]
Measure=Calc
Formula= MeasureGetBTCPrice

[MeasureUSDPrice]
Measure=Calc
Formula= MeasureGetBTC_USDPrice * MeasureBTCPrice