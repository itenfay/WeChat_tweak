//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface FavLocationDB
{
    WCTDatabase *m_db;
    WCTTable *m_table;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_table; // @synthesize m_table;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (_Bool)setAddress:(id)arg1 ByLocation:(struct CLLocationCoordinate2D)arg2 ByLanguage:(id)arg3;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D)arg1;
- (void)closeDBBeforeInit;
- (void)clearData;
- (void)closeDB;
- (void)setupDatabase;
- (id)pathForDatabase;
- (id)init;

@end

