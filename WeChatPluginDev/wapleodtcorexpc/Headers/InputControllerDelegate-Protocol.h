//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap, MMGrowTextView, NSArray, NSString, UITextView, UIView, WCInputController;

@protocol InputControllerDelegate <NSObject>

@optional
- (_Bool)getInputControllerSendButtonCanSendState;
- (void)growTextViewDidClickSendWithText:(NSString *)arg1;
- (void)MMGrowTextViewDidPasted:(MMGrowTextView *)arg1 pastedText:(NSString *)arg2;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(NSArray *)arg1;
- (_Bool)shouldRespondToKeyBoardEvent;
- (void)keyboardHiding;
- (void)keyboardShowing;
- (void)onInputModeChangingTo:(long long)arg1;
- (void)onEmoticonBoardStateDidChanged:(_Bool)arg1;
- (void)emoticonBoardViewWillHide;
- (void)emoticonBoardViewDidShow;
- (void)onSelectEmoticonSearchItem;
- (void)onSelectorSelfDefinedEmotcion:(CEmoticonWrap *)arg1;
- (_Bool)canSelectEmoji:(NSString *)arg1;
- (void)keyboardDidHide;
- (void)keyboardWillHide;
- (_Bool)shouldInterceptExpressionPanelOnKeyboardChanged:(_Bool)arg1;
- (void)keyboardWillShow;
- (void)onTextChanged:(UITextView *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)textDidChanged:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)textViewDidChangeSelection:(MMGrowTextView *)arg1;
- (void)textViewTextDidExceedMaxLength;
- (void)textViewTextDidChange;
- (void)didCommitText:(NSString *)arg1;
- (void)didCommitEmptyText;
- (double)getVisibleHeight;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(_Bool)arg2;
- (void)MMGrowTextViewBeginEditing:(MMGrowTextView *)arg1;
- (void)inputController:(WCInputController *)arg1 didChangeInputViewY:(double)arg2;
- (void)InputViewFrameDidChange:(UIView *)arg1;
- (void)MMGrowTextViewHeightDidChanged:(MMGrowTextView *)arg1;
@end

