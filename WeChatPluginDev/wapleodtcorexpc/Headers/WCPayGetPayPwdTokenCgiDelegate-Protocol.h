//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"

@class GetPayPwdTokenResp, WCPayBaseNetworkingError, WCPayGetPayPwdTokenCgi;

@protocol WCPayGetPayPwdTokenCgiDelegate <WCPayBaseCgiDelegate, WCPayLogicMgrExt>
- (void)getPayPwdTokenCgi:(WCPayGetPayPwdTokenCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)getPayPwdTokenCgi:(WCPayGetPayPwdTokenCgi *)arg1 didGetResponse:(GetPayPwdTokenResp *)arg2;
@end

