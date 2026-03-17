//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCoinBuyCoinView, WecoinPriceInfo;

@protocol WCCoinBuyCoinViewDelegate <NSObject>
- (void)buyCoinViewDidClose:(WCCoinBuyCoinView *)arg1 isManualTrigger:(_Bool)arg2;
- (void)didClickBuyCoin:(WCCoinBuyCoinView *)arg1 info:(WecoinPriceInfo *)arg2;
@end

