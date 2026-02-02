//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface EdgeComputingCacheStrategyWCDB
{
    WCTDatabase *_dataBase;
    WCTTable *_cacheDataTable;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)query:(id)arg1;
- (void)deleteExpire:(unsigned long long)arg1;
- (void)clear;
- (void)remove:(id)arg1;
- (void)save:(id)arg1;
- (id)genDBPath;
- (void)close;
- (void)reset;
- (id)getTableName;

@end

