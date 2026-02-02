//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, UIImpactFeedbackGenerator;
@protocol MJShootSideToolbarDelegate;

@interface MJShootSideToolbar
{
    _Bool _isCaptionButtonEnabledShowing;
    _Bool _isDuetShootingEntry;
    _Bool _isCaptionEnabledByConfig;
    _Bool _isCountdownTimerEnabledByConfig;
    _Bool _isRecordingTimerEnabledByConfig;
    _Bool _isTemplatePanelShowing;
    _Bool _isTemplateShooting;
    MMUIButton *_flashButton;
    MMUIButton *_switchCameraButton;
    MMUIButton *_countdownTimerButton;
    MMUIButton *_recordingTimerButton;
    MMUIButton *_switchGenderButton;
    id <MJShootSideToolbarDelegate> _delegate;
    MMUIButton *_visageButton;
    MMUIButton *_captionButton;
    MMUIButton *_duetShootingEnableButton;
    MMUIButton *_replayButton;
    NSMutableArray *_showingButtons;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTemplateShooting; // @synthesize isTemplateShooting=_isTemplateShooting;
@property(nonatomic) _Bool isTemplatePanelShowing; // @synthesize isTemplatePanelShowing=_isTemplatePanelShowing;
@property(nonatomic) _Bool isRecordingTimerEnabledByConfig; // @synthesize isRecordingTimerEnabledByConfig=_isRecordingTimerEnabledByConfig;
@property(nonatomic) _Bool isCountdownTimerEnabledByConfig; // @synthesize isCountdownTimerEnabledByConfig=_isCountdownTimerEnabledByConfig;
@property(nonatomic) _Bool isCaptionEnabledByConfig; // @synthesize isCaptionEnabledByConfig=_isCaptionEnabledByConfig;
@property(nonatomic) _Bool isDuetShootingEntry; // @synthesize isDuetShootingEntry=_isDuetShootingEntry;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) NSMutableArray *showingButtons; // @synthesize showingButtons=_showingButtons;
@property(retain, nonatomic) MMUIButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) MMUIButton *duetShootingEnableButton; // @synthesize duetShootingEnableButton=_duetShootingEnableButton;
@property(retain, nonatomic) MMUIButton *captionButton; // @synthesize captionButton=_captionButton;
@property(retain, nonatomic) MMUIButton *visageButton; // @synthesize visageButton=_visageButton;
@property(nonatomic) __weak id <MJShootSideToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *switchGenderButton; // @synthesize switchGenderButton=_switchGenderButton;
@property(retain, nonatomic) MMUIButton *recordingTimerButton; // @synthesize recordingTimerButton=_recordingTimerButton;
@property(retain, nonatomic) MMUIButton *countdownTimerButton; // @synthesize countdownTimerButton=_countdownTimerButton;
@property(retain, nonatomic) MMUIButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(retain, nonatomic) MMUIButton *flashButton; // @synthesize flashButton=_flashButton;
@property(nonatomic) _Bool isCaptionButtonEnabledShowing; // @synthesize isCaptionButtonEnabledShowing=_isCaptionButtonEnabledShowing;
- (id)showingButtonsForNormalShooting;
- (id)showingButtonsForTemplateShooting;
- (void)notifyButtonStatusIfNeeded;
- (void)updateShowingButtonsWithTemplateShootingMode:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isCaptionOn;
@property(readonly, nonatomic) _Bool isDuetShootOn;
- (void)updateRecordingTimerButtonStyleWithMode:(unsigned long long)arg1;
- (void)updateCountdownTimerButtonStyleWithMode:(unsigned long long)arg1;
- (void)updateForFlashOff;
- (void)updateForFlashOn;
- (void)updateForVisagePanelDismissing;
- (void)updateForVisagePanelShowing;
- (void)updateForTemplatePanelDismissing;
- (void)updateForTemplatePanelShowing;
- (void)updateForNormalShooting;
- (void)updateForTemplateShooting;
- (void)captionButtonDidTouchUpInside:(id)arg1;
- (void)flashButtonDidTouchUpInside:(id)arg1;
- (void)replayButtonDidTouchUpInside:(id)arg1;
- (void)switchCameraButtonDidTouchUpInside:(id)arg1;
- (void)duetShootingEnableButtonDidTouchUpInside:(id)arg1;
- (void)switchRecordingTimerButtonDidTouchUpInside:(id)arg1;
- (void)switchCountdownButtonDidTouchUpInside:(id)arg1;
- (void)switchGenderButtonDidTouchUpInside:(id)arg1;
- (void)visageButtonDidTouchUpInside:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsDuetShootingEntry:(_Bool)arg1;

@end

