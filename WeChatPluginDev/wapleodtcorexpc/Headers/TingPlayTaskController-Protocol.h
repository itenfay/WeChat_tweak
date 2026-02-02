//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSString;
@protocol TingPlayTask, TingPlayTaskControllerListener;

@protocol TingPlayTaskController <NSObject, UnitRCBaseProtocol>
- (void)removePlayTaskControllerListener:(id <TingPlayTaskControllerListener>)arg1;
- (void)addPlayTaskControllerListener:(id <TingPlayTaskControllerListener>)arg1;
- (_Bool)makeTaskGlobal:(id <TingPlayTask>)arg1;
- (_Bool)destroyStandaloneTask:(id <TingPlayTask>)arg1;
- (id <TingPlayTask>)createStandaloneTask:(NSString *)arg1;
- (id <TingPlayTask>)createTask:(NSString *)arg1;
- (id <TingPlayTask>)playingTask;
@end

