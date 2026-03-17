//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData;

@protocol MegaVideoPlayerDetailModelListener <NSObject, UnitRCBaseProtocol>
- (void)onPlayingFeedChanged:(NSData *)arg1 toFeed:(NSData *)arg2;
@end

