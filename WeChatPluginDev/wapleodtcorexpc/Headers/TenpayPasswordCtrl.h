//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextField.h>

@class NSMutableArray, NSString, TPIDKeyboardView, TenpayPasswordView, TenpaySMCertificate, UIView;
@protocol TenpayPasswordCtrlDelegate;

@interface TenpayPasswordCtrl : UITextField
{
    NSMutableArray *_inputEncData;
    UIView *_keyboard;
    TenpayPasswordView *_pswView;
    TPIDKeyboardView *_iPadKeyboard;
    TenpaySMCertificate *_certificateHandler;
    NSString *_aesKey;
    NSMutableArray *_numberBtns;
    int gErrorCode;
    id <TenpayPasswordCtrlDelegate> ctrlDelegate;
    NSString *_saltVal;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *saltVal; // @synthesize saltVal=_saltVal;
@property(nonatomic) __weak id <TenpayPasswordCtrlDelegate> ctrlDelegate; // @synthesize ctrlDelegate;
- (int)getLastError;
- (id)GetRsa2048EncryptData:(long long)arg1 salt:(id)arg2 timestamp:(unsigned long long)arg3 nonce:(id)arg4;
- (id)GetSM2EncryptData:(long long)arg1 certPem:(id)arg2 timestamp:(unsigned long long)arg3 nonce:(id)arg4 salt:(id)arg5;
- (id)GetSM2EncryptData:(long long)arg1 timestamp:(unsigned long long)arg2 nonce:(id)arg3;
- (id)GetSm3HashData;
- (id)GetHashData;
- (id)GetRsa2048EncryptData;
- (id)GetRsaEncryptData;
- (unsigned long long)GetInputLen;
- (void)SetSalt:(id)arg1;
- (void)ClearInput;
- (unsigned long long)accessibilityTraits;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onChange;
- (void)appendPsw:(id)arg1;
- (void)numberKeyBoardClicked:(id)arg1;
- (void)UseKeyboardWithImageNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4 ImageExtendNormal:(id)arg5 ImageExtendPress:(id)arg6;
- (void)UseKeyboardWithImageNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)HiddenKeyboardPressedState:(_Bool)arg1;
- (void)SetDotFillColor:(id)arg1 emptyColor:(id)arg2;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2;
- (id)customOverlayContainer;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)setupSM;
- (id)initWithFrame:(struct CGRect)arg1 AndImage:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

