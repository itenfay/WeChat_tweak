//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, XMailBindMailControlLogic;

@interface CPushMailContactInfoAssist
{
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_mapPushMailCellToCellType;
    XMailBindMailControlLogic *_bindMailControlLogic;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) XMailBindMailControlLogic *bindMailControlLogic; // @synthesize bindMailControlLogic=_bindMailControlLogic;
- (void)onXMailBindMailControlLogicCanceled:(id)arg1;
- (void)onXMailBindMailControlLogicSuccess:(id)arg1 mailAddr:(id)arg2;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSwitchPushMailOk:(unsigned int)arg1;
- (id)getPushMailErrorTitle;
- (void)showInputPwdAlert:(_Bool)arg1;
- (void)onSessionTopStateChange:(id)arg1;
- (void)onMuteChange:(id)arg1;
- (void)reloadInstalledTableViewData;
- (id)getAccountRebindDescView;
- (void)makeAccountDescCell:(id)arg1 cellInfo:(id)arg2;
- (void)startBind;
- (void)onWrite;
- (void)clearPluginData;
- (void)doUninstall;
- (void)installPlugin;
- (id)getLoadingText;
- (id)getPluginIntro;
- (void)onSwitchViewOff;
- (void)onSwitchViewOn;
- (void)doSwitchPushMail:(id)arg1;
- (void)reloadPushMailTableView;
- (_Bool)isShowOpenPushMailBtn;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

