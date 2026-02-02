//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface VoIPDB
{
    WCTDatabase *m_db;
    WCTTable *m_table;
    WCTTable *m_tableVoIPMessageHistory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_tableVoIPMessageHistory; // @synthesize m_tableVoIPMessageHistory;
@property(retain, nonatomic) WCTTable *m_table; // @synthesize m_table;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (void)onDelMsg:(id)arg1 msgList:(id)arg2 deleteAll:(_Bool)arg3;
- (_Bool)deleteVoIpMessageHistoryWhere:(const void *)arg1;
- (id)getVoIPMesageHistoryWhere:(const void *)arg1 order:(const void *)arg2 limit:(long long)arg3;
- (id)getVoIPMesageHistoryByLimit:(long long)arg1;
- (_Bool)InsertVoIPMessageHistory:(id)arg1 isFromServer:(_Bool)arg2;
- (unsigned int)getExpireTimeForContact:(id)arg1;
- (unsigned int)getSDKModeForContact:(id)arg1;
- (_Bool)setIlinkStatus:(id)arg1 sdkMode:(unsigned int)arg2 expireTime:(unsigned int)arg3 liveTime:(unsigned int)arg4;
- (void)closeDBBeforeInit;
- (void)clearData;
- (void)closeDB;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (void)setupDatabase;
- (id)pathForDatabase;
- (id)init;

@end

