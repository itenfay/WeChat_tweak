//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface MMLocalNotificationMgr
{
    _Bool m_isInBackground;
    MemoryMappedKV *m_pushInfos;
}

- (void).cxx_destruct;
- (id)notificaitonIdentifier:(long long)arg1;
- (id)messageWrapFromPushInfo:(id)arg1;
- (id)notificationInfoForMessage:(id)arg1 withEnabledNotificationSettings:(id)arg2 isFromVoipPush:(_Bool)arg3;
- (void)showPushWithMessageWrap:(id)arg1 identifier:(id)arg2 fireDate:(id)arg3 isFromVoipPush:(_Bool)arg4 shouldSilent:(_Bool)arg5;
- (void)revokePushWithMessageWrap:(id)arg1 isFromVoipPush:(_Bool)arg2;
- (void)showPushWithMessageWrap:(id)arg1 fireDate:(id)arg2 isFromVoipPush:(_Bool)arg3;
- (void)doVoipDelayReport;
- (void)doVoipPushIDKeyReport;
- (void)checkNewSyncFail;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 pushContent:(id)arg3;
- (_Bool)isSpecialBusinessCondition:(id)arg1;
- (void)OnShowPush:(id)arg1 isAlwaysShow:(_Bool)arg2;
- (_Bool)isInVoip;
- (void)clearPushInfos;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

