//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VoIPEventLogService
{
}

- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)OnVideoModeChangeToVoiceMode;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVoIPMessageMgrRejectCallBecasueOfPhoneCallingWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2;
- (void)onVoIPMessageMgrRejectCallBecasueOfSimucallingByCalleeWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2;
- (void)onVoIPMessageMgrRejectCallBecasueOfSimucallingByCallerWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2;
- (void)onVoIPExtRemoteTerminate;
- (void)onVoIPExtRemoteCaptureResume;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)onVoIPExtSetupMicroPhoneWithIsMuted:(_Bool)arg1;
- (void)onVoIPExtFlipCamera;
- (void)onVoIPExtSetupVirtualBackgroundWithEnable:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onVoIPExtLocalCaptureResume;
- (void)onVoIPExtLocalCaptureSuspend;
- (void)onOtherDeviceHandleTalk:(id)arg1 WithStatus:(unsigned int)arg2;
- (void)OnMicRMSCheckBad;
- (void)OnMicStartFailed;
- (void)OnStopPlaySound;
- (void)OnCallOverLoad:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)OnCallBanned:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnLightInterrupt:(_Bool)arg1;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTimeOut:(id)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)OnCacnel:(id)arg1 withType:(int)arg2;
- (void)OnHangup:(id)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)OnBeRejected:(id)arg1;
- (void)OnPreConnect:(id)arg1;
- (void)OnBeAccepted:(id)arg1;
- (void)OnNoAnswer:(id)arg1;
- (void)OnAccept:(id)arg1 ErrNo:(int)arg2;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

