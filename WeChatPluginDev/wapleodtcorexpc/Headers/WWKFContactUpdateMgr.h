//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, WWKFContactOpLogic;

@interface WWKFContactUpdateMgr
{
    WWKFContactOpLogic *_contactOpLogic;
    NSMutableArray *_queueWaitingTasks;
    NSMutableDictionary *_dictUserName2RequestingTasks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictUserName2RequestingTasks; // @synthesize dictUserName2RequestingTasks=_dictUserName2RequestingTasks;
@property(retain, nonatomic) NSMutableArray *queueWaitingTasks; // @synthesize queueWaitingTasks=_queueWaitingTasks;
@property(retain, nonatomic) WWKFContactOpLogic *contactOpLogic; // @synthesize contactOpLogic=_contactOpLogic;
- (long long)updateContactDefautltInterval;
- (unsigned long long)maxRequestTaskCount;
- (void)handleFetchContactResponse:(id)arg1;
- (void)removeTaskAferUpdate:(id)arg1;
- (_Bool)isContactStillInUpdateInterval:(id)arg1;
- (void)mainThread_checkWaitingQueue;
- (id)taskInWaittingQueueWithUsername:(id)arg1;
- (void)mainThread_addTaskToUpdateQueue:(id)arg1;
- (void)updateWWKFContact:(id)arg1 isForce:(_Bool)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

