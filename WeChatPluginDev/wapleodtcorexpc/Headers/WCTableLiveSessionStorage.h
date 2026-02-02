//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString, OrderedDictionary, WCTDatabase, WCTTable;

@interface WCTableLiveSessionStorage : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
    Class m_sessionClass;
    NSString *m_sessionType;
    OrderedDictionary *m_sessionObjectOrderDict;
    NSString *_identityID;
    NSString *_sessionTableName;
    WCTDatabase *_customDataBase;
    NSRecursiveLock *_sessionCacheLock;
}

+ (id)dataBaseWithSessionType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *sessionCacheLock; // @synthesize sessionCacheLock=_sessionCacheLock;
@property(retain, nonatomic) WCTDatabase *customDataBase; // @synthesize customDataBase=_customDataBase;
@property(retain, nonatomic) NSString *sessionTableName; // @synthesize sessionTableName=_sessionTableName;
@property(copy, nonatomic) NSString *identityID; // @synthesize identityID=_identityID;
- (id)getSessionId:(id)arg1;
- (void)resortSessions;
- (void)initDB;
- (_Bool)isDefaultSessionTable;
- (void)checkLoadData;
- (id)sessionDirectoryPath;
- (_Bool)deleteSessionCacheAndDB;
- (void)clearSessionCache;
- (_Bool)deleteAllSessions;
- (_Bool)deleteSessionWithSessionId:(id)arg1;
- (_Bool)deleteSessionAtIndex:(long long)arg1;
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

