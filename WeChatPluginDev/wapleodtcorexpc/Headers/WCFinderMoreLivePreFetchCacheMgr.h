//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveDiscoverPreloadConfig, FinderLiveSquareStyleInfo, FinderNavLiveStreamPreloadControlConfig, NSData, NSMutableDictionary, _TtC6WeChat24WCFinderLiveHomePageKara, _TtC6WeChat27WCFinderLiveSessionFlowKara;

@interface WCFinderMoreLivePreFetchCacheMgr : NSObject
{
    _TtC6WeChat24WCFinderLiveHomePageKara *_kara;
    _TtC6WeChat27WCFinderLiveSessionFlowKara *_sessionFlowKara;
    NSMutableDictionary *_firstScreenCaches;
    NSMutableDictionary *_prefetchL2Caches;
    NSMutableDictionary *_aggrecardThemePrefetchConfDict;
}

+ (void)UpdateHomePageResponseFlag:(unsigned int)arg1;
+ (unsigned int)GetHomePageResponseFlag;
+ (_Bool)saveLiveTabsInfoCache:(id)arg1 scene:(unsigned long long)arg2;
+ (id)GetLiveTabsInfoCacheWithScene:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *aggrecardThemePrefetchConfDict; // @synthesize aggrecardThemePrefetchConfDict=_aggrecardThemePrefetchConfDict;
@property(retain, nonatomic) NSMutableDictionary *prefetchL2Caches; // @synthesize prefetchL2Caches=_prefetchL2Caches;
@property(retain, nonatomic) NSMutableDictionary *firstScreenCaches; // @synthesize firstScreenCaches=_firstScreenCaches;
@property(retain, nonatomic) _TtC6WeChat27WCFinderLiveSessionFlowKara *sessionFlowKara; // @synthesize sessionFlowKara=_sessionFlowKara;
@property(retain, nonatomic) _TtC6WeChat24WCFinderLiveHomePageKara *kara; // @synthesize kara=_kara;
- (void)updateLiveActiveLevelWithCtrlInfo:(id)arg1;
- (void)prefetchIfNeeded:(id)arg1;
@property(retain, nonatomic) NSData *lastRefreshObjectsBuffer;
- (void)_updateDiscoverPreloadConfig:(id)arg1;
- (void)_updateNavLivePreloadCtrlConfig:(id)arg1;
- (void)clearCurrentLiveReddotPreloadInfo;
- (void)updateNavLiveStreamPreloadConfigWithResponse:(id)arg1;
- (void)updateNoReddotPreloadConfigWithCtrlInfo:(id)arg1;
@property(retain, nonatomic) FinderLiveDiscoverPreloadConfig *discoverPreloadConf;
@property(retain, nonatomic) FinderNavLiveStreamPreloadControlConfig *preloadCtrlConf;
- (void)removePrefetchL2Cache:(id)arg1;
- (void)addPrefetchL2Cache:(id)arg1 cache:(id)arg2;
@property(readonly, nonatomic) unsigned long long homePagePageCacheTimeSec;
- (_Bool)hasRequestPreRecommend:(id)arg1;
- (_Bool)isPreRecommendReddotValid:(id)arg1;
- (void)markPreRecommended:(id)arg1 objectId:(unsigned long long)arg2;
- (void)updateLastPreRecommendRequestInfo:(id)arg1;
- (id)lastPreRecommendRequestInfo;
@property(retain, nonatomic) FinderLiveSquareStyleInfo *lastDiscoverStyleInfo;
@property(nonatomic) _Bool lastIsCircleFollow;
@property(nonatomic) _Bool lastIsTabStream;
@property(nonatomic) unsigned long long lastDiscoverNonReddotPreloadFailTs;
@property(nonatomic) unsigned long long totalDiscoverReddotPreloadConsumeCount;
@property(nonatomic) unsigned long long totalDiscoverReddotPreloadFailedCount;
@property(nonatomic) unsigned long long totalDiscoverReddotPreloadCount;
@property(nonatomic) unsigned long long lastDiscoverReddotPreloadFreqLimitTs;
- (_Bool)isPullTypeCanPrefetch:(unsigned long long)arg1;
- (unsigned long long)canPrefetchNowWithParams:(id)arg1;
- (unsigned long long)validTimeIntervalWithScene:(int)arg1;
- (void)updatePrefetchInterval:(unsigned long long)arg1 scene:(int)arg2;
- (void)onMemoryWarning;
- (id)init;

@end

