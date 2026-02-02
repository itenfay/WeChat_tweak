//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveTask, MMLiveTaskId, NSMutableArray, NSString;

@interface MMLiveAnchorSEISynchronizeService
{
    NSMutableArray *_synchronizeObjList;
    MMLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSMutableArray *synchronizeObjList; // @synthesize synchronizeObjList=_synchronizeObjList;
- (void)removeSEISynchronizeDelegate:(id)arg1;
- (void)addSEISynchronizeDelegate:(id)arg1;
- (_Bool)containSEISynchronizeDelegate:(id)arg1;
- (double)getNextSynchronizeInterval;
- (void)synchronizeAnchorSeiInfo;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (id)handleSynchronizedAnchorSEIMsg:(id)arg1 taskId:(id)arg2;
- (void)stopSynchronizeFromObj:(id)arg1;
- (void)startSynchronizeFromObj:(id)arg1;
- (void)unRegisterWithTaskId:(id)arg1;
- (void)registerWithTaskId:(id)arg1;
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

