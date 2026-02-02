//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MyFavoritesDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableFavItem;
    WCTTable *m_tableCdnUpload;
    WCTTable *m_tableFileRetainCount;
    WCTTable *m_tableTagItem;
    WCTTable *m_tableMusic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_tableMusic; // @synthesize m_tableMusic;
@property(retain, nonatomic) WCTTable *m_tableTagItem; // @synthesize m_tableTagItem;
@property(retain, nonatomic) WCTTable *m_tableFileRetainCount; // @synthesize m_tableFileRetainCount;
@property(retain, nonatomic) WCTTable *m_tableCdnUpload; // @synthesize m_tableCdnUpload;
@property(retain, nonatomic) WCTTable *m_tableFavItem; // @synthesize m_tableFavItem;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (void)tryFixTagItemTable;
- (_Bool)createTables;
- (void)closeDBBeforeInit;
- (void)clearTables;
- (void)closeDB;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)tryConfigCompression;
- (_Bool)initDB;
- (void)reloadDataBase;
- (void)dealloc;
- (_Bool)deleteFavoritesItemByLocalItemId:(unsigned int)arg1;
- (_Bool)deleteFavoritesItemById:(unsigned int)arg1;
- (_Bool)updateItemUsedTimes:(unsigned int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateItemLocalStatus:(int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateItemUpdateTime:(unsigned int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateUpdateSeq:(unsigned int)arg1 ByFavId:(unsigned int)arg2;
- (_Bool)updateItemInFavItemDBForFavObject:(id)arg1 ByFavId:(unsigned int)arg2;
- (_Bool)updateItemInFavItemDB:(id)arg1 ByLocalItemId:(unsigned int)arg2;
- (void)fillFavItemUpdatePropertiesForFavObject:(void *)arg1;
- (void)fillFavItemUpdateProperties:(void *)arg1;
- (unsigned int)getFavIndexByUpdateTime:(unsigned int)arg1;
- (id)getNeedCacheWebItems;
- (id)getNextPageFavoritesByType:(int)arg1 andSortType:(int)arg2 andMinDataSize:(unsigned long long)arg3 andUsedTimes:(unsigned int)arg4 andCurMinUpdateTime:(unsigned int)arg5;
- (id)getFirstPageFavoritesByType:(int)arg1 andSortType:(int)arg2;
- (unsigned int)getNeedBatchGetFavoritesItemCount;
- (id)getNeedBatchGetFavoritesItemListByType:(int)arg1 andMinUpdateTime:(unsigned int)arg2;
- (id)getNextPageFavoritesItemListByType:(int)arg1 andCurMinUpdateTime:(unsigned int)arg2;
- (id)getFirstPageFavoritesItemListByType:(int)arg1;
- (id)getAllCapacityType;
- (_Bool)clearFavSearchContent;
- (id)getUnsyncFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavoritesItemFromUpdateSeq:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavoritesItemListFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getDeleteItemList;
- (id)getAllFavoritesItemList;
- (id)getDownloadFailedItemList;
- (id)getBeforeAsyncUploadingItemList;
- (id)getAsyncUploadFailedItemList;
- (id)getUploadFailedItemList;
- (id)getDownloadingItemList;
- (id)getAsyncUploadingItemList;
- (id)getUploadingItemList;
- (id)checkBeforeAddItemByFavId:(unsigned int)arg1 andLocalId:(unsigned int)arg2;
- (id)getLastFavoritesItem;
- (id)getFavoritesItemsByCondition:(const void *)arg1 limit:(int)arg2 offset:(int)arg3;
- (id)getFavoritesItemBySourceId:(id)arg1;
- (id)getFavoritesItemByLocalIdArr:(id)arg1;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemById:(unsigned int)arg1;
- (_Bool)insertNewRowInFavoritesItemTable:(id)arg1;
- (_Bool)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1 ItemLocalDataId:(id)arg2 andType:(int)arg3;
- (_Bool)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (_Bool)updateCdnInfo:(id)arg1 byItemId:(unsigned int)arg2 ItemLocalDataId:(id)arg3 andType:(int)arg4;
- (id)getNextAsyncUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getUploadCdnInfoByItemId:(unsigned int)arg1 LocalItemDataId:(id)arg2 andType:(int)arg3;
- (_Bool)insertNewRowInCdnInfoTable:(id)arg1;
- (id)getRetainMd5ByLocalId:(unsigned int)arg1;
- (_Bool)deleteItemFromFavoritesFileRetainCountTableByMd5:(id)arg1 andLocalItemId:(unsigned int)arg2;
- (_Bool)updateRetainItemBy:(id)arg1 localId:(unsigned int)arg2 dataFmt:(id)arg3;
- (_Bool)insertNewRowInFileRetainCountTable:(id)arg1 ItemLocalId:(unsigned int)arg2 dataFmt:(id)arg3;
- (_Bool)isMd5RetainCountZero:(id)arg1;
- (id)getRetainItemByMd5:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)isItemExist:(id)arg1 andLocalItemId:(unsigned int)arg2 dataFmt:(id)arg3;
- (_Bool)deleteTagItems:(id)arg1;
- (_Bool)updateTagItems:(id)arg1;
- (_Bool)insertTagItems:(id)arg1;
- (id)getAllTagItems;
- (unsigned int)getFavMusicLocalIdByMusicId:(id)arg1;
- (_Bool)deleteFavMusicByLocalId:(unsigned int)arg1;
- (_Bool)insertFavMusicByMusicId:(id)arg1 localFavId:(unsigned int)arg2;

@end

