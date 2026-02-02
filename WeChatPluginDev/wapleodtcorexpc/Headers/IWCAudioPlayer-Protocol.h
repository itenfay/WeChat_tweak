//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCAudioInfo;

@protocol IWCAudioPlayer <NSObject>
@property(nonatomic) float volume;
@property(nonatomic) float playRate;
@property(readonly, nonatomic) double displayTime;
@property(readonly, nonatomic) double bufferedTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) WCAudioInfo *currentInfo;
@property(readonly, nonatomic) unsigned long long status;
@property(nonatomic) unsigned long long mode;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)seekToTime:(double)arg1 autoPlay:(_Bool)arg2;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)resume;
@end

