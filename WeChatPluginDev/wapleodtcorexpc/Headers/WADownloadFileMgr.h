//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WADownloadFileMgr
{
    NSMutableDictionary *_dicAppID2DownloadHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)clearAllDownloadHandler;
- (void)interruptDownloadHandlerWithAppID:(id)arg1;
- (void)clearDownloadHandlerWithAppID:(id)arg1;
- (id)getDownloadHandler:(id)arg1;
- (id)getAndNewDownloadHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (_Bool)abortDownloadTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (void)downloadFileWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(_Bool)arg3 taskID:(id)arg4 url:(id)arg5 httpHeaders:(id)arg6 context:(id)arg7 isUseCronet:(_Bool)arg8 useQuic:(_Bool)arg9 useHttp2:(_Bool)arg10 useCache:(_Bool)arg11 appType:(unsigned int)arg12 completionHandler:(CDUnknownBlockType)arg13 headerHandler:(CDUnknownBlockType)arg14 progressHandler:(CDUnknownBlockType)arg15;
- (id)genDownloadTaskID;
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

