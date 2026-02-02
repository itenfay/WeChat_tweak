//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPaySelectVerifyTypeLogic, WCPayTransferMoneyPaidSuccessViewV2;
@protocol WCPayTranferMoneyPaidSuccessViewControllerDelegate;

@interface WCPayTranferMoneyPaidSuccessViewController
{
    _Bool m_bNeedBindCard;
    id <WCPayTranferMoneyPaidSuccessViewControllerDelegate> m_delegate;
    WCPayTransferMoneyPaidSuccessViewV2 *_m_layoutV2;
    WCPaySelectVerifyTypeLogic *_m_realNameLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPaySelectVerifyTypeLogic *m_realNameLogic; // @synthesize m_realNameLogic=_m_realNameLogic;
@property(retain, nonatomic) WCPayTransferMoneyPaidSuccessViewV2 *m_layoutV2; // @synthesize m_layoutV2=_m_layoutV2;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ReturnWithoutDrawLottery;
- (void)onWCPayTransferMoneyPaidSuccessViewV2StartDrawLottery:(unsigned int)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickLotteryBtn:(id)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickDone;
- (void)didReceiveMemoryWarning;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)reloadTableView;
- (void)layoutV2;
- (void)selectNeedBindCard:(id)arg1;
- (void)initNavigationBar;
- (void)ContinueOnHistoryOrderDetailBack;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showSetPwdTipsView;
- (void)OnHistoryOrderDetailBack;
- (void)setDelegate:(id)arg1;
- (id)init;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

