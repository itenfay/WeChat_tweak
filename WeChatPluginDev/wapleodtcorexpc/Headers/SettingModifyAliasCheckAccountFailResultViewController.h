//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAcceptAgreementCommonHeadView, MMTableView, MMTableViewInfo, NSArray, NSMutableDictionary, NSString, UIButton;

@interface SettingModifyAliasCheckAccountFailResultViewController
{
    UIButton *m_helpCenterButton;
    NSMutableDictionary *m_cacheHeightDic;
    double m_tableContentHeight;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    NSArray *_m_arrCheckCanSetAliasResult;
    NSString *_m_ssesionID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_ssesionID; // @synthesize m_ssesionID=_m_ssesionID;
@property(retain, nonatomic) NSArray *m_arrCheckCanSetAliasResult; // @synthesize m_arrCheckCanSetAliasResult=_m_arrCheckCanSetAliasResult;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (void)onBackButtonClicked:(id)arg1;
- (void)OnSettingAccountModifyAliasHelpCenter;
- (void)makeCheckCanSetAliasResultCell:(id)arg1 cellInfo:(id)arg2;
- (id)genHeaderView;
- (void)reloadFootView;
- (void)reloadTableData;
- (void)layoutHelpCenterButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

