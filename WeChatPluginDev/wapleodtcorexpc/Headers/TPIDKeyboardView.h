//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UITextField;

@interface TPIDKeyboardView : UIView
{
    UITextField *curText;
    UIView *myKeyboardiPadPortrait;
    UIView *myKeyboardiPadLandscape;
    long long keybordOrientation;
    id _touchNumTarget;
    SEL _touchNumCallback;
    id _touchDeleteTarget;
    SEL _touchDeleteCallback;
    NSMutableArray *_portraitBtns;
    NSMutableArray *_landscapeBtns;
    NSMutableArray *_numberBtns;
    int maxInput;
}

+ (void)addLabelOnButton:(id)arg1 text:(id)arg2 frame:(struct CGRect)arg3;
@property(nonatomic) int maxInput; // @synthesize maxInput;
- (void)HiddenKeyboardPressedState:(_Bool)arg1;
- (void)numberKeyBoardClicked:(id)arg1;
- (void)SetTouchDelete:(id)arg1 callback:(SEL)arg2;
- (void)SetTouchNum:(id)arg1 callback:(SEL)arg2;
- (void)touchInput:(id)arg1;
- (void)addController:(id)arg1;
- (id)initWithX:(_Bool)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 ImageExtendNormal:(id)arg6 ImageExtendPess:(id)arg7;
- (id)initWithX:(_Bool)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5;
- (void)UseKeyboardWithImageNumNormalOnIPad:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4 ImageExtendNormal:(id)arg5 ImageExtendPess:(id)arg6 forTarget:(id)arg7 Controller:(id)arg8 WithX:(_Bool)arg9;
- (void)UseKeyboardWithImageNumNormalOnIPad:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4 forTarget:(id)arg5 Controller:(id)arg6 WithX:(_Bool)arg7;
- (id)createMainKeyboardWithWidth:(int)arg1 andHeight:(int)arg2 ImageNumNormal:(id)arg3 ImageNumPress:(id)arg4 ImageDelNormal:(id)arg5 ImageDelPess:(id)arg6 ImageExtendNormal:(id)arg7 ImageExtendPess:(id)arg8 forTarget:(id)arg9 WithX:(_Bool)arg10 orientation:(long long)arg11;
- (void)updateKeyboardSizeForFloat:(struct CGSize)arg1 rootView:(id)arg2 isFloatKb:(_Bool)arg3;
- (void)_setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3 rootView:(id)arg4;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)dealloc;
- (void)keyboardChangeFrame:(id)arg1;
- (void)OrientationDidChange:(id)arg1;
- (id)init;

@end

