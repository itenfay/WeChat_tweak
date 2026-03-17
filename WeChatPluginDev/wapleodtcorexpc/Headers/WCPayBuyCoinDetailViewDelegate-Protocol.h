//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WecoinPriceInfo;

@protocol WCPayBuyCoinDetailViewDelegate <NSObject>
- (void)shouldUpdateHeight;
- (void)shouldOpenWeb:(NSString *)arg1;
- (void)clickWithInfo:(WecoinPriceInfo *)arg1;
@end

