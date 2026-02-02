//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "TingPlayTaskStateListener-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class TingTaskSnapshot;
@protocol TingPlatformPlayerObj, TingPlayTask;

@protocol TingPlayApp <NSObject, UnitRCBaseProtocol, TingPlayTaskStateListener>
- (void)onAppTerminate;
- (id <TingPlatformPlayerObj>)getPlatformPlayerObj;
- (TingTaskSnapshot *)lastPlayedTape;
- (unsigned long long)lastTerminateTimeStamp;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (int)getAppId;
- (id <TingPlayTask>)getPlayTask;
@end

