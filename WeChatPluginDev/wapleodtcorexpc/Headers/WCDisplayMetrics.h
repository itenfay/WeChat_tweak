//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCDisplayMetrics : NSObject
{
    long long _preferredFramesPerSecond;
    double _beginTime;
    double _endTime;
    long long _totalFrames;
    double _minimumFrameDuration;
    double _maximumFrameDuration;
}

@property(readonly, nonatomic) double maximumFrameDuration; // @synthesize maximumFrameDuration=_maximumFrameDuration;
@property(readonly, nonatomic) double minimumFrameDuration; // @synthesize minimumFrameDuration=_minimumFrameDuration;
@property(readonly, nonatomic) long long totalFrames; // @synthesize totalFrames=_totalFrames;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
- (id)description;
@property(readonly, nonatomic) double averageFrameDuration;
@property(readonly, nonatomic) double framesPerSecond;
@property(readonly, nonatomic) double duration;
- (void)screenDidUpdateAtTime:(double)arg1;
- (id)init;

@end

