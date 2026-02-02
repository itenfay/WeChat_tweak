//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;

@interface WCFinderTaskStack : NSObject
{
    struct deque<WCFinderTaskLIFOTask *, std::allocator<WCFinderTaskLIFOTask *>> _deque;
    NSRecursiveLock *_recursiveLock;
    _Bool _ignoreNonEssentialTasks;
    unsigned long long _maxNumberOfTasks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxNumberOfTasks; // @synthesize maxNumberOfTasks=_maxNumberOfTasks;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N,V_maxNumberOfTasks

- (id)createFinderTaskLIFOTaskMake:(CDUnknownBlockType)arg1 priority:(unsigned long long)arg2 asyncEnd:(_Bool)arg3;
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
@property(readonly) Class superclass;

@end

