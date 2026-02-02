//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNewUserPrepareResponse, NSString, WCFinderPrivacySettingHelper, WCTableViewManager;

@interface WCFinderSpliceSettingViewController
{
    WCTableViewManager *_tableViewManager;
    FinderNewUserPrepareResponse *_userPrepare;
    WCFinderPrivacySettingHelper *_helper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPrivacySettingHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepare; // @synthesize userPrepare=_userPrepare;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
- (void)updateLocalHistoryFlag:(_Bool)arg1;
- (void)onClickSwitchFeedHistory:(id)arg1;
- (void)registerYReportSdk;
- (void)onNewSyncModUserInfoExt:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)finderLiveUpdateIdentity;
- (void)finderLiveIdentityChange;
- (void)onProfileChange;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showInterativeInformationVC;
- (void)showPersonalizedRecommendationSwitch;
- (void)displayShieldLikedFeedSettingVCWithCell:(id)arg1 viewModel:(id)arg2;
- (void)clickShieldFinder:(id)arg1;
- (void)clickSieldHisLikedFeed:(id)arg1;
- (void)clickShieldLikedFeedForHim:(id)arg1;
- (id)makeSectionSeparator;
- (void)clickRrivacyIdentitySwitch:(id)arg1;
- (void)addPrivacyAccountCell:(id)arg1;
- (id)createShieldMyLikedFeedCell;
- (id)createShieldHisLikedFeedCell;
- (void)onGloryShowSwitchClick:(id)arg1;
- (void)addLiveGloryCell:(id)arg1;
- (_Bool)enableGloryShowSwitch;
- (void)_onClickLiveShowGameLv;
- (void)willDisplayCell:(id)arg1 indexPath:(id)arg2;
- (void)addLiveShowGameLvCell:(id)arg1;
- (void)onClickAccountSelector;
- (void)onClickIdentityPrivacy;
- (void)addIdentityPrivacyCell:(id)arg1;
- (void)addLiveSections:(id)arg1;
- (id)getWatchSection;
- (void)requestReloadTableView;
- (void)reloadTableView;
- (void)configureTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserPrepare:(id)arg1 contact:(id)arg2 title:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

