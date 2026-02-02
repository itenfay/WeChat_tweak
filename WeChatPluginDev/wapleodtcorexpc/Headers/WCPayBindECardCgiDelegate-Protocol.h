//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class BindECardRes, WCPayBindECardCgi, WCPayECardCgiError;

@protocol WCPayBindECardCgiDelegate <WCPayBaseCgiDelegate>
- (void)bindECardCgi:(WCPayBindECardCgi *)arg1 didFailWithError:(WCPayECardCgiError *)arg2;
- (void)bindECardCgi:(WCPayBindECardCgi *)arg1 didGetResponse:(BindECardRes *)arg2;
@end

