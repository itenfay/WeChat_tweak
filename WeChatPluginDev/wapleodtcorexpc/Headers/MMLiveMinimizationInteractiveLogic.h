//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveCustomTransition, MinimizeNewTransitionController, NSString, UIScreenEdgePanGestureRecognizer, UIView, UIViewController;
@protocol MMLiveCustomTransitionDelegate, MMLiveMinimizationInteractiveDelegate;

@interface MMLiveMinimizationInteractiveLogic : NSObject
{
    _Bool _hasActivateMinimizeArea;
    id <MMLiveMinimizationInteractiveDelegate> _minimizationInteractiveDelegate;
    id <MMLiveCustomTransitionDelegate> _liveCustomTransitionDelegate;
    MinimizeNewTransitionController *_transitionController;
    MMLiveCustomTransition *_customTransition;
    UIView *_minimizeContainerView;
}

+ (id)minimizeInteractiveLogic;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *minimizeContainerView; // @synthesize minimizeContainerView=_minimizeContainerView;
@property(retain, nonatomic) MMLiveCustomTransition *customTransition; // @synthesize customTransition=_customTransition;
@property(retain, nonatomic) MinimizeNewTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(nonatomic) __weak id <MMLiveCustomTransitionDelegate> liveCustomTransitionDelegate; // @synthesize liveCustomTransitionDelegate=_liveCustomTransitionDelegate;
@property(nonatomic) __weak id <MMLiveMinimizationInteractiveDelegate> minimizationInteractiveDelegate; // @synthesize minimizationInteractiveDelegate=_minimizationInteractiveDelegate;
- (void)onMinimizeTransitionDidEndWithCompleted:(_Bool)arg1;
- (void)onMinimizeTransitionWillEndWithCompleted:(_Bool)arg1;
- (void)onMinimizeAnimationRecoverDone;
- (void)onMinimizeAnimationCompleteDone;
- (void)onMinimizeTransitionWillEnd:(unsigned int)arg1 isComplete:(_Bool)arg2;
- (void)onMinimizeTransitionBegin:(unsigned int)arg1;
- (id)getMinimizationTransitionContext;
- (_Bool)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (_Bool)shouldBeginMinimizeCircleInteraction;
- (id)getPresentingViewControllerClassName:(id)arg1;
- (_Bool)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
@property(readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGestureRecognizer;
@property(nonatomic) __weak UIViewController *attachViewController; // @dynamic attachViewController;
- (id)getDismissLeftToRightInteractionControllerForDismissal:(id)arg1;
- (id)getDismissLeftToRightAnimationControllerForDismissedController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

