//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface WebRecordDB
{
    WCTDatabase *_db;
    WCTTable *_webRecordTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *webRecordTable; // @synthesize webRecordTable=_webRecordTable;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (_Bool)db_tryDeleteOutOfDateLink;
- (_Bool)db_DeleteRecordInfoDataByUrl:(id)arg1;
- (void)deleteRedundent;
- (_Bool)db_InsertOrUpdateRecordInfoData:(id)arg1;
- (id)db_GetRecordInfoDataByUrl:(id)arg1;
- (id)db_GetAllRecordInfoData;
- (unsigned int)db_GetRecordCount;
- (_Bool)db_DeleteAllRecord;
- (void)closeDB;
- (_Bool)initDB;

@end

