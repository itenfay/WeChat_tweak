//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol RfxPagValueAnimatorListener;

@interface RfxPagValueAnimator : NSObject
{
    long long duration;
    long long startTime;
    long long playTime;
    int repeatCount;
    int repeatedTimes;
    double animatedFraction;
    id <RfxPagValueAnimatorListener> animatorListener;
    struct mutex lock;
    long long _animatorId;
}

+ (void)RemoveAnimator:(long long)arg1;
+ (long long)AddAnimator:(id)arg1;
+ (void)HandleDisplayLink:(id)arg1;
+ (void)StopDisplayLink;
+ (void)StartDisplayLink;
- (id).cxx_construct;
- (void).cxx_destruct;
@property long long animatorId; // @synthesize animatorId=_animatorId;
- (void)stop:(_Bool)arg1;
- (void)stop;
- (void)start;
- (void)setRepeatCount:(int)arg1;
- (_Bool)isPlaying;
- (void)setCurrentPlayTime:(long long)arg1;
- (double)getAnimatedFraction;
- (void)setDuration:(long long)arg1;
- (long long)duration;
- (void)setListener:(id)arg1;
- (void)onAnimationFrame:(long long)arg1;
- (id)init;

@end

