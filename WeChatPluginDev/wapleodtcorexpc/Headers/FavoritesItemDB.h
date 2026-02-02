//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MyFavoritesDB;

@interface FavoritesItemDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (unsigned int)getLastFavItemLocalId;
- (id)getUnsyncFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavoritesItemFromUpdateSeq:(unsigned int)arg1 Limit:(int)arg2;
- (_Bool)getFavoritesItemList:(id)arg1 From:(unsigned int)arg2 Limit:(int)arg3;
- (unsigned int)getFavIndexByUpdateTime:(unsigned int)arg1;
- (_Bool)getDeletedItemList:(id)arg1;
- (_Bool)updateItemUsedTimes:(id)arg1;
- (_Bool)updateItemLocalStatus:(id)arg1;
- (_Bool)getNeedCacheWebItem:(id)arg1;
- (_Bool)getAsyncUploadFailedItemList:(id)arg1;
- (_Bool)getAsyncUploadingItemList:(id)arg1;
- (id)checkBeforeAddItemByFavId:(unsigned int)arg1 andLocalId:(unsigned int)arg2;
- (_Bool)getAllFavoritesItems:(id)arg1;
- (_Bool)updateItemUpdateTime:(unsigned int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateUpdateSeq:(unsigned int)arg1 ByFavId:(unsigned int)arg2;
- (unsigned int)getNeedBatchGetFavoritesItemCount;
- (_Bool)getNeedBatchGetFavoritesItemList:(id)arg1 byType:(int)arg2 andMinUpdateTime:(unsigned int)arg3;
- (_Bool)getNextPageFavoritesByType:(id)arg1 byType:(int)arg2 andSortType:(int)arg3 andMinDataSize:(unsigned long long)arg4 andUsedTimes:(unsigned int)arg5 andCurMinUpdateTime:(unsigned int)arg6;
- (_Bool)getFirstPageFavoritesByType:(id)arg1 byType:(int)arg2 andSortType:(int)arg3;
- (_Bool)getNextPageFavoritesItemList:(id)arg1 byType:(int)arg2 andCurMinUpdateTime:(unsigned int)arg3;
- (_Bool)getFirstPageFavoritesItemList:(id)arg1 byType:(int)arg2;
- (id)getAllCapacityType;
- (_Bool)updateItemInFavItemDBByFavObject:(id)arg1;
- (_Bool)updateItemInFavItemDB:(id)arg1;
- (_Bool)getBeforeAsyncUploadingItem:(id)arg1;
- (_Bool)existBeforeAsyncUploadingItem;
- (_Bool)getDownloadFailedItemList:(id)arg1;
- (_Bool)getUploadFailedItemList:(id)arg1;
- (_Bool)getDownloadingItemList:(id)arg1;
- (_Bool)getUploadingItemList:(id)arg1;
- (_Bool)deleteFavoritesItemByLocalItemId:(unsigned int)arg1;
- (_Bool)deleteFavoritesItemById:(unsigned int)arg1;
- (id)getFavoritesItemsWithTagIdLimit:(int)arg1 offset:(int)arg2;
- (id)getFavoritesItemBySourceId:(id)arg1;
- (id)getFavoritesItemByLocalIdArr:(id)arg1;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemById:(unsigned int)arg1;
- (id)getDBItemById:(unsigned int)arg1;
- (_Bool)insertNewRowInFavoritesItem:(id)arg1 XML:(id)arg2;
- (void)fillLegalItemsArray:(id)arg1 withDBItems:(id)arg2;
- (void)fillItemsArray:(id)arg1 withDBItems:(id)arg2;
- (void)fillDBFavItem:(id)arg1 fromFavObject:(id)arg2;
- (void)fillDBFavItem:(id)arg1 fromFavItem:(id)arg2 xml:(id)arg3;
- (void)fillDBFavItem:(id)arg1 fromFavItem:(id)arg2;
- (_Bool)getFavoritesItemValue:(id)arg1 fromDBItem:(id)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)initDB:(id)arg1;
- (id)init;

@end

