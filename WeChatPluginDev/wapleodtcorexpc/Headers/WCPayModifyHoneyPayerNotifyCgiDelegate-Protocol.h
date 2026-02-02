//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class ModifyHoneyPayerNotifyResp, WCPayBaseNetworkingError, WCPayModifyHoneyPayerNotifyCgi;

@protocol WCPayModifyHoneyPayerNotifyCgiDelegate <WCPayBaseCgiDelegate>
- (void)modifyHoneyPayerNotifyCgi:(WCPayModifyHoneyPayerNotifyCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)modifyHoneyPayerNotifyCgi:(WCPayModifyHoneyPayerNotifyCgi *)arg1 didGetResponse:(ModifyHoneyPayerNotifyResp *)arg2;
@end

