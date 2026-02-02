//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TingPlayingItem <NSObject>
@property(nonatomic) float playRate;
@property(readonly, nonatomic) double displayTime;
@property(readonly, nonatomic) double bufferedTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) int status;
- (_Bool)canSeek;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)play;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isLoading;
@end

