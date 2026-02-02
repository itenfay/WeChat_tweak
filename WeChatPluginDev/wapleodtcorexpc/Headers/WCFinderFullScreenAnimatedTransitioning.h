//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, UIViewController;

@interface WCFinderFullScreenAnimatedTransitioning : NSObject
{
    unsigned int _transitioningType;
    UIPercentDrivenInteractiveTransition *_interactive;
    UIViewController *_animatedTransitionRespondViewController;
    UIPanGestureRecognizer *_gesture;
}

+ (id)animatorWithGesture:(id)arg1 transitioningType:(unsigned int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(nonatomic) unsigned int transitioningType; // @synthesize transitioningType=_transitioningType;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController=_animatedTransitionRespondViewController;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactive; // @synthesize interactive=_interactive;
- (double)__velocityWithSender:(id)arg1;
- (double)__progressWithSender:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)handlePanGesture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

