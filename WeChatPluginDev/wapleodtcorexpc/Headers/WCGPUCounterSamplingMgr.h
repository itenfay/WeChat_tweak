//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableDictionary, NSRecursiveLock, NSString, WCGPUCounterSamplingReporter, WCSamplingConfig;

@interface WCGPUCounterSamplingMgr
{
    WCSamplingConfig *_samplingConfig;
    unsigned long long _appLaunchTime;
    NSMutableDictionary *_reportEvents;
    MMTimer *_reportTimer;
    NSRecursiveLock *_sampleLock;
    WCGPUCounterSamplingReporter *_samplingReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCGPUCounterSamplingReporter *samplingReporter; // @synthesize samplingReporter=_samplingReporter;
@property(retain, nonatomic) NSRecursiveLock *sampleLock; // @synthesize sampleLock=_sampleLock;
@property(retain, nonatomic) MMTimer *reportTimer; // @synthesize reportTimer=_reportTimer;
@property(retain, nonatomic) NSMutableDictionary *reportEvents; // @synthesize reportEvents=_reportEvents;
@property unsigned long long appLaunchTime; // @synthesize appLaunchTime=_appLaunchTime;
@property(retain, nonatomic) WCSamplingConfig *samplingConfig; // @synthesize samplingConfig=_samplingConfig;
- (void)gpuMonitor:(id)arg1 didCollectSamplingTraceInfo:(id)arg2;
- (void)onIPXX:(id)arg1;
- (void)doStackReport;
- (void)onReportTimerCallback;
- (void)stopSampling;
- (void)startSampling;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

