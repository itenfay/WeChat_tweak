//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, UILabel;
@protocol WCBizBaseViewControllerDelegate;

@interface WCBizBaseViewController
{
    MMTableViewInfo *m_tableViewInfo;
    UILabel *m_powerByTenpay;
    id <WCBizBaseViewControllerDelegate> m_oBizBaseViewControllerDelegate;
    _Bool _hasReportedShown;
    _Bool _hasReportedDismiss;
    long long _tableViewStyle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasReportedDismiss; // @synthesize hasReportedDismiss=_hasReportedDismiss;
@property(nonatomic) _Bool hasReportedShown; // @synthesize hasReportedShown=_hasReportedShown;
@property(nonatomic) long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
- (void)setBizBaseViewControllerDelegate:(id)arg1;
- (void)footerTipAction:(id)arg1;
- (void)onEnsureAlertConfirm;
- (void)showEnsureAlert:(id)arg1 Title:(id)arg2;
- (void)OnComfireEnsureAlert;
- (id)getSectionFromGroup:(id)arg1;
- (id)makeFooter:(id)arg1;
- (void)clickInfoCell:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)OnDataChange;
- (void)suppressInherentTableView;
- (void)dealloc;
- (void)setNormalTitle:(id)arg1;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (void)setWCBizAuthTitle:(id)arg1;
- (void)setWCBizAuthTitle:(id)arg1 TextColor:(id)arg2;
- (void)viewDidLoad;
- (void)addPowerByTenpayTip;
- (void)stopLoading;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)callViewDidLoad;
- (void)initNavigationBar;
- (void)OnBack;
- (void)initData;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

