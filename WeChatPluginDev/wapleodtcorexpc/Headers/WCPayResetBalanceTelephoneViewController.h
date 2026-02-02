//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIButton, UILabel, WCBaseTextFieldItem, WCBizInfoGroup, WCBizTipView, WCPayCVVItem, WCPayCountryCodeAndPhoneNumberItem, WCPayCountryCodeItem, WCPayPhoneTextItem, WCPayValidDateItem;
@protocol WCPayResetBalanceTelephoneViewControllerDelegate;

@interface WCPayResetBalanceTelephoneViewController
{
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayPhoneTextItem *m_textFieldItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCPayCVVItem *m_textFieldCVVItem;
    WCBaseTextFieldItem *m_textAutoFilledCardNumberItem;
    RichTextView *richTextView;
    id <WCPayResetBalanceTelephoneViewControllerDelegate> m_delegate;
    WCBizTipView *introView;
    _Bool m_bAutoFilledCardNumber;
    _Bool m_bShowedFavorInfo;
    NSString *m_headerTitle;
    UILabel *autoFilledNumberLabel;
    NSString *m_viewTitle;
    WCPayCountryCodeItem *_countryCodeItem;
    WCPayCountryCodeAndPhoneNumberItem *_countryCodeAndPhoneItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayCountryCodeAndPhoneNumberItem *countryCodeAndPhoneItem; // @synthesize countryCodeAndPhoneItem=_countryCodeAndPhoneItem;
@property(retain, nonatomic) WCPayCountryCodeItem *countryCodeItem; // @synthesize countryCodeItem=_countryCodeItem;
@property(readonly, nonatomic) _Bool m_bAutoFilledCardNumber; // @synthesize m_bAutoFilledCardNumber;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)arg1;
- (void)countryCodeAndPhoneNumberItem:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (_Bool)isSupportForeignPhoneNum;
- (void)footerTipAction:(id)arg1;
- (void)setAutoFilledCardNumber;
- (void)OnWCBizTipViewClosed;
- (void)showDetailTip;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)stopLogicLoading;
- (void)startLogicLoading;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)OnClearAutoFilledCardNumber;
- (void)CheckData;
- (void)onNext;
- (void)scanAction:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)FillCardNumberCancel;
- (void)setShowedFavorInfo;
- (void)initFooterView;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

