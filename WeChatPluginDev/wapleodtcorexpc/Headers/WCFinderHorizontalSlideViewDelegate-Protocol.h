//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UICollectionView, UICollectionViewCell;

@protocol WCFinderHorizontalSlideViewDelegate <NSObject>
- (UICollectionViewCell *)onHorizontalSlideCollectionView:(UICollectionView *)arg1 indexPath:(NSIndexPath *)arg2;
- (long long)onHorizontalSlideNumberOfItems;

@optional
- (void)onHorizontalSlideDidSelectItemAtIndexPath:(NSIndexPath *)arg1;
@end

