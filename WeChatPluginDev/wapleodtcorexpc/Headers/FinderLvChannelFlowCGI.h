//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, WCFinderRedDotCtrlInfo;

@interface FinderLvChannelFlowCGI
{
    int _tabType;
    unsigned long long _pullType;
    WCFinderRedDotCtrlInfo *_finderCtrlInfo;
    NSData *_prefetchData;
    NSData *_lastBuffer;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

+ (id)prefetchCacheHashKey:(int)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSData *prefetchData; // @synthesize prefetchData=_prefetchData;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *finderCtrlInfo; // @synthesize finderCtrlInfo=_finderCtrlInfo;
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
- (void)createRequest;
- (id)initWithWithPullType:(unsigned long long)arg1 tabType:(int)arg2 finderCtrlInfo:(id)arg3 prefetchData:(id)arg4 lastBuffer:(id)arg5 successful:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;

@end

