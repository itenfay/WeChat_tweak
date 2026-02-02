//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderContact, WCFinderPersonalSettingParams, WCFinderPrivacySettingHelper;

@interface WCFinderPrivacySettingViewController
{
    WCFinderPersonalSettingParams *_params;
    WCFinderContact *_contact;
    WCFinderPrivacySettingHelper *_helper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPrivacySettingHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderPersonalSettingParams *params; // @synthesize params=_params;
- (void)registerYReportSdk;
- (void)onBuildTables;
- (void)requestReloadTableView;
- (int)feedViewControllerScene;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

