//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayOrderDetailHistoryViewControllerDelegate;

@interface WCPayOrderDetailHistoryViewController
{
    id <WCPayOrderDetailHistoryViewControllerDelegate> m_delegate;
    _Bool m_bShowCompleteBtn;
    _Bool m_bShowSuccessTip;
    _Bool m_bSelectedSuscribeServiceApp;
    _Bool m_bShowAppFrom;
    _Bool m_bHandlePoped;
    NSString *m_nsCompleteBtnTitle;
    NSString *m_nsCommondTip;
    int m_enWCPayHistoryOrderDetailViewScene;
}

- (void).cxx_destruct;
- (void)OnClickedReceiverProfile:(id)arg1;
- (void)OnClickedRetrySendMessage:(id)arg1 UserName:(id)arg2;
- (void)OnClickedBrandProfile:(id)arg1 NickName:(id)arg2;
- (void)setWCPayOrderDetailHistoryViewScene:(int)arg1;
- (void)showBizSafeTitle:(_Bool)arg1;
- (void)showOrderFromApp:(_Bool)arg1;
- (void)showSuccessPayTip:(_Bool)arg1;
- (void)showCompleteBtn:(_Bool)arg1;
- (void)setCompleteBtnTitle:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)OnSubscribeApp;
- (void)selectSubscribeApp:(id)arg1;
- (void)initNavigationBar;
- (void)OnNextStepBack;
- (void)OnHistoryOrderDetailBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)BackHistoryOrderDetail;
- (void)setDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

