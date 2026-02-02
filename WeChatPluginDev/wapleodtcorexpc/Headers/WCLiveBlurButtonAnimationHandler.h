//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CALayer, NSString;

@interface WCLiveBlurButtonAnimationHandler : NSObject
{
    CALayer *_animationLayer;
    NSString *_currentAnimationKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentAnimationKey; // @synthesize currentAnimationKey=_currentAnimationKey;
@property(nonatomic) __weak CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startReduceAnimation:(id)arg1;
- (void)startEnLargeAnimation:(id)arg1;
- (void)startEnlargeReduceAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

