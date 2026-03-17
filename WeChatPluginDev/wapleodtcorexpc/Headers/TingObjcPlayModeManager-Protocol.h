//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol TingObjcPlayModeManagerListener;

@protocol TingObjcPlayModeManager <NSObject, UnitRCBaseProtocol>
- (void)getRandomPlaylist:(void (^)(_Bool))arg1;
- (void)setRandomPlaylist:(_Bool)arg1 callback:(void (^)(void))arg2;
- (void)removeListener:(id <TingObjcPlayModeManagerListener>)arg1;
- (void)addListener:(id <TingObjcPlayModeManagerListener>)arg1;
@end

