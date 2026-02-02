//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JITBindingState, JITRuntimeJsApiHandler, JITRuntimeNativeBufferMgr, JITRuntimeView, MagicBrushCore, NSMutableArray, NSMutableDictionary, NSString, NSThread, NSURLCache;
@protocol JITRuntimeBindingDelegate, JITRuntimeDataTransferDelegate, JITRuntimeDelegate, JITRuntimeJsApiHandlerDelegate, JITRuntimeNativeRenderDelegate;

@interface JITRuntime : NSObject
{
    _Bool _enableThread;
    _Bool _enableNativeRender;
    _Bool _enableNativeRenderInjectStandaloneGameJITJS;
    _Bool _enableJITRuntimeViewSizeZero;
    _Bool _enableSuspendAllMediaWhenBackground;
    _Bool _jitLoaded;
    _Bool _hasSetEnabledThread;
    _Bool _jsThreadStopped;
    _Bool _enableDebug;
    int _mainCanvasType;
    JITRuntimeView *_runtimeView;
    MagicBrushCore *_nativeRender;
    JITRuntimeJsApiHandler *_jsApiHandler;
    JITRuntimeNativeBufferMgr *_nativeBufferMgr;
    NSString *_baseUrl;
    id <JITRuntimeDelegate> _delegate;
    id <JITRuntimeDataTransferDelegate> _dataTransferDelegate;
    id <JITRuntimeJsApiHandlerDelegate> _jsApiDelegate;
    id <JITRuntimeNativeRenderDelegate> _nativeRenderDelegate;
    id <JITRuntimeBindingDelegate> _bindingDelegate;
    unsigned long long _nativeRenderFrameCaptureMode;
    long long _enableParallelShaderCompile;
    JITBindingState *_bindingState;
    NSURLCache *_urlCache;
    NSThread *_jsThread;
    NSMutableDictionary *_nativeRenderCanvasMap;
    NSMutableArray *_prevInvokers;
    NSMutableDictionary *_jsapiWorkerMap;
    NSString *_WX_XHR_JSAPI_COMMAND_BUFFER;
    NSString *_WX_GET_BUFFER;
    NSString *_WX_SUBCONTEXT_FRAME;
}

+ (id)getBundleData:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *WX_SUBCONTEXT_FRAME; // @synthesize WX_SUBCONTEXT_FRAME=_WX_SUBCONTEXT_FRAME;
@property(copy, nonatomic) NSString *WX_GET_BUFFER; // @synthesize WX_GET_BUFFER=_WX_GET_BUFFER;
@property(copy, nonatomic) NSString *WX_XHR_JSAPI_COMMAND_BUFFER; // @synthesize WX_XHR_JSAPI_COMMAND_BUFFER=_WX_XHR_JSAPI_COMMAND_BUFFER;
@property(retain, nonatomic) NSMutableDictionary *jsapiWorkerMap; // @synthesize jsapiWorkerMap=_jsapiWorkerMap;
@property(nonatomic) _Bool enableDebug; // @synthesize enableDebug=_enableDebug;
@property(retain, nonatomic) NSMutableArray *prevInvokers; // @synthesize prevInvokers=_prevInvokers;
@property(retain, nonatomic) NSMutableDictionary *nativeRenderCanvasMap; // @synthesize nativeRenderCanvasMap=_nativeRenderCanvasMap;
@property _Bool jsThreadStopped; // @synthesize jsThreadStopped=_jsThreadStopped;
@property(retain) NSThread *jsThread; // @synthesize jsThread=_jsThread;
@property(nonatomic) _Bool hasSetEnabledThread; // @synthesize hasSetEnabledThread=_hasSetEnabledThread;
@property(retain, nonatomic) NSURLCache *urlCache; // @synthesize urlCache=_urlCache;
@property(retain, nonatomic) JITBindingState *bindingState; // @synthesize bindingState=_bindingState;
@property(nonatomic) int mainCanvasType; // @synthesize mainCanvasType=_mainCanvasType;
@property(nonatomic) _Bool jitLoaded; // @synthesize jitLoaded=_jitLoaded;
@property(nonatomic) long long enableParallelShaderCompile; // @synthesize enableParallelShaderCompile=_enableParallelShaderCompile;
@property(nonatomic) _Bool enableSuspendAllMediaWhenBackground; // @synthesize enableSuspendAllMediaWhenBackground=_enableSuspendAllMediaWhenBackground;
@property(nonatomic) _Bool enableJITRuntimeViewSizeZero; // @synthesize enableJITRuntimeViewSizeZero=_enableJITRuntimeViewSizeZero;
@property(nonatomic) _Bool enableNativeRenderInjectStandaloneGameJITJS; // @synthesize enableNativeRenderInjectStandaloneGameJITJS=_enableNativeRenderInjectStandaloneGameJITJS;
@property(nonatomic) _Bool enableNativeRender; // @synthesize enableNativeRender=_enableNativeRender;
@property(nonatomic) unsigned long long nativeRenderFrameCaptureMode; // @synthesize nativeRenderFrameCaptureMode=_nativeRenderFrameCaptureMode;
@property(nonatomic) _Bool enableThread; // @synthesize enableThread=_enableThread;
@property(nonatomic) __weak id <JITRuntimeBindingDelegate> bindingDelegate; // @synthesize bindingDelegate=_bindingDelegate;
@property(nonatomic) __weak id <JITRuntimeNativeRenderDelegate> nativeRenderDelegate; // @synthesize nativeRenderDelegate=_nativeRenderDelegate;
@property(nonatomic) __weak id <JITRuntimeJsApiHandlerDelegate> jsApiDelegate; // @synthesize jsApiDelegate=_jsApiDelegate;
@property(nonatomic) __weak id <JITRuntimeDataTransferDelegate> dataTransferDelegate; // @synthesize dataTransferDelegate=_dataTransferDelegate;
@property(nonatomic) __weak id <JITRuntimeDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain, nonatomic) JITRuntimeNativeBufferMgr *nativeBufferMgr; // @synthesize nativeBufferMgr=_nativeBufferMgr;
@property(retain, nonatomic) JITRuntimeJsApiHandler *jsApiHandler; // @synthesize jsApiHandler=_jsApiHandler;
@property(retain, nonatomic) MagicBrushCore *nativeRender; // @synthesize nativeRender=_nativeRender;
@property(retain, nonatomic) JITRuntimeView *runtimeView; // @synthesize runtimeView=_runtimeView;
- (void)clearImageCache;
- (void)downloadImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)getJITLiteMode;
- (void)jitDumpGCHeap;
- (void)jitSimulateLowMemory;
- (void)jitSimulateFullGCWithDeleteAllCode;
- (void)jitSimulateFullGC;
- (void)jitTriggerGC;
- (void)fixLongPressLoupe;
- (void)realOnXHRRequest:(id)arg1;
- (void)onXHRRequest:(id)arg1;
- (void)onAlertMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onPrompt:(id)arg1 defaultText:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)onPostMessage:(id)arg1 body:(id)arg2;
- (void)onTerminate;
- (void)onLoad:(id)arg1;
- (void)notifyBackgroundState:(_Bool)arg1;
- (void)evaluateInvoker:(id)arg1 pendingIfNotLoaded:(_Bool)arg2;
- (void)evaluate:(id)arg1 pendingIfNotLoaded:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerSyncJsApi:(id)arg1;
- (void)evaluate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadCommonHTML:(_Bool)arg1;
- (id)loadData:(id)arg1 MIMEType:(id)arg2;
- (id)loadHTMLString:(id)arg1;
- (id)createRuntimeViewWithFrame:(struct CGRect)arg1 config:(id)arg2;
- (void)onRuntimeDestroy;
- (void)destroyRuntime;
- (void)dealloc;
- (id)initWithBaseUrl:(id)arg1;
- (void)onJsEventSend:(id)arg1 data:(id)arg2;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (void)onScreenCanvasRemove:(int)arg1;
- (void)onScreenCanvasGotContext:(int)arg1 contextType:(int)arg2;
- (void)onScreenCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onScreenCanvasCreated:(int)arg1;
- (void)destroyNativeRender;
- (void)startNativeRenderIfNeeded;
- (void)runThread:(id)arg1;
- (_Bool)runCodeInJsThreadImpl:(CDUnknownBlockType)arg1 sync:(_Bool)arg2;
- (void)realRunCodeInJsThread:(CDUnknownBlockType)arg1;
- (_Bool)runCodeInJsThreadSync:(CDUnknownBlockType)arg1;
- (_Bool)runCodeInJsThread:(CDUnknownBlockType)arg1;
- (void)stopThread;
- (void)startThreadIfNeeded;
- (void)runCodeInWorker:(int)arg1 runCodeBlock:(CDUnknownBlockType)arg2;
- (void)destroyWorker:(id)arg1;
- (void)createWorker:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

