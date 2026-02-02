//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonEditTextInputView;

@protocol EmoticonEditTextInputDelegate <NSObject>

@optional
- (void)onEmoticonEditTextInputDidChange:(EmoticonEditTextInputView *)arg1 isFirstTyping:(_Bool)arg2;
- (void)onEmoticonEditTextInputCancel:(EmoticonEditTextInputView *)arg1;
- (void)onEmoticonEditTextInputFinished:(EmoticonEditTextInputView *)arg1;
@end

