//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface ChatRoomInvitationDB : NSObject
{
    WCTDatabase *_database;
    WCTTable *_table;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (unsigned int)getCountWithChatRoom:(id)arg1 afterTime:(unsigned int)arg2;
- (_Bool)deleteInvitationsWithChatRoom:(id)arg1 offset:(long long)arg2;
- (_Bool)deleteAllInvitationsWithChatRoom:(id)arg1;
- (_Bool)deleteInvitationWithChatRoom:(id)arg1 svrId:(long long)arg2;
- (_Bool)updateInvitationWithChatRoom:(id)arg1 invitation:(id)arg2;
- (_Bool)addNewInvitationWithChatRoom:(id)arg1 invitation:(id)arg2;
- (_Bool)replaceInvitationWithChatRoom:(id)arg1 oldInvitationId:(long long)arg2 newInvitation:(id)arg3;
- (id)getInvitationsWithChatRoom:(id)arg1;
- (id)getLastInvitationWithChatRoom:(id)arg1;
- (id)getInvitationWithChatRoom:(id)arg1 oneOfHistoryMsgId:(long long)arg2;
- (id)getInvitationWithChatRoom:(id)arg1 svrId:(long long)arg2;
- (id)getInvitationWithChatRoom:(id)arg1 inviter:(id)arg2 memberList:(id)arg3 hasApproved:(_Bool)arg4;
- (id)tableNameForChatRoom:(id)arg1;
- (id)tableForChatRoom:(id)arg1;
- (void)didRecoverDatabase;
- (void)reloadDatabase;
- (id)init;

@end

