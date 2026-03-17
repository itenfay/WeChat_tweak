//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol TingPlayApp, TingPlayTask;

@protocol TingPlayAppTaskController <NSObject, UnitRCBaseProtocol>
- (id <TingPlayTask>)playingTask;
- (id <TingPlayApp>)getPlayApp:(int)arg1;
- (id <TingPlayApp>)getOrCreatePlayApp:(int)arg1;
@end

