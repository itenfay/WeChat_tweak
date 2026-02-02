//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase;

@interface WXGMigrationMsgItemDB : NSObject
{
    WCTDatabase *_msgItemDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTDatabase *msgItemDB; // @synthesize msgItemDB=_msgItemDB;
- (id)p_getMigrationTable;
- (id)p_getTagTable;
- (id)p_getMsgItemTable;
- (_Bool)deleteTagObjectByMsgID:(id)arg1;
- (id)getMsgListIDForSessionName:(id)arg1;
- (id)getAllSessionName;
- (id)getAllTagObject;
- (_Bool)isMigrationTableNotEmpty;
- (long long)getLastEndTimeOfSession:(id)arg1;
- (void)insertDataWithMigrationObject:(id)arg1;
- (void)insertDataWithTagObject:(id)arg1;
- (_Bool)deleteMsgListArrayFormMsgIDTable:(id)arg1;
- (id)getAllMsgListIDFromMsgIDTable;
- (void)insertDataWithMsgIDObject:(id)arg1;
- (void)removeDBFile;
- (void)closeDB;
- (void)dealloc;

@end

