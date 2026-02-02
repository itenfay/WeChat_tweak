//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CMessageWrap, MMAcceptAgreementCommonHeadView, MMLimitedModeAuthorizeRequestLogic, MMTableView, MMTableViewInfo, NSString, UIButton;
@protocol MMLimitedModeAuthorizeRequestViewControllerLogicDelegate;

@interface MMLimitedModeAuthorizeRequestViewController
{
    UIButton *m_closeButton;
    CContact *m_guardianContact;
    _Bool m_needReload;
    double m_tableCellHeight;
    MMLimitedModeAuthorizeRequestLogic *m_authorizeRequestLogic;
    _Bool _m_onlyIntercept;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    id <MMLimitedModeAuthorizeRequestViewControllerLogicDelegate> _m_delegate;
    NSString *_m_accessTitle;
    NSString *_m_accessDesc;
    CMessageWrap *_m_accessMessage;
    NSString *_m_bizKey;
    long long _m_bizType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_onlyIntercept; // @synthesize m_onlyIntercept=_m_onlyIntercept;
@property(nonatomic) long long m_bizType; // @synthesize m_bizType=_m_bizType;
@property(retain, nonatomic) NSString *m_bizKey; // @synthesize m_bizKey=_m_bizKey;
@property(retain, nonatomic) CMessageWrap *m_accessMessage; // @synthesize m_accessMessage=_m_accessMessage;
@property(retain, nonatomic) NSString *m_accessDesc; // @synthesize m_accessDesc=_m_accessDesc;
@property(retain, nonatomic) NSString *m_accessTitle; // @synthesize m_accessTitle=_m_accessTitle;
@property(nonatomic) __weak id <MMLimitedModeAuthorizeRequestViewControllerLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (id)navigationBarBackgroundColor;
- (void)OnForwardMessageSendSuccess;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)didClickLeftCloseBarButton;
- (void)doClickCloseButton;
- (void)didAskAccess;
- (void)checkVerifyPassword;
- (id)genHeaderView;
- (void)reloadFootView;
- (void)reloadTableData;
- (void)layoutCloseButton;
- (id)getAuthorizeRequestLogic;
- (void)initData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

