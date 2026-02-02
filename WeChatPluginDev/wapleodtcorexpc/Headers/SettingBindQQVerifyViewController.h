//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, NSData, NSString, UIButton, UITextField, UIViewController;
@protocol ReturnToSettingAccoutDelegate;

@interface SettingBindQQVerifyViewController
{
    MMLoadingView *m_loadingView;
    NSString *m_nsUsrName;
    NSString *m_nsPwd;
    UITextField *m_tfVerifyCode;
    unsigned int m_uiEventID;
    NSData *m_dtImg;
    UIViewController *m_vcAccount;
    id <ReturnToSettingAccoutDelegate> m_delReturn;
    unsigned int m_uiOpCode;
    UIButton *m_btVerify;
    NSString *m_nsImgEncryptKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsImgEncryptKey; // @synthesize m_nsImgEncryptKey;
@property(retain, nonatomic) UIButton *m_btVerify; // @synthesize m_btVerify;
@property(nonatomic) __weak id <ReturnToSettingAccoutDelegate> m_delReturn; // @synthesize m_delReturn;
@property(retain, nonatomic) NSData *m_dtImg; // @synthesize m_dtImg;
@property(retain, nonatomic) UIViewController *m_vcAccount; // @synthesize m_vcAccount;
@property(retain, nonatomic) UITextField *m_tfVerifyCode; // @synthesize m_tfVerifyCode;
@property(retain, nonatomic) NSString *m_nsPwd; // @synthesize m_nsPwd;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void)OnBindQQErrorReturn:(id)arg1;
- (void)OnBindQQOK;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void)ReturnToBindView:(id)arg1;
- (void)GetVerifyImg:(id)arg1;
- (void)LogIn:(id)arg1;
- (unsigned int)CreateBindQQEvent:(unsigned int)arg1;
- (void)UpdateVerifyImg:(id)arg1;
- (_Bool)CheckInputValid;
- (void)StopLoading;
- (void)StartLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

