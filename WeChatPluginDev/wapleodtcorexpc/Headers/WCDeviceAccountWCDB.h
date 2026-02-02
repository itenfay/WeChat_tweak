//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface WCDeviceAccountWCDB
{
    WCTDatabase *m_db;
    WCTTable *m_tableAccount;
    WCTTable *m_tableAirKiss;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_tableAirKiss; // @synthesize m_tableAirKiss;
@property(retain, nonatomic) WCTTable *m_tableAccount; // @synthesize m_tableAccount;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (_Bool)insertOrUpdateInAirKissForKey:(id)arg1 WithData:(id)arg2;
- (id)getDataInAirKissForKey:(id)arg1;
- (void)delDeviceInfoInAccountForUser:(id)arg1 AndDeviceId:(id)arg2;
- (void)delDeviceInfosInAccountForUser:(id)arg1;
- (_Bool)insertOrUpdateDeviceInfoInAccount:(id)arg1;
- (id)getDeviceInfoInAccountForDID:(long long)arg1;
- (id)getDeviceInfoInAccountForMd5Str:(id)arg1;
- (id)getDeviceInfoInAccountForUser:(id)arg1 AndDeviceId:(id)arg2;
- (id)getAllDeviceInfosInAccountForUser:(id)arg1;
- (unsigned int)getCountOfDeviceInfosInAccountForUser:(id)arg1;
- (id)getAllDeviceInfosInAccount;
- (id)getDeviceBrandAccountWCDBPath;
- (_Bool)setupDB;

@end

