//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem;

@protocol FavoritesTagMgrDelegate
- (FavoritesItem *)getFavoritesItemByfavId:(unsigned int)arg1;
- (void)updateItemInFavItemDB:(FavoritesItem *)arg1;
- (FavoritesItem *)getFavoritesItemByLocalId:(unsigned int)arg1;
@end

