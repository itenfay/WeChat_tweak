//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatRoomInvitationDB, NSMutableDictionary, NSString;

@interface ChatRoomInvitationMgr
{
    ChatRoomInvitationDB *_db;
    NSMutableDictionary *_dicLastReadTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicLastReadTime; // @synthesize dicLastReadTime=_dicLastReadTime;
@property(retain, nonatomic) ChatRoomInvitationDB *db; // @synthesize db=_db;
- (void)updateSessionGreenLabel:(id)arg1;
- (void)saveLastReadTime;
- (void)loadLastReadTime;
- (id)lastReadTimeFilePath;
- (unsigned int)unReadCountForChatRoom:(id)arg1;
- (unsigned int)lastReadTimeForChatRoom:(id)arg1;
- (void)updateLastReadTimeForChatRoom:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnApproveChatRoomInvitation:(id)arg1 ErrorInfo:(id)arg2 Success:(_Bool)arg3 withUserData:(id)arg4;
- (void)onChatRoomInvitationApprovedWithChatRoom:(id)arg1 svrId:(long long)arg2;
- (void)onChatRoomInvitationApproved:(id)arg1;
- (_Bool)approveChatRoomInvitation:(id)arg1;
- (_Bool)deleteAllInvitationsWithChatRoom:(id)arg1;
- (_Bool)deleteChatRoomInvitation:(id)arg1;
- (id)invitationWrapFromMessageWrap:(id)arg1;
- (id)getInvitationsWithChatRoom:(id)arg1;
- (void)addNewChatRoomInvitationMessage:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

