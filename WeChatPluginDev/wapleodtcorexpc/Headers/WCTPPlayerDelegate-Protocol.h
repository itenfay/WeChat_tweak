//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, TPAudioFrameBuffer, TPVideoFrameBuffer;

@protocol WCTPPlayerDelegate <NSObject>
- (void)onPlayerErrorWithType:(long long)arg1 errorCode:(long long)arg2;
- (void)onPlayerSeekComplete;
- (void)onPlayerCurrentLoopEnd;
- (void)onPlayerCurrentLoopStart;
- (void)onPlayerBufferingEnd;
- (void)onPlayerBufferingStart;
- (void)onPlayerDidPlayToEndTime;
- (void)onPlayerStateReady;

@optional
- (void)onVideoDecoderPacketNoReceiveFrameWithDesc:(NSString *)arg1;
- (void)onPlayerReinitWithReason:(long long)arg1;
- (void)onPlayerGetSeiInfo:(NSData *)arg1;
- (void)onPlayerPauseContinueBufferingCompleted;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onSwitchDataSourceCompeleted;
- (void)onPlayerAudioFrameOut:(TPAudioFrameBuffer *)arg1;
- (void)onPlayerVideoFrameOut:(TPVideoFrameBuffer *)arg1;
- (void)onFirstVideoFrameRendered;
- (void)onFirstAudioFrameRendered;
- (void)onPlayerFirstVideoDecoderStart;
- (void)onPlayerFirstAudioDecoderStart;
- (void)onPlayerGetAudioDecoderType:(long long)arg1;
- (void)onPlayerGetVideoDecoderType:(long long)arg1;
- (void)onFirstVideoPacketRead;
- (void)onPlayerPlayableUpdate:(long long)arg1 total:(long long)arg2;
@end

