//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class GetHoneyPayCardResp, WCPayBaseNetworkingError, WCPayGetHoneyPayCardCgi;

@protocol WCPayGetHoneyPayCardCgiDelegate <WCPayBaseCgiDelegate>
- (void)getHoneyPayCardCgi:(WCPayGetHoneyPayCardCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)getHoneyPayCardCgi:(WCPayGetHoneyPayCardCgi *)arg1 didGetResponse:(GetHoneyPayCardResp *)arg2;
@end

