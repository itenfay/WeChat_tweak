//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, VoipGetRoomInfoCgi;

@interface VOIPMessageMgr
{
    VoipGetRoomInfoCgi *m_getRoomInfoCgi;
}

+ (_Bool)openVoipViewByVoipMonoMsg:(id)arg1 haveAnswered:(_Bool)arg2;
+ (_Bool)startVoipViewByVoipMonoMsg:(id)arg1;
+ (_Bool)handleInviteMonoMsg:(id)arg1;
+ (void)handleVoipLocalBusy:(id)arg1;
+ (id)genInviteMessageFromVoipMonoMsg:(id)arg1;
+ (void)reportAckWithCallResult:(int)arg1 ByVoipMsg:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) VoipGetRoomInfoCgi *m_getRoomInfoCgi; // @synthesize m_getRoomInfoCgi;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)voIPInvitationServiceDidRejectWithInfo:(id)arg1;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)handlePushKitUserInfos:(id)arg1;
- (void)handleAPNSPushUserInfos:(id)arg1;
- (void)handleAPNSPushSyncNotificationContentInfo:(id)arg1;
- (void)handleVoipBusy:(id)arg1 MsgWrap:(id)arg2;
- (void)receiveInviteFromSync:(id)arg1 MsgWrap:(id)arg2;
- (void)receiveCancelMsgFromSync:(id)arg1 MsgWrap:(id)arg2;
- (void)receiveAnsweredFromNotify:(id)arg1;
- (void)receiveOtherDeviceHandleSignalFromSecurityNotify:(id)arg1;
- (void)receiveCancelFromNotify:(id)arg1;
- (void)receiveInviteFromNotify:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)onVoipGetRoomInfoCgiOk:(id)arg1;
- (void)onVoipGetRoomInfoCgiRespFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiRespNull:(id)arg1;
- (void)onVoipGetRoomInfoCgiConnectFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiCreateFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiParaError:(id)arg1;
- (void)didMonoServiceRejectMsg;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMonoServiceUIExist;
- (_Bool)onMonoServiceMsgHoldWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgHandleWithMsg:(id)arg1;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
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

