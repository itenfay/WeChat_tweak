//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface PublicWifiDB
{
    WCTDatabase *_m_db;
    WCTTable *_m_table;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_table; // @synthesize m_table=_m_table;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db=_m_db;
- (id)getApBaseWithSsid:(id)arg1 opCode:(unsigned int)arg2;
- (id)getApBaseWithMac:(id)arg1;
- (_Bool)deleteApBase:(id)arg1;
- (_Bool)saveApBase:(id)arg1;
- (_Bool)cleanDB;
- (void)closeDB;
- (void)initDB;

@end

