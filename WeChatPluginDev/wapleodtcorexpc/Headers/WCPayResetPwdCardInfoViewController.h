//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIButton, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCPayAreaItem, WCPayCVVItem, WCPayCardTypeItem, WCPayCountryCodeAndPhoneNumberItem, WCPayCountryCodeItem, WCPayCredTypeItem, WCPaySelectCountItem, WCPaySelectDateItem, WCPayTenpaySecureCtrlItem, WCPayValidDateItem;
@protocol WCPayResetPwdCardInfoViewControllerDelegate;

@interface WCPayResetPwdCardInfoViewController
{
    UIButton *m_footerButton;
    NSMutableArray *m_arrayInfoGroup;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCPayTenpaySecureCtrlItem *m_textFieldCardNumItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCPayCVVItem *m_textFieldCVVItem;
    WCPayCardTypeItem *m_pikerCardTypeItem;
    WCBaseTextFieldItem *m_textFieldNameItem;
    WCPayCredTypeItem *m_pickerCredTypeItem;
    WCPayTenpaySecureCtrlItem *m_textFieldHolderIDItem;
    WCBaseTextFieldItem *m_textFieldPhoneItem;
    id <WCPayResetPwdCardInfoViewControllerDelegate> m_delegate;
    _Bool m_bReadAgreement;
    WCBaseTextFieldItem *m_textFieldFirstNameItem;
    WCBaseTextFieldItem *m_textFieldLastNameItem;
    WCPayAreaItem *m_textFieldAreaItem;
    WCBaseTextFieldItem *m_textFieldAddressItem;
    WCBaseTextFieldItem *m_textFieldPhoneNumberItem;
    WCBaseTextFieldItem *m_textFieldZipItem;
    WCBaseTextFieldItem *m_textFieldEmailItem;
    WCPaySelectDateItem *m_pickerCredValidDateItem;
    WCPaySelectCountItem *m_pickerSelectCountItem;
    WCPaySelectDateItem *m_pickerBirthDayItem;
    double _m_minItemLeft;
    WCPayCountryCodeItem *_countryCodeItem;
    WCPayCountryCodeAndPhoneNumberItem *_countryCodeAndPhoneItem;
    WCBaseTextFieldItem *_realNameTextItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCBaseTextFieldItem *realNameTextItem; // @synthesize realNameTextItem=_realNameTextItem;
@property(retain, nonatomic) WCPayCountryCodeAndPhoneNumberItem *countryCodeAndPhoneItem; // @synthesize countryCodeAndPhoneItem=_countryCodeAndPhoneItem;
@property(retain, nonatomic) WCPayCountryCodeItem *countryCodeItem; // @synthesize countryCodeItem=_countryCodeItem;
@property(nonatomic) double m_minItemLeft; // @synthesize m_minItemLeft=_m_minItemLeft;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)arg1;
- (void)countryCodeAndPhoneNumberItem:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (_Bool)isSupportForeignPhoneNum;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showDetailTip;
- (void)clickInfoCell:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)checkData:(id)arg1;
- (_Bool)checkIsEmpty:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onReadAgreement:(id)arg1;
- (void)onNext;
- (_Bool)getData:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)reloadTableView;
- (long long)nowYear;
- (void)initInfoTemplate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

