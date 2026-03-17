//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, UITabBarController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol UITabBarControllerDelegate <NSObject>

@optional
- (id <UIViewControllerAnimatedTransitioning>)tabBarController:(UITabBarController *)arg1 animationControllerForTransitionFromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;
- (id <UIViewControllerInteractiveTransitioning>)tabBarController:(UITabBarController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (long long)tabBarControllerPreferredInterfaceOrientationForPresentation:(UITabBarController *)arg1;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(UITabBarController *)arg1;
- (void)tabBarController:(UITabBarController *)arg1 didEndCustomizingViewControllers:(NSArray *)arg2 changed:(_Bool)arg3;
- (void)tabBarController:(UITabBarController *)arg1 willEndCustomizingViewControllers:(NSArray *)arg2 changed:(_Bool)arg3;
- (void)tabBarController:(UITabBarController *)arg1 willBeginCustomizingViewControllers:(NSArray *)arg2;
- (void)tabBarController:(UITabBarController *)arg1 didSelectViewController:(UIViewController *)arg2;
- (_Bool)tabBarController:(UITabBarController *)arg1 shouldSelectViewController:(UIViewController *)arg2;
@end

