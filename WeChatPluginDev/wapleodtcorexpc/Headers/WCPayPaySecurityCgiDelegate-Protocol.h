//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class PaySecurityResp, WCPayBaseNetworkingError, WCPayPaySecurityCgi;

@protocol WCPayPaySecurityCgiDelegate <WCPayBaseCgiDelegate>
- (void)paySecurityCgi:(WCPayPaySecurityCgi *)arg1 didGetResponse:(PaySecurityResp *)arg2;

@optional
- (void)paySecurityCgi:(WCPayPaySecurityCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
@end

