//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIPresentationController, UIView, UIViewController;
@protocol UIViewControllerAnimatedTransitioning;

@protocol TransitioningAnimationDelegate <NSObject>

@optional
- (id <UIViewControllerAnimatedTransitioning>)getAnimationControllerForDismissedController:(UIViewController *)arg1;
- (UIPresentationController *)presentationControllerForPresentedViewController:(UIViewController *)arg1 presentingViewController:(UIViewController *)arg2 sourceViewController:(UIViewController *)arg3;
- (void)showTransitioningAnimationCompleted;
- (_Bool)removeFromViewAfterTransition;
- (void)hideVCAnimationWillCompleted:(void (^)(void))arg1;
- (void)hideVCAnimation;
- (void)showVCAnimation;
- (_Bool)isOrientationChanged;
- (UIView *)snapShotImgView;
@end

