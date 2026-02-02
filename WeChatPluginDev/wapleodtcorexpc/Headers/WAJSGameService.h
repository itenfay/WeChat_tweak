//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, NSThread, WAContact, WAJITRuntime;
@protocol IWXEngineAPI, OS_dispatch_queue;

@interface WAJSGameService
{
    NSObject<OS_dispatch_queue> *_jitProxyQueue;
    NSMutableDictionary *_jitProxyPendingTask;
    _Bool _useXHRTransferJSEvent;
    _Bool _workingThreadPaused;
    NSMutableArray *_blockedResults;
    NSMutableArray *_blockedEvents;
    unsigned int _instContextId;
    NSObject<IWXEngineAPI> *_gameEngine;
    unsigned long long _closeTimeStampInMs;
    WAContact *_contact;
    _Bool _jitMode;
    unsigned long long _jitDebugSwitch;
    WAJITRuntime *_jitRuntime;
    unsigned long long _jitBeginTimeStampInMs;
    long long _wkFeatureVersion;
    NSThread *_thread;
}

+ (unsigned long long)getFeatBit:(_Bool)arg1 enableNativeRender:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) long long wkFeatureVersion; // @synthesize wkFeatureVersion=_wkFeatureVersion;
@property(nonatomic) unsigned long long jitBeginTimeStampInMs; // @synthesize jitBeginTimeStampInMs=_jitBeginTimeStampInMs;
@property(retain, nonatomic) WAJITRuntime *jitRuntime; // @synthesize jitRuntime=_jitRuntime;
@property(nonatomic) unsigned long long jitDebugSwitch; // @synthesize jitDebugSwitch=_jitDebugSwitch;
@property(nonatomic) _Bool jitMode; // @synthesize jitMode=_jitMode;
- (void)weMediaUnregisterExternaImage:(int)arg1;
- (_Bool)weMediaRegisterExternaImage:(const char *)arg1 dataLen:(unsigned long long)arg2 imageId:(int)arg3 width:(int)arg4 height:(int)arg5;
- (void)onSubContextCreate:(id)arg1 contextId:(unsigned int)arg2 newInst:(_Bool)arg3;
- (void)resumeWorkingThreadToDie:(_Bool)arg1;
- (void)suspendWorkingThread;
- (void)initWASM:(id)arg1 mb:(id)arg2;
- (id)getPreloadAppLaunchConfig;
- (id)getAppLaunchConfigJSVarInjectToolForWebView:(_Bool)arg1;
- (void)tryInjectJavaScript;
- (id)getMBCore;
- (struct OpaqueJSValue *)getNativeGlobal;
- (void)onAfterGameBridgeScriptEvaluated;
- (id)getJSContext;
- (struct OpaqueJSContext *)getContext;
- (id)getAppId;
- (void)invokeJSCCallbackHandler:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4 workerId:(unsigned int)arg5;
- (void)invokeCallbackHandler:(id)arg1;
- (void)sendJSEventToWorker:(id)arg1 param:(id)arg2 workerId:(unsigned int)arg3;
- (void)innerSendJSEventToService:(id)arg1;
- (void)sendInnerAppBrandEvent:(long long)arg1 serviceParam:(id)arg2 pluginParam:(id)arg3 webviewID:(unsigned long long)arg4;
- (void)sendErrorEvent:(id)arg1;
- (void)sendJsInvoker:(id)arg1;
- (void)onWeAppEnterForeground:(id)arg1 isFromSystemAwake:(_Bool)arg2;
- (void)onWeAppEnterBackground:(long long)arg1;
- (void)sendWorkerMessage:(unsigned int)arg1 msg:(id)arg2;
- (void)printConsoleLog:(id)arg1 level:(long long)arg2;
- (void)printConsoleLog:(id)arg1;
- (void)asyncRunOperationBlockOnWorkThread:(CDUnknownBlockType)arg1;
- (void)getScreenWidth:(double *)arg1 screenHeight:(double *)arg2;
- (_Bool)isGameClass;
- (void)stopAppBrand:(_Bool)arg1;
- (void)stopAppBrandAndThread;
- (void)workThread_reportPubLibCoverageIfNeededWithAppid:(id)arg1 publibStringVersion:(id)arg2 publibStringUpdateTime:(id)arg3;
- (void)initJSCore:(id)arg1;
- (_Bool)shouldEnableJITRuntimeInspectable;
- (void)prepareJITRuntimeInspectable;
- (void)initJITRuntime:(id)arg1;
- (void)commonInit:(id)arg1;
- (void)checkJITModeUpdateForPreload:(_Bool)arg1;
- (void)firePreloadedGameView:(id)arg1;
- (void)firePreloadedService:(id)arg1;
- (void)injectGameScriptForPreload:(id)arg1;
- (void)injectGameScript:(id)arg1;
- (void)startServiceThread;
- (void)dealloc;
- (id)initForPreloadAppTask:(id)arg1 jitMode:(_Bool)arg2;
- (id)initWithPreloadedJITRuntimeFromWAJSGameService:(id)arg1;
- (id)init;
- (void)report21822:(unsigned long long)arg1 end:(unsigned long long)arg2 injectCost:(unsigned long long)arg3 nativeRenderer:(_Bool)arg4 injectSuccess:(_Bool)arg5;
- (void)report15815:(unsigned long long)arg1 end:(unsigned long long)arg2 fileName:(id)arg3 size:(unsigned long long)arg4;
- (void)processInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3;
- (id)jitProxyPendingTask;
- (id)jitProxyQueue;
- (id)getBrotiData:(id)arg1;
- (void)onTerminate;
- (void)onLoad:(id)arg1;
- (_Bool)isVaildXHRFilePath:(id)arg1;
- (void)onEvaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onXHRRequest:(id)arg1;
- (void)loadImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onPostMessage:(id)arg1 body:(id)arg2;
- (void)onAlertMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)onPrompt:(id)arg1 defaultText:(id)arg2;
- (void)invokeJITCallbackHandler:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4 workerId:(unsigned int)arg5;
- (id)makeJITWxConfig:(_Bool)arg1;
- (id)makeWAGameSubContextFrameHTML;
- (void)loadWAGameFrameHTML:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

