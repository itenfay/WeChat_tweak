//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicSeatBaseInfo, NSString;

@protocol MMFinderLiveModifyMicSeatNamePanelDelegate <NSObject>

@optional
- (void)onMMFinderLiveModifyMicSeatNamePanelClosed;
- (void)onMMFinderLiveModifyMicSeatNamePanelModifyMicSeatName:(NSString *)arg1 withSeatId:(unsigned long long)arg2 seatBaseInfo:(MMFinderLiveConnectMicSeatBaseInfo *)arg3;
@end

