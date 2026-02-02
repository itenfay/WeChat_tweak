//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface MMUserDataOperateDB
{
    WCTDatabase *m_database;
    WCTTable *m_userDataOperateItemTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_userDataOperateItemTable; // @synthesize m_userDataOperateItemTable;
@property(retain, nonatomic) WCTDatabase *m_database; // @synthesize m_database;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (id)databasePath;
- (_Bool)removeUserDataOperateWithBeginTime:(unsigned long long)arg1 andEndTime:(unsigned long long)arg2;
- (id)getBatchUploadUserDataListWithBeginTime:(unsigned long long)arg1 andEndTime:(unsigned long long)arg2 arrCombineReportForUserDataType:(id)arg3;
- (id)getEarliestUserDataOperate;
- (_Bool)insertUserDataOperateItem:(id)arg1 withHandle:(id)arg2;
- (void)insertUserDataOperateItemList:(id)arg1;
- (void)closeDB;
- (_Bool)createUserDataOperateItemTable;
- (void)createTables;
- (_Bool)reloadDataBase;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

