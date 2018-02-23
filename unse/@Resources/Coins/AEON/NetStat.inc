[MeasureGetNetStats]
UpdateDivider=300
UpdateRate=1
ForceReload=1
Measure=Plugin
Plugin=WebParser
DynamicVariables=1
URL=https://whattomine.com/coins/192.json
RegExp=(?siU)"block_time":"(.*)",.*"block_reward24":(.*),.*"difficulty":(.*),

[MeasureBlockTime]
Measure=Plugin
Plugin=WebParser
URL=[MeasureGetNetStats]
StringIndex=1

[MeasureBlockReward]
Measure=Plugin
Plugin=WebParser
URL=[MeasureGetNetStats]
StringIndex=2

[MeasureDiff]
Measure=Plugin
Plugin=WebParser
URL=[MeasureGetNetStats]
StringIndex=3

[MeasureDiffSplitted]
Measure=Calc
Formula=Round( MeasureDiff )
RegExpSubstitute=1
Substitute="^(\d{1,2}?)((\d{3})+)$":"\1`\2","(\d{3})(?=\d)":"\1`"