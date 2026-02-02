//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSContext, NSArray, NSMutableDictionary, NSString, NSThread, WAJSCoreService, WasmAdaptor;

@interface WAJSWorkFlow
{
    _Bool _runningApi;
    unsigned int _workerId;
    unsigned int _subContextId;
    NSString *_libWorkerType;
    WAJSCoreService *_service;
    NSArray *_apiList;
    NSThread *_thread;
    NSMutableDictionary *_timerObjs;
    NSString *_lastJSError;
    WasmAdaptor *_wasmAdaptor;
    NSMutableDictionary *_subContexts;
}

+ (id)getBundle;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *subContexts; // @synthesize subContexts=_subContexts;
@property(nonatomic) unsigned int subContextId; // @synthesize subContextId=_subContextId;
@property(retain, nonatomic) WasmAdaptor *wasmAdaptor; // @synthesize wasmAdaptor=_wasmAdaptor;
@property(nonatomic) _Bool runningApi; // @synthesize runningApi=_runningApi;
@property(retain, nonatomic) NSString *lastJSError; // @synthesize lastJSError=_lastJSError;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSArray *apiList; // @synthesize apiList=_apiList;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
@property(nonatomic) __weak WAJSCoreService *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *libWorkerType; // @synthesize libWorkerType=_libWorkerType;
- (id)getFileData:(id)arg1;
- (unsigned long long)getJSFootprintMemoryInBytes;
- (void)injectTimerBridge;
- (void)injectNativeGlobalIfNeeded;
- (void)onTimer:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (void)setupTimerBlock:(id)arg1;
- (void)workThread_reportPubLibCoverageIfNeeded;
- (void)internalStopWorker;
- (void)stopWorker;
- (void)executeBlockOnWorker:(CDUnknownBlockType)arg1;
- (void)executeBlockOnWorkerImpl:(CDUnknownBlockType)arg1;
- (void)executeOnWorker:(id)arg1;
- (void)sendJSInvokerMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)loadLibFile:(id)arg1 preloadType:(unsigned int)arg2;
- (unsigned int)getContextId:(id)arg1;
- (void)sendExceptionError:(id)arg1 toContext:(id)arg2;
- (void)setUpWorkerContext;
- (void)initJSContext:(id)arg1 isLibFile:(_Bool)arg2 isPreload:(_Bool)arg3;
- (void)sendErrorEvent:(id)arg1 stack:(id)arg2 contextId:(unsigned int)arg3;
- (void)runThread:(id)arg1;
- (id)init:(id)arg1 workerId:(unsigned int)arg2 service:(id)arg3 isLibFile:(_Bool)arg4 isPreload:(_Bool)arg5;
- (id)init:(id)arg1 workerId:(unsigned int)arg2 service:(id)arg3;

// Remaining properties
@property(retain, nonatomic) JSContext *context;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

