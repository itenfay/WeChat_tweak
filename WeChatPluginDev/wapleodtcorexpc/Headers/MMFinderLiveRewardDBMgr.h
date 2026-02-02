//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface MMFinderLiveRewardDBMgr
{
    WCTDatabase *_db;
    WCTTable *_tableLiveRewardGift;
}

- (void).cxx_destruct;
@property(retain) WCTTable *tableLiveRewardGift; // @synthesize tableLiveRewardGift=_tableLiveRewardGift;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void)willRecoverDatabase;
- (id)dbPath;
- (void)closeDB;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)openDB;
- (_Bool)deleteAllLiveRewardGiftItems;
- (_Bool)insertOrUpdateLiveRewardGiftItem:(id)arg1;
- (id)getLiveRewardGiftItemByProductId:(id)arg1;
- (id)getLiveRewardGiftItemsWithLimit:(unsigned int)arg1;
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

