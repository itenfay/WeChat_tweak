//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSThread, WCBlockMonitorConfigHandler, WCBusyThreadHandler, WCCPUHandler, WCFilterStackHandler, WCMainThreadHandler, WCPowerConsumeStackCollector;
@protocol OS_dispatch_queue, WCBlockMonitorDelegate;

@interface WCBlockMonitorMgr : NSObject
{
    NSThread *m_monitorThread;
    _Bool m_bStop;
    long long m_currentState;
    unsigned long long m_nIntervalTime;
    unsigned long long m_nLastTimeInterval;
    struct vector<unsigned long, std::allocator<unsigned long>> m_vecLastMainThreadCallStack;
    unsigned long long m_lastMainThreadStackCount;
    unsigned long long m_blockDiffTime;
    unsigned int m_firstSleepTime;
    NSString *m_potenHandledLagFile;
    WCMainThreadHandler *m_pointMainThreadHandler;
    struct __CFRunLoopObserver *m_runLoopBeginObserver;
    struct __CFRunLoopObserver *m_runLoopEndObserver;
    struct __CFRunLoopObserver *m_initializationBeginRunloopObserver;
    struct __CFRunLoopObserver *m_initializationEndRunloopObserver;
    NSObject<OS_dispatch_queue> *m_asyncDumpQueue;
    WCCPUHandler *m_cpuHandler;
    _Bool m_bTrackCPU;
    WCFilterStackHandler *m_stackHandler;
    WCPowerConsumeStackCollector *m_powerConsumeStackCollector;
    unsigned int m_memoryMonitorTickTock;
    unsigned int m_printMemoryTickTok;
    unsigned int m_printCPUFrequencyTickTok;
    _Bool m_suspendAllThreads;
    _Bool m_enableSnapshot;
    _Bool m_moreThreadInfo;
    struct timeval m_recordStackTime;
    _Bool m_memoryExceeded;
    _Bool m_busyThreadProfile;
    unsigned int m_busyThreadProfileDuration;
    unsigned int m_busyThreadProfileInterval;
    WCBusyThreadHandler *m_busyThreadHandler;
    id <WCBlockMonitorDelegate> _delegate;
    WCBlockMonitorConfigHandler *_monitorConfigHandler;
}

+ (unsigned long long)diffTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
+ (void)checkRunloopDuration;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) WCBlockMonitorConfigHandler *monitorConfigHandler; // @synthesize monitorConfigHandler=_monitorConfigHandler;
@property(nonatomic) __weak id <WCBlockMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)makeThreadProfile;
- (void)powerConsumeStackCollectorConclude:(id)arg1;
- (id)generateLiveReportWithDumpType:(unsigned long long)arg1 withReason:(id)arg2 selfDefinedPath:(_Bool)arg3;
- (void)setShouldSuspendAllThreads:(_Bool)arg1;
- (_Bool)setRunloopThreshold:(unsigned int)arg1 isFirstTime:(_Bool)arg2;
- (_Bool)setRunloopThreshold:(unsigned int)arg1;
- (_Bool)recoverRunloopThreshold;
- (_Bool)lowerRunloopThreshold;
- (_Bool)recoverCPUUsage;
- (_Bool)lowerCPUUsage;
- (_Bool)isBackgroundCPUTooSmall;
- (void)stopTrackCPU;
- (void)startTrackCPU;
- (void)clearDumpInBackgroundLaunch;
- (void)clearLaunchLagRecord;
- (id)dumpFileWithType:(unsigned long long)arg1;
- (void)removeRunLoopObserver;
- (void)addRunLoopObserver;
- (void)resetStatus;
- (unsigned long long)needFilter;
- (unsigned long long)check;
- (void)recordCurrentStack;
- (void)threadProc;
- (void)addMonitorThread;
- (void)setPerStackInterval:(unsigned int)arg1;
- (void)setCPUUsagePercent:(float)arg1;
- (void)thermalStateDidChange;
- (void)willResignActive;
- (void)didEnterBackground;
- (void)didBecomeActive;
- (void)willTerminate;
- (id)getUserInfoForCurrentDumpForDumpType:(unsigned long long)arg1;
- (void)handleSuspend;
- (void)handleBackgroundLaunch;
- (void)stop;
- (void)start;
- (void)freeCpuHighThreadArray;
- (void)dealloc;
- (id)init;
- (void)resetConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

