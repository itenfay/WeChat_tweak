//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFeedCacheMetrics : NSObject
{
    long long _strategy;
    NSString *_contextId;
    unsigned long long _totalCount;
    unsigned long long _hitCount;
    unsigned long long _retryCount;
    unsigned long long _evictCount;
    unsigned long long _actualCost;
    unsigned long long _evictCost;
}

+ (void)initialize;
+ (void)PBArrayAdd_evictCost;
+ (void)PBArrayAdd_evictCount;
+ (void)PBArrayAdd_actualCost;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_hitCount;
+ (void)PBArrayAdd_totalCount;
+ (void)PBArrayAdd_contextId;
+ (void)PBArrayAdd_strategy;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long evictCost; // @synthesize evictCost=_evictCost;
@property(nonatomic) unsigned long long actualCost; // @synthesize actualCost=_actualCost;
@property(nonatomic) unsigned long long evictCount; // @synthesize evictCount=_evictCount;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long hitCount; // @synthesize hitCount=_hitCount;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
- (id)initWithStrategy:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

