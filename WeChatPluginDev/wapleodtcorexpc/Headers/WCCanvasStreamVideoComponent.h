//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMProgressViewEx, MMUILabel, NSString, UIButton, UIImageView, UIView, WCNetworkMediaCore, WCNetworkMediaSlider;

@interface WCCanvasStreamVideoComponent
{
    _Bool _streamVideoThumbReady;
    _Bool _isFirstInit;
    _Bool _isLastPlaying;
    _Bool _shouldPlayAtBegin;
    _Bool _turnToPlayForVideoDisplayScaleLargeThanHalf;
    MMProgressViewEx *_loadingView;
    MMUILabel *_durationLabel;
    UIView *_bottomView;
    MMUILabel *_currentLabel;
    WCNetworkMediaSlider *_sliderView;
    UIButton *_playButton;
    UIButton *_detailButton;
    UIButton *_voiceControlButton;
    UIButton *_m_hideBtn;
    UIView *_m_maskView;
    UIButton *_m_initPlayButton;
    UIView *_m_initPlayMaskView;
    UIImageView *_m_previewImageView;
    WCNetworkMediaCore *_mediaCore;
    id _timeObserverToken;
    struct CGSize _videoSize;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id timeObserverToken; // @synthesize timeObserverToken=_timeObserverToken;
@property(nonatomic) _Bool turnToPlayForVideoDisplayScaleLargeThanHalf; // @synthesize turnToPlayForVideoDisplayScaleLargeThanHalf=_turnToPlayForVideoDisplayScaleLargeThanHalf;
@property(nonatomic) _Bool shouldPlayAtBegin; // @synthesize shouldPlayAtBegin=_shouldPlayAtBegin;
@property(nonatomic) _Bool isLastPlaying; // @synthesize isLastPlaying=_isLastPlaying;
@property(nonatomic) _Bool isFirstInit; // @synthesize isFirstInit=_isFirstInit;
@property(nonatomic) _Bool streamVideoThumbReady; // @synthesize streamVideoThumbReady=_streamVideoThumbReady;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) WCNetworkMediaCore *mediaCore; // @synthesize mediaCore=_mediaCore;
@property(retain, nonatomic) UIImageView *m_previewImageView; // @synthesize m_previewImageView=_m_previewImageView;
@property(retain, nonatomic) UIView *m_initPlayMaskView; // @synthesize m_initPlayMaskView=_m_initPlayMaskView;
@property(retain, nonatomic) UIButton *m_initPlayButton; // @synthesize m_initPlayButton=_m_initPlayButton;
@property(retain, nonatomic) UIView *m_maskView; // @synthesize m_maskView=_m_maskView;
@property(retain, nonatomic) UIButton *m_hideBtn; // @synthesize m_hideBtn=_m_hideBtn;
@property(retain, nonatomic) UIButton *voiceControlButton; // @synthesize voiceControlButton=_voiceControlButton;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) WCNetworkMediaSlider *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) MMUILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
- (void)showFloatJumpView:(_Bool)arg1;
- (void)notifyToShowFloatComponent;
- (_Bool)hasFloatComponentInfo;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (_Bool)shouldForbidDelegateShowFloatActionBtn;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(struct CGSize)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (_Bool)shouldAutoPlayStreamVideo;
- (void)tryShowDownArrowAnimate;
- (void)hideControlViewsAndTryShowArrowAnimate;
- (void)hideControlViews;
- (void)showControlViewsWithAutoHideAnimated:(_Bool)arg1;
- (void)showControlViewsWithAutoHide;
- (void)showControlViewsAnimated:(_Bool)arg1;
- (void)onInitPlayButtonClick;
- (void)onVoiceIconBtnClick:(id)arg1;
- (void)onHideClick;
- (void)onShowDetail:(id)arg1;
- (void)onPlayClick:(id)arg1;
- (void)onPlaySliderChange:(id)arg1;
- (void)onSliderChange:(id)arg1;
- (_Bool)isInSafeArea;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)retryToLoadVideo;
- (id)stringFromTimeInterval:(double)arg1;
- (void)updateSubviewsFrame:(long long)arg1;
- (void)updateVideoFrame:(long long)arg1;
- (void)refreshCurrentTime;
- (void)updateControlViewsVisible:(_Bool)arg1;
- (_Bool)isControlViewsHidden;
- (void)tryToSetVideoPlayingState:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)innerPlayStreamVideo;
- (void)tryPlayStreamVideo;
- (void)tryToPauseStreamVideo;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

