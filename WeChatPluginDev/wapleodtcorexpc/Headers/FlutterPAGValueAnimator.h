//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol PAGValueAnimatorListener;

@interface FlutterPAGValueAnimator : NSObject
{
    long long duration;
    long long startTime;
    long long playTime;
    int repeatCount;
    int repeatedTimes;
    double animatedFraction;
    unsigned long long animatorId;
    id <PAGValueAnimatorListener> animatorListener;
    _Bool running;
}

+ (void)HandleDisplayLink:(id)arg1;
+ (void)StopDisplayLink;
+ (void)StartDisplayLink;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)animatorId;
- (void)resume;
- (void)pause;
- (void)stop:(_Bool)arg1;
- (void)stop;
- (void)start;
- (void)setRepeatCount:(int)arg1;
- (void)setRepeatedTimes:(int)arg1;
- (int)repeatedTimes;
- (_Bool)isPlaying;
- (void)setCurrentPlayTime:(long long)arg1;
- (double)getAnimatedFraction;
- (void)setDuration:(long long)arg1;
- (long long)duration;
- (void)setListener:(id)arg1;
- (void)onAnimationFrame:(long long)arg1;
- (id)init;
- (void)RemoveAnimator:(long long)arg1;
- (long long)AddAnimator:(id)arg1;

@end

