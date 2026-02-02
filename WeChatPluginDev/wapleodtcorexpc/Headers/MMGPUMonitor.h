//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGPUMonitorConfig, MMMetricsRecordDB, MMStackReportConnection, NSMutableArray, NSRecursiveLock;
@protocol MTLDevice;

@interface MMGPUMonitor : NSObject
{
    NSRecursiveLock *m_lock;
    _Bool m_hasInit;
    _Bool m_isSampling;
    id <MTLDevice> m_defaultDevice;
    MMGPUMonitorConfig *m_config;
    NSMutableArray *m_interceptClassNames;
    MMMetricsRecordDB *m_db;
    NSMutableArray *m_samplesToInsert;
    void *m_samplesToMerge;
    void *m_eventConfigs;
    MMStackReportConnection *m_reportConnection;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)resetReportCount;
- (id)stackInfosFromSamples:(id)arg1;
- (void)uploadMetricsDataFrom:(double)arg1 to:(double)arg2 averageUsage:(float)arg3 eventTag:(unsigned long long)arg4 eventSubTag:(unsigned long long)arg5 eventInfo:(id)arg6 inRecordDB:(id)arg7;
- (void)uploadCriticalEvent:(id)arg1;
- (void)uploadAllCriticalEvent;
- (id)checkCriticalEventWithConfig:(id)arg1 userType:(unsigned long long)arg2 metricsInfos:(id)arg3;
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)saveData;
- (id)samplesToSave;
- (void)reportSamplingTraceInfo:(id)arg1;
- (void)recordCommitCallStack:(id)arg1;
- (void)bindSamplingTraceInfo:(id)arg1 withCommandBuffer:(id)arg2;
- (_Bool)hasCommandBufferSampled:(id)arg1;
- (void)markCommandBufferAsSampled:(id)arg1;
- (void)endSamplingWithCommandBuffer:(id)arg1;
- (void)beginSamplingWithCommandBuffer:(id)arg1 parallelRenderRenderPassDescriptor:(id)arg2;
- (void)beginSamplingWithCommandBuffer:(id)arg1 blitPassDescriptor:(id)arg2;
- (void)beginSamplingWithCommandBuffer:(id)arg1 computePassDescriptor:(id)arg2;
- (void)beginSamplingWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (void)checkRenderPassSampleCountForRciVOIP:(id)arg1;
- (void)stencilAttachmentSampleCountShouldBe1;
- (void)depthAttachmentSampleCountShouldBe1;
- (void)defaultRasterSampleCountShouldBe1;
- (void)renderTargetColorAtttachmentCountShouldGreaterThan1;
- (void)renderTargetSampleCountShouldBe1;
- (void)stopSampling;
- (void)startSampling;
- (id)getTimestampCounterSet:(id)arg1;
- (void)initSampling;
- (_Bool)hasCrashedInGPUCounterSampling;
- (void)setRecordDB:(id)arg1;
- (void)setEventConfig:(id)arg1 forUserType:(unsigned long long)arg2;
- (void)setConfig:(id)arg1;
- (void)dealloc;
- (id)init;

@end

