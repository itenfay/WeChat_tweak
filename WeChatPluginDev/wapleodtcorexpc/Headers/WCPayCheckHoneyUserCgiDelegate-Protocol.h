//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class CheckHoneyUserResp, WCPayBaseNetworkingError, WCPayCheckHoneyUserCgi;

@protocol WCPayCheckHoneyUserCgiDelegate <WCPayBaseCgiDelegate>
- (void)checkHoneyUserCgi:(WCPayCheckHoneyUserCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)checkHoneyUserCgi:(WCPayCheckHoneyUserCgi *)arg1 didGetResponse:(CheckHoneyUserResp *)arg2;
@end

