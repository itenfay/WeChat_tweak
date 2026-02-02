//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;
@protocol MMInputToolViewDelegate;

@protocol MMMsgInputPresenter <NSObject>
@property(nonatomic) __weak id <MMInputToolViewDelegate> delegate;
- (void)resetReplyMessage;
- (CMessageWrap *)replyingMessage;
- (void)replyMessage:(CMessageWrap *)arg1 becomeFirstResponder:(_Bool)arg2 showDisplayName:(_Bool)arg3;
- (void)replyMessage:(CMessageWrap *)arg1;
- (double)toolViewHeight;
- (void)setInputMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (long long)referMsgSvrId;
- (unsigned long long)inputMode;
- (void)setText:(NSString *)arg1;
- (NSString *)GetCurrentText;

@optional
- (void)setMultiSelectBarEnabled:(_Bool)arg1;
- (void)setMultiSelectBarHidden:(_Bool)arg1;
@end

