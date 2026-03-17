//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetLotteryResponse, NSString;

@protocol WCPayF2FGetLotteryCgiDelegate <NSObject>
- (void)OnGetF2FGetLotteryRepsonseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetF2FGetLotteryRepsonseOK:(GetLotteryResponse *)arg1;
@end

