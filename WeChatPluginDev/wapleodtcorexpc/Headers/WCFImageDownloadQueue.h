//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface WCFImageDownloadQueue : NSObject
{
    NSLock *_lock;
    long long _maxConcurrentCount;
    long long _executingCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_operations;
    NSMutableDictionary *_dict;
    long long _maxPreloadCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxPreloadCount; // @synthesize maxPreloadCount=_maxPreloadCount;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) NSMutableOrderedSet *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long executingCount; // @synthesize executingCount=_executingCount;
@property(nonatomic) long long maxConcurrentCount; // @synthesize maxConcurrentCount=_maxConcurrentCount;
- (void)run;
- (id)removeAndSchedule:(id)arg1;
- (void)schedule;
- (void)asyncRemoveOperation:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)operationForKey:(id)arg1;
- (void)removeFromDict:(id)arg1;
- (void)addToDict:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)init;

@end

