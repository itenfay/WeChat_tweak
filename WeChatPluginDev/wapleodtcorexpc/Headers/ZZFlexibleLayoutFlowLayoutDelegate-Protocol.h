//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class UICollectionView, UICollectionViewLayout, UIColor;

@protocol ZZFlexibleLayoutFlowLayoutDelegate <UICollectionViewDelegateFlowLayout>
- (_Bool)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 didSectionFooterPinToVisibleBounds:(long long)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 didSectionHeaderPinToVisibleBounds:(long long)arg3;
- (UIColor *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 colorForSectionAtIndex:(long long)arg3;
@end

