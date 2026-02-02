//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MsgCheckResp, NSString, WCPayTransferMsgCheckCgi;

@protocol WCPayTransferMsgCheckCgiDelegate <NSObject>
- (void)onWCPayTransferMsgCheckCgiResponseError:(NSString *)arg1 cgi:(WCPayTransferMsgCheckCgi *)arg2;
- (void)onWCPayTransferMsgCheckCgiResponseOK:(MsgCheckResp *)arg1 cgi:(WCPayTransferMsgCheckCgi *)arg2;
@end

