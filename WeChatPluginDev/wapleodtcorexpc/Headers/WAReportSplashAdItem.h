//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportSplashAdItem
{
    _Bool _serviceInjectReady;
    int _isPreloaded;
    int _isWorker;
    unsigned int _displayMode;
    unsigned long long _costTimeMs;
    unsigned long long _startTimeStampMs;
    unsigned long long _endTimeStampMs;
    unsigned long long _showAdState;
    unsigned long long _shouldShowTimeStamp;
    unsigned long long _willLayoutFirstStepViewTimeStamp;
    unsigned long long _willLayoutAllViewTimeStamp;
    unsigned long long _showTimeStamp;
    unsigned long long _didLayoutFirstStepViewTimeStamp;
    unsigned long long _didLayoutAllViewTimeStamp;
    unsigned long long _checkStageTimeCost;
    unsigned long long _layoutFirstStepViewTimeCost;
    unsigned long long _layoutAllViewTimeCost;
    unsigned long long _jsReceiveShouldShowTimeStamp;
    unsigned long long _jsCallShowTimeStamp;
    unsigned long long _shouldShowEventTimeCost;
    unsigned long long _showEventTimeCost;
    unsigned long long _checkShowAdTimeThreshold;
    unsigned long long _notShowAdErrorCode;
    unsigned long long _adOperateCallTime;
    unsigned long long _adOperateCallReceivedTime;
    unsigned long long _adOperateCallbackTime;
    unsigned long long _adOperateCallbackReceivedTime;
    unsigned long long _adOperrateCallCostTime;
    unsigned long long _adOperateCallClientCostTime;
    unsigned long long _codeBlockTimeThreshold;
    unsigned long long _publicLibVersion;
}

@property(nonatomic) unsigned int displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) int isWorker; // @synthesize isWorker=_isWorker;
@property(nonatomic) int isPreloaded; // @synthesize isPreloaded=_isPreloaded;
@property(nonatomic) unsigned long long publicLibVersion; // @synthesize publicLibVersion=_publicLibVersion;
@property(nonatomic) _Bool serviceInjectReady; // @synthesize serviceInjectReady=_serviceInjectReady;
@property(nonatomic) unsigned long long codeBlockTimeThreshold; // @synthesize codeBlockTimeThreshold=_codeBlockTimeThreshold;
@property(nonatomic) unsigned long long adOperateCallClientCostTime; // @synthesize adOperateCallClientCostTime=_adOperateCallClientCostTime;
@property(nonatomic) unsigned long long adOperrateCallCostTime; // @synthesize adOperrateCallCostTime=_adOperrateCallCostTime;
@property(nonatomic) unsigned long long adOperateCallbackReceivedTime; // @synthesize adOperateCallbackReceivedTime=_adOperateCallbackReceivedTime;
@property(nonatomic) unsigned long long adOperateCallbackTime; // @synthesize adOperateCallbackTime=_adOperateCallbackTime;
@property(nonatomic) unsigned long long adOperateCallReceivedTime; // @synthesize adOperateCallReceivedTime=_adOperateCallReceivedTime;
@property(nonatomic) unsigned long long adOperateCallTime; // @synthesize adOperateCallTime=_adOperateCallTime;
@property(nonatomic) unsigned long long notShowAdErrorCode; // @synthesize notShowAdErrorCode=_notShowAdErrorCode;
@property(nonatomic) unsigned long long checkShowAdTimeThreshold; // @synthesize checkShowAdTimeThreshold=_checkShowAdTimeThreshold;
@property(nonatomic) unsigned long long showEventTimeCost; // @synthesize showEventTimeCost=_showEventTimeCost;
@property(nonatomic) unsigned long long shouldShowEventTimeCost; // @synthesize shouldShowEventTimeCost=_shouldShowEventTimeCost;
@property(nonatomic) unsigned long long jsCallShowTimeStamp; // @synthesize jsCallShowTimeStamp=_jsCallShowTimeStamp;
@property(nonatomic) unsigned long long jsReceiveShouldShowTimeStamp; // @synthesize jsReceiveShouldShowTimeStamp=_jsReceiveShouldShowTimeStamp;
@property(nonatomic) unsigned long long layoutAllViewTimeCost; // @synthesize layoutAllViewTimeCost=_layoutAllViewTimeCost;
@property(nonatomic) unsigned long long layoutFirstStepViewTimeCost; // @synthesize layoutFirstStepViewTimeCost=_layoutFirstStepViewTimeCost;
@property(nonatomic) unsigned long long checkStageTimeCost; // @synthesize checkStageTimeCost=_checkStageTimeCost;
@property(nonatomic) unsigned long long didLayoutAllViewTimeStamp; // @synthesize didLayoutAllViewTimeStamp=_didLayoutAllViewTimeStamp;
@property(nonatomic) unsigned long long didLayoutFirstStepViewTimeStamp; // @synthesize didLayoutFirstStepViewTimeStamp=_didLayoutFirstStepViewTimeStamp;
@property(nonatomic) unsigned long long showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
@property(nonatomic) unsigned long long willLayoutAllViewTimeStamp; // @synthesize willLayoutAllViewTimeStamp=_willLayoutAllViewTimeStamp;
@property(nonatomic) unsigned long long willLayoutFirstStepViewTimeStamp; // @synthesize willLayoutFirstStepViewTimeStamp=_willLayoutFirstStepViewTimeStamp;
@property(nonatomic) unsigned long long shouldShowTimeStamp; // @synthesize shouldShowTimeStamp=_shouldShowTimeStamp;
@property(nonatomic) unsigned long long showAdState; // @synthesize showAdState=_showAdState;
@property(nonatomic) unsigned long long endTimeStampMs; // @synthesize endTimeStampMs=_endTimeStampMs;
@property(nonatomic) unsigned long long startTimeStampMs; // @synthesize startTimeStampMs=_startTimeStampMs;
@property(nonatomic) unsigned long long costTimeMs; // @synthesize costTimeMs=_costTimeMs;
- (id)reportString;
- (int)reportID;

@end

