//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface MMGroupLiveDBMgr
{
    WCTDatabase *_db;
    WCTTable *_tableLiveInfo;
}

- (void).cxx_destruct;
@property(retain) WCTTable *tableLiveInfo; // @synthesize tableLiveInfo=_tableLiveInfo;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void)willRecoverDatabase;
- (id)dbPath;
- (void)closeDB;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)openDB;
- (_Bool)updateLiveInfoItemByLiveId:(unsigned long long)arg1 enableLiveReplay:(_Bool)arg2;
- (_Bool)updateLiveInfoItemByRoomId:(id)arg1 barStatus:(unsigned int)arg2;
- (_Bool)updateLiveInfoItemByLiveId:(unsigned long long)arg1 barStatus:(unsigned int)arg2;
- (_Bool)updateLiveInfoItemByLiveId:(unsigned long long)arg1 status:(unsigned int)arg2;
- (_Bool)deleteLiveInfoItemsByRoomId:(id)arg1;
- (_Bool)deleteLiveInfoItemByLiveId:(unsigned long long)arg1;
- (_Bool)insertOrUpdateLiveInfoDBItem:(id)arg1;
- (_Bool)insertLiveInfoDBItem:(id)arg1;
- (id)getLiveInfoItemsByLiveIdList:(id)arg1;
- (id)getLiveInfoItemByLiveId:(unsigned long long)arg1;
- (id)getLiveInfoItemsWithAnchor:(id)arg1 status:(unsigned int)arg2 maxTimeId:(unsigned long long)arg3 limit:(unsigned int)arg4;
- (id)getLiveInfoItemsWithRoomId:(id)arg1 status:(unsigned int)arg2 maxTimeId:(unsigned long long)arg3 limit:(unsigned int)arg4;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

