//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetReceiptAssisPluginResponse, NSString, WCPayGetCollAssistMenuCgi, WCPayGetCollAssistPluginCgi;

@interface WeChatPayCollAssistContactInfoAssist
{
    _Bool _bHasGetPluginSectionData;
    WCPayGetCollAssistPluginCgi *_getPluginCgi;
    GetReceiptAssisPluginResponse *_collAssistPluginResp;
    WCPayGetCollAssistMenuCgi *_getCollAssistMenuCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayGetCollAssistMenuCgi *getCollAssistMenuCgi; // @synthesize getCollAssistMenuCgi=_getCollAssistMenuCgi;
@property(retain, nonatomic) GetReceiptAssisPluginResponse *collAssistPluginResp; // @synthesize collAssistPluginResp=_collAssistPluginResp;
@property(retain, nonatomic) WCPayGetCollAssistPluginCgi *getPluginCgi; // @synthesize getPluginCgi=_getPluginCgi;
@property(nonatomic) _Bool bHasGetPluginSectionData; // @synthesize bHasGetPluginSectionData=_bHasGetPluginSectionData;
- (void)onGetCollAssistMenuCgiResponse:(id)arg1;
- (void)updateCollAssistMenuFromSvr;
- (void)reportSvrEntryClickWithName:(id)arg1;
- (void)reportLocalEntryClickWithScene:(unsigned int)arg1;
- (void)onGetCollAssistPluginResponse:(id)arg1;
- (void)getCollAssistPluginSectionFromSvr;
- (void)onClickSvrRetCell:(id)arg1;
- (void)clearPluginMessage;
- (void)uninstallPlugin;
- (void)handleOnAddContactOk:(id)arg1;
- (void)installPlugin;
- (void)enterHelpCenter;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)handleTopSwitchChange:(id)arg1;
- (void)enterContactSession;
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

