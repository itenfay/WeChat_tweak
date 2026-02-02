//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSContext, JSVirtualMachine, MBJSCJSBridgeImpl, MagicBrushCore, NSMutableDictionary, NSMutableSet, NSString, NSThread, WAOpenGLView, WXAudioNative, WasmAdaptor, WeMediaApi;

@interface MBJSCRuntime
{
    void *bindingBizMap;
    void *onBizConnectedFunc;
    void *onBizDisconnectedFunc;
    void *bindingPsMap;
    _Bool _isBackground;
    _Bool _isAudioInterrupt;
    int _subContextId;
    unsigned int _bufferIDSequence;
    WAOpenGLView *_runtimeView;
    MagicBrushCore *_mbCore;
    MBJSCJSBridgeImpl *_bridge;
    JSContext *_mainContext;
    void *_nativeGlobal;
    void *_mb;
    void *_weixinJSContext;
    void *_console;
    WasmAdaptor *_wasm;
    WXAudioNative *_wxAudioNative;
    WeMediaApi *_wemedia_api;
    NSThread *_thread;
    JSVirtualMachine *_jsvm;
    NSMutableDictionary *_subContexts;
    NSMutableSet *_playingAudioEngineSet;
    NSMutableDictionary *_mbViewSet;
    NSMutableDictionary *_extViewDict;
    NSMutableDictionary *_mapArrayBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int bufferIDSequence; // @synthesize bufferIDSequence=_bufferIDSequence;
@property(retain, nonatomic) NSMutableDictionary *mapArrayBuffer; // @synthesize mapArrayBuffer=_mapArrayBuffer;
@property(retain, nonatomic) NSMutableDictionary *extViewDict; // @synthesize extViewDict=_extViewDict;
@property(retain, nonatomic) NSMutableDictionary *mbViewSet; // @synthesize mbViewSet=_mbViewSet;
@property(retain, nonatomic) NSMutableSet *playingAudioEngineSet; // @synthesize playingAudioEngineSet=_playingAudioEngineSet;
@property(retain, nonatomic) NSMutableDictionary *subContexts; // @synthesize subContexts=_subContexts;
@property(nonatomic) int subContextId; // @synthesize subContextId=_subContextId;
@property(retain, nonatomic) JSVirtualMachine *jsvm; // @synthesize jsvm=_jsvm;
@property(nonatomic) _Bool isAudioInterrupt; // @synthesize isAudioInterrupt=_isAudioInterrupt;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) WeMediaApi *wemedia_api; // @synthesize wemedia_api=_wemedia_api;
@property(retain, nonatomic) WXAudioNative *wxAudioNative; // @synthesize wxAudioNative=_wxAudioNative;
@property(retain, nonatomic) WasmAdaptor *wasm; // @synthesize wasm=_wasm;
@property(nonatomic) void *console; // @synthesize console=_console;
@property(nonatomic) void *weixinJSContext; // @synthesize weixinJSContext=_weixinJSContext;
@property(nonatomic) void *mb; // @synthesize mb=_mb;
@property(nonatomic) void *nativeGlobal; // @synthesize nativeGlobal=_nativeGlobal;
@property(readonly, nonatomic) JSContext *mainContext; // @synthesize mainContext=_mainContext;
@property(retain, nonatomic) MBJSCJSBridgeImpl *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) MagicBrushCore *mbCore; // @synthesize mbCore=_mbCore;
@property(retain, nonatomic) WAOpenGLView *runtimeView; // @synthesize runtimeView=_runtimeView;
- (void)stopGpuProfile;
- (void)startGpuProfile;
- (void)activeAudioSession:(int)arg1;
- (id)getIdentifier;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2;
- (void)sendAudioInterruptionEndEvent;
- (void)sendAudioInterruptionBeginEvent;
- (id)mixListForAudioModule:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onWXAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (void)canPlayNowAndAutoActive:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)setMute:(_Bool)arg1;
- (void)resumeAllPlayer;
- (void)pauseAllPlayer;
- (id)getAudioFilePath:(id)arg1;
- (void)logDebug:(id)arg1 target:(long long)arg2;
- (void)logWarning:(id)arg1 target:(long long)arg2;
- (void)logInfo:(id)arg1 target:(long long)arg2;
- (void)logError:(id)arg1 target:(long long)arg2;
- (void)weMediaUnregisterExternaImage:(int)arg1;
- (_Bool)weMediaRegisterExternaImage:(const char *)arg1 dataLen:(unsigned long long)arg2 imageId:(int)arg3 width:(int)arg4 height:(int)arg5;
- (id)weMediaGetAbsolutePath:(id)arg1;
- (void)weMediaTryStopAudioDevice:(unsigned long long)arg1;
- (_Bool)weMediaTryStartAudioDevice:(unsigned long long)arg1;
- (void)weMediaReportEventWithEvent:(id)arg1 reportInfo:(id)arg2 params:(id)arg3;
- (_Bool)weMediaGetExternalConfig:(id)arg1 defaultVal:(_Bool)arg2;
- (void)weMediaLOG:(int)arg1 log:(const char *)arg2;
- (void)onScreenCapture:(unsigned int)arg1 data:(void *)arg2 size:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bytesPerRow:(unsigned long long)arg7 format:(int)arg8;
- (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
- (void)onScreenCapture:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer *)arg4;
- (void)setExternalViewStub:(id)arg1 forCanvasId:(unsigned int)arg2;
- (void)onScreenCanvasFrameChanged:(unsigned int)arg1 view:(id)arg2 frame:(struct CGRect)arg3;
- (void)onScreenCanvasDestroyed:(unsigned int)arg1 view:(id)arg2;
- (void)onScreenCanvasCreated:(unsigned int)arg1 view:(id)arg2;
- (struct CGRect)getFrame;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)handleJSException:(id)arg1 exception:(id)arg2;
- (void)resume;
- (void)pause;
- (void)onJsException:(id)arg1 stack:(id)arg2;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (id)onLoadDataSync:(id)arg1;
- (void)onLoadData:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)onFrameAvailable:(struct __CVBuffer *)arg1 inRT:(id)arg2;
- (void)createPixelBufferInCanvas:(int)arg1;
- (id)createViewInCanvas:(int)arg1;
- (void)onScreenCanvasFirstFrameRendered:(int)arg1;
- (void)onScreenCanvasSetTouchableRects:(int)arg1 left:(const float *)arg2 top:(const float *)arg3 width:(const float *)arg4 height:(const float *)arg5 count:(unsigned int)arg6;
- (void)onScreenCanvasRemove:(int)arg1;
- (void)onScreenCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onScreenCanvasCreated:(int)arg1;
- (void)logGLError:(int)arg1 name:(id)arg2;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)systemLog:(id)arg1;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (id)getFileData:(id)arg1;
- (_Bool)isFileExist:(id)arg1;
- (void)injectLibs;
- (void)notifyOnLoad;
- (void)injectPublicResources;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)onEventFinish:(id)arg1 param:(id)arg2;
- (void)realRunCodeInJsThread:(CDUnknownBlockType)arg1;
- (void)runCodeInJsThreadSync:(CDUnknownBlockType)arg1;
- (void)runCodeInJsThread:(CDUnknownBlockType)arg1;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 context:(id)arg4 inSubThread:(_Bool)arg5;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (id)createObject:(id)arg1;
- (id)createObject;
- (void)setupBinding;
- (void)onFirstFrameRendered:(unsigned int)arg1;
- (void)setupEnv:(id)arg1;
- (void)runThread:(id)arg1;
- (id)createView:(struct CGRect)arg1 config:(id)arg2;
- (void)stopThread;
- (void)destroyRuntime;
- (void)dealloc;
- (id)init;
- (id)genBufferID;
- (void)removeNativeArrayBuffer:(int)arg1;
- (id)getArrayBuffer:(unsigned int)arg1;
- (id)insertNativeArrayBufferWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (id)insertNativeArrayBuffer:(int)arg1 bufferId:(int *)arg2;
- (void)injectWeixinArrayBuffer;
- (id)extractNameFromWeixinJSSubContext:(id)arg1;
- (void)evaluateScript:(id)arg1 inWeixinJSSubContext:(int)arg2 sourceURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)destroyWeixinJSSubContext:(int)arg1;
- (id)getWeixinJSSubContext:(int)arg1;
- (int)createWeixinJSSubContext:(id)arg1 currentThis:(struct OpaqueJSValue *)arg2;
- (int)createWeixinJSSubContext:(id)arg1;
- (void)setUpWeixinJSContext;
- (void)evaluateScript:(id)arg1 inSubContext:(int)arg2 sourceURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)destroySubContext:(int)arg1;
- (id)getSubContext:(int)arg1;
- (int)createSubContext:(id)arg1;
- (void)initVConsole;
- (void)disconnectBiz:(id)arg1;
- (void)connectBiz:(id)arg1;
- (void)onPublicServiceCreated;
- (void)onPublicServiceListenToBiz:(id)arg1;
- (void)receiveMessageFromPublicService:(id)arg1 message:(id)arg2;
- (void)onBizListenToPublicService:(id)arg1;
- (void)receiveMessageFromBiz:(id)arg1 message:(id)arg2;
- (void)postMessage:(id)arg1 toBiz:(id)arg2;
- (void)postMessage:(id)arg1 toPublicService:(id)arg2;
- (void)unbindPublicService:(id)arg1;
- (_Bool)bindPublicService:(id)arg1 serviceAlias:(id)arg2 bindingObj:(void *)arg3;
- (_Bool)injectPlugin:(id)arg1;
- (void)initPluginModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

