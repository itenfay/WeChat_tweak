//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, MMWebCanvasLogicJsEngine, MMWebCanvasPkgInfo, MMWebCanvasRenderJsEngine, NSMutableDictionary, NSString, WCEliminatedSlotMMKV;
@protocol WXCustomWebViewControllerProtocol;

@interface MMWebCanvasJsEngineMgr
{
    _Bool _isSettingUpLogicEngine;
    _Bool _reflowWhenEnterForeground;
    MMWebCanvasLogicJsEngine *_logicEngine;
    MMWebCanvasRenderJsEngine *_renderEngine;
    MMWebCanvasPkgInfo *_canvasPkgInfo;
    MMUIViewController<WXCustomWebViewControllerProtocol> *_contextViewController;
    NSMutableDictionary *_logicClientAddQueueMap;
    WCEliminatedSlotMMKV *_layoutDataSlotKv;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool reflowWhenEnterForeground; // @synthesize reflowWhenEnterForeground=_reflowWhenEnterForeground;
@property(nonatomic) _Bool isSettingUpLogicEngine; // @synthesize isSettingUpLogicEngine=_isSettingUpLogicEngine;
@property(retain, nonatomic) WCEliminatedSlotMMKV *layoutDataSlotKv; // @synthesize layoutDataSlotKv=_layoutDataSlotKv;
@property(retain, nonatomic) NSMutableDictionary *logicClientAddQueueMap; // @synthesize logicClientAddQueueMap=_logicClientAddQueueMap;
@property(nonatomic) __weak MMUIViewController<WXCustomWebViewControllerProtocol> *contextViewController; // @synthesize contextViewController=_contextViewController;
@property(retain, nonatomic) MMWebCanvasPkgInfo *canvasPkgInfo; // @synthesize canvasPkgInfo=_canvasPkgInfo;
@property(retain, nonatomic) MMWebCanvasRenderJsEngine *renderEngine; // @synthesize renderEngine=_renderEngine;
@property(retain, nonatomic) MMWebCanvasLogicJsEngine *logicEngine; // @synthesize logicEngine=_logicEngine;
- (void)mm_onColorAppearanceDidChange;
- (void)onFirstFrameRendered:(id)arg1;
- (void)onTouchEvent:(id)arg1 withEvent:(id)arg2 canvasView:(id)arg3;
- (void)onRenderJsEngineTransferMessage:(id)arg1 targetOrigin:(id)arg2;
- (void)onLogicJsEngineTransferMessage:(id)arg1 targetOrigin:(id)arg2;
- (void)didTakeScreenshot;
- (id)bizPkgInfo;
- (id)basePkgInfo;
- (void)enterForeground;
- (void)enterBackground;
- (void)exitPage;
- (void)enterPage;
- (void)reflowAllClient;
- (void)reflow:(id)arg1;
- (void)onScroll:(id)arg1;
- (void)exitHotZone:(id)arg1;
- (void)enterHotZone:(id)arg1;
- (void)destory:(id)arg1 viewDelegate:(id)arg2;
- (void)repaint:(id)arg1;
- (void)stop:(id)arg1;
- (void)stop;
- (void)resume:(id)arg1;
- (void)resume;
- (void)pause:(id)arg1;
- (void)pause;
- (void)detach:(id)arg1;
- (void)attatch:(id)arg1;
- (void)clearAllLayoutData;
- (void)saveCanvasHeight:(double)arg1 forCanvasId:(id)arg2;
- (void)saveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (id)getLayoutDataForCanvasId:(id)arg1;
- (double)getCanvasLayoutHeightWithId:(id)arg1;
- (void)resetContextViewController:(id)arg1;
- (id)getContextViewController;
- (_Bool)isMediaPlaying;
- (void)updateCanvasRenderClientWithCanvasId:(id)arg1 withViewDelegate:(id)arg2;
- (id)createCanvasViewWithItem:(id)arg1 frame:(struct CGRect)arg2 viewDelegate:(id)arg3;
- (void)checkGetLogicClientWaitingQueue;
- (void)resetClientContextViewDelegateAndCallback:(id)arg1 fromViewDelegate:(id)arg2;
- (void)addOrUpdateClientContext:(id)arg1 viewDelegate:(id)arg2 prepareCompletion:(CDUnknownBlockType)arg3 deleteHandler:(CDUnknownBlockType)arg4 fromPreload:(_Bool)arg5;
- (void)addOrUpdateClientContext:(id)arg1 viewDelegate:(id)arg2 deleteHandler:(CDUnknownBlockType)arg3 fromPreload:(_Bool)arg4;
- (void)addOrUpdateClientContext:(id)arg1 viewDelegate:(id)arg2 deleteHandler:(CDUnknownBlockType)arg3;
- (_Bool)isClientContextInLaunchWaitingQueue:(id)arg1;
- (id)getClientContextPerfInfo:(id)arg1;
- (_Bool)isClientContextActive:(id)arg1;
- (void)releaseAllEngine;
- (void)setupRenderJsEngine;
- (void)setupLogicJsEngine:(CDUnknownBlockType)arg1;
- (void)setupEngine;
- (void)dealloc;
- (void)observeKeyPaths:(id)arg1 selector:(SEL)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

