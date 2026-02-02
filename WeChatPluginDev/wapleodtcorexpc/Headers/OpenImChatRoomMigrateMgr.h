//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsDataLogic, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, OpenImChatRoomMigrateDataPB;

@interface OpenImChatRoomMigrateMgr
{
    OpenImChatRoomMigrateDataPB *m_openImChatRoomMigrateData;
    NSOperationQueue *m_queue;
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_dicMigrateOpenImChatRoom;
    NSMutableDictionary *m_dicOpenImMigrateOpenImChatRoom;
    ContactsDataLogic *m_contactsDataLogic;
    _Bool m_bIsOpenImMigrateOpenImChatRoomWorking;
}

+ (void)reportOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2 andOpenImChatRoomMigrateAction:(unsigned int)arg3;
- (void).cxx_destruct;
- (void)p_loadOpenImChatRoomMigrateInternal;
- (void)p_saveOpenImChatRoomMigrateToDataFileInternal;
- (id)p_getOpenImChatRoomMigrateDataFilePath;
- (void)reportOpenImChatRoomMigrateClickSameNameChatRoomWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (_Bool)isOpenImMigrateOpenImChatRoomWorking;
- (void)checkGetNeedOpenImChatRoomMigrateAssociateChatRoom:(id)arg1;
- (void)addHadGetContactDetialMigrateAssociateChatRoom:(id)arg1;
- (void)startUpGetAllNeedOpenImChatRoomMigrateAssociateChatRoom;
- (void)sendOpenImChatRoomMigrateInsertWarningSystemMessageWithGroupUserName:(id)arg1 andMessageContent:(id)arg2;
- (void)checkEnterOpenChatRoomNeedSendInsertWarningSystemMessage:(id)arg1;
- (void)removeActiveUserWaitForOpenImMigrateWithUsrName:(id)arg1;
- (void)checkChatRoomExitSessionOpenImChatRoomMigrateAssociateChatRoom:(id)arg1;
- (void)startUpAllOpenImChatRoomMigrate;
- (void)DeleteSessionWithUserName:(id)arg1;
- (void)doOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (void)addOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (_Bool)isNeedStopChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

