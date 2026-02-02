//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UINavigationController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol WCFinderFeedListTransitionHelperSwizzleMethods <NSObject>
- (id <UIViewControllerInteractiveTransitioning>)finderSwizzleNavigationController:(UINavigationController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (id <UIViewControllerAnimatedTransitioning>)finderSwizzleNavigationController:(UINavigationController *)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(UIViewController *)arg3 toViewController:(UIViewController *)arg4;
- (void)finderSwizzleViewDidAppear:(_Bool)arg1;
@end

