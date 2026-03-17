//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString, UICollectionReusableView, UICollectionView, UICollectionViewCell;

@protocol UICollectionViewDataSource <NSObject>
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)collectionView:(UICollectionView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional
- (NSIndexPath *)collectionView:(UICollectionView *)arg1 indexPathForIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (NSArray *)indexTitlesForCollectionView:(UICollectionView *)arg1;
- (void)collectionView:(UICollectionView *)arg1 moveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
- (UICollectionReusableView *)collectionView:(UICollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (long long)numberOfSectionsInCollectionView:(UICollectionView *)arg1;
@end

