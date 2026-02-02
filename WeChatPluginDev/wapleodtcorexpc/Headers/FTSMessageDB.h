//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSDB;

@interface FTSMessageDB : NSObject
{
    FTSDB *_database;
    _Bool _isHandlingUsernameFailIdRetry;
    _Bool _isHandlingAutoReparing;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHandlingAutoReparing; // @synthesize isHandlingAutoReparing=_isHandlingAutoReparing;
@property(nonatomic) _Bool isHandlingUsernameFailIdRetry; // @synthesize isHandlingUsernameFailIdRetry=_isHandlingUsernameFailIdRetry;
@property(retain, nonatomic) FTSDB *database; // @synthesize database=_database;
- (void)retrySetUserNameInvalid;
- (void)addUserNameInvalidFail:(id)arg1;
- (unsigned long long)calculateAllInvalidMsg;
- (void)getIndexProgressForSession:(id)arg1 preCursor:(unsigned long long *)arg2 nextCursor:(unsigned long long *)arg3 fts5Migrated:(_Bool *)arg4;
- (unsigned int)getIndexTableIdForSession:(id)arg1 msgLocalId:(unsigned int)arg2 content:(id *)arg3;
- (unsigned int)getIndexCountForUsr:(id)arg1;
- (void)getAllSessions:(unsigned int *)arg1 andAllIndexMsg:(unsigned int *)arg2;
- (_Bool)deleteByRecordLimit:(unsigned int)arg1 finish:(_Bool *)arg2 operateCnt:(unsigned int *)arg3 cancelBlock:(CDUnknownBlockType)arg4;
- (_Bool)updateToDeleteLocalIds:(id)arg1 usr:(id)arg2;
- (_Bool)deleteInvalidRowsInChatTable:(unsigned int)arg1 outUsr:(id *)arg2 outRemains:(unsigned int *)arg3 cancelBlock:(CDUnknownBlockType)arg4;
- (_Bool)hasInvalidRowsInChatTable;
- (unsigned int)getPreCursorMesId:(id)arg1;
- (unsigned int)getNextCursorMesId:(id)arg1;
- (id)queryText:(id)arg1 limitUsrname:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (_Bool)migrateToFTS5WithLimit:(int)arg1 isFinish:(_Bool *)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (_Bool)updateUserNameInvalid:(id)arg1;
- (_Bool)batchInsertMsgToFTSTable:(id)arg1 forbidLog:(_Bool)arg2;
- (_Bool)insertNewRowInUserNameIDTable:(id)arg1 lastLocalId:(unsigned int)arg2;
- (void)preloadCacheUser;
- (_Bool)dropAllTable;
- (_Bool)createAllTable;
- (_Bool)initDB:(id)arg1;
- (void)dealloc;
- (void)logFTSIndexStatus:(id)arg1;
- (_Bool)asyncCheckAndRepair:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

