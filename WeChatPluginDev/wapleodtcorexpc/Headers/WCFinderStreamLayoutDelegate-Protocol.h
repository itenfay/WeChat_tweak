//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UICollectionViewDelegate-Protocol.h"

@class NSIndexPath, NSString, UICollectionView, UICollectionViewLayoutAttributes, WCFinderStreamLayout;

@protocol WCFinderStreamLayoutDelegate <UICollectionViewDelegate>

@optional
- (_Bool)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 supplementaryViewWillDishover:(unsigned long long)arg3 kind:(NSString *)arg4;
- (_Bool)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 supplementaryViewWillHover:(unsigned long long)arg3 kind:(NSString *)arg4;
- (_Bool)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 pinFooterToVisibleBoundsAtSection:(unsigned long long)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (UICollectionViewLayoutAttributes *)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 decorationLayoutAttributesAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 decorationEdgeInsetAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 footerEdgeInsetAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 cellHeightAtIndexPath:(NSIndexPath *)arg3 withWidth:(double)arg4;
- (unsigned long long)collectionView:(UICollectionView *)arg1 layout:(WCFinderStreamLayout *)arg2 columnCountAtSection:(unsigned long long)arg3;
@end

