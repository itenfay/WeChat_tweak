//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableSet, NSString, PAGFile, WCFinderLiveEntertainmentChannelsViewController;
@protocol WCFinderLiveHomePageFeedAggregationCardVMDelegate;

@interface WCFinderLiveHomePageFeedAggregationCardVM
{
    _Bool _hasLoadHotSalePag;
    WCFinderLiveEntertainmentChannelsViewController *_cacheChannelsVC;
    PAGFile *_hotSalePAGFile;
    MMTimer *_channelsVCDestroyTimer;
    NSMutableSet *_hotSalePAGPlaySet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *hotSalePAGPlaySet; // @synthesize hotSalePAGPlaySet=_hotSalePAGPlaySet;
@property(nonatomic) _Bool hasLoadHotSalePag; // @synthesize hasLoadHotSalePag=_hasLoadHotSalePag;
@property(retain, nonatomic) MMTimer *channelsVCDestroyTimer; // @synthesize channelsVCDestroyTimer=_channelsVCDestroyTimer;
@property(retain, nonatomic) PAGFile *hotSalePAGFile; // @synthesize hotSalePAGFile=_hotSalePAGFile;
@property(retain, nonatomic) WCFinderLiveEntertainmentChannelsViewController *cacheChannelsVC; // @synthesize cacheChannelsVC=_cacheChannelsVC;
- (void)onFinderLiveHomePageFeedFetchEcConfig;
- (id)currentPageProductIdList;
- (void)markProductPlayedHotSalesAnimation:(id)arg1;
- (_Bool)hasProductPlayedHotSalesAnimation:(id)arg1;
- (void)loadHotSalePagIfNeeded;
- (void)checkPreloadOnCardDisplay;
- (void)cleanCacheChannelsVC;
- (void)onCacheChannelsVCReturn;
- (void)bindCacheChannelsVC:(id)arg1;
@property(readonly, nonatomic) unsigned long long curLoopPageIndex;
- (void)checkUpdateAggregationPreloadConf;
- (id)initWithModel:(id)arg1 scene:(int)arg2 sessionExtraKey:(id)arg3 containerId:(unsigned long long)arg4 ctx:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <WCFinderLiveHomePageFeedAggregationCardVMDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

