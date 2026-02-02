//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "TingPlayerStateService-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData;
@protocol TingPlayerStateClient;

@protocol TingPlayer <NSObject, UnitRCBaseProtocol, TingPlayerStateService>
- (void)setVolume:(float)arg1;
- (void)removeAssociatedPlayerStateListener:(id <TingPlayerStateClient>)arg1;
- (void)addAssociatedPlayerStateListener:(id <TingPlayerStateClient>)arg1;
- (void)stopLastPlayerCore;
- (void)holdLastPlayerCore;
- (void)update:(NSData *)arg1;
- (void)setPlayRate:(float)arg1;
- (void)seek:(long long)arg1;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)play:(NSData *)arg1;
@end

