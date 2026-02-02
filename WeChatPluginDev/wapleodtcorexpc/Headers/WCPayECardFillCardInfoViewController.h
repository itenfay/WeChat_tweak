//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCPayPhoneTextItem, WCPayTenpaySecureCtrlItem;
@protocol WCPayECardFillCardInfoViewControllerDelegate;

@interface WCPayECardFillCardInfoViewController
{
    id <WCPayECardFillCardInfoViewControllerDelegate> _delegate;
    WCPayTenpaySecureCtrlItem *_bankCardNumberTextFieldItem;
    WCPayPhoneTextItem *_phoneNumberTextFieldItem;
    UIButton *_footerButton;
    double _cellItemLeft;
}

- (void).cxx_destruct;
@property(nonatomic) double cellItemLeft; // @synthesize cellItemLeft=_cellItemLeft;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) WCPayPhoneTextItem *phoneNumberTextFieldItem; // @synthesize phoneNumberTextFieldItem=_phoneNumberTextFieldItem;
@property(retain, nonatomic) WCPayTenpaySecureCtrlItem *bankCardNumberTextFieldItem; // @synthesize bankCardNumberTextFieldItem=_bankCardNumberTextFieldItem;
@property(nonatomic) __weak id <WCPayECardFillCardInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)showDetailTip;
- (id)tableFooterView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (id)makeCellTitleLabel;
- (void)calculateCellItemLeft;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

