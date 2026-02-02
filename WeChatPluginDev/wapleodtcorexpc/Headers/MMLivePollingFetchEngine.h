//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, MMPollingFetchQueue, NSData, NSMutableDictionary, NSTimer;

@interface MMLivePollingFetchEngine : NSObject
{
    _Bool _hasStoped;
    MMLiveTaskId *_taskId;
    CDUnknownBlockType _requestModelMaker;
    long long _minPollingInterval;
    NSData *_lastBuffer;
    MMPollingFetchQueue *_queue;
    NSTimer *_timer;
    NSMutableDictionary *_executeTaskMap;
    NSMutableDictionary *_taskIntervalCache;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasStoped; // @synthesize hasStoped=_hasStoped;
@property(readonly, nonatomic) NSMutableDictionary *taskIntervalCache; // @synthesize taskIntervalCache=_taskIntervalCache;
@property(readonly, nonatomic) NSMutableDictionary *executeTaskMap; // @synthesize executeTaskMap=_executeTaskMap;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) MMPollingFetchQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) long long minPollingInterval; // @synthesize minPollingInterval=_minPollingInterval;
@property(copy, nonatomic) CDUnknownBlockType requestModelMaker; // @synthesize requestModelMaker=_requestModelMaker;
@property(readonly, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (long long)syncExtraInfoMinSleepInterval;
- (long long)syncExtraInfoMergeInterval;
- (void)stop;
- (void)_stopTimer;
- (void)stopTimerIfNeed;
- (void)timerEvent;
- (void)_start;
- (void)startIfNeed;
- (void)_executeTasks:(id)arg1 withModels:(id)arg2;
- (void)executeTasks:(id)arg1 withModels:(id)arg2;
- (void)addOrReplaceItems:(id)arg1;
- (void)mainThread_removeAllTasks;
- (void)removeAllTasks;
- (void)mainThread_removeTasksByCmdIdList:(id)arg1;
- (void)removeTasksByCmdIdList:(id)arg1;
- (void)mainThread_executeTasksByExecuteModels:(id)arg1;
- (void)executeTasksByExecuteModels:(id)arg1;
- (void)executeTasksByCmdIdList:(id)arg1;
- (_Bool)adjustTaskInterval:(unsigned long long)arg1 forCmdId:(id)arg2;
- (void)registerCmdIdsNeedWaiting:(id)arg1 withWaitingInfo:(id)arg2;
- (void)mainThread_addTasksIfNotExistsWithCmdIdList:(id)arg1 waitingInfo:(id)arg2;
- (void)addTasksIfNotExistsWithCmdIdList:(id)arg1 waitingInfo:(id)arg2;
- (void)addTasksIfNotExistsWithCmdIdList:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 requestParamsMaker:(CDUnknownBlockType)arg2;

@end

