//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCLoopMetricsCollector;

@interface MMLiveRemoteCustomRenderMetricsMonitor : NSObject
{
    CDUnknownBlockType _checkCurrIsTopPerfLevelCallback;
    CDUnknownBlockType _increasePerfLevelCallback;
    CDUnknownBlockType _decreasePerfLevelCallback;
    CDUnknownBlockType _checkTimeRangeContainWeffectCreateCallback;
    CDUnknownBlockType _checkTimeRangeIsFullLoadCallback;
    WCLoopMetricsCollector *_renderMetricsCollector;
    NSMutableArray *_recentMetricsList;
    double _lastDecreaseTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastDecreaseTime; // @synthesize lastDecreaseTime=_lastDecreaseTime;
@property(retain, nonatomic) NSMutableArray *recentMetricsList; // @synthesize recentMetricsList=_recentMetricsList;
@property(retain, nonatomic) WCLoopMetricsCollector *renderMetricsCollector; // @synthesize renderMetricsCollector=_renderMetricsCollector;
@property(copy, nonatomic) CDUnknownBlockType checkTimeRangeIsFullLoadCallback; // @synthesize checkTimeRangeIsFullLoadCallback=_checkTimeRangeIsFullLoadCallback;
@property(copy, nonatomic) CDUnknownBlockType checkTimeRangeContainWeffectCreateCallback; // @synthesize checkTimeRangeContainWeffectCreateCallback=_checkTimeRangeContainWeffectCreateCallback;
@property(copy, nonatomic) CDUnknownBlockType decreasePerfLevelCallback; // @synthesize decreasePerfLevelCallback=_decreasePerfLevelCallback;
@property(copy, nonatomic) CDUnknownBlockType increasePerfLevelCallback; // @synthesize increasePerfLevelCallback=_increasePerfLevelCallback;
@property(copy, nonatomic) CDUnknownBlockType checkCurrIsTopPerfLevelCallback; // @synthesize checkCurrIsTopPerfLevelCallback=_checkCurrIsTopPerfLevelCallback;
- (double)metricsCollectionDuration;
- (void)logRenderDuration:(id)arg1;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (_Bool)isMetricsTimeRangeFullLoad:(id)arg1;
- (unsigned long long)goodCaseMetricsCheckCnt;
- (double)goodDurationStandard;
- (_Bool)checkRecentMetricsIsGoodCase;
- (_Bool)checkIsNeedToIncreasePerfLevel;
- (_Bool)isMetricsTimeRangeContainWeffectCreate:(id)arg1;
- (unsigned long long)badCaseMetricsCheckCnt;
- (double)seriousDurationStandard;
- (double)criticalDurationStandard;
- (double)worstDurationStandard;
- (double)minimumDurationBetweenDecrease;
- (_Bool)checkRecentMetricsIsSeriousCase;
- (_Bool)checkRecentMetricsIsCriticalCase;
- (_Bool)checkRecentMetricsIsWorstCase;
- (_Bool)checkIsNeedToDecreasePerfLevel;
- (void)checkRecentMetricsReport;
- (unsigned long long)recentCacheMetricsCnt;
- (void)checkRecentMetricsCacheOverLimit;
- (double)expireTime;
- (void)checkRecentMetricsCacheExpire;
- (void)clearRenderMetrics;
- (void)addRenderMetrics:(id)arg1;
- (void)tryDecreasePerformanceLevel;
- (void)tryIncreasePerformanceLevel;
- (id)metricsActionKey;
- (id)metricsLoopKey;
- (void)onRenderEnd;
- (void)onRenderBegin;
- (void)initDefaultData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

