//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class WCPayBaseNetworkingError, WCPayGetUserExInfoCgi, WCPayGetUserExInfoCgiResponse;

@protocol WCPayGetUserExInfoCgiDelegate <WCPayBaseCgiDelegate>
- (void)getUserExInfoCgi:(WCPayGetUserExInfoCgi *)arg1 didGetResponse:(WCPayGetUserExInfoCgiResponse *)arg2;

@optional
- (void)getUserExInfoCgi:(WCPayGetUserExInfoCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
@end

