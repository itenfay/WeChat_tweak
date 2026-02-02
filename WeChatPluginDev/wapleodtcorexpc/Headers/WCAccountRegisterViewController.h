//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CountryCodeWrap, MMUIButton, MMUILabel, NSMutableArray, NSString, TakeOrSelectHeadImageLogic, UIButton, UIImage, WCAgreementCheckBox, WCFullPhoneNumInputHelper, WCRedesignTextItem;
@protocol WCAccountRegisterViewControllerDelegate;

@interface WCAccountRegisterViewController
{
    id <WCAccountRegisterViewControllerDelegate> m_delegate;
    MMUILabel *_titleLabel;
    UIButton *_headImageButton;
    WCRedesignTextItem *_nicknameTextItem;
    WCFullPhoneNumInputHelper *_fullPhoneNumInputHelper;
    MMUIButton *_passwordVisibleButton;
    WCRedesignTextItem *_passwordTextItem;
    WCAgreementCheckBox *_agreementCheckBox;
    MMUILabel *_privacyLabel;
    UIButton *_nextButton;
    UIImage *_headImage;
    CountryCodeWrap *_countryCodeWrap;
    NSMutableArray *_availableItems;
    TakeOrSelectHeadImageLogic *_headImageLogic;
}

+ (_Bool)verifyPassword:(id)arg1 withError:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TakeOrSelectHeadImageLogic *headImageLogic; // @synthesize headImageLogic=_headImageLogic;
@property(retain, nonatomic) NSMutableArray *availableItems; // @synthesize availableItems=_availableItems;
@property(retain, nonatomic) CountryCodeWrap *countryCodeWrap; // @synthesize countryCodeWrap=_countryCodeWrap;
@property(retain, nonatomic) UIImage *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) MMUILabel *privacyLabel; // @synthesize privacyLabel=_privacyLabel;
@property(retain, nonatomic) WCAgreementCheckBox *agreementCheckBox; // @synthesize agreementCheckBox=_agreementCheckBox;
@property(retain, nonatomic) WCRedesignTextItem *passwordTextItem; // @synthesize passwordTextItem=_passwordTextItem;
@property(retain, nonatomic) MMUIButton *passwordVisibleButton; // @synthesize passwordVisibleButton=_passwordVisibleButton;
@property(retain, nonatomic) WCFullPhoneNumInputHelper *fullPhoneNumInputHelper; // @synthesize fullPhoneNumInputHelper=_fullPhoneNumInputHelper;
@property(retain, nonatomic) WCRedesignTextItem *nicknameTextItem; // @synthesize nicknameTextItem=_nicknameTextItem;
@property(retain, nonatomic) UIButton *headImageButton; // @synthesize headImageButton=_headImageButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)checkNext;
- (void)onGetHeadImage:(id)arg1;
- (void)onNext;
- (void)onTapPasswordVisibleButton;
- (void)showHeadImageOption;
- (id)phoneNumberTextItem;
- (id)regionButtonItem;
- (id)getNextButtonTitle;
- (id)getTitle;
- (_Bool)canChangeMobile;
- (void)refreshView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)fillData;
- (void)initData;
- (void)initView;
- (void)initNavigationBar;
- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (_Bool)autoHandleKeyboardEvent;
- (_Bool)shouldShowPrivacy;
- (_Bool)shouldShowAgreementView;
- (_Bool)showPhoneNum;
- (_Bool)showPwd;
- (_Bool)showNickName;
- (_Bool)showHead;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

