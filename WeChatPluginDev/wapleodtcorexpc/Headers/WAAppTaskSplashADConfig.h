//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, WASplashADViewController, WASplashADWindow;

@interface WAAppTaskSplashADConfig : NSObject
{
    _Bool _splashADHasContent;
    _Bool _canShowSplashADWindow;
    _Bool _isHotStart;
    _Bool _canHotStartShowSplashAD;
    _Bool _isPreloaded;
    _Bool _launchShow;
    _Bool _launchDidAppear;
    _Bool _injectFinishedWhenSendSholdShowSplashAD;
    NSString *_appid;
    NSDictionary *_splashADMenuParams;
    unsigned long long _lastSuspendTime;
    unsigned long long _hotStartShowSplashADInterval;
    NSNumber *_splashADEnableNumber;
    NSNumber *_adWorkerEnableNumber;
    NSNumber *_splashADAllowNoPreloadNumber;
    WASplashADWindow *_splashADWindow;
    WASplashADViewController *_splashADViewController;
    unsigned long long _splashADShowState;
    unsigned long long _splashADCheckState;
    unsigned long long _splashADClientState;
    double _shouldShowTimeStamp;
    double _jsReceiveShouldShowTimeStamp;
    double _shouldShowEventTimeCost;
    double _jsCallShowTimeStamp;
    double _showTimeStamp;
    double _showEventTimeCost;
    double _checkStageTimeCost;
    double _willLayoutFirstStepViewTimeStamp;
    double _didLayoutFirstStepViewTimeStamp;
    double _layoutFirstStepViewTimeCost;
    double _willLayoutAllViewTimeStamp;
    double _didLayoutAllViewTimeStamp;
    double _layoutAllViewTimeCost;
    unsigned long long _notShowAdErrorCode;
    double _adOperateCallTime;
    double _adOperateCallReceivedTime;
    double _adOperateCallbackTime;
    double _adOperateCallbackReceivedTime;
    double _adOperrateCallCostTime;
    double _adOperateCallClientCostTime;
    NSNumber *_splashADAllowGameNumber;
    double _adLogicFinishedTimeStamp;
    double _checkShowAdTimeThreshold;
    double _codeBlockTimeThreshold;
    unsigned long long _publicLibVersion;
}

+ (unsigned int)splashADStateReportValueWithCheckState:(unsigned long long)arg1 showState:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool injectFinishedWhenSendSholdShowSplashAD; // @synthesize injectFinishedWhenSendSholdShowSplashAD=_injectFinishedWhenSendSholdShowSplashAD;
@property(nonatomic) unsigned long long publicLibVersion; // @synthesize publicLibVersion=_publicLibVersion;
@property(nonatomic) double codeBlockTimeThreshold; // @synthesize codeBlockTimeThreshold=_codeBlockTimeThreshold;
@property(nonatomic) double checkShowAdTimeThreshold; // @synthesize checkShowAdTimeThreshold=_checkShowAdTimeThreshold;
@property(nonatomic) double adLogicFinishedTimeStamp; // @synthesize adLogicFinishedTimeStamp=_adLogicFinishedTimeStamp;
@property(retain, nonatomic) NSNumber *splashADAllowGameNumber; // @synthesize splashADAllowGameNumber=_splashADAllowGameNumber;
@property(nonatomic) _Bool launchDidAppear; // @synthesize launchDidAppear=_launchDidAppear;
@property(nonatomic) _Bool launchShow; // @synthesize launchShow=_launchShow;
@property(nonatomic) double adOperateCallClientCostTime; // @synthesize adOperateCallClientCostTime=_adOperateCallClientCostTime;
@property(nonatomic) double adOperrateCallCostTime; // @synthesize adOperrateCallCostTime=_adOperrateCallCostTime;
@property(nonatomic) double adOperateCallbackReceivedTime; // @synthesize adOperateCallbackReceivedTime=_adOperateCallbackReceivedTime;
@property(nonatomic) double adOperateCallbackTime; // @synthesize adOperateCallbackTime=_adOperateCallbackTime;
@property(nonatomic) double adOperateCallReceivedTime; // @synthesize adOperateCallReceivedTime=_adOperateCallReceivedTime;
@property(nonatomic) double adOperateCallTime; // @synthesize adOperateCallTime=_adOperateCallTime;
@property(nonatomic) unsigned long long notShowAdErrorCode; // @synthesize notShowAdErrorCode=_notShowAdErrorCode;
@property(nonatomic) double layoutAllViewTimeCost; // @synthesize layoutAllViewTimeCost=_layoutAllViewTimeCost;
@property(nonatomic) double didLayoutAllViewTimeStamp; // @synthesize didLayoutAllViewTimeStamp=_didLayoutAllViewTimeStamp;
@property(nonatomic) double willLayoutAllViewTimeStamp; // @synthesize willLayoutAllViewTimeStamp=_willLayoutAllViewTimeStamp;
@property(nonatomic) double layoutFirstStepViewTimeCost; // @synthesize layoutFirstStepViewTimeCost=_layoutFirstStepViewTimeCost;
@property(nonatomic) double didLayoutFirstStepViewTimeStamp; // @synthesize didLayoutFirstStepViewTimeStamp=_didLayoutFirstStepViewTimeStamp;
@property(nonatomic) double willLayoutFirstStepViewTimeStamp; // @synthesize willLayoutFirstStepViewTimeStamp=_willLayoutFirstStepViewTimeStamp;
@property(nonatomic) double checkStageTimeCost; // @synthesize checkStageTimeCost=_checkStageTimeCost;
@property(nonatomic) double showEventTimeCost; // @synthesize showEventTimeCost=_showEventTimeCost;
@property(nonatomic) double showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
@property(nonatomic) double jsCallShowTimeStamp; // @synthesize jsCallShowTimeStamp=_jsCallShowTimeStamp;
@property(nonatomic) double shouldShowEventTimeCost; // @synthesize shouldShowEventTimeCost=_shouldShowEventTimeCost;
@property(nonatomic) double jsReceiveShouldShowTimeStamp; // @synthesize jsReceiveShouldShowTimeStamp=_jsReceiveShouldShowTimeStamp;
@property(nonatomic) double shouldShowTimeStamp; // @synthesize shouldShowTimeStamp=_shouldShowTimeStamp;
@property(nonatomic) _Bool isPreloaded; // @synthesize isPreloaded=_isPreloaded;
@property(nonatomic) unsigned long long splashADClientState; // @synthesize splashADClientState=_splashADClientState;
@property(nonatomic) unsigned long long splashADCheckState; // @synthesize splashADCheckState=_splashADCheckState;
@property(nonatomic) unsigned long long splashADShowState; // @synthesize splashADShowState=_splashADShowState;
@property(nonatomic) __weak WASplashADViewController *splashADViewController; // @synthesize splashADViewController=_splashADViewController;
@property(retain, nonatomic) WASplashADWindow *splashADWindow; // @synthesize splashADWindow=_splashADWindow;
@property(retain, nonatomic) NSNumber *splashADAllowNoPreloadNumber; // @synthesize splashADAllowNoPreloadNumber=_splashADAllowNoPreloadNumber;
@property(retain, nonatomic) NSNumber *adWorkerEnableNumber; // @synthesize adWorkerEnableNumber=_adWorkerEnableNumber;
@property(retain, nonatomic) NSNumber *splashADEnableNumber; // @synthesize splashADEnableNumber=_splashADEnableNumber;
@property(nonatomic) unsigned long long hotStartShowSplashADInterval; // @synthesize hotStartShowSplashADInterval=_hotStartShowSplashADInterval;
@property(nonatomic) unsigned long long lastSuspendTime; // @synthesize lastSuspendTime=_lastSuspendTime;
@property(nonatomic) _Bool canHotStartShowSplashAD; // @synthesize canHotStartShowSplashAD=_canHotStartShowSplashAD;
@property(nonatomic) _Bool isHotStart; // @synthesize isHotStart=_isHotStart;
@property(nonatomic) _Bool canShowSplashADWindow; // @synthesize canShowSplashADWindow=_canShowSplashADWindow;
@property(copy, nonatomic) NSDictionary *splashADMenuParams; // @synthesize splashADMenuParams=_splashADMenuParams;
@property(nonatomic) _Bool splashADHasContent; // @synthesize splashADHasContent=_splashADHasContent;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void)recordInjectFinishedWhenShouldShow:(_Bool)arg1;
- (void)recordClientAdOperateCallbackTime:(double)arg1;
- (void)recordClientAdOperateCallReceivedTime:(double)arg1;
- (void)recordAdOperateCallTime:(double)arg1 receiveTimeStamp:(double)arg2;
- (void)recordNotShowAdErrorCode:(unsigned long long)arg1;
- (void)handleShowSplashAdCalled:(_Bool)arg1;
- (void)doReport;
- (void)recordJSReceiveShouldShowTimeStamp:(double)arg1 jsCallShowTimeStamp:(double)arg2;
- (void)recordDidLayoutAllView:(double)arg1;
- (void)recordWillLayoutAllView:(double)arg1;
- (void)recordDidLayoutFirstStepView:(double)arg1;
- (void)recordWillLayoutFirstStepView:(double)arg1;
- (void)recordReceiveShow:(double)arg1;
- (void)recordShouldShow:(double)arg1;

@end

