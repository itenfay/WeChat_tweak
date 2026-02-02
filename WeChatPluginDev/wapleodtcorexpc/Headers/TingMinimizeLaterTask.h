//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TingMinimizeLaterTask
{
}

+ (id)reportParamFromListenItem:(id)arg1;
+ (id)parseItemFromTaskData:(id)arg1;
+ (void)updateTaskSnapshotWithCoverImage:(id)arg1 taskData:(id)arg2;
+ (void)updateTaskSnapshotWithListemItem:(id)arg1 taskData:(id)arg2;
+ (id)minimizeTaskDataWithListenItem:(id)arg1 scene:(long long)arg2;
+ (void)addMinimizeTaskWithListenItem:(id)arg1 scene:(long long)arg2 fromView:(id)arg3;
+ (void)removeMinimizeTaskWithListenItem:(id)arg1;
+ (_Bool)enableListenMinimizeTask;
- (void)updateSnapshotIfNeed:(id)arg1 preferredSize:(struct CGSize)arg2;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;

@end

