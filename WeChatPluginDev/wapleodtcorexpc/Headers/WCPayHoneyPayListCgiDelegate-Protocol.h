//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class HoneyPayListResp, WCPayBaseNetworkingError, WCPayHoneyPayListCgi;

@protocol WCPayHoneyPayListCgiDelegate <WCPayBaseCgiDelegate>
- (void)honeyPayListCgi:(WCPayHoneyPayListCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)honeyPayListCgi:(WCPayHoneyPayListCgi *)arg1 didGetResponse:(HoneyPayListResp *)arg2;
@end

