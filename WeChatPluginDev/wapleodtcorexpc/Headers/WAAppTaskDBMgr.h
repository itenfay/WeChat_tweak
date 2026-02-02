//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAAppTaskDBMgr
{
    NSMutableDictionary *_dicAppID2TaskDB;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)onAppTaskTerminate:(id)arg1;
- (void)clearTaskDBWithAppID:(id)arg1;
- (void)clearAllTaskDB;
- (id)getAndNewTaskDBIfNotExist:(id)arg1;
- (id)getAccessDBQueue;
- (id)getTaskDBWithAppID:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

