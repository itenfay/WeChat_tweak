//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveDiscoverPreloadInfo, NSData, WCFinderNavLiveStreamPrefetchExtraData, WCFinderNavLiveStreamRequestModel;

@interface WCFinderNavLiveStreamCGI
{
    _Bool _isPreRecommendRequest;
    _Bool _overLiteCgi;
    FinderLiveDiscoverPreloadInfo *_discoverPreloadInfo;
    NSData *_preNavliveMoreLiveObjectsBuffer;
    NSData *_jumpNavliveBuffer;
    WCFinderNavLiveStreamRequestModel *_model;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
    WCFinderNavLiveStreamPrefetchExtraData *_prefetchExtra;
}

+ (id)prefetchCacheHashKey:(int)arg1 containerId:(unsigned long long)arg2 tabId:(unsigned long long)arg3 relatedObjectId:(unsigned long long)arg4 homePageScene:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderNavLiveStreamPrefetchExtraData *prefetchExtra; // @synthesize prefetchExtra=_prefetchExtra;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderNavLiveStreamRequestModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSData *jumpNavliveBuffer; // @synthesize jumpNavliveBuffer=_jumpNavliveBuffer;
@property(nonatomic) _Bool overLiteCgi; // @synthesize overLiteCgi=_overLiteCgi;
@property(nonatomic) _Bool isPreRecommendRequest; // @synthesize isPreRecommendRequest=_isPreRecommendRequest;
@property(retain, nonatomic) NSData *preNavliveMoreLiveObjectsBuffer; // @synthesize preNavliveMoreLiveObjectsBuffer=_preNavliveMoreLiveObjectsBuffer;
@property(retain, nonatomic) FinderLiveDiscoverPreloadInfo *discoverPreloadInfo; // @synthesize discoverPreloadInfo=_discoverPreloadInfo;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (id)prefetchExtraData;
- (id)cachedHashKey;
- (int)requestType;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (void)reportPrefetch:(unsigned long long)arg1 request:(id)arg2;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (void)createRequest;
- (id)initWithModel:(id)arg1 overLiteCgi:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;

@end

