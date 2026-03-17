//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class OpenECardRes, WCPayECardCgiError, WCPayOpenECardCgi;

@protocol WCPayOpenECardCgiDelegate <WCPayBaseCgiDelegate>
- (void)openECardCgi:(WCPayOpenECardCgi *)arg1 didFailWithError:(WCPayECardCgiError *)arg2;
- (void)openECardCgi:(WCPayOpenECardCgi *)arg1 didGetResponse:(OpenECardRes *)arg2;
@end

