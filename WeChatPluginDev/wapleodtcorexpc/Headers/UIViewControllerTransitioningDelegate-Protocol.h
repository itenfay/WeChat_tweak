//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIPresentationController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol UIViewControllerTransitioningDelegate <NSObject>

@optional
- (UIPresentationController *)presentationControllerForPresentedViewController:(UIViewController *)arg1 presentingViewController:(UIViewController *)arg2 sourceViewController:(UIViewController *)arg3;
- (id <UIViewControllerInteractiveTransitioning>)interactionControllerForDismissal:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (id <UIViewControllerInteractiveTransitioning>)interactionControllerForPresentation:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (id <UIViewControllerAnimatedTransitioning>)animationControllerForDismissedController:(UIViewController *)arg1;
- (id <UIViewControllerAnimatedTransitioning>)animationControllerForPresentedController:(UIViewController *)arg1 presentingController:(UIViewController *)arg2 sourceController:(UIViewController *)arg3;
@end

