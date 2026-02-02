//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMAcceptAgreementCommonHeadView, MMLimitedModeGuardianLogic, MMTableView, MMTableViewInfo, NSString, UIButton;

@interface MMLimitedModeSettingGuardianAcceptViewController
{
    UIButton *m_operateButton;
    CContact *m_wardUserContact;
    MMLimitedModeGuardianLogic *m_guardianLogic;
    _Bool m_isHadGuardianAccept;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    NSString *_m_nsGuardianTicket;
    NSString *_m_nsWardUserName;
    unsigned long long _bindScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bindScene; // @synthesize bindScene=_bindScene;
@property(retain, nonatomic) NSString *m_nsWardUserName; // @synthesize m_nsWardUserName=_m_nsWardUserName;
@property(retain, nonatomic) NSString *m_nsGuardianTicket; // @synthesize m_nsGuardianTicket=_m_nsGuardianTicket;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (id)navigationBarBackgroundColor;
- (void)onBindTeenagerModeGuardianWithSuccess:(_Bool)arg1 errMsg:(id)arg2;
- (void)didClickLeftCloseBarButton;
- (void)didOperateButton;
- (id)genHeaderView;
- (void)reloadFootView;
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

