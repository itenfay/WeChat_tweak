//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class OpenECardAuthRes, WCPayECardCgiError, WCPayOpenECardAuthCgi;

@protocol WCPayOpenECardAuthCgiDelegate <WCPayBaseCgiDelegate>
- (void)openECardAuthCgi:(WCPayOpenECardAuthCgi *)arg1 didFailWithError:(WCPayECardCgiError *)arg2;
- (void)openECardAuthCgi:(WCPayOpenECardAuthCgi *)arg1 didGetResponse:(OpenECardAuthRes *)arg2;
@end

