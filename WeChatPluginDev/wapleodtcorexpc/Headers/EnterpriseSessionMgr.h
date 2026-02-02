//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface EnterpriseSessionMgr
{
    NSMutableDictionary *m_brandStorages;
    NSMutableDictionary *m_mainSessionInfoItems;
    NSMutableDictionary *m_mainSessionUpdateTime;
    NSString *m_nsActiveSessionId;
    NSObject<OS_dispatch_queue> *m_msgDispatchQueue;
    _Bool _fastOnAddMsg;
}

+ (long long)compareEnterpriseSession:(id)arg1 right:(id)arg2;
- (void).cxx_destruct;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (_Bool)isMessageShouldHandled:(id)arg1;
- (_Bool)isUserShouldHandled:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)internalOnDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyEnterpriseContactDraft:(id)arg1;
- (void)onBatchModifyEnterpriseContact:(id)arg1;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)onGetDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long *)arg3;
- (void)onInitiateBizChat:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)OnUnReadEnterpriseMsgCountChange:(id)arg1 Brand:(id)arg2;
- (void)OnModEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnSyncReadMsg:(id)arg1 Brand:(id)arg2;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 DelAll:(_Bool)arg3;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 MsgWrap:(id)arg3;
- (void)internalOnDelMsg:(id)arg1 Brand:(id)arg2;
- (void)OnAddEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)FastOnBatchAddEnterpriseMsg:(id)arg1 Brand:(id)arg2;
- (void)SlowOnBatchAddEnterpriseMsg:(id)arg1 Brand:(id)arg2;
- (void)OnBatchAddEnterpriseMsg:(id)arg1 Brand:(id)arg2;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (id)importSessions;
- (void)cleanUpEnterpriseChatSession:(id)arg1;
- (void)cleanUpEnterpriseChat:(id)arg1;
- (id)LastMsgForBrand:(id)arg1;
- (void)onEnterSessionListForBrand:(id)arg1;
- (void)internalUpdateMainSessionInfoForBrand:(id)arg1 lastMsg:(id)arg2 checkLastMsg:(_Bool)arg3;
- (void)updateMainSessionInfoForBrand:(id)arg1 lastMsg:(id)arg2 checkLastMsg:(_Bool)arg3;
- (id)updateMainSessionUnReadForBrand:(id)arg1;
- (id)updateUnReadOfMainSession:(id)arg1 brand:(id)arg2;
- (id)mainSessionForBrand:(id)arg1;
- (void)notifyEnterpriseBrandChatSessionChanged:(id)arg1;
- (void)changeUnReadCountOfSession:(id)arg1 forBrand:(id)arg2 to:(unsigned int)arg3;
- (void)clearAtMeCountOfSession:(id)arg1 forBrand:(id)arg2;
- (void)updateSession:(id)arg1 forBrand:(id)arg2;
- (void)updateSessionInfo:(id)arg1 forBrand:(id)arg2;
- (void)saveSessionInfo:(id)arg1 forBrand:(id)arg2;
- (void)deleteSession:(id)arg1 forBrand:(id)arg2;
- (void)deleteAllSessionForBrand:(id)arg1;
- (void)createSessionForEnterpriseContact:(id)arg1;
- (unsigned int)totalUnreadCntForBrand:(id)arg1 exceptSubBrand:(id)arg2;
- (unsigned int)totalUnreadCntForBrand:(id)arg1;
- (id)allSessionIdForBrand:(id)arg1;
- (id)allSessionInfoForBrand:(id)arg1;
- (id)sessionInfo:(id)arg1 forBrand:(id)arg2;
- (id)sessionInfoAtIndex:(long long)arg1 forBrand:(id)arg2;
- (unsigned int)sessionCountForBrand:(id)arg1;
- (void)checkChatBrand:(id)arg1;
- (id)getActiveSession;
- (_Bool)isActiveSession:(id)arg1;
- (void)setActiveSession:(id)arg1;
- (void)loadMainSessionInfoItems;
- (void)saveMainSessionInfoItems;
- (id)InfoItemForBrand:(id)arg1 needFillMainSession:(_Bool)arg2;
- (id)InfoItemForBrand:(id)arg1;
- (id)storageForBrand:(id)arg1;
- (id)filePathForMainSessionInfoCache;
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

