//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, OrderedDictionary;

@interface MJCdnDownloadManager
{
    unsigned long long _maxRunningConcurrentCount;
    OrderedDictionary *_pendingTasks;
    NSMutableDictionary *_runningTasks;
    NSMutableDictionary *_successTasks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *successTasks; // @synthesize successTasks=_successTasks;
@property(retain, nonatomic) NSMutableDictionary *runningTasks; // @synthesize runningTasks=_runningTasks;
@property(retain, nonatomic) OrderedDictionary *pendingTasks; // @synthesize pendingTasks=_pendingTasks;
@property(nonatomic) unsigned long long maxRunningConcurrentCount; // @synthesize maxRunningConcurrentCount=_maxRunningConcurrentCount;
- (void)runningTaskDidComplete:(id)arg1;
- (_Bool)_checkNextPendingTask;
- (void)checkPendingTasks;
- (void)removeTaskWithTaskKey:(id)arg1;
- (void)createPendingTaskWithRequest:(id)arg1;
- (void)addTaskWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

