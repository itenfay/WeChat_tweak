//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatRoomToolMessageEventInfo, NSDictionary, NSMutableDictionary, NSString, WCGroupUndoneDatabase;

@interface WCGroupUndoneMgr
{
    ChatRoomToolMessageEventInfo *_checkingUndoneItem;
    NSMutableDictionary *_dicMsgRecord;
    NSMutableDictionary *_dicRoomDescRecord;
    NSDictionary *_nativeWeAppIconUrlDic;
    WCGroupUndoneDatabase *_database;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCGroupUndoneDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSDictionary *nativeWeAppIconUrlDic; // @synthesize nativeWeAppIconUrlDic=_nativeWeAppIconUrlDic;
@property(retain, nonatomic) NSMutableDictionary *dicRoomDescRecord; // @synthesize dicRoomDescRecord=_dicRoomDescRecord;
@property(retain, nonatomic) NSMutableDictionary *dicMsgRecord; // @synthesize dicMsgRecord=_dicMsgRecord;
@property(retain, nonatomic) ChatRoomToolMessageEventInfo *checkingUndoneItem; // @synthesize checkingUndoneItem=_checkingUndoneItem;
- (void)RoomToolsReplyTodoFail:(id)arg1 error:(id)arg2;
- (void)RoomToolsReplyTodoSuccess:(id)arg1;
- (void)RoomToolsAlterTodoFail:(id)arg1 error:(id)arg2;
- (void)RoomToolsAlterTodoSuccess:(id)arg1;
- (id)requsetTodoModelFromEventInfo:(id)arg1;
- (id)requsetTodoModelFromMessage:(id)arg1;
- (_Bool)cgiReplyEventInfo:(id)arg1;
- (_Bool)cgiRevokeEventInfo:(id)arg1;
- (_Bool)revokeMessageAsGroupUndone:(id)arg1 groupId:(id)arg2;
- (_Bool)setMessageAsGroupUndone:(id)arg1 groupId:(id)arg2;
- (void)onDeleteAllMsgs:(id)arg1;
- (void)OnQuitGroup:(id)arg1;
- (unsigned int)reportMsgTypeForMsg:(id)arg1;
- (id)getDisplayNameOfRoomMemberNotSelf:(id)arg1 chatroom:(id)arg2;
- (void)generateLocalSysmsgWhenRevokeTodoSuccess:(id)arg1;
- (void)generateLocalSysmsgWhenCompleteTodoSuccess:(id)arg1 creator:(id)arg2;
- (_Bool)deleteChatRoomToolMessageEventInSameRelatedMesSvrIDInDB:(id)arg1;
- (id)getChatRoomToolMessageEventList:(id)arg1 fromEventTime:(unsigned int)arg2 limit:(unsigned int)arg3;
- (_Bool)updateChatRoomToolMessageEventInDB:(id)arg1;
- (void)openWeAppWithMessageEventInfo:(id)arg1 andScen:(unsigned int)arg2;
- (id)getIconUrlWithAppUserName:(id)arg1;
- (_Bool)isNativeWeAppWithAppUserName:(id)arg1;
- (_Bool)isNativeWeAppMsgWithMessageWrap:(id)arg1;
- (_Bool)isWeAppMsgWithMessageWrap:(id)arg1;
- (void)handleRoomToolNewXMLTips:(id)arg1 nsScene:(id)arg2 nsOperator:(id)arg3 withEventInfo:(id)arg4;
- (void)processNewXMLRoomToolsEvent:(id)arg1 andNsUsrName:(id)arg2;
- (void)clearPreviousRoomDescEventForRoom:(id)arg1 newMsgTime:(unsigned int)arg2;
- (void)clearPreviousRoomDescEventForceForRoom:(id)arg1;
- (void)roomDescWillChangedForRoom:(id)arg1 isClear:(_Bool)arg2;
- (long long)getLatestRoomDescSvrIdForRoom:(id)arg1;
- (void)clearRoomDescSvrIdForroom:(id)arg1;
- (void)updateRoomDescSvrId:(long long)arg1 room:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)clearMessageAsGroupUndone:(long long)arg1;
- (_Bool)setMessageAsGroupUndone:(long long)arg1;
- (_Bool)hasSetGroupUndoneMsg:(long long)arg1;
- (void)msgDeleteToRemoveUndoneItemByMsgId:(long long)arg1 groupId:(id)arg2;
- (void)applyLocalize:(id)arg1;
- (id)getTodoEventInfoByMessage:(id)arg1 groupId:(id)arg2;
- (_Bool)isGroupUndoneMessage:(id)arg1 usr:(id)arg2;
- (id)undoneTitleForMessage:(id)arg1;
- (id)undoneItemAppPathFromMessage:(id)arg1;
- (id)undoneItemAppIdFromMessage:(id)arg1;
- (id)undoneItemUsrnameFromMessage:(id)arg1;
- (id)getCachedEventInfoByCustomLinkInfo:(id)arg1;
- (id)getUndoneListOfGroup:(id)arg1;
- (void)didShowSettingUndoneTips;
- (_Bool)shouldShowSettingUndoneTips;
- (void)didShowUndoneTips;
- (_Bool)shouldShowUndoneTips;
- (void)checkPreparingUndoneItemByGroupId:(id)arg1;
- (void)prepareToCheckUndoneEventInfo:(id)arg1;
- (_Bool)clearExpiredEventInfoForChatroom:(id)arg1;
- (void)handleMessageClick:(id)arg1 session:(id)arg2;
- (void)disposeUndoneItemByEventId:(id)arg1 groupId:(id)arg2;
- (_Bool)completeUndoneEventInfo:(id)arg1;
- (_Bool)revokeUndoneEventInfo:(id)arg1 bySvr:(_Bool)arg2;
- (void)internalRevokeUndoneEventInfo:(id)arg1;
- (void)disposeUndoneEventInfo:(id)arg1;
- (void)internalUpdateUndoneEventInfo:(id)arg1 updateLocal:(_Bool)arg2;
- (void)updateUndoneEventInfo:(id)arg1;
- (_Bool)saveRoomDescRecord;
- (_Bool)saveMsgRecord;
- (void)clearData;
- (void)initData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

