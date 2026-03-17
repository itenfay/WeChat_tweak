//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "TingPlayTaskControllerListener-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol TingPlayTaskController, TingPlayerShutdownListener;

@protocol TingPlayerShutdownController <NSObject, UnitRCBaseProtocol, TingPlayTaskControllerListener>
- (void)removeShutdownListener:(id <TingPlayerShutdownListener>)arg1;
- (void)addShutdownListener:(id <TingPlayerShutdownListener>)arg1;
- (void)setShutdown:(int)arg1 minLater:(unsigned long long)arg2;
- (unsigned long long)getShutdownTargetTimeMs;
- (unsigned long long)getShutdownMinLater;
- (int)getShutdownType;
- (void)setPlayTaskController:(id <TingPlayTaskController>)arg1;
@end

