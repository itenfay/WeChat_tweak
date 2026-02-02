//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicRoundCorneredBarButton, UIImageView, UILabel, WCPlayerView;
@protocol MMMusicNoAnyVideoViewPlayerDelegate;

@interface MMMusicNoAnyVideoView
{
    WCPlayerView *_playerView;
    UIImageView *_imageView;
    UILabel *_label;
    MMMusicRoundCorneredBarButton *m_postBarButton;
    unsigned int _nativeViewId;
    id <MMMusicNoAnyVideoViewPlayerDelegate> _delegate;
    unsigned long long _videoEpisodeIndex;
    CDUnknownBlockType _onTappedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onTappedBlock; // @synthesize onTappedBlock=_onTappedBlock;
@property(nonatomic) unsigned long long videoEpisodeIndex; // @synthesize videoEpisodeIndex=_videoEpisodeIndex;
@property(nonatomic) __weak id <MMMusicNoAnyVideoViewPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoBeginPlay;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)setShowPromptText:(_Bool)arg1;
- (void)setPromptAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)destory;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)setVideoEpisodeIndex:(unsigned long long)arg1 shouldPlay:(_Bool)arg2;
- (id)init;

@end

