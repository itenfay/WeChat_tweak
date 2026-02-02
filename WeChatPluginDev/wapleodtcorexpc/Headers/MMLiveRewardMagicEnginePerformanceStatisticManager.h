//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveMagicEnginePerformanceRecordTask, MMLiveMetricsInfoRecordInfo, MMLiveTaskId, NSMutableDictionary, NSString;

@interface MMLiveRewardMagicEnginePerformanceStatisticManager : NSObject
{
    MMLiveTaskId *_taskId;
    MMLiveMetricsInfoRecordInfo *_latestMetricsRecordInfo;
    NSMutableDictionary *_performanceRecordTaskDict;
    MMLiveMagicEnginePerformanceRecordTask *_currRecordTask;
}

+ (_Bool)enablePerformanceStatistic;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveMagicEnginePerformanceRecordTask *currRecordTask; // @synthesize currRecordTask=_currRecordTask;
@property(retain, nonatomic) NSMutableDictionary *performanceRecordTaskDict; // @synthesize performanceRecordTaskDict=_performanceRecordTaskDict;
@property(retain, nonatomic) MMLiveMetricsInfoRecordInfo *latestMetricsRecordInfo; // @synthesize latestMetricsRecordInfo=_latestMetricsRecordInfo;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onAnimationTimeoutWithHandler:(id)arg1;
- (void)onAnimationEndWithWithHandler:(id)arg1;
- (void)onAnimationCancelWithHandler:(id)arg1;
- (void)onResLoadedWithHandler:(id)arg1;
- (void)tryStartPerformanceRecordWithHandler:(id)arg1 scene:(unsigned long long)arg2;
- (void)onAnimationPrepareEditWithHandler:(id)arg1 actionInfo:(id)arg2;
- (void)onAnimationPreparePlayWithHandler:(id)arg1 actionInfo:(id)arg2;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
@property(readonly, nonatomic) _Bool isRecording;
- (id)getRecordTaskWithHandler:(id)arg1;
- (void)updateCurrRecordTask:(id)arg1;
- (void)updateLatestMetricsRecordInfo:(id)arg1;
- (id)createUniqueKeyWithGiftName:(id)arg1 productId:(id)arg2;
- (id)createPerformanceRecordTaskWithGiftName:(id)arg1 productId:(id)arg2;
- (void)notifyRecordTaskCancelMonitorForMagicRewardHandler:(id)arg1;
- (void)registerRecordTaskWithMagicRewardHandlerIfNeed:(id)arg1;
- (void)extractMedianPerformanceData:(CDUnknownBlockType)arg1;
- (void)reportPerformance;
- (void)cancelMonitorForMagicRewardHandler:(id)arg1;
- (void)monitorPerformanceForMagicRewardHandler:(id)arg1;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initDefaultData;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

