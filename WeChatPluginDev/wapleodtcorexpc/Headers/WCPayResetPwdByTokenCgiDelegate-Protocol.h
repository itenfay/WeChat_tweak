//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class WCPayBaseNetworkingError, WCPayResetPwdByTokenCgi, WCPayResetPwdByTokenCgiResponse;

@protocol WCPayResetPwdByTokenCgiDelegate <WCPayBaseCgiDelegate>
- (void)resetPwdByTokenCgi:(WCPayResetPwdByTokenCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)resetPwdByTokenCgi:(WCPayResetPwdByTokenCgi *)arg1 didGetResponse:(WCPayResetPwdByTokenCgiResponse *)arg2;
@end

