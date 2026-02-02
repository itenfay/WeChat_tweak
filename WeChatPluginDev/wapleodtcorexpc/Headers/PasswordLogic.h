//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BaseResponseErrMsg, GraphicVerifyWindow, NSData, NSString;
@protocol PasswordLogicDelegate;

@interface PasswordLogic
{
    id <PasswordLogicDelegate> m_delegate;
    unsigned int m_opCode;
    unsigned int m_uiScene;
    NSString *m_nsPwd;
    NSString *m_nsPwdMd5;
    NSString *m_nsPwd2;
    NSData *m_dtVerifyImg;
    GraphicVerifyWindow *m_winVerifyImg;
    NSString *m_nsImgEncryptKey;
    NSData *m_dtKSid;
    unsigned int m_uiVerfyPwdScene;
    _Bool m_bVerify_Pwd_Use_Old_WTBuf;
    id m_oUserData;
    _Bool m_bCan_Verify_Pwd_Use_Old_WTBuf;
    NSString *m_nsTitle;
    NSString *m_nsMessage;
    BaseResponseErrMsg *_m_errInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseResponseErrMsg *m_errInfo; // @synthesize m_errInfo=_m_errInfo;
@property(retain, nonatomic) id m_oUserData; // @synthesize m_oUserData;
@property(nonatomic) _Bool m_bCan_Verify_Pwd_Use_Old_WTBuf; // @synthesize m_bCan_Verify_Pwd_Use_Old_WTBuf;
@property(nonatomic) unsigned int m_uiVerfyPwdScene; // @synthesize m_uiVerfyPwdScene;
@property(retain, nonatomic) NSData *m_dtKSid; // @synthesize m_dtKSid;
@property(retain, nonatomic) NSString *m_nsImgEncryptKey; // @synthesize m_nsImgEncryptKey;
@property(retain, nonatomic) GraphicVerifyWindow *m_winVerifyImg; // @synthesize m_winVerifyImg;
@property(retain, nonatomic) NSData *m_dtVerifyImg; // @synthesize m_dtVerifyImg;
@property(retain, nonatomic) NSString *m_nsPwd2; // @synthesize m_nsPwd2;
@property(retain, nonatomic) NSString *m_nsPwdMd5; // @synthesize m_nsPwdMd5;
@property(retain, nonatomic) NSString *m_nsPwd; // @synthesize m_nsPwd;
@property(retain, nonatomic) NSString *m_nsMessage; // @synthesize m_nsMessage;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) unsigned int m_opCode; // @synthesize m_opCode;
@property(nonatomic) __weak id <PasswordLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnVerifyPasswd:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnCheckPasswd:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnSetPasswd:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)init;
- (void)startSetPassword:(id)arg1 ticketType:(unsigned int)arg2;
- (void)startCheckPassword:(unsigned int)arg1;
- (void)startVerifyPasswordWithoutAlert;
- (void)startVerifyPassword;
- (void)showVerifyPassFailAlert:(id)arg1;
- (void)showFailAlert:(id)arg1 message:(id)arg2;
- (void)showVerifyAlert;
- (void)showPasswordAlert;
- (void)updateVerifyImg;
- (void)onGraphicVerifyChangeImage;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyWithVerifyCode:(id)arg1;
- (void)doGetVerifyImg;
- (void)doVerifyPwd;
- (void)doVerifyCode:(id)arg1;
- (void)hashPasswordFromText:(id)arg1;
- (id)topMostController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

