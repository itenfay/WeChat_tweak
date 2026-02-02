//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UICollectionViewCell, WCDataItem, WCMediaItem;

@protocol WCAlbumPickerCollectionCellViewDelegate <NSObject>
- (void)onToggleSelection:(UICollectionViewCell *)arg1;
- (void)onRemoveSelectedInfo:(WCMediaItem *)arg1;
- (_Bool)isMediaSelectable:(WCMediaItem *)arg1;
- (unsigned int)getSelectedCount;
- (WCDataItem *)findParentFeed:(WCMediaItem *)arg1;
- (long long)indexInSelectedMedia:(WCMediaItem *)arg1;
@end

