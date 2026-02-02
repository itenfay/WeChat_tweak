//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString;

@protocol IVOIPExt

@optional
- (void)onClickVideoToVoiceButton;
- (void)VoIPExt_onCallFailedWithRiskControlReasonType:(unsigned long long)arg1 verificationUrlBase64:(NSString *)arg2;
- (void)VoIPExt_onCallFailedWithRiskControlReasonType:(unsigned long long)arg1;
- (void)onAudioStartComplete;
- (void)onVoIPStartCameraInterruption;
- (void)showBadNetwork:(int)arg1;
- (void)onVoIPOpenCameraByInterrupt;
- (void)onVoIPCloseCameraByInterrupt;
- (void)willVoIPExtRestartAudioDevice;
- (void)onVoIPChangeExceptionType:(unsigned long long)arg1;
- (void)onVoIPExtSetupMicroPhoneWithIsMuted:(_Bool)arg1;
- (void)onVoIPExtFlipCamera;
- (void)onVoIPExtSetupVirtualBackgroundWithEnable:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)onVoIPExtEnterForeground;
- (void)onVoIPExtEnterBackground;
- (void)onVoIPExtRemoteTerminate;
- (void)onVoIPExtRemoteCaptureResume;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)onVoIPExtLocalCaptureToggleWithIsBack:(_Bool)arg1;
- (void)onVoIPExtLocalCaptureResume;
- (void)onVoIPExtLocalCaptureSuspend;
- (void)onOtherDeviceHandleTalk:(CContact *)arg1 WithStatus:(unsigned int)arg2;
- (void)OnMicRMSCheckBad;
- (void)OnMicStartFailed;
- (void)onGetNewVideoScoreIntervalDay:(unsigned int)arg1 andScoreTitle:(NSString *)arg2;
- (void)OnStopPlaySound;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)OnCallOverLoad:(CContact *)arg1 errNo:(int)arg2 errMsg:(NSString *)arg3;
- (void)OnCallBanned:(CContact *)arg1 errNo:(int)arg2 errMsg:(NSString *)arg3;
- (void)OnAutoHangUp:(CContact *)arg1;
- (void)OnCallInterrupt:(CContact *)arg1;
- (void)OnLightInterrupt:(_Bool)arg1;
- (void)OnTellMeIsAuthing:(_Bool *)arg1;
- (void)OnTellMeViewIsExist:(_Bool *)arg1;
- (void)OnMonitorWithSendRecvInfo:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1 debugString:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2;
- (void)OnMonitorWithSendRecvInfo:(int)arg1 andSendFPS:(int)arg2 andRecvFPS:(int)arg3 andSendKbps:(int)arg4 andRecvKbps:(int)arg5 andP2SInfo:(NSString *)arg6 andSpeed:(int *)arg7;
- (void)OnMonitorWithSendFPS:(int)arg1 andRecvFPS:(int)arg2;
- (void)OnMonitorChannelInfo:(unsigned long long)arg1 andConnStrategy:(int)arg2 debugString:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (void)OnTalkBrokenError:(CContact *)arg1 ErrNo:(int)arg2;
- (void)OnSyncError:(CContact *)arg1 ErrNo:(int)arg2;
- (void)OnError:(CContact *)arg1 ErrNo:(int)arg2;
- (void)OnTimeOut:(CContact *)arg1;
- (void)OnBeginTalk:(CContact *)arg1;
- (void)OnCacnel:(CContact *)arg1 withType:(int)arg2;
- (void)OnHangup:(CContact *)arg1;
- (void)OnBeHanguped:(CContact *)arg1;
- (void)OnBeRejected:(CContact *)arg1;
- (void)OnPreConnect:(CContact *)arg1;
- (void)OnBeAccepted:(CContact *)arg1;
- (void)OnNoAnswer:(CContact *)arg1;
- (void)OnAccept:(CContact *)arg1 ErrNo:(int)arg2;
- (void)OnCall:(CContact *)arg1 ErrNo:(int)arg2;
@end

