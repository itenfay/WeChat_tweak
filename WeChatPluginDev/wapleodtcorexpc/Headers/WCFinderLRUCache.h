//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString, WCFinderDoublyLinkedList;
@protocol WCFinderCacheDelegate;

@interface WCFinderLRUCache : NSObject
{
    unsigned long long _costLimit;
    unsigned long long _countLimit;
    id <WCFinderCacheDelegate> _delegate;
    long long _strategy;
    NSString *_name;
    WCFinderDoublyLinkedList *_cacheList;
    unsigned long long _totalCount;
    unsigned long long _totalCost;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) unsigned long long totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) WCFinderDoublyLinkedList *cacheList; // @synthesize cacheList=_cacheList;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(nonatomic) __weak id <WCFinderCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(nonatomic) unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property(readonly, copy) NSString *description;
- (id)allObjects;
- (void)trimToCost:(unsigned long long)arg1;
- (void)trimToCount:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)safeRemoveObjectForKey:(id)arg1;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

