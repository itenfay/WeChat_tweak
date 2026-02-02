//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString;

@interface SettingGeneralViewController
{
    MMTableViewInfo *m_tableViewInfo;
}

- (void).cxx_destruct;
- (void)setupDeepLinkConfig;
- (void)handleTingSettings;
- (void)handleWCDBRecover;
- (void)handelEmoticonSetting;
- (void)handleChatLog;
- (void)handleFontSizeChange;
- (void)handleTranslateLanguage;
- (void)handleLanguageChange;
- (void)handleDarkMode;
- (void)onNearModeSwitchChanged:(id)arg1;
- (void)doSetPrivateConfig:(unsigned int)arg1 on:(_Bool)arg2 bitset:(unsigned int)arg3;
- (void)showNotificationView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (void)onSetAutoDownloadSight;
- (void)onClearData;
- (void)onSwitchSendButtonInChat:(id)arg1;
- (void)onLoudModeSwitch:(id)arg1;
- (void)onVoipRecentStatusConfig:(id)arg1;
- (void)onShakeToSightSwitch:(id)arg1;
- (void)showClearLocalDataView;
- (void)showPluginsView;
- (void)showDiscoverEntranceView;
- (void)showChatBackgroundConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

