//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAAnimation, CALayer;

@interface MMLiveUIAnimationPerfMonitorRecord
{
    CALayer *_animationLayer;
    CAAnimation *_animation;
}

+ (double)getAnimationAbsoluteBeginTime:(id)arg1;
+ (id)tryGetAnimationState:(id)arg1;
+ (id)getMonitorUIAnimationKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak CAAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) __weak CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
- (id)getUniqueKey;
- (id)getRecordDesc;
- (_Bool)isAnimationValid;
- (void)parseAnimation;
- (struct CGRect)currPresentFrame;
- (id)initWithAnimationLayer:(id)arg1 animationView:(id)arg2 animation:(id)arg3;

@end

