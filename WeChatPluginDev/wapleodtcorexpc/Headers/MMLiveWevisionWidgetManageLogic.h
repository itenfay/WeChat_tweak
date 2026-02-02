//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTask, MMLiveTaskId, NSMutableArray, NSRecursiveLock, OrderedDictionary;

@interface MMLiveWevisionWidgetManageLogic : NSObject
{
    MMLiveTaskId *_taskId;
    OrderedDictionary *_widgetDict;
    NSRecursiveLock *_widgetDictLock;
    NSMutableArray *_clearTaskList;
    NSRecursiveLock *_clearTaskListLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *clearTaskListLock; // @synthesize clearTaskListLock=_clearTaskListLock;
@property(retain, nonatomic) NSMutableArray *clearTaskList; // @synthesize clearTaskList=_clearTaskList;
@property(retain, nonatomic) NSRecursiveLock *widgetDictLock; // @synthesize widgetDictLock=_widgetDictLock;
@property(retain, nonatomic) OrderedDictionary *widgetDict; // @synthesize widgetDict=_widgetDict;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)increaseUpdatePriorForExistRenderTasksFromBase:(int)arg1;
- (void)changeRenderTaskToLeastPrior:(id)arg1;
- (void)changeRenderTaskToMostPrior:(id)arg1;
- (id)createRenderTaskForWidgetUseCache:(id)arg1;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (void)clear;
- (id)getWevisionWidgetList;
- (void)removeWevisionWidgetWithId:(id)arg1;
- (void)removeWevisionWidget:(id)arg1;
- (void)insertWevisionWidgetToBack:(id)arg1;
- (void)addWevisionWidget:(id)arg1;
- (void)initDefaultData;
- (id)initWithTaskId:(id)arg1;

@end

