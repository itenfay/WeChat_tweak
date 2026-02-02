//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayTransferMoneyPaidSuccessViewV2;
@protocol WCPayBizF2FPaidSuccViewControllerDelegate;

@interface WCPayBizF2FPaidSuccViewController
{
    id <WCPayBizF2FPaidSuccViewControllerDelegate> _delegate;
    WCPayTransferMoneyPaidSuccessViewV2 *_m_layoutV2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTransferMoneyPaidSuccessViewV2 *m_layoutV2; // @synthesize m_layoutV2=_m_layoutV2;
@property(nonatomic) __weak id <WCPayBizF2FPaidSuccViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ReturnWithoutDrawLottery;
- (void)onWCPayTransferMoneyPaidSuccessViewV2StartDrawLottery:(unsigned int)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickLotteryBtn:(id)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickDone;
- (void)refreshViewWithData:(id)arg1;
- (void)refreshActivityContent;
- (void)updateView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

