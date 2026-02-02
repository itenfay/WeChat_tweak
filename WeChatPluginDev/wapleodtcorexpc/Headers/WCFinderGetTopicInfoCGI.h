//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderGetTopicInfoRequestParams;

@interface WCFinderGetTopicInfoCGI
{
    WCFinderGetTopicInfoRequestParams *_params;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

+ (id)prefetchCacheHashKey:(int)arg1 topicWording:(id)arg2 topicId:(unsigned long long)arg3 encryptedEventTopicId:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderGetTopicInfoRequestParams *params; // @synthesize params=_params;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (id)cachedHashKey;
- (int)requestType;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithParams:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end

