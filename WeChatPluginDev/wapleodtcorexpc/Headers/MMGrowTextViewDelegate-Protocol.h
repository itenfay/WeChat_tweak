//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMGrowTextView, MMTextView, NSArray, NSNotification, NSSet, NSString, UIImage, UITextView, UIView;

@protocol MMGrowTextViewDelegate <NSObject>

@optional
- (struct CGSize)maxSizeForTextView:(MMGrowTextView *)arg1;
- (_Bool)shouldRespondToKeyBoardEvent;
- (void)textView:(MMTextView *)arg1 didShowMenuTypes:(NSSet *)arg2;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(NSArray *)arg1;
- (void)onClickTranslateToolCloseMenu;
- (void)onClickTranslateToolOpenMenu;
- (void)onOpenTopicSearch;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(MMGrowTextView *)arg2;
- (void)onDeleteMsgReplyView:(MMGrowTextView *)arg1;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)MMGrowTextViewEndEditing:(MMGrowTextView *)arg1;
- (void)MMGrowTextViewBeginEditing:(MMGrowTextView *)arg1;
- (void)MMGrowTextView:(MMGrowTextView *)arg1 willPastedText:(NSString *)arg2;
- (void)MMGrowTextView:(UIView *)arg1 pasteImage:(UIImage *)arg2;
- (_Bool)MMGrowTextView:(UIView *)arg1 shouldPasteImage:(UIImage *)arg2;
- (void)UITextViewTextDidChangeNotification:(NSNotification *)arg1;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)TextViewDidDeleteToNil;
- (_Bool)TextViewDidDelete;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (void)TextViewExceedMaxLength:(UITextView *)arg1;
- (void)TextViewDidChangeSelection:(UITextView *)arg1;
- (void)TextDidChanged:(UITextView *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onClickTextViewSendText:(NSString *)arg1;
- (void)TextViewDidEnter:(NSString *)arg1;
- (void)TextViewHeightDidChanged:(UITextView *)arg1;
@end

