//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface MegaVideoPlayerCallbackApi : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
    NSString *_messageChannelSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageChannelSuffix; // @synthesize messageChannelSuffix=_messageChannelSuffix;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)onGetVideoPlayFpsPlayerId:(long long)arg1 mediaId:(id)arg2 videoFps:(long long)arg3 decodeFps:(long long)arg4 renderFps:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)onGetVideoSizePlayerId:(long long)arg1 mediaId:(id)arg2 width:(long long)arg3 height:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)onVideoFirstFrameDrawPlayerId:(long long)arg1 mediaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onBufferEndPlayerId:(long long)arg1 mediaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onBufferStartPlayerId:(long long)arg1 mediaId:(id)arg2 isSeeking:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onPlayEndPlayerId:(long long)arg1 mediaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onPlayPausePlayerId:(long long)arg1 mediaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onPlayStartPlayerId:(long long)arg1 mediaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onPreparedPlayerId:(long long)arg1 mediaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onErrorPlayerId:(long long)arg1 mediaId:(id)arg2 errorMsg:(id)arg3 what:(long long)arg4 extra:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

