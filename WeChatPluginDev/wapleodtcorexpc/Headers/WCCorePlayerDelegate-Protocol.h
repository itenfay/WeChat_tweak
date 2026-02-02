//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, TPAudioFrameBuffer, TPVideoFrameBuffer;

@protocol WCCorePlayerDelegate <NSObject>
- (void)onDataSourceChangeSuccess;
- (void)onPlayerErrorWithType:(unsigned long long)arg1 errorCode:(long long)arg2 errorDesc:(NSString *)arg3;
- (void)onPlayerVideoSizeChange:(struct CGSize)arg1;
- (void)onPlayerPlayablePosUpdate:(double)arg1;
- (void)onPlayerGetSeiInfo:(NSData *)arg1;
- (void)onVideoFrameRendered:(TPVideoFrameBuffer *)arg1;
- (void)onAudioFrameRendered:(TPAudioFrameBuffer *)arg1;
- (void)onFirstVideoFrameRendered;
- (void)onFirstAudioFrameRendered;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)onPlayerCurrentLoopEnd;
- (void)onPlayerCurrentLoopStart;
- (void)onPlayerBufferingEnd;
- (void)onPlayerBufferingStart;
- (void)onPlayerDidPlayToEndTime;
- (void)onPlayerStateReady;
- (void)onPlayerAssetCreated;
- (void)onLocalServerReinit;
@end

