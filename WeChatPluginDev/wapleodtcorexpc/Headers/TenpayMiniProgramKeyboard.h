//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString, TenpaySMCertificate, TenpaySMSecureObject, UITextField;
@protocol TenpayMiniProgramKeyboardDelegate;

@interface TenpayMiniProgramKeyboard
{
    TenpaySMCertificate *_certificateHandler;
    TenpaySMSecureObject *_smSecureHandler;
    NSMutableArray *_inputText;
    NSData *_aesKeyIV;
    NSData *_aseKey;
    NSString *_salt;
    unsigned long long _timestamp;
    unsigned long long _nonce;
    int _maxInputLen;
    int _minInputLen;
    _Bool _hasStartCustomHash;
    NSData *_customHash;
    NSString *_certPem;
    int gErrorCode;
    id <TenpayMiniProgramKeyboardDelegate> _delegate;
    UITextField *_textView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UITextField *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <TenpayMiniProgramKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)keyboardTouchDelete;
- (void)keyboardTouchNumber:(id)arg1;
- (void)setInputLength:(long long)arg1 max:(long long)arg2;
- (void)setCertPem:(id)arg1;
- (void)clearInput;
- (void)hide;
- (void)show;
- (void)HiddenKeyboardPressedState:(_Bool)arg1;
- (void)setKeyboardOrientation:(long long)arg1;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2;
- (id)endCustomHashAndEncrypt:(unsigned long long)arg1 nonce:(unsigned long long)arg2;
- (void)customAppendSalt:(id)arg1;
- (void)customInsertSalt:(id)arg1;
- (void)customPasswdEncode:(unsigned long long)arg1;
- (void)customPasswdMd5;
- (void)customPasswdSha1;
- (void)customPasswdSha256;
- (void)customPasswdSm3;
- (void)beginCustomHash;
- (int)getError;
- (id)version;
- (long long)getContentLength;
- (id)plainPasswd;
- (id)inputEncryptData:(unsigned long long)arg1;
- (void)setNonce:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setSalt:(id)arg1;
- (void)appendPsw:(id)arg1;
- (void)dealloc;
- (id)initWithX:(_Bool)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 Controller:(id)arg6 certPem:(id)arg7;

@end

