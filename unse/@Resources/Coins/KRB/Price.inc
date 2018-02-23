[MeasureGetBTCPrice]
UpdateDivider=60
UpdateRate=1
DynamicVariables=1
Measure=Plugin
Plugin=WebParser
URL=https://api.cryptonator.com/api/ticker/krb-btc
RegExp=(?siU)"price":"(.*)","volume"
ForceReload=1
StringIndex=1

[MeasureBTCPrice]
Measure=Calc
Formula= MeasureGetBTCPrice

[MeasureUSDPrice]
Measure=Calc
Formula= MeasureGetBTC_USDPrice * MeasureBTCPrice