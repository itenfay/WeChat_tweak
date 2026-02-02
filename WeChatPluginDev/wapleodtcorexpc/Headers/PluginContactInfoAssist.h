//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DelaySwitchSettingLogic, MMTableViewInfo, UIButton, UILabel;

@interface PluginContactInfoAssist
{
    MMTableViewInfo *m_tableViewInfo;
    long long m_pluginType;
    unsigned int m_uOpType;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    UIButton *m_installBtn;
    UIButton *m_uninstallBtn;
    UILabel *m_statusLabel;
    UILabel *_introLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
- (id)navigationBarBackgroundColor;
- (id)getLoadingText;
- (void)onSwitchValueChange:(id)arg1;
- (void)onClickClearMessage:(id)arg1;
- (void)clearPluginMessage;
- (void)onNewMsg;
- (void)initHeaderView;
- (void)initHeadImage;
- (void)initInstallView;
- (void)uninstallPlugin;
- (void)installPlugin;
- (void)onSwitchViewOff;
- (void)onSwitchViewOn;
- (void)setDelaySettingType:(long long)arg1 andValue:(_Bool)arg2;
- (void)updateInstallStateAndReloadTableView;
- (void)initFooterView;
- (void)updateInstallView;
- (void)promptUninstall:(id)arg1;
- (void)doUninstall;
- (void)clearPluginData;
- (id)getUnInstallBtnTitle;
- (id)getUnInstallTip;
- (id)getPluginIntro;
- (void)makeContactIntroCell:(id)arg1 CellInfo:(id)arg2;
- (void)addBrandUserSignatureSection;
- (void)reloadTableViewData;
- (void)reloadTableView;
- (void)reloadUninstalledTableViewData;
- (void)reloadInstalledTableViewData;
- (void)initTableView;
- (id)GetTableView;
- (void)dealloc;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;

@end

