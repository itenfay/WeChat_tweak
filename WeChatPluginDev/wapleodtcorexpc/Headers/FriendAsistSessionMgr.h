//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface FriendAsistSessionMgr
{
    NSMutableDictionary *m_dicUnReadCount;
}

- (void).cxx_destruct;
- (void)onNewContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onSessionUpgrade;
- (void)moveOldData;
- (void)OnMsgNotAddDBSession:(id)arg1 MsgList:(id)arg2;
- (void)OnAddMsgForSpecialSession:(id)arg1 MsgList:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)asyncUpdateBlackContactHelloUnreadStatus:(unsigned int)arg1;
- (void)updateBlackContactHelloUnreadStatus:(unsigned int)arg1;
- (unsigned int)GetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2;
- (_Bool)SetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2 Status:(unsigned int)arg3;
- (void)AddFirstHelloMsg:(id)arg1 helloWord:(id)arg2 opCode:(unsigned int)arg3;
- (void)AddHelloMsg:(id)arg1 helloWord:(id)arg2 opCode:(unsigned int)arg3;
- (id)GetLastMessage:(id)arg1 HelloUser:(id)arg2 OnlyTo:(_Bool)arg3;
- (id)GetLastMessage:(id)arg1 OnlyTo:(_Bool)arg2;
- (void)ClearMsg:(id)arg1 HelloUser:(id)arg2;
- (void)ClearMsg:(id)arg1;
- (void)ClearUnRead:(id)arg1 HelloUser:(id)arg2;
- (id)GetHelloMsg:(id)arg1 HelloUser:(id)arg2 Limit:(int)arg3 OnlyTo:(_Bool)arg4;
- (id)GetHelloUsers:(id)arg1 Limit:(int)arg2 OnlyUnread:(_Bool)arg3;
- (unsigned int)getUnreadCountForChat:(id)arg1;
- (id)init;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

