//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CountryCodeWrap, MMTimer, MMUIButton, NSString, TenpaySecureCtrl, UIButton, UIImageView, UILabel, UIView, WCPayCss, WCUITextField;
@protocol WCPayVerifyPhoneViewControllerDelegate;

@interface WCPayVerifyPhoneViewController
{
    _Bool _hasSendCode;
    unsigned int _lastSendTime;
    id <WCPayVerifyPhoneViewControllerDelegate> _m_delegate;
    WCPayCss *_css;
    UIView *_containerView;
    UIView *_headerView;
    UIView *_footerView;
    UILabel *_headerTitle;
    UIView *_firstLineView;
    UIView *_phoneSection;
    UIButton *_areaCodeCoverBtn;
    UILabel *_areaCodeTitle;
    UIImageView *_areaCodeIcon;
    TenpaySecureCtrl *_phoneInput;
    UIView *_phoneLineView;
    UIView *_verifyCodeSection;
    UIView *_verifyCodeRightContent;
    UILabel *_verifyCodeTitle;
    WCUITextField *_verifyCodeInput;
    UIButton *_verifyCodeButton;
    UIView *_verifyCodeLineView;
    MMUIButton *_infoButton;
    UIButton *_nextButton;
    double _keyboardHeight;
    CountryCodeWrap *_currentCountry;
    MMTimer *_verifyCodeTimer;
}

- (void).cxx_destruct;
@property(retain) MMTimer *verifyCodeTimer; // @synthesize verifyCodeTimer=_verifyCodeTimer;
@property(retain) CountryCodeWrap *currentCountry; // @synthesize currentCountry=_currentCountry;
@property unsigned int lastSendTime; // @synthesize lastSendTime=_lastSendTime;
@property _Bool hasSendCode; // @synthesize hasSendCode=_hasSendCode;
@property double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain) MMUIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain) UIView *verifyCodeLineView; // @synthesize verifyCodeLineView=_verifyCodeLineView;
@property(retain) UIButton *verifyCodeButton; // @synthesize verifyCodeButton=_verifyCodeButton;
@property(retain) WCUITextField *verifyCodeInput; // @synthesize verifyCodeInput=_verifyCodeInput;
@property(retain) UILabel *verifyCodeTitle; // @synthesize verifyCodeTitle=_verifyCodeTitle;
@property(retain) UIView *verifyCodeRightContent; // @synthesize verifyCodeRightContent=_verifyCodeRightContent;
@property(retain) UIView *verifyCodeSection; // @synthesize verifyCodeSection=_verifyCodeSection;
@property(retain) UIView *phoneLineView; // @synthesize phoneLineView=_phoneLineView;
@property(retain) TenpaySecureCtrl *phoneInput; // @synthesize phoneInput=_phoneInput;
@property(retain) UIImageView *areaCodeIcon; // @synthesize areaCodeIcon=_areaCodeIcon;
@property(retain) UILabel *areaCodeTitle; // @synthesize areaCodeTitle=_areaCodeTitle;
@property(retain) UIButton *areaCodeCoverBtn; // @synthesize areaCodeCoverBtn=_areaCodeCoverBtn;
@property(retain) UIView *phoneSection; // @synthesize phoneSection=_phoneSection;
@property(retain) UIView *firstLineView; // @synthesize firstLineView=_firstLineView;
@property(retain) UILabel *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property __weak id <WCPayVerifyPhoneViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)encryptVerifyCode;
- (id)encryptPhoneNo;
- (id)currentCountryCode;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)verifyCodeInputDidChanged:(id)arg1;
- (void)verifyCodeInputDidEndOnExit:(id)arg1;
- (void)phoneInputDidChanged:(id)arg1;
- (void)phoneInputDidEndOnExit:(id)arg1;
- (void)onTapNext;
- (void)onTapAreaCode;
- (void)verifyCodeTimeOut;
- (void)onTapVerifyCodeButton;
- (void)onClickInfoButton;
- (void)updateNextButton;
- (void)updateFooterView;
- (void)updateInfoButton;
- (void)updateVerifyCodeLineView;
- (void)updateVerifyCodeButton;
- (void)updateVerifyCodeInput;
- (void)updateVerifyCodeTitle;
- (void)updateVerifyCodeRightContent;
- (void)updateVerifyCodeSection;
- (void)updatePhoneLineView;
- (void)updatePhoneInput;
- (void)updateAreaCodeIcon;
- (void)updateAreaCodeTitle;
- (void)updateAreaCodeCoverBtn;
- (void)updatePhoneSection;
- (void)updateFirstLineView;
- (void)updateHeaderTitle;
- (void)updateHeaderView;
- (void)updateView;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidBeDismissed:(_Bool)arg1;
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

