//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EdgeComputingWCDBManager, NSArray, NSString;

@interface EdgeComputingDataDao
{
    NSString *configID;
    NSArray *fieldConfigModels;
    EdgeComputingWCDBManager *dbManager;
}

- (void).cxx_destruct;
- (id)getAndCheckEdgeDBPath;
- (id)getDBTableName:(id)arg1;
- (id)getDBFieldName:(id)arg1;
- (id)getDBFieldType:(unsigned int)arg1;
- (_Bool)checkColumnExist:(id)arg1;
- (unsigned long long)queryRowNum;
- (_Bool)deleteExpire:(unsigned long long)arg1;
- (_Bool)insert:(id)arg1;
- (_Bool)insertPatch:(id)arg1;
- (_Bool)dropTable;
- (void)updateTable;
- (_Bool)createIndex;
- (_Bool)createTable;
- (_Bool)checkTableExist;
- (void)dealloc;
- (id)init:(id)arg1 withFieldConfigModels:(id)arg2;

@end

