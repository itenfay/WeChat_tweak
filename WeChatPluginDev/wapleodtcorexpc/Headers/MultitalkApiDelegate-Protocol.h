//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ConfCallWordingInfo, MMConfSDKMemberMgr, NSArray, NSData, NSMutableArray, NSString, VoIPMtBannerMsg;

@protocol MultitalkApiDelegate
- (void)confSDKOnRecvCmdMsg:(NSData *)arg1;
- (void)onReceiveConfCallWordingInfo:(ConfCallWordingInfo *)arg1;
- (void)onRejectToOpenCameraForServerOverloadWithTimeInterval:(int)arg1;
- (void)onRejectToCreateRoomForServerOverloadWithTimeInterval:(int)arg1;
- (void)onDoScreenSharingSecurityCheck:(int)arg1 checkStatus:(int)arg2 fileMd5:(NSString *)arg3;
- (void)onSetMultiTalkScreenSharingStatus:(int)arg1 ScreenSharingStatus:(int)arg2;
- (void)onMultiTalkNotAllowCameraLimit:(unsigned int)arg1;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkBannerChange:(VoIPMtBannerMsg *)arg1;
- (void)onOtherDeviceHandleTalk:(NSString *)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onReceiveSubscribeMemberChangeMsg:(int)arg1;
- (void)onReceiveVideoMemberChangeMsg:(MMConfSDKMemberMgr *)arg1 extArray:(NSMutableArray *)arg2;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)onAddMultiTalkMemberFailedDueToRiskWithUserNames:(NSArray *)arg1 groupInfo:(MMConfSDKMemberMgr *)arg2 isAll:(_Bool)arg3;
- (void)onAddMultiTalkMemberFailedDueToCallerRisk;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 errorType:(int)arg2 groupInfo:(MMConfSDKMemberMgr *)arg3;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5 screenData:(_Bool)arg6 format:(int)arg7;
- (void)onCreateUnsafelyDueToCalleeRiskWithUserNames:(NSArray *)arg1 isAll:(_Bool)arg2;
- (void)onJoinFailedDueToCallerRisk;
- (void)onCreateFailedDueToRequireVerification:(NSString *)arg1;
- (void)onCreateFailedDueToCallerRisk;
- (void)onErr:(int)arg1 groupUserName:(NSString *)arg2;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkReady;
- (void)onMemberChange:(MMConfSDKMemberMgr *)arg1 withNewJoinedMembers:(NSArray *)arg2;
- (void)onMemberChange:(MMConfSDKMemberMgr *)arg1;
- (void)onReceiveMissMultiTalk:(MMConfSDKMemberMgr *)arg1;
- (void)onInviteOrAcceptTimeout:(MMConfSDKMemberMgr *)arg1;
- (void)onEnterMultiTalk:(MMConfSDKMemberMgr *)arg1;
- (void)onCancelCreateMultiTalk:(MMConfSDKMemberMgr *)arg1;
- (void)onCreateMultiTalk:(MMConfSDKMemberMgr *)arg1;
- (void)onInviteMultiTalk:(MMConfSDKMemberMgr *)arg1;
@end

