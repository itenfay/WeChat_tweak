//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, StreamVoiceInputControlView, UIButton, UIImageView, UILabel, WCUIAlertView;

@interface VoipCheckMicViewController
{
    _Bool _isProcessForConfirmation;
    _Bool _isCheckingPermission;
    _Bool _isPressingRecordButton;
    _Bool _hasPausedWXMusic;
    int _recordState;
    int _lastRecordState;
    UILabel *_titleLabel;
    UILabel *_recordTipLabel;
    UILabel *_recordTipDescLabel;
    UILabel *_resultTitleLabel;
    UILabel *_resultDescLabel;
    UIImageView *_resultIconView;
    UILabel *_recordTipShortDescLabel;
    StreamVoiceInputControlView *_recordButton;
    UIButton *_nextStepButton;
    unsigned long long _micRmsMeterAnimationStartTime;
    unsigned long long _recordStartTime;
    unsigned long long _micRmsCount;
    WCUIAlertView *_alertView;
    unsigned long long _micRms0Count;
    unsigned long long _micRms50Count;
    unsigned long long _micRms300Count;
    unsigned long long _micRms2000Count;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long micRms2000Count; // @synthesize micRms2000Count=_micRms2000Count;
@property(nonatomic) unsigned long long micRms300Count; // @synthesize micRms300Count=_micRms300Count;
@property(nonatomic) unsigned long long micRms50Count; // @synthesize micRms50Count=_micRms50Count;
@property(nonatomic) unsigned long long micRms0Count; // @synthesize micRms0Count=_micRms0Count;
@property(retain, nonatomic) WCUIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) _Bool hasPausedWXMusic; // @synthesize hasPausedWXMusic=_hasPausedWXMusic;
@property(nonatomic) unsigned long long micRmsCount; // @synthesize micRmsCount=_micRmsCount;
@property(nonatomic) unsigned long long recordStartTime; // @synthesize recordStartTime=_recordStartTime;
@property(nonatomic) unsigned long long micRmsMeterAnimationStartTime; // @synthesize micRmsMeterAnimationStartTime=_micRmsMeterAnimationStartTime;
@property(nonatomic) _Bool isPressingRecordButton; // @synthesize isPressingRecordButton=_isPressingRecordButton;
@property(nonatomic) _Bool isCheckingPermission; // @synthesize isCheckingPermission=_isCheckingPermission;
@property(nonatomic) _Bool isProcessForConfirmation; // @synthesize isProcessForConfirmation=_isProcessForConfirmation;
@property(nonatomic) int lastRecordState; // @synthesize lastRecordState=_lastRecordState;
@property(nonatomic) int recordState; // @synthesize recordState=_recordState;
@property(retain, nonatomic) UIButton *nextStepButton; // @synthesize nextStepButton=_nextStepButton;
@property(retain, nonatomic) StreamVoiceInputControlView *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) UILabel *recordTipShortDescLabel; // @synthesize recordTipShortDescLabel=_recordTipShortDescLabel;
@property(retain, nonatomic) UIImageView *resultIconView; // @synthesize resultIconView=_resultIconView;
@property(retain, nonatomic) UILabel *resultDescLabel; // @synthesize resultDescLabel=_resultDescLabel;
@property(retain, nonatomic) UILabel *resultTitleLabel; // @synthesize resultTitleLabel=_resultTitleLabel;
@property(retain, nonatomic) UILabel *recordTipDescLabel; // @synthesize recordTipDescLabel=_recordTipDescLabel;
@property(retain, nonatomic) UILabel *recordTipLabel; // @synthesize recordTipLabel=_recordTipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onStartVoiceInputFail;
- (void)userDidHoldEnd:(_Bool)arg1;
- (void)userDidHoldBegin;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceInputMeterLevel:(id)arg1 Rms:(float)arg2;
- (void)audioDeviceInputMeterLevel:(id)arg1 Peak:(float)arg2;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)updateRmsMeterAnimationWithValue:(float)arg1;
- (void)showAlertWithTitle:(id)arg1 andMessage:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)applicationWillResignActiveNotification;
- (void)checkAndFinishRecording;
- (void)checkMicRms;
- (void)onNextStepButtonPressed:(id)arg1;
- (void)interruptedByOther;
- (void)stopAudioDevice;
- (void)checkAndStopRecording;
- (void)realStartRecording;
- (void)updateSubviews;
- (void)checkGlobalRecordState;
- (void)initSubviews;
- (void)onReturn;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

