//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, WCFinderTaskSchedulerStrategyProtocol;

@interface WCFinderTaskScheduler : NSObject
{
    id <WCFinderTaskSchedulerStrategyProtocol> _strategy;
    unsigned long long _frequencyCounter;
    _Bool _ignoreNonEssentialTasks;
    _Bool _paused;
    NSObject<OS_dispatch_queue> *_taskQueue;
    unsigned long long _maxNumberOfTasks;
    unsigned long long _executeNumber;
    unsigned long long _executeFrequency;
}

+ (id)schedulerWithStrategy:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool ignoreNonEssentialTasks; // @synthesize ignoreNonEssentialTasks=_ignoreNonEssentialTasks;
@property(nonatomic) unsigned long long executeFrequency; // @synthesize executeFrequency=_executeFrequency;
@property(nonatomic) unsigned long long executeNumber; // @synthesize executeNumber=_executeNumber;
@property(nonatomic) unsigned long long maxNumberOfTasks; // @synthesize maxNumberOfTasks=_maxNumberOfTasks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
- (void)executeTasks;
- (_Bool)empty;
- (unsigned long long)numberOfTasks;
- (void)clearTasks;
- (void)start;
- (void)addTask:(CDUnknownBlockType)arg1 priority:(long long)arg2 asyncEnd:(_Bool)arg3;
- (void)addTask:(CDUnknownBlockType)arg1;
- (id)initWithStrategy:(long long)arg1;
- (id)initWithStrategyObject:(id)arg1;

@end

