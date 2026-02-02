//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicEditVideoPlayerView, MMMusicFadeOutLayer, MMWebImageView, NSString;

@interface MMMusicEditVideoPlayerContainerView
{
    MMMusicEditVideoPlayerView *m_playerView;
    MMWebImageView *m_imageView;
    MMWebImageView *m_thumbImageView;
    MMMusicFadeOutLayer *m_playerMaskLayer;
    struct CGSize curPresentationSize;
    _Bool hasSetMaskLayer;
    _Bool isLongVideo;
}

- (void).cxx_destruct;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onVideoPlay:(unsigned int)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1 playBackInfo:(id)arg2;
- (void)setupMaskLayerWithSize:(struct CGSize)arg1;
- (void)tryToSetMaskLayer;
- (id)syncCaptureVideo;
- (double)currentPlayedTime;
- (void)pause;
- (void)mutePlay;
- (void)seek:(double)arg1;
- (void)setThumbImage:(id)arg1;
- (void)setThumbImagePath:(id)arg1;
- (void)setMediaInfo:(id)arg1 videoInitialTime:(double)arg2 shouldPlay:(_Bool)arg3;
- (void)setVideoPath:(id)arg1 videoInitialTime:(double)arg2 videoWidth:(double)arg3 videoHeight:(double)arg4;
- (void)layoutSubviews;
- (void)initView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

