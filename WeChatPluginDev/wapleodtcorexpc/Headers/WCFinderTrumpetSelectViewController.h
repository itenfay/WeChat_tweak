//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameRankSwitchInfo, MMFinderLiveTaskId, NSNumber, NSString, WCFinderLiveAudienceRoleReporter, WCTableViewManager;
@protocol WCFinderTrumpetSelectViewControllerDelegate;

@interface WCFinderTrumpetSelectViewController
{
    _Bool _selectRoleOnlyMode;
    _Bool _autoDismissAfterChanged;
    _Bool _showOKToastAfterChanged;
    _Bool _showPersonalizedLiveRecommendationSetting;
    id <WCFinderTrumpetSelectViewControllerDelegate> _delegate;
    MMFinderLiveTaskId *_liveTaskId;
    unsigned long long _scene;
    WCTableViewManager *_tableViewManager;
    WCFinderLiveAudienceRoleReporter *_reporter;
    GameRankSwitchInfo *_switchInfo;
    NSNumber *_selectedAccountType;
    NSNumber *_selectedPrivacyType;
    NSNumber *_isPrivateMsgVisiableInfoSwitchOn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isPrivateMsgVisiableInfoSwitchOn; // @synthesize isPrivateMsgVisiableInfoSwitchOn=_isPrivateMsgVisiableInfoSwitchOn;
@property(retain, nonatomic) NSNumber *selectedPrivacyType; // @synthesize selectedPrivacyType=_selectedPrivacyType;
@property(retain, nonatomic) NSNumber *selectedAccountType; // @synthesize selectedAccountType=_selectedAccountType;
@property(retain, nonatomic) GameRankSwitchInfo *switchInfo; // @synthesize switchInfo=_switchInfo;
@property(retain, nonatomic) WCFinderLiveAudienceRoleReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(nonatomic) _Bool showPersonalizedLiveRecommendationSetting; // @synthesize showPersonalizedLiveRecommendationSetting=_showPersonalizedLiveRecommendationSetting;
@property(nonatomic) _Bool showOKToastAfterChanged; // @synthesize showOKToastAfterChanged=_showOKToastAfterChanged;
@property(nonatomic) _Bool autoDismissAfterChanged; // @synthesize autoDismissAfterChanged=_autoDismissAfterChanged;
@property(nonatomic) _Bool selectRoleOnlyMode; // @synthesize selectRoleOnlyMode=_selectRoleOnlyMode;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) __weak id <WCFinderTrumpetSelectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)audienceLogReporter;
- (void)onNewSyncModUserInfoExt:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)finderLiveUpdateIdentity;
- (void)finderLiveIdentityPrivacySettingChange;
- (void)finderLiveIdentityChange;
- (void)selectedLiveIdentity:(id)arg1;
- (void)onTapDone;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)showDoneButton;
- (id)joinliveVisibleInfo;
- (void)onProfileChange;
- (void)willDisplayCell:(id)arg1 indexPath:(id)arg2;
- (void)onDidChangeToRoleType:(long long)arg1;
- (id)makeSectionSeparator;
- (void)editTrumpetAccount;
- (void)deleteTrumpetAccount;
- (void)createTrumpetAccount;
- (void)onGameLiveRankSwitched:(id)arg1 cellInfo:(id)arg2;
- (void)onClickLiveShowGameLv;
- (void)reportGloryOpen:(_Bool)arg1 isClick:(_Bool)arg2;
- (void)onGloryShowSwitchClick:(id)arg1;
- (void)tryAddGameLiveRankSection;
- (void)addGloryShowSwitchSectionIfNeed;
- (void)addRecommendSectionIfNeeded;
- (void)tryAddLiveAdditionPropertiesSection;
- (void)addAccountSection;
- (_Bool)enableGloryShowSwitch;
- (void)changeRecommendSceneValue:(int)arg1;
- (void)clickCloseRecommendLive;
- (void)cancelAlertAction;
- (_Bool)getCurrentSwitchFlagWithScene:(int)arg1;
- (void)changePersonalizedRecommendationLive;
- (_Bool)showRecommendSection;
- (void)onClickIdentityPrivacyH5;
- (void)onClickPrivateMsgVisiableInfoSwitchCell:(id)arg1;
- (void)onClickIdentityPrivacyOptionCell:(id)arg1;
- (void)addNewIdentityPrivacySection;
- (void)addIdentityPrivacySection;
- (void)reloadTableView;
- (void)configureTableView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

