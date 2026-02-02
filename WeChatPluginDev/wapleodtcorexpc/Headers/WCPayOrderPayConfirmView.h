//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ABTestItem, NSString, UIButton, UIView, WCPayControlData, WCPayTenpayPasswordCtrlItem;
@protocol WCPayOrderPayConfirmViewDelegate;

@interface WCPayOrderPayConfirmView
{
    UIView *m_backgroundView;
    UIView *m_titleView;
    UIButton *m_payButton;
    NSString *m_nsContent;
    NSString *m_nsConfirmButtonName;
    WCPayTenpayPasswordCtrlItem *m_textFieldItemPwd;
    id <WCPayOrderPayConfirmViewDelegate> m_delegate;
    WCPayControlData *_data;
    _Bool _isTouchID;
    ABTestItem *_payABTestItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABTestItem *payABTestItem; // @synthesize payABTestItem=_payABTestItem;
- (id)settlement_symbol;
- (id)settlement_type;
- (id)settlement_fee;
- (id)price_fee_symbol;
- (id)price_fee_type;
- (id)price_total_fee;
- (id)fetchMoney;
- (_Bool)useFetchData;
- (id)field_area_info;
- (_Bool)is_open_field_area;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)onCellClick:(id)arg1;
- (float)passwordMarginBottom;
- (float)getBottomMarginBtn;
- (float)getBottomMarginCardInfo;
- (float)getBottomMarginFav;
- (float)getBottomMarginMoney;
- (float)getBottomMarginDesc;
- (float)getBottomMarginLine;
- (float)getBottomMarginContent;
- (id)getTransactionId;
- (id)getHighlightImg:(struct CGRect)arg1;
- (_Bool)isThouchIDAuthEnabelForCurrentOrder:(id)arg1;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onJumpToModal:(id)arg1;
- (void)OnSelectTradeFavInfo;
- (void)OnSelectOtherCard;
- (_Bool)accessibilityPerformEscape;
- (void)onCancelBtnClick;
- (void)onPayBtnClick;
- (void)closeView;
- (void)setConfirmButtonName:(id)arg1;
- (void)setContent:(id)arg1;
- (void)endAnimation;
- (void)showAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3 scene:(int)arg4;
- (void)layoutSubviews;
- (id)changeCardViewWithWidth:(double)arg1 height:(double)arg2;
- (void)onBankFaveGuideButtonClick;
- (id)bankFavGuideDataView:(double)arg1;
- (_Bool)showNoBankFav;
- (_Bool)useChangeCardViewV2;
- (id)changeCardViewData;
- (id)changeCardRedDot;
- (id)selectedCardIcon;
- (id)selectedCardName;
- (id)serverViewData;
- (id)markFeeViewData;
- (id)favViewData;
- (id)favTitle;
- (_Bool)shouldShowMoreFav;
- (_Bool)shouldShowFav;
- (unsigned long long)colorFromString:(id)arg1;
- (id)originFeeViewData;
- (id)originFeeString;
- (id)changeCardViewV2WithWidth:(double)arg1;
- (void)onDoTouchIDAuth;
- (void)onSwitchToPwdAuth;
- (id)getFavViewWithFeeType:(id)arg1;
- (_Bool)simpleCashierForBiz;
- (double)backgroundViewY;
- (id)updateDescFromUpperLogic;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3 scene:(int)arg4 touchID:(_Bool)arg5;
- (void)dealloc;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

