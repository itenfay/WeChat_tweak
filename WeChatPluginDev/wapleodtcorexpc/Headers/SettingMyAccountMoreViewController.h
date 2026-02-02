//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString;

@interface SettingMyAccountMoreViewController
{
    MMTableViewInfo *m_tableViewInfo;
}

- (void).cxx_destruct;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)onAppleIDBindStatusChange;
- (void)willShow;
- (void)onProfileChange;
- (void)OnUnBindQQOK;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)saveNewEmail;
- (void)modifyEmail;
- (void)showFacebook;
- (void)showApple;
- (void)showModifyQQView;
- (void)initDeleteAccountCellData;
- (void)initAccountCellData;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (void)undoRegester;
- (void)doRegester;
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

