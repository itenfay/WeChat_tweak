//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, WAOpenALAudioDecodeInfo;
@protocol WAAudioSourceDelegate;

@protocol WAAudioSource <NSObject>
@property(nonatomic) __weak id <WAAudioSourceDelegate> delegate;
@property(nonatomic) _Bool loop;
@property(nonatomic) float currentTime;
@property(nonatomic) float duration;
@property(nonatomic) long long state;
@property(copy, nonatomic) NSString *src;
@property(copy, nonatomic) NSString *audioId;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)setPlaybackRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)setLooping:(_Bool)arg1;
- (void)seek:(double)arg1;
- (void)stop;
- (void)forcePause;
- (void)pause;
- (void)play;

@optional
- (id)initWithAudioId:(NSString *)arg1 src:(NSString *)arg2 fileData:(NSData *)arg3 appId:(NSString *)arg4;
- (id)initWithAudioId:(NSString *)arg1 src:(NSString *)arg2 decodeInfo:(WAOpenALAudioDecodeInfo *)arg3 appId:(NSString *)arg4;
@end

