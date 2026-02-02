//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSAttributedString, UITextView;

@protocol MsgFullScreenInputDelegate <NSObject>
- (void)TextDidChanged:(UITextView *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onExitWithAttributedText:(NSAttributedString *)arg1 selectedRange:(struct _NSRange)arg2 showKeyboard:(_Bool)arg3 showEmoticon:(_Bool)arg4;
@end

