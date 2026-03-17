//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MiniTaskTransitionContext, UIScreenEdgePanGestureRecognizer, WAWebViewController;

@protocol WAMinimizeDelegate <NSObject>

@optional
- (_Bool)updateMinimizeSnapShotImg;
- (void)onMinimizeInteractiveTransitionDidEnd:(WAWebViewController *)arg1 isComplete:(_Bool)arg2 panGesture:(UIScreenEdgePanGestureRecognizer *)arg3 miniTaskVCAnimationContext:(MiniTaskTransitionContext *)arg4;
- (void)onMinimizeInteractiveTransitionWillEnd:(WAWebViewController *)arg1 isComplete:(_Bool)arg2 panGesture:(UIScreenEdgePanGestureRecognizer *)arg3 percent:(double)arg4;
- (void)onMinimizeInteractiveTransitionChange:(WAWebViewController *)arg1 withProgress:(double)arg2 panGesture:(UIScreenEdgePanGestureRecognizer *)arg3;
- (void)onMinimizeInteractiveTransitionBegin:(WAWebViewController *)arg1 panGesture:(UIScreenEdgePanGestureRecognizer *)arg2;
- (void)unminimizedCurTask;
- (_Bool)minimizedCurTaskManually:(_Bool)arg1 generateType:(unsigned long long)arg2;
- (void)tryMinimizeCurTaskIfNeededInBackground;
- (void)tryMinimizeCurTaskIfNeeded;
- (_Bool)canMinimizedCurTaskOrShowTips;
- (_Bool)isCurTaskMinimized;
- (_Bool)isCurTaskManuallyMinimized;
- (_Bool)isCurTaskSupportMinimization;
@end

