//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JITRuntime, JITRuntimeView, NSMutableDictionary, NSMutableSet, NSString;

@interface MBJITRuntime
{
    _Bool _isWKTerminated;
    JITRuntime *_jitRuntime;
    JITRuntimeView *_runtimeView;
    NSMutableDictionary *_dicHandlers;
    NSMutableDictionary *_extJsApiCallbackResults;
    NSMutableSet *_extJsApiAsyncCallbacks;
    NSString *_fsScheme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fsScheme; // @synthesize fsScheme=_fsScheme;
@property(retain, nonatomic) NSMutableSet *extJsApiAsyncCallbacks; // @synthesize extJsApiAsyncCallbacks=_extJsApiAsyncCallbacks;
@property(retain, nonatomic) NSMutableDictionary *extJsApiCallbackResults; // @synthesize extJsApiCallbackResults=_extJsApiCallbackResults;
@property _Bool isWKTerminated; // @synthesize isWKTerminated=_isWKTerminated;
@property(retain, nonatomic) NSMutableDictionary *dicHandlers; // @synthesize dicHandlers=_dicHandlers;
@property(nonatomic) __weak JITRuntimeView *runtimeView; // @synthesize runtimeView=_runtimeView;
@property(retain, nonatomic) JITRuntime *jitRuntime; // @synthesize jitRuntime=_jitRuntime;
- (struct CGRect)getFrame;
- (id)getFileData:(id)arg1;
- (void)runCodeInJsThreadSync:(CDUnknownBlockType)arg1;
- (void)runCodeInJsThread:(CDUnknownBlockType)arg1;
- (id)createJSObject:(id)arg1;
- (void)endWithHandler:(id)arg1 result:(id)arg2 callback:(id)arg3;
- (void)onXHRRequest:(id)arg1;
- (void)processInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3;
- (void)invokeJsApiCallback:(unsigned int)arg1 result:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onTerminate;
- (void)injectLibs;
- (void)onLoad:(id)arg1;
- (void)noitfyCanvasCreated:(unsigned int)arg1;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)onEventFinish:(id)arg1 param:(id)arg2;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (id)createObject:(id)arg1;
- (id)createObject;
- (void)resume;
- (void)pause;
- (void)destroyRuntime;
- (id)createView:(struct CGRect)arg1 config:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

