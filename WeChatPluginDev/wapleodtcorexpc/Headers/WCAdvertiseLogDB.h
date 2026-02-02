//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface WCAdvertiseLogDB
{
    WCTDatabase *m_db;
    WCTTable *m_table;
}

- (void).cxx_destruct;
- (_Bool)deleteADLogs:(unsigned int)arg1 toLocalId:(unsigned int)arg2;
- (id)getADLogs:(unsigned int)arg1 toLocalId:(unsigned int)arg2 limit:(int)arg3;
- (_Bool)insertADLogItem:(id)arg1;
- (unsigned int)getMaxLocalId;
- (id)getLogTable;
- (void)closeDB;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (id)initWithPath:(id)arg1;

@end

