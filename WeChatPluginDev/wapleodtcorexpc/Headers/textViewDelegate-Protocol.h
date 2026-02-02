//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTextView, NSSet, NSString, UIEvent, UIImage, UIKeyCommand, UITextView;

@protocol textViewDelegate <NSObject>

@optional
- (_Bool)handleKeyCommand:(UIKeyCommand *)arg1;
- (void)textView:(MMTextView *)arg1 didShowMenuTypes:(NSSet *)arg2;
- (unsigned long long)menuTypeForExtMenuAction:(SEL)arg1;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)textView:(UITextView *)arg1 willPastedText:(NSString *)arg2;
- (void)textview:(UITextView *)arg1 pasteImage:(UIImage *)arg2;
- (_Bool)textview:(UITextView *)arg1 shouldPasteImage:(UIImage *)arg2;
- (void)textViewTriggerPasteAction:(UITextView *)arg1;
- (void)touchesCancelled_TextView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded_TextView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesMoved_TextView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesBegan_TextView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

