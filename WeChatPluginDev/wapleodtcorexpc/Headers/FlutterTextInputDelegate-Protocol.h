//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FlutterTextInputView, NSDictionary, NSString, NativeKeyboardViewParam, UIView;

@protocol FlutterTextInputDelegate <NSObject>
- (UIView *)flutterTextInputView:(FlutterTextInputView *)arg1 createNativeKeyboardView:(NativeKeyboardViewParam *)arg2;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 hideKeyBoardWithConfig:(NSDictionary *)arg2;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 showKeyBoardWithConfig:(NSDictionary *)arg2;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 didResignFirstResponderWithTextInputClient:(int)arg2;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 removeTextPlaceholder:(int)arg2;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 insertTextPlaceholderWithSize:(struct CGSize)arg2 withClient:(int)arg3;
- (void)flutterTextInputViewScribbleInteractionFinished:(FlutterTextInputView *)arg1;
- (void)flutterTextInputViewScribbleInteractionBegan:(FlutterTextInputView *)arg1;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 showToolbar:(int)arg2;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 showAutocorrectionPromptRectForStart:(unsigned long long)arg2 end:(unsigned long long)arg3 withClient:(int)arg4;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 updateFloatingCursor:(long long)arg2 withClient:(int)arg3 withPosition:(NSDictionary *)arg4;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 performAction:(long long)arg2 withClient:(int)arg3;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 updateEditingClient:(int)arg2 withDelta:(NSDictionary *)arg3;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 updateEditingClient:(int)arg2 withState:(NSDictionary *)arg3 withTag:(NSString *)arg4;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 updateEditingClient:(int)arg2 withState:(NSDictionary *)arg3;
@end

