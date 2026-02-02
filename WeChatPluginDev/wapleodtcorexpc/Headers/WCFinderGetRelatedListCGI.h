//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderGetRelatedListParams;

@interface WCFinderGetRelatedListCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    WCFinderGetRelatedListParams *_params;
}

+ (id)prefetchCacheHashKey:(id)arg1 viewScene:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGetRelatedListParams *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (id)prefetchExtraData;
- (id)cachedHashKey;
- (int)requestType;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (_Bool)needADDeviceInfo;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (unsigned int)additionalExptFlag;
- (void)createRequestWithFromSessionId:(id)arg1;
- (id)initWithParams:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

