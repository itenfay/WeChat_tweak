//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameLifeDb, GameLifeEnteredRedDotCache, MMBaseSessionStorage, NSString, WCTTable;

@interface GameLifeDataService
{
    int _notShowAppPanelItemIndex;
    GameLifeDb *_db;
    WCTTable *_contactTable;
    WCTTable *_sessionInfoTable;
    MMBaseSessionStorage *_conversationStorage;
    GameLifeEnteredRedDotCache *_enteredRedDotCache;
}

- (void).cxx_destruct;
@property(nonatomic) int notShowAppPanelItemIndex; // @synthesize notShowAppPanelItemIndex=_notShowAppPanelItemIndex;
@property(retain, nonatomic) GameLifeEnteredRedDotCache *enteredRedDotCache; // @synthesize enteredRedDotCache=_enteredRedDotCache;
@property(retain, nonatomic) MMBaseSessionStorage *conversationStorage; // @synthesize conversationStorage=_conversationStorage;
@property(retain, nonatomic) WCTTable *sessionInfoTable; // @synthesize sessionInfoTable=_sessionInfoTable;
@property(retain, nonatomic) WCTTable *contactTable; // @synthesize contactTable=_contactTable;
@property(retain, nonatomic) GameLifeDb *db; // @synthesize db=_db;
- (void)closeDb;
- (void)setupDb;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)OnDelMsg:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)onGetDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long *)arg3;
- (id)importSessions;
- (void)adjustMsgContentLogic:(id)arg1 withSessionId:(id)arg2;
- (void)testClearDB;
- (id)addOrUpdateConversationWithSessionId:(id)arg1 wrapMsg:(id)arg2;
- (_Bool)isUserNeedProcess:(id)arg1;
- (void)createGameLifeConversationStorage;
- (id)init;
- (void)setBlackListAssociateWithWAGame:(id)arg1 setBalck:(_Bool)arg2 isAssociate:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)isBlackListAssociateWithWAGame:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)checkContactsExpired:(id)arg1 withConversaton:(id)arg2;
- (_Bool)deleteContact:(id)arg1;
- (_Bool)insertOrUpdateContact:(id)arg1;
- (void)getContactsFromLocal:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)getContactFromLocal:(id)arg1;
- (void)getContactsFromServer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getContacts:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)reportMsgUnreadState;
- (unsigned int)getConversationTotalUnreadCount;
- (unsigned int)getConversationUnreadCount:(id)arg1;
- (_Bool)clearConversationUnreadCount:(id)arg1;
- (id)getLastUnReadConversationInfo;
- (void)updateLastConversationMsgType:(id)arg1 withExtInfo:(id)arg2;
- (_Bool)deleteConversationBySessionId:(id)arg1;
- (_Bool)addOrUpdateConversation:(id)arg1;
- (id)addOrUpdateConversationWithSessionId:(id)arg1 wrapMsg:(id)arg2 selfUsername:(id)arg3 talker:(id)arg4 isSender:(_Bool)arg5;
- (void)updateLastMsgWithSessionId:(id)arg1 lastMsg:(id)arg2;
- (void)checkHistoryConversation;
- (void)bindConversationsWithContactAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getAllConversation;
- (id)getConversationBySessionId:(id)arg1;
- (void)notifyConversationUpdated;
- (id)addPathParams:(id)arg1 selfUsername:(id)arg2 talker:(id)arg3;
- (long long)getInputToolWeAppNotShowIndex;
- (_Bool)isShowAttachmentButtonRedDot;
- (void)setEntryWithRedDotEntered;
- (_Bool)isEntryWithRedDotHadEntered:(id)arg1;
- (id)convertFromAppPanel:(id)arg1 selfUsername:(id)arg2 talker:(id)arg3;
- (_Bool)shouldShowStaticPanel:(unsigned int)arg1;
- (_Bool)shouldShowEmotionBoard;
- (_Bool)shouldShowCamera;
- (_Bool)shouldShowSendPic;
- (_Bool)shouldShowAttachButton;
- (id)wordIfDynamicPanelDisabled:(unsigned int)arg1 sessionId:(id)arg2;
- (id)wordIfStaticPanelDisabled:(unsigned int)arg1 sessionId:(id)arg2;
- (id)wordIfCameraDisabled:(id)arg1;
- (id)wordIfSendPicDisabled:(id)arg1;
- (id)getDynamicPanelItems:(id)arg1;
- (_Bool)deleteBySessionId:(id)arg1;
- (_Bool)insertOrUpdate:(id)arg1;
- (_Bool)insertOrUpdateWithSessionId:(id)arg1 selfUsername:(id)arg2 talker:(id)arg3 extInfo:(id)arg4 sessionType:(unsigned int)arg5;
- (_Bool)insertOrUpdateWithSessionId:(id)arg1 selfUsername:(id)arg2 talker:(id)arg3 sessionType:(unsigned int)arg4;
- (id)getAllSessionInfo;
- (id)getLocalSessionInfoBySessionId:(id)arg1;
- (id)getLocalSessionInfoByTalker:(id)arg1 selfUsername:(id)arg2;
- (void)getSessionIdFromServer:(id)arg1 talker:(id)arg2 scene:(unsigned int)arg3 extInfo:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getBatchSessionInfoWithTypeBySessionId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getSessionInfoByTalker:(id)arg1 selfUsername:(id)arg2 scene:(unsigned int)arg3 extInfo:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

