//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizationTransitionContext, MinimizeNewTransitionController;
@protocol UIViewControllerAnimatedTransitioning;

@protocol MinimizeNewTransitionControllerDelegate <NSObject>

@optional
- (void)onMinimizeTransitionBeginWithoutContext;
- (void)onMinimizeTransitionChanged:(double)arg1 translation:(struct CGPoint)arg2;
- (id <UIViewControllerAnimatedTransitioning>)customDefaultAnimationForTransition:(unsigned int)arg1;
- (void)onMinimizeAnimationRecoverDone;
- (void)onMinimizeAnimationCompleteDone;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(_Bool)arg2;
- (void)onMinimizeTransitionWillEnd:(unsigned int)arg1 isComplete:(_Bool)arg2;
- (void)onMinimizeTransitionBegin:(unsigned int)arg1;
- (MinimizationTransitionContext *)getMinimizationTransitionContext;
- (void)onFinishMinimizeCircleInteraction:(_Bool)arg1;
- (_Bool)shouldBeginMinimizeCircleInteraction;
- (_Bool)isSupportScreenEdgeSwipeFromLeftToRight:(MinimizeNewTransitionController *)arg1;
- (_Bool)isSupportNavigationInteractive;
- (_Bool)useNewMinimizeTransition:(MinimizeNewTransitionController *)arg1 withTransitionType:(unsigned int)arg2;
@end

