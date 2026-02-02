//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetSafetyInfoLogic, MMTableViewInfo, NSString, WCAccountSetPasswordViewController;

@interface SettingMyAccountInfoViewController
{
    MMTableViewInfo *m_tableViewInfo;
    WCAccountSetPasswordViewController *m_setPasswordViewController;
    GetSafetyInfoLogic *m_getSafetyInfoLogic;
    SEL m_getSafetyInfoNextStepSEL;
}

- (void).cxx_destruct;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)setupDeepLinkConfig;
- (id)rightValueForCellIsHas:(_Bool)arg1 IsOpen:(_Bool)arg2;
- (void)willShow;
- (void)ReloadData;
- (void)openSecurityCenter;
- (void)setTrustedFriends;
- (void)showMoreAccount;
- (void)setSaveDevice;
- (void)setPasskey;
- (void)setVoicePrint;
- (void)setPassword;
- (void)bindPhoneReturn;
- (void)showBindPhone;
- (id)makeBindPhoneView;
- (void)onGetSafetyInfoComplete:(_Bool)arg1;
- (void)startGetSafetyInfo:(SEL)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)undoRegester;
- (void)doRegester;
- (void)reloadTableData;
- (void)initSecurityCellData;
- (void)initWeChatIDView;
- (void)showModifyUserNameProtocol;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

