//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString, WCPayDecimalKeyboardView;

@protocol WCPayDecimalKeyboardViewDelegate <NSObject>
- (void)keyboardViewConfirmBtnClick:(WCPayDecimalKeyboardView *)arg1;
- (MMUIViewController *)keyboardHostViewController;

@optional
- (WCPayDecimalKeyboardView *)getCurrentKeyboardView;
- (void)decimalKeyboardDidHide;
- (void)decimalKeyboardWillHide;
- (void)decimalKeyboardDidShow;
- (void)decimalKeyboardWillShow:(double)arg1;
- (void)keyboardViewOperateBtnClick:(WCPayDecimalKeyboardView *)arg1;
- (void)keyboardViewDeleteBtnClick:(WCPayDecimalKeyboardView *)arg1;
- (void)keyboardViewEditing:(WCPayDecimalKeyboardView *)arg1 text:(NSString *)arg2;
@end

