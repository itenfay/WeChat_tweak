//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderClientStatus, FinderLbsTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, NSData, NSMutableArray, NSString, WCFinderLiveTabInfo;

@interface WCFinderLbsLiveStreamCGI
{
    int _fromScene;
    int _commentScene;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSData *_lastBuffer;
    double _longitude;
    double _latitude;
    FinderClientStatus *_clientStatus;
    FinderLiveClientStatus *_liveClientStatus;
    unsigned long long _pullType;
    NSMutableArray *_readStats;
    NSMutableArray *_markUnreadList;
    FinderLbsTabTipsInfo *_tabTipsInfo;
    NSString *_byPass;
    FinderLiveBeforeJoinLiveRoomStatus *_beforeJoinLiveStatus;
    WCFinderLiveTabInfo *_liveTabInfo;
    unsigned long long _relatedObjectId;
    unsigned long long _cacheDurationInSeconds;
}

+ (id)prefetchCacheHashKey:(int)arg1 tabId:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cacheDurationInSeconds; // @synthesize cacheDurationInSeconds=_cacheDurationInSeconds;
@property(nonatomic) unsigned long long relatedObjectId; // @synthesize relatedObjectId=_relatedObjectId;
@property(retain, nonatomic) WCFinderLiveTabInfo *liveTabInfo; // @synthesize liveTabInfo=_liveTabInfo;
@property(retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveStatus; // @synthesize beforeJoinLiveStatus=_beforeJoinLiveStatus;
@property(copy, nonatomic) NSString *byPass; // @synthesize byPass=_byPass;
@property(retain, nonatomic) FinderLbsTabTipsInfo *tabTipsInfo; // @synthesize tabTipsInfo=_tabTipsInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSMutableArray *markUnreadList; // @synthesize markUnreadList=_markUnreadList;
@property(retain, nonatomic) NSMutableArray *readStats; // @synthesize readStats=_readStats;
@property(nonatomic) unsigned long long pullType; // @synthesize pullType=_pullType;
@property(retain, nonatomic) FinderLiveClientStatus *liveClientStatus; // @synthesize liveClientStatus=_liveClientStatus;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
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
- (id)initWithLastBuffer:(id)arg1 longitude:(double)arg2 latitude:(double)arg3 clientStatus:(id)arg4 liveClientStatus:(id)arg5 pullType:(unsigned long long)arg6 readStats:(id)arg7 markUnreadList:(id)arg8 fromScene:(int)arg9 commentScene:(int)arg10 tabTipsInfo:(id)arg11 byPass:(id)arg12 beforeJoinLiveStatus:(id)arg13 relatedObjectId:(unsigned long long)arg14 liveTabInfo:(id)arg15 onlyFollowFeed:(_Bool)arg16 cacheDurationInSeconds:(unsigned long long)arg17 successful:(CDUnknownBlockType)arg18 failure:(CDUnknownBlockType)arg19;

@end

