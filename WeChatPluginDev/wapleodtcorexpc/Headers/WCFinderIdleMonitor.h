//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, WCFinderPriorityQueue, WCFinderPriorityTask;

@interface WCFinderIdleMonitor
{
    WCFinderPriorityQueue *_priorityQueue;
    WCFinderPriorityTask *_currentTask;
    MMTimer *_checkIdleTimer;
    CDUnknownBlockType _defaultMediaWrapCreateBlock;
    CDUnknownBlockType _firstFrameMediaWrapCreateBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType firstFrameMediaWrapCreateBlock; // @synthesize firstFrameMediaWrapCreateBlock=_firstFrameMediaWrapCreateBlock;
@property(copy, nonatomic) CDUnknownBlockType defaultMediaWrapCreateBlock; // @synthesize defaultMediaWrapCreateBlock=_defaultMediaWrapCreateBlock;
@property(retain, nonatomic) MMTimer *checkIdleTimer; // @synthesize checkIdleTimer=_checkIdleTimer;
@property(retain, nonatomic) WCFinderPriorityTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) WCFinderPriorityQueue *priorityQueue; // @synthesize priorityQueue=_priorityQueue;
- (void)reportIdleMonitorWithTid:(id)arg1 commentScene:(unsigned long long)arg2 priority:(unsigned long long)arg3 actionType:(unsigned long long)arg4 interruptedType:(unsigned long long)arg5;
- (void)reportIdleMonitorWithTid:(id)arg1 commentScene:(unsigned long long)arg2 priority:(unsigned long long)arg3 actionType:(unsigned long long)arg4;
- (void)reportIdleMonitorInterruptedAction:(unsigned long long)arg1 isInterrupted:(_Bool)arg2;
- (void)videoTaskInfoStatusChange:(unsigned long long)arg1 mediaWrap:(id)arg2;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onLiveTaskEnterLive:(id)arg1;
- (void)UIManagerDidCloseCompletely;
- (void)UIManagerWillOpenWindowWithContact:(id)arg1 isCaller:(_Bool)arg2 monoMsg:(id)arg3 startInApp:(_Bool)arg4 isEarMode:(_Bool)arg5 isAudioMode:(_Bool)arg6 from:(unsigned long long)arg7 isIlink:(_Bool)arg8;
- (_Bool)_canDownloadByCurrentNetWork;
- (void)handleNetworkChange;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)pauseCurrentTask;
- (void)stopCheckIdleTimer;
- (void)startCheckIdleTimer;
- (void)excuteTask:(id)arg1;
- (void)checkIdleAndExecuteTask;
- (void)cancelGroupIDTask:(id)arg1;
- (void)addTaskInfoWithTidArray:(id)arg1 commentScene:(int)arg2 priority:(unsigned long long)arg3 groupID:(id)arg4 customMediaWrap:(CDUnknownBlockType)arg5;
- (void)addTaskInfoWithTidArray:(id)arg1 commentScene:(int)arg2 priority:(unsigned long long)arg3 groupID:(id)arg4 taskInfoType:(unsigned long long)arg5;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
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

