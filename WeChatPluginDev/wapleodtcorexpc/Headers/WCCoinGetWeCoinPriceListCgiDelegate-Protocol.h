//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetWecoinPriceListResponse, WCBaseNetworkingError, WCCoinGetWeCoinPriceListCgi;

@protocol WCCoinGetWeCoinPriceListCgiDelegate <NSObject>
- (void)getPriceListCgi:(WCCoinGetWeCoinPriceListCgi *)arg1 didFailWithError:(WCBaseNetworkingError *)arg2;
- (void)getPriceListCgi:(WCCoinGetWeCoinPriceListCgi *)arg1 didGetResponse:(GetWecoinPriceListResponse *)arg2;
@end

