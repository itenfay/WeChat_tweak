//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LVReddotInfo, NSData;

@interface WCFinderGetLongVideoCGI
{
    int _tabType;
    unsigned long long _pullType;
    LVReddotInfo *_reddotInfo;
    NSData *_lastBuffer;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

+ (id)prefetchCacheHashKey:(int)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) LVReddotInfo *reddotInfo; // @synthesize reddotInfo=_reddotInfo;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long pullType; // @synthesize pullType=_pullType;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (id)prefetchExtraData;
- (id)cachedHashKey;
- (int)requestType;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)genFinderUnreadItemList:(int)arg1;
- (void)createRequest;
- (id)initWithWithPullType:(unsigned long long)arg1 tabType:(int)arg2 reddotInfo:(id)arg3 lastBuffer:(id)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

