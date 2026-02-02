//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface WCTransitionExtendAnimationEnd : NSObject
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    struct CGRect _resultRect;
}

+ (id)animationResultRect:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) struct CGRect resultRect; // @synthesize resultRect=_resultRect;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

