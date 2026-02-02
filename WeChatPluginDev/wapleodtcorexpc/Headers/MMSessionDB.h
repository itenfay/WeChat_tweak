//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LSMFileStorage, MMSessionSetting, NSCache, NSMutableDictionary, WCTDatabase, WCTTable;

@interface MMSessionDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
    NSMutableDictionary *m_sessionCache;
    MMSessionSetting *m_sessionSetting;
    LSMFileStorage *m_fileStorage;
    NSCache *m_preLoadSessionCache;
    WCTTable *m_tableSessionDeleteInfo;
    WCTTable *m_tableSessionLastMsgInfo;
    _Bool m_disableAutoFixLastMsg;
}

- (void).cxx_destruct;
- (void)checkSessionLastMsgUpdate:(id)arg1;
- (long long)getSessionLastMsgId:(id)arg1;
- (void)removeSessionLastMsgRecords:(id)arg1;
- (void)updateSession:(id)arg1 lastMsgSvrId:(long long)arg2;
- (void)onRenewMMDB;
- (_Bool)DeleteOutOfDateSessionDeleteInfo;
- (id)GetSessionDeleteInfo:(id)arg1;
- (_Bool)InsertOrUpdateSessionDeleteInfo:(id)arg1;
- (void)DeleteSessions:(id)arg1;
- (void)DeleteSessionByUserName:(id)arg1;
- (void)AddOrModifySessions:(id)arg1;
- (void)ModifySession:(id)arg1;
- (void)AddSession:(id)arg1;
- (void)FulFillSession:(id)arg1 checkStatus:(_Bool)arg2;
- (void)ASyncFulFillSession:(id)arg1;
- (void)CleanupPreLoadSessionCache;
- (void)SetSessionCount:(unsigned int)arg1;
- (unsigned int)GetSessionCount;
- (void)SetSessionFailCount:(unsigned int)arg1;
- (unsigned int)GetSessionFailCount;
- (void)SetSessionVersion:(unsigned int)arg1;
- (unsigned int)GetSessionVersion;
- (void)ImportSessions:(id)arg1;
- (unsigned int)GetSessionModifyTimeInSeconds:(id)arg1;
- (void)deleteSessionOfUser:(id)arg1;
- (id)loadSessionOfUser:(id)arg1;
- (void)saveSessionInfos:(id)arg1;
- (_Bool)saveSessionInfo:(id)arg1;
- (long long)GetSessionImportTime;
- (void)SetSessionImported;
- (void)saveSessionSetting;
- (void)tryLoadSessionSetting;
- (void)dbImportSessions:(id)arg1;
- (_Bool)dbDeleteSessions:(id)arg1;
- (_Bool)dbDeleteSession:(id)arg1;
- (_Bool)dbAddOrModifySessions:(id)arg1;
- (_Bool)dbAddOrModifySession:(id)arg1;
- (id)GetAllSession;
- (id)GetAllSession:(_Bool *)arg1;
- (void)initDB;
- (id)init;

@end

