[MeasureMinerRewardDay]
#Profit per Day
Measure=Calc
Formula= MeasureCalcSecReward * 24

[MeasureMinerProfitDay]
#Profit per Day
Measure=Calc
Formula= MeasureMinerRewardDay * MeasureUSDPrice

[MeasureMinerRewardMonth]
#Profit per Month
Measure=Calc
Formula= MeasureMinerRewardDay * 30

[MeasureMinerProfitMonth]
#Profit per Month
Measure=Calc
Formula= MeasureMinerRewardMonth * MeasureUSDPrice

[MeasureMinerTotalPaid]
# Total Paid майнера без точки
Measure=Plugin
Plugin=WebParser
URL=[MeasureGetMinerStats]
StringIndex=2

[MeasureMinerTotalDue]
# Total Due майнера без точки
Measure=Plugin
Plugin=WebParser
URL=[MeasureGetMinerStats]
StringIndex=3

[MeasureMinerTotalPaidDot]
# Total Paid выделяем целое
Measure=Calc
Formula=MeasureMinerTotalPaid / #DecimalPlaces#

[MeasureMinerTotalDueDot]
# Total Paid выделяем целое
Measure=Calc
Formula=MeasureMinerTotalDue / #DecimalPlaces#