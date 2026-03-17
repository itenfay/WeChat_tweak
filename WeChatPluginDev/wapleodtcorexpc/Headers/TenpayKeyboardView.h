//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UITextField;

@interface TenpayKeyboardView : UIView
{
    id _touchNumTarget;
    SEL _touchNumCallback;
    id _touchDeleteTarget;
    SEL _touchDeleteCallback;
    NSString *_keyboardText;
    UITextField *_curTextField;
    UIView *_myKeyboardiPadPortrait;
    UIView *_myKeyboardiPadLandscape;
    long long _keybordOrientation;
}

- (void)numberKeyBoardClicked:(id)arg1;
- (void)SetTouchDelete:(id)arg1 callback:(SEL)arg2;
- (void)SetTouchNum:(id)arg1 callback:(SEL)arg2;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3 rootView:(id)arg4;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (id)createMainKeyboardWithWidth:(int)arg1 andHeight:(int)arg2 type:(long long)arg3 ImageNumNormal:(id)arg4 ImageNumPress:(id)arg5 ImageDelNormal:(id)arg6 ImageDelPess:(id)arg7 ImageExtendNormal:(id)arg8 ImageExtendPess:(id)arg9 orientation:(long long)arg10;
- (void)useKeyboardWithImageNumNormalOnIPad:(long long)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 ImageExtendNormal:(id)arg6 ImageExtendPess:(id)arg7 Controller:(id)arg8;
- (void)updateKeyboardSizeForFloat:(struct CGSize)arg1 rootView:(id)arg2 isFloatKeyboard:(_Bool)arg3;
- (void)keyboardChangeFrame:(id)arg1;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)orientationDidChange:(id)arg1;
- (void)setPadKeyBoard;
- (void)setPhoneKeyBoard:(long long)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 ImageExtendNormal:(id)arg6 ImageExtendPess:(id)arg7;
- (id)initWithType:(long long)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 ImageExtendNormal:(id)arg6 ImageExtendPess:(id)arg7 Controller:(id)arg8;
- (id)initWithType:(long long)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 Controller:(id)arg6;
- (void)dealloc;
- (id)init;

@end

