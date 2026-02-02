//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderGetFavTemplateListCGI
{
    _Bool _isPrefetchReq;
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
    unsigned long long _preFetchType;
    NSString *_pageBufferUniqueId;
}

+ (id)cachedHashKeyWithPageBufferUniqueId:(id)arg1;
+ (id)mmkvCachedKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *pageBufferUniqueId; // @synthesize pageBufferUniqueId=_pageBufferUniqueId;
@property(nonatomic) unsigned long long preFetchType; // @synthesize preFetchType=_preFetchType;
@property(nonatomic) _Bool isPrefetchReq; // @synthesize isPrefetchReq=_isPrefetchReq;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
- (id)sha1HashForData:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (id)cachedHashKey;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (unsigned long long)getCachedTime;
- (void)saveCachedTime:(unsigned long long)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (_Bool)fetchDebugTemplate;
- (id)initWithPageBuf:(id)arg1 preFetchType:(unsigned long long)arg2 finderUserName:(id)arg3 successfulBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;

@end

