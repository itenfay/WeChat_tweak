//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSArray, NSMutableDictionary, NSMutableSet, NSString, WCFinderLiveHomePageViewController;

@interface MMFinderNotifyGetMoreLiveMgr
{
    NSMutableDictionary *_getMoreLiveCacheRespDict;
    NSMutableSet *_requestingGetMoreLiveKeys;
    NSArray *_liveIDArray;
    NSMutableDictionary *_getLiveInfoRespCacheDict;
    unsigned long long _maxRequestCount;
    unsigned long long _currentRequestCount;
    WCFinderLiveHomePageViewController *_homePageVC;
    unsigned long long _homePageVCRelatedRequestId;
    unsigned long long _homePageVCLastLeaveTs;
    MMTimer *_homePageVCCacheTimer;
}

+ (id)uniqueKeyWithObjectId:(id)arg1 tipsId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *homePageVCCacheTimer; // @synthesize homePageVCCacheTimer=_homePageVCCacheTimer;
@property(nonatomic) unsigned long long homePageVCLastLeaveTs; // @synthesize homePageVCLastLeaveTs=_homePageVCLastLeaveTs;
@property(nonatomic) unsigned long long homePageVCRelatedRequestId; // @synthesize homePageVCRelatedRequestId=_homePageVCRelatedRequestId;
@property(retain, nonatomic) WCFinderLiveHomePageViewController *homePageVC; // @synthesize homePageVC=_homePageVC;
@property(nonatomic) unsigned long long currentRequestCount; // @synthesize currentRequestCount=_currentRequestCount;
@property(nonatomic) unsigned long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property(retain, nonatomic) NSMutableDictionary *getLiveInfoRespCacheDict; // @synthesize getLiveInfoRespCacheDict=_getLiveInfoRespCacheDict;
@property(retain, nonatomic) NSArray *liveIDArray; // @synthesize liveIDArray=_liveIDArray;
@property(retain, nonatomic) NSMutableSet *requestingGetMoreLiveKeys; // @synthesize requestingGetMoreLiveKeys=_requestingGetMoreLiveKeys;
@property(retain, nonatomic) NSMutableDictionary *getMoreLiveCacheRespDict; // @synthesize getMoreLiveCacheRespDict=_getMoreLiveCacheRespDict;
- (void)preloadHomePageVCIfNeededWithMoreLiveResp:(id)arg1 liveId:(id)arg2;
- (void)getMoreLiveIfNeeded;
- (void)setupRequestLimitWithResp:(id)arg1;
- (_Bool)releaseHomePageVCCache;
- (void)releaseHomePageVCCacheOnTimeout;
- (void)createHomePageVCIfNeededWithMoreLiveInfo:(id)arg1 liveId:(id)arg2;
- (void)invalidateHomePageVCCacheTimer;
- (void)scheduleHomePageVCCacheTimerIfNeeded;
- (void)jumpWithMoreLiveInfo:(id)arg1 key:(id)arg2 liveId:(id)arg3 chnlExtra:(id)arg4;
- (void)liveHomePageVCDidLeave:(id)arg1;
- (id)getMoreLiveResponseWithUniqueKey:(id)arg1;
- (void)clearAllGetLiveInfoRespCache;
- (void)removeGetLiveInfoRespCacheWithLiveId:(unsigned long long)arg1;
- (void)markGetLiveInfoRespFailedWithLiveId:(unsigned long long)arg1;
- (void)recordGetLiveInfoResp:(id)arg1;
- (void)recordEnterServiceMsgPageWithLiveIdArray:(id)arg1;
- (_Bool)isCacheStillValid:(id)arg1;
- (void)clearExipredCacheWithKey:(id)arg1;
- (void)requestMoreLiveWithObjectID:(id)arg1 cacheKey:(id)arg2 reportExtInfo:(id)arg3 noticeType:(unsigned int)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

