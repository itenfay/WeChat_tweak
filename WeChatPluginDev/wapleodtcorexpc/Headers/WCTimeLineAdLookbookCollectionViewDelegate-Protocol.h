//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UICollectionView, UIView, WCAdLookbookCardReportItem, WCDataItem, WCMediaItem;

@protocol WCTimeLineAdLookbookCollectionViewDelegate <NSObject>

@optional
- (void)onCanvasPageViewAnimationForCollectionView:(UICollectionView *)arg1 setContentHidden:(_Bool)arg2;
- (WCAdLookbookCardReportItem *)fetchLookbookReportItemInCollectionView:(UICollectionView *)arg1 forIndex:(unsigned long long)arg2;
- (_Bool)isBrandNewAnimationPlayingForCollectionView:(UICollectionView *)arg1;
- (void)onCellButtonClickedInCollectionView:(UICollectionView *)arg1 forIndex:(unsigned long long)arg2 originView:(UIView *)arg3;
- (_Bool)onCellMediaViewShouldForbidShowingPauseIconInCollectionView:(UICollectionView *)arg1;
- (struct CGSize)fetchMediaItemSizeInCollectionView:(UICollectionView *)arg1 forIndex:(unsigned long long)arg2;
- (WCMediaItem *)fetchMediaItemInCollectionView:(UICollectionView *)arg1 forIndex:(unsigned long long)arg2;
- (unsigned long long)fetchItemSceneInCollectionView:(UICollectionView *)arg1;
- (WCDataItem *)fetchDataItemInCollectionView:(UICollectionView *)arg1;
@end

