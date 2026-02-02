//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface WCGroupUndoneDatabase : NSObject
{
    WCTDatabase *_database;
    WCTTable *_todoTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *todoTable; // @synthesize todoTable=_todoTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (_Bool)deleteExpiredEventInfoForChatroom:(id)arg1;
- (_Bool)deleteChatRoomToolMessageEvent:(id)arg1;
- (id)getChatRoomToolEvent:(id)arg1 withAppUserName:(id)arg2 limit:(unsigned int)arg3;
- (_Bool)deleteChatRoomToolMessageEventInSameRelatedMesSvrID:(id)arg1;
- (id)getAnyChatroomToolMessageEventWithSvrId:(long long)arg1 chatroom:(id)arg2 limit:(unsigned int)arg3;
- (id)getAnyChatroomToolMessageEventWithEventId:(id)arg1 chatroom:(id)arg2 limit:(unsigned int)arg3;
- (id)getChatroomToolMessageEventWithSvrId:(long long)arg1 chatroom:(id)arg2 limit:(unsigned int)arg3;
- (id)getChatroomToolMessageEventWithEventId:(id)arg1 chatroom:(id)arg2 limit:(unsigned int)arg3;
- (id)getChatRoomToolMessageEventList:(id)arg1 fromEventTime:(unsigned int)arg2 limit:(unsigned int)arg3;
- (_Bool)checkIfDisposeWithSameSvrId:(unsigned long long)arg1 chatroom:(id)arg2;
- (_Bool)markDeleteChatRoomToolMessageEventInSameEventId:(id)arg1;
- (_Bool)deleteChatRoomToolMessageEventInSameEventId:(id)arg1;
- (_Bool)updateChatRoomToolMessageEventInDB:(id)arg1;
- (id)createTableWithName:(id)arg1 objectClass:(Class)arg2;
- (void)createTables;
- (void)reloadDatabase;
- (void)clearDatabase;
- (id)init;

@end

