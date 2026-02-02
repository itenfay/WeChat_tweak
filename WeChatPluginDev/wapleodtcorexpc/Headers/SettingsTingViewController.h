//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMListenUserConfig, MMTableViewInfo, NSString, SettingsTingSwitchConfig;

@interface SettingsTingViewController
{
    MMTableViewInfo *_tableViewInfo;
    MMListenUserConfig *_userConfig;
    SettingsTingSwitchConfig *_switchConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SettingsTingSwitchConfig *switchConfig; // @synthesize switchConfig=_switchConfig;
@property(retain, nonatomic) MMListenUserConfig *userConfig; // @synthesize userConfig=_userConfig;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void)enEnableNetworkHighQualitySwitch:(id)arg1;
- (void)onTaskBarConfigHideChanged:(id)arg1;
- (void)onRecommendSwitch:(id)arg1;
- (void)onAutoPlayMvSwitch:(id)arg1;
- (void)syncConfigWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewWillLayoutSubviews;
- (void)reloadSections;
- (void)syncSettingConfig;
- (void)initSettingConfig;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

