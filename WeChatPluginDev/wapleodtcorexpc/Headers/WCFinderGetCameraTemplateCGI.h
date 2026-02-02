//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderGetCameraTemplateCGI
{
    _Bool _isPrefetchReq;
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
    unsigned long long _scene;
    unsigned long long _preFetchType;
    NSString *_fromTempletId;
    unsigned long long _eventId;
    NSString *_musicId;
    unsigned long long _tabId;
    NSString *_pageBufferUniqueId;
    unsigned long long _enterScene;
}

+ (id)cachedHashKeyWithScene:(unsigned long long)arg1 fromTempalteId:(id)arg2 finderEventId:(unsigned long long)arg3 tabId:(unsigned long long)arg4 musicId:(id)arg5 pageBufferUniqueId:(id)arg6 enterScene:(unsigned long long)arg7;
+ (id)mmkvCachedKey;
+ (id)getCachedCameraVideoTemplateList;
+ (int)enterTypeWithPreFetchType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(copy, nonatomic) NSString *pageBufferUniqueId; // @synthesize pageBufferUniqueId=_pageBufferUniqueId;
@property(nonatomic) unsigned long long tabId; // @synthesize tabId=_tabId;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *fromTempletId; // @synthesize fromTempletId=_fromTempletId;
@property(nonatomic) unsigned long long preFetchType; // @synthesize preFetchType=_preFetchType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isPrefetchReq; // @synthesize isPrefetchReq=_isPrefetchReq;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
- (id)sha1HashForData:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (id)cachedHashKey;
- (int)requestType;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (unsigned long long)getCachedTime;
- (void)saveCachedTime:(unsigned long long)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (_Bool)fetchDebugTemplate;
- (id)initWithPageBuf:(id)arg1 scene:(unsigned long long)arg2 preFetchType:(unsigned long long)arg3 finderUserName:(id)arg4 optionalParams:(id)arg5 successfulBlock:(CDUnknownBlockType)arg6 failedBlock:(CDUnknownBlockType)arg7;

@end

