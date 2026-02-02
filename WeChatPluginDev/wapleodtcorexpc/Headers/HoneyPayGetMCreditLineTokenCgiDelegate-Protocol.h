//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class GetMCreditLineTokenSignResp, HoneyPayGetMCreditLineTokenCgi, WCPayBaseNetworkingError;

@protocol HoneyPayGetMCreditLineTokenCgiDelegate <WCPayBaseCgiDelegate>
- (void)getMCreditLineTokenCgi:(HoneyPayGetMCreditLineTokenCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)getMCreditLineTokenCgi:(HoneyPayGetMCreditLineTokenCgi *)arg1 didGetResponse:(GetMCreditLineTokenSignResp *)arg2;
@end

