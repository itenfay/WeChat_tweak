//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UICollectionViewDataSource-Protocol.h"

@class NSIndexPath, UICollectionView, UIView, WAStarCollectionViewLayoutAnimateConfig;

@protocol WAStarCollectionViewLayoutDataSource <UICollectionViewDataSource>

@optional
- (struct CGPoint)collectionView:(UICollectionView *)arg1 dragViewToPointForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGPoint)collectionView:(UICollectionView *)arg1 dragViewFromPointForItemAtIndexPath:(NSIndexPath *)arg2;
- (UIView *)collectionView:(UICollectionView *)arg1 dragViewForItemAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)collectionView:(UICollectionView *)arg1 dragTypeForItemAtIndexPath:(NSIndexPath *)arg2;
- (WAStarCollectionViewLayoutAnimateConfig *)collectionView:(UICollectionView *)arg1 itemAnimateBackToPostion:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 itemDidCommitToStarAtIdexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 itemDidCommitToDeleteAtIdexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldDoCustomDeleteAnimation:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 isIndexPathNeedDragDelay:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 itemCenterIsInAddArea:(struct CGPoint)arg2 fromIndexPath:(NSIndexPath *)arg3 toAddIndexPath:(id *)arg4;
- (_Bool)collectionView:(UICollectionView *)arg1 itemCenterIsInDeleteArea:(struct CGPoint)arg2;
- (void)collectionView:(UICollectionView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2 didMoveToIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2 willMoveToIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2 canMoveToIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
@end

