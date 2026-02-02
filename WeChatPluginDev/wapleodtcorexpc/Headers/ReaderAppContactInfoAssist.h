//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface ReaderAppContactInfoAssist
{
}

- (void)reportTopOfNews:(_Bool)arg1;
- (void)reportMuteOfNewsEnable:(_Bool)arg1;
- (void)onSessionTopStateChange:(id)arg1;
- (void)onMuteChange:(id)arg1;
- (void)uninstallPlugin;
- (void)installPlugin;
- (void)onClickFeedback;
- (void)reloadInstalledTableViewData;
- (id)getUnInstallBtnTitle;
- (id)getUnInstallTip;
- (id)getPluginIntro;

@end

