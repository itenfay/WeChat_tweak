//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class PrepareWecoinRechargeResponse, WCCoinCgiError, WCCoinPrepareRechargeCgi;

@protocol WCCoinPrepareRechargeCgiDelegate <NSObject>
- (void)prepareRechargeCgi:(WCCoinPrepareRechargeCgi *)arg1 didFailWithError:(WCCoinCgiError *)arg2;
- (void)prepareRechargeCgi:(WCCoinPrepareRechargeCgi *)arg1 didGetResponse:(PrepareWecoinRechargeResponse *)arg2;
@end

