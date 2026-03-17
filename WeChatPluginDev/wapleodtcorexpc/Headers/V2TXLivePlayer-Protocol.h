//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, UIView;
@protocol V2TXLivePlayerObserver;

@protocol V2TXLivePlayer <NSObject>
- (long long)setProperty:(NSString *)arg1 value:(NSObject *)arg2;
- (void)showDebugView:(_Bool)arg1;
- (long long)enableReceiveSeiMessage:(_Bool)arg1 payloadType:(int)arg2;
- (long long)enableObserveVideoFrame:(_Bool)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (long long)snapshot;
- (long long)enableVolumeEvaluation:(unsigned long long)arg1;
- (long long)switchStream:(NSString *)arg1;
- (long long)setCacheParams:(double)arg1 maxTime:(double)arg2;
- (long long)setPlayoutVolume:(unsigned long long)arg1;
- (long long)resumeVideo;
- (long long)pauseVideo;
- (long long)resumeAudio;
- (long long)pauseAudio;
- (int)isPlaying;
- (long long)stopPlay;
- (long long)startPlay:(NSString *)arg1;
- (long long)setRenderFillMode:(long long)arg1;
- (long long)setRenderRotation:(long long)arg1;
- (long long)setRenderView:(UIView *)arg1;
- (void)setObserver:(id <V2TXLivePlayerObserver>)arg1;
@end

