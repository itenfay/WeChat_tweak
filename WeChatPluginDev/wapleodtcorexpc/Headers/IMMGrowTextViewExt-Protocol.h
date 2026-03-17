//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UITextView;

@protocol IMMGrowTextViewExt <NSObject>

@optional
- (void)onTextViewChange:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onTextViewDidChange:(UITextView *)arg1;
- (void)onTextView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
@end

