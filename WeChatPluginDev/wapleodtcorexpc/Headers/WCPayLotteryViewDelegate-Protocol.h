//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayLotteryView;

@protocol WCPayLotteryViewDelegate <NSObject>

@optional
- (void)lotteryViewDidClickButton:(id)arg1;
- (void)lotteryViewDidFinishScratchOrShake:(WCPayLotteryView *)arg1;
- (void)lotteryViewDidScratchOrShake:(WCPayLotteryView *)arg1 drawType:(unsigned int)arg2;
@end

