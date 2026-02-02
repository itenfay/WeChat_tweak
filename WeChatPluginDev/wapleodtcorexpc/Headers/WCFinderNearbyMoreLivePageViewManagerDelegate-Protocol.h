//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIColor, WCFinderDataItem, WCFinderDiscoveryNearbyLiveCollectionViewCell, WCFinderLiveTabInfo, WCFinderNearbyMoreLivePageViewManager;

@protocol WCFinderNearbyMoreLivePageViewManagerDelegate <NSObject>

@optional
- (void)finderMoreLiveSwitchSubTabId:(WCFinderNearbyMoreLivePageViewManager *)arg1 fromSubTabId:(unsigned long long)arg2 toSubTabId:(unsigned long long)arg3;
- (_Bool)finderMoreLivePageCanPrefetchBottom;
- (void)finderMoreLiveReportFollowFoldAction:(unsigned long long)arg1;
- (NSString *)finderMoreLivePageViewMangerChannelExtra:(WCFinderNearbyMoreLivePageViewManager *)arg1 tid:(NSString *)arg2 isFold:(_Bool)arg3 index:(unsigned long long)arg4;
- (void)finderMoreLiveAutoPlayChanged:(WCFinderDiscoveryNearbyLiveCollectionViewCell *)arg1;
- (void)finderMoreLivePageViewBeginDrag:(WCFinderNearbyMoreLivePageViewManager *)arg1;
- (void)finderMoreLivePageReady;
- (_Bool)finderMoreLivePageAlwaysDarkStyle;
- (UIColor *)finderMoreLiveFeedViewBgColor;
- (void)finderMoreLivePageViewMangerEnterLive:(WCFinderNearbyMoreLivePageViewManager *)arg1 dataItem:(WCFinderDataItem *)arg2 isFold:(_Bool)arg3 index:(unsigned long long)arg4 isAutoPlaying:(_Bool)arg5;
- (void)finderMoreLivePageViewManger:(WCFinderNearbyMoreLivePageViewManager *)arg1 jumpToTabInfo:(WCFinderLiveTabInfo *)arg2;
- (void)firstPageRequestFinishedInFinderMoreLivePageViewManager:(WCFinderNearbyMoreLivePageViewManager *)arg1;
@end

