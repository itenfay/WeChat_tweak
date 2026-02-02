//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ContactProfileRecommendLogic, ContactsDataLogic, NSMutableSet, NSNumber, NSRecursiveLock, NSString, WCChatRoomMemberNoNickDataInfo;

@interface CContactUpdateMgr : NSObject
{
    _Bool m_isChatRoomMemberNoNickGetContactSwitch;
    NSRecursiveLock *m_reporChatRoomMemberNoNickLock;
    NSMutableSet *m_setHadReporChatRoomMemberNoNick;
    ContactsDataLogic *m_contactsViewDataLogic;
    NSNumber *m_bIsOpenMultiSelectContactsStyleSwitch;
    ContactsDataLogic *_m_contactsDataLogic;
    NSMutableSet *_m_updateEncryptSecretInfoSet;
    WCChatRoomMemberNoNickDataInfo *_chatRoomMemberNoNickDataInfo;
    ContactProfileRecommendLogic *_contactProfileRecommendLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactProfileRecommendLogic *contactProfileRecommendLogic; // @synthesize contactProfileRecommendLogic=_contactProfileRecommendLogic;
@property(retain, nonatomic) WCChatRoomMemberNoNickDataInfo *chatRoomMemberNoNickDataInfo; // @synthesize chatRoomMemberNoNickDataInfo=_chatRoomMemberNoNickDataInfo;
@property(retain, nonatomic) NSMutableSet *m_updateEncryptSecretInfoSet; // @synthesize m_updateEncryptSecretInfoSet=_m_updateEncryptSecretInfoSet;
@property(retain, nonatomic) ContactsDataLogic *m_contactsDataLogic; // @synthesize m_contactsDataLogic=_m_contactsDataLogic;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onAuthOK;
- (void)onModifyContact:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
@property(nonatomic) _Bool bIsHadLimitContact;
- (_Bool)isOpenMultiSelectContactsStyleSwitch;
- (unsigned int)getContactNumber;
- (_Bool)getClicfgSetDefaultChatonly;
- (unsigned short)getClicfgSetDefaultChatonlyType;
- (unsigned int)getClicfgSetDefaultChatonlyThreshold;
- (_Bool)checkIsOpenDefaultChatonlyAndMoreThenClicfgSetDefaultChatonlyThreshold;
- (_Bool)checkIsMoreThenClicfgSetDefaultChatonlyThreshold;
- (_Bool)checkIsShowClicfgSetDefaultChatonlyTwo;
- (id)getContactsViewDataLogic;
- (void)handleServiceEnterBackground;
- (void)clearAllResource;
- (void)removeListen;
- (void)initListen;
- (void)dealloc;
- (void)initData;
- (id)init;
- (_Bool)bIsNeedFillContactEncryptSecret;
- (void)updateHadfillContactEncryptSecretLastTime;
- (id)HmacSha256:(id)arg1 salt:(const char *)arg2 data:(id)arg3;
- (id)hashEncryptSecretUserName:(id)arg1 encryptSecretType:(int)arg2;
- (void)fillAllContactEncryptSecret;
- (void)asynFillAllContactEncryptSecret;
- (void)fillAllContactEncryptSecretInit;
- (void)addUpdateEncryptSecretUserName:(id)arg1;
- (void)fillContactEncryptSecretInfo:(id)arg1;
- (id)checkStrangerContactListIsFriend:(id)arg1;
- (_Bool)checkEncryptSecretTypeIsEqual:(unsigned int)arg1 targetEncryptSecretType:(int)arg2;
- (id)getUserNameDicWithStrangerEncryptContactUserNames:(id)arg1 encryptSecretType:(unsigned int)arg2;
- (id)getUserNameWithStrangerEncryptContactUserName:(id)arg1 encryptSecretType:(unsigned int)arg2;
- (_Bool)checkEncryptSecretInfoHadFilled:(id)arg1;
- (id)getContactsDataLogic;
- (void)initContactUpdateMgrEncryptSecretMethod;
- (_Bool)checkCanGetProfileRecommendInfo:(id)arg1;
- (_Bool)checkProfileRecommendInfoEffectiveTime:(id)arg1;
- (id)getContactProfileRecommendInfo:(id)arg1 isVerify:(_Bool)arg2;
- (id)getContactProfileRecommendLogic;
- (void)handleAccountDeleteOnDeleteSessionOfUser:(id)arg1;
- (void)handleShowAccountDeleteTipOfUser:(id)arg1;
- (void)showRecycleLogoutSendMessageTipInNavigation:(id)arg1;
- (void)p_loadChatRoomMemberNoNickDataInternal;
- (void)p_saveChatRoomMemberNoNickDataFileInternal;
- (id)p_getChatRoomMemberNoNickDataFilePath;
- (void)handleDeleteExpiredSessionForwardRecord;
- (void)asyncDeleteExpiredSessionForwardRecord;
- (void)handleServiceEnterBackgroundExtension;
- (void)asyncReportChatRoomMemberNoNickUserName:(id)arg1;
- (void)reportReporChatRoomMemberNoNickWithUserName:(id)arg1;
- (void)handleChatRoomMemberNoNickWithUserName:(id)arg1 groupUserName:(id)arg2;
- (void)initDataExtension;
- (void)synchronizeQQMailSessionTop:(_Bool)arg1 qqMailContact:(id)arg2;
- (void)synchronizeQQMailMute:(_Bool)arg1 qqMailContact:(id)arg2;
- (void)synchronizeQQMailMuteAndSessionTop;
- (void)asynModifyQQMailSessionTopTurnOn:(_Bool)arg1;
- (void)modifyQQMailSessionTopTurnOn:(_Bool)arg1;
- (void)asynQQMailModifyMuteTurnOn:(_Bool)arg1;
- (void)modifyQQMailMuteTurnOn:(_Bool)arg1;
- (void)synchronizeTxNewsSessionTop:(_Bool)arg1 txNewsContact:(id)arg2;
- (void)synchronizeTxNewsMute:(_Bool)arg1 txNewsContact:(id)arg2;
- (void)synchronizeTxNewsMuteAndSessionTop;
- (void)asynModifyTxNewsSessionTopTurnOn:(_Bool)arg1;
- (void)modifyTxNewsSessionTopTurnOn:(_Bool)arg1;
- (void)asynModifyTxNewsMuteTurnOn:(_Bool)arg1;
- (void)modifyTxNewsMuteTurnOn:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

