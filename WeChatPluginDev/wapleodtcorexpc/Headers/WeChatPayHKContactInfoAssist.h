//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HKPayPluginResponse, NSString, WCPayHKGetPluginCgi;

@interface WeChatPayHKContactInfoAssist
{
    _Bool _hasPushedUninstallVC;
    _Bool _hasRequestedPluginData;
    WCPayHKGetPluginCgi *_getPluginCgi;
    HKPayPluginResponse *_payPluginResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKPayPluginResponse *payPluginResp; // @synthesize payPluginResp=_payPluginResp;
@property(retain, nonatomic) WCPayHKGetPluginCgi *getPluginCgi; // @synthesize getPluginCgi=_getPluginCgi;
@property(nonatomic) _Bool hasRequestedPluginData; // @synthesize hasRequestedPluginData=_hasRequestedPluginData;
@property(nonatomic) _Bool hasPushedUninstallVC; // @synthesize hasPushedUninstallVC=_hasPushedUninstallVC;
- (void)onGetHKPayPluginResponse:(id)arg1;
- (void)requestPluginDataFromSvrIfNeeded;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)onClickSvrRetCell:(id)arg1;
- (void)onClickClearMessage:(id)arg1;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)handleTopSwitchChange:(id)arg1;
- (void)enterContactSession;
- (void)enterHelpCenter;
- (void)doUninstall;
- (void)promptUninstall:(id)arg1;
- (void)reloadInstalledTableViewData;
- (void)addSection:(CDUnknownBlockType)arg1;
- (id)getPluginIntro;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

