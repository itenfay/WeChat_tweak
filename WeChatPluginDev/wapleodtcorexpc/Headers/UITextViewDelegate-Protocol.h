//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, NSTextAttachment, NSURL, UIAction, UIMenu, UITextItem, UITextItemMenuConfiguration, UITextView;
@protocol UIContextMenuInteractionAnimating, UIEditMenuInteractionAnimating;

@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)textView:(UITextView *)arg1 textItemMenuWillEndForTextItem:(UITextItem *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)textView:(UITextView *)arg1 textItemMenuWillDisplayForTextItem:(UITextItem *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (UITextItemMenuConfiguration *)textView:(UITextView *)arg1 menuConfigurationForTextItem:(UITextItem *)arg2 defaultMenu:(UIMenu *)arg3;
- (UIAction *)textView:(UITextView *)arg1 primaryActionForTextItem:(UITextItem *)arg2 defaultAction:(UIAction *)arg3;
- (void)textView:(UITextView *)arg1 willDismissEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)textView:(UITextView *)arg1 willPresentEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (UIMenu *)textView:(UITextView *)arg1 editMenuForTextInRange:(struct _NSRange)arg2 suggestedActions:(NSArray *)arg3;
- (void)textViewDidChangeSelection:(UITextView *)arg1;
- (void)textViewDidChange:(UITextView *)arg1;
- (_Bool)textView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)textViewDidEndEditing:(UITextView *)arg1;
- (void)textViewDidBeginEditing:(UITextView *)arg1;
- (_Bool)textViewShouldEndEditing:(UITextView *)arg1;
- (_Bool)textViewShouldBeginEditing:(UITextView *)arg1;
@end

