//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UIView, UserIdAuthorizeSmsPageInfo, UserIdAuthorizeSmsPhoneItem, WCAccountTextFieldItem, WCActionSheet;
@protocol AuthorizeUserIdSMSConfirmDelegate;

@interface AuthorizeUserIdSMSConfirmViewController
{
    NSString *_verifyToken;
    WCActionSheet *_actionSheet;
    id <AuthorizeUserIdSMSConfirmDelegate> _delegate;
    UserIdAuthorizeSmsPageInfo *_pageInfo;
    UILabel *_titleLabel;
    UILabel *_selectedPhoneLabel;
    UIButton *_changePhoneButton;
    WCAccountTextFieldItem *_confirmCodeTF;
    UIButton *_resendButton;
    UIView *_separateLine;
    UIButton *_confirmButton;
    UserIdAuthorizeSmsPhoneItem *_selectedPhoneItem;
    unsigned long long _countDown;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) UserIdAuthorizeSmsPhoneItem *selectedPhoneItem; // @synthesize selectedPhoneItem=_selectedPhoneItem;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) WCAccountTextFieldItem *confirmCodeTF; // @synthesize confirmCodeTF=_confirmCodeTF;
@property(retain, nonatomic) UIButton *changePhoneButton; // @synthesize changePhoneButton=_changePhoneButton;
@property(retain, nonatomic) UILabel *selectedPhoneLabel; // @synthesize selectedPhoneLabel=_selectedPhoneLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UserIdAuthorizeSmsPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) __weak id <AuthorizeUserIdSMSConfirmDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSendVerifyCodeButton;
- (void)startTimer;
- (void)selectPhone:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlarmBoxWithTitle:(id)arg1 desc:(id)arg2;
- (void)showToast:(id)arg1 isSuccess:(_Bool)arg2;
- (void)processErrCode:(unsigned int)arg1 errMsg:(id)arg2;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onChangePhoneButton:(id)arg1;
- (void)onConfirmButton:(id)arg1;
- (void)onResendButton:(id)arg1;
- (void)fillPageInfo;
- (void)viewDidLayoutSubviews;
- (void)onTap:(id)arg1;
- (void)initSubviews;
- (void)onReturn;
- (void)viewDidLoad;
- (id)initWithSMSPageInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

