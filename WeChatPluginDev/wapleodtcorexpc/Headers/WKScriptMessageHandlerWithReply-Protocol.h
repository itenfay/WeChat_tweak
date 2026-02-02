//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WKScriptMessage, WKUserContentController;

@protocol WKScriptMessageHandlerWithReply <NSObject>
- (void)userContentController:(WKUserContentController *)arg1 didReceiveScriptMessage:(WKScriptMessage *)arg2 replyHandler:(void (^)(id, NSString *))arg3;
@end

