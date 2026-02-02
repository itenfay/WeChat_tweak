//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface GroupNoticeDB : NSObject
{
    WCTDatabase *_database;
    WCTTable *_table;
    WCTTable *_revokeMsgTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *revokeMsgTable; // @synthesize revokeMsgTable=_revokeMsgTable;
@property(retain, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (id)getDBPath;
- (_Bool)removeOldRevokeMessagesBefore:(unsigned int)arg1;
- (_Bool)insertRevokeMessage:(id)arg1;
- (id)getRevokeMsgBySourceId:(id)arg1;
- (id)getRevokeMsgByAnnouncementId:(id)arg1;
- (void)removeRelationWithUserName:(id)arg1;
- (void)removeRelationWithSourceId:(id)arg1;
- (unsigned int)getMsgLocalIdWithSourceId:(id)arg1;
- (void)addRelationWithSourceId:(id)arg1 msgLocalId:(unsigned int)arg2 userName:(id)arg3;
- (id)createTable:(Class)arg1;
- (id)init;

@end

