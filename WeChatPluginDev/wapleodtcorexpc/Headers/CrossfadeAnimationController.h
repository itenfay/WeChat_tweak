//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TransitioningAnimationDelegate;

@interface CrossfadeAnimationController : NSObject
{
    id <TransitioningAnimationDelegate> m_delegate;
    _Bool _reverse;
    _Bool _isDismiss;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDismiss; // @synthesize isDismiss=_isDismiss;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(nonatomic) __weak id <TransitioningAnimationDelegate> delegate; // @synthesize delegate=m_delegate;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (double)transitionDuration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

