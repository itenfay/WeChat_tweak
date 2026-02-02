//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMSessionInfo, NSMutableArray, NSMutableSet, NSString;

@interface ChatBoxMgr
{
    _Bool _isChatBoxEnable;
    NSMutableSet *_chatboxSessionUsernames;
    NSMutableSet *_addChatboxPendding;
    NSMutableArray *_chatBoxSessions;
    MMSessionInfo *_chatBoxSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMSessionInfo *chatBoxSession; // @synthesize chatBoxSession=_chatBoxSession;
@property(retain, nonatomic) NSMutableArray *chatBoxSessions; // @synthesize chatBoxSessions=_chatBoxSessions;
@property(retain, nonatomic) NSMutableSet *addChatboxPendding; // @synthesize addChatboxPendding=_addChatboxPendding;
@property(retain, nonatomic) NSMutableSet *chatboxSessionUsernames; // @synthesize chatboxSessionUsernames=_chatboxSessionUsernames;
@property(nonatomic) _Bool isChatBoxEnable; // @synthesize isChatBoxEnable=_isChatBoxEnable;
- (void)handleUserDeleteOrHideSession:(id)arg1;
- (_Bool)isChatBoxSessionUnread;
- (_Bool)shouldShowNotifyForMessage:(id)arg1;
- (id)lastMsgForChatBoxSession;
- (unsigned int)genLastTimeForChatBoxSession;
- (void)updateChatBoxSessionDesc;
- (id)generateSessionForUsername:(id)arg1;
- (void)updateChatBoxSessionWithSortTime:(unsigned int)arg1;
- (void)updateChatBoxSession;
- (void)updateSession:(id)arg1 isInChatBox:(_Bool)arg2 createIfNotExist:(_Bool)arg3;
- (void)onMainFrameEndReload;
- (void)onMainFrameHandleSession:(id)arg1;
- (void)onMainFrameBeginReload;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)onNewSyncClearUnread:(id)arg1;
- (void)onSessionUnreadCountChanged:(id)arg1 prevUnreadCount:(long long)arg2;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (void)onHideSessionWithUserName:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onChangeChatRoomBox:(id)arg1 inChatBox:(_Bool)arg2;
- (_Bool)isContactInChatBox:(id)arg1;
- (void)deleteAllChatBoxSessions;
- (id)sessionEnumerator;
- (void)setChatBoxUnreadLocal:(_Bool)arg1;
- (void)updateChatBoxSessionUnread:(_Bool)arg1;
- (void)removeSessionWithUsername:(id)arg1;
- (id)getSessionAtIndex:(long long)arg1;
- (long long)chatBoxSessionCount;
- (id)getChatBoxSession;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

