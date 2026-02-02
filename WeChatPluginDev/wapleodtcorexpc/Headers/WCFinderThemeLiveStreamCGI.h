//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderThemeLiveStreamCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _pullType;
    unsigned long long _prefetchCacheSecond;
}

+ (id)prefetchCacheHashKey:(int)arg1 containerId:(unsigned long long)arg2 themeId:(id)arg3 themeTag:(id)arg4 cardType:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long prefetchCacheSecond; // @synthesize prefetchCacheSecond=_prefetchCacheSecond;
@property(nonatomic) unsigned long long pullType; // @synthesize pullType=_pullType;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (id)prefetchExtraData;
- (id)cachedHashKey;
- (int)requestType;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithLastBuffer:(id)arg1 longitude:(double)arg2 latitude:(double)arg3 clientStatus:(id)arg4 liveClientStatus:(id)arg5 pullType:(unsigned long long)arg6 readStats:(id)arg7 markUnreadList:(id)arg8 fromScene:(int)arg9 commentScene:(int)arg10 tabTipsInfo:(id)arg11 byPass:(id)arg12 beforeJoinLiveStatus:(id)arg13 containerId:(unsigned long long)arg14 relatedObjectId:(unsigned long long)arg15 containerContext:(id)arg16 themeId:(id)arg17 themeTag:(id)arg18 entryBuffer:(id)arg19 aggregationCardType:(unsigned long long)arg20 prefetchCacheSecond:(unsigned long long)arg21 successBlock:(CDUnknownBlockType)arg22 failedBlock:(CDUnknownBlockType)arg23;

@end

