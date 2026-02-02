//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicFadeOutLayer, MMMusicLiveVideoPlayerView, MMMusicMVTrackItem, MVImagePlayer, NSString, UIImageView;
@protocol MMMusicMVSingleVideoItemViewDelegate;

@interface MMMusicMVSingleVideoItemView : UIView
{
    _Bool _isPreviewMode;
    _Bool _isFullScreen;
    _Bool _forbidAutoplay;
    _Bool _hideVideoView;
    _Bool _bLongVideo;
    id <MMMusicMVSingleVideoItemViewDelegate> _delegate;
    unsigned long long _videoEpisodeIndex;
    MMMusicMVTrackItem *_trackItem;
    MMMusicLiveVideoPlayerView *_playerView;
    MMMusicFadeOutLayer *_playerMaskLayer;
    MVImagePlayer *_imagePlayer;
    UIImageView *_bgImageView;
    UIView *_bgImageViewCover;
    NSString *_finderUsername;
    NSString *_currentTid;
    NSString *_currentNonceId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bLongVideo; // @synthesize bLongVideo=_bLongVideo;
@property(copy, nonatomic) NSString *currentNonceId; // @synthesize currentNonceId=_currentNonceId;
@property(copy, nonatomic) NSString *currentTid; // @synthesize currentTid=_currentTid;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) UIView *bgImageViewCover; // @synthesize bgImageViewCover=_bgImageViewCover;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) MVImagePlayer *imagePlayer; // @synthesize imagePlayer=_imagePlayer;
@property(retain, nonatomic) MMMusicFadeOutLayer *playerMaskLayer; // @synthesize playerMaskLayer=_playerMaskLayer;
@property(retain, nonatomic) MMMusicLiveVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) MMMusicMVTrackItem *trackItem; // @synthesize trackItem=_trackItem;
@property(nonatomic) unsigned long long videoEpisodeIndex; // @synthesize videoEpisodeIndex=_videoEpisodeIndex;
@property(nonatomic) _Bool hideVideoView; // @synthesize hideVideoView=_hideVideoView;
@property(nonatomic) _Bool forbidAutoplay; // @synthesize forbidAutoplay=_forbidAutoplay;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(nonatomic) __weak id <MMMusicMVSingleVideoItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mvImagePlayer:(id)arg1 onVideoFrameOut:(id)arg2;
- (void)startImageShow:(id)arg1;
- (void)setupImagePlayer:(id)arg1;
- (void)onVideoPlayerMediaInfoDidChange:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onVideoDidPlayToEndTime:(unsigned int)arg1;
- (void)onVideoPause:(unsigned int)arg1;
- (void)setupMaskLayerSizeWithVideoSize:(struct CGSize)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1 playBackInfo:(id)arg2;
- (void)onVideoEndBuffering:(unsigned int)arg1;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onVideoPlay:(unsigned int)arg1;
- (void)onVideoCurrTimeChanged:(double)arg1 totalDuration:(double)arg2 viewId:(unsigned int)arg3;
- (void)clearBgViewImage;
- (void)setupMaskLayerWithSize:(struct CGSize)arg1;
- (_Bool)isVideoPlaying;
- (void)showVideoPlayerView;
- (void)hideVideoPlayerView;
- (double)videoPlayedTime;
- (void)stopVideoPlay;
- (void)pauseVideoPlay;
- (void)seekVideoPlay:(double)arg1;
- (void)startVideoPlay;
- (void)prepareForReuse;
- (void)reportVideoPlayStatictics;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateVideoAuthorNickName:(id)arg1;
- (void)layoutSubviews;
- (void)updateModel:(id)arg1 videoEpisodeIndex:(unsigned long long)arg2 initialTime:(double)arg3 fromAsyncGetData:(_Bool)arg4 autoPlay:(_Bool)arg5;
- (id)getFinderDataItemWithTrack:(id)arg1;
- (void)updateModel:(id)arg1 videoEpisodeIndex:(unsigned long long)arg2 initialTime:(double)arg3 fromAsyncGetData:(_Bool)arg4;
- (void)updateModel:(id)arg1 videoEpisodeIndex:(unsigned long long)arg2 initialTime:(double)arg3;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

