//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString, UINavigationController, WAFloatingVideoView, WAFloatingViewBaseWrapper, WAWebViewController;

@interface WAJSContextPlugin_FloatVideo
{
    _Bool _hasRecovered;
    _Bool _needRemoveFloatViewAfterTransitioning;
    _Bool _isFloatingVideoMinimizing;
    _Bool _needRemoveFloatViewAfterPop;
    WAWebViewController *_webviewController;
    WAFloatingViewBaseWrapper *_floatingViewWrapper;
    WAFloatingVideoView *_floatingVideoView;
    UINavigationController *_currentNavigationController;
    MemoryMappedKV *_mmkv;
    struct CGPoint _floatVideoRightBottomMargin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(nonatomic) struct CGPoint floatVideoRightBottomMargin; // @synthesize floatVideoRightBottomMargin=_floatVideoRightBottomMargin;
@property(nonatomic) _Bool needRemoveFloatViewAfterPop; // @synthesize needRemoveFloatViewAfterPop=_needRemoveFloatViewAfterPop;
@property(nonatomic) _Bool isFloatingVideoMinimizing; // @synthesize isFloatingVideoMinimizing=_isFloatingVideoMinimizing;
@property(nonatomic) _Bool needRemoveFloatViewAfterTransitioning; // @synthesize needRemoveFloatViewAfterTransitioning=_needRemoveFloatViewAfterTransitioning;
@property(nonatomic) _Bool hasRecovered; // @synthesize hasRecovered=_hasRecovered;
@property(nonatomic) __weak UINavigationController *currentNavigationController; // @synthesize currentNavigationController=_currentNavigationController;
@property(retain, nonatomic) WAFloatingVideoView *floatingVideoView; // @synthesize floatingVideoView=_floatingVideoView;
@property(retain, nonatomic) WAFloatingViewBaseWrapper *floatingViewWrapper; // @synthesize floatingViewWrapper=_floatingViewWrapper;
@property(retain, nonatomic) WAWebViewController *webviewController; // @synthesize webviewController=_webviewController;
- (void)dataReportWithEventId:(unsigned long long)arg1 eventNote:(unsigned long long)arg2;
- (void)reportFloatVideoWhenDisappeared:(id)arg1;
- (void)sendEventWithFloatingValue:(id)arg1 service:(id)arg2 videoKey:(id)arg3 webview:(id)arg4;
- (void)sendEventWithFloatingValue:(long long)arg1 webview:(id)arg2;
- (void)sendPlayerMaxEvent:(id)arg1;
- (void)sendPlayerMinEvent:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)dealloc;
- (void)onAudioVolumeEvaluation:(unsigned int)arg1 volume:(int)arg2;
- (void)onPlayNetStatus:(id)arg1 playerId:(unsigned int)arg2;
- (void)onPlayEvent:(int)arg1 evtMsg:(id)arg2 playerId:(unsigned int)arg3 param:(id)arg4;
- (void)onVideoPlay:(double)arg1 duration:(double)arg2;
- (void)videoPlayerView:(id)arg1 onVideoStateChange:(long long)arg2;
- (void)onVideoEvent:(id)arg1 param:(id)arg2;
- (_Bool)isWebViewInPageStack;
- (long long)getFloatingPlayerViewType;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onFloatingVideoViewClicked;
- (void)onFloatingVideoViewClosed;
- (void)onVideoPauseFromWebView:(id)arg1 playerId:(unsigned int)arg2;
- (void)onVideoStartPlayingFromWebView:(id)arg1 playerId:(unsigned int)arg2 autoPlay:(_Bool)arg3;
- (unsigned int)getFloatingVideoId;
- (id)getFloatingVideoView;
- (_Bool)isFloatingVideoExist;
- (void)resetPlayerParamAndRemoveView:(_Bool)arg1;
- (void)reset;
- (void)resetFloatingVideoParams:(_Bool)arg1;
- (void)setFloatingVideoParams;
- (_Bool)operateFloatVideoWithDic:(id)arg1 playerId:(unsigned int)arg2;
- (_Bool)closeFloatingVideoView;
- (void)closeForRelaunch;
- (_Bool)recoverFloatingVideoView;
- (_Bool)removeFloatingVideoView;
- (struct CGRect)getFloatingVideoViewFrame:(id)arg1 orientation:(long long)arg2;
- (void)updateFloatVideoMargins:(struct CGRect)arg1;
- (void)showWithContext:(id)arg1 type:(long long)arg2;
- (void)maximizedFloatingView:(id)arg1;
- (void)minimizedFloatingView:(id)arg1;
- (void)setupFloatingViewPosition:(id)arg1;
- (double)floatVideoAreaHeight:(id)arg1;
- (struct CGRect)correctFrame:(struct CGRect)arg1;
- (id)getPlayerViewSnapShotView:(struct CGRect)arg1 contentMode:(long long)arg2 addToVideoView:(_Bool)arg3;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)currentAppTask;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

