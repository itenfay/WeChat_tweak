//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAUploadFileMgr
{
    NSMutableDictionary *_dicAppID2UploadHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)interruptUploadHandlerWithAppID:(id)arg1;
- (void)clearUploadHandlerWithAppID:(id)arg1;
- (void)clearAllUploadHandler;
- (id)getUploadHandler:(id)arg1;
- (id)getAndNewUploadHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (_Bool)abortUploadTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (void)uploadFileWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(_Bool)arg3 taskID:(id)arg4 url:(id)arg5 filePath:(id)arg6 fileFieldName:(id)arg7 httpHeaders:(id)arg8 formFields:(id)arg9 context:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (id)genUploadTaskID;
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

