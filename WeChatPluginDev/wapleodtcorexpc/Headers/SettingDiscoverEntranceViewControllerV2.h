//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DelaySwitchSettingLogic, DiscoverEntranceSettingReporter, NSString;

@interface SettingDiscoverEntranceViewControllerV2
{
    DelaySwitchSettingLogic *_delaySwitchSettingLogic;
    DiscoverEntranceSettingReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DiscoverEntranceSettingReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) DelaySwitchSettingLogic *delaySwitchSettingLogic; // @synthesize delaySwitchSettingLogic=_delaySwitchSettingLogic;
- (void)reloadTableView;
- (void)onReturn;
- (id)genTableHeaderView;
- (void)initData;
- (void)initView;
- (void)initReporter;
- (id)arrangedEntranceTypeList;
- (void)initTableView;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

