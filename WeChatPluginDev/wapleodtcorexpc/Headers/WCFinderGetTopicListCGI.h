//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderTopicListParamsModel;

@interface WCFinderGetTopicListCGI
{
    WCFinderTopicListParamsModel *_paramsModel;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

+ (id)prefetchCacheHashKey:(int)arg1 topicWording:(id)arg2 topicId:(unsigned long long)arg3 encryptedEventTopicId:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) WCFinderTopicListParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (id)cachedHashKey;
- (int)requestType;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithParamsModel:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

