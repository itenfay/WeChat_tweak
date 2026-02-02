//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAAnimation;

@interface MJCoreAnimationMaker : NSObject
{
    CAAnimation *_animation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) CDUnknownBlockType fillMode;
@property(readonly, nonatomic) CDUnknownBlockType autoreverses;
@property(readonly, nonatomic) CDUnknownBlockType speed;
@property(readonly, nonatomic) CDUnknownBlockType duration;
@property(readonly, nonatomic) CDUnknownBlockType repeatDuration;
@property(readonly, nonatomic) CDUnknownBlockType repeatCount;
@property(readonly, nonatomic) CDUnknownBlockType timeOffset;
@property(readonly, nonatomic) CDUnknownBlockType beginTime;
@property(readonly, nonatomic) CDUnknownBlockType timingFunction;
@property(readonly, nonatomic) CDUnknownBlockType removedOnCompletion;
@property(readonly, nonatomic) CDUnknownBlockType byValue;
@property(readonly, nonatomic) CDUnknownBlockType toValue;
@property(readonly, nonatomic) CDUnknownBlockType fromValue;
@property(readonly, nonatomic) CDUnknownBlockType animations;

@end

