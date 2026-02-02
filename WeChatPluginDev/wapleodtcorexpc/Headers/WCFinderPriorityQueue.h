//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCFinderPriorityQueue : NSObject
{
    NSMutableArray *_heap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *heap; // @synthesize heap=_heap;
- (void)removeExpiredTasks;
- (void)removeTaskByGroupId:(id)arg1;
- (unsigned long long)taskCount;
- (void)removeTaskById:(id)arg1;
- (id)getTaskById:(id)arg1;
- (_Bool)contains:(id)arg1;
- (int)compare:(id)arg1 with:(id)arg2;
- (void)sink:(long long)arg1;
- (void)swim:(long long)arg1;
- (id)popMax;
- (void)insert:(id)arg1;
- (id)init;

@end

