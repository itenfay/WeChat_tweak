//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, WCFinderStreamRequestParams;

@interface WCFinderStreamCGI
{
    _Bool _isCancel;
    int _tabType;
    int _commentscene;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSData *_buffer;
    unsigned long long _pullType;
    NSMutableArray *_unreadItems;
    CDUnknownBlockType _cancelBlock;
    WCFinderStreamRequestParams *_params;
}

+ (id)convertFinderObjectListToUnreadItems:(id)arg1 tabType:(int)arg2;
+ (id)getUnreadItemsWithParams:(id)arg1 tabType:(int)arg2 commentScene:(int)arg3;
+ (_Bool)isStreamCacheRequestTopObjects:(id)arg1 equalWithTopObjects:(id)arg2;
+ (_Bool)hasReddotFinderObjectWithTab:(int)arg1 bubbleInfo:(id)arg2;
+ (id)getStreamRequestTopObjectsWithTabType:(int)arg1 tabTipsObjectId:(unsigned long long)arg2 guideBarObjectId:(unsigned long long)arg3 h5ByPass:(id)arg4 topObjects:(id)arg5 bubbleInfo:(id)arg6 relateTid:(unsigned long long)arg7;
+ (id)prefetchCacheHashKey:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStreamRequestParams *params; // @synthesize params=_params;
@property(nonatomic) int commentscene; // @synthesize commentscene=_commentscene;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(retain, nonatomic) NSMutableArray *unreadItems; // @synthesize unreadItems=_unreadItems;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long pullType; // @synthesize pullType=_pullType;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id)getStreamRequestTopObjects:(id)arg1 bubbleInfo:(id)arg2;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (id)prefetchExtraData;
- (id)cachedHashKey;
- (int)requestType;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (id)getRoomStateWithAvgSpeed:(unsigned int)arg1;
- (void)reportCGIFail;
- (void)reportCGIFinishWithDebugMessage:(id)arg1;
- (void)reportCGIStart;
- (_Bool)needADDeviceInfo;
- (void)cancelCGIWithBlock:(CDUnknownBlockType)arg1;
- (void)cancelCGI;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (void)createRequest;
- (id)initWithPullType:(unsigned long long)arg1 buffer:(id)arg2 tabType:(int)arg3 commentscene:(int)arg4 params:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;

@end

