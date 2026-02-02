//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMLiveQueue : NSObject
{
    unsigned long long _maxCount;
    NSMutableArray *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
- (void)enqueueEx:(id)arg1 tieBreakingBehavior:(unsigned long long)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectEnumerator;
- (id)arrayCopy;
- (void)clear;
- (void)remove:(id)arg1;
- (void)reprioritize:(id)arg1 tieBreakingBehavior:(unsigned long long)arg2;
- (void)reprioritize:(id)arg1;
- (unsigned long long)indexOf:(id)arg1;
- (_Bool)contains:(id)arg1;
- (id)dequeue;
- (id)peek;
- (_Bool)enqueue:(id)arg1 evictionBehavior:(unsigned long long)arg2 tieBreakingBehavior:(unsigned long long)arg3;
- (_Bool)enqueue:(id)arg1 evictionBehavior:(unsigned long long)arg2;
- (_Bool)enqueue:(id)arg1;
@property(readonly, nonatomic) unsigned long long defaultEvictionBehavior;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithPrioritizationPolicy:(CDUnknownBlockType)arg1 maxCount:(unsigned long long)arg2;
- (id)initWithPrioritizationPolicy:(CDUnknownBlockType)arg1;
- (id)initNonPrioritizedWithMaxCount:(unsigned long long)arg1;
- (id)initNonPrioritized;
- (id)init;

@end

