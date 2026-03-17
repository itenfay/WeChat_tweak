//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizePendingTaskContext, MinimizeTaskData, NSObject, NSString, UIImage;
@protocol IMinimizeTaskDelegateInterface, MinimizeTransitionInterface;

@protocol IWAMinimizeTaskMgrService <NSObject>

@optional
+ (_Bool)hasOutterContainerTask;
+ (UIImage *)taskSnapShotImageWithTaskData:(MinimizeTaskData *)arg1;
+ (_Bool)updateTaskSnapshot:(UIImage *)arg1 WithTaskData:(MinimizeTaskData *)arg2;
+ (_Bool)hasTask:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
+ (id <MinimizeTransitionInterface>)getMinimizationTransitionDelegate;
+ (void)endPopBackGesture:(NSString *)arg1 taskBizKey:(NSString *)arg2 isComplete:(_Bool)arg3 pendingTaskContext:(MinimizePendingTaskContext *)arg4;
+ (_Bool)updatePopBackGesture:(NSString *)arg1 TaskBizKey:(NSString *)arg2 Progress:(double)arg3 TouchPoint:(struct CGPoint)arg4 ShouldCancel:(_Bool *)arg5;
+ (void)beginPopBackGesture:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
+ (void)performMinimizeAnimation:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
+ (void)onMinimizeAnimationEnd:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
+ (void)onMinimizeAnimationBegin:(NSString *)arg1 TaskBizKey:(NSString *)arg2 FromFrame:(struct CGRect)arg3 toFrame:(struct CGRect)arg4 duration:(double)arg5;
+ (_Bool)isTaskInForground:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
+ (_Bool)maximizeTask:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
+ (_Bool)removeTask:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
+ (_Bool)updateTask:(MinimizeTaskData *)arg1 WithTaskData:(MinimizeTaskData *)arg2;
+ (_Bool)tryAddTaskAndMinimize:(MinimizeTaskData *)arg1 NotiDelegate:(NSObject<IMinimizeTaskDelegateInterface> *)arg2;
+ (MinimizeTaskData *)getTask:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
+ (_Bool)checkTaskMaxCountOrShowTipsBeforeAdd:(MinimizeTaskData *)arg1 pendingTaskContext:(MinimizePendingTaskContext *)arg2;
+ (_Bool)canShowMinimizeOperation;
+ (void)addMinimizeTaskAnimationForActionSheetWithTaskData:(MinimizeTaskData *)arg1 animationViewImage:(UIImage *)arg2 fromViewFrame:(struct CGRect)arg3 completion:(void (^)(_Bool))arg4;
@end

