//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSIndexPath, NSString, NSURL, UICollectionViewCell, WCFinderContact, WCFinderDataItem, WCFinderLiveGenericFeedVM, WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell, WCFinderLiveStreamContainerModel, WCFinderLiveStreamElementModel;
@protocol WCFinderLiveFeedGenericCellPlayProtocol;

@protocol WCFinderLiveHomePageTabLiveStreamSectionDelegate <NSObject>

@optional
- (void)onTabLiveStreamSectionFeedViewDidEndScrolling:(WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *)arg1;
- (void)onTabLiveStreamSectionFeedView:(WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *)arg1 forwardAction:(WCFinderLiveGenericFeedVM *)arg2;
- (void)onTabLiveStreamSectionFeedViewNeedCheckAutoPlay:(WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *)arg1;
- (void)onTabLiveStreamSectionFeedViewStartInnerPlay:(WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *)arg1 containerModel:(WCFinderLiveStreamContainerModel *)arg2;
- (void)onTabLiveStreamSectionFeedView:(WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *)arg1 aggregationCellClickJumpThemeTemplate:(WCFinderLiveGenericFeedVM *)arg2 entryBuffer:(NSData *)arg3 jumpBypass:(NSString *)arg4;
- (_Bool)shouldTabLiveStreamSectionFeedViewHandleSelectAction:(WCFinderLiveStreamElementModel *)arg1;
- (void)onTabLiveStreamSectionFeedView:(WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *)arg1 aggregationCellClickJumpLive:(WCFinderDataItem *)arg2;
- (void)onTabLiveStreamSectionFeedView:(WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *)arg1 selectElementVM:(WCFinderLiveGenericFeedVM *)arg2 playableCell:(UICollectionViewCell<WCFinderLiveFeedGenericCellPlayProtocol> *)arg3 indexPath:(NSIndexPath *)arg4;
- (void)onTabLiveStreamSectionFeedView:(WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *)arg1 clickContact:(WCFinderContact *)arg2 feedVM:(WCFinderLiveGenericFeedVM *)arg3;
- (void)onTabLiveStreamSectionFeedView:(WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *)arg1 clickRecommendUrl:(NSURL *)arg2;
@end

