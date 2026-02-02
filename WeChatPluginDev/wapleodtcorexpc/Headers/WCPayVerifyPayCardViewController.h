//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIButton, UIImageView, UILabel, WCBaseKeyboardToolBar, WCPaySMSCodeItem;
@protocol WCPayVerifyPayCardViewControllerDelegate;

@interface WCPayVerifyPayCardViewController
{
    UIButton *m_footerButton;
    WCPaySMSCodeItem *m_textFieldItem;
    UIButton *m_sendVerifyCodeBtn;
    UILabel *m_sendVerifyCodeLabel;
    long long m_iCountDown;
    NSString *m_nsHeaderTip;
    NSString *m_nsHeaderTipForCustom;
    RichTextView *richTextView;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCPayVerifyPayCardViewControllerDelegate> m_delegate;
    _Bool bShowedModifyBtn;
    UIImageView *_m_iconView;
    UILabel *_m_iconDescLabel;
    UILabel *_m_contentLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *m_contentLabel; // @synthesize m_contentLabel=_m_contentLabel;
@property(retain, nonatomic) UILabel *m_iconDescLabel; // @synthesize m_iconDescLabel=_m_iconDescLabel;
@property(retain, nonatomic) UIImageView *m_iconView; // @synthesize m_iconView=_m_iconView;
- (id)phoneNumber;
- (void)onOpenQA;
- (void)onNext;
- (void)updateSendVerifyCodeButton;
- (void)onAlertModifyPhone;
- (unsigned int)alertScene;
- (void)OnModifyPhoneBtn;
- (void)OnSendButtonModify;
- (void)OnSendButtonCancel;
- (void)onConfirmSendVerifyCodeAgain;
- (void)onSendVerifyCodeClicked:(id)arg1;
- (void)showNotAnyOneSMSTipBtn;
- (void)setHeaderTipForCustom:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterBtnTitle:(id)arg1;
- (void)showModifyPhoneBtn;
- (void)autoInputVerifyCode:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showNotSMSTipBtn;
- (void)initNavigationBar;
- (void)initSendVerifyCodeButton;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)initFooterView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableWithVerifyLayout;
- (void)reloadTableWithDigitalLayout;
- (void)updateIconDescLabelWithSuperView:(id)arg1;
- (void)updateIconViewWithSuperView:(id)arg1;
- (void)reloadTableView;
- (void)setHeaderTip:(id)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)needShowDigitalVersionView;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willDisappear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

