//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTipsViewController;

@interface WCUIAlertView : NSObject
{
    MMTipsViewController *_tipsVc;
}

+ (id)getTopVc;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelBtnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 btnTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 btnTitle:(id)arg5 handler:(CDUnknownBlockType)arg6 btnTitle:(id)arg7 handler:(CDUnknownBlockType)arg8;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 btnTitle:(id)arg5 handler:(CDUnknownBlockType)arg6 windowLevel:(int)arg7;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 btnTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 btnTitle:(id)arg9 target:(id)arg10 sel:(SEL)arg11 view:(id)arg12;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 view:(id)arg6;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelBtnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 view:(id)arg9;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 view:(id)arg9;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 destructiveBtnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 cancelBtnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 view:(id)arg9;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 rightBtnStyle:(long long)arg9 view:(id)arg10 forbidDarkMode:(_Bool)arg11;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 rightBtnStyle:(long long)arg9 view:(id)arg10;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 btnTitle:(id)arg9 target:(id)arg10 sel:(SEL)arg11;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelBtnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8;
- (void).cxx_destruct;
- (_Bool)isVisible;
- (void)dismissAnimated:(_Bool)arg1;
- (void)show;
- (void)addCancelBtnTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addDestructiveBtnTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addBtnTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3 btnStyle:(long long)arg4;
- (void)addCancelBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)setTextFieldDefaultText:(id)arg1;
- (void)setTextFieldPlaceHolder:(id)arg1;
- (_Bool)isFirstResponder;
- (id)getTextFieldText;
- (id)getTextField;
- (void)showTextFieldWithMaxLen:(unsigned int)arg1;
- (void)setRequestKeyWindow:(_Bool)arg1;
- (id)tipsViewController;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end

