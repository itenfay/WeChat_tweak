//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetLotteryResponse, NSString;

@protocol WCPayGetLotteryCgiDelegate <NSObject>
- (void)OnGetLotteryRepsonseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetLotteryRepsonseOK:(GetLotteryResponse *)arg1;
@end

