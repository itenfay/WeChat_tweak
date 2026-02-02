//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextField.h>

@class NSData, NSMutableArray, NSString, TenpayDelegate, TenpayKeyboardView;
@protocol TenpaySafeInputViewDelegate;

@interface TenpaySafeInputView : UITextField
{
    NSMutableArray *_inputEncData;
    TenpayKeyboardView *_keyboard;
    TenpayDelegate *_dataHandler;
    NSData *_sm4Key;
    NSData *_sm4IV;
    NSString *_szTitle;
    long long _type;
    long long _minInputLen;
    long long _maxInputLen;
    int _gErrorCode;
    id <TenpaySafeInputViewDelegate> safeViewDelegate;
    NSString *_whiteListCharsSet;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *whiteListCharsSet; // @synthesize whiteListCharsSet=_whiteListCharsSet;
@property(nonatomic) __weak id <TenpaySafeInputViewDelegate> safeViewDelegate; // @synthesize safeViewDelegate;
- (int)getError;
- (id)getHashData:(id)arg1;
- (id)getEncryptData:(id)arg1 extra:(id)arg2;
- (void)setInput:(id)arg1;
- (_Bool)checkInputData:(id)arg1;
- (unsigned long long)getInputLen;
- (void)clearInput;
- (unsigned long long)accessibilityTraits;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)onReturn;
- (void)onChange;
- (id)getPsw;
- (void)appendPsw:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedRange;
- (void)numberKeyBoardClicked:(id)arg1;
- (void)setKeyboardFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)useKeyboard:(long long)arg1 imageNumNormal:(id)arg2 imageNumPress:(id)arg3 imageDelNormal:(id)arg4 imageDelPess:(id)arg5 imageExtendNormal:(id)arg6 imageExtendPess:(id)arg7;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)text;
- (void)setWhiteListChar:(id)arg1;
- (void)setInputRange:(long long)arg1 maxLen:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

