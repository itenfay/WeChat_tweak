//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCTDatabase;

@interface WXGBackupIndexDB : NSObject
{
    WCTDatabase *_indexDB;
    unsigned long long _indexCount;
    unsigned long long _indexFailedCount;
    unsigned long long _recoverInfoCount;
    unsigned long long _recoverInfoFailedCount;
    NSString *_indexDBPath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *indexDBPath; // @synthesize indexDBPath=_indexDBPath;
@property(nonatomic) unsigned long long recoverInfoFailedCount; // @synthesize recoverInfoFailedCount=_recoverInfoFailedCount;
@property(nonatomic) unsigned long long recoverInfoCount; // @synthesize recoverInfoCount=_recoverInfoCount;
@property(nonatomic) unsigned long long indexFailedCount; // @synthesize indexFailedCount=_indexFailedCount;
@property(nonatomic) unsigned long long indexCount; // @synthesize indexCount=_indexCount;
@property(retain, nonatomic) WCTDatabase *indexDB; // @synthesize indexDB=_indexDB;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (id)p_getRecoverInfoTable;
- (id)p_getMigrationTable;
- (id)p_getMsgListTable;
- (unsigned long long)getTotalSessionCount;
- (id)getRecoverInfoOfSession:(id)arg1;
- (void)insertRecoverInfo:(id)arg1;
- (id)getAllSessionName;
- (_Bool)deleteIndexObjectByMsgID:(id)arg1;
- (id)getMsgListIDForSession:(id)arg1;
- (long long)getLastTimeOfSession:(id)arg1;
- (void)insertMigrationObject:(id)arg1;
- (void)insertIndexObject:(id)arg1;
- (void)removeDBFile;
- (void)closeDB;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

