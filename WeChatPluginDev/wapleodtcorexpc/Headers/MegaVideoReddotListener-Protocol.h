//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData;

@protocol MegaVideoReddotListener <NSObject, UnitRCBaseProtocol>
- (void)onReddotChanged:(NSData *)arg1 newReddotInfo:(NSData *)arg2;
@end

