//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSURL;
@protocol IWAAudioPlayerDelegate;

@protocol WAAudioPlayerInterface <NSObject>
@property(readonly, nonatomic) double playbackRate;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) double volume;
@property(readonly, nonatomic) double bufferTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double curTime;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) NSString *src;
@property(readonly, nonatomic) NSString *audioId;
- (_Bool)isIdle;
- (_Bool)isWaiting;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isSet;
- (void)seekTo:(double)arg1;
- (void)stop;
- (void)forcePause;
- (void)pause;
- (void)play;
- (void)setPlayerWithSrc:(NSString *)arg1 url:(NSURL *)arg2 startTime:(double)arg3 autoPlay:(_Bool)arg4 loop:(_Bool)arg5 obeyMuteSwitch:(_Bool)arg6 volume:(double)arg7 fileData:(NSData *)arg8 playbackRate:(double)arg9 referrer:(NSString *)arg10;
- (id)initWithAudioId:(NSString *)arg1 appId:(NSString *)arg2 delegate:(id <IWAAudioPlayerDelegate>)arg3;
@end

