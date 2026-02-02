//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol TingPlayerShutdownListener <NSObject, UnitRCBaseProtocol>
- (void)onShutdown:(int)arg1 minLater:(unsigned long long)arg2 startTimeMs:(unsigned long long)arg3;
@end

