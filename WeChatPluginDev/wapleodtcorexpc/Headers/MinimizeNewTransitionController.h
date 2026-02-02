//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizationTransitionContext, MinimizeEdgeGestureHandler, NSString, UIScreenEdgePanGestureRecognizer, UIViewController;
@protocol MinimizeNewTransitionControllerDelegate, UIViewControllerAnimatedTransitioning;

@interface MinimizeNewTransitionController : NSObject
{
    _Bool _isMinimizeCircleInteracting;
    _Bool _isHitMinimizeCircleArea;
    _Bool _isPerformingExtraAnimation;
    id <MinimizeNewTransitionControllerDelegate> _delegate;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
    UIViewController *_vc;
    id <UIViewControllerAnimatedTransitioning> _currentTransition;
    UIViewController *_taskViewController;
    MinimizeEdgeGestureHandler *_edgeGesHandler;
    MinimizationTransitionContext *_transitioningContext;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPerformingExtraAnimation; // @synthesize isPerformingExtraAnimation=_isPerformingExtraAnimation;
@property(nonatomic) _Bool isHitMinimizeCircleArea; // @synthesize isHitMinimizeCircleArea=_isHitMinimizeCircleArea;
@property(nonatomic) _Bool isMinimizeCircleInteracting; // @synthesize isMinimizeCircleInteracting=_isMinimizeCircleInteracting;
@property(retain, nonatomic) MinimizationTransitionContext *transitioningContext; // @synthesize transitioningContext=_transitioningContext;
@property(retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler; // @synthesize edgeGesHandler=_edgeGesHandler;
@property(retain, nonatomic) UIViewController *taskViewController; // @synthesize taskViewController=_taskViewController;
@property(nonatomic) __weak id <UIViewControllerAnimatedTransitioning> currentTransition; // @synthesize currentTransition=_currentTransition;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
@property(nonatomic) __weak id <MinimizeNewTransitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isInteractiveTransitioning;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (unsigned int)decideTransitionTypeWithAnimationController:(id)arg1;
- (void)onMinimizationNewTransitionEnd:(id)arg1 withContext:(id)arg2 isComplete:(_Bool)arg3;
- (void)onMinimizationNewTransitionStart:(id)arg1 withContext:(id)arg2;
- (void)performRecoverMinimizeAnimiation;
- (void)performCompleteMinimizeAnimation;
- (double)transitionProgressConvertedFromGestureProgress:(double)arg1;
- (void)onEdgeInteractiveTransitionDidEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onEdgeInteractiveTransitionWillEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onEdgeInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(struct CGPoint)arg3;
- (void)onEdgeInteractiveTransitionBegin:(id)arg1;
- (id)animationControllerForTrasitionType:(unsigned int)arg1 fromVC:(id)arg2 toVC:(id)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

