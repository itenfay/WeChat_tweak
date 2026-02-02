//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface NewWAWebSocketMgr
{
    NSMutableDictionary *_dicAppID2WebSocketHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)closeAndDeleteAllWebSocketHandler;
- (void)interruptHandlerWithAppID:(id)arg1;
- (void)closeAndDeleteHandlerWithAppID:(id)arg1;
- (id)getHandlerWithAppID:(id)arg1;
- (id)getAndNewHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 appType:(unsigned int)arg3 appDebugModeType:(unsigned int)arg4 context:(id)arg5;
- (void)sendData:(id)arg1 withAppID:(id)arg2 taskID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendString:(id)arg1 withAppID:(id)arg2 taskID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)closeSocketWithAppID:(id)arg1 taskID:(id)arg2 code:(long long)arg3 reason:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)connectSocketWithAppID:(id)arg1 taskID:(id)arg2 appVersion:(unsigned long long)arg3 appType:(unsigned int)arg4 appDebugModeType:(unsigned int)arg5 isIgnoreCheckDomain:(_Bool)arg6 isOpenProfile:(_Bool)arg7 url:(id)arg8 httpHeaders:(id)arg9 subProtocols:(id)arg10 context:(id)arg11 completionHandler:(CDUnknownBlockType)arg12 openHandler:(CDUnknownBlockType)arg13 closeHandler:(CDUnknownBlockType)arg14 errorHandler:(CDUnknownBlockType)arg15 messageHandler:(CDUnknownBlockType)arg16;
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

