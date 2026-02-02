//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface MMAppMsgUploadDataBase
{
    WCTDatabase *_database;
    WCTTable *_uploadfileTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *uploadfileTable; // @synthesize uploadfileTable=_uploadfileTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (id)MMAppMsgUploadDBPath;
- (id)MMAppMsgUploadRootDir;
- (id)getAMUItem:(unsigned int)arg1;
- (_Bool)deleteAMUItemForMsg:(id)arg1;
- (_Bool)deleteAllItemForUser:(id)arg1;
- (_Bool)deleteAMUItemInDB:(id)arg1;
- (_Bool)updateAMUItemInDB:(id)arg1;
- (id)createTableWithName:(id)arg1 objectClass:(Class)arg2;
- (_Bool)tryCleanData;
- (void)dealloc;
- (void)createTables;
- (void)reloadDatabase;
- (id)init;

@end

