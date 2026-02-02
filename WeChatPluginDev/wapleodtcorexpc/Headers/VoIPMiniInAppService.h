//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MinimizeTaskData, NSString, VoIPMiniInAppView;

@interface VoIPMiniInAppService
{
    _Bool _isViewVisable;
    _Bool _isCameraPrevInterruptAndResume;
    _Bool _isLocalResume;
    unsigned long long _animateStatus;
    MinimizeTaskData *_minimizeTaskData;
    VoIPMiniInAppView *_currentView;
}

+ (id)minimizeTaskKey;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLocalResume; // @synthesize isLocalResume=_isLocalResume;
@property(nonatomic) _Bool isCameraPrevInterruptAndResume; // @synthesize isCameraPrevInterruptAndResume=_isCameraPrevInterruptAndResume;
@property(retain, nonatomic) VoIPMiniInAppView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) MinimizeTaskData *minimizeTaskData; // @synthesize minimizeTaskData=_minimizeTaskData;
@property(nonatomic) unsigned long long animateStatus; // @synthesize animateStatus=_animateStatus;
@property(nonatomic) _Bool isViewVisable; // @synthesize isViewVisable=_isViewVisable;
- (void)voIPInvitationServiceDidClear;
- (void)voIPInvitationServiceWillClear;
- (void)voIPInvitationServiceDidScrollOut;
- (void)voIPInvitationServiceWillScrollOut;
- (void)voIPInvitationServiceDidScrollIn;
- (void)voIPInvitationServiceWillScrollIn;
- (void)voIPOrientationServiceDidChangeDeviceAngleDegree;
- (void)miniInAppViewOnExtendAreaClick:(id)arg1;
- (void)miniInAppViewOnMainAreaClick:(id)arg1;
- (void)OnOneWayRemoteVideoMode;
- (void)OnOneWayLocalVideoMode;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayLocalEarMode;
- (void)OnBothVideoMode;
- (void)VoIPPIPServiceDidRemoteCaptureSuspend;
- (void)VoIPPIPServiceEnterForeground:(_Bool)arg1;
- (void)VoIPPIPServiceOnRestoreUserInterfaceForPictureInPictureStop;
- (void)VoIPPIPServiceDidStopPictureInPicture;
- (void)VoIPPIPServiceDidStartPictureInPicture;
- (void)VoIPPIPServiceWillStartPictureInPicture;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)onVoIPExtRemoteCaptureResume;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)onVoIPExtLocalCaptureResume;
- (void)onVoIPExtLocalCaptureSuspend;
- (void)onVoIPOpenCameraByInterrupt;
- (void)onVoIPCloseCameraByInterrupt;
- (void)onVoipAudioDeviceUnPlugin;
- (void)onVoipAudioDevicePlugin;
- (void)OnMicRMSCheckBad;
- (void)OnMicStartFailed;
- (void)OnBeginTalk:(id)arg1;
- (void)OnVideoModeChangeToVoiceMode;
- (void)onRecoverTaskData:(id)arg1;
- (void)onContainerSizeDidChange:(id)arg1 fromSize:(struct CGSize)arg2 toSize:(struct CGSize)arg3;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)UIManagerOnNotifyBadNetwork;
- (void)UIManagerDidExtendWindow;
- (void)UIManagerWillExtendWindow;
- (void)UIManagerDidCollapseWindow;
- (void)UIManagerWillCollapseWindow;
- (void)UIManagerDidCloseCompletely;
- (void)UIManagerWillQuitWindow;
- (void)onServiceInit;
- (id)init;
- (_Bool)getIfCameraPrevInterruptAndResume;
- (void)reset;
- (id)view;
- (id)snapshotImage;
- (struct CGRect)convertedVisibleFrameToWindow:(id)arg1;
- (void)kickAsync;
- (void)kick;
- (void)setup;
- (void)setupVOIPMgr;
- (void)setupMinimizeTaskData;
- (void)setupView;
- (void)resetViewAndStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

