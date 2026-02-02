//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class ModifyHoneyPayerPayWayResp, WCPayBaseNetworkingError, WCPayModifyHoneyPayerPayWayCgi;

@protocol WCPayModifyHoneyPayerPayWayCgiDelegate <WCPayBaseCgiDelegate>
- (void)modifyHoneyPayerPayWayCgi:(WCPayModifyHoneyPayerPayWayCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)modifyHoneyPayerPayWayCgi:(WCPayModifyHoneyPayerPayWayCgi *)arg1 didGetResponse:(ModifyHoneyPayerPayWayResp *)arg2;
@end

