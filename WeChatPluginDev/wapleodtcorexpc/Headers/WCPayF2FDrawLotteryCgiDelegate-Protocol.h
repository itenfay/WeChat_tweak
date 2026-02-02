//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class DrawLotteryResponse, NSString;

@protocol WCPayF2FDrawLotteryCgiDelegate <NSObject>
- (void)OnF2FDrawLotteryRepsonseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnF2FDrawLotteryRepsonseOK:(DrawLotteryResponse *)arg1;
@end

