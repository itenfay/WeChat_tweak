//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, TableSessionStorageSetting, WCTDatabase, WCTTable;
@protocol ITableSessionStorageDelegate;

@interface WCTableSessionStorage : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
    Class m_sessionClass;
    NSString *m_sessionType;
    NSMutableArray *m_sessionObjectList;
    NSMutableSet *m_tempSessionObjects;
    id <ITableSessionStorageDelegate> m_delegate;
    TableSessionStorageSetting *m_setting;
    NSString *_identityID;
    NSString *_sessionTableName;
    WCTDatabase *_customDataBase;
}

+ (void)processVersionUpdate;
+ (id)dataBaseWithSessionType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTDatabase *customDataBase; // @synthesize customDataBase=_customDataBase;
@property(retain, nonatomic) NSString *sessionTableName; // @synthesize sessionTableName=_sessionTableName;
@property(copy, nonatomic) NSString *identityID; // @synthesize identityID=_identityID;
@property(nonatomic) __weak id <ITableSessionStorageDelegate> delegate; // @synthesize delegate=m_delegate;
- (_Bool)renameDefaultTableNameTo:(id)arg1;
- (void)resortSessions;
- (void)initDB;
- (id)_settingPath;
- (_Bool)isDefaultSessionTable;
- (void)checkLoadData;
- (_Bool)checkSessionVersion;
- (void)updateSessionSetting;
- (id)sessionDirectoryPath;
- (_Bool)copySessionCacheToSessionType:(id)arg1;
- (_Bool)deleteSessionCacheAndDB;
- (void)clearSessionCacheAndReimportSession;
- (void)clearSessionCache;
- (_Bool)deleteAllSessions;
- (_Bool)deleteSessionWithSessionId:(id)arg1;
- (_Bool)deleteSessionAtIndex:(long long)arg1;
- (_Bool)clearAllTempSessions;
- (_Bool)isTempSessionWithSessionId:(id)arg1;
- (_Bool)isTempSession:(id)arg1;
- (_Bool)addOrUpdateTempSession:(id)arg1;
- (_Bool)addOrUpdateSessionList:(id)arg1;
- (_Bool)addOrUpdateSession:(id)arg1;
- (id)allSessions;
- (id)sessionWithSessionId:(id)arg1;
- (id)sessionAtIndex:(long long)arg1;
- (long long)sessionCount;
@property(readonly, nonatomic) NSString *sessionType;
- (void)dealloc;
- (id)initWithSessionType:(id)arg1 targetDB:(id)arg2 customTableName:(id)arg3 withClass:(Class)arg4;
- (id)initWithSessionType:(id)arg1 withClass:(Class)arg2;

@end

