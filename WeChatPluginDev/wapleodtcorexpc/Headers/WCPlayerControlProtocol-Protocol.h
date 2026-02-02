//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSObject, NSString, TPAudioFrameBuffer, TPVideoFrameBuffer, UIImage, WCDownloadArgsWrap, WCPlayerPlaybackInfo, WCPlayerView;
@protocol WCPlayerMediaExt;

@protocol WCPlayerControlProtocol <NSObject>
@property(nonatomic) __weak WCPlayerView *playerView;

@optional
- (struct CGRect)adjustShowAreaForDisplayFrame:(struct CGRect)arg1;
- (void)onPipGenerateNotSucc:(WCPlayerView *)arg1;
- (void)onPipWillTryGenerateWhenResignActive:(WCPlayerView *)arg1;
- (void)onPipStatePauseWithPlayerView:(WCPlayerView *)arg1;
- (void)onPipStateRePlayWithPlayerView:(WCPlayerView *)arg1;
- (void)onPipStatePlayWithPlayerView:(WCPlayerView *)arg1;
- (void)onPlayerView:(WCPlayerView *)arg1 pipSeekFromTime:(double)arg2 toTime:(double)arg3;
- (void)onPlayerView:(WCPlayerView *)arg1 stopDisplayOnPipWindow:(long long)arg2;
- (void)onPlayerView:(WCPlayerView *)arg1 startDisplayOnPipWindow:(long long)arg2;
- (void)onPlayerRestoreUserInterfaceForPictureInPictureStop:(WCPlayerView *)arg1;
- (void)onPlayerView:(WCPlayerView *)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayerView:(WCPlayerView *)arg1 failToStartPictureInPictureWithError:(NSError *)arg2;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(WCPlayerView *)arg1;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(WCPlayerView *)arg1;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayerCreated;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)onPlayerSeekFail:(float)arg1;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onPlayerAudioFrameOut:(TPAudioFrameBuffer *)arg1;
- (void)onPlayerVideoFrameOut:(TPVideoFrameBuffer *)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onReceiveAllVideoData;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)stopObserveVolume;
- (void)startObserveVolume;
- (void)hiddenThumbImageView;
- (void)showThumbImageView;
- (void)hiddenPercentView;
- (void)showPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onPlayerGetSeiInfo:(NSData *)arg1;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(WCDownloadArgsWrap *)arg1;
- (void)onDataSourceChangeSucc:(NSObject<WCPlayerMediaExt> *)arg1;
- (void)onDataSourceChangeStart:(NSObject<WCPlayerMediaExt> *)arg1;
- (void)onCreateThumbImage:(UIImage *)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(NSString *)arg3;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay:(WCPlayerPlaybackInfo *)arg1;
- (void)onVideoFristFrameRendered;
- (void)onAudioFirstFrameRendered;
@end

