//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UICollectionView, WCFinderFeedContentVM, WCFinderFeedFlowView, WCFinderStaticCoverCollectionViewCellConfig;

@protocol WCFinderFeedFlowViewAdapterDataSourceDelegate <NSObject>
- (void)ensureSupplementaryView:(Class)arg1 kind:(NSString *)arg2;
- (WCFinderStaticCoverCollectionViewCellConfig *)cellConfigForFeed:(WCFinderFeedContentVM *)arg1;
- (struct WCFinderFeedFlowViewCellMenuComponment *)getMenuComponment;
- (struct WCFinderFeedFlowViewHeaderComponment *)getHeaderComponment;
- (void)updateFooterView;
- (UICollectionView *)getCollectionView;
- (WCFinderFeedFlowView *)feedFlowView;
@end

