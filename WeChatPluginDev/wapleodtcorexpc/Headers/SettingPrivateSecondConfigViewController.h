//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DelaySwitchSettingLogic, MMTableViewInfo, NSString, WCOpLog;

@interface SettingPrivateSecondConfigViewController
{
    MMTableViewInfo *m_tableViewInfo;
    WCOpLog *m_wcOpLog;
    _Bool m_strangerRightOpen;
    _Bool m_finderLiveIsHoverSnsTimelineSwitchOpen;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    _Bool _finderShowLikeListInWeixinProfile;
    unsigned int _wcNotificationCellIndex;
    long long _recentPrivacyPushScene;
    unsigned long long _settingAuthManageFlag;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool finderShowLikeListInWeixinProfile; // @synthesize finderShowLikeListInWeixinProfile=_finderShowLikeListInWeixinProfile;
@property(nonatomic) unsigned int wcNotificationCellIndex; // @synthesize wcNotificationCellIndex=_wcNotificationCellIndex;
@property(nonatomic) unsigned long long settingAuthManageFlag; // @synthesize settingAuthManageFlag=_settingAuthManageFlag;
@property(nonatomic) long long recentPrivacyPushScene; // @synthesize recentPrivacyPushScene=_recentPrivacyPushScene;
- (void)onFinderSvrExptConfigHitChanged:(int)arg1;
- (void)setupDeepLinkConfig;
- (void)showWowBlackView;
- (void)showWowOutsideView;
- (void)showFinderBlackView;
- (void)showFinderOutsideView;
- (void)showWCBlackListView;
- (void)showWCOutsiderView;
- (void)showWCEditGroup;
- (void)finderLiveHoverOnSnsTimelineSwitchChanged:(id)arg1;
- (void)showRecentWC:(id)arg1;
- (void)allowShowFinderLikeList:(id)arg1;
- (void)allowStrangerWC:(id)arg1;
- (void)onModifyRecentOption:(id)arg1;
- (void)showRecentWCOptions;
- (unsigned long long)getCurrentRecentType:(id)arg1;
- (id)getCurrentRecentString;
- (void)reloadTableAuthManageWowData;
- (id)createShieldMyLikedFeedCell;
- (id)createShieldHisLikedFeedCell;
- (void)reloadTableAuthManageFinderData;
- (void)reloadTableAuthManageSnsData;
- (void)reloadTableDataWithReloadFooterView:(_Bool)arg1;
- (void)reloadTableData;
- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

