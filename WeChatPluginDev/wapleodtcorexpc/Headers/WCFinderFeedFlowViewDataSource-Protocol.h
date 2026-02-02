//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UICollectionReusableView, UICollectionViewCell, WCFinderFeedContentVM, WCFinderFeedFlowView, WCFinderFeedStaticCoverCollectionViewCell, WCFinderStaticCoverCollectionViewCellConfig;

@protocol WCFinderFeedFlowViewDataSource <NSObject>
- (WCFinderFeedContentVM *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 contentVMAtIndexPath:(NSIndexPath *)arg2;
- (long long)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional
- (NSString *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 leftTopBadgeContent:(WCFinderFeedContentVM *)arg2;
- (_Bool)finderFeedFlowViewNeedCornerRadius;
- (struct UIEdgeInsets)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 edgeInsetForCustomSupplementaryViewOfKind:(NSString *)arg2 atSection:(long long)arg3;
- (double)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 heightForCustomSupplementaryViewOfKind:(NSString *)arg2 atSection:(long long)arg3;
- (UICollectionReusableView *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 customSupplementaryViewOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_Bool)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 isCustomSupplementaryViewOfKind:(NSString *)arg2 atSection:(long long)arg3;
- (double)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 staticHForCellAtIndexPath:(NSIndexPath *)arg2 itemWidth:(double)arg3;
- (double)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 heightForCustomCellAtIndexPath:(NSIndexPath *)arg2 itemWidth:(double)arg3;
- (_Bool)finderFeedFlowViewUseDefaultCellConfig;
- (UICollectionViewCell *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 customCellAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 isCustomCellAtIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 updateCell:(WCFinderFeedStaticCoverCollectionViewCell *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (WCFinderStaticCoverCollectionViewCellConfig *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 cellConfigAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 indexPathOfTid:(NSString *)arg2;
- (WCFinderFeedContentVM *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 contentVMOfTid:(NSString *)arg2;
- (long long)feedFlowSectionOfFinderFeedFlowView:(WCFinderFeedFlowView *)arg1;
- (long long)numberOfSectionsInFinderFeedFlowView:(WCFinderFeedFlowView *)arg1;
@end

