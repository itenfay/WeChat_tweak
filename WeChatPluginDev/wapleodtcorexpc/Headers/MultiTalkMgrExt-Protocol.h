//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMConfSDKMemberMgr, MultiTalkBannerItem, NSDictionary, NSString;

@protocol MultiTalkMgrExt

@optional
- (void)multiTalkMgrDidClose;
- (void)onMultiTalkScreenSharingFinishValidatingFileWithPath:(NSString *)arg1 ret:(int)arg2 fileStatus:(int)arg3;
- (void)onMultiTalkScreenSharingStartValidatingFileWithPath:(NSString *)arg1;
- (void)onMultiTalkFailToAddMinimizeTask;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onOtherDeviceHandleTalk:(NSString *)arg1;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onMultiTalkSysInterruptEnd;
- (void)onMultiTalkSysInterrupt;
- (void)onMultiTalkRedirectOk;
- (void)onMultiTalkMgrNetworkChange;
- (void)onMultiTalkMgrChangeToUnReachable;
- (void)onMultiTalkMgrChangeToWiFi;
- (void)onMultiTalkMgrChangeToLowNetwork;
- (void)onMultiTalkMgrChangeToHighWWan;
- (void)onMultiTalkMgrOpenVideoServerNotAllowed;
- (void)onMultiTalkMgrVideoDeviceAuthFailed;
- (void)onMultiTalkMgrChangeVideoFailed;
- (void)onMultiTalkMgrVideoSessionStopComplete;
- (void)onMultiTalkMgrVideoSessionStartComplete;
- (void)updateSpeakerButtonStatus:(NSString *)arg1 hasExtenalOutput:(_Bool)arg2;
- (void)onIlinkChangeToMultiTalk:(double)arg1 isMicMute:(_Bool)arg2 isSpeakerOn:(_Bool)arg3 localVideoClosed:(_Bool)arg4;
- (void)onRejectToOpenCameraForServerOverloadWithTimeInterval:(int)arg1;
- (void)onRejectToCreateRoomForServerOverloadWithTimeInterval:(int)arg1;
- (void)onMultiTalkBannerItemChange:(MultiTalkBannerItem *)arg1;
- (void)onMultiTalkMsgCellIconChange:(NSString *)arg1;
- (void)onMultiTalkBannerChange:(MultiTalkBannerItem *)arg1 status:(unsigned int)arg2;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extDic:(NSDictionary *)arg2;
- (void)OnScreenVideoStateChange:(_Bool)arg1 ScreenOn:(_Bool)arg2;
- (void)OnCameraVideoStateChange:(_Bool)arg1 CameraOn:(_Bool)arg2;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onAddMultiTalkMemberFailedDueToRiskWithGroupInfo:(MMConfSDKMemberMgr *)arg1;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 errorType:(int)arg2 groupInfo:(MMConfSDKMemberMgr *)arg3;
- (void)onCreateFailedDueToRisk;
- (void)onErr:(int)arg1;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkReady;
- (void)onMemberChange:(MMConfSDKMemberMgr *)arg1;
- (void)onReceiveMissMultiTalk:(MMConfSDKMemberMgr *)arg1;
- (void)onInviteOrAcceptTimeout:(MMConfSDKMemberMgr *)arg1;
- (void)onEnterMultiTalk:(MMConfSDKMemberMgr *)arg1;
- (void)onCancelCreateMultiTalk:(MMConfSDKMemberMgr *)arg1;
- (void)onCreateMultiTalk:(MMConfSDKMemberMgr *)arg1;
- (void)onInviteMultiTalk:(MMConfSDKMemberMgr *)arg1;
- (void)onBeginMultiTalk;
- (void)onMultiTalkMainViewDidAppear;
@end

