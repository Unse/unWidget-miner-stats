[MeasureCurrentTimeStampUTC0]
# Просто локально получаем время в unix time stamp с поправкой на utc-0 (т.к. пул отдает таймстамп тоже в ютц-0)
Measure=Time
TimeZone=0

[MeasureLastBlockTimeAgo]
# Из локального таймстампа вычитаем таймстамп пула последнего блока и отдаем в формате Ч:М:С
Measure=Time
TimeStamp=([MeasureCurrentTimeStampUTC0:]-[MeasureLastBlockTimeUnix])
Format=%H:%M:%S
DynamicVariables=1