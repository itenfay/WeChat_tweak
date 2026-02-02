//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WAAppTask, WAWebSocketConfig;
@protocol OS_dispatch_queue;

@interface NewWAWebSocketHandler : NSObject
{
    NSString *_appID;
    WAAppTask *_appTask;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WAWebSocketConfig *_webSocketConfig;
    unsigned int _appType;
    unsigned int _appDebugModeType;
    _Bool _tcpNoDelay;
    _Bool _perMessageDeflate;
    _Bool _isOpenProfile;
    NSMutableDictionary *_dicTaskID2WCID;
    NSMutableDictionary *_dicWCID2TaskIDAndHandler;
    unsigned int _workerId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
- (void)destroyWeAppAllSocket:(id)arg1;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didCloseWithCode:(long long)arg3 reason:(id)arg4;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didOpenWithCode:(long long)arg3 success:(_Bool)arg4 headers:(id)arg5 profiles:(id)arg6 msg:(id)arg7;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didReceiveMessage:(id)arg3;
- (id)genNewSocketTaskID;
- (void)removeAllTask:(_Bool)arg1;
- (void)removeTask:(id)arg1 wcwssID:(id)arg2;
- (void)addTask:(id)arg1 wcwssID:(id)arg2 wahandler:(id)arg3;
- (id)getAllTask;
- (id)getTaskHandlerWithWCID:(id)arg1;
- (id)getTaskWithTaskID:(id)arg1;
- (unsigned long long)getTaskCount;
- (_Bool)isReachMaxConcurrentCount;
- (void)closeAllTaskAndReleaseImmediately;
- (void)closeAllTaskWithReason:(id)arg1;
- (void)sendData:(id)arg1 taskID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendString:(id)arg1 taskID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)closeWithTaskID:(id)arg1 code:(long long)arg2 reason:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openWithTaskID:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 isIgnoreCheckDomain:(_Bool)arg4 subProtocols:(id)arg5 context:(id)arg6 isOpenProfile:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8 openHandler:(CDUnknownBlockType)arg9 closeHandler:(CDUnknownBlockType)arg10 errorHandler:(CDUnknownBlockType)arg11 messageHandler:(CDUnknownBlockType)arg12;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 appType:(unsigned int)arg3 appDebugModeType:(unsigned int)arg4 workerQueue:(id)arg5 context:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

