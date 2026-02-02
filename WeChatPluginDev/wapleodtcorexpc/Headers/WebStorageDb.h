//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface WebStorageDb : NSObject
{
    WCTDatabase *_db;
    WCTTable *_tableWebStorageConfig;
    WCTTable *_tableWebStorageGlobalConfig;
}

- (void).cxx_destruct;
@property(retain) WCTTable *tableWebStorageGlobalConfig; // @synthesize tableWebStorageGlobalConfig=_tableWebStorageGlobalConfig;
@property(retain) WCTTable *tableWebStorageConfig; // @synthesize tableWebStorageConfig=_tableWebStorageConfig;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (id)getAllGlobalConfig;
- (id)getAllConfig;
- (_Bool)deleteGlobalConfig:(id)arg1 WeightStr:(id)arg2;
- (_Bool)deleteGlobalConfigsWith:(id)arg1;
- (_Bool)deleteConfigsWith:(id)arg1;
- (_Bool)deleteConfig:(id)arg1 Key:(id)arg2;
- (id)getExpireConfigList;
- (id)getOldestWebStorageConfig:(id)arg1 WeightStr:(id)arg2;
- (id)getAscendingWeightStrArray:(id)arg1;
- (id)getStorageAppIdList;
- (id)getNewestWebStorageConfig:(id)arg1;
- (id)getWebStorageConfig:(id)arg1 Key:(id)arg2;
- (long long)getStorageSize:(id)arg1;
- (_Bool)compareWeightStr:(id)arg1 WeightStr2:(id)arg2;
- (void)adjustRealWeight:(id)arg1;
- (_Bool)insertWeightIfNeed:(id)arg1 WeightStr:(id)arg2;
- (id)getGlobalConfig:(id)arg1 WeightStr:(id)arg2;
- (_Bool)setConfig:(id)arg1 Key:(id)arg2 ValueSzie:(unsigned int)arg3 WeightStr:(id)arg4 ExpireTimestamp:(unsigned int)arg5 FilePath:(id)arg6;
- (void)closeDbBeforeInit;
- (void)closeDb;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)createTable;
- (_Bool)initDb;

@end

