//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBaseSessionStorage, NSMutableDictionary, NSString;

@interface WASessionMgr
{
    MMBaseSessionStorage *_sessionStorage;
    NSMutableDictionary *_dicUserName2CellData;
}

- (void).cxx_destruct;
- (void)onDeleteWeAppContact:(id)arg1;
- (void)onModifyWeAppContactList:(id)arg1;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (id)importSessions;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)onGetDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long *)arg3;
- (void)deleteMainFrameSession;
- (void)updateMainFrameSessionWithNotify:(_Bool)arg1;
- (id)getMainFrameSessionMessageUserName;
- (id)genMainFrameSessionInfo;
- (void)onDeleteSessionOfUser:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (_Bool)isMessageShouldHandled:(id)arg1;
- (_Bool)isUserShouldHandled:(id)arg1;
- (id)dictionaryOfFromBusiness2SubUserNameSet;
- (unsigned int)totalUnreadCount;
- (void)callExtOnSessionChange;
- (void)deleteSessionMessage:(id)arg1;
- (void)deleteAllSessions;
- (void)updateSessionAndNotifyUI:(id)arg1;
- (void)updateSessionForContactListChanged:(id)arg1;
- (unsigned int)updateSessionForUser:(id)arg1;
- (void)removeCellDataCacheWithUserNameList:(id)arg1;
- (void)addOrUpdateSessionList:(id)arg1;
- (void)addOrUpdateSession:(id)arg1;
- (id)getAllSessions;
- (void)clearMainFrameSessionUnreadCount;
- (void)updateMainFrameSession;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (void)deleteSessionAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (unsigned int)sessionCount;
- (void)setupData;
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

