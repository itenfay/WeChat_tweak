//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap, NSString;

@protocol GameChatInputToolViewDelegate <NSObject>
- (void)onInputViewShowChange:(_Bool)arg1;
- (double)getVisibleHeight;
- (void)didSelectWithEmotcion:(CEmoticonWrap *)arg1;
- (void)didCommitText:(NSString *)arg1;

@optional
- (void)onInputViewFrameChange;
- (void)textDidClickSend;
- (void)textDidChanged:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
@end

