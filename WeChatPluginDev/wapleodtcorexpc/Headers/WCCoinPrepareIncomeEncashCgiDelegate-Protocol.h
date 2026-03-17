//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class PrepareIncomeEncashResponse, WCCoinCgiError, WCCoinPrepareIncomeEncashCgi;

@protocol WCCoinPrepareIncomeEncashCgiDelegate <NSObject>
- (void)prepareIncomeEncashCgi:(WCCoinPrepareIncomeEncashCgi *)arg1 didFailWithError:(WCCoinCgiError *)arg2;
- (void)prepareIncomeEncashCgi:(WCCoinPrepareIncomeEncashCgi *)arg1 didGetResponse:(PrepareIncomeEncashResponse *)arg2;
@end

