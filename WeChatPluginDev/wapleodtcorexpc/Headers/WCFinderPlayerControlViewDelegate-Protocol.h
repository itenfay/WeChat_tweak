//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPVideoFrameBuffer, WCPlayerPlaybackInfo, WCPlayerView;

@protocol WCFinderPlayerControlViewDelegate <NSObject>

@optional
- (void)onPlayerView:(WCPlayerView *)arg1 stopDisplayOnPipWindow:(long long)arg2;
- (void)onPlayerView:(WCPlayerView *)arg1 startDisplayOnPipWindow:(long long)arg2;
- (void)onPipStatePauseWithPlayerView:(WCPlayerView *)arg1;
- (void)onPipStateRePlayWithPlayerView:(WCPlayerView *)arg1;
- (void)onPipStatePlayWithPlayerView:(WCPlayerView *)arg1;
- (void)onPlayerView:(WCPlayerView *)arg1 pipSeekFromTime:(double)arg2 toTime:(double)arg3;
- (void)onPlayerRestoreUserInterfaceForPictureInPictureStop:(WCPlayerView *)arg1;
- (void)onPlayerView:(WCPlayerView *)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(WCPlayerView *)arg1;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(WCPlayerView *)arg1;
- (void)onVideoFrameOut:(TPVideoFrameBuffer *)arg1;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onVideoSeekActionWithDirection:(_Bool)arg1;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onHiddenBufferingView;
- (void)onShowBufferingView;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay:(WCPlayerPlaybackInfo *)arg1;
@end

