//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WARequestMgr
{
    NSMutableDictionary *_dicAppID2RequestHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (_Bool)verifyMethod:(id *)arg1;
- (id)getRequestHandler:(id)arg1;
- (id)getAndNewRequestHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (void)interruptRequestHandlerWithAppID:(id)arg1;
- (void)clearRequestHandlerWithAppID:(id)arg1;
- (void)clearAllRequestHandler;
- (_Bool)abortRequestTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (void)requestWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(_Bool)arg3 taskID:(id)arg4 url:(id)arg5 ip:(id)arg6 port:(unsigned int)arg7 host:(id)arg8 forbidReuse:(_Bool)arg9 data:(id)arg10 httpHeaders:(id)arg11 method:(id)arg12 context:(id)arg13 isUseCronet:(_Bool)arg14 useQuic:(_Bool)arg15 useHttp2:(_Bool)arg16 useCache:(_Bool)arg17 useChunked:(_Bool)arg18 appType:(unsigned int)arg19 forceCellularNetwork:(_Bool)arg20 completionHandler:(CDUnknownBlockType)arg21;
- (id)genRequestTaskID;
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

