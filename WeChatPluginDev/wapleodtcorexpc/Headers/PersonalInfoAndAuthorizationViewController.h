//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo;

@interface PersonalInfoAndAuthorizationViewController
{
    MMTableViewInfo *m_tableViewInfo;
}

+ (id)getAdManageUrl;
- (void).cxx_destruct;
- (void)showAgreementWebviewWithUrl:(id)arg1;
- (void)showAppAuthManagementView;
- (void)showPersonalInfoExport;
- (void)showPersonalizedAdsManagementView;
- (void)showSystemAuthorizationPresentView;
- (id)getTailView;
- (void)reloadTableData;
- (void)viewDidLoad;

@end

