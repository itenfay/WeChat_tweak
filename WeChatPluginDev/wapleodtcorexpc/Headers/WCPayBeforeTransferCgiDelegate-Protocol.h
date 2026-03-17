//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class CgiTransferBeforeResp, WCPayBaseNetworkingError, WCPayBeforeTransferCgi;

@protocol WCPayBeforeTransferCgiDelegate <WCPayBaseCgiDelegate>
- (void)beforeTransferCgi:(WCPayBeforeTransferCgi *)arg1 didFailWith:(WCPayBaseNetworkingError *)arg2;
- (void)beforeTransferCgi:(WCPayBeforeTransferCgi *)arg1 didGetResponse:(CgiTransferBeforeResp *)arg2;
@end

