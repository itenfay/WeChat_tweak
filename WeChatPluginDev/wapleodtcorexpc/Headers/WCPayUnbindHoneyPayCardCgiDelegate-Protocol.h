//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class UnbindHoneyPayCardResp, WCPayBaseNetworkingError, WCPayUnbindHoneyPayCardCgi;

@protocol WCPayUnbindHoneyPayCardCgiDelegate <WCPayBaseCgiDelegate>
- (void)unbindHoneyPayCardCgi:(WCPayUnbindHoneyPayCardCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)unbindHoneyPayCardCgi:(WCPayUnbindHoneyPayCardCgi *)arg1 didGetResponse:(UnbindHoneyPayCardResp *)arg2;
@end

