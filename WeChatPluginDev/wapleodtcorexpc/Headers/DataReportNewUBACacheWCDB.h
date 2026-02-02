//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface DataReportNewUBACacheWCDB : NSObject
{
    WCTDatabase *m_dataBase;
    WCTTable *m_table;
}

- (void).cxx_destruct;
- (id)query;
- (void)clear;
- (void)save:(id)arg1;
- (id)genDBPath;
- (void)close;
- (void)reset;

@end

