//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class PayIBGCheckJsapiSignResp, WCPayBaseNetworkingError, WCPayIBGCheckJSAPICgi;

@protocol WCPayIBGCheckJSAPICgiDelegate <WCPayBaseCgiDelegate>
- (void)ibgCheckJSAPICgi:(WCPayIBGCheckJSAPICgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)ibgCheckJSAPICgi:(WCPayIBGCheckJSAPICgi *)arg1 didGetResponse:(PayIBGCheckJsapiSignResp *)arg2;
@end

