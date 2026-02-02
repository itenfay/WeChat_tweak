//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVMutableComposition, AVMutableVideoComposition, AVPictureInPictureController, AVPlayer, AVPlayerItem, AVPlayerLayer, MMLiveCustomRenderPIPHandleLogic, MMLiveCustomRenderPIPStartParam, MMLiveCustomRenderPIPView, MMLiveCustomRenderView, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMLiveCustomRenderPIPManager
{
    _Bool _startPIPAutomaticallyFromInlineAbility;
    _Bool _isOpenPIP;
    _Bool _isPIPStart;
    _Bool _isPIPActive;
    _Bool _isClosedCompletely;
    _Bool _isManualStartPictureInPicture;
    _Bool _hasStartedPIPInBackground;
    _Bool _isHandlingTempleteVideo;
    _Bool _isObserverPIPPossible;
    _Bool _isInBackground;
    _Bool _needRestartPIPTrackingForOuterPause;
    _Bool _needAutoStopPIP;
    unsigned long long _currentState;
    MMLiveCustomRenderPIPHandleLogic *_handleLogic;
    unsigned long long _lastState;
    AVPictureInPictureController *_pip;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    AVMutableComposition *_mixComposition;
    AVPlayerItem *_playerItem;
    AVMutableVideoComposition *_videoComposition;
    MMLiveCustomRenderPIPView *_renderView;
    MMLiveCustomRenderView *_customView;
    NSObject<OS_dispatch_queue> *_actionQueue;
    CDUnknownBlockType _actionBlock;
    MMLiveCustomRenderPIPStartParam *_startParam;
}

+ (id)getTempleteVideoSuffixPathWithSize:(struct CGSize)arg1;
+ (id)baseResourceDir;
+ (id)getTempleteVideoPathWithSize:(struct CGSize)arg1;
+ (_Bool)isTempleteVideoSize:(struct CGSize)arg1 fit:(struct CGSize)arg2;
+ (id)checkTempleteVideoExistWithSize:(struct CGSize)arg1;
+ (struct CGSize)getVideoCreateSize:(struct CGSize)arg1;
+ (_Bool)appendToAdapter:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 totalFrames:(long long)arg3 frameDuration:(CDStruct_1b6d18a9)arg4 withInput:(id)arg5 withMovieWriter:(id)arg6;
+ (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
+ (int)getPictureInPictureMaxKnownSupportedControlStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveCustomRenderPIPStartParam *startParam; // @synthesize startParam=_startParam;
@property(nonatomic) _Bool needAutoStopPIP; // @synthesize needAutoStopPIP=_needAutoStopPIP;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) _Bool needRestartPIPTrackingForOuterPause; // @synthesize needRestartPIPTrackingForOuterPause=_needRestartPIPTrackingForOuterPause;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) _Bool isObserverPIPPossible; // @synthesize isObserverPIPPossible=_isObserverPIPPossible;
@property _Bool isHandlingTempleteVideo; // @synthesize isHandlingTempleteVideo=_isHandlingTempleteVideo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue; // @synthesize actionQueue=_actionQueue;
@property(retain, nonatomic) MMLiveCustomRenderView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) MMLiveCustomRenderPIPView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVMutableComposition *mixComposition; // @synthesize mixComposition=_mixComposition;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPictureInPictureController *pip; // @synthesize pip=_pip;
@property(nonatomic) unsigned long long lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) MMLiveCustomRenderPIPHandleLogic *handleLogic; // @synthesize handleLogic=_handleLogic;
@property(nonatomic) _Bool hasStartedPIPInBackground; // @synthesize hasStartedPIPInBackground=_hasStartedPIPInBackground;
@property(nonatomic) _Bool isManualStartPictureInPicture; // @synthesize isManualStartPictureInPicture=_isManualStartPictureInPicture;
@property(nonatomic) _Bool isClosedCompletely; // @synthesize isClosedCompletely=_isClosedCompletely;
@property(nonatomic) _Bool isPIPActive; // @synthesize isPIPActive=_isPIPActive;
@property(nonatomic) _Bool isPIPStart; // @synthesize isPIPStart=_isPIPStart;
@property(nonatomic) _Bool isOpenPIP; // @synthesize isOpenPIP=_isOpenPIP;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool startPIPAutomaticallyFromInlineAbility; // @synthesize startPIPAutomaticallyFromInlineAbility=_startPIPAutomaticallyFromInlineAbility;
- (void)inner_getTempleteVideoWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getTempleteVideoWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getPipWindowWithClassNameWithWindows:(id)arg1;
- (id)getPipWindowWithClassTypeWithWindows:(id)arg1;
- (id)getPIPWindow;
@property(readonly, nonatomic) _Bool supportDynamicUpdateSize;
- (int)controlStyle;
@property(readonly, nonatomic) _Bool isPIPPossible;
@property(readonly, nonatomic) _Bool isPIPPrepared;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)checkPIPPreparedState;
- (void)onPictureInPicturePossibleChange:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)ensurePIPPlayerPlaying;
- (void)playbackFinished:(id)arg1;
- (void)checkAndInvokeRestartPlayer;
- (void)onStatusChange:(id)arg1;
- (void)onTimeControlStatus:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)checkAndUpdatePIPState;
- (void)onStopPIP;
- (void)onStartPIP;
- (void)unObserverPIPPossibleState;
- (void)observerPIPossibleState;
- (void)invokePIPPreparedStateCheck;
- (void)clearPIPControllerRecordTags;
- (void)stopPictureInPicture;
- (void)startPictureInPicture;
- (void)tryCreatePipController;
- (void)resetState;
- (void)manualStartPictureInPicture;
- (void)releasePIPPLayer;
- (void)addListenToPlayer;
- (void)resetPIPPlayer;
- (void)initPIPVideoSrcWithCompletion:(CDUnknownBlockType)arg1;
- (void)createVideoCompositionWithAsset:(id)arg1;
- (void)initTemplateVideoSrc:(CDUnknownBlockType)arg1;
- (void)getTempleteVideoSrc:(CDUnknownBlockType)arg1;
- (void)deAttachCustomView;
- (void)attachCustomView;
- (void)initCustomView;
- (void)attachRenderView;
- (void)initRenderView;
- (void)reAttachCustomView;
- (void)updateControlStyle;
- (_Bool)resumePIPPlayer;
- (void)pausePIPPlayer;
- (void)pausePIPPlayerWithStopPIP:(_Bool)arg1;
- (id)pipRenderView;
- (long long)getPIPPlayerControlStatus;
- (void)removeActiveTaskInMode:(unsigned long long)arg1;
- (void)checkNeedInvokeAction;
- (void)cancelCurrAction;
- (void)invokeAction:(CDUnknownBlockType)arg1 mostDelayDuration:(double)arg2 loading:(_Bool)arg3;
- (void)invokeAction:(CDUnknownBlockType)arg1 mostDelayDuration:(double)arg2;
- (void)invokeAction:(CDUnknownBlockType)arg1;
- (void)recoverPIPState;
- (void)transferPIPStateToPending;
- (void)makePIPPending;
- (void)clearRestartPIPTrackingTag;
- (void)checkAndRestartPIPTracking;
- (void)startPIPTracking;
- (void)updateHandleLogic:(id)arg1;
- (struct CGSize)getCurrentRenderSize;
- (struct CGSize)getRenderSize;
- (struct CGSize)getTempleteVideoRenderSize;
- (void)updateRenderSize:(struct CGSize)arg1;
- (void)deAttachRenderView;
- (void)clear;
- (void)stopWithAutoRestart;
- (void)stopCompletely:(_Bool)arg1;
- (void)stop;
- (void)start:(id)arg1;
- (void)prepareForStartPictureInPicture;
- (void)initDefaultDatas;
- (void)initNotifications;
- (id)init;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

