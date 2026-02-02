//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class NSString, UIPanGestureRecognizer, WCSplitDetailPresentationController, WCSplitPropertyAnimator;
@protocol WCSplitBaseTransitionDelegate, WCSplitDetailTransitionDelegate;

@interface WCSplitDetailTransition : UIPercentDrivenInteractiveTransition
{
    _Bool _forceFullScreen;
    _Bool _animatedShow;
    _Bool _animatedDismiss;
    _Bool _isPresent;
    id <WCSplitDetailTransitionDelegate> _delegate;
    id <WCSplitBaseTransitionDelegate> _baseDelegate;
    long long _showTransitionType;
    double _primaryWidth;
    WCSplitDetailPresentationController *_presentController;
    WCSplitPropertyAnimator *_animator;
    UIPanGestureRecognizer *_panGesture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) WCSplitPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCSplitDetailPresentationController *presentController; // @synthesize presentController=_presentController;
@property(nonatomic) _Bool animatedDismiss; // @synthesize animatedDismiss=_animatedDismiss;
@property(nonatomic) _Bool animatedShow; // @synthesize animatedShow=_animatedShow;
@property(nonatomic) _Bool forceFullScreen; // @synthesize forceFullScreen=_forceFullScreen;
@property(nonatomic) double primaryWidth; // @synthesize primaryWidth=_primaryWidth;
@property(nonatomic) long long showTransitionType; // @synthesize showTransitionType=_showTransitionType;
@property(nonatomic) __weak id <WCSplitBaseTransitionDelegate> baseDelegate; // @synthesize baseDelegate=_baseDelegate;
@property(nonatomic) __weak id <WCSplitDetailTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (_Bool)wantsInteractiveStart;
- (_Bool)isInSplitMode;
- (_Bool)isForceFullScreen;
- (void)onDetailViewControllerDidDismissed;
- (void)onDetailViewControllerDidChangeMode:(_Bool)arg1;
- (void)onDetailViewControllerWillChangeMode:(_Bool)arg1;
- (void)onPresentingEndAppearance;
- (void)onPresentingBeginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isAnimateEnable;
- (long long)currTransitionType;
- (void)setupDismissAnimation:(id)arg1;
- (void)setupShowAnimation:(id)arg1;
- (void)setupAnimator:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (double)transitionDuration:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)updateContentLayout;
- (void)setupInteractiveGesture:(id)arg1;
- (void)updatePresentedFrame:(struct CGRect)arg1 displayMode:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

