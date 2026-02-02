//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MyRedPacketSingleCover, WCFinderMultiSelectedRedPacketSheet;

@protocol WCFinderMultiSelectedRedPacketSheetDelegate <NSObject>
- (void)onRedPacketSheetClickEditLink:(WCFinderMultiSelectedRedPacketSheet *)arg1;
- (void)onRedPacketSheet:(WCFinderMultiSelectedRedPacketSheet *)arg1 onSelectedRedPacket:(MyRedPacketSingleCover *)arg2;
@end

