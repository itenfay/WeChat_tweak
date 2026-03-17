//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmojiInfoObj, EmoticonStoreItem;

@protocol EmoticonDesignerRichPortfolioCellDelegate <NSObject>
- (void)OnOpenDetailViewForItem:(EmoticonStoreItem *)arg1;
- (void)OnOpenEmojiHalfScreen:(EmojiInfoObj *)arg1;
- (void)OnRewardStoreItem:(EmoticonStoreItem *)arg1;

@optional
- (void)OnClearStoreItemReddot:(EmoticonStoreItem *)arg1;
- (void)onDownloadStoreItem:(EmoticonStoreItem *)arg1;
@end

