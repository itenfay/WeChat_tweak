//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UIView, WCPayTenpayPasswordCtrlItem;
@protocol WCPayBizF2FZeroPayConfirmViewDelegate;

@interface WCPayBizF2FZeroPayConfirmView
{
    _Bool _m_usingBiotric;
    id <WCPayBizF2FZeroPayConfirmViewDelegate> _m_delegate;
    UIView *_m_panelView;
    UIButton *_m_cancelButton;
    UILabel *_m_navigationTitleLabel;
    UIView *_m_lineView;
    UILabel *_m_payTitleLabel;
    UILabel *_m_moneyLabel;
    UIButton *_m_payButton;
    WCPayTenpayPasswordCtrlItem *_m_passwordItem;
    double _m_panelViewMarginUp;
    NSString *_m_payTitle;
    NSString *_m_moneyString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_moneyString; // @synthesize m_moneyString=_m_moneyString;
@property(retain, nonatomic) NSString *m_payTitle; // @synthesize m_payTitle=_m_payTitle;
@property(nonatomic) _Bool m_usingBiotric; // @synthesize m_usingBiotric=_m_usingBiotric;
@property(nonatomic) double m_panelViewMarginUp; // @synthesize m_panelViewMarginUp=_m_panelViewMarginUp;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *m_passwordItem; // @synthesize m_passwordItem=_m_passwordItem;
@property(retain, nonatomic) UIButton *m_payButton; // @synthesize m_payButton=_m_payButton;
@property(retain, nonatomic) UILabel *m_moneyLabel; // @synthesize m_moneyLabel=_m_moneyLabel;
@property(retain, nonatomic) UILabel *m_payTitleLabel; // @synthesize m_payTitleLabel=_m_payTitleLabel;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) UILabel *m_navigationTitleLabel; // @synthesize m_navigationTitleLabel=_m_navigationTitleLabel;
@property(retain, nonatomic) UIButton *m_cancelButton; // @synthesize m_cancelButton=_m_cancelButton;
@property(retain, nonatomic) UIView *m_panelView; // @synthesize m_panelView=_m_panelView;
@property(nonatomic) __weak id <WCPayBizF2FZeroPayConfirmViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onPayButtonClick;
- (void)closeView;
- (void)onCancelButtonClick;
- (void)updatePasswordItem;
- (void)updatePayButton;
- (void)updateMoneyLabel;
- (void)updatePayTitleLabel;
- (void)updateLineView;
- (void)updateNavigationTitleLabel;
- (void)updateCancelButton;
- (void)adjustPanelView;
- (void)updatePanelView;
- (void)updateView;
- (void)layoutSubviews;
- (void)showWithBiotricAuth:(_Bool)arg1 payTitle:(id)arg2 moneyString:(id)arg3 baseView:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

