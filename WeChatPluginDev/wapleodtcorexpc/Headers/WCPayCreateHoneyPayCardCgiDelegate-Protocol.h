//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class CreateHoneyPayCardResp, WCPayBaseNetworkingError, WCPayCreateHoneyPayCardCgi;

@protocol WCPayCreateHoneyPayCardCgiDelegate <WCPayBaseCgiDelegate>
- (void)createHoneyPayCardCgi:(WCPayCreateHoneyPayCardCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)createHoneyPayCardCgi:(WCPayCreateHoneyPayCardCgi *)arg1 didGetResponse:(CreateHoneyPayCardResp *)arg2;
@end

