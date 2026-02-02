//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetIncomePageInfoResponse, WCCoinCgiError, WCCoinGetIncomePageInfoCgi;

@protocol WCCoinGetIncomePageInfoCgiDelegate <NSObject>
- (void)getIncomePageInfoCgi:(WCCoinGetIncomePageInfoCgi *)arg1 didFailWithError:(WCCoinCgiError *)arg2;
- (void)getIncomePageInfoCgi:(WCCoinGetIncomePageInfoCgi *)arg1 didGetResponse:(GetIncomePageInfoResponse *)arg2;
@end

