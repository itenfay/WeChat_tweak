//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WAWebSocketConfig;
@protocol OS_dispatch_queue, WAWebSocketHandlerDelegate;

@interface WAWebSocketHandler : NSObject
{
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WAWebSocketConfig *_webSocketConfig;
    NSMutableArray *_arrTask;
    unsigned int _workerId;
    id <WAWebSocketHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
@property(nonatomic) __weak id <WAWebSocketHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webSocketTaskDidEnd:(id)arg1;
- (void)openSocketWithCompatibleSingleConnection:(_Bool)arg1 taskID:(id)arg2 url:(id)arg3 httpHeaders:(id)arg4 subProtocols:(id)arg5 context:(id)arg6 openHandler:(CDUnknownBlockType)arg7 closeHandler:(CDUnknownBlockType)arg8 errorHandler:(CDUnknownBlockType)arg9 messageHandler:(CDUnknownBlockType)arg10;
- (id)genNewSocketTaskID;
- (void)removeAllTask;
- (void)removeTask:(id)arg1;
- (void)addTask:(id)arg1;
- (id)getAllTask;
- (id)getTaskWithTaskID:(id)arg1;
- (id)getCompatibleSingleConnectionTask;
- (unsigned long long)getTaskCount;
- (_Bool)isReachMaxConcurrentCount;
- (void)closeAllTaskAndReleaseImmediately;
- (void)closeAllTaskWithReason:(id)arg1;
- (void)sendData:(id)arg1 withCompatibleSingleConnection:(_Bool)arg2 taskID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendString:(id)arg1 withCompatibleSingleConnection:(_Bool)arg2 taskID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)closeWithCompatibleSingleConnection:(_Bool)arg1 taskID:(id)arg2 code:(long long)arg3 reason:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)openWithCompatibleSingleConnection:(_Bool)arg1 taskID:(id)arg2 url:(id)arg3 httpHeaders:(id)arg4 isIgnoreCheckDomain:(_Bool)arg5 subProtocols:(id)arg6 context:(id)arg7 completionHandler:(CDUnknownBlockType)arg8 openHandler:(CDUnknownBlockType)arg9 closeHandler:(CDUnknownBlockType)arg10 errorHandler:(CDUnknownBlockType)arg11 messageHandler:(CDUnknownBlockType)arg12;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

