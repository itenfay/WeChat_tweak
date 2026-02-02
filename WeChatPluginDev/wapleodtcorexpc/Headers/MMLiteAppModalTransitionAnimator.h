//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class NSString, UIPanGestureRecognizer, UIViewPropertyAnimator;

@interface MMLiteAppModalTransitionAnimator : UIPercentDrivenInteractiveTransition
{
    unsigned long long _transitionType;
    double _velocityThreshold;
    CDUnknownBlockType _transitionComplete;
    UIPanGestureRecognizer *_panGesture;
    UIViewPropertyAnimator *_animator;
    unsigned long long _panGestureType;
    struct CGRect _presentedFinianFrame;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long panGestureType; // @synthesize panGestureType=_panGestureType;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(copy, nonatomic) CDUnknownBlockType transitionComplete; // @synthesize transitionComplete=_transitionComplete;
@property(nonatomic) struct CGRect presentedFinianFrame; // @synthesize presentedFinianFrame=_presentedFinianFrame;
@property(nonatomic) double velocityThreshold; // @synthesize velocityThreshold=_velocityThreshold;
@property(nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
- (void)handlePanGesture:(id)arg1;
- (void)setPanGesture:(id)arg1 forType:(unsigned long long)arg2;
- (_Bool)wantsInteractiveStart;
- (double)transitionDuration:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (void)setupAnimatorForTransition:(id)arg1;
- (struct CGRect)finalFrameForPresentedView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

