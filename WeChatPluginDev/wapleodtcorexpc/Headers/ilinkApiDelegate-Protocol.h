//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ConfCallWordingInfo, ConfRecvInviteInfo, DeviceAudioParam, NSData, NSMutableArray, NSString;

@protocol ilinkApiDelegate
- (_Bool)getIfCallKitStatus;
- (int)getVideoErrorCode;
- (void)StartSessionWithWorkModeSecondPart;
- (_Bool)getIfEnableVoIPMPAudioUnit;
- (void)releaseDevice;
- (void)setAudioParams:(DeviceAudioParam *)arg1;
- (void)startAudioDeviceSucc;
- (_Bool)shouldBluetoothStartEarlier;
- (void)inviteInitEngineFail;
- (void)receiveInviteNotFriendWithErrCode:(int)arg1;
- (unsigned long long)getRoomID;
- (void)onSimuCallerCloseVideo;
- (void)onInviteFailedBecauseOfRiskControlWithErrorCode:(int)arg1 groupUserName:(NSString *)arg2 verificationUrlBase64:(NSString *)arg3;
- (void)getIlinkAddMembersResult:(NSMutableArray *)arg1;
- (void)readyJoinRoomForIlink:(unsigned int)arg1 roomID:(unsigned long long)arg2;
- (NSString *)currentRemoteSourceDevice;
- (NSString *)getClientGroupId;
- (void)onStartRecvInvite;
- (void)onRecvAckFail:(unsigned long long)arg1 username:(NSString *)arg2;
- (void)onRecvSimuCall;
- (void)onRecvNotifyFail;
- (void)onRecvInviteBusy;
- (void)changeToHighCapture:(int)arg1;
- (_Bool)getEnableDirectRendering;
- (_Bool)get720pCaptureStatus;
- (void)setGPUReslution:(int)arg1;
- (void)setNetworkStatus:(int)arg1;
- (void)onCallEndWithoutCheck:(unsigned long long)arg1;
- (void)onCallEnd:(unsigned long long)arg1 callResult:(unsigned int)arg2;
- (void)onReceiveConfCallWordingInfo:(ConfCallWordingInfo *)arg1;
- (void)simuCallFromCallerToReceiver:(NSData *)arg1;
- (void)onRecvCmdMsg:(NSData *)arg1;
- (void)onSendCmdMsg;
- (_Bool)isCameraFront;
- (void)OngetVideoFrameWithOrientation:(long long)arg1;
- (void)OnBeRejected;
- (void)OnBeAccepted;
- (void)ilinkInviteFailedToVoIPMgrWithUserName:(NSString *)arg1;
- (void)remoteVideoStatusChange:(_Bool)arg1;
- (_Bool)getIfIsConnected;
- (void)onChangeOfjoinedMemberCnt:(int)arg1 joiningMemberCnt:(int)arg2;
- (void)receiverOpenUIForRoomInfo:(ConfRecvInviteInfo *)arg1 username:(NSString *)arg2 receiveMsgTime:(unsigned int)arg3;
- (void)onCall;
- (void)onSetRoomID:(unsigned long long)arg1;
@end

