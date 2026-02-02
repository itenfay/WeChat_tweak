//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSString;

@protocol MegaVideoWatchLaterListener <NSObject, UnitRCBaseProtocol>
- (void)onFeedWatchLaterStatusChanged:(NSString *)arg1 action:(int)arg2;
@end

