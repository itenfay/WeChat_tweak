//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiF2FDynamicCodeResp, WCPayBaseNetworkingError, WCPayF2FDynamicCodeCgi;

@protocol WCPayF2FDynamicCodeCgiDelegate <NSObject>
- (void)onWCPayF2FDynamicCodeCgi:(WCPayF2FDynamicCodeCgi *)arg1 netWorkError:(WCPayBaseNetworkingError *)arg2;
- (void)onWCPayF2FDynamicCodeCgi:(WCPayF2FDynamicCodeCgi *)arg1 resp:(CgiF2FDynamicCodeResp *)arg2;
@end

