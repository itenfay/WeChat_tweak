//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MMMetricsRootDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableAppRunningInfo;
}

- (void).cxx_destruct;
- (_Bool)deleteAppRunningInfo:(id)arg1;
- (_Bool)insertOrUpdateAppRunningInfo:(id)arg1;
- (id)getAllAppRunningInfos;
- (void)vacuumCleaner;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)closeDB;
- (id)initWithDBPath:(id)arg1;

@end

