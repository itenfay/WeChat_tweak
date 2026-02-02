//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, UIView, VoipDescriptionButton;

@interface VideoVoipCSCallerView
{
    _Bool _m_hasHangup;
    unsigned int m_dotCountIncresement;
    unsigned int m_callingTimes;
    UIView *m_cameraPreviewView;
    VoipDescriptionButton *m_forceToAudioButton;
    MMTimer *m_notOnlineTimer;
    MMTimer *m_actingTimer;
    VoipDescriptionButton *_m_hangupButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_hasHangup; // @synthesize m_hasHangup=_m_hasHangup;
@property(retain, nonatomic) VoipDescriptionButton *m_hangupButton; // @synthesize m_hangupButton=_m_hangupButton;
@property(nonatomic) unsigned int m_callingTimes; // @synthesize m_callingTimes;
@property(nonatomic) unsigned int m_dotCountIncresement; // @synthesize m_dotCountIncresement;
@property(retain, nonatomic) MMTimer *m_actingTimer; // @synthesize m_actingTimer;
@property(retain, nonatomic) MMTimer *m_notOnlineTimer; // @synthesize m_notOnlineTimer;
@property(retain, nonatomic) VoipDescriptionButton *m_forceToAudioButton; // @synthesize m_forceToAudioButton;
@property(retain, nonatomic) UIView *m_cameraPreviewView; // @synthesize m_cameraPreviewView;
- (void)continueCallAction;
- (void)OnRecordDeniedByWeChat;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (_Bool)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (void)endCallAfterDelay:(double)arg1;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnBeginTalk:(id)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)OnBeRejected:(id)arg1;
- (void)OnTimeOut:(id)arg1;
- (void)OnBeAccepted:(id)arg1;
- (void)OnPreConnect:(id)arg1;
- (void)OnNoAnswer:(id)arg1;
- (void)startCamera;
- (void)OnCallOverLoad:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)OnCallBanned:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)showAlertTips;
- (void)switchToAudioViewAnimation;
- (void)onClickVideoToVoiceButton;
- (void)onConfirmSwitchToVoice;
- (void)layoutHangupButton;
- (void)switchToAudioModeAnimation;
- (void)initCameraView;
- (void)realCancelCall;
- (void)cancelCall;
- (void)call;
- (void)onVideoSessionStartComplete;
- (void)viewDidLayoutSubviews;
- (void)layoutCameraPreview;
- (void)viewDidLoad;
- (void)checkAndShowAlertView;
- (void)showRemoteNotOnlineTips;
- (_Bool)isCaller;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(_Bool)arg3 andInitViewMode:(int)arg4 appid:(id)arg5 headUrl:(id)arg6 isAllowBackCamera:(_Bool)arg7 isShowCSVideo:(_Bool)arg8;
- (void)updateStatusLabel;
- (void)autoUpdateMainStatusString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

