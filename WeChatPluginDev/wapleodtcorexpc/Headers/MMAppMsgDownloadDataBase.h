//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface MMAppMsgDownloadDataBase
{
    WCTDatabase *_database;
    WCTTable *_downloadfileTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *downloadfileTable; // @synthesize downloadfileTable=_downloadfileTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (id)MMAppMsgDownloadDBPath;
- (id)MMAppMsgDownloadRootDir;
- (id)getAMDItemInDBFromSvrId:(long long)arg1;
- (id)getAMDItemInDB:(id)arg1;
- (_Bool)deleteAMDItemInDB:(id)arg1;
- (_Bool)updateAMDItemInDB:(id)arg1;
- (id)createTableWithName:(id)arg1 objectClass:(Class)arg2;
- (_Bool)tryCleanData;
- (void)dealloc;
- (void)createTables;
- (void)reloadDatabase;
- (id)init;

@end

