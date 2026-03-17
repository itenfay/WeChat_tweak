//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class QryHoneyPayCardDetailResp, WCPayBaseNetworkingError, WCPayQryHoneyPayCardDetailCgi;

@protocol WCPayQryHoneyPayCardDetailCgiDelegate <WCPayBaseCgiDelegate>
- (void)qryHoneyPayCardDetailCgi:(WCPayQryHoneyPayCardDetailCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)qryHoneyPayCardDetailCgi:(WCPayQryHoneyPayCardDetailCgi *)arg1 didGetResponse:(QryHoneyPayCardDetailResp *)arg2;
@end

