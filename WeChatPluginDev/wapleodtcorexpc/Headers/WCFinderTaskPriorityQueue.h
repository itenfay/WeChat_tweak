//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;

@interface WCFinderTaskPriorityQueue : NSObject
{
    struct priority_queue<WCFinderTaskPQTask *, std::vector<WCFinderTaskPQTask *>, WCFinderTaskPQCMP> _queue;
    NSRecursiveLock *_recursiveLock;
    _Bool _ignoreNonEssentialTasks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createFinderTaskPQTask:(CDUnknownBlockType)arg1 priority:(unsigned long long)arg2 time:(double)arg3 asyncEnd:(_Bool)arg4;
- (void)ignoreNonEssentialTasks:(_Bool)arg1;
- (void)clearTasks;
- (void)removeTopTask;
- (void)executeTask;
- (void)addTask:(CDUnknownBlockType)arg1 priority:(long long)arg2 asyncEnd:(_Bool)arg3;
- (unsigned long long)numberOfTasks;
- (_Bool)empty;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long maxNumberOfTasks;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly) Class superclass;

@end

