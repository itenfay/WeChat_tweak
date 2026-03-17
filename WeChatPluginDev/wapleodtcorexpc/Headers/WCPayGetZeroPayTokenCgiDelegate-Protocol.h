//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TenPayResponse, WCPayBaseNetworkingError, WCPayGetZeroPayTokenCgi, WCPayGetZeroPayTokenCgiResp;

@protocol WCPayGetZeroPayTokenCgiDelegate <NSObject>
- (void)onWCPayGetZeroPayTokenCgi:(WCPayGetZeroPayTokenCgi *)arg1 didFailWithTenpayResponse:(TenPayResponse *)arg2 error:(WCPayBaseNetworkingError *)arg3;
- (void)onWCPayGetZeroPayTokenCgi:(WCPayGetZeroPayTokenCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)onWCPayGetZeroPayTokenCgi:(WCPayGetZeroPayTokenCgi *)arg1 didGetResponse:(WCPayGetZeroPayTokenCgiResp *)arg2;
@end

