//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageBrowseButton, MMUIView, NSString, SightIconView, WCNetworkMediaCore, WCPlayerProgressBar;
@protocol WCNormalVideoPlayerViewDelegate;

@interface WCNormalVideoPlayerView
{
    _Bool _isPlaying;
    _Bool _hasStarted;
    id <WCNormalVideoPlayerViewDelegate> _playerDelegate;
    NSString *_videoUrl;
    MMUIView *_controlView;
    WCNetworkMediaCore *_mediaCore;
    ImageBrowseButton *_closeButton;
    SightIconView *_playIconView;
    WCPlayerProgressBar *_progressBar;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) WCPlayerProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) ImageBrowseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) WCNetworkMediaCore *mediaCore; // @synthesize mediaCore=_mediaCore;
@property(retain, nonatomic) MMUIView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) __weak id <WCNormalVideoPlayerViewDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarHidden;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(struct CGSize)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)dealloc;
- (void)pause;
- (void)stopPlay;
- (void)startPlay;
- (void)layoutSubviews;
- (void)onCloseBtnClick;
- (void)onSightIconClick;
- (void)onSceenClicked;
- (void)initView;
- (void)initMediaCore;
- (id)initWithFrame:(struct CGRect)arg1 videoUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

