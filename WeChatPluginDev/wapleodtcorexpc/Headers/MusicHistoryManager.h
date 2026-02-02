//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCTDatabase;

@interface MusicHistoryManager
{
    WCTDatabase *_database;
    NSArray *_approvedAppidList;
}

+ (id)databaseRepairPath;
+ (id)databasePath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *approvedAppidList; // @synthesize approvedAppidList=_approvedAppidList;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (void)_clearUselessRecord;
- (void)clearUselessRecordWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearAllInDataBase;
- (_Bool)insertOrUpdate:(id)arg1;
- (double)validTimeStamp;
- (id)loadHistoryItemFromDatabaseWithLimit:(long long)arg1 offset:(long long)arg2;
- (void)reloadDataBase;
- (void)updateMusicListened:(id)arg1;
- (_Bool)canBeAddedToHistory:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

