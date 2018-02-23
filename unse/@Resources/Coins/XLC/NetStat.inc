[MeasureGetNetStats]
#Take from our pool. Whattomine ignore this coin :(
UpdateDivider=300
UpdateRate=1
ForceReload=1
Measure=Plugin
Plugin=WebParser
DynamicVariables=1
URL=https://#sitename#/api/network/stats
RegExp=(?siU)"difficulty":(.*),"hash".*"value":(.*),"ts"

[MeasureBlockTime]
#Hardcoded cause can't find any api with block time for itns :/
#████ Edit this for your coin!!! ████
Measure=Calc
Formula=60

[MeasureGetBlockReward]
#Renamed to GETblockReward cause pool api haven't decimal placesd
Measure=Plugin
Plugin=WebParser
URL=[MeasureGetNetStats]
StringIndex=2

[MeasureBlockReward]
#Need for right decimal places in block reward
Measure=Calc
Formula= MeasureGetBlockReward / #DecimalPlaces#

[MeasureDiff]
Measure=Plugin
Plugin=WebParser
URL=[MeasureGetNetStats]
StringIndex=1

[MeasureDiffSplitted]
Measure=Calc
Formula=Round( MeasureDiff )
RegExpSubstitute=1
Substitute="^(\d{1,2}?)((\d{3})+)$":"\1`\2","(\d{3})(?=\d)":"\1`"