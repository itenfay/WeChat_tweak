//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveFootageReplayModel, MMFinderLiveReplayMicInfoDisplayLogic, MMFinderLiveReplayStopgapView, MMFinderLiveReplayTaskId, MMFinderLiveTask, MMFinderLiveTaskId, NSString, WCPlayerView;
@protocol MMFinderLiveReplayViewDelegate, WCPlayerControlProtocol;

@interface MMFinderLiveReplayView : UIView
{
    _Bool _isInMinimizeMode;
    _Bool _autoplay;
    unsigned int _initialPlayTime;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveReplayMicInfoDisplayLogic *_micInfoDisplayLogic;
    id <MMFinderLiveReplayViewDelegate> _delegate;
    WCPlayerView *_hlsPlayer;
    UIView *_blurBackgroundView;
    UIView<WCPlayerControlProtocol> *_controlView;
    NSString *_groupName;
    MMFinderLiveReplayStopgapView *_stopgapView;
    unsigned long long _stopgapPollInterval;
    MMFinderLiveFootageReplayModel *_footageReplayModel;
    double _lastPlayTs;
    double _actualWatchDuration;
    MMFinderLiveReplayTaskId *_replayTaskId;
    struct CGSize _footageReplayVideoSize;
}

+ (struct CGPoint)getAudienceRemoteVideoViewCenterForScene:(unsigned long long)arg1 containerView:(id)arg2 withDisplaySize:(struct CGSize)arg3;
+ (struct CGRect)createRemoteViewFrameWithDisplaySize:(struct CGSize)arg1 containerView:(id)arg2 scene:(unsigned long long)arg3;
+ (struct CGRect)getMainVideoViewFrameWithVideoSize:(struct CGSize)arg1 containerView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveReplayTaskId *replayTaskId; // @synthesize replayTaskId=_replayTaskId;
@property(nonatomic) double actualWatchDuration; // @synthesize actualWatchDuration=_actualWatchDuration;
@property(nonatomic) double lastPlayTs; // @synthesize lastPlayTs=_lastPlayTs;
@property(retain, nonatomic) MMFinderLiveFootageReplayModel *footageReplayModel; // @synthesize footageReplayModel=_footageReplayModel;
@property(nonatomic) unsigned long long stopgapPollInterval; // @synthesize stopgapPollInterval=_stopgapPollInterval;
@property(retain, nonatomic) MMFinderLiveReplayStopgapView *stopgapView; // @synthesize stopgapView=_stopgapView;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) unsigned int initialPlayTime; // @synthesize initialPlayTime=_initialPlayTime;
@property(nonatomic) _Bool isInMinimizeMode; // @synthesize isInMinimizeMode=_isInMinimizeMode;
@property(retain, nonatomic) UIView<WCPlayerControlProtocol> *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UIView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) WCPlayerView *hlsPlayer; // @synthesize hlsPlayer=_hlsPlayer;
@property(nonatomic) struct CGSize footageReplayVideoSize; // @synthesize footageReplayVideoSize=_footageReplayVideoSize;
@property(nonatomic) __weak id <MMFinderLiveReplayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveReplayMicInfoDisplayLogic *micInfoDisplayLogic; // @synthesize micInfoDisplayLogic=_micInfoDisplayLogic;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (_Bool)addGestureAnimationPagForUserWithId:(id)arg1 withGestureId:(id)arg2 instanceId:(id)arg3 referenceAspectRatio:(double)arg4 translationX:(double)arg5 translationY:(double)arg6 rotation:(double)arg7 scale:(double)arg8 giftSenderNickname:(id)arg9;
- (void)onReplayStopgapView:(id)arg1 transitToStateRequested:(unsigned long long)arg2;
- (void)onPIPHandleLogicConfig:(id)arg1;
- (_Bool)insertStopgapViewToPipRenderLayer;
- (_Bool)insertHlsPlayerToPIPRenderLayer;
- (void)onMicInfoDisplayLogicStateUpdated:(id)arg1 connectMicStateValid:(_Bool)arg2 anchorInAudioMode:(_Bool)arg3 isScreenSharing:(_Bool)arg4 isAudioDisplayMode:(_Bool)arg5;
- (id)onVideoPlayerPipBusinessIdRequested;
@property(readonly, nonatomic) struct CGRect minimizeSrcFrame;
@property(readonly, nonatomic) UIView *minimizeSrcView;
- (id)getExtendTransitionContainerBackView;
- (struct CGRect)getNormalizedMinimizeSrcFrameForBusiness:(long long)arg1;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (_Bool)shouldLoop;
- (id)replayUrlPemKey;
- (id)replayUrl;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)changeToCategoryPlayback;
- (void)onFootageReplayVideoSizeChanged;
- (void)invokeStopgapPoll;
- (void)layoutMaskLayerToCoverView:(id)arg1;
- (void)configureMicFocusMasksWithAllMicUsersInfo:(id)arg1 anchorInAudioMode:(_Bool)arg2;
- (void)updateHlsPlayerFrame:(struct CGRect)arg1;
- (void)updateReplaySrcForReplayPaymentType;
- (id)createPlayerInfoWithInitialSeek:(double)arg1 autoplay:(_Bool)arg2;
- (void)layoutMicInfoView;
- (void)layoutStopgapView;
- (void)layoutHLSPlayerWithInitialSeek:(double)arg1 autoplay:(_Bool)arg2;
- (void)layoutBlurBackgroundView;
- (void)layoutUI;
- (id)getLiveStateText;
- (id)getAudienceAudioMicUserOperationViewList;
- (id)getCompactAllUserInfoView;
- (id)getAudienceAudioMicUserViewList;
- (id)getConnectMicOtherAnchorCoverViewList;
- (id)getAudioModeCoverView;
- (id)getHlsPlayer;
- (void)updatePlaySrcPathPersistingCurrentProgress:(_Bool)arg1 initialPlayTime:(double)arg2 forcePlay:(_Bool)arg3;
- (void)setPlayerContentMode:(long long)arg1;
- (void)forceLayout;
- (void)prepareForMinimizeMode;
- (void)prepareForMaximizeMode;
- (double)getActualWatchDurationInSeconds;
- (_Bool)isPlaying;
- (double)currentPlayBackRate;
- (void)setPlaybackRate:(double)arg1;
- (void)unMute;
- (void)mute;
- (void)resumePlay;
- (void)seekToTime:(double)arg1;
- (void)pause;
- (void)stopPlay;
- (void)startPlay;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 footageReplayModel:(id)arg2 controlView:(id)arg3 initialPlayTime:(unsigned int)arg4 autoplay:(_Bool)arg5;
- (id)initWithTaskId:(id)arg1 controlView:(id)arg2 initialPlayTime:(unsigned int)arg3 autoplay:(_Bool)arg4;
- (double)getVideoContainerWHPercent;
- (struct CGRect)getNormalizedMainVideoViewFrame;
- (struct CGRect)getMainVideoViewFrameWithoutReplayTask;
- (struct CGRect)getMainVideoViewFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

