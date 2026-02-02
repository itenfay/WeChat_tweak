//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUICellSwitch, NSArray, NSString, PhoneAuthManagePhoneLogic, UIButton, UILabel, UIView, WAReportPhoneAuthActionItem, WCAccountTextFieldItem;

@interface PhoneAuthAddNewPhoneViewController
{
    _Bool _phoneNumberEntered;
    _Bool _confirmCodeRequested;
    _Bool _confirmCodeEntered;
    NSArray *_phoneNumberList;
    WAReportPhoneAuthActionItem *_actionItem;
    UIView *_phoneNumberArea;
    UIView *_phoneNumberAreaTopLine;
    UILabel *_phoneTitleLabel;
    WCAccountTextFieldItem *_phoneNumberTF;
    UIButton *_resendButton;
    UIView *_phoneNumberAreaBottomLine;
    UIView *_confirmCodeArea;
    UILabel *_confirmCodeTitleLabel;
    WCAccountTextFieldItem *_confirmCodeTF;
    UIView *_confirmCodeAreaBottomLine;
    UIView *_savePhoneArea;
    UILabel *_savePhoneTitleLabel;
    MMUICellSwitch *_savePhoneSwitch;
    UIView *_savePhoneAreaBottomLine;
    UIButton *_confirmButton;
    PhoneAuthManagePhoneLogic *_logic;
    unsigned long long _countDown;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) PhoneAuthManagePhoneLogic *logic; // @synthesize logic=_logic;
@property(nonatomic) _Bool confirmCodeEntered; // @synthesize confirmCodeEntered=_confirmCodeEntered;
@property(nonatomic) _Bool confirmCodeRequested; // @synthesize confirmCodeRequested=_confirmCodeRequested;
@property(nonatomic) _Bool phoneNumberEntered; // @synthesize phoneNumberEntered=_phoneNumberEntered;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *savePhoneAreaBottomLine; // @synthesize savePhoneAreaBottomLine=_savePhoneAreaBottomLine;
@property(retain, nonatomic) MMUICellSwitch *savePhoneSwitch; // @synthesize savePhoneSwitch=_savePhoneSwitch;
@property(retain, nonatomic) UILabel *savePhoneTitleLabel; // @synthesize savePhoneTitleLabel=_savePhoneTitleLabel;
@property(retain, nonatomic) UIView *savePhoneArea; // @synthesize savePhoneArea=_savePhoneArea;
@property(retain, nonatomic) UIView *confirmCodeAreaBottomLine; // @synthesize confirmCodeAreaBottomLine=_confirmCodeAreaBottomLine;
@property(retain, nonatomic) WCAccountTextFieldItem *confirmCodeTF; // @synthesize confirmCodeTF=_confirmCodeTF;
@property(retain, nonatomic) UILabel *confirmCodeTitleLabel; // @synthesize confirmCodeTitleLabel=_confirmCodeTitleLabel;
@property(retain, nonatomic) UIView *confirmCodeArea; // @synthesize confirmCodeArea=_confirmCodeArea;
@property(retain, nonatomic) UIView *phoneNumberAreaBottomLine; // @synthesize phoneNumberAreaBottomLine=_phoneNumberAreaBottomLine;
@property(retain, nonatomic) UIButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) WCAccountTextFieldItem *phoneNumberTF; // @synthesize phoneNumberTF=_phoneNumberTF;
@property(retain, nonatomic) UILabel *phoneTitleLabel; // @synthesize phoneTitleLabel=_phoneTitleLabel;
@property(retain, nonatomic) UIView *phoneNumberAreaTopLine; // @synthesize phoneNumberAreaTopLine=_phoneNumberAreaTopLine;
@property(retain, nonatomic) UIView *phoneNumberArea; // @synthesize phoneNumberArea=_phoneNumberArea;
@property(retain, nonatomic) WAReportPhoneAuthActionItem *actionItem; // @synthesize actionItem=_actionItem;
@property(retain, nonatomic) NSArray *phoneNumberList; // @synthesize phoneNumberList=_phoneNumberList;
- (void)confirmCodeVerifyFailedWithErrorMsg:(id)arg1;
- (void)confirmCodeVerifySuccess;
- (void)savePhoneSuccess:(id)arg1 saveFlag:(_Bool)arg2;
- (void)confirmCodeRequestedFailedWithErrorMsg:(id)arg1;
- (void)confirmCodeRequestedSuccess;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)onTapBGView;
- (void)handleOnConfirmButtonEvent:(id)arg1;
- (void)handleOnReSendButtonEvent:(id)arg1;
- (void)onReturn;
- (void)updateSendVerifyCodeButton;
- (void)startTimer;
- (void)refreshConfirmButtonState;
- (void)refreshResendButtonState;
- (void)updateNavigationItems;
- (void)initCustomNavigationBar;
- (void)initSubViews;
- (void)viewDidLoad;
- (id)initWithLogic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

