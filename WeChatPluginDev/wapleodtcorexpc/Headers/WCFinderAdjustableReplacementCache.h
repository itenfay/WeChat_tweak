//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString, WCFinderLRUCache;
@protocol WCFinderCacheDelegate;

@interface WCFinderAdjustableReplacementCache : NSObject
{
    unsigned long long _costLimit;
    unsigned long long _countLimit;
    id <WCFinderCacheDelegate> _delegate;
    long long _strategy;
    double _lfuRatio;
    NSString *_name;
    WCFinderLRUCache *_lruCache;
    WCFinderLRUCache *_lruCacheForGhost;
    WCFinderLRUCache *_lfuCache;
    WCFinderLRUCache *_lfuCacheForGhost;
    NSMutableDictionary *_cacheList;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *cacheList; // @synthesize cacheList=_cacheList;
@property(retain, nonatomic) WCFinderLRUCache *lfuCacheForGhost; // @synthesize lfuCacheForGhost=_lfuCacheForGhost;
@property(retain, nonatomic) WCFinderLRUCache *lfuCache; // @synthesize lfuCache=_lfuCache;
@property(retain, nonatomic) WCFinderLRUCache *lruCacheForGhost; // @synthesize lruCacheForGhost=_lruCacheForGhost;
@property(retain, nonatomic) WCFinderLRUCache *lruCache; // @synthesize lruCache=_lruCache;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double lfuRatio; // @synthesize lfuRatio=_lfuRatio;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(nonatomic) __weak id <WCFinderCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(nonatomic) unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property(readonly, copy) NSString *description;
- (void)cache:(id)arg1 didEvictObject:(id)arg2;
- (unsigned long long)totalCost;
- (unsigned long long)totalCount;
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

