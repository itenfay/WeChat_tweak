//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, MMTipsViewController, NSString, WCAccountLogoutLogic, WCAccountSwitchLogic, WCTableViewManager, WCTableViewNormalCellManager;

@interface NewSettingViewController
{
    MMTableViewInfo *m_tableViewInfo;
    WCAccountSwitchLogic *m_switchLogic;
    WCAccountLogoutLogic *m_logoutLogic;
    MMTipsViewController *m_introView;
    WCTableViewManager *m_tableViewMgr;
    WCTableViewNormalCellManager *_pluginCellInfo;
}

+ (void)handleJumpPlugin:(id)arg1 params:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak WCTableViewNormalCellManager *pluginCellInfo; // @synthesize pluginCellInfo=_pluginCellInfo;
- (void)onSetElderModeOn:(_Bool)arg1 success:(_Bool)arg2;
- (void)registerYReportSdk;
- (void)onLimitedModeChanged;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)setupDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)showFeedbackView;
- (void)onAccountSwitchLogicCancel;
- (void)showDebugViewController;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showLoginInfo;
- (void)gotoSwitchAccount;
- (void)onAccountLogoutLogicCancel;
- (void)showQuitActionSheet:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)willAppear;
- (void)showPrivacySummaryPage;
- (void)onShowLimitedMode;
- (void)onShowElderMode;
- (void)showAccountView;
- (void)showWebViewByUrl:(id)arg1;
- (void)showShareList;
- (void)showCollectionList;
- (id)cellInfoForNotifySetting;
- (id)cellInfoForAbout;
- (void)showRepairView;
- (void)addSectionForVisionOS;
- (void)reloadTableData;
- (void)showWechatLabView;
- (void)showAboutMMView;
- (void)showGeneralView;
- (void)showDeviceListView;
- (void)showPrivateConfigViewWithContactVerify:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showPrivateConfigView;
- (void)showNotificationView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

