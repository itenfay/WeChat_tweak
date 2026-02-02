//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIHalfScreenViewController, MMUIHalfScreenViewPresentationController, NSString;
@protocol MMUIHalfScreenViewPresentationAnimateTransitionDelegate;

@interface MMUIHalfScreenViewPresentationAnimateTransition : NSObject
{
    _Bool m_isPresented;
    _Bool _isResetPresentedViewFrame;
    id <MMUIHalfScreenViewPresentationAnimateTransitionDelegate> _m_delegate;
    double _presentedHeight;
    MMUIHalfScreenViewPresentationController *_presentationController;
    MMUIHalfScreenViewController *_presentedController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIHalfScreenViewController *presentedController; // @synthesize presentedController=_presentedController;
@property(nonatomic) __weak MMUIHalfScreenViewPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(nonatomic) double presentedHeight; // @synthesize presentedHeight=_presentedHeight;
@property(nonatomic) _Bool isResetPresentedViewFrame; // @synthesize isResetPresentedViewFrame=_isResetPresentedViewFrame;
@property(nonatomic) __weak id <MMUIHalfScreenViewPresentationAnimateTransitionDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)setBottomViewHeight:(double)arg1;
- (void)animationForDismissedView:(id)arg1;
- (void)animationForPresentedView:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

