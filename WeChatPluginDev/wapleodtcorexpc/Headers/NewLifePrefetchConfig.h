//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, NewLifePagePreloadCache, NewLifeStreamResponse;

@interface NewLifePrefetchConfig : NSObject
{
    _Bool _ignoreIntervalLimit;
    _Bool _checkExpired;
    _Bool _isLoading;
    _Bool _disablePrefetchWhenPageExists;
    unsigned int _pullType;
    long long _type;
    unsigned long long _tabTipsId;
    NSData *_tabTipsPassInfo;
    NewLifePagePreloadCache *_preloadCache;
    NSString *_searchPassInfo;
    unsigned long long _prefetchTimeStamp;
    unsigned long long _expiredTime;
    NewLifeStreamResponse *_response;
    NSString *_identifierId;
}

+ (void)initialize;
+ (void)PBArrayAdd_pullType;
+ (void)PBArrayAdd_identifierId;
+ (void)PBArrayAdd_searchPassInfo;
+ (void)PBArrayAdd_response;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_prefetchTimeStamp;
+ (void)PBArrayAdd_checkExpired;
+ (void)PBArrayAdd_ignoreIntervalLimit;
+ (void)PBArrayAdd_tabTipsPassInfo;
+ (void)PBArrayAdd_tabTipsId;
+ (void)PBArrayAdd_type;
+ (id)configFromRedDotTipsShowInfo:(id)arg1;
+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) _Bool disablePrefetchWhenPageExists; // @synthesize disablePrefetchWhenPageExists=_disablePrefetchWhenPageExists;
@property(nonatomic) unsigned int pullType; // @synthesize pullType=_pullType;
@property(retain, nonatomic) NSString *identifierId; // @synthesize identifierId=_identifierId;
@property(retain, nonatomic) NewLifeStreamResponse *response; // @synthesize response=_response;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) unsigned long long prefetchTimeStamp; // @synthesize prefetchTimeStamp=_prefetchTimeStamp;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool checkExpired; // @synthesize checkExpired=_checkExpired;
@property(nonatomic) _Bool ignoreIntervalLimit; // @synthesize ignoreIntervalLimit=_ignoreIntervalLimit;
@property(retain, nonatomic) NSString *searchPassInfo; // @synthesize searchPassInfo=_searchPassInfo;
@property(retain, nonatomic) NewLifePagePreloadCache *preloadCache; // @synthesize preloadCache=_preloadCache;
@property(retain, nonatomic) NSData *tabTipsPassInfo; // @synthesize tabTipsPassInfo=_tabTipsPassInfo;
@property(nonatomic) unsigned long long tabTipsId; // @synthesize tabTipsId=_tabTipsId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)predownloadFeedIndexImage:(id)arg1 index:(long long)arg2 feedCount:(long long)arg3;
- (void)predownloadImage:(id)arg1 index:(long long)arg2;
- (id)generatePrefetchCallbackReq;
- (void)deactive;
- (void)setPrefetchReadStatList:(id)arg1;
- (void)setPrefetchExistObjectList:(id)arg1;
- (void)tryPrefetch:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (_Bool)shouldPrefetchStream;
- (unsigned int)prefetchTimeInterval;
- (unsigned int)prefetchValidTimeInterval;
- (unsigned int)checkOutterPrefetchInterval;
@property(nonatomic) unsigned int lastPrefecthTime;
- (_Bool)isExpired;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

