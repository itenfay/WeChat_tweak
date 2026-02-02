//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSURL, WCFinderContact, WCFinderLiveGenericFeedVM, WCFinderLiveHomePageBannerCell, WCFinderLiveHomePageBannerSectionView, WCFinderLiveStreamContainerModel, WCFinderLiveStreamElementModel;

@protocol WCFinderLiveHomePageBannerSectionViewDelegate <NSObject>

@optional
- (void)onBannerSectionView:(WCFinderLiveHomePageBannerSectionView *)arg1 forwardAction:(WCFinderLiveGenericFeedVM *)arg2;
- (void)onBannerSectionViewStartInnerPlay:(WCFinderLiveHomePageBannerSectionView *)arg1 containerModel:(WCFinderLiveStreamContainerModel *)arg2;
- (_Bool)shouldBannerSectionViewHandleSelectAction:(WCFinderLiveStreamElementModel *)arg1;
- (void)onBannerSectionView:(WCFinderLiveHomePageBannerSectionView *)arg1 selectElementVM:(WCFinderLiveGenericFeedVM *)arg2 cell:(WCFinderLiveHomePageBannerCell *)arg3;
- (void)onBannerSectionView:(WCFinderLiveHomePageBannerSectionView *)arg1 clickRecommendUrl:(NSURL *)arg2;
- (void)onBannerSectionView:(WCFinderLiveHomePageBannerSectionView *)arg1 clickContact:(WCFinderContact *)arg2 feedVM:(WCFinderLiveGenericFeedVM *)arg3;
@end

