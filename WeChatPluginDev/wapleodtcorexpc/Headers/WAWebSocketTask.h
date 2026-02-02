//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SRWebSocket, WAWebSocketTaskDelayReleaseWrap;
@protocol OS_dispatch_queue, OS_dispatch_source, WAWebSocketTaskDelegate;

@interface WAWebSocketTask : NSObject
{
    NSString *_appID;
    NSString *_taskID;
    _Bool _isCompatibleSingleConnection;
    NSObject<OS_dispatch_queue> *_workerQueue;
    SRWebSocket *_websocket;
    _Bool _hasCalledCloseTask;
    unsigned int _appType;
    unsigned int _workerId;
    id <WAWebSocketTaskDelegate> _delegate;
    WAWebSocketTaskDelayReleaseWrap *_weakDelayReleaseWrap;
    NSObject<OS_dispatch_source> *_delayReleaseTimer;
    CDUnknownBlockType _openHandler;
    CDUnknownBlockType _closeHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _messageHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType closeHandler; // @synthesize closeHandler=_closeHandler;
@property(copy, nonatomic) CDUnknownBlockType openHandler; // @synthesize openHandler=_openHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *delayReleaseTimer; // @synthesize delayReleaseTimer=_delayReleaseTimer;
@property(nonatomic) __weak WAWebSocketTaskDelayReleaseWrap *weakDelayReleaseWrap; // @synthesize weakDelayReleaseWrap=_weakDelayReleaseWrap;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
@property(nonatomic) __weak id <WAWebSocketTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webSocket:(id)arg1 didReceiveMessageWithData:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessageWithString:(id)arg2;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocketDidOpen:(id)arg1;
- (void)callbackEndTask;
- (void)removeDelayReleaseWrap;
- (void)onDelayReleaseTimeout;
- (void)invalidateDelayReleaseTimer;
- (void)scheduleDelayReleaseTimer;
- (void)closeTaskWithReleaseImmediately:(_Bool)arg1;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2 releaseImmediately:(_Bool)arg3;
- (id)certificateArrayFromDataList:(id)arg1;
- (_Bool)sendData:(id)arg1 getError:(id *)arg2;
- (_Bool)sendString:(id)arg1 getError:(id *)arg2;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2;
- (void)closeWithReason:(id)arg1;
- (void)closeAndReleaseImmediately;
- (void)close;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)openWithUrl:(id)arg1 config:(id)arg2 httpHeaders:(id)arg3 subProtocols:(id)arg4 context:(id)arg5 openHandler:(CDUnknownBlockType)arg6 closeHandler:(CDUnknownBlockType)arg7 errorHandler:(CDUnknownBlockType)arg8 messageHandler:(CDUnknownBlockType)arg9;
- (void)setHandler:(CDUnknownBlockType)arg1 messageHandler:(CDUnknownBlockType)arg2 closeHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (_Bool)isAvailable;
- (_Bool)isCompatibleSingleConnection;
- (id)getTaskID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 taskID:(id)arg2 compatibleSingleConnection:(_Bool)arg3 workerQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

