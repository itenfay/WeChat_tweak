//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveEnterSqaurePanGestureHandler, MMFinderLiveEnterSqaureTransitionContext, NSString;
@protocol MMFinderLiveEnterAndExitSqaureTransitionControllerDelegatge;

@interface MMFinderLiveEnterSqaureTransitionController : NSObject
{
    _Bool _isAnimating;
    MMFinderLiveEnterSqaurePanGestureHandler *_handler;
    id <MMFinderLiveEnterAndExitSqaureTransitionControllerDelegatge> _delegate;
    MMFinderLiveEnterSqaureTransitionContext *_context;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) MMFinderLiveEnterSqaureTransitionContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <MMFinderLiveEnterAndExitSqaureTransitionControllerDelegatge> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveEnterSqaurePanGestureHandler *handler; // @synthesize handler=_handler;
- (void)animationDidEnd:(_Bool)arg1;
- (id)animationControllerForTrasitionType:(unsigned long long)arg1 fromVC:(id)arg2 toVC:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)performRecoverAnimator;
- (void)performAniamtorDelay:(double)arg1;
- (void)performAnimationWithComplete:(_Bool)arg1 delay:(double)arg2;
- (void)prepareForAnimation;
- (void)onEnterSqaureInteractiveTransitionDidEndHandle:(_Bool)arg1;
- (void)onEnterSqaureInteractiveTransitionDidEnd:(id)arg1 isComplete:(_Bool)arg2 isPop:(_Bool)arg3;
- (void)onEnterSqaureInteractiveTransitionWillEnd:(id)arg1 isComplete:(_Bool)arg2 isPop:(_Bool)arg3;
- (void)onEnterSqaureInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(struct CGPoint)arg3 isPop:(_Bool)arg4;
- (void)onWillExitSqaureInteractiveTransitionBeginHandle:(_Bool)arg1;
- (void)onWillEnterSqaureInteractiveTransitionBeginHandle:(_Bool)arg1;
- (void)onEnterSqaureInteractiveTransitionBegin:(id)arg1 isPop:(_Bool)arg2;
- (void)onEnterSquareContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

