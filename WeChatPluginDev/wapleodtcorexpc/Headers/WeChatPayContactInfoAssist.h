//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PayPluginResponse, WCPayGetPluginCgi;

@interface WeChatPayContactInfoAssist
{
    _Bool _bHasGetPluginSectionData;
    WCPayGetPluginCgi *_getPluginCgi;
    PayPluginResponse *_payPluginResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PayPluginResponse *payPluginResp; // @synthesize payPluginResp=_payPluginResp;
@property(retain, nonatomic) WCPayGetPluginCgi *getPluginCgi; // @synthesize getPluginCgi=_getPluginCgi;
@property(nonatomic) _Bool bHasGetPluginSectionData; // @synthesize bHasGetPluginSectionData=_bHasGetPluginSectionData;
- (void)onGetPayPluginResponse:(id)arg1;
- (void)getPayPluginSectionFromSvr;
- (void)onClickSvrRetCell:(id)arg1;
- (void)reportEntryClick:(unsigned int)arg1;
- (void)clearPluginMessage;
- (void)uninstallPlugin;
- (void)handleOnAddContactOk:(id)arg1;
- (void)installPlugin;
- (void)callServicePhone;
- (void)enterHelpCenter;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)handleTopSwitchChange:(id)arg1;
- (void)reloadInstalledTableViewData;
- (id)getPluginIntro;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

