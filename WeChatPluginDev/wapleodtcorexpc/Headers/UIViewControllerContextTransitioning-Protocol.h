//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView, UIViewController;

@protocol UIViewControllerContextTransitioning <NSObject>
@property(readonly, nonatomic) struct CGAffineTransform targetTransform;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) _Bool transitionWasCancelled;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
@property(readonly, nonatomic) UIView *containerView;
- (struct CGRect)finalFrameForViewController:(UIViewController *)arg1;
- (struct CGRect)initialFrameForViewController:(UIViewController *)arg1;
- (UIView *)viewForKey:(NSString *)arg1;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)pauseInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
@end

