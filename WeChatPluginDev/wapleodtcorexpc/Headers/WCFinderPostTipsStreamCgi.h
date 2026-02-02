//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WCFinderPostTipsStreamCgi
{
    _Bool _isPrefetch;
    int _scene;
    NSData *_byPass;
    NSData *_lastBuf;
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
}

+ (id)cachedHashKeyWithScene:(int)arg1 byPass:(id)arg2 lastBuffer:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
@property(copy, nonatomic) NSData *lastBuf; // @synthesize lastBuf=_lastBuf;
@property(copy, nonatomic) NSData *byPass; // @synthesize byPass=_byPass;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isPrefetch; // @synthesize isPrefetch=_isPrefetch;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (id)cachedHashKey;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithScene:(int)arg1 byPass:(id)arg2 lastBuffer:(id)arg3 isPrefetch:(_Bool)arg4 successful:(CDUnknownBlockType)arg5 failed:(CDUnknownBlockType)arg6;

@end

