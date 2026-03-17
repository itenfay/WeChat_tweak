//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoiceRecordAnimationUtility : NSObject
{
}

+ (id)getAnimationGroupFromAnimations:(id)arg1 duration:(double)arg2;
+ (id)getPositionAnimationFromValue:(struct CGPoint)arg1 toValue:(struct CGPoint)arg2 duration:(double)arg3 timingFunction:(id)arg4;
+ (id)getOpacityAnimationFromValue:(double)arg1 toValue:(double)arg2 duration:(double)arg3 timingFunction:(id)arg4;
+ (id)getPathAnimationWithFromPath:(id)arg1 toPath:(id)arg2 duration:(double)arg3 timingFunction:(id)arg4;
+ (id)getBasicAnimation:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 duration:(double)arg4 timingFuction:(id)arg5;

@end

