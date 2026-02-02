//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol WCFinderCacheDelegate;

@protocol WCFinderCacheBaseProtocol <NSObject>
@property(nonatomic) unsigned long long costLimit;
@property(nonatomic) unsigned long long countLimit;
@property(readonly, copy, nonatomic) NSString *name;
@property(nonatomic) long long strategy;
@property(nonatomic) __weak id <WCFinderCacheDelegate> delegate;
- (unsigned long long)totalCost;
- (unsigned long long)totalCount;
- (void)trimToCost:(unsigned long long)arg1;
- (void)trimToCount:(unsigned long long)arg1;
- (NSArray *)allObjects;
- (id)objectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)safeRemoveObjectForKey:(id)arg1;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (id)initWithName:(NSString *)arg1;
@end

