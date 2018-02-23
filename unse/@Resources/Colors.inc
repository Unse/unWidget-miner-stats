[Variables]
Black=0,0,0,
White=255,255,255,
Gray=170,170,170,
DarkGray=47,47,47,
Red=255,0,0,
Green=0,255,0,
XMRcolor=255,102,0,
AEONcolor=44,137,160,
SUMOcolor=44,156,219,
KRBcolor=254,237,0,
ETNcolor=34,189,225,
ITNScolor=154,81,226,
XLCcolor=38,181,140,
FNOcolor=4,115,236,
EDLcolor=180,205,123,
GRFTcolor=254,66,0,



[Rainmeter]
Update=1000
AccurateText=1
DynamicWindowSize=1
ContextTitle="Background Transparency +50"
ContextAction=[!TogglePauseMeasure "MeasureBGSOLID_add"][!UpdateMeasure "MeasureBGSOLID_add"][!TogglePauseMeasure "MeasureBGSOLID_add"][!Refresh]
ContextTitle2="Background Transparency -50"
ContextAction2=[!TogglePauseMeasure "MeasureBGSOLID_rem"][!UpdateMeasure "MeasureBGSOLID_rem"][!TogglePauseMeasure "MeasureBGSOLID_rem"][!Refresh]
ContextTitle3=-
ContextTitle4="Labels Font Transparency +50"
ContextAction4=[!TogglePauseMeasure "MeasureLabelFntSolid_add"][!UpdateMeasure "MeasureLabelFntSolid_add"][!TogglePauseMeasure "MeasureLabelFntSolid_add"][!Refresh]
ContextTitle5="Labels Font Transparency -50"
ContextAction5=[!TogglePauseMeasure "MeasureLabelFntSolid_rem"][!UpdateMeasure "MeasureLabelFntSolid_rem"][!TogglePauseMeasure "MeasureLabelFntSolid_rem"][!Refresh]
ContextTitle6=-
ContextTitle7="Values Font Transparency +50"
ContextAction7=[!TogglePauseMeasure "MeasureValueFontSolid_add"][!UpdateMeasure "MeasureValueFontSolid_add"][!TogglePauseMeasure "MeasureValueFontSolid_add"][!Refresh]
ContextTitle8="Values Font Transparency -50"
ContextAction8=[!TogglePauseMeasure "MeasureValueFontSolid_rem"][!UpdateMeasure "MeasureValueFontSolid_rem"][!TogglePauseMeasure "MeasureValueFontSolid_rem"][!Refresh]
ContextTitle9=-
ContextTitle10="Reset"
ContextAction10=[!WriteKeyValue Variables bgsolid 1][!WriteKeyValue Variables labelfntsolid 190][!WriteKeyValue Variables valuefontsolid 190][!Refresh]


[MeasureBGSOLID_add]
UpdateDivider=-1
Measure=Calc
Formula=#bgsolid#+50
IfCondition=(MeasureBGSOLID_add <255)
IfTrueAction=[!WriteKeyValue Variables bgsolid [MeasureBGSOLID_add]]
IfCondition2=(MeasureBGSOLID_add >=255) && (#bgsolid# <255)
IfTrueAction2=[!WriteKeyValue Variables bgsolid "255"]
Paused=1
[MeasureBGSOLID_rem]
UpdateDivider=-1
Measure=Calc
Formula=#bgsolid#-50
IfCondition=(MeasureBGSOLID_rem >1)
IfTrueAction=[!WriteKeyValue Variables bgsolid [MeasureBGSOLID_rem]]
IfCondition2=(MeasureBGSOLID_rem <=1) && (#bgsolid# >1)
IfTrueAction2=[!WriteKeyValue Variables bgsolid "1"]
Paused=1

[MeasureLabelFntSolid_add]
UpdateDivider=-1
Measure=Calc
Formula=#labelfntsolid#+50
IfCondition=(MeasureLabelFntSolid_add <255)
IfTrueAction=[!WriteKeyValue Variables labelfntsolid [MeasureLabelFntSolid_add]]
IfCondition2=(MeasureLabelFntSolid_add >=255) && (#labelfntsolid# <255)
IfTrueAction2=[!WriteKeyValue Variables labelfntsolid "255"]
Paused=1
[MeasureLabelFntSolid_rem]
UpdateDivider=-1
Measure=Calc
Formula=#labelfntsolid#-50
IfCondition=(MeasureLabelFntSolid_rem >1)
IfTrueAction=[!WriteKeyValue Variables labelfntsolid [MeasureLabelFntSolid_rem]]
IfCondition2=(MeasureLabelFntSolid_rem <=1) && (#labelfntsolid# >1)
IfTrueAction2=[!WriteKeyValue Variables labelfntsolid "1"]
Paused=1

[MeasureValueFontSolid_add]
UpdateDivider=-1
Measure=Calc
Formula=#valuefontsolid#+50
IfCondition=(MeasureValueFontSolid_add <255)
IfTrueAction=[!WriteKeyValue Variables valuefontsolid [MeasureValueFontSolid_add]]
IfCondition2=(MeasureValueFontSolid_add >=255) && (#valuefontsolid# <255)
IfTrueAction2=[!WriteKeyValue Variables valuefontsolid "255"]
Paused=1
[MeasureValueFontSolid_rem]
UpdateDivider=-1
Measure=Calc
Formula=#valuefontsolid#+50
IfCondition=(MeasureValueFontSolid_rem <255)
IfTrueAction=[!WriteKeyValue Variables valuefontsolid [MeasureValueFontSolid_rem]]
IfCondition2=(MeasureValueFontSolid_rem >=255) && (#valuefontsolid# <255)
IfTrueAction2=[!WriteKeyValue Variables valuefontsolid "255"]
Paused=1