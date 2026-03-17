//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MiniTaskCollectionBaseCell;

@protocol MiniTaskCollectionCellDelegate <NSObject>
- (double)collectionViewOffsetY;
- (unsigned long long)currentCellCount;
- (struct CGSize)snapshotImagePreferredSize;
- (void)onMiniTaskCollectionCellRemoveRemind:(MiniTaskCollectionBaseCell *)arg1;
- (void)onMiniTaskCollectionCellAddRemind:(MiniTaskCollectionBaseCell *)arg1;
- (void)onMiniTaskCollectionCellFavorite:(MiniTaskCollectionBaseCell *)arg1 isFromMenu:(_Bool)arg2;
- (void)onMiniTaskCollectionCellDelete:(MiniTaskCollectionBaseCell *)arg1 isFromMenu:(_Bool)arg2;
@end

