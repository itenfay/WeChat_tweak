//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class MMUIViewController, NSObject;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerTransitioningDelegate;

@protocol MMFlutterViewControllerAnimatedTransitioning <UIViewControllerAnimatedTransitioning>
- (_Bool)updateOperation:(long long)arg1;
- (void)setupViewController:(MMUIViewController *)arg1;

@optional
- (_Bool)hasCustomPopTransition;
- (NSObject<UIViewControllerInteractiveTransitioning> *)getInteractiveTransition;
- (NSObject<UIViewControllerTransitioningDelegate> *)getTransition;
@end

