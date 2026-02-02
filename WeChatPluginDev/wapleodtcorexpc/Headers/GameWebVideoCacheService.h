//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterCommonDb, GameURLSessionWrapper, NSMutableDictionary, NSRecursiveLock, NSString, SafeMutableDictionary, WCTTable, WKHTTPCookieStore;

@interface GameWebVideoCacheService
{
    NSRecursiveLock *m_lock;
    _Bool _isPreloading;
    _Bool _enablePartHit;
    GameCenterCommonDb *_gameCenterCommonDb;
    WCTTable *_videoCacheTable;
    SafeMutableDictionary *_curWebPreloadMediaDic;
    GameURLSessionWrapper *_urlSessionWrapper;
    WKHTTPCookieStore *_curWkCookieStore;
    NSMutableDictionary *_requestModelDict;
}

+ (id)getNewUrlWithUrl:(id)arg1 appendGameCacheIdentify:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *requestModelDict; // @synthesize requestModelDict=_requestModelDict;
@property(nonatomic) __weak WKHTTPCookieStore *curWkCookieStore; // @synthesize curWkCookieStore=_curWkCookieStore;
@property(retain, nonatomic) GameURLSessionWrapper *urlSessionWrapper; // @synthesize urlSessionWrapper=_urlSessionWrapper;
@property(retain, nonatomic) SafeMutableDictionary *curWebPreloadMediaDic; // @synthesize curWebPreloadMediaDic=_curWebPreloadMediaDic;
@property(retain, nonatomic) WCTTable *videoCacheTable; // @synthesize videoCacheTable=_videoCacheTable;
@property(retain, nonatomic) GameCenterCommonDb *gameCenterCommonDb; // @synthesize gameCenterCommonDb=_gameCenterCommonDb;
@property(nonatomic) _Bool enablePartHit; // @synthesize enablePartHit=_enablePartHit;
@property(nonatomic) _Bool isPreloading; // @synthesize isPreloading=_isPreloading;
- (id)webViewCookieStore;
- (void)debugTestToGetResourcePreloadInfoWithUrl:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)requestModelFromSchemeTask:(id)arg1;
- (id)requestKeyFromSchemeTask:(id)arg1;
- (void)urlSessionWrapperWithTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)urlSessionWrapperWithTask:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)urlSessionWrapperWithTask:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)handleCdnDownloadFailed:(id)arg1;
- (void)handleCdnDownloadSuccess:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)getMediaWrapFromVideoCacheInfo:(id)arg1;
- (void)removePreloadVideoFromQueueWithMediaWrap:(id)arg1;
- (void)didExitGameCenter;
- (void)cleanTimeoutGameVideoCache;
- (void)cleanTimeoutAndOverLimitVideoCache;
- (void)onWebPreloadVideoWithMediaWraps:(id)arg1;
- (void)removeLocalInfoForVideoMediaWrap:(id)arg1;
- (struct _NSRange)getRangeFromString:(id)arg1;
- (id)currentResourcePreloadVideoIdentify;
- (void)httpTestRangePreRequestWithVideoUrl:(id)arg1 andIdentify:(id)arg2;
- (void)doPreloadScheduleVideoWithInfoResponse:(id)arg1 andResourceUrl:(id)arg2;
- (void)cleanPreloadInfoInMappedKV;
- (void)getResourcePreloadInfoFailedWithUrl:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)getResourcePreloadInfoWithUrl:(id)arg1;
- (id)getResourcePreloadInfoFailedCountKey:(id)arg1;
- (id)getWaitingPreloadResourceDateKey:(id)arg1;
- (void)schedulePreloadVideoResource:(id)arg1 withMaxDelaySeconds:(long long)arg2;
- (void)cancelPreloadSchedule:(long long)arg1;
- (_Bool)hasResourcePreloadedByUrl:(id)arg1;
- (void)checkIfHaveWaitingPreloadTask;
- (_Bool)recordVideoResponseCacheIfNeed:(id)arg1 withOriginRequest:(id)arg2;
- (void)stopLoadVideoWithURLSchemeTask:(id)arg1;
- (_Bool)loadVideoDataIfInnerFetchWithRequest:(id)arg1 withURLSchemeTask:(id)arg2 cookieStore:(id)arg3;
- (_Bool)loadVideoCacheByRequest:(id)arg1 videoCacheIdentify:(id)arg2 fromPath:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)loadVideoDataIfHasCacheByRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)mediaWrapFromRequest:(id)arg1;
- (_Bool)isVideoLoaderEnable;
- (_Bool)isGameWebVideoCacheEnable;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

