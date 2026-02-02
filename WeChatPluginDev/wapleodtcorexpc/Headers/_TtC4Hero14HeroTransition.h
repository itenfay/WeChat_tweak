//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC4Hero14HeroTransition : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *defaultAnimation;
    MISSING_TYPE *containerColor;
    MISSING_TYPE *isUserInteractionEnabled;
    MISSING_TYPE *viewOrderingStrategy;
    MISSING_TYPE *defaultAnimationDirectionStrategy;
    MISSING_TYPE *state;
    MISSING_TYPE *isPresenting;
    MISSING_TYPE *container;
    MISSING_TYPE *transitionContainer;
    MISSING_TYPE *completionCallback;
    MISSING_TYPE *beginCallback;
    MISSING_TYPE *processors;
    MISSING_TYPE *animators;
    MISSING_TYPE *plugins;
    MISSING_TYPE *animatingFromViews;
    MISSING_TYPE *animatingToViews;
    MISSING_TYPE *toViewController;
    MISSING_TYPE *fromViewController;
    MISSING_TYPE *context;
    MISSING_TYPE *progressUpdateObservers;
    MISSING_TYPE *totalDuration;
    MISSING_TYPE *progress;
    MISSING_TYPE *$__lazy_storage_$_progressRunner;
    MISSING_TYPE *transitionContext;
    MISSING_TYPE *fullScreenSnapshot;
    MISSING_TYPE *forceNotInteractive;
    MISSING_TYPE *forceFinishing;
    MISSING_TYPE *startingProgress;
    MISSING_TYPE *inNavigationController;
    MISSING_TYPE *inTabBarController;
}

- (void).cxx_destruct;
- (id)init;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(_Bool)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
@property(nonatomic, readonly) _Bool wantsInteractiveStart;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)tabBarController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;

@end

