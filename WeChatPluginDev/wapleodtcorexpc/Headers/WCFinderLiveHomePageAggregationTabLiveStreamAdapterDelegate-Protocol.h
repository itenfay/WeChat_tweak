//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSIndexPath, NSString, NSURL, UICollectionViewCell, WCFinderContact, WCFinderDataItem, WCFinderFeedFlowView, WCFinderLiveGenericFeedVM, WCFinderLiveHomePageAggregationTabLiveStreamAdapter, WCFinderLiveStreamElementModel, WCFinderLiveTabInfo;
@protocol WCFinderLiveFeedGenericCellPlayProtocol;

@protocol WCFinderLiveHomePageAggregationTabLiveStreamAdapterDelegate <NSObject>

@optional
- (void)onLiveHomePageAggregationTabLiveStreamDidScrollToTop:(WCFinderFeedFlowView *)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamCheckAutoPlay:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamNeedAutoPlay:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1;
- (void)onLiveHomePageAggregationTabLiveStream:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1 forwardAction:(WCFinderLiveGenericFeedVM *)arg2;
- (void)onLiveHomePageAggregationTabLiveStream:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1 switchSubTabFrom:(unsigned long long)arg2 toSubTabId:(unsigned long long)arg3;
- (void)onLiveHomePageAggregationTabLiveStreamFirstPageFinish:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1;
- (void)onLiveHomePageAggregationTabLiveStream:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1 aggregationCellClickJumpThemeTemplate:(WCFinderLiveGenericFeedVM *)arg2 entryBuffer:(NSData *)arg3 jumpBypass:(NSString *)arg4;
- (_Bool)shouldLiveHomePageAggregationTabLiveStreamHandleSelectAction:(WCFinderLiveStreamElementModel *)arg1;
- (void)onLiveHomePageAggregationTabLiveStream:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1 aggregationCellClickJumpLive:(WCFinderDataItem *)arg2;
- (void)onLiveHomePageAggregationTabLiveStream:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1 selectElementVM:(WCFinderLiveGenericFeedVM *)arg2 playableCell:(UICollectionViewCell<WCFinderLiveFeedGenericCellPlayProtocol> *)arg3 indexPath:(NSIndexPath *)arg4;
- (void)onLiveHomePageAggregationTabLiveStream:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1 clickContact:(WCFinderContact *)arg2 feedVM:(WCFinderLiveGenericFeedVM *)arg3;
- (void)onLiveHomePageAggregationTabLiveStream:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1 clickRecommendUrl:(NSURL *)arg2;
- (void)onLiveHomePageAggregationTabLiveStream:(WCFinderLiveHomePageAggregationTabLiveStreamAdapter *)arg1 jumpToTabInfo:(WCFinderLiveTabInfo *)arg2;
- (void)onLiveHomePageAggregationTabLiveStreamDidEndScrolling:(WCFinderFeedFlowView *)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamScrollDidScroll:(WCFinderFeedFlowView *)arg1;
@end

