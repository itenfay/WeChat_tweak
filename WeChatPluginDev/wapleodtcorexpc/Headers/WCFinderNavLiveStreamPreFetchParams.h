//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveDiscoverPreloadConfig, NSData, NSMutableArray, NSString, WCFinderRedDotCtrlInfo;

@interface WCFinderNavLiveStreamPreFetchParams
{
    _Bool _isPreRecommendRequest;
    _Bool _isKaraPredicted;
    float _predictScore;
    unsigned long long _containerId;
    NSMutableArray *_containerContext;
    WCFinderRedDotCtrlInfo *_redDotCtrlInfo;
    FinderLiveDiscoverPreloadConfig *_preloadConfig;
    unsigned long long _cacheDurationInSeconds;
    NSData *_jumpNavliveBuffer;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSData *jumpNavliveBuffer; // @synthesize jumpNavliveBuffer=_jumpNavliveBuffer;
@property(nonatomic) unsigned long long cacheDurationInSeconds; // @synthesize cacheDurationInSeconds=_cacheDurationInSeconds;
@property(retain, nonatomic) FinderLiveDiscoverPreloadConfig *preloadConfig; // @synthesize preloadConfig=_preloadConfig;
@property(nonatomic) float predictScore; // @synthesize predictScore=_predictScore;
@property(nonatomic) _Bool isKaraPredicted; // @synthesize isKaraPredicted=_isKaraPredicted;
@property(nonatomic) _Bool isPreRecommendRequest; // @synthesize isPreRecommendRequest=_isPreRecommendRequest;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo; // @synthesize redDotCtrlInfo=_redDotCtrlInfo;
@property(retain, nonatomic) NSMutableArray *containerContext; // @synthesize containerContext=_containerContext;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
- (id)prefetchL2CacheKey;
- (_Bool)needL2PrefetchCache;
- (_Bool)isDiscoveryPrefetch;
- (_Bool)isRequestEqaulToCache:(id)arg1;
- (id)prefetchCacheHashKey;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) int fromScene;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long relatedObjectId;
@property(readonly) Class superclass;

@end

