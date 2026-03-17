//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAsset, NSString, TPAudioFrameBuffer, TPPlayerDetailInfo, TPPlayerDrmParams, TPPostProcessFrameBuffer, TPRemoteSdpInfo, TPSubtitleData, TPVideoFrameBuffer;
@protocol ITPPlayerBase;

@protocol ITPPlayerBaseDelegate <NSObject>
- (void)onPlayer:(id <ITPPlayerBase>)arg1 errorType:(long long)arg2 errorCode:(long long)arg3;
- (void)onCompletion:(id <ITPPlayerBase>)arg1;
- (void)onPrepared:(id <ITPPlayerBase>)arg1;

@optional
- (void)onDemuxerPauseContinueBufferingCompleted;
- (TPRemoteSdpInfo *)onSdpExchange:(id <ITPPlayerBase>)arg1 localSdp:(NSString *)arg2 ids:(int)arg3;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 drmInfo:(TPPlayerDrmParams *)arg2;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 detailInfo:(TPPlayerDetailInfo *)arg2;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 stateChangedWhenPictureInPictureActive:(unsigned long long)arg2;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 pictureInPictureErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 airplayErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 airplayDidActive:(_Bool)arg2;
- (AVAsset *)onPlayer:(id <ITPPlayerBase>)arg1 assembleAVAssetWithUrl:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (void)onRetryEnd:(id <ITPPlayerBase>)arg1;
- (void)onRetryStart:(id <ITPPlayerBase>)arg1;
- (TPPostProcessFrameBuffer *)onPlayer:(id <ITPPlayerBase>)arg1 audioProcessFrameOut:(TPPostProcessFrameBuffer *)arg2;
- (TPPostProcessFrameBuffer *)onPlayer:(id <ITPPlayerBase>)arg1 videoProcessFrameOut:(TPPostProcessFrameBuffer *)arg2;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 audioFrameOut:(TPAudioFrameBuffer *)arg2;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 videoFrameOut:(TPVideoFrameBuffer *)arg2;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 subtitleData:(TPSubtitleData *)arg2;
- (void)onVideoSizeChanged:(id <ITPPlayerBase>)arg1 width:(int)arg2 height:(int)arg3;
- (void)onSeekComplete:(id <ITPPlayerBase>)arg1;
- (void)onPlayer:(id <ITPPlayerBase>)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
@end

