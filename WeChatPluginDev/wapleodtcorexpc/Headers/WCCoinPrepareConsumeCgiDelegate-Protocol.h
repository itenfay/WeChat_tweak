//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class PrepareWecoinConsumeResponse, WCCoinCgiError, WCCoinPrepareConsumeCgi;

@protocol WCCoinPrepareConsumeCgiDelegate <NSObject>
- (void)prepareConsumeCgi:(WCCoinPrepareConsumeCgi *)arg1 didFailWithError:(WCCoinCgiError *)arg2;
- (void)prepareConsumeCgi:(WCCoinPrepareConsumeCgi *)arg1 didGetResponse:(PrepareWecoinConsumeResponse *)arg2;
@end

