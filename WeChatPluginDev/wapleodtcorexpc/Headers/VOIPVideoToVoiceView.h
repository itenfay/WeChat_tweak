//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, MMTimerLabel, MMUIButton, MultiTalkHDHeadView, NSString, UIImageView, UILabel, UIView, VoipDescriptionButton, VoipRecentStatusCardView, VoipRecentStatusFoldButton, VoipRecentStatusUnFoldButton;
@protocol VOIPVideoToVoiceViewDelegate, VoipRecentStatusProperties;

@interface VOIPVideoToVoiceView
{
    _Bool m_isOperating;
    _Bool _isCaller;
    _Bool _isSpeakerReady;
    _Bool _isInitSpeakModeOpen;
    _Bool _isRecentStatusUnFolded;
    _Bool _isRecentStatusCardViewShowLogged;
    _Bool _canClickAddMembersBtn;
    unsigned int _deviceStatus;
    CContact *m_contact;
    UIImageView *m_backgroundView;
    UILabel *m_remoteNameLabel;
    VoipDescriptionButton *m_hangupButton;
    VoipDescriptionButton *m_micButton;
    VoipDescriptionButton *m_speakerButton;
    MultiTalkHDHeadView *m_remoteHeadImageView;
    MMTimerLabel *m_timer;
    UIImageView *m_blurView;
    MMHeadImageView *m_blurHeadImageView;
    id <VOIPVideoToVoiceViewDelegate> m_delegate;
    VoipRecentStatusCardView<VoipRecentStatusProperties> *_recentStatusCardView;
    VoipRecentStatusUnFoldButton *_recentStatusUnFoldButton;
    UIView *_recentStatusUnFoldHotView;
    VoipRecentStatusFoldButton *_recentStatusFoldButton;
    UIView *_recentStatusFoldHotView;
    UIView *_recentStatusContentsView;
    NSString *_recentStatusUserName;
    unsigned long long _openFrom;
    MMUIButton *_m_addMemberButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canClickAddMembersBtn; // @synthesize canClickAddMembersBtn=_canClickAddMembersBtn;
@property(retain, nonatomic) MMUIButton *m_addMemberButton; // @synthesize m_addMemberButton=_m_addMemberButton;
@property(nonatomic) unsigned int deviceStatus; // @synthesize deviceStatus=_deviceStatus;
@property(nonatomic) unsigned long long openFrom; // @synthesize openFrom=_openFrom;
@property(nonatomic) _Bool isRecentStatusCardViewShowLogged; // @synthesize isRecentStatusCardViewShowLogged=_isRecentStatusCardViewShowLogged;
@property(retain, nonatomic) NSString *recentStatusUserName; // @synthesize recentStatusUserName=_recentStatusUserName;
@property(retain, nonatomic) UIView *recentStatusContentsView; // @synthesize recentStatusContentsView=_recentStatusContentsView;
@property(retain, nonatomic) UIView *recentStatusFoldHotView; // @synthesize recentStatusFoldHotView=_recentStatusFoldHotView;
@property(retain, nonatomic) VoipRecentStatusFoldButton *recentStatusFoldButton; // @synthesize recentStatusFoldButton=_recentStatusFoldButton;
@property(retain, nonatomic) UIView *recentStatusUnFoldHotView; // @synthesize recentStatusUnFoldHotView=_recentStatusUnFoldHotView;
@property(retain, nonatomic) VoipRecentStatusUnFoldButton *recentStatusUnFoldButton; // @synthesize recentStatusUnFoldButton=_recentStatusUnFoldButton;
@property(nonatomic) _Bool isRecentStatusUnFolded; // @synthesize isRecentStatusUnFolded=_isRecentStatusUnFolded;
@property(nonatomic) _Bool isInitSpeakModeOpen; // @synthesize isInitSpeakModeOpen=_isInitSpeakModeOpen;
@property(nonatomic) _Bool isSpeakerReady; // @synthesize isSpeakerReady=_isSpeakerReady;
@property(retain, nonatomic) VoipRecentStatusCardView<VoipRecentStatusProperties> *recentStatusCardView; // @synthesize recentStatusCardView=_recentStatusCardView;
@property(nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) _Bool m_isOperating; // @synthesize m_isOperating;
@property(nonatomic) __weak id <VOIPVideoToVoiceViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMHeadImageView *m_blurHeadImageView; // @synthesize m_blurHeadImageView;
@property(retain, nonatomic) UIImageView *m_blurView; // @synthesize m_blurView;
@property(retain, nonatomic) MMTimerLabel *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) MultiTalkHDHeadView *m_remoteHeadImageView; // @synthesize m_remoteHeadImageView;
@property(retain, nonatomic) VoipDescriptionButton *m_speakerButton; // @synthesize m_speakerButton;
@property(retain, nonatomic) VoipDescriptionButton *m_micButton; // @synthesize m_micButton;
@property(retain, nonatomic) VoipDescriptionButton *m_hangupButton; // @synthesize m_hangupButton;
@property(retain, nonatomic) UILabel *m_remoteNameLabel; // @synthesize m_remoteNameLabel;
@property(retain, nonatomic) UIImageView *m_backgroundView; // @synthesize m_backgroundView;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void)OnVoipCXHungUp;
- (void)OnVoipCXSetMuted;
- (void)getVoiceViewSpeakerMode:(_Bool *)arg1;
- (void)foldupRecentStatus;
- (void)startOperate:(_Bool)arg1;
- (void)startTimer;
- (void)reverseMicButtonState;
- (void)onClickMicButton;
- (void)VoIPMPUpdateSpeakerButtonStatus:(int)arg1 name:(id)arg2 hasOutput:(_Bool)arg3;
- (void)VoIPUpdateProximityWithPort:(int)arg1;
- (void)updateProximityWithPort:(id)arg1;
- (void)updateProximityBySpeakerButtonState;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(_Bool)arg2;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(_Bool)arg2;
- (void)showAirplayLoading;
- (void)showAirplayLoadingState:(_Bool)arg1;
- (void)updateSpeakerButton;
- (void)onClickHandup;
- (void)reportTalkingAllButtonStatus:(int)arg1;
- (void)checkAndUpdateProximity;
- (void)updateMicBtnStatusByMicMode:(_Bool)arg1;
- (void)updateSpeakBtnStatusBySpeakMode:(_Bool)arg1 deviceStatus:(unsigned int)arg2;
- (void)layoutHangupButton;
- (void)updateMicButtonText;
- (void)layoutMicButton;
- (void)layoutSpeakerButton;
- (void)layoutNameView;
- (void)layoutHeadView;
- (void)layoutBlurView;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)enbaleClickAddMembersBtn;
- (void)onAddMemberButtonClick;
- (void)layoutAddMemberButton;
- (void)onSmallSwitchButtonClick;
- (void)initMinimizeButton;
- (void)layoutBackground;
- (void)layoutTimerView;
- (void)layoutRecentSitutaionCardView;
- (void)layoutRecentStatusContentsView;
- (void)onClickRecentStatusFoldHotViewWithSender:(id)arg1;
- (void)layoutRecentStatusFoldHotView;
- (void)layoutRecentStatusFoldButton;
- (void)onClickRecentStatusUnFoldHotViewWithSender:(id)arg1;
- (void)layoutRecentStatusUnFoldHotView;
- (void)layoutRecentStatusUnFoldButton;
- (void)layoutRecentStatusWithAnimate:(_Bool)arg1;
- (void)layoutRecentStatusWithAnimate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutRecentStatus;
- (_Bool)isRecentStatusEnable;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 openFrom:(unsigned long long)arg2 contact:(id)arg3 delegate:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

