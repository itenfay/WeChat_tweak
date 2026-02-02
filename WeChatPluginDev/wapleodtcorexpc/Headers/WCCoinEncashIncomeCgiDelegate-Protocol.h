//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EncashIncomeResponse, WCCoinCgiError, WCCoinEncashIncomeCgi;

@protocol WCCoinEncashIncomeCgiDelegate <NSObject>
- (void)encashIncomeCgi:(WCCoinEncashIncomeCgi *)arg1 didFailWithError:(WCCoinCgiError *)arg2;
- (void)encashIncomeCgi:(WCCoinEncashIncomeCgi *)arg1 didGetResponse:(EncashIncomeResponse *)arg2;
@end

