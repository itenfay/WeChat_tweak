//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVPlayerItemVideoOutput, UIImage, UIView, WCPlayerPlayArgs, WCPlayerPlaybackInfo;
@protocol WCPlayerControlProtocol;

@protocol WCPlayerProtocol <NSObject>
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs;
- (void)resumeFetchAllVideoData;
- (void)stopFetchAllVideoData;
- (void)fetchAllVideoData;
- (void)changeToDownloadFirstMode;
- (void)setPlayerAllowsExternalPlayback:(_Bool)arg1;
- (void)resumeVideoDownload;
- (void)stopVideoDowload;
- (void)startWithPlayerMode:(unsigned long long)arg1;
- (void)setThumbImageHidden:(_Bool)arg1;
- (void)setThumbImage:(UIImage *)arg1;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onScrubbedToTime:(double)arg1;
- (void)onSliderScrubbingDidStart;
- (void)setPlayBeginPos:(float)arg1 playEndPos:(float)arg2;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setPlayerMaxBufferLength:(unsigned int)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)forceSetPlayerToMuted:(_Bool)arg1;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)setPlayerLoop:(_Bool)arg1;
- (void)setPlayBackRate:(float)arg1;
- (struct __CVBuffer *)getCurrentPixelBuffer;
- (AVPlayerItemVideoOutput *)getAVPlayerItemVideoOutput;
- (UIImage *)syncCaptureVideo;
- (void)captureVideoWithFinishBlock:(void (^)(UIImage *))arg1;
- (double)currentTime;
- (void)pauseVideo;
- (void)playVideo;
- (void)clearLeakPlayer;
- (void)clearPlayer;
- (void)stopPlayer;
- (void)startAutoPlay;
- (void)startPlayer;
- (void)preload;
- (void)configWithPlayerInfo:(WCPlayerPlayArgs *)arg1 ControlView:(UIView<WCPlayerControlProtocol> *)arg2;
@end

