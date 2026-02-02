//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface WePkgConfigMgr
{
    WCTDatabase *_db;
    WCTTable *_tablePkgRegularConfig;
    WCTTable *_tablePkgUpdateConfig;
    WCTTable *_tablePkgGlobalConfig;
    WCTTable *_tablePkgNonAtomicSingleFileConfig;
}

- (void).cxx_destruct;
@property(retain) WCTTable *tablePkgNonAtomicSingleFileConfig; // @synthesize tablePkgNonAtomicSingleFileConfig=_tablePkgNonAtomicSingleFileConfig;
@property(retain) WCTTable *tablePkgGlobalConfig; // @synthesize tablePkgGlobalConfig=_tablePkgGlobalConfig;
@property(retain) WCTTable *tablePkgUpdateConfig; // @synthesize tablePkgUpdateConfig=_tablePkgUpdateConfig;
@property(retain) WCTTable *tablePkgRegularConfig; // @synthesize tablePkgRegularConfig=_tablePkgRegularConfig;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void)reportDBFail:(id)arg1 Version:(id)arg2 Reason:(id)arg3;
- (id)getRegularConfigListByAppid:(id)arg1;
- (id)getAllNonAtomicSingFileConfig;
- (_Bool)deleteNonAtomicSingleFileConfigByPkgId:(id)arg1;
- (_Bool)insertOrUpdateNonAtomicSingFileConfig:(id)arg1;
- (id)getNonAtomicSingFileConfigByPkgId:(id)arg1;
- (_Bool)haveUpdateConfigFor:(id)arg1;
- (id)getAllUpdateConfig;
- (_Bool)deleteUpdateConfigByPkgId:(id)arg1;
- (id)getUpdateConfigByPkgId:(id)arg1;
- (_Bool)insertOrUpdateUpdateConfig:(id)arg1;
- (id)getAllRegularConfigs;
- (_Bool)deleteRegularConfigByPkgId:(id)arg1;
- (id)getRegularConfigByPkgId:(id)arg1;
- (_Bool)insertOrUpdateRegularConfig:(id)arg1;
- (id)getLastCheckUpdateVersion:(id)arg1;
- (_Bool)updateLastCheckUpdateVersion:(id)arg1 Version:(id)arg2;
- (_Bool)updateLastCheckUpdateTimestamp:(id)arg1;
- (unsigned int)getLastCheckUpdateTimestamp:(id)arg1;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)closeDB;
- (void)openDB;

@end

