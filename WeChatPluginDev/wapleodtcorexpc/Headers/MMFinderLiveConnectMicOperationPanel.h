//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicAnchorContainerView, MMFinderLiveConnectMicAudienceContainerView, MMFinderLiveConnectMicBaseContainerView, MMFinderLiveConnectMicIncomingAudienceSettingsPanel, MMFinderLiveConnectMicLayoutModeSubtitleWrap, MMFinderLiveConnectMicSearchAudienceView, MMFinderLiveConnectMicTabView, MMFinderLiveTaskId, MMUnderlineTabsView, NSString, UIView;
@protocol MMFinderLiveConnectMicOperationPanelDelegate;

@interface MMFinderLiveConnectMicOperationPanel
{
    _Bool _enableOperation;
    _Bool _isShowing;
    _Bool _canAutoConnect;
    _Bool _canSelectMicMode;
    _Bool _shouldCheckNewMicConditionAfterAppear;
    _Bool _isMultiAnchorMicEnabled;
    _Bool _isAudiencePkEnable;
    id <MMFinderLiveConnectMicOperationPanelDelegate> _actionDelegate;
    unsigned long long _panelMode;
    MMFinderLiveTaskId *_taskId;
    UIView *_panelView;
    MMUnderlineTabsView *_tabsView;
    MMFinderLiveConnectMicTabView *_audienceTabView;
    MMFinderLiveConnectMicTabView *_anchorTabView;
    MMFinderLiveConnectMicAudienceContainerView *_audienceContainerView;
    MMFinderLiveConnectMicAnchorContainerView *_anchorContainerView;
    unsigned long long _curConditionType;
    unsigned long long _micLayoutMode;
    MMFinderLiveConnectMicLayoutModeSubtitleWrap *_micLayoutModeSubtitleWrap;
    MMFinderLiveConnectMicSearchAudienceView *_searchAudiencePanel;
    MMFinderLiveConnectMicBaseContainerView *_currentContainerView;
    unsigned long long _pkState;
    MMFinderLiveConnectMicIncomingAudienceSettingsPanel *_audienceSettingsPanel;
}

+ (id)TabItemWithTabView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicIncomingAudienceSettingsPanel *audienceSettingsPanel; // @synthesize audienceSettingsPanel=_audienceSettingsPanel;
@property(nonatomic) _Bool isAudiencePkEnable; // @synthesize isAudiencePkEnable=_isAudiencePkEnable;
@property(nonatomic) _Bool isMultiAnchorMicEnabled; // @synthesize isMultiAnchorMicEnabled=_isMultiAnchorMicEnabled;
@property(nonatomic) unsigned long long pkState; // @synthesize pkState=_pkState;
@property(nonatomic) _Bool shouldCheckNewMicConditionAfterAppear; // @synthesize shouldCheckNewMicConditionAfterAppear=_shouldCheckNewMicConditionAfterAppear;
@property(retain, nonatomic) MMFinderLiveConnectMicBaseContainerView *currentContainerView; // @synthesize currentContainerView=_currentContainerView;
@property(nonatomic) __weak MMFinderLiveConnectMicSearchAudienceView *searchAudiencePanel; // @synthesize searchAudiencePanel=_searchAudiencePanel;
@property(retain, nonatomic) MMFinderLiveConnectMicLayoutModeSubtitleWrap *micLayoutModeSubtitleWrap; // @synthesize micLayoutModeSubtitleWrap=_micLayoutModeSubtitleWrap;
@property(nonatomic) _Bool canSelectMicMode; // @synthesize canSelectMicMode=_canSelectMicMode;
@property(nonatomic) _Bool canAutoConnect; // @synthesize canAutoConnect=_canAutoConnect;
@property(nonatomic) unsigned long long micLayoutMode; // @synthesize micLayoutMode=_micLayoutMode;
@property(nonatomic) unsigned long long curConditionType; // @synthesize curConditionType=_curConditionType;
@property(retain, nonatomic) MMFinderLiveConnectMicAnchorContainerView *anchorContainerView; // @synthesize anchorContainerView=_anchorContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicAudienceContainerView *audienceContainerView; // @synthesize audienceContainerView=_audienceContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicTabView *anchorTabView; // @synthesize anchorTabView=_anchorTabView;
@property(retain, nonatomic) MMFinderLiveConnectMicTabView *audienceTabView; // @synthesize audienceTabView=_audienceTabView;
@property(retain, nonatomic) MMUnderlineTabsView *tabsView; // @synthesize tabsView=_tabsView;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long panelMode; // @synthesize panelMode=_panelMode;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool enableOperation; // @synthesize enableOperation=_enableOperation;
@property(nonatomic) __weak id <MMFinderLiveConnectMicOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (id)getFinderLiveTask;
- (void)onMMFinderLiveConnectMicConditionClose;
- (void)onMMFinderLiveConnectMicConditionChoose:(unsigned long long)arg1;
- (void)onConnectMicAudienceSettingsPanelClosed:(id)arg1;
- (void)onConnectMicAudienceSettingsPanel:(id)arg1 autoConnectChanged:(_Bool)arg2;
- (void)onConnectMicAudienceSettingsPanel:(id)arg1 conditionChanged:(unsigned long long)arg2;
- (void)onMMFinderLiveInviteAnchorViewRandomMatchRequested;
- (void)onMMFinderLiveInviteAnchorViewConnectMicToUser:(id)arg1;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (void)onConnectMicAutoConnectChanged:(_Bool)arg1;
- (void)onConnectMicConditionChanged:(unsigned long long)arg1;
- (void)onConnectMicFocusChangeCanceled;
- (void)onConnectMicModeOrFocusChangeConfirmed:(unsigned long long)arg1 focusedUserId:(id)arg2 userIndices:(id)arg3;
- (void)onFinderLiveConnectMicContainerViewModifyPaidConnectMicSetting;
- (void)onFinderLiveConnectMicContainerViewShowKtvSongList;
- (void)onFinderLiveConnectMicContainerViewInitiateAudiencePk;
- (void)onFinderLiveConnectMicContainerViewInviteAnchorPK:(id)arg1;
- (void)onFinderLiveConnectMicContainerViewCloseMic;
- (void)onFinderLiveConnectMicContainerViewShowSearchAudiencePannelWithMicUserList:(id)arg1;
- (void)onFinderLiveConnectMicContainerViewShowIncomingAudienceSettingsPanel;
- (void)onFinderLiveConnectMicContainerViewShowSelectMicLayoutModePannel;
- (void)onFinderLiveConnectMicContainerViewUpdateCanAutoConnect:(_Bool)arg1;
- (_Bool)onFinderLiveConnectMicContainerViewIsFocusBlocked;
- (void)onFinderLiveConnectMicContainerViewCloseDetailSettingView;
- (void)onFinderLiveConnectMicContainerViewChangeConditionTypeAudience:(unsigned long long)arg1;
- (void)onFinderLiveConnectMicContainerViewOpenDetailSettingViewForAudienceMic;
- (void)onFinderLiveConnectMicContainerViewRandomMatchButtonClicked;
- (void)onFinderLiveConnectMicContainerViewOpenSearchOnlineAnchor;
- (void)onTapSwitchConnectMicMode;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)closeAction;
- (_Bool)isPaidConnectMic;
@property(readonly, nonatomic) _Bool isOrdinaryLiveMode;
- (id)configUnderlineTabsView;
@property(readonly, nonatomic) unsigned long long currentTabType;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillAppear;
- (void)requestPanelInfoForPaidConnectMic;
- (void)checkAndUpdateAfterMicConditionChanged;
- (void)updateAudiencePanelMicLayoutModeSubtitles:(id)arg1;
- (void)updateAudiencePanelCanAutoConnect:(_Bool)arg1;
- (void)updateAudiencePanelMicLayoutMode:(unsigned long long)arg1;
- (void)updateAudiencePanelMicConditionType:(unsigned long long)arg1;
- (void)updatePanelAppearanceForPkPanel:(_Bool)arg1 targetTabView:(id)arg2;
- (void)changeToContainerWithType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)showAudienceContainerViewDirectly;
- (void)configAudienceContainerView;
- (void)updateAnchorContainerMicList:(_Bool)arg1;
- (void)restoreAnchorPanelFromPk;
- (void)showPanelWithTargetTabType:(unsigned long long)arg1;
- (void)scrollPanelToTopWithTabType:(unsigned long long)arg1;
- (void)updateAnchorPanelWithPkInfo:(id)arg1;
- (void)updateAudiencePanelWithConnectingUserList:(id)arg1 invalidUserList:(id)arg2 recentRemovedUserList:(id)arg3;
- (void)updateAudiencePanelWithConnectingUserList:(id)arg1 invalidUserList:(id)arg2;
- (void)updatePanelViews;
- (void)layoutSubviews;
- (id)makeSwitchConnectMicModeButton;
- (id)makeCloseButton;
- (void)reloadContent;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2 panelMode:(unsigned long long)arg3 canSelectMicMode:(_Bool)arg4 conditionType:(unsigned long long)arg5 micLayoutMode:(unsigned long long)arg6 andCanAutoConnect:(_Bool)arg7 isMultiAnchorMicEnabled:(_Bool)arg8 isAudiencePkEnable:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

