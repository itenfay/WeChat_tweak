//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBaseSessionStorage, NSMutableDictionary, NSString;

@interface WWKFSessionMgr
{
    MMBaseSessionStorage *_sessionStorage;
    NSMutableDictionary *_dicUserName2CellData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicUserName2CellData; // @synthesize dicUserName2CellData=_dicUserName2CellData;
@property(retain, nonatomic) MMBaseSessionStorage *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
- (void)updateSessionAndNotifyUI:(id)arg1;
- (void)addOrUpdateSessionList:(id)arg1;
- (void)addOrUpdateSession:(id)arg1;
- (id)getAllSessions;
- (void)changeUnreadCount:(long long)arg1 forUsername:(id)arg2;
- (void)callExtOnSessionChange;
- (id)updateMainSessionUnreadInfo;
- (void)deleteSessionMessage:(id)arg1;
- (void)deleteAllSessions;
- (void)deleteSessionAtIndex:(long long)arg1;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (id)genSessionCellDataWithSessionInfo:(id)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (unsigned int)sessionCount;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)onWWKFContactUpdated:(id)arg1;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)onGetDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long *)arg3;
- (id)importSessionsForSessionType:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (_Bool)isMessageShouldHandled:(id)arg1;
- (_Bool)isUserShouldHandled:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (_Bool)updateSessionForUser:(id)arg1;
- (void)clearMainFrameSessionUnreadCount;
- (void)updateMainFrameSessionWithNotify:(_Bool)arg1;
- (id)getMainFrameSessionMessageUserName;
- (void)deleteMainFrameSession;
- (void)updateMainFrameSession;
- (id)genMainFrameSessionInfo;
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

