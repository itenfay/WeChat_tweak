//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class CheckHoneyPayerResp, WCPayBaseNetworkingError, WCPayCheckHoneyPayerCgi;

@protocol WCPayCheckHoneyPayerCgiDelegate <WCPayBaseCgiDelegate>
- (void)checkHoneyPayerCgi:(WCPayCheckHoneyPayerCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)checkHoneyPayerCgi:(WCPayCheckHoneyPayerCgi *)arg1 didGetResponse:(CheckHoneyPayerResp *)arg2;
@end

