//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MBDownloadFileMgr
{
    NSMutableDictionary *_dicBizName2DownloadHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)clearAllDownloadHandler;
- (void)interruptDownloadHandlerWithBizName:(id)arg1;
- (void)clearDownloadHandlerWithBizName:(id)arg1;
- (id)getDownloadHandler:(id)arg1;
- (id)getAndNewDownloadHandlerIfNotExistWithBizName:(id)arg1 context:(id)arg2;
- (_Bool)abortDownloadTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (void)downloadFileWithBizName:(id)arg1 taskID:(id)arg2 url:(id)arg3 httpHeaders:(id)arg4 context:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 headerHandler:(CDUnknownBlockType)arg7 progressHandler:(CDUnknownBlockType)arg8;
- (id)genDownloadTaskID;
- (void)onBizDestory:(id)arg1;
- (void)onBizPause:(id)arg1;
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

