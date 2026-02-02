//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextField.h>

@class TPIDKeyboardView, TenpayDelegate, UIView;
@protocol TenpaySecureCtrlDelegate;

@interface TenpaySecureCtrl : UITextField
{
    TenpayDelegate *_dataHandler;
    unsigned long long _maxInputLen;
    UIView *_keyboard;
    TPIDKeyboardView *_iPadKeyboard;
    _Bool bFormatBankCard;
    id <TenpaySecureCtrlDelegate> ctrlDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bFormatBankCard; // @synthesize bFormatBankCard;
@property(nonatomic) __weak id <TenpaySecureCtrlDelegate> ctrlDelegate; // @synthesize ctrlDelegate;
@property(nonatomic) struct _NSRange selectedRange;
- (void)p_syncShowTextToDataHandler;
- (void)setWhiteListChar:(id)arg1;
- (void)setFilterChar:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (_Bool)isAreaIDCardNum:(long long)arg1;
- (_Bool)isUserIDNum;
- (_Bool)isBankCardNum;
- (_Bool)isPhoneNum;
- (id)GetSm4EncryptData;
- (id)Get3DesEncryptData;
- (id)GetSM2EncryptData:(long long)arg1 timestamp:(unsigned long long)arg2 nonce:(id)arg3;
- (id)GetRsa2048EncryptData;
- (id)GetRsaEncryptData;
- (void)ClearInput;
- (void)SelectRsaKey:(int)arg1;
- (void)SetSalt:(id)arg1;
- (long long)GetInputInfo;
- (id)GetVersion;
- (unsigned long long)accessibilityTraits;
- (void)numberKeyBoardClicked:(id)arg1;
- (void)numberKeyBoardTouchTouchCancel:(id)arg1;
- (void)numberKeyBoardTouchDown:(id)arg1;
- (void)UseKeyboardWithX:(_Bool)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 ImageExtendNormal:(id)arg6 ImageExtendPress:(id)arg7;
- (void)UseKeyboardWithX:(_Bool)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)AppendString:(id)arg1;
- (void)SetMaxInputLen:(int)arg1;
- (unsigned long long)GetInputLen;
- (id)text;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)onChange;
- (void)onReturn;
- (id)initWithFrame:(struct CGRect)arg1;

@end

