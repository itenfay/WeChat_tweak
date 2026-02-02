//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, UIButton, UILabel, UIView, WCMallCandidateTelephoneView, WCMallOldTelephoneView, WCUITextField;
@protocol WCMallChargeMobileViewControllerDelegate;

@interface WCMallChargeMobileViewController
{
    id <WCMallChargeMobileViewControllerDelegate> m_delegate;
    WCUITextField *m_textInputTextField;
    UIView *oHeaderView;
    UIView *oTipsBannerView;
    UIView *oInputView;
    UIView *oDescTipsView;
    UILabel *oUserNameLabel;
    UILabel *oOperatorsTipsLabel;
    UILabel *oErrorMsgTipsLabel;
    UILabel *oPlaceHolderTipsLabel;
    UIButton *oSelectMaskAddressButton;
    UIButton *oSelectAddressButton;
    UIView *oBottomContainerView;
    UIView *oFunctionListView;
    _Bool bDidPoped;
    _Bool bInited;
    int m_eTelephoneNumberInputStatus;
    WCMallOldTelephoneView *m_oWCMallOldTelephoneView;
    WCMallCandidateTelephoneView *m_oWCMallCandidateTelephoneView;
    NSDictionary *dicSelectedProductInfo;
    _Bool _doNotUpdateAfterKeyboardDismiss;
    _Bool _bHasRefreshTextFieldDefaultNumber;
    NSDictionary *_specialItem;
    unsigned long long _currentAlertType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentAlertType; // @synthesize currentAlertType=_currentAlertType;
@property(nonatomic) _Bool bHasRefreshTextFieldDefaultNumber; // @synthesize bHasRefreshTextFieldDefaultNumber=_bHasRefreshTextFieldDefaultNumber;
@property(retain, nonatomic) NSDictionary *specialItem; // @synthesize specialItem=_specialItem;
@property(nonatomic) _Bool doNotUpdateAfterKeyboardDismiss; // @synthesize doNotUpdateAfterKeyboardDismiss=_doNotUpdateAfterKeyboardDismiss;
- (void)reportVCClickAlertWithAlertType:(unsigned long long)arg1 alertAction:(unsigned long long)arg2;
- (void)reportVCClickWithTitle:(id)arg1 subTitle:(id)arg2 jumpType:(unsigned long long)arg3 jumpData:(id)arg4;
- (_Bool)isUrlNeedDecode:(id)arg1;
- (void)openTinyAppWithUserName:(id)arg1 path:(id)arg2;
- (id)getTextColorWithFunctionIndex:(unsigned long long)arg1;
- (_Bool)isNumberMayInvalidTips:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)onSelectContact;
- (void)onSelectEditInputTextField;
- (id)GetCandidateTelephoneEnsureTip;
- (id)GetCandidateTelephoneDescription:(unsigned int)arg1 DifferentIndex:(id)arg2;
- (unsigned int)GetNumberOfCandidateTelephoneListCount;
- (void)OnClickWCMallCandidateTelephoneEnsureCellClicked;
- (void)OnClickWCMallCandidateTelephoneCell:(unsigned int)arg1;
- (void)onTapBackgrounView;
- (id)GetOldTelephoneOperatorName:(unsigned int)arg1;
- (id)GetOldTelephoneOwnerName:(unsigned int)arg1;
- (id)GetOldTelephoneNumber:(unsigned int)arg1;
- (unsigned int)GetNumberOfOldTelephoneListCount;
- (void)OnClickWCMallOldTelephoneClearButton;
- (void)OnClearTelphone;
- (void)OnClickWCMallOldTelephoneCell:(unsigned int)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)genTargetUrlWithClientParamFromOriginUrl:(id)arg1;
- (id)getCurrentRemark;
- (void)onKeyboardHide:(id)arg1;
- (void)rightBarButtonPress:(id)arg1;
- (void)refreshUsernameLabelColorWithName:(id)arg1;
- (void)setTelephoneNumberOwnerName:(id)arg1 Number:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)onCancelCharge;
- (void)OnEnsureCharge;
- (void)OnFounctionUp:(id)arg1;
- (void)OnFounctionDown:(id)arg1;
- (void)OnFounctionClicked:(id)arg1;
- (void)onClickWeSim;
- (void)OnClickedWt;
- (void)onClickRemind;
- (void)OnClickedPayCard;
- (void)OnActivityIconClick:(id)arg1;
- (void)relayoutContentViewAfterBannerDismiss;
- (void)OnActivityIconCancel:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadBannerView;
- (_Bool)checkTips;
- (void)reloadAllContents;
- (void)reloadTableView;
- (void)reloadDescTipsView;
- (void)OnLeftBarButtonDone;
- (void)refreshTelphoneTextFieldAfterHandleSvrNumberList;
- (id)getCurrentFunctionDictionary;
- (id)getCurrentOperatorName;
- (id)getCurrentUserName;
- (void)reloadCandidateTelephoneView;
- (void)reloadOldTelephoneListView;
- (void)initCurrentView;
- (void)initJumpedH5FunctionView;
- (void)reloadFunctionListView;
- (id)getDescTipsView;
- (id)getInputMobileNumberView;
- (id)getBannerView;
- (void)initCandidateTelphoneTableView:(struct CGRect)arg1;
- (void)initOldTelphoneTableView:(struct CGRect)arg1;
- (_Bool)initFilledDefaultData;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

