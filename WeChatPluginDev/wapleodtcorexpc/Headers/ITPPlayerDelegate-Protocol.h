//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAsset, NSString, TPAudioFrameBuffer, TPPostProcessFrameBuffer, TPRemoteSdpInfo, TPSubtitleData, TPVideoFrameBuffer, UIImage;
@protocol ITPPlayer;

@protocol ITPPlayerDelegate <NSObject>
- (void)onPlayer:(id <ITPPlayer>)arg1 errorType:(long long)arg2 errorCode:(long long)arg3 arg1:(long long)arg4 arg2:(long long)arg5;
- (void)onCompletion:(id <ITPPlayer>)arg1;
- (void)onPrepared:(id <ITPPlayer>)arg1;

@optional
- (void)onDemuxerPauseContinueBufferingCompleted;
- (TPRemoteSdpInfo *)onSdpExchange:(id <ITPPlayer>)arg1 localSdp:(NSString *)arg2 ids:(int)arg3;
- (void)onPlayer:(id <ITPPlayer>)arg1 pictureInPictureErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 airplayErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 airplayDidActive:(_Bool)arg2;
- (AVAsset *)onPlayer:(id <ITPPlayer>)arg1 assembleAVAssetWithUrl:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (TPPostProcessFrameBuffer *)onPlayer:(id <ITPPlayer>)arg1 audioProcessFrameOut:(TPPostProcessFrameBuffer *)arg2;
- (TPPostProcessFrameBuffer *)onPlayer:(id <ITPPlayer>)arg1 videoProcessFrameOut:(TPPostProcessFrameBuffer *)arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 audioFrameOut:(TPAudioFrameBuffer *)arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 videoFrameOut:(TPVideoFrameBuffer *)arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 captureWithModeFailed:(long long)arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 captureVideoFailed:(long long)arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 captureWithModeSuccess:(UIImage *)arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 captureVideoSuccess:(UIImage *)arg2;
- (void)onPlayer:(id <ITPPlayer>)arg1 subtitleData:(TPSubtitleData *)arg2;
- (void)onStopAsyncComplete:(id <ITPPlayer>)arg1;
- (void)onStateChange:(id <ITPPlayer>)arg1 preState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (void)onVideoSizeChanged:(id <ITPPlayer>)arg1 width:(int)arg2 height:(int)arg3;
- (void)onSeekComplete:(id <ITPPlayer>)arg1;
- (void)onPlayer:(id <ITPPlayer>)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
@end

