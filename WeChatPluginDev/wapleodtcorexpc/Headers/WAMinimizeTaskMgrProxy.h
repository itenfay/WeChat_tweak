//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMinimizeTaskMgrProxy : NSObject
{
}

+ (void)addMinimizeTaskAnimationForActionSheetWithTaskData:(id)arg1 animationViewImage:(id)arg2 fromViewFrame:(struct CGRect)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)hasOutterContainerTask;
+ (id)taskSnapShotImageWithTaskData:(id)arg1;
+ (_Bool)updateTaskSnapshot:(id)arg1 WithTaskData:(id)arg2;
+ (_Bool)hasTask:(id)arg1 TaskBizKey:(id)arg2;
+ (id)getMinimizationTransitionDelegate;
+ (void)endPopBackGesture:(id)arg1 taskBizKey:(id)arg2 isComplete:(_Bool)arg3 pendingTaskContext:(id)arg4;
+ (_Bool)updatePopBackGesture:(id)arg1 TaskBizKey:(id)arg2 Progress:(double)arg3 TouchPoint:(struct CGPoint)arg4 ShouldCancel:(_Bool *)arg5;
+ (void)beginPopBackGesture:(id)arg1 TaskBizKey:(id)arg2;
+ (void)performMinimizeAnimation:(id)arg1 TaskBizKey:(id)arg2;
+ (void)onMinimizeAnimationEnd:(id)arg1 TaskBizKey:(id)arg2;
+ (void)onMinimizeAnimationBegin:(id)arg1 TaskBizKey:(id)arg2 FromFrame:(struct CGRect)arg3 toFrame:(struct CGRect)arg4 duration:(double)arg5;
+ (_Bool)isTaskInForground:(id)arg1 TaskBizKey:(id)arg2;
+ (_Bool)maximizeTask:(id)arg1 TaskBizKey:(id)arg2;
+ (_Bool)removeTask:(id)arg1 TaskBizKey:(id)arg2;
+ (_Bool)updateTask:(id)arg1 WithTaskData:(id)arg2;
+ (_Bool)tryAddTaskAndMinimize:(id)arg1 NotiDelegate:(id)arg2;
+ (id)getTask:(id)arg1 TaskBizKey:(id)arg2;
+ (_Bool)checkTaskMaxCountOrShowTipsBeforeAdd:(id)arg1 pendingTaskContext:(id)arg2;
+ (_Bool)canShowMinimizeOperation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

