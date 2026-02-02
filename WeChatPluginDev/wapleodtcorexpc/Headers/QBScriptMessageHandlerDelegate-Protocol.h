//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class QBScriptMessageHandler, WKScriptMessage;

@protocol QBScriptMessageHandlerDelegate <NSObject>
- (void)handler:(QBScriptMessageHandler *)arg1 didReceiveScriptMessage:(WKScriptMessage *)arg2;
@end

