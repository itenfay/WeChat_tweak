//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderLimitedCapacityQueueMgr : NSObject
{
    NSMutableDictionary *_capacityContainerDic;
    long long _capacityCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long capacityCount; // @synthesize capacityCount=_capacityCount;
@property(retain, nonatomic) NSMutableDictionary *capacityContainerDic; // @synthesize capacityContainerDic=_capacityContainerDic;
- (id)getAllCapacityObject;
- (void)resetAllQueueState;
- (_Bool)resetQueueStateWithQueueKey:(id)arg1;
- (_Bool)removeLastObjectWithQueueKey:(id)arg1;
- (_Bool)removeFirstObjectWithQueueKey:(id)arg1;
- (id)getCapacityQueueWithQueueKey:(id)arg1;
- (_Bool)checkObjectAlreadyInQueue:(id)arg1 queueKey:(id)arg2;
- (_Bool)appendObject:(id)arg1 queueKey:(id)arg2;
- (id)getCapacityQueueArrayFromContainerDicWithKey:(id)arg1;
- (id)initWithCapacityCount:(long long)arg1 queueKeyArray:(id)arg2;
- (void)resetQueueState;
- (_Bool)removeLastObject;
- (_Bool)removeFirstObject;
- (id)getCapacityQueue;
- (_Bool)appendObject:(id)arg1;
- (id)initWithCapacityCount:(long long)arg1 queueKey:(id)arg2;
- (id)initWithCapacityCount:(long long)arg1;

@end

