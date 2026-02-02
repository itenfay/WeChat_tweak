//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMAcceptAgreementCommonHeadView, MMLimitedModeGuardianLogic, MMTableView, MMTableViewInfo, NSString, UIButton;

@interface MMLimitedModeSettingGuardianViewController
{
    UIButton *m_operateButton;
    CContact *m_guardianContact;
    _Bool m_needReload;
    MMLimitedModeGuardianLogic *m_guardianLogic;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
}

- (void).cxx_destruct;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (id)navigationBarBackgroundColor;
- (id)getViewController;
- (void)onUnBindTeenagerModeGuardianWithSuccess:(_Bool)arg1 errMsg:(id)arg2;
- (void)didClickLeftCloseBarButton;
- (void)onCancelAuthorization;
- (void)didOperateButton;
- (void)didRemoveOperateButton;
- (id)genHeaderView;
- (void)reloadFootView;
- (void)makeGuardianCell:(id)arg1;
- (void)reloadTableData;
- (void)layoutOperateButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

