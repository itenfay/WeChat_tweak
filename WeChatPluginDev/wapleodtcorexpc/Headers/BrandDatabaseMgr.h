//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface BrandDatabaseMgr
{
    WCTDatabase *_db;
    WCTTable *_tableMPPageCacheItem;
    WCTTable *_tableMPPageReportItem;
    WCTDatabase *_offlineCacheDB;
    WCTTable *_tableMPPageOfflineCacheItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *tableMPPageOfflineCacheItem; // @synthesize tableMPPageOfflineCacheItem=_tableMPPageOfflineCacheItem;
@property(retain, nonatomic) WCTDatabase *offlineCacheDB; // @synthesize offlineCacheDB=_offlineCacheDB;
@property(retain) WCTTable *tableMPPageReportItem; // @synthesize tableMPPageReportItem=_tableMPPageReportItem;
@property(retain) WCTTable *tableMPPageCacheItem; // @synthesize tableMPPageCacheItem=_tableMPPageCacheItem;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)createTables;
- (id)dbPath;
- (void)closeDB;
- (void)openDB;
- (_Bool)deleteMPPageReportItemBeforeTime:(long long)arg1;
- (_Bool)deleteMPPageReportItemInWithItemStartId:(unsigned int)arg1 andEndId:(unsigned int)arg2;
- (unsigned int)getMPPageReportItemCountBeforeTime:(long long)arg1;
- (id)getMPPageReportItemListWithLimit:(unsigned int)arg1;
- (_Bool)addMPPageReportItemWithItem:(id)arg1;
- (void)deleteAllMPPageCacheItems;
- (_Bool)deleteMPPageCacheItemWithUpdateTimeEarlierThanTime:(unsigned int)arg1;
- (_Bool)addMPPageCacheItemList:(id)arg1;
- (unsigned long long)getMPPageCacheItemCount;
- (id)mpPageCacheItemWithIdentity:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)deleteOfflineCacheItemWithIdentity:(id)arg1;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (void)removeRecoverNotification;
- (void)registerRecoverNotification;
- (void)offlineCache_clearDataBase;
- (_Bool)offlineCache_addMPPageCacheItemList:(id)arg1;
- (id)getExpiredCacheItems;
- (id)offlineCache_mpPageCacheItemWithIdentity:(id)arg1;
- (void)offlineCache_createTables;
- (id)offlineCache_setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)offlineCache_DBPath;
- (void)offlineCache_closeDB;
- (void)offlineCache_openDB;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

