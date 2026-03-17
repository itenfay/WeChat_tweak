//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol TingPlayTask;

@protocol TingPlayTaskControllerListener <NSObject, UnitRCBaseProtocol>
- (void)onPlayingTaskChanged:(id <TingPlayTask>)arg1;
@end

