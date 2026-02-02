//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo;

@interface SettingDarkModeViewController
{
    MMTableViewInfo *_tableViewInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void)onSelectLightMode;
- (void)onSelectDarkMode;
- (void)onFollowSystemSwitch:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)reloadSections;
- (void)viewDidLoad;

@end

