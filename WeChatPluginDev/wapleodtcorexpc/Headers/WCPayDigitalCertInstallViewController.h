//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCBizLoadingView, WCPayGenDigitalCertCgi, WCPayTenpaySecureCtrlItem, WCPayUserInfo;
@protocol WCPayDigitalCertInstallViewControllerDelegate;

@interface WCPayDigitalCertInstallViewController
{
    unsigned int _entryScene;
    int _cert_encrypt_type;
    UIButton *_m_verifyButton;
    double _verifyBtnY;
    WCPayTenpaySecureCtrlItem *_m_idNoTextFieldItem;
    WCBizLoadingView *_m_bizLoadingView;
    WCPayGenDigitalCertCgi *_m_genDigitalCgi;
    WCPayUserInfo *_m_userInfo;
    id <WCPayDigitalCertInstallViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) int cert_encrypt_type; // @synthesize cert_encrypt_type=_cert_encrypt_type;
@property(nonatomic) __weak id <WCPayDigitalCertInstallViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) WCPayUserInfo *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(retain, nonatomic) WCPayGenDigitalCertCgi *m_genDigitalCgi; // @synthesize m_genDigitalCgi=_m_genDigitalCgi;
@property(retain, nonatomic) WCBizLoadingView *m_bizLoadingView; // @synthesize m_bizLoadingView=_m_bizLoadingView;
@property(retain, nonatomic) WCPayTenpaySecureCtrlItem *m_idNoTextFieldItem; // @synthesize m_idNoTextFieldItem=_m_idNoTextFieldItem;
@property(nonatomic) double verifyBtnY; // @synthesize verifyBtnY=_verifyBtnY;
@property(retain, nonatomic) UIButton *m_verifyButton; // @synthesize m_verifyButton=_m_verifyButton;
@property(nonatomic) unsigned int entryScene; // @synthesize entryScene=_entryScene;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)tapFooterView;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)arg1;
- (void)updateVerifyButtonStatus;
- (void)onClickVerifyButton;
- (void)updateTextFieldItem;
- (void)updateVerifyButton;
- (void)updateHeaderView;
- (void)reloadTableView;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)showKeyboard;
- (void)stopBizLoading;
- (void)startBizLoadingBlocked;
- (void)updateBizLoadingView;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)initWithDelegate:(id)arg1 userInfo:(id)arg2 certEncryptType:(int)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

