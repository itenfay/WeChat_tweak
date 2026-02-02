//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizePendingTaskContext, MinimizeTaskData, MinimizeTaskOpenContext, UIViewController;

@protocol IMinimizeTaskDelegateInterface <NSObject>

@optional
- (_Bool)isMinimizeTaskPlaying:(MinimizeTaskData *)arg1;
- (void)onOuterContentTaskFoldStateChanged:(MinimizeTaskData *)arg1 fold:(_Bool)arg2;
- (void)onOuterContentTaskRemoved:(MinimizeTaskData *)arg1;
- (void)onOutContentTask:(MinimizeTaskData *)arg1 replacedByAnotherTaskData:(MinimizeTaskData *)arg2;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(MinimizePendingTaskContext *)arg1;
- (UIViewController *)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(MinimizeTaskData *)arg1;
- (void)onContainerSizeDidChange:(MinimizeTaskData *)arg1 fromSize:(struct CGSize)arg2 toSize:(struct CGSize)arg3;
- (void)onLeaveTaskDoneAndWillEnterAnother:(MinimizeTaskData *)arg1;
- (void)onPositiveTaskCloseBtnClick:(MinimizeTaskData *)arg1 CloseFromState:(_Bool)arg2;
- (void)onRecentUsedTaskItemExposed:(MinimizeTaskData *)arg1;
- (void)onRemoveRecentUsedTask:(MinimizeTaskData *)arg1;
- (void)onEnterRecentUsedTask:(MinimizeTaskData *)arg1;
- (void)updateSnapshotIfNeed:(MinimizeTaskData *)arg1 preferredSize:(struct CGSize)arg2;
- (void)onMinimizedTaskItemExposed:(MinimizeTaskData *)arg1;
- (void)onRemoveMinimizedTask:(MinimizeTaskData *)arg1;
- (_Bool)onEnterMinimizedTask:(MinimizeTaskData *)arg1 openContext:(MinimizeTaskOpenContext *)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRecoverTaskData:(MinimizeTaskData *)arg1;
@end

