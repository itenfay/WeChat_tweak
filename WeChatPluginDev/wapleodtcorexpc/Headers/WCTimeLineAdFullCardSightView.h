//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMUIImageView, NSString, UIView, WCAdFullCardContentContainerView, WCAdInteractionCoverView, WCAdInteractionView, WCStatTimerHelper;

@interface WCTimeLineAdFullCardSightView
{
    _Bool _stopCheckingTimerForMaskImg;
    _Bool _stopCheckingTimerForCoverImg;
    _Bool _isKeyboardVisible;
    MMUIImageView *_maskImgView;
    MMUIImageView *_coverImgView;
    UIView *_endCoverView;
    MMUIImageView *_endCoverTitleImageView;
    MMUIImageView *_endCoverAmbientImageView;
    MMTimer *_endCoverTimer;
    MMTimer *_endCoverReplayTimer;
    unsigned long long _endCoverExposureStartTimestamp;
    WCStatTimerHelper *_endCoverExposureTimer;
    WCAdInteractionView *_twistView;
    WCAdInteractionCoverView *_interactionCoverView;
    WCAdFullCardContentContainerView *_contentContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFullCardContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) WCAdInteractionCoverView *interactionCoverView; // @synthesize interactionCoverView=_interactionCoverView;
@property(retain, nonatomic) WCAdInteractionView *twistView; // @synthesize twistView=_twistView;
@property(nonatomic) _Bool isKeyboardVisible; // @synthesize isKeyboardVisible=_isKeyboardVisible;
@property(retain, nonatomic) WCStatTimerHelper *endCoverExposureTimer; // @synthesize endCoverExposureTimer=_endCoverExposureTimer;
@property(nonatomic) unsigned long long endCoverExposureStartTimestamp; // @synthesize endCoverExposureStartTimestamp=_endCoverExposureStartTimestamp;
@property(retain, nonatomic) MMTimer *endCoverReplayTimer; // @synthesize endCoverReplayTimer=_endCoverReplayTimer;
@property(retain, nonatomic) MMTimer *endCoverTimer; // @synthesize endCoverTimer=_endCoverTimer;
@property(retain, nonatomic) MMUIImageView *endCoverAmbientImageView; // @synthesize endCoverAmbientImageView=_endCoverAmbientImageView;
@property(retain, nonatomic) MMUIImageView *endCoverTitleImageView; // @synthesize endCoverTitleImageView=_endCoverTitleImageView;
@property(retain, nonatomic) UIView *endCoverView; // @synthesize endCoverView=_endCoverView;
@property(nonatomic) _Bool stopCheckingTimerForCoverImg; // @synthesize stopCheckingTimerForCoverImg=_stopCheckingTimerForCoverImg;
@property(nonatomic) _Bool stopCheckingTimerForMaskImg; // @synthesize stopCheckingTimerForMaskImg=_stopCheckingTimerForMaskImg;
@property(retain, nonatomic) MMUIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(retain, nonatomic) MMUIImageView *maskImgView; // @synthesize maskImgView=_maskImgView;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)interactionCoverViewGotAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)interactionCoverViewDeviceMotionStateChangedToRunning:(_Bool)arg1;
- (_Bool)interactionCoverViewIsPlayerPlaying;
- (void)reportForInteractionCoverWithResult:(_Bool)arg1;
- (void)addInteractionCoverViewWith:(id)arg1;
- (void)interactionViewDeterminationWasMadeWithRelatedId:(id)arg1 forType:(unsigned long long)arg2;
- (void)reportForTwistResult:(_Bool)arg1;
- (void)addInteractionViewWith:(id)arg1;
- (void)updateTwistCurrentVideoTime:(double)arg1;
- (void)updateTwistActivity;
- (void)suspendTwistView;
- (void)hideTwistView;
- (void)showTwistView;
- (void)handleTwistADWithPlaybackTime:(double)arg1;
- (id)fetchImageForImgUrl:(id)arg1;
- (void)onSightViewEnterForeground:(id)arg1;
- (void)onSightViewEnterBackground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (int)fetchReportScene;
- (void)reportEndCoverClickInfo;
- (void)sightViewDidBeClicked;
- (void)reportEndCoverExposureInfo;
- (void)sightViewDidEndDecelerating;
- (void)sightViewWillDisappear;
- (void)sightViewDidEndDisplaying;
- (void)initEndCoverReportInfo;
- (_Bool)isEndCoverViewVisible;
- (_Bool)isEndCoverInfoValid;
- (void)resumeEndCoverTimers;
- (void)pauseEndCoverTimers;
- (void)resumeEndCover;
- (void)pauseEndCover;
- (void)invalidateEndCoverTimers;
- (void)initEndCoverTimers;
- (void)replayVideoByTimer;
- (void)hideEndCoverViewWithAnimation:(_Bool)arg1;
- (void)hideEndCoverView;
- (void)showEndCoverView;
- (void)addEndCoverView;
- (void)showOrHideViewWithAnimation:(id)arg1 isShow:(_Bool)arg2;
- (void)resetAnimationBar;
- (void)showAnimationBar;
- (void)checkContentContainerAnimationByTime:(double)arg1;
- (void)checkMaskAndCoverImgStateByTime:(double)arg1;
- (void)checkCoverImageState:(double)arg1;
- (void)checkMaskImageState:(double)arg1;
- (void)showOrHiddenMaskAndCoverImg:(_Bool)arg1 isForMaskImg:(_Bool)arg2;
- (void)downloadAndSetImage:(id)arg1 isForMaskImg:(_Bool)arg2;
- (void)initMaskAndCoverImage:(id)arg1 isForMaskImg:(_Bool)arg2;
- (void)addMaskAndCoverImage:(id)arg1;
- (id)fetchContentContainerView;
- (void)addTitleAndDescriptionForItem:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)customPlayerInfo:(id)arg1;
- (void)setContentHidden:(_Bool)arg1;
- (void)exitVideoPlay;
- (void)setupWCPlayerView;
- (void)onWCPlayerPlayEnd:(_Bool)arg1;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)pauseWCPlayer;
- (void)startWCPlayer;
- (void)dealloc;
- (void)initSubviewsWithWCDataItem:(id)arg1;
- (id)initWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2 dataItem:(id)arg3 bTimelineScene:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

