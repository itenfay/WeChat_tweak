//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, MMSessionInfo;

@protocol QuickReplyMsgExt <NSObject>
- (void)onShowQuickReplyAtSession:(MMSessionInfo *)arg1 message:(CMessageWrap *)arg2;
- (void)onFinishQuickReplyMsg;
- (void)onBeginQuickReplyMsg;
@end

