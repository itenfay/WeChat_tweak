//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface WCAdWebStorePreloadMgr
{
    NSRecursiveLock *_preloadLock;
    NSMutableArray *_timelineAdInfoList;
    NSMutableDictionary *_preloadingWebStoreDict;
    NSMutableDictionary *_preloadedWebStoreDict;
    NSMutableDictionary *_weAppPreloadWebStoreDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *weAppPreloadWebStoreDict; // @synthesize weAppPreloadWebStoreDict=_weAppPreloadWebStoreDict;
@property(retain, nonatomic) NSMutableDictionary *preloadedWebStoreDict; // @synthesize preloadedWebStoreDict=_preloadedWebStoreDict;
@property(retain, nonatomic) NSMutableDictionary *preloadingWebStoreDict; // @synthesize preloadingWebStoreDict=_preloadingWebStoreDict;
@property(retain, nonatomic) NSMutableArray *timelineAdInfoList; // @synthesize timelineAdInfoList=_timelineAdInfoList;
@property(retain, nonatomic) NSRecursiveLock *preloadLock; // @synthesize preloadLock=_preloadLock;
- (id)generateKeyWithUrl:(id)arg1 skAdItem:(id)arg2;
- (void)removeWebStoreForWeAppWithAppId:(id)arg1;
- (void)removeWebStoreForWeAppWithUrl:(id)arg1 skAdItem:(id)arg2;
- (void)preloadWebStoreForWeAppWithUrl:(id)arg1 skAdItem:(id)arg2 appId:(id)arg3;
- (void)cleanUpWebStoreCache;
- (void)preloadWebStoresForTimeline;
- (void)removeWebStoreForTimelineWithAdInfo:(id)arg1;
- (void)preloadWebStoreForTimelineWithAdInfo:(id)arg1;
- (void)removeWebStoreForCanvasWithAdInfo:(id)arg1;
- (void)preloadWebStoreForCanvasWithAdInfo:(id)arg1;
- (id)fetchWebStoreWithUrl:(id)arg1 skAdItem:(id)arg2;
- (void)removeWebStoreWithUrl:(id)arg1 skAdItem:(id)arg2;
- (void)updatePreloadCacheWithKey:(id)arg1 productVC:(id)arg2 resule:(_Bool)arg3 error:(id)arg4;
- (_Bool)preloadWebStoreWithUrl:(id)arg1 skAdItem:(id)arg2;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (id)init;

@end

