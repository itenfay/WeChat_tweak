//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class QryHoneyUserDetailResp, WCPayBaseNetworkingError, WCPayQryHoneyUserDetailCgi;

@protocol WCPayQryHoneyUserDetailCgiDelegate <WCPayBaseCgiDelegate>
- (void)qryHoneyUserDetailCgi:(WCPayQryHoneyUserDetailCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)qryHoneyUserDetailCgi:(WCPayQryHoneyUserDetailCgi *)arg1 didGetResponse:(QryHoneyUserDetailResp *)arg2;
@end

