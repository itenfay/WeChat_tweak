//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSMutableArray, NSString, UIButton, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCPayAreaItem, WCPayCVVItem, WCPayCardBinInfo, WCPayCardTypeItem, WCPayCountryCodeAndPhoneNumberItem, WCPayCountryCodeItem, WCPayCredTypeItem, WCPayFillCardInfoSelectBankItem, WCPayFillCardInfoSelectCardTypeItem, WCPayGetProfessionItem, WCPaySelectCountItem, WCPaySelectDateItem, WCPaySelectGenderItem, WCPayTenpaySecureCtrlItem, WCPayValidDateItem;
@protocol WCPayFillCardInfoViewControllerDelegate;

@interface WCPayFillCardInfoViewController
{
    UIButton *m_footerButton;
    WCPayCardTypeItem *m_pikerCardTypeItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCPaySelectDateItem *m_pickerCredValidDateItem;
    WCPaySelectDateItem *m_pickerBirthDayItem;
    WCPaySelectCountItem *m_pickerSelectCountItem;
    WCPayCVVItem *m_textFieldCVVItem;
    WCBaseTextFieldItem *m_textFieldNameItem;
    WCPayCredTypeItem *m_pickerCredTypeItem;
    WCPayTenpaySecureCtrlItem *m_textFieldHolderIDItem;
    WCBaseTextFieldItem *m_textFieldPhoneItem;
    NSMutableArray *m_arrayInfoGroup;
    WCBaseKeyboardToolBar *m_keyboardBar;
    _Bool m_bReadAgreement;
    _Bool m_bSubscribeApp;
    _Bool m_bAutoFilledCardInfo;
    id <WCPayFillCardInfoViewControllerDelegate> m_delegate;
    NSIndexPath *m_selectItemIndex;
    WCBaseTextFieldItem *m_textFieldFirstNameItem;
    WCBaseTextFieldItem *m_textFieldLastNameItem;
    WCPayAreaItem *m_textFieldAreaItem;
    WCBaseTextFieldItem *m_textFieldAddressItem;
    WCBaseTextFieldItem *m_textFieldPhoneNumberItem;
    WCBaseTextFieldItem *m_textFieldZipItem;
    WCBaseTextFieldItem *m_textFieldEmailItem;
    WCPayFillCardInfoSelectBankItem *m_selectBankItem;
    WCPayFillCardInfoSelectCardTypeItem *m_selectCardTypeItem;
    WCPayAreaItem *_areaItem;
    WCPayGetProfessionItem *_professionItem;
    double _m_minItemLeft;
    WCPayCountryCodeItem *_countryCodeItem;
    WCPayCountryCodeAndPhoneNumberItem *_countryCodeAndPhoneItem;
    WCPayCardBinInfo *_cardBinInfo;
    WCPayCountryCodeItem *_passportCountryCodeItem;
    WCPaySelectGenderItem *_genderView;
    WCPaySelectDateItem *_effectView;
    WCBaseTextFieldItem *_addressView;
}

- (void).cxx_destruct;
@property(retain) WCBaseTextFieldItem *addressView; // @synthesize addressView=_addressView;
@property(retain) WCPaySelectDateItem *effectView; // @synthesize effectView=_effectView;
@property(retain) WCPaySelectGenderItem *genderView; // @synthesize genderView=_genderView;
@property(retain, nonatomic) WCPayCountryCodeItem *passportCountryCodeItem; // @synthesize passportCountryCodeItem=_passportCountryCodeItem;
@property(retain, nonatomic) WCPayCardBinInfo *cardBinInfo; // @synthesize cardBinInfo=_cardBinInfo;
@property(retain, nonatomic) WCPayCountryCodeAndPhoneNumberItem *countryCodeAndPhoneItem; // @synthesize countryCodeAndPhoneItem=_countryCodeAndPhoneItem;
@property(retain, nonatomic) WCPayCountryCodeItem *countryCodeItem; // @synthesize countryCodeItem=_countryCodeItem;
@property(nonatomic) double m_minItemLeft; // @synthesize m_minItemLeft=_m_minItemLeft;
@property(retain, nonatomic) WCPayGetProfessionItem *professionItem; // @synthesize professionItem=_professionItem;
@property(retain, nonatomic) WCPayAreaItem *areaItem; // @synthesize areaItem=_areaItem;
@property(readonly, nonatomic) _Bool m_bAutoFilledCardInfo; // @synthesize m_bAutoFilledCardInfo;
- (_Bool)needDetailAddress;
- (_Bool)needCNArea;
- (_Bool)needProfession;
- (id)supportCreInfo:(unsigned int)arg1;
- (unsigned int)regFlag;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)arg1;
- (void)countryCodeAndPhoneNumberItem:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setAutoFilledCardInfo;
- (void)refreshViewWithData:(id)arg1;
- (void)showDetailTip;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)checkData:(id)arg1;
- (_Bool)checkIsEmpty:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)onReadAgreement:(id)arg1;
- (void)onNext;
- (_Bool)getData:(id)arg1 showError:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)reloadTableView;
- (id)makeHeader:(id)arg1;
- (id)getSectionFromGroup:(id)arg1;
- (_Bool)needShowCreTypeOrCreidRenewalOrCreExpireDate;
- (long long)nowYear;
- (id)bannedArea;
- (void)initInfoTemplate;
- (id)getSectionHeaderView:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)init;
- (void)updateAddressView;
- (void)updateEffectView;
- (void)updateGenderView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

