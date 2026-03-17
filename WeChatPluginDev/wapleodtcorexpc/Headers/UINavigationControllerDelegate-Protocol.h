//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UINavigationController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol UINavigationControllerDelegate <NSObject>

@optional
- (id <UIViewControllerAnimatedTransitioning>)navigationController:(UINavigationController *)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(UIViewController *)arg3 toViewController:(UIViewController *)arg4;
- (id <UIViewControllerInteractiveTransitioning>)navigationController:(UINavigationController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(UINavigationController *)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(UINavigationController *)arg1;
- (void)navigationController:(UINavigationController *)arg1 didShowViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)navigationController:(UINavigationController *)arg1 willShowViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end

