//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JITRuntime, JITRuntimeNativeBufferMgr, NSMutableArray, NSMutableDictionary;
@protocol JITRuntimeJsApiHandlerDelegate;

@interface JITRuntimeJsApiHandler : NSObject
{
    _Bool _hasPendingNotifyCallbackCheck;
    _Bool _hasPendingNotifyEventCheck;
    _Bool _useXHRTransferJSEvent;
    NSMutableDictionary *_jsApiCallBackResult;
    NSMutableDictionary *_jsApiUseBase64;
    NSMutableArray *_pendingJITResult;
    NSMutableArray *_pendingJITEvent;
    NSObject *_pendingJITResultLock;
    unsigned long long _jitLastNotifyCallbackTimeInMs;
    unsigned long long _jitLastNotifyEventTimeInMs;
    id <JITRuntimeJsApiHandlerDelegate> _delegate;
    JITRuntime *_runtime;
    JITRuntimeNativeBufferMgr *_nativeBufferMgr;
    NSMutableDictionary *_commandBufferBuffers;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useXHRTransferJSEvent; // @synthesize useXHRTransferJSEvent=_useXHRTransferJSEvent;
@property(retain, nonatomic) NSMutableDictionary *commandBufferBuffers; // @synthesize commandBufferBuffers=_commandBufferBuffers;
@property(retain, nonatomic) JITRuntimeNativeBufferMgr *nativeBufferMgr; // @synthesize nativeBufferMgr=_nativeBufferMgr;
@property(nonatomic) __weak JITRuntime *runtime; // @synthesize runtime=_runtime;
@property(nonatomic) __weak id <JITRuntimeJsApiHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasPendingNotifyEventCheck; // @synthesize hasPendingNotifyEventCheck=_hasPendingNotifyEventCheck;
@property(nonatomic) _Bool hasPendingNotifyCallbackCheck; // @synthesize hasPendingNotifyCallbackCheck=_hasPendingNotifyCallbackCheck;
@property(nonatomic) unsigned long long jitLastNotifyEventTimeInMs; // @synthesize jitLastNotifyEventTimeInMs=_jitLastNotifyEventTimeInMs;
@property(nonatomic) unsigned long long jitLastNotifyCallbackTimeInMs; // @synthesize jitLastNotifyCallbackTimeInMs=_jitLastNotifyCallbackTimeInMs;
@property(retain, nonatomic) NSObject *pendingJITResultLock; // @synthesize pendingJITResultLock=_pendingJITResultLock;
@property(retain, nonatomic) NSMutableArray *pendingJITEvent; // @synthesize pendingJITEvent=_pendingJITEvent;
@property(retain, nonatomic) NSMutableArray *pendingJITResult; // @synthesize pendingJITResult=_pendingJITResult;
@property(retain, nonatomic) NSMutableDictionary *jsApiUseBase64; // @synthesize jsApiUseBase64=_jsApiUseBase64;
@property(retain, nonatomic) NSMutableDictionary *jsApiCallBackResult; // @synthesize jsApiCallBackResult=_jsApiCallBackResult;
- (id)packJITResult:(id)arg1;
- (id)convertNestedBuffers:(id)arg1 allArrayBuffer:(id)arg2 arrayBufferMetaArray:(id)arg3 bufferLength:(long long *)arg4;
- (unsigned int)pendingJITResultCount;
- (id)popPendingPureStringJITResults;
- (id)popPendingJITResults;
- (void)appendJITResult:(id)arg1 callbackID:(unsigned int)arg2 workerId:(unsigned int)arg3;
- (id)parseJsApiNativeBufferParams:(id)arg1 getError:(id *)arg2 useBase64:(_Bool)arg3;
- (id)parseNestedBuffers:(id)arg1 useBase64:(_Bool)arg2;
- (id)convertNativeParamsToJsApiResult:(id)arg1 getError:(id *)arg2 useBase64:(_Bool)arg3;
- (id)convertNativeNestedBuffers:(id)arg1 useBase64:(_Bool)arg2;
- (void)resumeAsyncFlush;
- (void)pauseAsyncFlush;
- (void)sendErrorEvent:(id)arg1 workerId:(unsigned int)arg2;
- (void)checkBatchSendJSEvent;
- (void)innerSendJSEvent:(id)arg1;
- (void)sendJSEvent:(id)arg1;
- (id)processJsApi:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 useBase64:(_Bool)arg4;
- (id)getJsApiErrorReuslt:(id)arg1 msg:(id)arg2;
- (void)checkNotifyCallback;
- (void)invokeJsApiCallback:(unsigned int)arg1 result:(id)arg2 useBase64:(_Bool)arg3 workerId:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)realInvokeJsApiCallback:(unsigned int)arg1 result:(id)arg2 workerId:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)invokeJsApiCallback:(unsigned int)arg1 result:(id)arg2 workerId:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processJsApiCommandBuffer:(id)arg1;
- (void)processJsApiXHRCommandBuffer:(id)arg1;
- (id)processJsApi:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3;
- (id)init;
- (_Bool)processInnerJsApi:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3;
- (void)handleJsApiReturn:(id)arg1 ret:(id)arg2 callbackId:(unsigned int)arg3;
- (unsigned int)processArrayBuffer:(id)arg1 fromEncode:(_Bool)arg2;
- (id)processInvokeHandler:(id)arg1 eventId:(int)arg2 dicParam:(id)arg3 useBase64:(_Bool)arg4;
- (id)processJsApiCommandBuffer:(const char *)arg1 useBase64:(_Bool)arg2 workerId:(unsigned int)arg3;
- (id)innerProcessJsApiCommandBuffer:(id)arg1 data:(id)arg2 workerId:(unsigned int)arg3;
- (void)innerProcessJsApiCommandBuffer:(id)arg1;

@end

