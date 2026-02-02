//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeTaskData, NSString;
@protocol MinimizeTransitionInterface, UIViewControllerAnimatedTransitioning;

@protocol MinimizationTransitionControllerDelegate <NSObject>
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;

@optional
- (id <UIViewControllerAnimatedTransitioning>)customMinimizeTransitionForTaskData:(MinimizeTaskData *)arg1 transitionContext:(id <MinimizeTransitionInterface>)arg2;
- (id <UIViewControllerAnimatedTransitioning>)customMaximizeTransitionForTaskData:(MinimizeTaskData *)arg1 transitionContext:(id <MinimizeTransitionInterface>)arg2;
- (void)minimizationInteractivePopGestureRecognizerDidEndWithCompletion:(_Bool)arg1;
- (_Bool)shouldBlockMinimizationEntryInInteractivePop;
- (_Bool)minimizationInteractivePopGestureRecognizerShouldBegin;
- (NSString *)currentMinimizationTaskBizKey;
- (NSString *)currentMinimizationTaskBizName;
@end

