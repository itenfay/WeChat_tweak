//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizePendingTaskContext, MinimizeTaskContainerMoveContext, NSString, UIView;

@protocol MinimizeWindowDelegate <NSObject>
- (void)onRemoveCurrentOuterContentTask;
- (void)onAbsorbFloatingViewFoldStateChange:(_Bool)arg1;
- (void)minimizeWindowWillHide:(_Bool)arg1;
- (void)minimizeWindowWillShow:(_Bool)arg1;
- (void)onTaskCountExceedMaxWhenSlideToAddNewTask:(NSString *)arg1;
- (void)onOuterContentViewSizeDidChanged:(NSString *)arg1 From:(struct CGSize)arg2 To:(struct CGSize)arg3;
- (void)onExitTaskListPage:(unsigned long long)arg1 ExitType:(unsigned long long)arg2;
- (void)onEnterTaskList;
- (_Bool)hasSpecialTask;
- (_Bool)needShowMinimizeWindow;
- (void)onUpdateAbsorbFloatingViewLastPosition:(struct CGPoint)arg1 moveContext:(MinimizeTaskContainerMoveContext *)arg2;
- (void)onClearPendingTask:(MinimizePendingTaskContext *)arg1 bAddNewTask:(_Bool)arg2;
- (void)onRetryAddPendingTaskAfterUserDeleteOneTask:(MinimizePendingTaskContext *)arg1;
- (void)onPositiveTaskCloseBtnClick:(NSString *)arg1 CloseFromState:(_Bool)arg2;
- (void)onFloatingViewMoveToTrash:(NSString *)arg1;
- (void)onFloatingViewTap:(NSString *)arg1 FromFloatingView:(UIView *)arg2 WillEnterBackgroundTaskKey:(NSString *)arg3 EnterTaskScene:(unsigned int)arg4;
@end

