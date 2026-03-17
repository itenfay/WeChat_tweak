//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UICollectionView, WCFinderFlowLayout;

@protocol WCFinderFlowLayoutDelegate <NSObject>

@optional
- (_Bool)collectionView:(UICollectionView *)arg1 flowLayout:(WCFinderFlowLayout *)arg2 pinHeader:(long long)arg3;
- (void)collectionView:(UICollectionView *)arg1 insets:(out struct UIEdgeInsets *)arg2 forSection:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 footerHeight:(long long)arg2;
- (double)collectionView:(UICollectionView *)arg1 headerHeight:(long long)arg2;
- (double)collectionView:(UICollectionView *)arg1 flowLayout:(WCFinderFlowLayout *)arg2 itemPaddingForSection:(long long)arg3;
- (long long)collectionView:(UICollectionView *)arg1 flowLayout:(WCFinderFlowLayout *)arg2 columnForSection:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 flowLayout:(WCFinderFlowLayout *)arg2 heightForIndexPath:(NSIndexPath *)arg3 width:(double)arg4;
@end

