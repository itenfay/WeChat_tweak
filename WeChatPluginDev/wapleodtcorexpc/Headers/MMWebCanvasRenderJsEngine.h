//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebJsMediaServiceHandler, NSDictionary, NSMutableDictionary, NSString, WACanvasFileHelper;
@protocol MMWebCanvasRenderJsEngineDelegate;

@interface MMWebCanvasRenderJsEngine
{
    id <MMWebCanvasRenderJsEngineDelegate> _delegate;
    NSDictionary *_configInfo;
    NSMutableDictionary *_dicClientJSContexts;
    NSMutableDictionary *_eventQueue2Client;
    MMWebJsMediaServiceHandler *_videoDecoder;
    WACanvasFileHelper *_fileHelper;
}

+ (id)fileNameForResWithUrl:(id)arg1;
+ (id)pathOfCacheDir;
- (void).cxx_destruct;
@property(retain, nonatomic) WACanvasFileHelper *fileHelper; // @synthesize fileHelper=_fileHelper;
@property(retain, nonatomic) MMWebJsMediaServiceHandler *videoDecoder; // @synthesize videoDecoder=_videoDecoder;
@property(retain, nonatomic) NSMutableDictionary *eventQueue2Client; // @synthesize eventQueue2Client=_eventQueue2Client;
@property(retain, nonatomic) NSMutableDictionary *dicClientJSContexts; // @synthesize dicClientJSContexts=_dicClientJSContexts;
@property(retain, nonatomic) NSDictionary *configInfo; // @synthesize configInfo=_configInfo;
@property(nonatomic) __weak id <MMWebCanvasRenderJsEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dispatchEventToClient:(id)arg1 event:(id)arg2;
- (void)dispatchEventToAllClient:(id)arg1;
- (void)onTransferMessage:(id)arg1 targetOrigin:(id)arg2;
- (void)onCanvasViewEnterForeground:(id)arg1;
- (void)onCanvasViewEnterBackground:(id)arg1;
- (void)onFirstFrameRendered:(id)arg1;
- (void)onTouchEvent:(id)arg1 withEvent:(id)arg2 canvasView:(id)arg3;
- (id)trimmingWhitespaceWithStr:(id)arg1;
- (void)cancelAllFileTaskFromCanvasView:(id)arg1;
- (id)getFileDataWithUrl:(id)arg1 canvasView:(id)arg2;
- (id)getFileData:(id)arg1 canvasView:(id)arg2;
- (_Bool)isFileExist:(id)arg1 canvasView:(id)arg2;
- (void)onCallbackWithId:(id)arg1 params:(id)arg2;
- (void)onCanvasSetHeight:(double)arg1 forCanvasId:(id)arg2;
- (void)onSaveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (id)getLayoutDataForCanvasId:(id)arg1;
- (void)onScreenShot;
- (void)exitHotZone:(id)arg1;
- (void)enterHotZone:(id)arg1;
- (void)stop:(id)arg1;
- (void)stop;
- (void)internalDestroy:(id)arg1;
- (void)destory:(id)arg1 viewDelegate:(id)arg2;
- (void)resume:(id)arg1;
- (void)resume;
- (void)pause:(id)arg1;
- (void)pause;
- (void)repaint:(id)arg1;
- (void)detach:(id)arg1;
- (void)attach:(id)arg1;
- (_Bool)isMediaPlaying;
- (id)arrRenderClientCanvasId;
- (void)updateClientWithCanvasId:(id)arg1 withViewDelegate:(id)arg2;
- (id)createCanvasViewWithFrame:(struct CGRect)arg1 itemData:(id)arg2 viewDelegate:(id)arg3;
- (_Bool)isClientContextExist:(id)arg1;
- (void)initMainContext;
- (void)invalidAllTimers;
- (void)stopEngine;
- (void)setup;
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

