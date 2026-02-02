//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class TingTaskSnapshot;
@protocol TingRecentServiceListener;

@protocol TingRecentService <NSObject, UnitRCBaseProtocol>
- (void)checkSwitchPlayTask:(int)arg1 scene:(int)arg2;
- (void)dispatchRecentTape:(TingTaskSnapshot *)arg1;
- (void)clearRecent;
- (_Bool)removeAllListener;
- (_Bool)addListener:(id <TingRecentServiceListener>)arg1;
@end

