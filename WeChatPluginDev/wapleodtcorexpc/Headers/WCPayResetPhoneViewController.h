//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCBaseKeyboardToolBar, WCBizInfoGroup, WCPayCountryCodeAndPhoneNumberItem, WCPayCountryCodeItem, WCPayPhoneTextItem;
@protocol WCPayResetPhoneViewViewControllerDelegate;

@interface WCPayResetPhoneViewController
{
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayPhoneTextItem *m_textFieldItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCPayResetPhoneViewViewControllerDelegate> m_delegate;
    WCPayCountryCodeItem *_countryCodeItem;
    WCPayCountryCodeAndPhoneNumberItem *_countryCodeAndPhoneItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayCountryCodeAndPhoneNumberItem *countryCodeAndPhoneItem; // @synthesize countryCodeAndPhoneItem=_countryCodeAndPhoneItem;
@property(retain, nonatomic) WCPayCountryCodeItem *countryCodeItem; // @synthesize countryCodeItem=_countryCodeItem;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)arg1;
- (void)countryCodeAndPhoneNumberItem:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (_Bool)isSupportForeignPhoneNum;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)checkData;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)showDetailTip;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)onNext;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

