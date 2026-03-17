//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol LiveLotteryPacketDisplayDelegate <NSObject>
- (_Bool)isCurrentContentShow;
- (void)willManualOpenLotteryDetailCard;
- (void)willAutoOpenLotteryDetailCard;
- (_Bool)needAutoOpenLotteryDetailCard;
@end

