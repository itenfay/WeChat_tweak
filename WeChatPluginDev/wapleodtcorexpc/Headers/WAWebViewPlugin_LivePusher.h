//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;
@protocol TXLivePushJSAdapterProtocol;

@interface WAWebViewPlugin_LivePusher
{
    int _curArrayBufferId;
    int _lastArrayBufferId;
    _Bool _isInBackground;
    _Bool _hasPreview;
    _Bool _isPublishingWhenEnterBackground;
    unsigned int _pusherId;
    unsigned int _currentCanvasId;
    id <TXLivePushJSAdapterProtocol> _pusher;
    UIView *_preview;
    CDUnknownBlockType _operateCallback;
    struct __CVBuffer *_lastOutputFrameBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int currentCanvasId; // @synthesize currentCanvasId=_currentCanvasId;
@property(nonatomic) struct __CVBuffer *lastOutputFrameBuffer; // @synthesize lastOutputFrameBuffer=_lastOutputFrameBuffer;
@property(nonatomic) _Bool isPublishingWhenEnterBackground; // @synthesize isPublishingWhenEnterBackground=_isPublishingWhenEnterBackground;
@property(nonatomic) _Bool hasPreview; // @synthesize hasPreview=_hasPreview;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(copy, nonatomic) CDUnknownBlockType operateCallback; // @synthesize operateCallback=_operateCallback;
@property(nonatomic) unsigned int pusherId; // @synthesize pusherId=_pusherId;
@property(retain, nonatomic) UIView *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) id <TXLivePushJSAdapterProtocol> pusher; // @synthesize pusher=_pusher;
- (void)updateCapsuleView:(_Bool)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onFrameAvailable:(struct __CVBuffer *)arg1 inRT:(id)arg2;
- (void)createRenderTargetIfNeededWithCanvasId:(unsigned int)arg1;
- (void)removeLastArrayBufferIfNeeded:(int)arg1;
- (void)setupWebGLCanvas;
- (void)sendCustomVideoFrame:(id)arg1;
- (void)onLivePusherCameraFrame:(unsigned int)arg1 deviceOrientationRotation:(long long)arg2;
- (void)onLivePusherCameraFrameBufferUpdate:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (struct __CVBuffer *)getNextOutputPixelBuffer;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 homeRotation:(long long)arg3;
- (void)onEnableCustomVideoCapture:(_Bool)arg1 width:(double)arg2 height:(double)arg3;
- (void)sendEvent:(id)arg1 param:(id)arg2 sendWebview:(_Bool)arg3;
- (void)onPusherEvent:(id)arg1;
- (void)onLivePusher:(unsigned int)arg1 audioVolumeEvaluation:(long long)arg2;
- (void)onLivePusherBGMComplete:(unsigned int)arg1 errCode:(long long)arg2;
- (void)onLivePusherBGMProgress:(unsigned int)arg1 progress:(long long)arg2 duration:(long long)arg3;
- (void)onLivePusherBGMStart:(unsigned int)arg1;
- (void)onLivePusherCallBack:(_Bool)arg1 errNo:(long long)arg2 errMsg:(id)arg3;
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onPusherDidTakeSnapshot:(id)arg1 pusherId:(unsigned int)arg2;
- (void)onPushNetStatus:(id)arg1 pusherId:(unsigned int)arg2;
- (void)onLivePusherError:(unsigned int)arg1 errCode:(long long)arg2 errMsg:(id)arg3 data:(id)arg4;
- (void)onPushEvent:(int)arg1 evtMsg:(id)arg2 pusherId:(unsigned int)arg3 param:(id)arg4;
- (id)getCurrentWebView;
- (void)onCameraStateChanged:(_Bool)arg1;
- (void)onRecordStateChanged:(_Bool)arg1;
- (void)stopLivePusher;
- (id)getLivePusher;
- (_Bool)removeLivePusher:(unsigned int)arg1;
- (void)operateLivePusher:(unsigned int)arg1 type:(id)arg2 param:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateLivePusher:(unsigned int)arg1 configs:(id)arg2;
- (void)updateLivePusher:(unsigned int)arg1 pos:(struct CGRect)arg2 configs:(id)arg3;
- (unsigned int)insertLivePusher:(unsigned int)arg1 parentId:(unsigned int)arg2 pos:(struct CGRect)arg3 configs:(id)arg4;
- (void)saveAndForceStopPreviewSetting;
- (void)restorePreviewSetting;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)onWeAppEnterForeground;
- (void)onWeAppDidEnterBackground;
- (id)minimizationItemInfo;
- (void)onWeAppWillEnterBackground;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

