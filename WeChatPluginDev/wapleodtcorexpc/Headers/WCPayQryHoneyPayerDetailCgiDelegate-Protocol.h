//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class QryHoneyPayerDetailResp, WCPayBaseNetworkingError, WCPayQryHoneyPayerDetailCgi;

@protocol WCPayQryHoneyPayerDetailCgiDelegate <WCPayBaseCgiDelegate>
- (void)qryHoneyPayerDetailCgi:(WCPayQryHoneyPayerDetailCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)qryHoneyPayerDetailCgi:(WCPayQryHoneyPayerDetailCgi *)arg1 didGetResponse:(QryHoneyPayerDetailResp *)arg2;
@end

