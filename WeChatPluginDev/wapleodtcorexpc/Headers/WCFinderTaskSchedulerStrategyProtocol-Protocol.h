//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderTaskSchedulerStrategyProtocol <NSObject>
- (unsigned long long)numberOfTasks;
- (_Bool)empty;
- (void)ignoreNonEssentialTasks:(_Bool)arg1;
- (void)clearTasks;
- (void)executeTask;
- (void)addTask:(void (^)(void (^)(void)))arg1 priority:(long long)arg2 asyncEnd:(_Bool)arg3;

@optional
@property(nonatomic) unsigned long long maxNumberOfTasks;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@end

