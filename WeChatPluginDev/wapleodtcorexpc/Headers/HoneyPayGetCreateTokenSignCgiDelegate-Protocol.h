//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class GetCreateTokenSignResp, HoneyPayGetCreateTokenSignCgi, WCPayBaseNetworkingError;

@protocol HoneyPayGetCreateTokenSignCgiDelegate <WCPayBaseCgiDelegate>
- (void)getCreateTokenSignCgi:(HoneyPayGetCreateTokenSignCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)getCreateTokenSignCgi:(HoneyPayGetCreateTokenSignCgi *)arg1 didGetResponse:(GetCreateTokenSignResp *)arg2;
@end

