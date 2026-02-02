//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableDictionary, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface MMLiveAutoTestMgr
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_logQueues;
    NSObject<OS_dispatch_queue> *_dumpQueue;
    MMTimer *_scheduleTimer;
}

+ (id)autoTestAssertTypes;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *scheduleTimer; // @synthesize scheduleTimer=_scheduleTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dumpQueue; // @synthesize dumpQueue=_dumpQueue;
@property(retain, nonatomic) NSMutableDictionary *logQueues; // @synthesize logQueues=_logQueues;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)startScheduleTimer:(unsigned long long)arg1;
- (void)resumeScheduleTimer;
- (void)pauseScheduleTimer;
- (void)stopScheduleTimer;
- (void)resetLogQueue:(id)arg1;
- (id)logQueue:(id)arg1;
- (void)dumpCheckLogToFile;
- (void)logWithType:(id)arg1 message:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

