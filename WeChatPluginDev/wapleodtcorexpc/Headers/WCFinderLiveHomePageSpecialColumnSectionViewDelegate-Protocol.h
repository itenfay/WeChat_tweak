//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSURL, UICollectionViewCell, WCFinderContact, WCFinderLiveGenericFeedVM, WCFinderLiveHomePageSpecialColumnSectionView, WCFinderLiveStreamContainerModel, WCFinderLiveStreamElementModel, WCFinderLiveStreamJumpModel;
@protocol WCFinderLiveFeedGenericCellPlayProtocol;

@protocol WCFinderLiveHomePageSpecialColumnSectionViewDelegate <NSObject>

@optional
- (void)onSpecialColumnSectionView:(WCFinderLiveHomePageSpecialColumnSectionView *)arg1 forwardAction:(WCFinderLiveGenericFeedVM *)arg2;
- (void)onSpecialColumnSectionViewFetchMoreLiveList:(WCFinderLiveHomePageSpecialColumnSectionView *)arg1;
- (void)onSpecialColumnSectionViewStartInnerPlay:(WCFinderLiveHomePageSpecialColumnSectionView *)arg1 containerModel:(WCFinderLiveStreamContainerModel *)arg2;
- (_Bool)shouldSpecialColumnSectionViewHandleSelectAction:(WCFinderLiveStreamElementModel *)arg1;
- (void)onSpecialColumnSectionView:(WCFinderLiveHomePageSpecialColumnSectionView *)arg1 actionWithJumpModel:(WCFinderLiveStreamJumpModel *)arg2;
- (void)onSpecialColumnSectionView:(WCFinderLiveHomePageSpecialColumnSectionView *)arg1 selectElementVM:(WCFinderLiveGenericFeedVM *)arg2 playableCell:(UICollectionViewCell<WCFinderLiveFeedGenericCellPlayProtocol> *)arg3;
- (void)onSpecialColumnSectionView:(WCFinderLiveHomePageSpecialColumnSectionView *)arg1 clickRecommendUrl:(NSURL *)arg2;
- (void)onSpecialColumnSectionView:(WCFinderLiveHomePageSpecialColumnSectionView *)arg1 clickContact:(WCFinderContact *)arg2 feedVM:(WCFinderLiveGenericFeedVM *)arg3;
@end

