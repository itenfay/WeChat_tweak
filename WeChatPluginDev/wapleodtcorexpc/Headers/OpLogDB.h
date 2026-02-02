//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface OpLogDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
}

- (void).cxx_destruct;
- (_Bool)DeleteOplogInDB:(unsigned int)arg1;
- (id)GetOplogsAfterOplogId:(unsigned int)arg1 limit:(int)arg2;
- (_Bool)InsertOplogInDB:(id)arg1;
- (void)CloseDB;
- (_Bool)ConfigWithDir:(id)arg1;
- (void)dealloc;

@end

