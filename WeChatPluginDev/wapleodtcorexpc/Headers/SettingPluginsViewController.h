//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactGetPluginSwitchCgi, NSMutableArray, NSString, WCPayGetCollAssitStatusCgi;

@interface SettingPluginsViewController
{
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_mapCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_uninstallMapCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_mapSectionType;
    NSMutableArray *m_nameArray;
    NSMutableArray *m_uninstallNameArray;
    WCPayGetCollAssitStatusCgi *_getCollAssistStatusCgi;
    ContactGetPluginSwitchCgi *_getPluginSwitchCgi;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) ContactGetPluginSwitchCgi *getPluginSwitchCgi; // @synthesize getPluginSwitchCgi=_getPluginSwitchCgi;
@property(retain, nonatomic) WCPayGetCollAssitStatusCgi *getCollAssistStatusCgi; // @synthesize getCollAssistStatusCgi=_getCollAssistStatusCgi;
- (void)onGetCollAssistStatusCgiSucc;
- (void)checkPluginSwitchEntryIfNeeded;
- (void)checkCollAssistPluginEntryIfNeed;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)pluginsChanged:(id)arg1;
- (void)initData;
- (void)initOnePlugin:(long long)arg1;
- (id)cellWithRowType:(unsigned int)arg1 text:(id)arg2 isInstallSection:(_Bool)arg3;
- (void)reloadTableData;
- (void)refreshAllData;
- (void)reportUserClickWithPluginType:(long long)arg1;
- (void)onSwitchChanged:(id)arg1 rowType:(long long)arg2;
- (void)onSwitchChanged_MMPlugin_Count:(id)arg1;
- (void)onSwitchChanged_MMPlugin_WeGame:(id)arg1;
- (void)onSwitchChanged_MMPlugin_MerchantAssist:(id)arg1;
- (void)onSwitchChanged_MMPlugin_WeChatPayHK:(id)arg1;
- (void)onSwitchChanged_MMPlugin_MinishopAssist:(id)arg1;
- (void)onSwitchChanged_MMPlugin_WeChatPayCollAssist:(id)arg1;
- (void)onSwitchChanged_MMPlugin_WeChatPay:(id)arg1;
- (void)onSwitchChanged_MMPlugin_WeSport:(id)arg1;
- (void)onSwitchChanged_MMPlugin_MassSend:(id)arg1;
- (void)onSwitchChanged_MMPlugin_Reader:(id)arg1;
- (void)onSwitchChanged_MMPlugin_Facebook:(id)arg1;
- (void)onSwitchChanged_MMPlugin_QQMail:(id)arg1;
- (id)viewForHeaderInSection:(long long)arg1;
- (void)openContactInfoView:(long long)arg1;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

