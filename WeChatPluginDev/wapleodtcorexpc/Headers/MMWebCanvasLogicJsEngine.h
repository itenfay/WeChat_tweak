//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, WACanvasFileHelper;
@protocol MMWebCanvasLogicJsEngineDelegate, OS_dispatch_queue;

@interface MMWebCanvasLogicJsEngine
{
    _Bool _finishedSetup;
    _Bool _hasStopped;
    id <MMWebCanvasLogicJsEngineDelegate> _delegate;
    NSDictionary *_configInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_preloadQueue;
    NSMutableArray *_arrEngineContext;
    NSMutableDictionary *_dicClientJSContexts;
    NSMutableDictionary *_eventQueue2Client;
    NSMutableSet *_setClientLaunchingQueue;
    NSMutableDictionary *_dicClientLaunchUpdateParams;
    WACanvasFileHelper *_fileHelper;
}

- (void).cxx_destruct;
@property _Bool hasStopped; // @synthesize hasStopped=_hasStopped;
@property(nonatomic) _Bool finishedSetup; // @synthesize finishedSetup=_finishedSetup;
@property(retain, nonatomic) WACanvasFileHelper *fileHelper; // @synthesize fileHelper=_fileHelper;
@property(retain, nonatomic) NSMutableDictionary *dicClientLaunchUpdateParams; // @synthesize dicClientLaunchUpdateParams=_dicClientLaunchUpdateParams;
@property(retain, nonatomic) NSMutableSet *setClientLaunchingQueue; // @synthesize setClientLaunchingQueue=_setClientLaunchingQueue;
@property(retain, nonatomic) NSMutableDictionary *eventQueue2Client; // @synthesize eventQueue2Client=_eventQueue2Client;
@property(retain, nonatomic) NSMutableDictionary *dicClientJSContexts; // @synthesize dicClientJSContexts=_dicClientJSContexts;
@property(retain, nonatomic) NSMutableArray *arrEngineContext; // @synthesize arrEngineContext=_arrEngineContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *preloadQueue; // @synthesize preloadQueue=_preloadQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDictionary *configInfo; // @synthesize configInfo=_configInfo;
@property(nonatomic) __weak id <MMWebCanvasLogicJsEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getFileData:(id)arg1;
- (id)getCurrentWebviewViewController;
- (void)onDeleteCanvasCardByCardId:(id)arg1 fromCanvasId:(id)arg2;
- (void)onPreloadImageWithUrl:(id)arg1 canvasId:(id)arg2;
- (void)onCallbackPopUpCanvasClose:(id)arg1 callbackId:(id)arg2;
- (void)onCallbackWithId:(id)arg1 eventInfo:(id)arg2;
- (void)onCallbackWithId:(id)arg1 params:(id)arg2;
- (void)onCanvasSetHeight:(double)arg1 forCanvasId:(id)arg2;
- (void)onSaveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (id)onGetLayoutDataForCanvasId:(id)arg1;
- (void)onTransferMessage:(id)arg1 targetOrigin:(id)arg2;
- (void)dispatchCallback:(id)arg1 params:(id)arg2;
- (void)dispatchEventToClient:(id)arg1 event:(id)arg2 eventInfo:(id)arg3;
- (void)dispatchEventToClient:(id)arg1 event:(id)arg2;
- (void)dispatchEvent:(id)arg1 eventInfo:(id)arg2;
- (void)checkAndDispatchEventToClientInEventQueue;
- (void)checkAndDispatchEventToClientInEventQueue:(id)arg1;
- (void)addClientEventToQueue:(id)arg1;
- (void)addClientEventToQueue:(id)arg1 canvasId:(id)arg2;
- (void)setupClient:(id)arg1 metaInfo:(id)arg2 bizType:(id)arg3;
- (void)exitPage;
- (void)enterPage;
- (void)onScroll:(id)arg1;
- (void)onScreenShot;
- (void)enterForeground;
- (void)enterBackground;
- (void)stop:(id)arg1;
- (void)stop;
- (void)resume:(id)arg1;
- (void)resume;
- (void)pause:(id)arg1;
- (void)pause;
- (void)reflowAll;
- (void)reflow:(id)arg1;
- (void)detach:(id)arg1;
- (void)attach:(id)arg1;
- (void)resetClientContextViewDelegateAndHandler:(id)arg1 fromViewDelegate:(id)arg2;
- (void)updateClientContextViewDelegate:(id)arg1 canvasId:(id)arg2 deleteHandler:(CDUnknownBlockType)arg3;
- (void)addClientContextWithParams:(id)arg1;
- (id)canvasClientContextWithId:(id)arg1;
- (void)initEngineContext;
- (void)initMainContext;
- (void)delayReleaseJsEngine;
- (void)stopAllJsContextTimers;
- (void)stopEngine;
- (_Bool)hasSetup;
- (void)setup:(CDUnknownBlockType)arg1;
- (void)internalInit;
- (void)dealloc;
- (id)initWithBasePkgInfo:(id)arg1 bizPkgInfo:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

