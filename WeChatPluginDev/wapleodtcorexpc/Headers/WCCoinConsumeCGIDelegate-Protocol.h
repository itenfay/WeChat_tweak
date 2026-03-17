//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ConsumeWecoinResponse, WCCoinCgiError, WCCoinConsumeCGI;

@protocol WCCoinConsumeCGIDelegate <NSObject>
- (void)consumeCgi:(WCCoinConsumeCGI *)arg1 didFailWithError:(WCCoinCgiError *)arg2;
- (void)consumeCgi:(WCCoinConsumeCGI *)arg1 didGetResponse:(ConsumeWecoinResponse *)arg2;
@end

