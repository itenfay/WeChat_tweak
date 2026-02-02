//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderJoinLiveCGI
{
    int _commentScene;
    WCFinderDataItem *_dataItem;
    unsigned long long _scene;
    NSString *_entranceQRCodeURL;
    NSData *_liveCookies;
    NSString *_livePkId;
    NSString *_sessionBuffer;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _fromSrc;
    unsigned long long _fetchType;
    unsigned long long _requestTime;
}

+ (id)prefetchCacheHashKey:(int)arg1 taskKey:(id)arg2 scene:(unsigned long long)arg3 liveId:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestTime; // @synthesize requestTime=_requestTime;
@property(nonatomic) unsigned long long fetchType; // @synthesize fetchType=_fetchType;
@property(nonatomic) unsigned long long fromSrc; // @synthesize fromSrc=_fromSrc;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *livePkId; // @synthesize livePkId=_livePkId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *entranceQRCodeURL; // @synthesize entranceQRCodeURL=_entranceQRCodeURL;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (id)prefetchExtraData;
- (id)cachedHashKey;
- (int)requestType;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (void)addRefSessionBuffer:(id)arg1;
- (id)getRoomStateWithAvgSpeed:(unsigned int)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (void)start;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 scene:(unsigned long long)arg3 entranceQRCodeURL:(id)arg4 liveCookies:(id)arg5 livePkId:(id)arg6 sessionBuffer:(id)arg7 commentScene:(int)arg8 fromSrc:(unsigned long long)arg9 fetchType:(unsigned long long)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;

@end

