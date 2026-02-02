//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, UICollectionView;

@protocol UICollectionViewDataSourcePrefetching <NSObject>
- (void)collectionView:(UICollectionView *)arg1 prefetchItemsAtIndexPaths:(NSArray *)arg2;

@optional
- (void)collectionView:(UICollectionView *)arg1 cancelPrefetchingForItemsAtIndexPaths:(NSArray *)arg2;
@end

