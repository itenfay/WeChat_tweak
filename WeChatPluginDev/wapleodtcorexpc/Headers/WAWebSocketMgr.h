//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAWebSocketMgr
{
    NSMutableDictionary *_dicAppID2WebSocketHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (id)getNewSocketTaskID;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)closeAndDeleteAllWebSocketHandler;
- (void)interruptHandlerWithAppID:(id)arg1;
- (void)closeAndDeleteHandlerWithAppID:(id)arg1;
- (id)getHandlerWithAppID:(id)arg1;
- (id)getAndNewHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (void)sendData:(id)arg1 withAppID:(id)arg2 compatibleSingleConnection:(_Bool)arg3 taskID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendString:(id)arg1 withAppID:(id)arg2 compatibleSingleConnection:(_Bool)arg3 taskID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)closeSocketWithAppID:(id)arg1 compatibleSingleConnection:(_Bool)arg2 taskID:(id)arg3 code:(long long)arg4 reason:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)connectSocketWithAppID:(id)arg1 compatibleSingleConnection:(_Bool)arg2 taskID:(id)arg3 appVersion:(unsigned long long)arg4 isIgnoreCheckDomain:(_Bool)arg5 url:(id)arg6 httpHeaders:(id)arg7 subProtocols:(id)arg8 context:(id)arg9 completionHandler:(CDUnknownBlockType)arg10 openHandler:(CDUnknownBlockType)arg11 closeHandler:(CDUnknownBlockType)arg12 errorHandler:(CDUnknownBlockType)arg13 messageHandler:(CDUnknownBlockType)arg14;
- (id)genSocketTaskID;
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

