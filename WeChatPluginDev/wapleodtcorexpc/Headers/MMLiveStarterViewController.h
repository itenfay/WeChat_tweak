//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameTeamUpSpecialGiftSettingDetail, MMFinderLiveMusicSettingOperationPanel, MMFinderLiveReplayKitManager, MMFinderLiveSongSettingOperationPanel, MMFinderScreenRecordGuideView, MMGrowTextView, MMLiveCountdownTipsView, MMLiveTaskId, NSDictionary, NSString, RPSystemBroadcastPickerView, WCFinderHeadImageView, WCFinderLiveStarterChooseGamePanelView, WCFinderLiveStarterReporter, WCFinderStarterLiveViewModel, WCLiveStarterScrollActionSheet;
@protocol MMLiveStarterViewControllerDelegate;

@interface MMLiveStarterViewController
{
    _Bool _isRecordPermissionCheckOK;
    _Bool _isInRecordPermissionCheckProcess;
    _Bool _uploadCoverImageRequired;
    _Bool _jumpToSticker;
    _Bool _jumpToOperation;
    _Bool _isAgreementChecked;
    unsigned int _versionType;
    unsigned int _cachedJoinTeamMode;
    unsigned int _curCoinValue;
    MMLiveTaskId *_liveTaskId;
    NSDictionary *_startExtraInfo;
    id <MMLiveStarterViewControllerDelegate> _delegate;
    WCLiveStarterScrollActionSheet *_settingScrollActionSheet;
    GameTeamUpSpecialGiftSettingDetail *_cachedGameTeamUpSpecialGiftSettingDetail;
    long long _currDeviceOrientation;
    WCFinderLiveStarterChooseGamePanelView *_chooseGamePanelView;
    MMFinderLiveMusicSettingOperationPanel *_musicSettingOprationPanel;
    MMFinderLiveSongSettingOperationPanel *_songSettingOperationPanel;
    unsigned long long _gameLiveStartAction;
    RPSystemBroadcastPickerView *_broadcastPickerView;
    MMFinderLiveReplayKitManager *_replayKitManager;
    MMFinderScreenRecordGuideView *_screenRecordGuideView;
    WCFinderStarterLiveViewModel *_starterVM;
    MMLiveCountdownTipsView *_countdownTipsView;
    WCFinderLiveStarterReporter *_reporter;
    WCFinderHeadImageView *_coverImageView;
    MMGrowTextView *_growTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) WCFinderHeadImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) WCFinderLiveStarterReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool isAgreementChecked; // @synthesize isAgreementChecked=_isAgreementChecked;
@property(retain, nonatomic) MMLiveCountdownTipsView *countdownTipsView; // @synthesize countdownTipsView=_countdownTipsView;
@property(retain, nonatomic) WCFinderStarterLiveViewModel *starterVM; // @synthesize starterVM=_starterVM;
@property(retain, nonatomic) MMFinderScreenRecordGuideView *screenRecordGuideView; // @synthesize screenRecordGuideView=_screenRecordGuideView;
@property(retain, nonatomic) MMFinderLiveReplayKitManager *replayKitManager; // @synthesize replayKitManager=_replayKitManager;
@property(retain, nonatomic) RPSystemBroadcastPickerView *broadcastPickerView; // @synthesize broadcastPickerView=_broadcastPickerView;
@property(nonatomic) unsigned long long gameLiveStartAction; // @synthesize gameLiveStartAction=_gameLiveStartAction;
@property(retain, nonatomic) MMFinderLiveSongSettingOperationPanel *songSettingOperationPanel; // @synthesize songSettingOperationPanel=_songSettingOperationPanel;
@property(nonatomic) __weak MMFinderLiveMusicSettingOperationPanel *musicSettingOprationPanel; // @synthesize musicSettingOprationPanel=_musicSettingOprationPanel;
@property(retain, nonatomic) WCFinderLiveStarterChooseGamePanelView *chooseGamePanelView; // @synthesize chooseGamePanelView=_chooseGamePanelView;
@property(nonatomic) long long currDeviceOrientation; // @synthesize currDeviceOrientation=_currDeviceOrientation;
@property(nonatomic) _Bool jumpToOperation; // @synthesize jumpToOperation=_jumpToOperation;
@property(nonatomic) _Bool jumpToSticker; // @synthesize jumpToSticker=_jumpToSticker;
@property(nonatomic) _Bool uploadCoverImageRequired; // @synthesize uploadCoverImageRequired=_uploadCoverImageRequired;
@property(nonatomic) unsigned int curCoinValue; // @synthesize curCoinValue=_curCoinValue;
@property(nonatomic) unsigned int cachedJoinTeamMode; // @synthesize cachedJoinTeamMode=_cachedJoinTeamMode;
@property(retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *cachedGameTeamUpSpecialGiftSettingDetail; // @synthesize cachedGameTeamUpSpecialGiftSettingDetail=_cachedGameTeamUpSpecialGiftSettingDetail;
@property(retain, nonatomic) WCLiveStarterScrollActionSheet *settingScrollActionSheet; // @synthesize settingScrollActionSheet=_settingScrollActionSheet;
@property(nonatomic) unsigned int versionType; // @synthesize versionType=_versionType;
@property(nonatomic) _Bool isInRecordPermissionCheckProcess; // @synthesize isInRecordPermissionCheckProcess=_isInRecordPermissionCheckProcess;
@property(nonatomic) _Bool isRecordPermissionCheckOK; // @synthesize isRecordPermissionCheckOK=_isRecordPermissionCheckOK;
@property(nonatomic) __weak id <MMLiveStarterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *startExtraInfo; // @synthesize startExtraInfo=_startExtraInfo;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)minimizeSrcView;
- (double)getSwitchModeViewScale;
- (void)setStartGameLiveButtonDisable:(_Bool)arg1;
- (void)addShakeOnCheckBoxView;
- (void)OnRecordDeniedByWeChat;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (unsigned long long)systemCapabilityAuthScene;
- (void)realStartLive;
- (void)checkRecordPermissionAndStartLive;
- (void)onCurrAnchorMainShouldSupportOrientationMaskChanged:(unsigned long long)arg1;
- (void)onOrientationChanged;
- (void)showLiveStarterWarnPage:(id)arg1;
- (void)stopLiveTimer;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

