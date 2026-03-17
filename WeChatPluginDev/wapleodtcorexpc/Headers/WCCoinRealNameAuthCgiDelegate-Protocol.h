//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCoinCgiError, WCCoinRealNameAuthCgi, WecoinRealNameAuthResponse;

@protocol WCCoinRealNameAuthCgiDelegate <NSObject>
- (void)realNameAuthCgi:(WCCoinRealNameAuthCgi *)arg1 didFailWithError:(WCCoinCgiError *)arg2;
- (void)realNameAuthCgi:(WCCoinRealNameAuthCgi *)arg1 didGetResponse:(WecoinRealNameAuthResponse *)arg2;
@end

