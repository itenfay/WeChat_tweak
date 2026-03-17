//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizationTransitionContext;
@protocol UIViewControllerAnimatedTransitioning;

@protocol MinimizationNewTransitionDelegate <NSObject>

@optional
- (void)onMinimizationNewTransitionEnd:(id <UIViewControllerAnimatedTransitioning>)arg1 withContext:(MinimizationTransitionContext *)arg2 isComplete:(_Bool)arg3;
- (void)onMinimizationNewTransitionStart:(id <UIViewControllerAnimatedTransitioning>)arg1 withContext:(MinimizationTransitionContext *)arg2;
@end

